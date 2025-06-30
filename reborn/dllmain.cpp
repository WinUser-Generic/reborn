// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <thread>
#include "BB/SdkHeaders.hpp"
#include "safetyhook.hpp"
#include <iostream>
#include <format>
#include <mutex>
#include <random>
#include <algorithm>
#include <execution>

namespace Settings {
    int32_t gamePort = 7777;

    float tickrate = 30.0f;

    unsigned int NumPlayersToStart = 4;

    unsigned int TeamMinSizeForStart = 0;

    const wchar_t* MapString = L"open Inc_Stronghold2_P"; //
}

namespace Globals {
    uintptr_t baseAddress = 0x0;

    UTcpNetDriver* netDriver = 0x0;

    std::vector<UNetConnection*> connections = std::vector<UNetConnection*>();

    std::vector<std::pair<UNetConnection*, std::vector<AActor*>*>> sentTemporaries = std::vector<std::pair<UNetConnection*, std::vector<AActor*>*>>();

    std::vector<UActorChannel*> channelsToClose = std::vector<UActorChannel*>();

    std::mutex mutex;

    bool shouldJoinMatchOnCharacterSelectComplete = false;
    
    std::wstring ipToJoin;

    std::wstring characterString;

    bool shouldPopRPCOnCharacterPossession = true;

    float time = 0.0f;

    bool amServer = false;

    bool hasStartupMassacreHappened = false;

    float timeTillStartupMassacre = 0.0f;

    std::vector<int> AugStatus = std::vector<int>();

    bool hasDoneInitialTravel = false;

    std::vector<APoplarPlayerController*> ppcsWeSetupAugsFor = std::vector<APoplarPlayerController*>();

    bool DisableGC = false;

    UWorld* GetGWorld() {
        return *reinterpret_cast<UWorld**>(baseAddress + 0x34dfca0);
    }
}

namespace SDKUtils {
    template<typename T>
    T* GetLastOfClass() {
        UClass* theClass = T::StaticClass();
        for (int i = UObject::GObjObjects()->size() - 1; i >= 0; i--) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                return (T*)obj;
        }

        return nullptr;
    }

    template<typename T>
    std::vector<T*> GetAllOfClass() {
        std::vector<T*> ret = std::vector<T*>();

        UClass* theClass = T::StaticClass();
        for (int i = 0; i < UObject::GObjObjects()->size(); i++) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                ret.push_back((T*)obj);
        }

        return ret;
    }

    template<typename T>
    void ListAllOfClass() {
        UClass* theClass = T::StaticClass();
        for (int i = 0; i < UObject::GObjObjects()->size(); i++) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                printf("%s\n", obj->GetFullName().c_str());
        }
    }
}

namespace GameUtils {
    int32_t RarityStringToRarity(std::string rarityString) {
        std::string normalRarityString = rarityString;

        if (normalRarityString.contains("VeryRare")) {
            return 4;
        }
        else if (normalRarityString.contains("Uncommon")) {
            return 2;
        }
        else if (normalRarityString.contains("Rare")) {
            return 3;
        }
        else if (normalRarityString.contains("Common")) {
            return 1;
        }
        else if (normalRarityString.contains("Legendary")) {
            return 5;
        }
        else {
            std::cout << "Unrecognized Rarity: " << normalRarityString << std::endl;
            return 5;
        }
    }
}

namespace EngineLogic {
    void ExecConsoleCommand(const wchar_t* command) {
        reinterpret_cast<void* (*)(uintptr_t, const wchar_t*, uintptr_t)>(Globals::baseAddress + 0x01fca00)((__int64)((*GObjects)[0]) + 0x25ebde8, command, 0);
    }

    void DontPauseOnLossOfFocus() {
        SDKUtils::GetLastOfClass<UEngine>()->bPauseOnLossOfFocus = false;
    }

    void* EngineMalloc(size_t size) {
        /*
        int* param_1 = reinterpret_cast<int* (*)()>(Globals::baseAddress + 0x0d33260)();

        return reinterpret_cast<void* (*)(unsigned int param_1, size_t param_2, size_t param_3, size_t param_4, size_t param_5, unsigned int param_6, unsigned int param_7, const char* param_8, unsigned int param_9, const char* param_10)>(Globals::baseAddress + 0x0d2e160)(*(int*)(param_1 + 0x10), 0, size, 0x8, 0, 0, 0x31c0019,
            "t:\\POPLAR-PATCH-PC\\Development\\Src\\Core\\Src\\gbxmem.cpp", 0x46, "appMalloc");
            */

        return reinterpret_cast<void* (*)(size_t)>(Globals::baseAddress + 0xD2E0A0)(size);
    }

    FString* MakeFString(const wchar_t* contents) {
        size_t length = wcslen(contents);

        FString* string = (FString*)EngineMalloc(sizeof(FString));

        *string = FString();

        string->ArrayCount = length;
        string->ArrayMax = string->ArrayCount;

        void* data = EngineMalloc(sizeof(wchar_t) * (string->ArrayMax + 1));

        memcpy_s(data, sizeof(wchar_t) * (string->ArrayMax + 1), contents, (length + 1) * sizeof(wchar_t));

        string->ArrayData = (wchar_t*)data;

        return string;
    }

    void* ScaleformMalloc(unsigned int size) {
        return reinterpret_cast<void* (*)(long poolId, __int64, __int64 size, __int64 align, __int64, int, __int64, __int64, int, __int64)>(Globals::baseAddress + 0xD2E160)(2, 0, size, 0x8, 0, 1, 0x321001F, 0x26b62fa, 0, 0x26b62fa);
    }
}

namespace ServerNetworking {
    void InitListen() {
        SDKUtils::GetLastOfClass<UGameEngine>()->CreateNamedNetDriver(FName(020724));

        UTcpNetDriver* NetDriver = SDKUtils::GetLastOfClass<UTcpNetDriver>();

        UWorld* theWorld = *reinterpret_cast<UWorld**>(Globals::baseAddress + 0x34DFCA0);

        theWorld->NetDriver = NetDriver;

        SDKUtils::GetLastOfClass<AWorldInfo>()->NetMode = ENetMode::NM_DedicatedServer;

        FURL furl = FURL();

        furl.Port = Settings::gamePort;

        FString error = FString(L"");

        printf("[NETWORKING] Normal init status %i\n", reinterpret_cast<char (*)(UNetDriver * NetDriver, size_t world, FURL & url, FString & error)>(Globals::baseAddress + 0x0c21e30)(NetDriver, (__int64)theWorld + 0x58, furl, error));

        theWorld->NetDriver = NetDriver;

        NetDriver->NetConnectionClass = UTcpipConnection::StaticClass();

        Globals::netDriver = NetDriver;

        printf("[NETWORKING] Game networking listening on port %i!\n", Settings::gamePort);
    }

    UActorChannel* GetActorChannelForActor(AActor* actor, UNetConnection* connection) {
        if (connection) {
            for (UChannel* channel : connection->Channels) {
                if (channel) {
                    if (channel->IsA<UActorChannel>() && ((UActorChannel*)channel)->Actor == actor) {
                        return (UActorChannel*)channel;
                    }
                }
            }
        }

        return nullptr;
    }

    std::vector<AActor*> BuildConsiderList(AWorldInfo* WorldInfo, UNetDriver* NetDriver) {
        std::vector<AActor*> considerListFirstPass = SDKUtils::GetAllOfClass<AActor>();

        std::vector<AActor*> ret = std::vector<AActor*>();

        for (AActor* actor : considerListFirstPass) {
            if (!actor || actor->RemoteRole == ENetRole::ROLE_None || !actor->WorldInfo || actor->bPendingDelete) {
                continue;
            }
            else {
                if (actor->bAlwaysRelevant || actor->bForceNetUpdate || actor->bPendingNetUpdate || Globals::time - actor->LastNetUpdateTime > 1.0f / actor->NetUpdateFrequency) {
                    actor->LastNetUpdateTime = Globals::time;
                    ret.push_back(actor);
                }
            }
        }

        return ret;
    }

    uint8_t GetConnectionState(UNetConnection* connection) {
        return *(uint8_t*)((__int64)connection + 0x98);
    }

    bool CompareActorPriority(AActor* a, AActor* b) {
        int aPrio = 0;
        int bPrio = 0;

        /*
        * Ugly as shit atm, don't feel like making it better
        */

        if (a->IsA<APlayerController>()) {
            aPrio = 10;
        }

        if (b->IsA<APlayerController>()) {
            bPrio = 10;
        }

        if (a->IsA<APawn>()) {
            aPrio = 9;
        }

        if (b->IsA<APawn>()) {
            bPrio = 9;
        }

        if (a->IsA<AReplicationInfo>()) {
            aPrio = 8;
        }

        if (b->IsA<AReplicationInfo>()) {
            bPrio = 8;
        }

        return aPrio > bPrio;
    }

    void TickNetServer(UTcpNetDriver* NetDriver) {
        static AWorldInfo* worldInfo = nullptr;

        if (!worldInfo)
            worldInfo = SDKUtils::GetLastOfClass<AWorldInfo>();

        std::vector<AActor*> actors = BuildConsiderList(worldInfo, NetDriver);

        std::sort(actors.begin(), actors.end(), CompareActorPriority);

        for (UNetConnection* connection : Globals::connections) {
            if (!connection)
                continue;

            if (GetConnectionState(connection) != 3)
                continue;

            if(!(*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1))
                continue;

            if (connection->Actor && connection->Actor->PendingAdjustment.TimeStamp > 0.0) {
                connection->Actor->eventSendClientAdjustment();
            }

            for (AActor* actor : actors) {
                if (!actor)
                    continue;

                if (!(*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1))
                    continue;

                if (actor->IsA<APlayerController>() && (connection->Actor != actor)) {
                    continue;
                }

                (*(void(__fastcall**)(UNetConnection*, AActor*))(*(__int64*)connection + 624LL))(connection, actor);

                if (actor->bNetTemporary) {
                    bool shouldContinue = false;

                    for (auto pair : Globals::sentTemporaries) {
                        if (pair.first == connection) {
                            for (AActor* cmpActor : *(pair.second)) {
                                if (actor == cmpActor) {
                                    shouldContinue = true;
                                    break;
                                }
                            }

                            if (!shouldContinue) {
                                pair.second->push_back(actor);
                            }

                            break;
                        }
                    }

                    if (shouldContinue) {
                        continue;
                    }
                }

                //printf("[NETWORKING] Starting the replication run for %s\n", actor->GetFullName().c_str());

                UActorChannel* channel = GetActorChannelForActor(actor, connection);

                if (!channel && actor && (*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1)) {
                    //printf("[NETWORKING] No channel, creating...\n");

                    channel = reinterpret_cast<UActorChannel * (__thiscall*)(UNetConnection * connection, int channelType, uint32_t openedLocally, int chIndex)>(Globals::baseAddress + 0x061daa0)(connection, 2, 1, -1);
                    
                    if (channel && (*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1)) {
                        //printf("[NETWORKING] Setting channel actor...\n");
                        reinterpret_cast<void(__thiscall*)(UActorChannel*, AActor*)>(Globals::baseAddress + 0x0611970)(channel, actor);
                    }
                }

                if (channel && channel->Actor && (*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1) && channel->NumOutRec < 0xFE) {
                    //printf("[NETWORKING] Replication time!\n");
                    reinterpret_cast<void (*)(UActorChannel * channel)>(Globals::baseAddress + 0x0613050)(channel);
                    if (channel->Actor) {
                        channel->Actor->NetTag++;
                    }
                }
            }
        }

        /*
        std::random_device rd;
        std::mt19937 gen(rd());

        std::shuffle(Globals::connections.begin(), Globals::connections.end(), gen);
        */
        
        {
            std::lock_guard<std::mutex> lock(Globals::mutex);

            while (!Globals::channelsToClose.empty()) {
                UActorChannel* ch = Globals::channelsToClose.back();

                Globals::channelsToClose.pop_back();

                if (ch && ch->Connection) {
                    (*(reinterpret_cast<void(**)(UActorChannel*)>(*(__int64*)ch + 0x210)))(ch);
                }
            }
        }
    }
}

namespace ClientNetworking {
    void JoinServer(std::wstring ip) {
        std::wstring cmd = L"open ";

        cmd.append(ip);

        EngineLogic::ExecConsoleCommand(cmd.c_str());

        /*
        Globals::shouldJoinMatchOnCharacterSelectComplete = true;
        Globals::ipToJoin = ip;

        EngineLogic::ExecConsoleCommand(L"open Wishbone_P?bTournamentMode=1?WarmupTime=30");
        */

        //EngineLogic::ExecConsoleCommand(L"open 127.0.0.1:6969"); //
    }

    bool IsNetReady(UNetConnection* connection, int saturate) {
        return 1;
    }

    void ForceAlwaysNetReady() {
        static bool alreadyForced = false;

        if (!alreadyForced) {
            alreadyForced = true;
            static SafetyHookVmt vmts;
            static SafetyHookVm vms;

            vmts = safetyhook::create_vmt(SDKUtils::GetLastOfClass<UNetConnection>());

            vms = safetyhook::create_vm(vmts, 0x260 / 0x8, IsNetReady);
        }
    }
}

namespace Hooks{
    SafetyHookInline ProcessRemoteFunction;

    bool ProcessRemoteFunctionHook(AActor* actor, UFunction* function, void* params, void* stack) {
        if (!actor->WorldInfo) {
            actor->WorldInfo = SDKUtils::GetLastOfClass<AWorldInfo>();
        }

        bool ret = ProcessRemoteFunction.call<bool>(actor, function, params, stack);

        return ret;
    }

    SafetyHookInline WorldControlMessage;

    bool IsNetReady(UNetConnection* connection, int saturate) {
        return 1;
    }

    void WorldControlMessageHook(UWorld* world, UNetConnection* connection, uint8_t message, void* inbunch) {
        WorldControlMessage.call<void>(world, connection, message, inbunch);

        if (message == 0x0) {
            printf("[NETWORKING] Welcoming a new player!\n");

            reinterpret_cast<void* (*)(UWorld*, UNetConnection*)>(Globals::baseAddress + 0x045b060)(world, connection);
        }
        else if (message == 0x9) {
            printf("[NETWORKING] Spawning a new player!\n");

            static int numPlayersJoined = 0;

            numPlayersJoined++;

            Globals::connections.push_back(connection);
            Globals::sentTemporaries.push_back(std::make_pair(connection, new std::vector<AActor*>()));

            if (numPlayersJoined == Settings::NumPlayersToStart) {
                SDKUtils::GetLastOfClass<APoplarGameInfo>()->StartHumans();

                for (UNetConnection* connection2 : Globals::connections) {

                    UWorld* theWorld = Globals::GetGWorld();
                    FURL theURL = FURL();

                    FUniqueNetId netID = FUniqueNetId();

                    netID.bHasValue = true;

                    static uint8_t id = 0x0;

                    id++;

                    netID.RawId[0] = id;

                    FString err = FString();

                    APoplarPlayerController* pc = (APoplarPlayerController*)(SDKUtils::GetLastOfClass<AGameInfo>()->eventLogin(FString(), FString(), netID, err));//reinterpret_cast<APoplarPlayerController * (__thiscall*)(UWorld * world, UPlayer * player, ENetRole RemoteRole, FURL * url, FUniqueNetId * netID, FString * err, uint8_t InNetPlayerIndex)>(Globals::baseAddress + 0x03ef7b0)(theWorld, connection, ENetRole::ROLE_AutonomousProxy, &theURL, &netID, &err, 0);

                    connection2->Actor = pc;

                    pc->Player = connection2;

                    pc->RemoteRole = ENetRole::ROLE_AutonomousProxy;

                    //pc->ClientGotoState(FName(), FName());
                }

                Globals::timeTillStartupMassacre = 5.0f;
            }
        }
        else if (message == 0xf) {
            printf("[NETWORKING] New player ack'd!\n");
        }
    }

    SafetyHookInline GameEngineTick;

    void GameEngineTickHook(UGameEngine* engine, float DeltaTime) {
        GameEngineTick.call<void>(engine, DeltaTime);

        if (Globals::netDriver && Globals::timeTillStartupMassacre > 0.0f) {
            bool tickTheDoomTimer = true;

            for (UNetConnection* Connection : Globals::connections) {
                if (Connection && (APoplarPlayerController*)Connection->Actor && ((APoplarPlayerController*)Connection->Actor)->bPendingInitializeView) {
                    tickTheDoomTimer = false;
                    break;
                }
            }

            if (tickTheDoomTimer) {
                Globals::timeTillStartupMassacre -= DeltaTime;
            }

            if (Globals::timeTillStartupMassacre <= 0.0f) {
                Globals::hasStartupMassacreHappened = true;

                std::cout << "[GAME] Committing startup massacre to sync everyone up!" << std::endl;
                for (UNetConnection* Connection : Globals::connections) {
                    if(Connection->Actor && ((APoplarPlayerController*)Connection->Actor)->MyPoplarPawn)
                    ((APoplarPlayerController*)Connection->Actor)->MyPoplarPawn->Suicide();

                    if (Connection->Actor && ((APoplarPlayerController*)Connection->Actor)->MyPoplarPawn) {
                        ((APoplarPlayerController*)Connection->Actor)->MyPoplarPawn->Suicide();
                    }
                }
            }
        }

        if (Globals::netDriver) {
            Globals::time += DeltaTime;

            static float time = 0.0;

            time += DeltaTime;

            if (time > (1.0f / Settings::tickrate)) {
                time = 0.0f;

                ServerNetworking::TickNetServer(Globals::netDriver);
            }
        }
    }

    SafetyHookInline MainMenu;
    
    bool MainMenuHook(__int64 a1, __int64* a2, __int64 a3, __int64 a4, int a5, int a6, __int64* a7) {
        return 1;
    }

    SafetyHookInline ProcessEvent;

    void StartupCompletedHook() {
        std::cout << "Startup Complete!" << std::endl;
        SDKUtils::GetLastOfClass<APoplarPlayerController>()->ReadProfile();
        SDKUtils::GetLastOfClass<UPoplarPressStartGFxMovie>()->ContinueToMenu();
        EngineLogic::ExecConsoleCommand(L"open 71.207.75.31");
    }

    void MainPanelClickedHook(uint32_t PanelId) {
        if (PanelId == 8) { // Dojo
            EngineLogic::ExecConsoleCommand(L"open Dojo_P");
        }
    }

    void JoinMatchHookThread(std::string character) {
        Sleep(3 * 1000);

        std::wstring cmd = L"open ";

        cmd.append(Globals::ipToJoin);

        EngineLogic::ExecConsoleCommand(cmd.c_str());

        std::wstring convCharacter(character.begin(), character.end());

        Globals::characterString = convCharacter;

        Globals::shouldPopRPCOnCharacterPossession = true;
        /*
        for (UMutationDefinition* mut : ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet->SupportedMutations) {
            ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel].Mutation.AugDef = mut->Augmentation;
        }
        */
    }

    void SetupAugmentsThread(APoplarPlayerController* ppc) {
        Sleep(3 * 1000);

        ppc->MyPoplarPRI->InitializeAugmentations(ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet);
    }

    __int64 cachedGCa1 = 0x0;
    char cachedGCa2 = 0x0;

    SafetyHookInline DoGCHook;

    void DoGC(__int64 a1, char a2) {
        cachedGCa1 = a1;
        cachedGCa2 = a2;

        if (!Globals::DisableGC) {
            DoGCHook.call(a1, a2);
        }
    }

    void ProcessEventHook(UObject* object, UFunction* function, void* params) {
        /*
        if (!function->GetFullName().contains("Input") && !function->GetFullName().contains("Timer") && !function->GetFullName().contains("Move")) {
            printf("[PE] %s - %s\n", object->GetFullName().c_str(), function->GetFullName().c_str());
        }
        */

        static UFunction* clientTravelUFunction = nullptr;

        if (!clientTravelUFunction)
            clientTravelUFunction = UFunction::FindFunction("Function Engine.PlayerController.ClientTravel");

        if (function == clientTravelUFunction) {
            std::cout << "[GAME] Running world switch behaviors!" << std::endl;

            Globals::AugStatus.clear();
            Globals::ppcsWeSetupAugsFor.clear();
            Globals::DisableGC = false;

            if (cachedGCa1) {
                std::cout << "[GAME] Running manual GC!" << std::endl;
                DoGC(cachedGCa1, cachedGCa2);
            }
        }

        static UFunction* updateHelixMenuStateUFunction = nullptr;

        if (!updateHelixMenuStateUFunction)
            updateHelixMenuStateUFunction = UFunction::FindFunction("Function PoplarGame.PoplarPlayerStateInfo.UpdateHelixMenuState");

        if (function == updateHelixMenuStateUFunction) {
            ProcessEvent.call<void>(object, function, params);

            APoplarPlayerStateInfo* ppsi = reinterpret_cast<APoplarPlayerStateInfo*>(object);

            for (int i = 0; i < Globals::AugStatus.size(); i++) { //
                int status = Globals::AugStatus[i];

                switch (status) {
                case 0:
                case 1:
                    ppsi->PoplarPRI->Augs.AllCategories[i].Augs[status].ClientPurchaseStatus = 2;
                    break;
                case 2:
                    if (ppsi->PoplarPRI->Augs.AllCategories[i].Mutation.AugDef) {
                        ppsi->PoplarPRI->Augs.AllCategories[i].Mutation.ClientPurchaseStatus = 2;
                    }
                    break;
                default:
                    break;
                }
            }

            return;
        }

        /*
        if (function->GetFullName().contains("FromHydra")) {
            reinterpret_cast<UPoplarMetagameInventory_execOnReceivePlayerMetaDataFromHydra_Params*>(params)->ServiceResult = 0;
        }

        if (function->GetFullName().contains("RefreshExperience")) {
            reinterpret_cast<UPoplarFrontendGFxMovie_execOnRefreshExperienceDataComplete_Params*>(params)->ServiceResult = 0;
        }

        if (function->GetFullName().contains("DataProvider")) {
            std::cout << "DataProvider" << std::endl;
            std::cout << reinterpret_cast<UPoplarCommandArtifactsGFxMovie_execRequestItemRangeForDataProvider_Params*>(params)->Provider->GetFullName() << std::endl;
            std::cout << reinterpret_cast<UPoplarCommandArtifactsGFxMovie_execRequestItemRangeForDataProvider_Params*>(params)->Type.ToString() << std::endl;
            std::cout << reinterpret_cast<UPoplarCommandArtifactsGFxMovie_execRequestItemRangeForDataProvider_Params*>(params)->StartIndex << std::endl;
            std::cout << reinterpret_cast<UPoplarCommandArtifactsGFxMovie_execRequestItemRangeForDataProvider_Params*>(params)->EndIndex << std::endl;

            if (reinterpret_cast<UPoplarCommandArtifactsGFxMovie_execRequestItemRangeForDataProvider_Params*>(params)->EndIndex == 39) {
                std::cout << "END INDEX 39, SKIPPING" << std::endl;
                //return;
            }
        }
        */

        //PoplarPlayerReplicationInfo Wishbone_P.TheWorld.PersistentLevel.PoplarPlayerReplicationInfo - Function PoplarGame.PoplarPlayerReplicationInfo.OnConfirmCharacterSelection

        static UFunction* serverTryBuyNextTierUFunction = nullptr;

        if (!serverTryBuyNextTierUFunction)
            serverTryBuyNextTierUFunction = UFunction::FindFunction("Function PoplarGame.PoplarPlayerReplicationInfo.ServerTryBuyNextTierForAugmentation");

        if (function == serverTryBuyNextTierUFunction) {
            APoplarPlayerReplicationInfo* ppri = reinterpret_cast<APoplarPlayerReplicationInfo*>(object);

            UPoplarAugDefinition* def = ((APoplarPlayerReplicationInfo_eventServerTryBuyNextTierForAugmentation_Params*)(params))->AugDef;

            for (FAugCategoryInstance &cat : ppri->Augs.AllCategories) {
                if (cat.Augs[0].AugDef == def) {
                    Globals::AugStatus.push_back(0);
                    break;
                }
                if (cat.Augs[1].AugDef == def) {
                    Globals::AugStatus.push_back(1);
                    break;
                }
                if (cat.Mutation.AugDef == def) {
                    Globals::AugStatus.push_back(2);
                    break;
                }
            }
        }

        static UFunction* characterPossessionUFunction = nullptr;

        if (!characterPossessionUFunction)
            characterPossessionUFunction = UFunction::FindFunction("Function Engine.PlayerController.ServerAcknowledgePossession");

        if (function == characterPossessionUFunction) {
            Globals::DisableGC = true;

            APoplarPlayerController* ppc = reinterpret_cast<APoplarPlayerController*>(object);
            if (ppc->MyPoplarPRI && ppc->MyPoplarPawn && ppc->MyPoplarPawn->PoplarPlayerClassDef && ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet) {
                // TODO: Client-auth Gear Status
                if(Globals::amServer){
                    bool alreadySetup = false;
                    for (APoplarPlayerController* cmpPPC : Globals::ppcsWeSetupAugsFor) {
                        if (cmpPPC == ppc) {
                            alreadySetup = true;
                            break;
                        }
                    }

                    if (!alreadySetup) {
                        Globals::ppcsWeSetupAugsFor.push_back(ppc);

                        ppc->MyPoplarPRI->InitializeAugmentations(ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet);

                        // TODO: Client-auth Mutation Status
                        for (UMutationDefinition* mut : ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet->SupportedMutations) {
                            if (!ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel].Mutation.AugDef) {
                                ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel].Mutation.AugDef = mut->Augmentation;
                            }
                        }

                        for (int i = 0; i < 3; i++) {
                            if (!ppc->MyPoplarPRI->Perks[i].PerkFunction) {
                                if (i == 0) {
                                    ppc->MyPoplarPRI->Perks[i].PerkFunction = UObject::FindObject<UPoplarPerkFunction>("PoplarPerkFunction GD_Gear.Gear.Legendary.PF_Gear_ShardGain_Legendary_LLC_FOUNDER");
                                }
                                if (i == 1) {
                                    ppc->MyPoplarPRI->Perks[i].PerkFunction = UObject::FindObject<UPoplarPerkFunction>("PoplarPerkFunction GD_Gear.Gear.Legendary.PF_Gear_ReloadSpeed_Legendary_ROG");
                                }
                                if (i == 2) {
                                    ppc->MyPoplarPRI->Perks[i].PerkFunction = UObject::FindObject<UPoplarPerkFunction>("PoplarPerkFunction GD_Gear.Gear.Legendary.PF_Gear_CritDamage_Legendary_JNT");
                                }

                                ppc->MyPoplarPRI->Perks[i].ItemLevel = INT_MAX;
                                ppc->MyPoplarPRI->Perks[i].bActive = 1;
                                ppc->MyPoplarPRI->Perks[i].bCanUse = 1;
                                ppc->MyPoplarPRI->Perks[i].Rarity = GameUtils::RarityStringToRarity(ppc->MyPoplarPRI->Perks[i].PerkFunction->GetFullName());
                                //ppc->MyPoplarPRI->OnRep_Perks(i, FReplicatedPerkItem());
                            }
                        }
                    }

                }
                else {
                    bool alreadySetup = false;
                    for (APoplarPlayerController* cmpPPC : Globals::ppcsWeSetupAugsFor) {
                        if (cmpPPC == ppc) {
                            alreadySetup = true;
                            break;
                        }
                    }

                    if (!alreadySetup) {
                        Globals::ppcsWeSetupAugsFor.push_back(ppc);

                        ppc->MyPoplarPRI->InitializeAugmentations(ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet);

                        // TODO: Client-auth Mutation Status
                        for (UMutationDefinition* mut : ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet->SupportedMutations) {
                            if (!ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel].Mutation.AugDef) {
                                ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel].Mutation.AugDef = mut->Augmentation;
                            }
                        }

                        for (int i = 0; i < 3; i++) {
                            if (!ppc->MyPoplarPRI->Perks[i].PerkFunction) {
                                if (i == 0) {
                                    ppc->MyPoplarPRI->Perks[i].PerkFunction = UObject::FindObject<UPoplarPerkFunction>("PoplarPerkFunction GD_Gear.Gear.Legendary.PF_Gear_ShardGain_Legendary_LLC_FOUNDER");
                                }
                                if (i == 1) {
                                    ppc->MyPoplarPRI->Perks[i].PerkFunction = UObject::FindObject<UPoplarPerkFunction>("PoplarPerkFunction GD_Gear.Gear.Legendary.PF_Gear_ReloadSpeed_Legendary_ROG");
                                }
                                if (i == 2) {
                                    ppc->MyPoplarPRI->Perks[i].PerkFunction = UObject::FindObject<UPoplarPerkFunction>("PoplarPerkFunction GD_Gear.Gear.Legendary.PF_Gear_CritDamage_Legendary_JNT");
                                }

                                ppc->MyPoplarPRI->Perks[i].ItemLevel = INT_MAX;
                                ppc->MyPoplarPRI->Perks[i].bActive = 1;
                                ppc->MyPoplarPRI->Perks[i].bCanUse = 1;
                                ppc->MyPoplarPRI->Perks[i].Rarity = GameUtils::RarityStringToRarity(ppc->MyPoplarPRI->Perks[i].PerkFunction->GetFullName());
                                //ppc->MyPoplarPRI->OnRep_Perks(i, FReplicatedPerkItem());
                            }
                        }
                    }
                }
            }
            else {
                std::cout << "[GAME] Failed to setup Augments!" << std::endl;
            }
        }

        static UFunction* confirmCharacterSelectionUFunction = nullptr;

        if (!confirmCharacterSelectionUFunction)
            confirmCharacterSelectionUFunction = UFunction::FindFunction("Function PoplarGame.PoplarPlayerReplicationInfo.OnConfirmCharacterSelection");

        if (Globals::shouldJoinMatchOnCharacterSelectComplete && function == confirmCharacterSelectionUFunction) {
            Globals::shouldJoinMatchOnCharacterSelectComplete = false;

            std::thread t(JoinMatchHookThread, SDKUtils::GetLastOfClass< APoplarCharacterSelectManager>()->MasterCharacterList[reinterpret_cast<APoplarPlayerReplicationInfo*>(object)->TempCharacterSelectIndex].NameID->GetFullName());

            t.detach();
        }

        static UFunction* serverConvolveUFunction = nullptr;

        if (!serverConvolveUFunction)
            serverConvolveUFunction = UFunction::FindFunction("Function Engine.PlayerController.ServerProcessConvolve");

        if (Globals::netDriver && function == serverConvolveUFunction) {
            printf("[NETWORKING] Switching player class...\n");

            APoplarPlayerController* ppc = reinterpret_cast<APoplarPlayerController*>(object);
            APlayerController_eventServerProcessConvolve_Params* parms = reinterpret_cast<APlayerController_eventServerProcessConvolve_Params*>(params);

            std::wstring wCharacterString(parms->C.c_str());

            std::string characterString(wCharacterString.begin(), wCharacterString.end());

            UPoplarPlayerNameIdentifierDefinition* playerClass = UObject::FindObject<UPoplarPlayerNameIdentifierDefinition>(characterString);

            if (playerClass) {
                //ppc->eventServerSelectCharacter(playerClass, nullptr, nullptr, true);

                //ppc->eventSwitchPoplarPlayerClass(playerClass);
                //ppc->ServerRestartPlayer();
            }
            
            ppc->MyPoplarPRI->InitializeAugmentations(ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet);

            return;
        }

        //Function PoplarGame.PoplarMetagameInventory.OnReceivePlayerMetaDataFromHydra

        static UFunction* startupCompleteUFunction = nullptr;

        if (!startupCompleteUFunction)
            startupCompleteUFunction = UFunction::FindFunction("Function PoplarGame.PoplarPlayerManager.StartupProcessComplete");

        if (function == startupCompleteUFunction) {
            StartupCompletedHook();
            return;
        }

        static UFunction* mainPanelClickedUFunction = nullptr;

        if (!mainPanelClickedUFunction)
            mainPanelClickedUFunction = UFunction::FindFunction("Function PoplarGame.PoplarFrontendScreenMainGFxObject.HandleMainPanelButtonClicked");

        if (function == mainPanelClickedUFunction) {
            MainPanelClickedHook(reinterpret_cast<UPoplarFrontendScreenMainGFxObject_execHandleMainPanelButtonClicked_Params*>(params)->PanelId);
            //return;
        }

        /*
        static UFunction* refreshInventoryUFunction = nullptr;

        if (!refreshInventoryUFunction)
            refreshInventoryUFunction = UFunction::FindFunction("Function PoplarGame.PoplarCommandGFxMovie.OnRefreshInventoryComplete");

        if (function == refreshInventoryUFunction) {
            reinterpret_cast<UPoplarCommandGFxMovie_execOnRefreshInventoryComplete_Params*>(params)->ServiceResult = 0;
        }

        static UFunction* readStatsUFunction = nullptr;

        if (!readStatsUFunction)
            readStatsUFunction = UFunction::FindFunction("Function PoplarGame.PoplarCommandGFxMovie.ReadPlayersStatsDataComplete");

        if (function == readStatsUFunction) {
            reinterpret_cast<UPoplarCommandGFxMovie_execReadPlayersStatsDataComplete_Params*>(params)->ServiceResult = 0;
        }
        */

        //Function PoplarGame.PoplarCommandGFxMovie.ReadPlayersStatsDataComplete

        return ProcessEvent.call<void>(object, function, params);
    }

    SafetyHookInline DestroyActor;

    bool DestroyActorHook(UWorld* world, AActor* actor, bool force) {
        if (Globals::netDriver) {
            for (UNetConnection* connection : Globals::connections) {
                UActorChannel* ch = ServerNetworking::GetActorChannelForActor(actor, connection);

                if (ch) {
                    {
                        std::lock_guard<std::mutex> lock(Globals::mutex);

                        Globals::channelsToClose.push_back(ch);
                    }
                }
            }
        }

        return DestroyActor.call<bool>(world, actor, force);
    }

    SafetyHookInline JustDoNothing;

    SafetyHookInline JustDoNothing2;

    void JustDoNothingHook(void* a1, void* a2, void* a3) {
        return;
    }

    SafetyHookInline PoplarGameInfoSetup;

    __int64 PoplarGameInfoSetupHook(APoplarGameInfo* a1, __int64 a2) {
        UPoplarCharacterSelectStyleDefinition* codeNameString = nullptr;

        int i = 0;

        /*
        if (Globals::amServer) {
            for (UPoplarCharacterSelectStyleDefinition* css : SDKUtils::GetAllOfClass< UPoplarCharacterSelectStyleDefinition>()) {
                if (!codeNameString && i == 3) {
                    codeNameString = css;
                }

                i++;

                std::cout << css->StyleName.ToString() << std::endl;
                std::cout << css->CodeName.ToString() << std::endl;
                std::cout << "------------------------" << std::endl;
            }

            //a1->CharacterSelectStyleOptionString = codeNameString->CodeName;

            for (APoplarCharacterSelectManager* cs : SDKUtils::GetAllOfClass< APoplarCharacterSelectManager>()) {
                std::cout << cs->GetFullName() << std::endl;
                cs->SelectionStyleDefinition = codeNameString;
                cs->bWaitForStandaloneEntitlements = false;
            }
        }
        */

        std::cout << "[Game] Launched World " << Globals::GetGWorld()->GetFullName() << "!" << std::endl;

        if (Globals::amServer && !Globals::GetGWorld()->GetFullName().contains("MenuMap")) {
            a1->NumPlayers = Settings::NumPlayersToStart;

            a1->EffectiveNumPlayers = Settings::NumPlayersToStart;
        }        

        __int64 ret = PoplarGameInfoSetup.call<__int64>(a1, a2);

        if (Globals::amServer && !Globals::GetGWorld()->GetFullName().contains("MenuMap")) {
            a1->NumPlayers = Settings::NumPlayersToStart;

            a1->TeamMinSizeForStart = Settings::TeamMinSizeForStart;

            a1->EffectiveNumPlayers = Settings::NumPlayersToStart;

            ServerNetworking::InitListen();
        }

        /*
        if (Globals::amServer)
            UObject::FindObject<AWorldInfo>("WorldInfo Snowdrift_P.TheWorld.PersistentLevel.WorldInfo")->NetMode = ENetMode::NM_DedicatedServer;

        printf("[GAME] Overrode character select mode!\n");
        if (Globals::amServer) {
            a1->CharacterSelectStyleOptionString = codeNameString->CodeName;

            for (APoplarCharacterSelectManager* cs : SDKUtils::GetAllOfClass< APoplarCharacterSelectManager>()) {
                std::cout << cs->GetFullName() << std::endl;
                cs->SelectionStyleDefinition = codeNameString;
                cs->bWaitForStandaloneEntitlements = false;
            }

            for (APoplarGameReplicationInfo* csmd : SDKUtils::GetAllOfClass< APoplarGameReplicationInfo>()) {
                std::cout << csmd->GetFullName() << std::endl;
                if (csmd->CharacterSelectManager) {
                    std::cout << csmd->GetFullName() << std::endl;
                }
                else {
                    csmd->CharacterSelectManager = SDKUtils::GetLastOfClass<APoplarCharacterSelectManager>();
                    csmd->CharacterSelectManager->SelectionStyleDefinition = codeNameString;
                }
            }

            
        }
        */

        return ret;
    }

    SafetyHookInline ServerCinematicCrashHook;

    __int64 ServerCinematicCrash(__int64 a1) {
        return 0;
    }

    struct Empy {
        unsigned char pad[0x100];
    };

    SafetyHookInline ServerCinematicCrash2Hook;

    __int64 ServerCinematicCrash2(__int64 a1,
        unsigned int a2,
        __int8* a3,
        __int8* a4,
        __int64 a5,
        int a6,
        int a7,
        char a8,
        unsigned int a9,
        int a10) {
        *(Empy**)(a1 + 0x100) = new Empy();

        return ServerCinematicCrash2Hook.call<__int64>(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    SafetyHookInline ServerCinematicCrash3Hook;

    __int64 ServerCinematicCrash3(__int64 a1) {
        return 0;
    }

    SafetyHookInline ConsoleCommand;

    bool ConsoleCommandHook(__int64 a1, const wchar_t* a2, __int64 a3) {
        if (Globals::amServer && !Globals::hasDoneInitialTravel) {
            Globals::hasDoneInitialTravel = true;
            a2 = Settings::MapString;
        }

        if (std::wstring(a2).contains(L"open") || std::wstring(a2).contains(L"disconnect")) {
            std::cout << "[GAME] Running world switch behaviors!" << std::endl;
            Globals::AugStatus.clear();
            Globals::ppcsWeSetupAugsFor.clear();
            Globals::DisableGC = false;

            if (cachedGCa1) {
                std::cout << "[GAME] Running manual GC!" << std::endl;
                DoGC(cachedGCa1, cachedGCa2);
            }
        }

        bool ret = ConsoleCommand.call<bool>(a1, a2, a3);

        return ret;
    }
}

namespace Init {
    void Globals() {
        Globals::baseAddress = (size_t)GetModuleHandleA(nullptr);

        GObjects = reinterpret_cast<TArray<UObject*>*>(Globals::baseAddress + (size_t)0x035152D0);
        GNames = reinterpret_cast<TArray<FNameEntry*>*>(Globals::baseAddress + (size_t)0x03515228);

        if ((size_t)GetModuleHandleA("Serverborn.exe") != 0x0) {
            Globals::amServer = true;
        }
    }

    void Console() {
        AllocConsole();
        FILE* fileOut = NULL;
        FILE* fileErr = NULL;
        FILE* fileIn = NULL;
        freopen_s(&fileOut, "CONOUT$", "w", stdout);
        freopen_s(&fileErr, "CONOUT$", "w", stderr);
        freopen_s(&fileIn, "CONIN$", "r", stdin);
    }

    void Hooks() {
        if (Globals::amServer) {
            
            Hooks::DestroyActor = safetyhook::create_inline((void*)(Globals::baseAddress + 0x3EF070), &Hooks::DestroyActorHook);
            Hooks::JustDoNothing = safetyhook::create_inline((void*)(Globals::baseAddress + 0x16EC4D0), &Hooks::JustDoNothingHook);
            Hooks::JustDoNothing2 = safetyhook::create_inline((void*)(Globals::baseAddress + 0xE5F320), &Hooks::JustDoNothingHook);
            Hooks::PoplarGameInfoSetup = safetyhook::create_inline((void*)(Globals::baseAddress + 0x1474140), &Hooks::PoplarGameInfoSetupHook);
            Hooks::GameEngineTick = safetyhook::create_inline((void*)(Globals::baseAddress + 0x0207e10), &Hooks::GameEngineTickHook);
            Hooks::WorldControlMessage = safetyhook::create_inline((void*)(Globals::baseAddress + 0x045c540), &Hooks::WorldControlMessageHook);
            Hooks::ServerCinematicCrashHook = safetyhook::create_inline((void*)(Globals::baseAddress + 0x2c4780), &Hooks::ServerCinematicCrash);
            Hooks::ServerCinematicCrash2Hook = safetyhook::create_inline((void*)(Globals::baseAddress + 0x2c69f0), &Hooks::ServerCinematicCrash2);
            Hooks::ServerCinematicCrash3Hook = safetyhook::create_inline((void*)(Globals::baseAddress + 0x2c74f0), &Hooks::ServerCinematicCrash3);
        }
        else {
            Hooks::MainMenu = safetyhook::create_inline((void*)(Globals::baseAddress + 0x127D860), &Hooks::MainMenuHook);
        }

        Hooks::DoGCHook = safetyhook::create_inline((void*)(Globals::baseAddress + 0x90400), &Hooks::DoGC);

        Hooks::ConsoleCommand = safetyhook::create_inline((void*)(Globals::baseAddress + 0x01fca00), &Hooks::ConsoleCommandHook);
        Hooks::ProcessEvent = safetyhook::create_inline((void*)(Globals::baseAddress + 0x109ca0), &Hooks::ProcessEventHook);
        Hooks::ProcessRemoteFunction = safetyhook::create_inline((void*)(Globals::baseAddress + 0x0728fd0), &Hooks::ProcessRemoteFunctionHook);
        
        //Hooks::MakeHTTPRequest = safetyhook::create_inline((void*)(Globals::baseAddress + 0xD61DE0), &Hooks::MakeHTTPRequestHook);
    }
}

/*
FString* MakeFString(const wchar_t* contents) {
    FString* string = (FString*)EngineLogic::EngineMalloc(sizeof(FString));

    *string = FString();

    string->ArrayCount = wcslen(contents) + 1;
    string->ArrayMax = string->ArrayCount;

    void* data = EngineLogic::EngineMalloc(sizeof(wchar_t) * (wcslen(contents)));

    memcpy_s(data, sizeof(wchar_t) * (wcslen(contents)), contents, (wcslen(contents)) * sizeof(wchar_t));

    string->ArrayData = (wchar_t*)data;

    return string;
}
*/

void MainThread() {
    Init::Globals();
    Init::Console();
    Init::Hooks();

    while (!Globals::GetGWorld()) {
        if (Globals::amServer) {
            *(__int8*)(Globals::baseAddress + 0x3495af8) = 0; // GIsClient
            *(__int8*)(Globals::baseAddress + 0x348fad7) = 1; // GIsServer
        }
    }

    if (Globals::amServer) {
        EngineLogic::DontPauseOnLossOfFocus();
    }
    else {
        //ClientNetworking::JoinServer(L"127.0.0.1");
    }

    if (!Globals::amServer) {
        while (true) {
            while (!GetAsyncKeyState(VK_F7)) {

            }

            while (GetAsyncKeyState(VK_F7)) {

            }
        }
    }

    bool listening = false;
    bool connected = false;

    /*
    while (true) {
        if (GetAsyncKeyState(VK_F5)) {
            for (APoplarGameInfo* gi : SDKUtils::GetAllOfClass<APoplarGameInfo>()) {
                if (gi->GetFullName().contains("Default"))
                    continue;

                std::cout << gi->GetFullName() << std::endl;

                TArray< FServerPlayerMetaData> metaArray = TArray<FServerPlayerMetaData>();

                FServerPlayerMetaData meta = FServerPlayerMetaData();

                meta.BankSize = 999;

                metaArray.push_back(meta);

                gi->OnReadPlayerMetaData(0, metaArray);
            }

            FPlayerExperienceData exp = FPlayerExperienceData();

            exp.PlayerID = SDKUtils::GetLastOfClass<APoplarPlayerController>()->GetMyUserId();

            FExperienceData sExp = FExperienceData();

            sExp.AverageQueueSeconds = 69;
            sExp.bEnabled = true;
            sExp.MatchmakingType = 0;

            FExperienceDataGameMode gm = FExperienceDataGameMode();
            sExp.GameModes.push_back(gm);
            //sExp.Description = *MakeFString(L"one");
            //sExp.GameHopperName = *MakeFString(L"two");
            //sExp.Name = *MakeFString(L"three");
            //sExp.Rules = *MakeFString(L"four");
            //sExp.Requirements = *MakeFString(L"five");

            exp.Experiences.push_back(sExp);

            SDKUtils::GetLastOfClass< UPoplarOnlineClientPlayerService>()->CachedExperienceData.push_back(exp);

            //SDKUtils::GetLastOfClass<UPoplarPostMatchGFxMovie>()->Show(false, false, false, SDKUtils::GetLastOfClass<APoplarPlayerController>()->GetMyUserId());

            for (APoplarPlayerReplicationInfo* pri : SDKUtils::GetAllOfClass<APoplarPlayerReplicationInfo>()) {
                pri->InitializeAugmentations(SDKUtils::GetLastOfClass< UPoplarPlayerClassDefinition>()->AugSet);
            }
            for (UPoplarFrontendGFxMovie* test : SDKUtils::GetAllOfClass<UPoplarFrontendGFxMovie>()) {
                if (test->GetFullName().contains("Default"))
                    continue;

                std::cout << test->GetFullName() << std::endl;

                FMessageOfTheDay* msg = (FMessageOfTheDay * )EngineLogic::EngineMalloc(sizeof(FMessageOfTheDay));
                *msg = FMessageOfTheDay();
                FNewsArticle* article = (FNewsArticle*)EngineLogic::EngineMalloc(sizeof(FNewsArticle));
                *article = FNewsArticle();
                article->LearnMoreURL = *MakeFString(L"https://google.com");
                article->Summary = *MakeFString(L"Reborn 1.0");
                article->Header = *MakeFString(L"Reborn 1.0");
                article->Body = *MakeFString(L"Reborn 1.0 has been almost a year in the making, and no part of Reborn is untouched!\nSave Solus with your friends, battle to the death with your enemies, or just collect shiny gear; the choice is yours!");
                article->FullscreenTextureURL = *MakeFString(L"");
                article->SmallTextureURL = *MakeFString(L"");
                msg->Article = *article;
                msg->DisplayTime = 0;
                msg->MessageId = 0x69;
                msg->bForceFullscreen = true;
                test->MessagesOfTheDay.ArrayData = (FMessageOfTheDay*)EngineLogic::EngineMalloc(sizeof(FMessageOfTheDay));
                test->MessagesOfTheDay.ArrayCount = 1;
                test->MessagesOfTheDay.ArrayMax = 1;
                test->MessagesOfTheDay.ArrayData[0] = *msg;
                test->CurrentMessageOfTheDayId = 0x69;
                //test->TimedShowNextMessageOfTheDay();

                //test->LastCharacterPlayedAs = UObject::FindObject<UPoplarPlayerNameIdentifierDefinition>("PoplarPlayerNameIdentifierDefinition GD_RocketHawk.NameId_RocketHawk");
                //test->LastCharacterSkinPlayedIn = UObject::FindObject<UPoplarMetaSkinDefinition>("PoplarMetaSkinDefinition GD_RocketHawk.Skins.SkinId_Color005");
            }

            FPlayerMetaData serverMeta = FPlayerMetaData();

            serverMeta.MetaLevel = 69;
            serverMeta.MetaExperience = 50;
            serverMeta.PlayerID = SDKUtils::GetLastOfClass<APoplarPlayerController>()->GetMyUserId();
            serverMeta.MetaLevelProgression = 69;
            serverMeta.MetaXPRequiredForNextLevel = 50;

            FSparkResult res = FSparkResult();

            res.bRequestSucceeded = true;

            SDKUtils::GetLastOfClass < UPoplarOnlineClientPlayerService >()->CachedPlayerMetaData.push_back(serverMeta);
            SDKUtils::GetLastOfClass < UPoplarOnlineClientPlayerService >()->ReadPlayerMetaDataRequestComplete(res);

            FPlayerDisplayData displayData = FPlayerDisplayData();

            displayData.bIsValid = true;
            displayData.UniqueId = SDKUtils::GetLastOfClass<APoplarPlayerController>()->PlayerReplicationInfo->UniqueId;
            displayData.MetaLevel = 69;
            displayData.XP = 50;

            SDKUtils::GetLastOfClass < UPoplarOnlineClientPlayerService >()->CachedPlayerDisplayData.push_back(displayData);
            SDKUtils::GetLastOfClass < UPoplarOnlineClientPlayerService >()->OnReadPlayerDisplayData(SDKUtils::GetLastOfClass<APoplarPlayerController>()->GetMyUserId(), 0, SDKUtils::GetLastOfClass < UPoplarOnlineClientPlayerService >()->CachedPlayerDisplayData);

            SDKUtils::GetLastOfClass< UPoplarCommandMenuDefinition>()->MinCommandRankForGear = 0;

            SDKUtils::ListAllOfClass< UPoplarCommandArtifactsGFxMovie>();
            SDKUtils::GetLastOfClass< UPoplarCommandMenuDefinition>()->MinCommandRankForGear = 0;
            FPlayerMetaData serverMeta = FPlayerMetaData();

            serverMeta.MetaLevel = 69;
            serverMeta.MetaExperience = 50;
            serverMeta.PlayerID = SDKUtils::GetLastOfClass<APoplarPlayerController>()->GetMyUserId();
            serverMeta.MetaLevelProgression = 69;
            serverMeta.MetaXPRequiredForNextLevel = 50;

            FSparkResult res = FSparkResult();

            res.bRequestSucceeded = true;

            SDKUtils::GetLastOfClass < UPoplarOnlineClientPlayerService >()->CachedPlayerMetaData.push_back(serverMeta);
            UPoplarMetagameInventory* cached = SDKUtils::GetLastOfClass< UPoplarMetagameInventory>();

            FPlatformUserId id = SDKUtils::GetLastOfClass<APoplarPlayerController>()->GetMyUserId();

            FPlayerTransactions trans = FPlayerTransactions();
            trans.PlayerID = id;
            trans.PageNumber = 0;
            trans.TotalPages = 1;
            trans.Transactions = TArray<FPlayerTransaction>();

            FPlayerEntitlementData entitle = FPlayerEntitlementData();

            entitle.EarnedCurrency = 69;
            entitle.EarnedCurrencyRate = 0;
            entitle.PerkBankMaxSize = 9999;
            entitle.PlayerID = id;
            entitle.RefundTokens = 0;
            entitle.ReputationPoints = 420;
            entitle.Entitlements = TArray<FMetaItem>();

            int i = 0;

            for (UPoplarPerkFunction* perk : SDKUtils::GetAllOfClass<UPoplarPerkFunction>()) {
                if (perk->GetFullName().contains("Default")) {
                    continue;
                }

                if (i > 1)
                    continue;

                i++;

                FMetaItem item = FMetaItem();

                std::wstring str = std::to_wstring(perk->HydraDatabaseID);

                item.HydraID = str.c_str();
                item.ItemLevel = 1;
                item.AcquisitionTime = FString();
                item.bCanUse = true;
                item.bMetagameBreadcrumb = 0;
                item.Count = 1;
                item.EarnedCurrencySellValue = 0;
                item.JSON = FString();
                item.MetaID = item.MetaID;
                item.PlatformID = FString();
                item.PremiumCurrencySellValue = 0;
                item.Source = 0;
                item.Type = 0;

                entitle.Entitlements.push_back(item);
            }
            
            cached->OnTransactionRefunded(id, 0, trans, entitle);
            cached->OnReceivePlayerEntitlementDataFromHydra(id, 0);
            UPoplarCommandArtifactsGFxMovie* cachedLOL = SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>();

            std::cout << SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>()->PerkBank.size() << std::endl;

            static int i = 0;

            for (UPoplarPerkFunction* perk : SDKUtils::GetAllOfClass<UPoplarPerkFunction>()) {
                if (perk->GetFullName().contains("Default")) {
                    continue;
                }

                i++;

                if (i > 5)
                    continue;

                FReplicatedPerkItem item = FReplicatedPerkItem();

                item.PerkFunction = perk;
                item.ItemLevel = 1;
                item.Rarity = 1;
                item.bActive = true;
                item.bCanUse = true;
                //item.PlayerID = FUniqueNetId();
                //item.ApolloJSON = L"{}";
                item.EntitlementIndex = i;
                item.MetaID = perk->MetaContentID;
                item.AssetKey = perk->AssetTrackerKey;
                item.ItemData = FPointer();
                item.ItemData.Dummy = (__int64)0;

                cachedLOL->PerkBank.push_back(item);
            }

            std::cout << i << std::endl;

            std::cout << SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>()->PerkBank.size() << std::endl;

            std::cout << "Control passed back to game" << std::endl;
            cachedLOL->bBankNeedsMetagameUpdate = false;
            cachedLOL->SelectedBankPerkIndex = 0;
            cachedLOL->ArtifactInitState = ECommandArtifactInitializingState::ARTIFACTINITSTATE_END;
            cachedLOL->ArtifactPageState = ECommandArtifactPageState::ARTIFACTSTATE_Loadouts;
            cachedLOL->ArtifactRequestState = ECommandArtifactPageRequestState::ARTIFACTREQUESTSTATE_NoRequest;
            //cachedLOL->MaxPopulatingBankPerkIndex = SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>()->PerkBank.size();

            
                        UPoplarCommandBattlebornGFxMovie* commandMovie = SDKUtils::GetLastOfClass< UPoplarCommandBattlebornGFxMovie>();

                        for (UPoplarPlayerNameIdentifierDefinition* character : SDKUtils::GetAllOfClass< UPoplarPlayerNameIdentifierDefinition>()) {
                            if (character->GetFullName().contains("Default"))
                                continue;

                            FPoplarCharacterDetails details = FPoplarCharacterDetails();
                            details.bChallengeRequirementMet = true;
                            details.BreadcrumbCount = 0;
                            details.ChallengeUnlockDescription = FString();
                            details.Character = character;
                            details.CharacterIconMoviePath = UObject::PathName(character->CharacterMetaMarketplaceIconGFxMovie);
                            details.CharacterLevel = 1;
                            details.CharacterLevelExperiencePercentage = 50.0;
                            details.FactionIconPath = FString();
                            details.LoreChallengesCompleted = 0;
                            details.ScheduledCommandRank = 0;
                            details.SortOrder = 0; 
                            commandMovie->SelectableCharacters.push_back(details);
                        }


                        std::cout << commandMovie->CharacterCells->GetFullName() << std::endl;


UPoplarCommandArtifactsGFxMovie* cachedLOL = SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>();

std::cout << SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>()->PerkBank.size() << std::endl;

int i = 0;

std::vector<UPoplarPerkFunction*> perkfunctions = SDKUtils::GetAllOfClass<UPoplarPerkFunction>();
std::vector< FReplicatedPerkItem*> owo = std::vector< FReplicatedPerkItem*>();

SDKUtils::GetLastOfClass< UPoplarCommandMenuDefinition>()->MinCommandRankForGear = 0;

for (UPoplarPerkFunction* perk : perkfunctions) {
    if (perk->GetFullName().contains("Default")) {
        continue;
    }

    if (i >= 100) {
        continue;
    }

    i++;

    FReplicatedPerkItem* item = (FReplicatedPerkItem*)EngineLogic::EngineMalloc(sizeof(FReplicatedPerkItem));

    *item = FReplicatedPerkItem();

    owo.push_back(item);
    
    item->PerkFunction = perk;
    item->AssetKey.ArrayData = perk->AssetTrackerKey.ArrayData;
    item->AssetKey.ArrayCount = perk->AssetTrackerKey.ArrayCount;
    item->AssetKey.ArrayMax = perk->AssetTrackerKey.ArrayMax;
    //item->AssetKey = perk->AssetTrackerKey;

    item->ItemLevel = 1;
    item->Rarity = 1;
    
    
    item->bActive = true;
    item->bCanUse = true;
    item->PlayerID = SDKUtils::GetLastOfClass<APoplarPlayerController>()->PlayerReplicationInfo->UniqueId;
    item->EntitlementIndex = i;
    
    item->Wearable = nullptr;

    

    //cachedLOL->PerkBank.push_back(*item);
}

cachedLOL->PerkBank.ArrayData = (FReplicatedPerkItem*)EngineLogic::EngineMalloc(sizeof(FReplicatedPerkItem) * owo.size());
cachedLOL->PerkBank.ArrayCount = owo.size();
cachedLOL->PerkBank.ArrayMax = owo.size();

for (int i = 0; i < owo.size(); i++) {
    cachedLOL->PerkBank.ArrayData[i] = *owo[i];
}

std::cout << i << std::endl;

std::cout << SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>()->PerkBank.size() << std::endl;

SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>()->MaxPopulatingBankPerkIndex = 100;
SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>()->CurrentPopulatingBankPerkIndex = 0;

std::cout << "Control passed back to game" << std::endl;
FPlayerTransactions transactions = FPlayerTransactions();

FPlayerEntitlementData entitlements = FPlayerEntitlementData();

entitlements.PlayerID = SDKUtils::GetLastOfClass<APoplarPlayerController>()->GetMyUserId();
entitlements.ReputationPoints = 420;
entitlements.EarnedCurrency = 69;
entitlements.EarnedCurrencyRate = 621;
entitlements.PerkBankMaxSize = 6969;
entitlements.RefundTokens = 5;


SDKUtils::GetLastOfClass< UPoplarMetagameInventory>()->OnTransactionRefunded(SDKUtils::GetLastOfClass<APoplarPlayerController>()->GetMyUserId(), 0, transactions, entitlements);

//cachedLOL->bBankNeedsMetagameUpdate = false;
//cachedLOL->SelectedBankPerkIndex = 1;
//cachedLOL->BankPage = FPointer();
//cachedLOL->BankPage.Dummy = 0x0;

//EngineLogic::DontPauseOnLossOfFocus();
//EngineLogic::ExecConsoleCommand(L"open Snowdrift_P?bTournamentMode=1");

for (FUIBreadcrumbEntry val : SDKUtils::GetLastOfClass<UWillowProfile>()->UIBreadcrumbs) {
    //std::cout << val.UIBreadcrumbKey.ToString() << std::endl;

    for (UPoplarPerkFunction* perk : SDKUtils::GetAllOfClass<UPoplarPerkFunction>()) {
        //std::cout << perk->AssetTrackerKey.ToString() << std::endl;

        if (perk->AssetTrackerKey.ToString()._Equal(val.UIBreadcrumbKey.ToString())) {
            std::cout << perk->DisplayName.ToString() << std::endl;
        }
    }
}
FHttpParameters* params = (FHttpParameters * )EngineLogic::EngineMalloc(sizeof(FHttpParameters));

*params = FHttpParameters();

params->ServiceConfiguration = SDKUtils::GetLastOfClass<USparkServiceConfiguration>();
params->bResponseDesired = true;
params->Method = 1;

TArray<uint8_t>* data = (TArray<uint8_t>*)EngineLogic::EngineMalloc(sizeof(TArray<uint8_t>));

*data = TArray<uint8_t>();

FScriptDelegate* del = (FScriptDelegate*)EngineLogic::EngineMalloc(sizeof(FScriptDelegate));

*del = FScriptDelegate();

SDKUtils::GetLastOfClass<UPoplarSpark>()->IssueSparkRequest(L"http://127.0.0.1:3000", *del, *params, *data);

while (GetAsyncKeyState(VK_F5)) {

}
        }
        UPoplarCommandMenuDefinition* xd = SDKUtils::GetLastOfClass< UPoplarCommandMenuDefinition>();

        xd->MinCommandRankForGear = 0;
        if (GetAsyncKeyState(VK_F1)) {
            for (UPoplarFrontendGFxMovie* test : SDKUtils::GetAllOfClass<UPoplarFrontendGFxMovie>()) {

                test->MessagesOfTheDay.ArrayData = nullptr;
                test->MessagesOfTheDay.ArrayCount = 0;
                test->MessagesOfTheDay.ArrayMax = 0;
            }

            while (GetAsyncKeyState(VK_F1)) {

            }
        }

        if (GetAsyncKeyState(VK_F6)) {
            //
            EngineLogic::DontPauseOnLossOfFocus();
            listening = true;
            EngineLogic::ExecConsoleCommand(L"open Snowdrift_P?bTournamentMode=1");

            Globals::amServer = true;

            while (GetAsyncKeyState(VK_F6)) {

            }
        }

        if (GetAsyncKeyState(VK_F7) && !listening && !connected) {
            connected = true;
            EngineLogic::DontPauseOnLossOfFocus();
            ClientNetworking::JoinServer(L"127.0.0.1:6969");

            while (GetAsyncKeyState(VK_F7)) {

            }
        }

        if (GetAsyncKeyState(VK_F8)) {
            if (Globals::amServer) {
                
                [PE] PoplarPlayerController Wishbone_P.TheWorld.PersistentLevel.PoplarPlayerController - Function PoplarGame.PoplarPlayerController.AfterReceivedPlayerWaitForCharacterLoad
[PE] PoplarPlayerReplicationInfo Wishbone_P.TheWorld.PersistentLevel.PoplarPlayerReplicationInfo - Function WillowGame.WillowPlayerReplicationInfo.RunOnceClientInitialize
[PE] PoplarStatReplicationInfo Wishbone_P.TheWorld.PersistentLevel.PoplarStatReplicationInfo - Function PoplarGame.PoplarStatReplicationInfo.ResetTrainingStatsListenersDelayed
[PE] PoplarHUD Wishbone_P.TheWorld.PersistentLevel.PoplarHUD - Function WillowGame.WillowHUD.OpenHUDMovies
[PE] PoplarMenuSubtitlesGFxMovie Transient.PoplarMenuSubtitlesGFxMovie - Function GearboxFramework.GearboxGFxMovie.extCacheClip
[PE] PoplarMenuSubtitlesGFxMovie Transient.PoplarMenuSubtitlesGFxMovie - Function GearboxFramework.GearboxGFxMovie.extOnClipLoaded
                for (APoplarCharacterSelectManager* acs : SDKUtils::GetAllOfClass< APoplarCharacterSelectManager>()) {
                    std::cout << acs->GetFullName() << std::endl;
                    acs->NumberOfExpectatedPlayerConnections = 2;
                    acs->bWaitForStandaloneEntitlements = false;
                    acs->Teams[0].NumExpectedPlayers = 1;
                    acs->Teams[1].NumExpectedPlayers = 1;
                    acs->Teams[1].Players[0].bHasReceivedEntitlements = true;
                    acs->Teams[1].Players[0].bCanSelect = true;
                }
                
            }
        }

        if (GetAsyncKeyState(VK_F9)) {
            if (Globals::amServer) {
                                for (APoplarGameReplicationInfo* pri : SDKUtils::GetAllOfClass< APoplarGameReplicationInfo>()) {
                    std::cout << pri->GetFullName() << std::endl;
                    FMatchStateData currentMatchState = FMatchStateData();
                    currentMatchState.bTournamentMode = 1;
                    currentMatchState.State = (int)EMatchState::MatchState_CharacterSelect;
                    FMatchStateData oldMatchState = FMatchStateData();
                    oldMatchState.bTournamentMode = 1;
                    oldMatchState.State = (int)EMatchState::MatchState_Initial;
                    pri->CurrentMatchState = currentMatchState;
                    pri->OnRep_CurrentMatchState(oldMatchState);
                }
                for (APoplarPlayerController* pri : SDKUtils::GetAllOfClass< APoplarPlayerController>()) {
                    std::cout << pri->GetStateName().InstanceNumber << std::endl;
                    if (pri->PoplarPSI) {
                        std::cout << pri->GetStateName().ToString() << std::endl;
                    }
                }
            }

            while (GetAsyncKeyState(VK_F9)) {

            }
        }

    }
    */
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        std::thread t(MainThread);
        t.detach();
    }

    return TRUE;
}

