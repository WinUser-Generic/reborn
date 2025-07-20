#pragma once

#include <string>

#include "json.hpp"
#include "httplib.h"

namespace GameCoordinator {
    struct ServerBrowserEntry {
        std::string InstanceName = "";
        std::string HumanReadableInstanceMapMode = "";
        int CurrentNumPlayers = 0;
        int MaxNumPlayers = 0;
        std::string ServerConnectString = "";
        bool MatchStarted = false;

        ServerBrowserEntry(const nlohmann::json& inJson) {
            InstanceName = inJson["instanceName"];
            HumanReadableInstanceMapMode = inJson["humanReadableInstanceMapMode"];
            CurrentNumPlayers = inJson["currentNumPlayers"];
            MaxNumPlayers = inJson["maxNumPlayers"];
            ServerConnectString = inJson["serverConnectString"];
            MatchStarted = inJson["matchStarted"];
        }

        ServerBrowserEntry() {

        }
    };

    void RefreshServerBrowser();

    void RefreshWaitingForPlayers();

    void CreateGame(std::string InstanceName, std::string HumanReadableInstanceMapMode, std::string ServerStartupCommand, int MaxNumPlayers, std::string Password);
}