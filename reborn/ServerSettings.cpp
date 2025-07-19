#include "ServerSettings.hpp"

namespace ServerSettings {
    int gamePort = 7777;

    float tickrate = 30.0f;

    unsigned int NumPlayersToStart = 2;

    unsigned int TeamMinSizeForStart = 0;

    const wchar_t* MapString = L"open Caverns_P";

    bool amRunningWithGameCoordinator = false;

    std::string GameCoordinatorBase = "";

    std::string GameCoordinatorKey = "";
}