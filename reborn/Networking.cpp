#include "Networking.hpp"

#include <psapi.h>

namespace ServerNetworking {
    std::string GetDateTimeISO() {
        auto now = std::chrono::system_clock::now();
        auto time_t = std::chrono::system_clock::to_time_t(now);
        auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
            now.time_since_epoch()) % 1000;

        std::stringstream ss;
        ss << std::put_time(std::gmtime(&time_t), "%Y-%m-%dT%H:%M:%S");
        ss << '.' << std::setfill('0') << std::setw(3) << ms.count() << 'Z';

        return ss.str();
    }

    void GameControllerPoll() {
        nlohmann::json jsonBody = nlohmann::json();

        jsonBody["ConnectedPlayers"] = Globals::connections.size();
        jsonBody["HumansHaveStarted"] = Globals::haveHumansStarted;

        Globals::GameCoordinatorHttpClient.get()->Post("/api/games/server-poll", jsonBody.dump(), "application/json");

        nlohmann::json telemetrySnapshotPoll = nlohmann::json();

        telemetrySnapshotPoll["Timestamp"] = GetDateTimeISO();

        telemetrySnapshotPoll["MatchGUID"] = ServerSettings::GameCoordinatorKey;

        telemetrySnapshotPoll["TargetTickrate"] = ServerSettings::tickrate;

        float averageTickrate = 0.0f;

        {
            std::scoped_lock t(Globals::Telemetry::TickrateMutex);

            float sum = std::accumulate(Globals::Telemetry::Tickrates.begin(), Globals::Telemetry::Tickrates.end(), 0.0f);

            averageTickrate = sum / Globals::Telemetry::Tickrates.size();

            Globals::Telemetry::Tickrates.clear();
        }

        telemetrySnapshotPoll["EffectiveTickrate"] = averageTickrate;

        {
            std::scoped_lock t(Globals::Telemetry::ReplicationFNameMutex);
            telemetrySnapshotPoll["ReplicationFNames"] = Globals::Telemetry::ReplicationFNames;
        }

        telemetrySnapshotPoll["PlayersConnected"] = Globals::connections.size();

        telemetrySnapshotPoll["MaxPlayers"] = ServerSettings::NumPlayersToStart;

        PROCESS_MEMORY_COUNTERS_EX pmc;

        GetProcessMemoryInfo(GetCurrentProcess(),
            (PROCESS_MEMORY_COUNTERS*)&pmc,
            sizeof(pmc));

        telemetrySnapshotPoll["MemoryUsageMB"] = (int)(pmc.WorkingSetSize / (1024.0 * 1024.0));

        Globals::GameCoordinatorHttpClient.get()->Post("/api/telemetry/snapshot", telemetrySnapshotPoll.dump(), "application/json");

        {
            std::scoped_lock t(Globals::Telemetry::ReplicationFNameMutex);

            Globals::Telemetry::ReplicationFNames.clear();
        }
    }

    void InitListen() {
        SDKUtils::GetLastOfClass<UGameEngine>()->CreateNamedNetDriver(FName(020724));

        UTcpNetDriver* NetDriver = SDKUtils::GetLastOfClass<UTcpNetDriver>();

        UWorld* theWorld = *reinterpret_cast<UWorld**>(Globals::baseAddress + 0x34DFCA0);

        theWorld->NetDriver = NetDriver;

        SDKUtils::GetLastOfClass<AWorldInfo>()->NetMode = ENetMode::NM_DedicatedServer;

        FURL furl = FURL();

        furl.Port = ServerSettings::gamePort;

        FString error = FString(L"");

        printf("[NETWORKING] Normal init status %i\n", reinterpret_cast<char (*)(UNetDriver * NetDriver, size_t world, FURL & url, FString & error)>(Globals::baseAddress + 0x0c21e30)(NetDriver, (__int64)theWorld + 0x58, furl, error));

        theWorld->NetDriver = NetDriver;

        NetDriver->NetConnectionClass = UTcpipConnection::StaticClass();

        Globals::netDriver = NetDriver;

        printf("[NETWORKING] Game networking listening on port %i!\n", ServerSettings::gamePort);
    }

    UActorChannel* GetActorChannelForActor(AActor* actor, UNetConnection* connection) {
        if (connection) {
            for (UChannel* channel : connection->Channels) {
                if (channel) {
                    if (channel->Class == UActorChannel::StaticClass() && ((UActorChannel*)channel)->Actor == actor) {
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
            if (!actor || actor->RemoteRole == ENetRole::ROLE_None || !actor->WorldInfo || actor->bPendingDelete || actor->ObjectFlags & 0x2000000000000000 || actor->Class == AEmitter::StaticClass()) { //
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

    bool ConnectionFull(UNetConnection* connection) {
        for (UChannel* Channel : connection->Channels) {
            if (!Channel) {
                return false;
            }
        }

        return true;
    }

    void TickNetServer(UTcpNetDriver* NetDriver) {
        static AWorldInfo* worldInfo = nullptr;

        if (!worldInfo)
            worldInfo = SDKUtils::GetLastOfClass<AWorldInfo>();

        std::vector<AActor*> actors = BuildConsiderList(worldInfo, NetDriver);

        //std::sort(actors.begin(), actors.end(), CompareActorPriority);

        for (UNetConnection* connection : Globals::connections) {
            if (!connection)
                continue;

            if (GetConnectionState(connection) < 3) {
                if (connection->Actor) {
                    Globals::connections.erase(std::remove_if(Globals::connections.begin(), Globals::connections.end(), [&connection](UNetConnection* cmp) {
                        if (cmp == connection)
                            std::cout << "[NETWORKING] Player disconnected!" << std::endl;

                        return cmp == connection;
                        }), Globals::connections.end());
                }

                continue;
            }

            if (!(*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1))
                continue;

            if (connection->Actor && connection->Actor->PendingAdjustment.TimeStamp > 0.0) {
                connection->Actor->eventSendClientAdjustment();
            }

            for (AActor* actor : actors) {
                if (!actor)
                    continue;

                if (actor->ObjectFlags & 0x2000000000000000)
                    continue;

                if (!(*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1))
                    continue;

                if (actor->IsA<APlayerController>() && (connection->Actor != actor)) {
                    continue;
                }

                bool markedAsNoGC = false;

                if (!(actor->ObjectFlags & 0x0000008000000000)) {
                    actor->ObjectFlags |= 0x0000008000000000;
                    markedAsNoGC = true;
                }

                (*(void(__fastcall**)(UNetConnection*, AActor*))(*(__int64*)connection + 624LL))(connection, actor);

                if (actor->bNetTemporary || actor->bTearOff) {
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

                if (!channel && actor && !(actor->ObjectFlags & 0x2000000000000000) && (*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1)) {
                    //printf("[NETWORKING] No channel for %s, creating...\n", actor->GetFullName().c_str());

                    channel = reinterpret_cast<UActorChannel * (__thiscall*)(UNetConnection * connection, int channelType, uint32_t openedLocally, int chIndex)>(Globals::baseAddress + 0x061daa0)(connection, 2, 1, -1);

                    if (channel) { //&& (*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1)
                        //printf("[NETWORKING] Setting channel actor...\n");
                        reinterpret_cast<void(__thiscall*)(UActorChannel*, AActor*)>(Globals::baseAddress + 0x0611970)(channel, actor);
                    }
                }


                if (channel && channel->Actor && !(actor->ObjectFlags & 0x2000000000000000) && (*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1) && channel->NumOutRec < 0xFE) {
                    //printf("[NETWORKING] Replication time!\n");
                    {
                        std::scoped_lock t(Globals::Telemetry::ReplicationFNameMutex);
                    
                        Globals::Telemetry::ReplicationFNames.push_back(channel->Actor->Class->Name.FNameEntryId);
                    }

                    reinterpret_cast<void (*)(UActorChannel * channel)>(Globals::baseAddress + 0x0613050)(channel);
                    if (channel->Actor) {
                        channel->Actor->NetTag++;
                    }
                }

                if (markedAsNoGC && actor) {
                    actor->ObjectFlags &= ~(0x0000008000000000);
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

            //Globals::DisableGC = false;

            while (!Globals::channelsToClose.empty()) {
                UActorChannel* ch = Globals::channelsToClose.back();

                Globals::channelsToClose.pop_back();

                if (ch && ch->Connection && ch->Actor) {
                    (*(reinterpret_cast<void(**)(UActorChannel*)>(*(__int64*)ch + 0x210)))(ch);
                }
            }

            // Globals::DisableGC = true;
        }
    }
}

namespace ClientNetworking {
    void JoinServer(std::wstring ip) {
        std::wstring cmd = L"open ";

        cmd.append(ip);

        Engine::ExecConsoleCommand(cmd.c_str());
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