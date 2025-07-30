#pragma once

#include <vector>
#include <mutex>
#include <iostream>

#include "httplib.h"

#include "BB/SdkHeaders.hpp"
#include "Metagame.hpp"
#include "GameCoordinator.hpp"

namespace Globals {
    struct ServerPlayer {
        UNetConnection* Connection = nullptr;
        std::vector<AActor*> SentTemporaries = std::vector<AActor*>();
        std::string Name;
        UPoplarPlayerNameIdentifierDefinition* Character = nullptr;
        UPoplarMetaSkinDefinition* OptionalSkin = nullptr;
        UPoplarMetaTauntDefinition* OptionalTaunt = nullptr;
        UPoplarPerkFunction* GearSlotOne = nullptr;
        UPoplarPerkFunction* GearSlotTwo = nullptr;
        UPoplarPerkFunction* GearSlotThree = nullptr;
        bool shouldReplicateTo = false;
        int UniqueId = 0;

        ServerPlayer(std::string PlayerName, std::string CharacterObjectName, std::string SkinObjectName, std::string TauntObjectName, std::string GearSlotOneObjectName, std::string GearSlotTwoObjectName, std::string GearSlotThreeObjectName){
            this->Name = PlayerName;
            this->Character = UObject::FindObject<UPoplarPlayerNameIdentifierDefinition>(CharacterObjectName);

            if (SkinObjectName.size() > 0)
                this->OptionalSkin = UObject::FindObject<UPoplarMetaSkinDefinition>(SkinObjectName);

            if (TauntObjectName.size() > 0)
                this->OptionalTaunt = UObject::FindObject<UPoplarMetaTauntDefinition>(TauntObjectName);

            if (GearSlotOneObjectName.size() > 0)
                this->GearSlotOne = UObject::FindObject<UPoplarPerkFunction>(GearSlotOneObjectName);

            if (GearSlotTwoObjectName.size() > 0)
                this->GearSlotTwo = UObject::FindObject<UPoplarPerkFunction>(GearSlotTwoObjectName);

            if (GearSlotThreeObjectName.size() > 0)
                this->GearSlotThree = UObject::FindObject<UPoplarPerkFunction>(GearSlotThreeObjectName);
        }
    };

    extern ServerPlayer* NextExpectedServerPlayer;

    extern std::vector<ServerPlayer> ServerPlayers;

    extern uintptr_t baseAddress;

    extern UTcpNetDriver* netDriver;

    extern std::vector<UActorChannel*> channelsToClose;

    extern std::mutex mutex;

    extern float time;

    extern bool amServer;

    extern bool hasStartupMassacreHappened;

    extern float timeTillStartupMassacre;

    extern float timeTillHumanStart;

    extern bool haveHumansStarted;

    extern std::vector<int> AugStatus;

    extern bool hasDoneInitialTravel;

    extern std::vector<APoplarPlayerController*> ppcsWeSetupAugsFor;

    extern __int64* methodsTable;

    extern bool SaveManagerOpen;

    extern bool NewSaveOpen;

    extern bool SoloVSAIOpen;

    extern bool CampaignOpen;

    extern bool OperationsOpen;

    extern bool amStandalone;

    extern bool DirectConnectOpen;

    extern bool ServerBrowserOpen;

    extern bool didStandaloneCharacterInitialization;

    extern float timeTillMutationInit;

    extern float ShutdownTimer;
    
    extern bool CreateGameOpen;

    extern std::vector<Metagame::SaveFile> saveFiles;

    extern unsigned int CurrentSaveFile;

    extern bool didSendPreferencesToServer;

    extern std::string selectedCharacter;

    extern Metagame::Item* GearSlotOne;
    extern Metagame::Item* GearSlotTwo;
    extern Metagame::Item* GearSlotThree;

    extern Metagame::CharacterSkin* CharacterSkin;
    extern Metagame::CharacterTaunt* CharacterTaunt;

    extern float timeSinceGameControllerServerPoll;

    extern std::shared_ptr<httplib::Client> GameCoordinatorHttpClient;

    extern std::vector<GameCoordinator::ServerBrowserEntry> ServerBrowserEntries;

    enum ELaunchSequenceState : int8_t {
        NotOpen = 0,
        CharacterSelect = 1,
        GearSelect = 2
    };

    extern ELaunchSequenceState LaunchSequenceState;

    extern const wchar_t* LaunchCommand;

    extern unsigned int MatchIndex; // TODO: this is horrifying, but we don't have a match ID yet on our objects so here it is

    extern bool ConnectedToGameCoordinatorMatch;
    
    extern bool DisplayWaitingForPlayers;

    extern GameCoordinator::ServerBrowserEntry CurrentMatchEntry;

    UWorld* GetGWorld();

    void OnWorldSwitch();

    extern std::mutex NetworkObjectListMutex;
    
    extern std::vector<AActor*> NetworkObjectList;

    extern bool CharacterSelectMenuOpen;

    extern bool CharacterSelectHasLockedIn;

    extern bool CharacterSelectThisPossesionsTheRealOne;

    extern bool GearViewerOpen;

    namespace Telemetry {
        extern std::mutex TickrateMutex;

        extern std::vector<float> Tickrates;

        extern std::mutex ReplicationFNameMutex;

        extern std::vector<int> ReplicationFNames;
    }
}