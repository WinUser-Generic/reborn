#pragma once

#include <Windows.h>

#include "imgui/imgui.h"
#include "imgui/imgui_stdlib.h"

#include "Metagame.hpp"

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

namespace Overlay {
    void OpenServerBrowser();

    void OpenDirectConnect();

    void StartLaunchSequence(const wchar_t* command);

    void OpenSoloVSAI();

    void OpenCampaign();

    void OpenOperations();

    void OpenSaveManager();

    std::string GetItemDisplayName(const Metagame::Item* item);

    void Render();
}