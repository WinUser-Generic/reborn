#include "ServerSettings.hpp"

namespace ServerSettings {
    int gamePort = 7777;

    float tickrate = 0.0f;

    unsigned int NumPlayersToStart = 1;

    unsigned int TeamMinSizeForStart = 0;

    const wchar_t* MapString = L"open Toby_Raid_P";

    bool amRunningWithGameCoordinator = false;

    std::string GameCoordinatorBase = "";

    std::string GameCoordinatorKey = "";
}