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

        UObject::FindObject<AWorldInfo>("WorldInfo Wishbone_P.TheWorld.PersistentLevel.WorldInfo")->NetMode = ENetMode::NM_ListenServer;

        FURL furl = FURL();

        furl.Port = Settings::gamePort;

        FString error = FString((const char*)L"");

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
            else if(!((actor->bNetTemporary || actor->bNetInitial) && !actor->bNetInitial)) {
                actor->bNetInitial = false;
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
            worldInfo = UObject::FindObject<AWorldInfo>("WorldInfo Wishbone_P.TheWorld.PersistentLevel.WorldInfo");

        std::vector<AActor*> actors = BuildConsiderList(worldInfo, NetDriver);

        for (UNetConnection* connection : Globals::connections) {
            if (!connection)
                continue;

            if (GetConnectionState(connection) != 3)
                continue;

            for (AActor* actor : actors) {
                (*(void(__fastcall**)(UNetConnection*, AActor*))(*(__int64*)connection + 624LL))(connection, actor);

                if (actor->IsA<APlayerController>() && (connection->Actor != actor)) {
                    continue;
                }
                else if (actor->IsA<APlayerController>()) {
                    reinterpret_cast<APlayerController*>(actor)->eventSendClientAdjustment();
                }
                //printf("[NETWORKING] Starting the replication run for %s\n", actor->GetFullName().c_str());

                UActorChannel* channel = GetActorChannelForActor(actor, connection);

                if (!channel) {
                    //printf("[NETWORKING] No channel, creating...\n");

                    channel = reinterpret_cast<UActorChannel * (__thiscall*)(UNetConnection * connection, int channelType, uint32_t openedLocally, int chIndex)>(Globals::baseAddress + 0x061daa0)(connection, 2, 1, -1);
                    
                    if (channel) {
                        //printf("[NETWORKING] Setting channel actor...\n");
                        reinterpret_cast<void(__thiscall*)(UActorChannel*, AActor*)>(Globals::baseAddress + 0x0611970)(channel, actor);
                    }
                }

                if (channel && actor && channel->NumOutRec < 0xFE) { //&& !(*(uint8_t*)(channel + 0xC0) & 0x10)
                    //printf("[NETWORKING] Replication time!\n");
                    //*(uint8_t*)(channel + 0xC0) |= 0x10;
                    reinterpret_cast<void (*)(UActorChannel * channel)>(Globals::baseAddress + 0x0613050)(channel);
                    if(actor)
                        actor->NetTag++;

                    //if(channel)
                        //*(uint8_t*)(channel + 0xC0) &= ~0x10;
                }
            }
        }
    }
}

namespace ClientNetworking {
    void JoinServer() {
        EngineLogic::ExecConsoleCommand(L"open 127.0.0.1:6969");
    }
}

namespace Hooks{
    SafetyHookInline ProcessRemoteFunction;

    bool ProcessRemoteFunctionHook(AActor* actor, UFunction* function, void* params, void* stack) {
        if (!actor->WorldInfo) {
            actor->WorldInfo = UObject::FindObject<AWorldInfo>("WorldInfo Wishbone_P.TheWorld.PersistentLevel.WorldInfo");
        }

        bool ret = ProcessRemoteFunction.call<bool>(actor, function, params, stack);

        return ret;
    }

    SafetyHookInline WorldControlMessage;

    void WorldControlMessageHook(UWorld* world, UNetConnection* connection, uint8_t message, void* inbunch) {
        WorldControlMessage.call<void>(world, connection, message, inbunch);

        if (message == 0x0) {
            printf("[NETWORKING] Welcoming a new player!\n");

            reinterpret_cast<void* (*)(UWorld*, UNetConnection*)>(Globals::baseAddress + 0x045b060)(world, connection);
        }
        else if (message == 0x9) {
            printf("[NETWORKING] Spawning a new player!\n");

            UWorld* theWorld = UObject::FindObject<UWorld>("World Wishbone_P.TheWorld");
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

            Globals::connections.push_back(connection);
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
        SDKUtils::GetLastOfClass< UPoplarPressStartGFxMovie>()->ContinueToMenu();
    }

    void MainPanelClickedHook(uint32_t PanelId) {
        if (PanelId == 8) { // Dojo
            EngineLogic::ExecConsoleCommand(L"open Dojo_P");
        }
    }

    void ProcessEventHook(UObject* object, UFunction* function, void* params) {
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

            while (GetAsyncKeyState(VK_F5)) {

            }
        }

        if (GetAsyncKeyState(VK_F6)) {
            EngineLogic::DontPauseOnLossOfFocus();
            listening = true;
            EngineLogic::ExecConsoleCommand(L"open Wishbone_P");

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

