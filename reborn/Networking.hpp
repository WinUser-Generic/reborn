#pragma once

#include "json.hpp"
#include "safetyhook.hpp"

#include "Globals.hpp"
#include "Utils.hpp"
#include "ServerSettings.hpp"
#include "Engine.hpp"

namespace ServerNetworking {
    void GameControllerPoll();

    void InitListen();

    UActorChannel* GetActorChannelForActor(AActor* actor, UNetConnection* connection);

    std::vector<AActor*> BuildConsiderList(AWorldInfo* WorldInfo, UNetDriver* NetDriver);

    uint8_t GetConnectionState(UNetConnection* connection);

    bool CompareActorPriority(AActor* a, AActor* b);

    bool ConnectionFull(UNetConnection* connection);

    void TickNetServer(UTcpNetDriver* NetDriver);
}

namespace ClientNetworking {
    void JoinServer(std::wstring ip);

    bool IsNetReady(UNetConnection* connection, int saturate);

    void ForceAlwaysNetReady();
}