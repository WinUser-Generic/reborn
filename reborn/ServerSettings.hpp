#pragma once

#include <string>

namespace ServerSettings {
    extern int gamePort;

    extern float tickrate;

    extern unsigned int NumPlayersToStart;

    extern unsigned int TeamMinSizeForStart;

    extern const wchar_t* MapString;

    extern bool amRunningWithGameCoordinator;

    extern std::string GameCoordinatorBase;

    extern std::string GameCoordinatorKey;
}