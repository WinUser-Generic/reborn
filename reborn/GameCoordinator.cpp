#include "GameCoordinator.hpp"

#include "Globals.hpp"
#include "Constants.hpp"

/*
namespace GameCoordinator {
    void CreateGame(std::string InstanceName, std::string HumanReadableInstanceMapMode, std::string ServerStartupCommand, int MaxNumPlayers, std::string Password) {
        httplib::Result result;

        if (!Globals::GameCoordinatorHttpClient.get()) {
            Globals::GameCoordinatorHttpClient = std::make_shared<httplib::Client>(Constants::GameCoordinatorEndpoint);
        }

        nlohmann::json jsonObj = nlohmann::json();

        jsonObj["InstanceName"] = InstanceName;
        jsonObj["HumanReadableInstanceMapMode"] = HumanReadableInstanceMapMode;
        jsonObj["ServerStartupCommand"] = ServerStartupCommand;
        jsonObj["MaxNumPlayers"] = MaxNumPlayers;

        std::string bearer = "Bearer ";
        bearer += Password;

        httplib::Headers headers = {
            {"Authorization", bearer.c_str()}
        };

        Globals::GameCoordinatorHttpClient.get()->Post("/api/games", headers, jsonObj.dump(), "application/json");
    }

    void RefreshServerBrowser() {
        httplib::Result result;

        if (!Globals::GameCoordinatorHttpClient.get()) {
            Globals::GameCoordinatorHttpClient = std::make_shared<httplib::Client>(Constants::GameCoordinatorEndpoint);
        }

        result = Globals::GameCoordinatorHttpClient.get()->Get("/api/games");

        if (!result || result->status != 200) {
            std::cout << "[NETWORKING] Failed to refresh server list!" << std::endl;
            return;
        }

        Globals::ServerBrowserEntries.clear();

        std::vector<nlohmann::json> entries = nlohmann::json::parse(result->body).get<std::vector<nlohmann::json>>();

        for (nlohmann::json browserEntry : entries) {
            Globals::ServerBrowserEntries.push_back(ServerBrowserEntry(browserEntry));
        }

        return;
    }

    void RefreshWaitingForPlayers() {
        httplib::Result result;

        if (!Globals::GameCoordinatorHttpClient.get()) {
            Globals::GameCoordinatorHttpClient = std::make_shared<httplib::Client>(Constants::GameCoordinatorEndpoint);
        }

        result = Globals::GameCoordinatorHttpClient.get()->Get("/api/games");

        if (!result || result->status != 200) {
            std::cout << "[NETWORKING] Failed to refresh server list!" << std::endl;
            return;
        }

        std::vector<nlohmann::json> entries = nlohmann::json::parse(result->body).get<std::vector<nlohmann::json>>();

        if (Globals::MatchIndex < entries.size()) {
            Globals::CurrentMatchEntry = ServerBrowserEntry(entries[Globals::MatchIndex]);
        }

        return;
    }
}
*/