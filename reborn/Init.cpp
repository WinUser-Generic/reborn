#include "Init.hpp"

namespace Init {
    void Globals() {
        Globals::baseAddress = (size_t)GetModuleHandleA(nullptr);

        GObjects = reinterpret_cast<TArray<UObject*>*>(Globals::baseAddress + (size_t)0x035152D0);
        GNames = reinterpret_cast<TArray<FNameEntry*>*>(Globals::baseAddress + (size_t)0x03515228);

        if ((size_t)GetModuleHandleA("Serverborn.exe") != 0x0) {
            Globals::amServer = true;
        }
    }

    void Console() {
        AllocConsole();
        FILE* fileOut = NULL;
        FILE* fileErr = NULL;
        FILE* fileIn = NULL;
        freopen_s(&fileOut, "CONOUT$", "w", stdout);
        freopen_s(&fileErr, "CONOUT$", "w", stderr);
        freopen_s(&fileIn, "CONIN$", "r", stdin);
    }

    void Hooks() {
        if (Globals::amServer) {
            Hooks::DestroyActor = safetyhook::create_inline((void*)(Globals::baseAddress + 0x3EF070), &Hooks::DestroyActorHook);
            Hooks::PoplarGameInfoSetup = safetyhook::create_inline((void*)(Globals::baseAddress + 0x1474140), &Hooks::PoplarGameInfoSetupHook);
            Hooks::WorldControlMessage = safetyhook::create_inline((void*)(Globals::baseAddress + 0x045c540), &Hooks::WorldControlMessageHook);
            Hooks::ServerCinematicCrashHook = safetyhook::create_inline((void*)(Globals::baseAddress + 0x2c4780), &Hooks::ServerCinematicCrash);
            Hooks::ServerCinematicCrash2Hook = safetyhook::create_inline((void*)(Globals::baseAddress + 0x2c69f0), &Hooks::ServerCinematicCrash2);
            Hooks::ServerCinematicCrash3Hook = safetyhook::create_inline((void*)(Globals::baseAddress + 0x2c74f0), &Hooks::ServerCinematicCrash3);
        }
        else {
            Hooks::MainMenu = safetyhook::create_inline((void*)(Globals::baseAddress + 0x127D860), &Hooks::MainMenuHook);
            Hooks::JustDoNothing = safetyhook::create_inline((void*)(Globals::baseAddress + 0x16EC4D0), &Hooks::JustDoNothingHook);
            Hooks::JustDoNothing2 = safetyhook::create_inline((void*)(Globals::baseAddress + 0xE5F320), &Hooks::JustDoNothingHook);
        }

        Hooks::GameEngineTick = safetyhook::create_inline((void*)(Globals::baseAddress + 0x0207e10), &Hooks::GameEngineTickHook);
        Hooks::ConsoleCommand = safetyhook::create_inline((void*)(Globals::baseAddress + 0x01fca00), &Hooks::ConsoleCommandHook);
        Hooks::ProcessEvent = safetyhook::create_inline((void*)(Globals::baseAddress + 0x109ca0), &Hooks::ProcessEventHook);
        Hooks::ProcessRemoteFunction = safetyhook::create_inline((void*)(Globals::baseAddress + 0x0728fd0), &Hooks::ProcessRemoteFunctionHook);
    }

    void ImGUI() {
        WNDCLASSEX windowClass;
        windowClass.cbSize = sizeof(WNDCLASSEX);
        windowClass.style = CS_HREDRAW | CS_VREDRAW;
        windowClass.lpfnWndProc = DefWindowProc;
        windowClass.cbClsExtra = 0;
        windowClass.cbWndExtra = 0;
        windowClass.hInstance = GetModuleHandle(NULL);
        windowClass.hIcon = NULL;
        windowClass.hCursor = NULL;
        windowClass.hbrBackground = NULL;
        windowClass.lpszMenuName = NULL;
        windowClass.lpszClassName = L"Reborn";
        windowClass.hIconSm = NULL;

        ::RegisterClassEx(&windowClass);

        HWND window = ::CreateWindow(windowClass.lpszClassName, L"Reborn DirectX Window", WS_OVERLAPPEDWINDOW, 0, 0, 100, 100, NULL, NULL, windowClass.hInstance, NULL);

        HMODULE libD3D11 = nullptr;

        while (!libD3D11)
            libD3D11 = ::GetModuleHandle(L"d3d11.dll");

        void* D3D11CreateDeviceAndSwapChain;
        D3D11CreateDeviceAndSwapChain = ::GetProcAddress(libD3D11, "D3D11CreateDeviceAndSwapChain");

        D3D_FEATURE_LEVEL featureLevel;
        const D3D_FEATURE_LEVEL featureLevels[] = { D3D_FEATURE_LEVEL_10_1, D3D_FEATURE_LEVEL_11_0 };

        DXGI_RATIONAL refreshRate;
        refreshRate.Numerator = 60;
        refreshRate.Denominator = 1;

        DXGI_MODE_DESC bufferDesc;
        bufferDesc.Width = 100;
        bufferDesc.Height = 100;
        bufferDesc.RefreshRate = refreshRate;
        bufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        bufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
        bufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;

        DXGI_SAMPLE_DESC sampleDesc;
        sampleDesc.Count = 1;
        sampleDesc.Quality = 0;

        DXGI_SWAP_CHAIN_DESC swapChainDesc;
        swapChainDesc.BufferDesc = bufferDesc;
        swapChainDesc.SampleDesc = sampleDesc;
        swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        swapChainDesc.BufferCount = 1;
        swapChainDesc.OutputWindow = window;
        swapChainDesc.Windowed = 1;
        swapChainDesc.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
        swapChainDesc.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;

        IDXGISwapChain* swapChain;
        ID3D11Device* device;
        ID3D11DeviceContext* context;

        ((long(__stdcall*)(
            IDXGIAdapter*,
            D3D_DRIVER_TYPE,
            HMODULE,
            UINT,
            const D3D_FEATURE_LEVEL*,
            UINT,
            UINT,
            const DXGI_SWAP_CHAIN_DESC*,
            IDXGISwapChain**,
            ID3D11Device**,
            D3D_FEATURE_LEVEL*,
            ID3D11DeviceContext**))(D3D11CreateDeviceAndSwapChain))(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, 0, featureLevels, 1, D3D11_SDK_VERSION, &swapChainDesc, &swapChain, &device, &featureLevel, &context);

        Globals::methodsTable = (__int64*)::calloc(205, sizeof(__int64));
        ::memcpy(Globals::methodsTable, *(__int64**)swapChain, 18 * sizeof(__int64));
        ::memcpy(Globals::methodsTable + 18, *(__int64**)device, 43 * sizeof(__int64));
        ::memcpy(Globals::methodsTable + 18 + 43, *(__int64**)context, 144 * sizeof(__int64));

        swapChain->Release();
        swapChain = NULL;

        device->Release();
        device = NULL;

        context->Release();
        context = NULL;

        ::DestroyWindow(window);
        ::UnregisterClass(windowClass.lpszClassName, windowClass.hInstance);

        Hooks::Present = safetyhook::create_inline(Globals::methodsTable[8], Hooks::PresentHook);
        Hooks::ResizeBuffers = safetyhook::create_inline(Globals::methodsTable[13], Hooks::ResizeBuffersHook);
    }

    void FetchGameCoordinatorConfig() {
        httplib::Result result = Globals::GameCoordinatorHttpClient.get()->Get("/api/games/server-config");

        std::string response = result->body;

        nlohmann::json serverConfigJSON = nlohmann::json::parse(response);

        std::string serverStartupCommand = serverConfigJSON["serverStartupCommand"].get<std::string>();

        ServerSettings::MapString = wcsdup(std::wstring(serverStartupCommand.begin(), serverStartupCommand.end()).c_str());

        ServerSettings::NumPlayersToStart = serverConfigJSON["maxNumPlayers"].get<int>();
        ServerSettings::gamePort = serverConfigJSON["port"].get<int>();
    }

    void ServerConfig() {
        LPWSTR cmdLine = GetCommandLineW();
        int argc;
        LPWSTR* argv = CommandLineToArgvW(cmdLine, &argc);

        if (argc > 3) {
            if (std::wstring(argv[3]).contains(L"GameCoordinator")) {
                ServerSettings::amRunningWithGameCoordinator = true;
            }
        }

        if (ServerSettings::amRunningWithGameCoordinator) {
            std::cout << "[NETWORKING] Init in game coordinator mode!" << std::endl;

            std::wstring wBase(argv[4]);
            ServerSettings::GameCoordinatorBase = std::string(wBase.begin(), wBase.end());

            std::wstring wKey(argv[5]);
            ServerSettings::GameCoordinatorKey = std::string(wKey.begin(), wKey.end());

            Globals::GameCoordinatorHttpClient = std::make_shared<httplib::Client>(ServerSettings::GameCoordinatorBase);

            Globals::GameCoordinatorHttpClient.get()->set_default_headers({
                {"X-Server-Token", ServerSettings::GameCoordinatorKey}
                });

            FetchGameCoordinatorConfig();
        }
    }
}