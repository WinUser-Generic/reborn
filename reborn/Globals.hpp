#pragma once

#include <vector>
#include <mutex>
#include <iostream>

#include "httplib.h"

#include "BB/SdkHeaders.hpp"
#include "Metagame.hpp"
#include "GameCoordinator.hpp"

namespace Globals {
    extern uintptr_t baseAddress;

    extern UTcpNetDriver* netDriver;

    extern std::vector<UNetConnection*> connections;

    extern std::vector<std::pair<UNetConnection*, std::vector<AActor*>*>> sentTemporaries;

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

    extern std::vector<Metagame::SaveFile> saveFiles;

    extern unsigned int CurrentSaveFile;

    extern bool didSendPreferencesToServer;

    extern std::string selectedCharacter;

    extern Metagame::Item* GearSlotOne;
    extern Metagame::Item* GearSlotTwo;
    extern Metagame::Item* GearSlotThree;

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
}