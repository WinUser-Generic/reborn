#pragma once

#include <string>

#include "json.hpp"
#include "httplib.h"

namespace GameCoordinator {
    enum ETeam
    {
        None = 0,
        TeamA = 1,
        TeamB = 2,
        Spectator = 3,
    };

    enum ELobbyState
    {
        PreGame = 0,
        WaitingForServer = 1,
        ServerLaunching = 2,
        InGame = 3,
    };

    enum EMode
    {
        PvE = 1,
        PvP = 2
    };

    struct LobbyPlayer {
        std::string Guid;
        std::string Name;
        ETeam Team;
        std::optional<std::string> CharacterObjectName;
        std::optional<std::string> SkinObjectName;
        std::optional<std::string> TauntObjectName;
        std::optional<std::string> GearSlotOneObjectName;
        std::optional<std::string> GearSlotTwoObjectName;
        std::optional<std::string> GearSlotThreeObjectName;

        LobbyPlayer(const nlohmann::json& inJson) {
            Guid = inJson["guid"];
            Name = inJson["name"];
            Team = inJson["team"];

            if (inJson["characterObjectName"] && inJson["characterObjectName"].is_string()) {
                CharacterObjectName = std::make_optional<std::string>(inJson["characterObjectName"]);
            }

            if (inJson["skinObjectName"] && inJson["skinObjectName"].is_string()) {
                SkinObjectName = std::make_optional<std::string>(inJson["skinObjectName"]);
            }

            if (inJson["tauntObjectName"] && inJson["tauntObjectName"].is_string()) {
                TauntObjectName = std::make_optional<std::string>(inJson["tauntObjectName"]);
            }

            if (inJson["gearSlotOneObjectName"] && inJson["gearSlotOneObjectName"].is_string()) {
                GearSlotOneObjectName = std::make_optional<std::string>(inJson["gearSlotOneObjectName"]);
            }

            if (inJson["gearSlotTwoObjectName"] && inJson["gearSlotTwoObjectName"].is_string()) {
                GearSlotTwoObjectName = std::make_optional<std::string>(inJson["gearSlotTwoObjectName"]);
            }

            if (inJson["gearSlotThreeObjectName"] && inJson["gearSlotThreeObjectName"].is_string()) {
                GearSlotThreeObjectName = std::make_optional<std::string>(inJson["gearSlotThreeObjectName"]);
            }
        }
    };

    struct Lobby {
        std::string Guid;
        std::string Name;
        std::string HostPlayerGuid;
        ELobbyState State;
        EMode Mode;
        bool IsPasswordProtected;
        std::vector<std::string> LobbyTags;
        std::vector<LobbyPlayer> LobbyPlayers;
        std::optional<std::string> HumanReadableMapModeName;
        std::optional<std::string> ServerStartString;

        Lobby(const nlohmann::json& inJson) {
            Guid = inJson["guid"];
            Name = inJson["name"];
            HostPlayerGuid = inJson["hostPlayerGuid"];
            State = inJson["state"];
            Mode = inJson["mode"];
            IsPasswordProtected = inJson["isPasswordProtected"];
            
            LobbyTags = std::vector<std::string>();
            for (const nlohmann::json& tag : inJson["lobbyTags"]) {
                LobbyTags.push_back(tag);
            }

            LobbyPlayers = std::vector<LobbyPlayer>();
            for (const nlohmann::json& player : inJson["lobbyPlayers"]) {
                LobbyPlayers.push_back(LobbyPlayer(player));
            }

            if (inJson["humanReadableMapModeName"] && inJson["humanReadableMapModeName"].is_string()) {
                HumanReadableMapModeName = std::make_optional<std::string>(inJson["humanReadableMapModeName"]);
            }

            if (inJson["serverStartString"] && inJson["serverStartString"].is_string()) {
                ServerStartString = std::make_optional<std::string>(inJson["serverStartString"]);
            }
        }
    };

    struct ChatMessage {
        bool IsSystemMessage;
        std::optional<std::string> PlayerName;
        std::string Message;

        ChatMessage(const nlohmann::json& inJson) {
            IsSystemMessage = inJson["isSystemMessage"];

            if (inJson["playerFrom"] && inJson["playerFrom"].is_string()) {
                PlayerName = std::make_optional<std::string>(inJson["playerFrom"]);
            }

            Message = inJson["Message"];
        }
    };

    struct ChatRoom {
        std::vector<ChatMessage> Messages;

        ChatRoom() {
            Messages = std::vector<ChatMessage>();
        }

        void AddMessages(const nlohmann::json& inJson) {
            for (const nlohmann::json& message : inJson) {
                Messages.push_back(ChatMessage(message));
            }
        }
    };

    void Login(std::string name);

    void RefreshAllLobbies();

    void CreateLobby(std::string LobbyName, std::vector<std::string> LobbyTags, std::optional<std::string> LobbyPassword);
};

/*
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
*/