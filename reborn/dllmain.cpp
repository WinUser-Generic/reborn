#include <thread>
#include <iostream>
#include <format>
#include <mutex>
#include <random>
#include <algorithm>
#include <execution>

#include "BB/SdkHeaders.hpp"
#include "safetyhook.hpp"
#include "httplib.h"

#include "Init.hpp"
#include "Globals.hpp"
#include "Engine.hpp"

void MainThread() {
    Init::Globals();
    Init::Console();
    Init::Hooks();

    while (!Globals::GetGWorld()) {
        if (Globals::amServer) {
            *(__int8*)(Globals::baseAddress + 0x3495af8) = 0; // GIsClient
            *(__int8*)(Globals::baseAddress + 0x348fad7) = 1; // GIsServer
        }
    }

    if (Globals::amServer) {
        Engine::DontPauseOnLossOfFocus();
    }
    else {
        Init::ImGUI();
    }

    // Everything below this point is debug slop that should never make it to source control.
    // If you're reading this, I fucked up
    if (!Globals::amServer){
        while (true) {
            if (GetAsyncKeyState(VK_F7)) {
                SDKUtils::GetLastOfClass< UPoplarCharacterSelectGFxMovie>()->bMovieAndManagerReady = 1;

                SDKUtils::GetLastOfClass<APoplarPlayerController>()->ServerCharacterSelectInput(29);
                SDKUtils::GetLastOfClass<APoplarPlayerController>()->ServerSetHasReceivedEntitlements();
                SDKUtils::GetLastOfClass<APoplarPlayerController>()->eventServerSelectCharacter(nullptr, nullptr, nullptr, true);
                SDKUtils::GetLastOfClass<APoplarPlayerController>()->ServerPlayerSelectClass(L"", L"");

                while (GetAsyncKeyState(VK_F7)) {

                }
            }
        }
    }
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        std::thread t(MainThread);
        t.detach();
    }

    return TRUE;
}

