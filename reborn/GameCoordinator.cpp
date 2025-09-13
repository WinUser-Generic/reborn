#include "GameCoordinator.hpp"

#include "Globals.hpp"
#include "Constants.hpp"

namespace GameCoordinator {
    void Login(std::string name) {
        if (!Globals::GameCoordinatorHttpClient.get()) {
            Globals::GameCoordinatorHttpClient = std::make_shared<httplib::Client>(Constants::GameCoordinatorEndpoint);
        }

        nlohmann::json payload = nlohmann::json();

        payload["Name"] = name;

        httplib::Result res = Globals::GameCoordinatorHttpClient.get()->Post("/api/login", payload.dump(), "application/json");

        if (res->status == 200) {
            nlohmann::json response = nlohmann::json::parse(res->body);

            Globals::MyGCGuid = response["myGuid"];
            Globals::MyGCKey = response["authToken"];
        }
    }

    void RefreshAllLobbies() {
        if (!Globals::MyGCKey.empty()) {
            httplib::Headers headers = {
                {"Authorization", "Bearer " + Globals::MyGCKey}
            };

            httplib::Result res = Globals::GameCoordinatorHttpClient.get()->Get("/api/login", headers);

            if (res->status == 200) {
                std::vector<nlohmann::json> resJson = nlohmann::json::parse(res->body).get<std::vector<nlohmann::json>>();
                
                std::vector<Lobby> newLobbies = std::vector<Lobby>();

                for (nlohmann::json resJsonObj : resJson) {
                    newLobbies.push_back(Lobby(resJsonObj));
                }

                Globals::Lobbies = newLobbies;
            }
        }
    }

    std::string CreateLobby(std::string LobbyName, std::vector<std::string> LobbyTags, std::optional<std::string> LobbyPassword) {
        if (!Globals::MyGCKey.empty()) {
            httplib::Headers headers = {
                {"Authorization", "Bearer " + Globals::MyGCKey}
            };

            nlohmann::json payload = nlohmann::json();

            payload["LobbyName"] = LobbyName;
            payload["LobbyTags"] = LobbyTags;

            if (LobbyPassword.has_value()) {
                payload["LobbyPassword"] = LobbyPassword.value();
            }

            httplib::Result res = Globals::GameCoordinatorHttpClient.get()->Post("/api/lobby", headers, payload.dump(), "application/json");

            if (res->status == 200) {
                return nlohmann::json::parse(res->body)["guid"];
            }
        }

        return "";
    }

    bool JoinLobby(std::string LobbyGuid, std::optional<std::string> LobbyPassword) {
        if (!Globals::MyGCKey.empty()) {
            httplib::Headers headers = {
                {"Authorization", "Bearer " + Globals::MyGCKey}
            };

            nlohmann::json payload = nlohmann::json();

            payload["LobbyGuid"] = LobbyGuid;
            
            if (LobbyPassword.has_value()) {
                payload["LobbyPassword"] = LobbyPassword.value();
            }

            httplib::Result res = Globals::GameCoordinatorHttpClient.get()->Post("/api/lobby/join", headers, payload.dump(), "application/json");

            return res->status == 200;
        }
    }
}

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