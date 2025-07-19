#pragma once

#include <d3dcommon.h>
#include <dxgi.h>
#include <d3d11.h>

#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_stdlib.h"
#include "safetyhook.hpp"
#include "BB/SdkHeaders.hpp"

namespace Hooks {
    extern SafetyHookInline ProcessRemoteFunction;

    bool ProcessRemoteFunctionHook(AActor* actor, UFunction* function, void* params, void* stack);

    extern SafetyHookInline WorldControlMessage;

    bool IsNetReady(UNetConnection* connection, int saturate);

    void WorldControlMessageHook(UWorld* world, UNetConnection* connection, uint8_t message, void* inbunch);

    extern SafetyHookInline GameEngineTick;

    void GameEngineTickHook(UGameEngine* engine, float DeltaTime);

    extern SafetyHookInline MainMenu;

    bool MainMenuHook(__int64 a1, __int64* a2, __int64 a3, __int64 a4, int a5, int a6, __int64* a7);

    extern SafetyHookInline ProcessEvent;

    void StartupCompletedHook();

    void MainPanelClickedHook(uint32_t PanelId);

    void ProcessEventHook(UObject* object, UFunction* function, void* params);

    extern SafetyHookInline DestroyActor;

    bool DestroyActorHook(UWorld* world, AActor* actor, bool force);

    extern SafetyHookInline JustDoNothing;

    extern SafetyHookInline JustDoNothing2;

    void JustDoNothingHook(void* a1, void* a2, void* a3);

    extern SafetyHookInline PoplarGameInfoSetup;

    __int64 PoplarGameInfoSetupHook(APoplarGameInfo* a1, __int64 a2);

    extern SafetyHookInline ServerCinematicCrashHook;

    __int64 ServerCinematicCrash(__int64 a1);

    struct Empy {
        unsigned char pad[0x100];
    };

    extern SafetyHookInline ServerCinematicCrash2Hook;

    __int64 ServerCinematicCrash2(__int64 a1,
        unsigned int a2,
        __int8* a3,
        __int8* a4,
        __int64 a5,
        int a6,
        int a7,
        char a8,
        unsigned int a9,
        int a10);

    extern SafetyHookInline ServerCinematicCrash3Hook;

    __int64 ServerCinematicCrash3(__int64 a1);

    extern SafetyHookInline ConsoleCommand;

    bool ConsoleCommandHook(__int64 a1, const wchar_t* a2, __int64 a3);

    extern HWND window;
    extern WNDPROC oWndProc;
    extern ID3D11Device* pDevice;
    extern ID3D11DeviceContext* pContext;
    extern ID3D11RenderTargetView* mainRenderTargetView;

    extern SafetyHookInline ResizeBuffers;

    extern bool init;

    HRESULT ResizeBuffersHook(
        IDXGISwapChain* pSwapChain,
        UINT        BufferCount,
        UINT        Width,
        UINT        Height,
        DXGI_FORMAT NewFormat,
        UINT        SwapChainFlags
    );

    extern SafetyHookInline Present;

    LRESULT WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

    HRESULT PresentHook(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
}