#pragma once

#include "BB/SdkHeaders.hpp"
#include "httplib.h"

#include "Globals.hpp"
#include "Hooks.hpp"
#include "ServerSettings.hpp"

namespace Init {
    void Globals();

    void Console();

    void Hooks();

    void ImGUI();

    void FetchGameCoordinatorConfig();

    void ServerConfig();
}