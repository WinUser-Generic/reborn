// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <thread>
#include "BB/SdkHeaders.hpp"
#include "safetyhook.hpp"
#include <iostream>
#include <format>

namespace Settings {
    int32_t gamePort = 6969;
    int32_t websocketPort = 1337;
}

namespace Globals {
    uintptr_t baseAddress = 0x0;

    UTcpNetDriver* netDriver = 0x0;

    std::vector<UNetConnection*> connections = std::vector<UNetConnection*>();

    std::vector<std::pair<UNetConnection*, std::vector<AActor*>>> sentTemporaries = std::vector<std::pair<UNetConnection*, std::vector<AActor*>>>();

    float tickrate = 30.0f;
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

namespace EngineLogic {
    void ExecConsoleCommand(const wchar_t* command) {
        reinterpret_cast<void* (*)(uintptr_t, const wchar_t*, uintptr_t)>(Globals::baseAddress + 0x01fca00)((__int64)((*GObjects)[0]) + 0x25ebde8, command, 0);
    }

    void DontPauseOnLossOfFocus() {
        SDKUtils::GetLastOfClass<UEngine>()->bPauseOnLossOfFocus = false;
    }

    void* EngineMalloc(size_t size) {
        int* param_1 = reinterpret_cast<int* (*)()>(Globals::baseAddress + 0x0d33260)();

        return reinterpret_cast<void* (*)(unsigned int param_1, size_t param_2, size_t param_3, size_t param_4, size_t param_5, unsigned int param_6, unsigned int param_7, const char* param_8, unsigned int param_9, const char* param_10)>(Globals::baseAddress + 0x0d2e160)(*(int*)(param_1 + 0x10), 0, size, 0x8, 0, 0, 0x31c0019,
            "t:\\POPLAR-PATCH-PC\\Development\\Src\\Core\\Src\\gbxmem.cpp", 0x46, "appMalloc");
    }
}

namespace ServerNetworking {
    void InitListen() {
        SDKUtils::GetLastOfClass<UGameEngine>()->CreateNamedNetDriver(FName(020724));

        UTcpNetDriver* NetDriver = SDKUtils::GetLastOfClass<UTcpNetDriver>();

        UWorld* theWorld = *reinterpret_cast<UWorld**>(Globals::baseAddress + 0x34DFCA0);

        theWorld->NetDriver = NetDriver;

        UObject::FindObject<AWorldInfo>("WorldInfo Toby_Raid_P.TheWorld.PersistentLevel.WorldInfo")->NetMode = ENetMode::NM_ListenServer;

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
        for (UChannel* channel : connection->Channels) {
            if (channel) {
                if (channel->IsA<UActorChannel>() && ((UActorChannel*)channel)->Actor == actor) {
                    return (UActorChannel*)channel;
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
                ret.push_back(actor);
            }
        }

        return ret;
    }

    uint8_t GetConnectionState(UNetConnection* connection) {
        return *(uint8_t*)((__int64)connection + 0x98);
    }

    void TickNetServer(UTcpNetDriver* NetDriver) {
        static AWorldInfo* worldInfo = nullptr;

        if (!worldInfo)
            worldInfo = UObject::FindObject<AWorldInfo>("WorldInfo Toby_Raid_P.TheWorld.PersistentLevel.WorldInfo");

        std::vector<AActor*> actors = BuildConsiderList(worldInfo, NetDriver);

        for (UNetConnection* connection : Globals::connections) {
            if (!connection)
                continue;

            if (GetConnectionState(connection) != 3)
                continue;
                
            if (connection->Actor->PendingAdjustment.TimeStamp > 0.0) {
                connection->Actor->eventSendClientAdjustment();
            }

            for (AActor* actor : actors) {
                if (!actor)
                    continue;

                (*(void(__fastcall**)(UNetConnection*, AActor*))(*(__int64*)connection + 624LL))(connection, actor);

                if (actor->IsA<APlayerController>() && (connection->Actor != actor)) {
                    continue;
                }

                if (actor->bNetTemporary) {
                    bool shouldContinue = false;

                    for (auto pair : Globals::sentTemporaries) {
                        if (pair.first == connection) {
                            for (AActor* cmpActor : pair.second) {
                                if (actor == cmpActor) {
                                    shouldContinue = true;
                                    break;
                                }
                            }

                            if (!shouldContinue) {
                                pair.second.push_back(actor);
                            }

                            break;
                        }
                    }

                    if (shouldContinue)
                        continue;
                }

                //printf("[NETWORKING] Starting the replication run for %s\n", actor->GetFullName().c_str());

                UActorChannel* channel = GetActorChannelForActor(actor, connection);

                if (!channel && actor) {
                    //printf("[NETWORKING] No channel, creating...\n");

                    channel = reinterpret_cast<UActorChannel * (__thiscall*)(UNetConnection * connection, int channelType, uint32_t openedLocally, int chIndex)>(Globals::baseAddress + 0x061daa0)(connection, 2, 1, -1);
                    
                    if (channel) {
                        //printf("[NETWORKING] Setting channel actor...\n");
                        reinterpret_cast<void(__thiscall*)(UActorChannel*, AActor*)>(Globals::baseAddress + 0x0611970)(channel, actor);
                    }
                }

                if (channel && channel->Actor) { //&& channel->NumOutRec < 0xFE
                    //printf("[NETWORKING] Replication time!\n");
                    reinterpret_cast<void (*)(UActorChannel * channel)>(Globals::baseAddress + 0x0613050)(channel);
                    if (channel->Actor) {
                        channel->Actor->NetTag++;

                        //if(actor->bNetTemporary)
                            //(*(reinterpret_cast<void(**)(UActorChannel*)>(*(__int64*)channel + 0x210)))(channel); // Close channel
                    }
                }
                else if (channel && (!channel->Actor || channel->Actor->bPendingDelete)) {
                    (*(reinterpret_cast<void(**)(UActorChannel*)>(*(__int64*)channel + 0x210)))(channel);
                }
            }
        }
    }
}

namespace ClientNetworking {
    void JoinServer() {
        EngineLogic::ExecConsoleCommand(L"open 174.55.86.128:6969");
    }
}

namespace Hooks{
    SafetyHookInline ProcessRemoteFunction;

    bool ProcessRemoteFunctionHook(AActor* actor, UFunction* function, void* params, void* stack) {
        if (!actor->WorldInfo) {
            actor->WorldInfo = UObject::FindObject<AWorldInfo>("WorldInfo Toby_Raid_P.TheWorld.PersistentLevel.WorldInfo");
        }

        bool ret = ProcessRemoteFunction.call<bool>(actor, function, params, stack);

        return ret;
    }

    SafetyHookInline WorldControlMessage;

    static std::vector<SafetyHookVmt> vmts = std::vector<SafetyHookVmt>();
    static std::vector<SafetyHookVm> vms = std::vector<SafetyHookVm>();

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

            UWorld* theWorld = UObject::FindObject<UWorld>("World Toby_Raid_P.TheWorld");
            FURL theURL = FURL();

            FUniqueNetId netID = FUniqueNetId();

            netID.bHasValue = true;

            static uint8_t id = 0x0;

            id++;

            netID.RawId[0] = id;

            FString err = FString();

            APoplarPlayerController* pc = reinterpret_cast<APoplarPlayerController * (__thiscall*)(UWorld * world, UPlayer * player, ENetRole RemoteRole, FURL * url, FUniqueNetId * netID, FString * err, uint8_t InNetPlayerIndex)>(Globals::baseAddress + 0x03ef7b0)(theWorld, connection, ENetRole::ROLE_AutonomousProxy, &theURL, &netID, &err, 0);

            connection->Actor = pc;

            pc->Player = connection;

            pc->RemoteRole = ENetRole::ROLE_AutonomousProxy;

            SDKUtils::GetLastOfClass<AGameInfo>()->eventPostLogin(pc);

            Globals::connections.push_back(connection);
            Globals::sentTemporaries.push_back(std::pair<UNetConnection*, std::vector<AActor*>>(connection, std::vector<AActor*>()));

            vmts.push_back(safetyhook::create_vmt(connection));

            vms.push_back(safetyhook::create_vm(vmts.back(), 0x260 / 0x8, IsNetReady));
        }
        else if (message == 0xf) {
            printf("[NETWORKING] New player ack'd!\n");
        }
    }

    SafetyHookInline GameEngineTick;

    void GameEngineTickHook(UGameEngine* engine, float DeltaTime) {
        GameEngineTick.call<void>(engine, DeltaTime);

        if (Globals::netDriver) {
            static float time = 0.0;

            time += DeltaTime;

            if (time > (1.0f / Globals::tickrate)) {
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
        SDKUtils::GetLastOfClass<APoplarPlayerController>()->ReadProfile();
        SDKUtils::GetLastOfClass<UPoplarPressStartGFxMovie>()->ContinueToMenu();
    }

    void MainPanelClickedHook(uint32_t PanelId) {
        if (PanelId == 8) { // Dojo
            EngineLogic::ExecConsoleCommand(L"open Dojo_P");
        }
    }

    void ProcessEventHook(UObject* object, UFunction* function, void* params) {
        //if (function->GetFullName().contains("AdjustPosition")) {
            //printf("[PE] %s - %s\n", object->GetFullName().c_str(), function->GetFullName().c_str());
        //}
        /*

        if (function == veryShortClientAdjustPosition) {
            APlayerController_execVeryShortClientAdjustPosition_Params* parms = reinterpret_cast<APlayerController_execVeryShortClientAdjustPosition_Params*>(params);

            APoplarPlayerController* ppc = reinterpret_cast<APoplarPlayerController*>(object);

            ppc->LongClientAdjustPosition(parms->TimeStamp, FName(1830), EPhysics::PHYS_Walking, parms->NewLocX, parms->NewLocY, parms->NewLocZ, 0, 0, 0, parms->NewBase, ppc->Pawn ? ppc->Pawn->Floor.X : 0, ppc->Pawn ? ppc->Pawn->Floor.Y : 0, ppc->Pawn ? ppc->Pawn->Floor.Z : 0);
        }

        if (function == clientAdjustPosition) {
            APlayerController_execClientAdjustPosition_Params* parms = reinterpret_cast<APlayerController_execClientAdjustPosition_Params*>(params);

            APoplarPlayerController* ppc = reinterpret_cast<APoplarPlayerController*>(object);

            ppc->LongClientAdjustPosition(parms->TimeStamp, parms->NewState, (EPhysics)parms->newPhysics, parms->NewLocX, parms->NewLocY, parms->NewLocZ, parms->NewVelX, parms->NewVelY, parms->NewVelZ, parms->NewBase, ppc->Pawn ? ppc->Pawn->Floor.X : 0, ppc->Pawn ? ppc->Pawn->Floor.Y : 0, ppc->Pawn ? ppc->Pawn->Floor.Z : 0);
        }
        */

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

        //Function PoplarGame.PoplarCommandGFxMovie.ReadPlayersStatsDataComplete

        return ProcessEvent.call<void>(object, function, params);
    }

    SafetyHookInline DestroyActor;

    bool DestroyActorHook(UWorld* world, AActor* actor, bool force) {
        /*
        if (Globals::netDriver) {
            for (UNetConnection* connection : Globals::connections) {
                UActorChannel* ch = ServerNetworking::GetActorChannelForActor(actor, connection);

                if (ch) {
                    (*(reinterpret_cast<void(**)(UActorChannel*)>(*(__int64*)ch + 0x210)))(ch);
                }
            }
        }
        */

        return DestroyActor.call<bool>(world, actor, force);
    }

    SafetyHookInline JustDoNothing;

    void JustDoNothingHook(void* a1, void* a2, void* a3) {
        return;
    }
}

namespace Init {
    void Globals() {
        Globals::baseAddress = (size_t)GetModuleHandleA("Battleborn.exe");

        GObjects = reinterpret_cast<TArray<UObject*>*>(Globals::baseAddress + (size_t)0x035152D0);
        GNames = reinterpret_cast<TArray<FNameEntry*>*>(Globals::baseAddress + (size_t)0x03515228);
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
        Hooks::MainMenu = safetyhook::create_inline((void*)(Globals::baseAddress + 0x127D860), &Hooks::MainMenuHook);
        Hooks::ProcessEvent = safetyhook::create_inline((void*)(Globals::baseAddress + 0x109ca0), &Hooks::ProcessEventHook);
        Hooks::GameEngineTick = safetyhook::create_inline((void*)(Globals::baseAddress + 0x0207e10), &Hooks::GameEngineTickHook);
        Hooks::WorldControlMessage = safetyhook::create_inline((void*)(Globals::baseAddress + 0x045c540), &Hooks::WorldControlMessageHook);
        Hooks::ProcessRemoteFunction = safetyhook::create_inline((void*)(Globals::baseAddress + 0x0728fd0), &Hooks::ProcessRemoteFunctionHook);
        Hooks::DestroyActor = safetyhook::create_inline((void*)(Globals::baseAddress + 0x3EF070), &Hooks::DestroyActorHook);
        //Hooks::JustDoNothing = safetyhook::create_inline((void*)(Globals::baseAddress + 0x84F370), &Hooks::JustDoNothingHook);
    }
}

void MainThread() {
    Init::Globals();
    Init::Console();
    Init::Hooks();

    bool listening = false;
    bool connected = false;

    while (true) {
        if (GetAsyncKeyState(VK_F5)) {
            /*
            for (APoplarPlayerReplicationInfo* pri : SDKUtils::GetAllOfClass<APoplarPlayerReplicationInfo>()) {
                pri->InitializeAugmentations(SDKUtils::GetLastOfClass< UPoplarPlayerClassDefinition>()->AugSet);
            }
            */
            /*
            for (UPoplarFrontendGFxMovie* test : SDKUtils::GetAllOfClass<UPoplarFrontendGFxMovie>()) {
                //std::cout << test->GetFullName() << std::endl;
                FMessageOfTheDay msg = FMessageOfTheDay();
                FNewsArticle article = FNewsArticle();
                article.LearnMoreURL = (const char*)L"https://google.com";
                article.Summary = (const char*)L"Reborn 1.0";
                article.Header = (const char*)L"Reborn 1.0";
                article.Body = (const char*)L"Reborn 1.0 has been almost a year in the making, and no part of Reborn is untouched!\nSave Solus with your friends, battle to the death with your enemies, or just collect shiny gear; the choice is yours!";
                msg.Article = article;
                msg.DisplayTime = 0;
                msg.MessageId = 0x69;
                msg.bForceFullscreen = true;
                test->MessagesOfTheDay.push_back(msg);
                test->CurrentMessageOfTheDayId = 0x69;
                test->TimedShowNextMessageOfTheDay();

                //test->LastCharacterPlayedAs = UObject::FindObject<UPoplarPlayerNameIdentifierDefinition>("PoplarPlayerNameIdentifierDefinition GD_RocketHawk.NameId_RocketHawk");
                //test->LastCharacterSkinPlayedIn = UObject::FindObject<UPoplarMetaSkinDefinition>("PoplarMetaSkinDefinition GD_RocketHawk.Skins.SkinId_Color005");
            }
            */

            /*
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
            */
            /*
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
            */

            /*
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
            

            cached->OnReceivePlayerEntitlementDataFromHydra(id, 0);
            */
            //cached->OnTransactionRefunded(id, 0, trans, entitle);
            /*
            UPoplarCommandArtifactsGFxMovie* cachedLOL = SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>();

            std::cout << SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>()->PerkBank.size() << std::endl;
            
            static int i = 0;

            for (UPoplarPerkFunction* perk : SDKUtils::GetAllOfClass<UPoplarPerkFunction>()) {
                if (perk->GetFullName().contains("Default")) {
                    continue;
                }
                
                i++;

                FReplicatedPerkItem* item = (FReplicatedPerkItem*)EngineLogic::EngineMalloc(sizeof(FReplicatedPerkItem));

                item->PerkFunction = perk;
                item->ItemLevel = 1;
                item->Rarity = 1;
                item->bActive = true;
                item->bCanUse = true;
                item->PlayerID = FUniqueNetId();
                item->ApolloJSON = L"{}";
                item->EntitlementIndex = i;
                item->MetaID = perk->MetaContentID;
                item->AssetKey = perk->AssetTrackerKey;
                item->ItemData = FPointer();
                item->ItemData.Dummy = 0x0;

                cachedLOL->PerkBank.push_back(*item);
            } 

            std::cout << i << std::endl;

            std::cout << SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>()->PerkBank.size() << std::endl;

            std::cout << "Control passed back to game" << std::endl;

            cachedLOL->bBankNeedsMetagameUpdate = false;
            cachedLOL->SelectedBankPerkIndex = 0;
            //cachedLOL->MaxPopulatingBankPerkIndex = SDKUtils::GetLastOfClass< UPoplarCommandArtifactsGFxMovie>()->PerkBank.size();
            */
/*
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
            */

            for (ULevelStreaming* streaming: SDKUtils::GetAllOfClass< ULevelStreaming>()) {
                if (!streaming->GetFullName().contains("Default")) {
                    std::cout << streaming->GetFullName() << std::endl;

                    for (APlayerController* pc : SDKUtils::GetAllOfClass<APlayerController>()) {
                        if (!pc->GetFullName().contains("Default")) {
                            std::cout << pc->GetFullName() << std::endl;

                            pc->eventLevelStreamingStatusChanged(streaming, true, true, true);
                        }
                    }
                }
            }

            while (GetAsyncKeyState(VK_F5)) {

            }
        }

        if (GetAsyncKeyState(VK_F6)) {
            //
            EngineLogic::DontPauseOnLossOfFocus();
            listening = true;
            EngineLogic::ExecConsoleCommand(L"open Toby_Raid_P");

            Sleep(7 * 1000);

            ServerNetworking::InitListen();

            while (GetAsyncKeyState(VK_F6)) {

            }
        }

        if (GetAsyncKeyState(VK_F7) && !listening && !connected) {
            connected = true;
            EngineLogic::DontPauseOnLossOfFocus();
            ClientNetworking::JoinServer();

            while (GetAsyncKeyState(VK_F7)) {

            }
        }

        if (GetAsyncKeyState(VK_F8)) {
            APoplarPlayerController* pc = SDKUtils::GetLastOfClass<APoplarPlayerController>();

            if(pc && pc->MyPoplarPRI && pc->MyPoplarPawn)
                pc->MyPoplarPRI->InitializeAugmentations(pc->MyPoplarPawn->PoplarPlayerClassDef->AugSet);

            while (GetAsyncKeyState(VK_F8)) {

            }
        }
    }
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

