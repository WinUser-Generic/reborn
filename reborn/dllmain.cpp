// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <thread>
#include "BB/SdkHeaders.hpp"
#include "safetyhook.hpp"
#include <iostream>
#include <format>
#include <mutex>
#include <random>
#include <algorithm>
#include <execution>
#include <d3dcommon.h>
#include <dxgi.h>
#include <d3d11.h>
#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_stdlib.h"
#include <filesystem>
#include <shlobj.h>
#include <fstream>
#include "json.hpp"

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

namespace Constants {
    std::unordered_map<std::string, std::string> CharacterLookupTable = {
        {
            "AssaultJump",
            "Caldarius"
        },
        {
            "Blackguard",
            "Galilea"
        },
        {
            "Bombirdier",
            "Ernest"
        },
        {
            "BoyAndDjinn",
            "Shayne & Aurox"
        },
        {
            "ChaosMage",
            "Orendi"
        },
        {
            "CornerSneaker",
            "Pendles"
        },
        {
            "DarkAssassin",
            "Deande"
        },
        {
            "DarkElfRanger",
            "Thorn"
        },
        {
            "DeathBlade",
            "Rath"
        },
        {
            "DwarvenWarrior",
            "Boldur"
        },
        {
            "GentSniper",
            "Marquis"
        },
        {
            "IceGolem",
            "Kelvin"
        },
        {
            "LeapingLuchador",
            "El Dragon"
        },
        {
            "MachineGunner",
            "Montana"
        },
        {
            "MageBlade",
            "Phoebe"
        },
        {
            "ModernSoldier",
            "Oscar Mike"
        },
        {
            "MutantFist",
            "Mellka"
        },
        {
            "PapaShotgun",
            "Ghalt"
        },
        {
            "PenguinMech",
            "Toby"
        },
        {
            "PlagueBringer",
            "Beatrix"
        },
        {
            "RocketHawk",
            "Benedict"
        },
        {
            "RogueCommander",
            "Reyna"
        },
        {
            "RogueSoldier",
            "Whiskey Foxtrot"
        },
        {
            "SideKick",
            "Kid Ultra"
        },
        {
            "SoulCollector",
            "Attikus"
        },
        {
            "SpiritMech",
            "ISIC"
        },
        {
            "SunPriestess",
            "Ambra"
        },
        {
            "TacticalBuilder",
            "Kleese"
        },
        {
            "TribalHealer",
            "Miko"
        },
        {
            "WaterMonk",
            "Alani"
        }
    };

    namespace PvAIMaps {
        std::vector<std::pair<std::string, const wchar_t*>> Supercharge = {
            {
                "Supercharge - Ziggurat", L"open Wishbone_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            },
            {
                "Supercharge - Horizon", L"open Ripple_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            },
            {
                "Supercharge - Permafrost", L"open Cascade_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            }
        };

        std::vector < std::pair<std::string, const wchar_t*>> Incursion = {
            {
                "Incursion - Echelon", L"open Viaduct_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            },
            {
                "Incursion - Monuments", L"open Snowdrift_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            },
            {
                "Incursion - Overgrowth", L"open Inc_Stronghold2_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            }
        };

        std::vector < std::pair<std::string, const wchar_t*>> Capture = {
            {
                "Capture - Outback", L"open Ravine_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            },
            {
                "Capture - Snowblind", L"open Snowblind_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            },
            {
                "Capture - Temples", L"open BlissRuins_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            }
        };

        std::vector < std::pair<std::string, const wchar_t*>> Meltdown = {
            {
                "Meltdown - Outskirts", L"open SlumScort_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            },
            {
                "Meltdown - Paradise", L"open Skirmish_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            },
            {
                "Meltdown - Coldsnap", L"open IceScort_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            }
        };

        std::vector < std::pair<std::string, const wchar_t*>> FaceOff = {
            {
                "Face-Off - Snowblind", L"open Snowblind_Headhunter_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            },
            {
                "Face-Off - Outback", L"open Ravine_Headhunter_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            },
            {
                "Face-Off - Temples", L"open BlissRuins_Headhunter_P?SpawnBotsTeamA=5?SpawnBotsTeamB=5"
            }
        };
    }
}

namespace Metagame {
    struct Item {
        std::string itemObjectName;
        std::string itemDisplayName;
        std::string itemFlavor;
        std::string itemDescription;
        uint32_t level;

        static std::string ParsePrefix(UPoplarPerkFunction* perk) {
            if (perk->DisplayNamePrefix.size() > 4) {
                std::string input = perk->DisplayNamePrefix.ToString();

                std::unordered_map<std::string, std::string> replacements = {
                    {"$FLAWED$", "Flawed"},
                    {"$LEGENDARY$", "Legendary"},
                    {"$RARE$", "Rare"},
                    {"$VERYRARE$", "Very Rare"},
                    {"$COMMON$", "Common"},
                    {"$EPIC$", "Epic"},
                    {"$UNCOMMON$", "Uncommon"}
                };

                for (const auto& pair : replacements) {
                    size_t pos = 0;
                    while ((pos = input.find(pair.first, pos)) != std::string::npos) {
                        input.replace(pos, pair.first.length(), pair.second);
                        pos += pair.second.length();
                    }
                }

                return input + " ";
            }

            return "";
        }

        Item() {
            itemObjectName = "";
            itemDisplayName = "";
            itemFlavor = "";
            itemDescription = "";
            level = 0;
        }

        Item(UPoplarPerkFunction* perk) {
            itemObjectName = perk->GetFullName();
            itemDisplayName = ParsePrefix(perk) + perk->DisplayName.ToString();
            itemFlavor = perk->LongDescription.ToString();
            // TODO: Actual item descriptions
            level = 0;
        }

        Item(UPoplarPerkFunction* perk, uint32_t level) {
            itemObjectName = perk->GetFullName();
            itemDisplayName = ParsePrefix(perk) + perk->DisplayName.ToString();
            itemFlavor = perk->LongDescription.ToString();
            // TODO: Actual item descriptions
            this->level = level;
        }
    };

    struct Character {
        std::string characterObjectName;
        std::string characterDisplayName;
        uint32_t level;
        float nextLevelProgress;

        Character(std::string characterObjectName, std::string characterDisplayName) {
            this->characterDisplayName = characterDisplayName;
            this->characterObjectName = characterObjectName;
            this->level = 0;
            this->nextLevelProgress = 0.0;
        }

        Character(std::string characterObjectName, std::string characterDisplayName, uint32_t level, float nextLevelProgress) {
            this->characterDisplayName = characterDisplayName;
            this->characterObjectName = characterObjectName;
            this->level = level;
            this->nextLevelProgress = nextLevelProgress;
        }
    };

    struct CharacterSkin {
        std::string skinDisplayName;
        std::string skinObjectName;
    };

    struct SaveFile {
        std::string name;
        bool everythingUnlocked;
        std::vector<Item> items;
        std::vector<Character> characters;
        std::vector<CharacterSkin> characterSkins;

        SaveFile(std::string name, bool everythingUnlocked) {
            this->name = name;
            this->everythingUnlocked = everythingUnlocked;

            this->characters = std::vector<Character>();
            this->items = std::vector<Item>();
            this->characterSkins = std::vector<CharacterSkin>();
        }
    };
}

namespace Settings {
    int32_t gamePort = 7777;

    float tickrate = 30.0f;

    unsigned int NumPlayersToStart = 4;

    unsigned int TeamMinSizeForStart = 0;

    const wchar_t* MapString = L"open Toby_Raid_P"; //
}

namespace Globals {
    uintptr_t baseAddress = 0x0;

    UTcpNetDriver* netDriver = 0x0;

    std::vector<UNetConnection*> connections = std::vector<UNetConnection*>();

    std::vector<std::pair<UNetConnection*, std::vector<AActor*>*>> sentTemporaries = std::vector<std::pair<UNetConnection*, std::vector<AActor*>*>>();

    std::vector<UActorChannel*> channelsToClose = std::vector<UActorChannel*>();

    std::mutex mutex;

    float time = 0.0f;

    bool amServer = false;

    bool hasStartupMassacreHappened = false;

    float timeTillStartupMassacre = 0.0f;

    std::vector<int> AugStatus = std::vector<int>();

    bool hasDoneInitialTravel = false;

    std::vector<APoplarPlayerController*> ppcsWeSetupAugsFor = std::vector<APoplarPlayerController*>();

    __int64* methodsTable = nullptr;

    bool SaveManagerOpen = false;

    bool NewSaveOpen = false;

    bool SoloVSAIOpen = false;

    bool amStandalone = false;

    bool didStandaloneCharacterInitialization = false;

    float timeTillMutationInit = 0.0f;

    std::vector<Metagame::SaveFile> saveFiles = std::vector<Metagame::SaveFile>();

    unsigned int CurrentSaveFile = 0;

    std::string selectedCharacter = "ModernSoldier";

    static Metagame::Item* GearSlotOne = nullptr;
    static Metagame::Item* GearSlotTwo = nullptr;
    static Metagame::Item* GearSlotThree = nullptr;

    enum ELaunchSequenceState : int8_t {
        NotOpen = 0,
        CharacterSelect = 1,
        GearSelect = 2
    };

    ELaunchSequenceState LaunchSequenceState = ELaunchSequenceState::NotOpen;

    const wchar_t* LaunchCommand = nullptr;

    UWorld* GetGWorld() {
        return *reinterpret_cast<UWorld**>(baseAddress + 0x34dfca0);
    }
}

namespace SDKUtils {
    template<typename T>
    T* GetLastOfClass() {
        UClass* theClass = T::StaticClass();
        for (int i = UObject::GObjObjects()->size() - 1; i >= 0; i--) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                return (T*)obj;
        }

        return nullptr;
    }

    template<typename T>
    std::vector<T*> GetAllOfClass() {
        std::vector<T*> ret = std::vector<T*>();

        UClass* theClass = T::StaticClass();
        for (int i = 0; i < UObject::GObjObjects()->size(); i++) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                ret.push_back((T*)obj);
        }

        return ret;
    }

    template<typename T>
    void ListAllOfClass() {
        UClass* theClass = T::StaticClass();
        for (int i = 0; i < UObject::GObjObjects()->size(); i++) {
            UObject* obj = UObject::GObjObjects()->at(i);

            if (obj && obj->IsA(theClass))
                printf("%s\n", obj->GetFullName().c_str());
        }
    }
}

namespace GameUtils {
    int32_t RarityStringToRarity(std::string rarityString) {
        std::string normalRarityString = rarityString;

        if (normalRarityString.contains("VeryRare")) {
            return 4;
        }
        else if (normalRarityString.contains("Uncommon")) {
            return 2;
        }
        else if (normalRarityString.contains("Rare")) {
            return 3;
        }
        else if (normalRarityString.contains("Common")) {
            return 1;
        }
        else if (normalRarityString.contains("Legendary")) {
            return 5;
        }
        else {
            std::cout << "Unrecognized Rarity: " << normalRarityString << std::endl;
            return 5;
        }
    }
}

namespace EngineLogic {
    void* EngineMalloc(size_t size) {
        return reinterpret_cast<void* (*)(size_t)>(Globals::baseAddress + 0xD2E0A0)(size);
    }

    UObject* StaticConstructObject(UClass* theClass, UObject* outer) {
        FName* name = (FName*)EngineMalloc(sizeof(FName));
        *name = FName();
        return reinterpret_cast<UObject * (*)(UClass*, UObject* outer, FName* name, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8, int a9)>(Globals::baseAddress + 0x8C050)(theClass, outer, name, 0, 0, 0, 0, 0, 0);
    }

    UObject* ScuffedDuplicateObject(UObject* InObject, UObject* Outer) {
        return reinterpret_cast<UObject*(*)(UObject* SourceObject, UObject* RootObject, UObject* DestOuter, const wchar_t* DestName, __int64 FlagMask, UClass* DestClass)>(Globals::baseAddress + 0x8C390)(InObject, InObject, Outer, L"None", 0x0, InObject->Class);
    }

    void ExecConsoleCommand(const wchar_t* command) {
        reinterpret_cast<void* (*)(uintptr_t, const wchar_t*, uintptr_t)>(Globals::baseAddress + 0x01fca00)((__int64)((*GObjects)[0]) + 0x25ebde8, command, 0);
    }

    void DontPauseOnLossOfFocus() {
        SDKUtils::GetLastOfClass<UEngine>()->bPauseOnLossOfFocus = false;
    }

    FString* MakeFString(const wchar_t* contents) {
        size_t length = wcslen(contents);

        FString* string = (FString*)EngineMalloc(sizeof(FString));

        *string = FString();

        string->ArrayCount = length;
        string->ArrayMax = string->ArrayCount;

        void* data = EngineMalloc(sizeof(wchar_t) * (string->ArrayMax + 1));

        memcpy_s(data, sizeof(wchar_t) * (string->ArrayMax + 1), contents, (length + 1) * sizeof(wchar_t));

        string->ArrayData = (wchar_t*)data;

        return string;
    }

    void* ScaleformMalloc(unsigned int size) {
        return reinterpret_cast<void* (*)(long poolId, __int64, __int64 size, __int64 align, __int64, int, __int64, __int64, int, __int64)>(Globals::baseAddress + 0xD2E160)(-2, 0, size, 0x1, 0x8, 0, 0x321001F, Globals::baseAddress + 0x26b62fa, 0, Globals::baseAddress + 0x26b62fa);
    }
}

namespace ImguiUtils {

}

namespace ServerNetworking {
    void InitListen() {
        SDKUtils::GetLastOfClass<UGameEngine>()->CreateNamedNetDriver(FName(020724));

        UTcpNetDriver* NetDriver = SDKUtils::GetLastOfClass<UTcpNetDriver>();

        UWorld* theWorld = *reinterpret_cast<UWorld**>(Globals::baseAddress + 0x34DFCA0);

        theWorld->NetDriver = NetDriver;

        SDKUtils::GetLastOfClass<AWorldInfo>()->NetMode = ENetMode::NM_DedicatedServer;

        FURL furl = FURL();

        furl.Port = Settings::gamePort;

        FString error = FString(L"");

        printf("[NETWORKING] Normal init status %i\n", reinterpret_cast<char (*)(UNetDriver * NetDriver, size_t world, FURL & url, FString & error)>(Globals::baseAddress + 0x0c21e30)(NetDriver, (__int64)theWorld + 0x58, furl, error));

        theWorld->NetDriver = NetDriver;

        NetDriver->NetConnectionClass = UTcpipConnection::StaticClass();

        Globals::netDriver = NetDriver;

        printf("[NETWORKING] Game networking listening on port %i!\n", Settings::gamePort);
    }

    UActorChannel* GetActorChannelForActor(AActor* actor, UNetConnection* connection) {
        if (connection) {
            for (UChannel* channel : connection->Channels) {
                if (channel) {
                    if (channel->IsA<UActorChannel>() && ((UActorChannel*)channel)->Actor == actor) {
                        return (UActorChannel*)channel;
                    }
                }
            }
        }

        return nullptr;
    }

    std::vector<AActor*> BuildConsiderList(AWorldInfo* WorldInfo, UNetDriver* NetDriver) {
        std::vector<AActor*> considerListFirstPass = SDKUtils::GetAllOfClass<AActor>();

        std::vector<AActor*> ret = std::vector<AActor*>();

        for (AActor* actor : considerListFirstPass) {
            if (!actor || actor->RemoteRole == ENetRole::ROLE_None || !actor->WorldInfo || actor->bPendingDelete) {
                continue;
            }
            else {
                if (actor->bAlwaysRelevant || actor->bForceNetUpdate || actor->bPendingNetUpdate || Globals::time - actor->LastNetUpdateTime > 1.0f / actor->NetUpdateFrequency) {
                    actor->LastNetUpdateTime = Globals::time;
                    ret.push_back(actor);
                }
            }
        }

        return ret;
    }

    uint8_t GetConnectionState(UNetConnection* connection) {
        return *(uint8_t*)((__int64)connection + 0x98);
    }

    bool CompareActorPriority(AActor* a, AActor* b) {
        int aPrio = 0;
        int bPrio = 0;

        /*
        * Ugly as shit atm, don't feel like making it better
        */

        if (a->IsA<APlayerController>()) {
            aPrio = 10;
        }

        if (b->IsA<APlayerController>()) {
            bPrio = 10;
        }

        if (a->IsA<APawn>()) {
            aPrio = 9;
        }

        if (b->IsA<APawn>()) {
            bPrio = 9;
        }

        if (a->IsA<AReplicationInfo>()) {
            aPrio = 8;
        }

        if (b->IsA<AReplicationInfo>()) {
            bPrio = 8;
        }

        return aPrio > bPrio;
    }

    bool ConnectionFull(UNetConnection* connection) {
        for (UChannel* Channel : connection->Channels) {
            if (!Channel) {
                return false;
            }
        }

        return true;
    }

    void TickNetServer(UTcpNetDriver* NetDriver) {
        static AWorldInfo* worldInfo = nullptr;

        if (!worldInfo)
            worldInfo = SDKUtils::GetLastOfClass<AWorldInfo>();

        std::vector<AActor*> actors = BuildConsiderList(worldInfo, NetDriver);

        std::sort(actors.begin(), actors.end(), CompareActorPriority);

        for (UNetConnection* connection : Globals::connections) {
            if (!connection)
                continue;

            if (GetConnectionState(connection) != 3) {
                if (connection->Actor) {
                    Globals::connections.erase(std::remove_if(Globals::connections.begin(), Globals::connections.end(), [&connection](UNetConnection* cmp) {
                        if(cmp == connection)
                            std::cout << "[NETWORKING] Player disconnected!" << std::endl;

                        return cmp == connection;
                    }), Globals::connections.end());
                }

                continue;
            }

            if(!(*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1))
                continue;

            if (connection->Actor && connection->Actor->PendingAdjustment.TimeStamp > 0.0) {
                connection->Actor->eventSendClientAdjustment();
            }

            for (AActor* actor : actors) {
                if (!actor)
                    continue;

                if (!(*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1))
                    continue;

                if (actor->IsA<APlayerController>() && (connection->Actor != actor)) {
                    continue;
                }

                (*(void(__fastcall**)(UNetConnection*, AActor*))(*(__int64*)connection + 624LL))(connection, actor);

                if (actor->bNetTemporary) {
                    bool shouldContinue = false;

                    for (auto pair : Globals::sentTemporaries) {
                        if (pair.first == connection) {
                            for (AActor* cmpActor : *(pair.second)) {
                                if (actor == cmpActor) {
                                    shouldContinue = true;
                                    break;
                                }
                            }

                            if (!shouldContinue) {
                                pair.second->push_back(actor);
                            }

                            break;
                        }
                    }

                    if (shouldContinue) {
                        continue;
                    }
                }

                //printf("[NETWORKING] Starting the replication run for %s\n", actor->GetFullName().c_str());

                UActorChannel* channel = GetActorChannelForActor(actor, connection);

                if (!channel && actor && (*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1)) {
                    //printf("[NETWORKING] No channel, creating...\n");

                    channel = reinterpret_cast<UActorChannel * (__thiscall*)(UNetConnection * connection, int channelType, uint32_t openedLocally, int chIndex)>(Globals::baseAddress + 0x061daa0)(connection, 2, 1, -1);

                    if (channel) { //&& (*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1)
                        //printf("[NETWORKING] Setting channel actor...\n");
                        reinterpret_cast<void(__thiscall*)(UActorChannel*, AActor*)>(Globals::baseAddress + 0x0611970)(channel, actor);
                    }
                }


                if (channel && channel->Actor && (*reinterpret_cast<bool(**)(UNetConnection*, bool)>(*(__int64*)connection + 0x260))(connection, 1) && channel->NumOutRec < 0xFE) {
                    //printf("[NETWORKING] Replication time!\n");
                    reinterpret_cast<void (*)(UActorChannel * channel)>(Globals::baseAddress + 0x0613050)(channel);
                    if (channel->Actor) {
                        channel->Actor->NetTag++;
                    }
                }
            }
        }

        /*
        std::random_device rd;
        std::mt19937 gen(rd());

        std::shuffle(Globals::connections.begin(), Globals::connections.end(), gen);
        */
        
        {
            std::lock_guard<std::mutex> lock(Globals::mutex);

            //Globals::DisableGC = false;

            while (!Globals::channelsToClose.empty()) {
                UActorChannel* ch = Globals::channelsToClose.back();

                Globals::channelsToClose.pop_back();

                if (ch && ch->Connection) {
                    (*(reinterpret_cast<void(**)(UActorChannel*)>(*(__int64*)ch + 0x210)))(ch);
                    //reinterpret_cast<char(*)(UActorChannel*)>(Globals::baseAddress + 0x74E80)(ch);
                    //reinterpret_cast<char(*)(UActorChannel*)>(Globals::baseAddress + 0x75040)(ch);
                }
            }

           // Globals::DisableGC = true;
        }
    }
}

namespace ClientNetworking {
    void JoinServer(std::wstring ip) {
        std::wstring cmd = L"open ";

        cmd.append(ip);

        EngineLogic::ExecConsoleCommand(cmd.c_str());
    }

    bool IsNetReady(UNetConnection* connection, int saturate) {
        return 1;
    }

    void ForceAlwaysNetReady() {
        static bool alreadyForced = false;

        if (!alreadyForced) {
            alreadyForced = true;
            static SafetyHookVmt vmts;
            static SafetyHookVm vms;

            vmts = safetyhook::create_vmt(SDKUtils::GetLastOfClass<UNetConnection>());

            vms = safetyhook::create_vm(vmts, 0x260 / 0x8, IsNetReady);
        }
    }
}

namespace Hooks {
    void StartupCompletedHook();
}

namespace Metagame {
    std::string GetDocumentsPath() {
        char path[MAX_PATH];
        if (SHGetFolderPathA(NULL, CSIDL_MYDOCUMENTS, NULL, SHGFP_TYPE_CURRENT, path) == S_OK) {
            return std::string(path);
        }
        std::error_code ec = std::make_error_code(std::errc::no_such_file_or_directory);
        throw std::filesystem::filesystem_error("Documents directory not found", "", ec);
    }

    std::string GetSavePath() {
        for (const auto& entry : std::filesystem::directory_iterator(GetDocumentsPath() + "/My Games/Battleborn/PoplarGame/SaveData/")) {
            if (entry.is_directory()) {
                return entry.path().string();
            }
        }

        std::error_code ec = std::make_error_code(std::errc::no_such_file_or_directory);
        throw std::filesystem::filesystem_error("Battleborn SaveData directory empty", "", ec);
    }

    void WriteSave(int saveNum, const SaveFile& file) {
        nlohmann::json jsonObj = nlohmann::json();
        jsonObj["name"] = file.name;
        jsonObj["everythingUnlocked"] = file.everythingUnlocked;

        for (int i = 0; i < file.items.size(); i++) {
            jsonObj["items"][i]["itemObjectName"] = file.items[i].itemObjectName;
            jsonObj["items"][i]["itemDisplayName"] = file.items[i].itemDisplayName;
            jsonObj["items"][i]["itemFlavor"] = file.items[i].itemFlavor;
            jsonObj["items"][i]["itemDescription"] = file.items[i].itemDescription;
            jsonObj["items"][i]["level"] = file.items[i].level;
        }

        for (int i = 0; i < file.characters.size(); i++) {
            jsonObj["characters"][i]["characterObjectName"] = file.characters[i].characterObjectName;
            jsonObj["characters"][i]["characterDisplayName"] = file.characters[i].characterDisplayName;
            jsonObj["characters"][i]["level"] = file.characters[i].level;
            jsonObj["characters"][i]["nextLevelProgress"] = file.characters[i].nextLevelProgress;
        }

        for (int i = 0; i < file.characterSkins.size(); i++) {
            jsonObj["characterSkins"][i]["skinDisplayName"] = file.characterSkins[i].skinDisplayName;
            jsonObj["characterSkins"][i]["skinObjectName"] = file.characterSkins[i].skinObjectName;
        }

        std::ofstream fsFile(GetSavePath() + "/" + std::to_string(saveNum) + ".rebornsave");
        fsFile << jsonObj.dump();
        fsFile.close();
    }

    SaveFile ReadSave(int saveNum) {
        std::ifstream fsFile(GetSavePath() + "/" + std::to_string(saveNum) + ".rebornsave");
        nlohmann::json jsonObj;
        fsFile >> jsonObj;
        fsFile.close();

        std::string name = jsonObj["name"];
        bool everythingUnlocked = jsonObj["everythingUnlocked"];
        SaveFile saveFile(name, everythingUnlocked);

        if (jsonObj.contains("items")) {
            for (const auto& itemJson : jsonObj["items"]) {
                Item item;
                item.itemObjectName = itemJson["itemObjectName"];
                item.itemDisplayName = itemJson["itemDisplayName"];
                item.itemFlavor = itemJson["itemFlavor"];
                item.itemDescription = itemJson["itemDescription"];
                item.level = itemJson["level"];
                saveFile.items.push_back(item);
            }
        }

        if (jsonObj.contains("characters")) {
            for (const auto& characterJson : jsonObj["characters"]) {
                Character character(characterJson["characterObjectName"], characterJson["characterDisplayName"]);
                character.level = characterJson["level"];
                character.nextLevelProgress = characterJson["nextLevelProgress"];
                saveFile.characters.push_back(character);
            }
        }

        if (jsonObj.contains("characterSkins")) {
            for (const auto& skinJson : jsonObj["characterSkins"]) {
                CharacterSkin skin;
                skin.skinDisplayName = skinJson["skinDisplayName"];
                skin.skinObjectName = skinJson["skinObjectName"];
                saveFile.characterSkins.push_back(skin);
            }
        }

        return saveFile;
    }

    std::vector<SaveFile> ReadAllSaves() {
        std::vector<SaveFile> saveFiles = std::vector<SaveFile>();

        int num = 0;

        while (std::filesystem::exists(GetSavePath() + "/" + std::to_string(num) + ".rebornsave")) {
            saveFiles.push_back(ReadSave(num));
            num++;
        }

        return saveFiles;
    }

    void CreateNewSave(std::string saveName, bool startWithEverything) {
        int num = 0;

        while (std::filesystem::exists(GetSavePath() + "/" + std::to_string(num) + ".rebornsave")) {
            num++;
        }

        SaveFile newSave = SaveFile(saveName, startWithEverything);

        for (UPoplarPlayerNameIdentifierDefinition* classID : SDKUtils::GetAllOfClass<UPoplarPlayerNameIdentifierDefinition>()) {
            if (!classID->GetFullName().contains("Default")) {
                if (startWithEverything) {
                    newSave.characters.push_back(Character(classID->GetFullName(), classID->CharacterClassId->ClassName.ToString(), 10, 1.0f));
                }
                else {
                    newSave.characters.push_back(Character(classID->GetFullName(), classID->CharacterClassId->ClassName.ToString()));
                }
            }
        }

        if (startWithEverything) {
            for (UPoplarPerkFunction* perk : SDKUtils::GetAllOfClass<UPoplarPerkFunction>()) {
                if (!perk->GetFullName().contains("Default")) {
                    bool contains = false;

                    for (const auto& cmp : newSave.items) {
                        if (cmp.itemDisplayName == Item::ParsePrefix(perk) + perk->DisplayName.ToString()) {
                            contains = true;
                            break;
                        }
                    }

                    newSave.items.push_back(Item(perk));
                }
            }
        }

        WriteSave(num, newSave);

        Sleep(500);

        Globals::saveFiles = Metagame::ReadAllSaves();
    }

    const std::string& GetCharacterObjectNameFromName(std::string& characterDisplayName) {
        for (const auto& character : Globals::saveFiles[Globals::CurrentSaveFile].characters) {
            if (character.characterDisplayName == characterDisplayName) {
                return character.characterObjectName;
            }
        }

        throw std::exception("Invalid Character passed to GetCharacterObjectNameFromName!");
    }

    const Character& GetCharacterFromName(std::string& characterDisplayName) {
        for (const auto& character : Globals::saveFiles[Globals::CurrentSaveFile].characters) {
            if (character.characterDisplayName == characterDisplayName) {
                return character;
            }
        }

        throw std::exception("Invalid Character passed to GetCharacterFromName!");
    }
}

namespace Overlay {
    void StartLaunchSequence(const wchar_t* command) {
        Globals::LaunchSequenceState = Globals::ELaunchSequenceState::CharacterSelect;
        Globals::LaunchCommand = command;
    }

    void OpenSoloVSAI() {
        Globals::SoloVSAIOpen = true;
    }

    void OpenSaveManager() {
        Globals::saveFiles = Metagame::ReadAllSaves();
        Globals::SaveManagerOpen = true;
    }

    std::string GetItemDisplayName(const Metagame::Item* item) {
        if (item) {
            return item->itemDisplayName;
        }

        return "No Item";
    }

    void Render() {
        if (Globals::LaunchSequenceState > Globals::ELaunchSequenceState::NotOpen) {
            ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
            ImGui::SetNextWindowSize(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always);
            ImGui::Begin("Launch Sequence", &Globals::SoloVSAIOpen, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar);

            ImGui::SetWindowFontScale(2.0f);

            ImVec2 textSize;
            if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::CharacterSelect) {
                textSize = ImGui::CalcTextSize("Select a Character");
            }
            else if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::GearSelect) {
                textSize = ImGui::CalcTextSize("Select your Gear");
            }

            float windowWidth = ImGui::GetContentRegionAvail().x;

            float centerX = (windowWidth - textSize.x) * 0.5f;

            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + centerX);

            if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::CharacterSelect) {
                ImGui::Text("Select a Character");
            }
            else if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::GearSelect) {
                ImGui::Text("Select your Gear");
            }

            if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::CharacterSelect) {
                for (int i = 0; i < Globals::saveFiles[Globals::CurrentSaveFile].characters.size(); i++) {
                    const Metagame::Character& character = Globals::saveFiles[Globals::CurrentSaveFile].characters[i];
                    if (ImGui::RadioButton((Constants::CharacterLookupTable[character.characterDisplayName] + " - Level " + std::to_string(character.level) + "/10").c_str(), character.characterDisplayName == Globals::selectedCharacter)) {
                        Globals::selectedCharacter = character.characterDisplayName;
                    };
                }
            }
            else if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::GearSelect) {
                ImGui::PushID("ItemSlotOne");

                static std::string displayOne = "No Item";

                displayOne = GetItemDisplayName(Globals::GearSlotOne);

                if (ImGui::BeginCombo("Gear Slot One", "Select Gear For Gear Slot One", ImGuiComboFlags_WidthFitPreview | ImGuiComboFlags_HeightLarge)) {
                    if (ImGui::Selectable("No Item", Globals::GearSlotOne == nullptr)) {
                        Globals::GearSlotOne = nullptr;
                    }

                    for (int i = 0; i < Globals::saveFiles[Globals::CurrentSaveFile].items.size(); i++) {
                        Metagame::Item& item = Globals::saveFiles[Globals::CurrentSaveFile].items[i];

                        if (ImGui::Selectable(item.itemDisplayName.c_str(), Globals::GearSlotOne == &item)) {
                            Globals::GearSlotOne = &item;
                        }
                        if (ImGui::IsItemHovered()) {
                            ImGui::BeginTooltip();
                            ImGui::Text(item.itemDisplayName.c_str());
                            ImGui::Separator();
                            ImGui::Text(item.itemFlavor.c_str());
                            ImGui::EndTooltip();
                        }
                    }

                    ImGui::EndCombo();
                }

                ImGui::PopID();

                ImGui::SameLine();
                ImGui::Text(displayOne.c_str());

                ImGui::PushID("ItemSlotTwo");

                static std::string DisplayTwo = "No Item";

                DisplayTwo = GetItemDisplayName(Globals::GearSlotTwo);

                if (ImGui::BeginCombo("Gear Slot Two", "Select Gear For Gear Slot Two", ImGuiComboFlags_WidthFitPreview | ImGuiComboFlags_HeightLarge)) {

                    if (ImGui::Selectable("No Item", Globals::GearSlotTwo == nullptr)) {
                        Globals::GearSlotTwo = nullptr;
                    }

                    for (int i = 0; i < Globals::saveFiles[Globals::CurrentSaveFile].items.size(); i++) {
                        Metagame::Item& item = Globals::saveFiles[Globals::CurrentSaveFile].items[i];

                        if (ImGui::Selectable(item.itemDisplayName.c_str(), Globals::GearSlotTwo == &item)) {
                            Globals::GearSlotTwo = &item;
                        }
                        if (ImGui::IsItemHovered()) {
                            ImGui::BeginTooltip();
                            ImGui::Text(item.itemDisplayName.c_str());
                            ImGui::Separator();
                            ImGui::Text(item.itemFlavor.c_str());
                            ImGui::EndTooltip();
                        }
                    }

                    ImGui::EndCombo();
                }

                ImGui::PopID();

                ImGui::SameLine();
                ImGui::Text(DisplayTwo.c_str());

                ImGui::PushID("ItemSlotThree");

                static std::string DisplayThree = "No Item";

                DisplayThree = GetItemDisplayName(Globals::GearSlotThree);

                if (ImGui::BeginCombo("Gear Slot Three", "Select Gear For Gear Slot Three", ImGuiComboFlags_WidthFitPreview | ImGuiComboFlags_HeightLarge)) {
                    ImGui::SameLine();
                    ImGui::Text(DisplayThree.c_str());
                    
                    if (ImGui::Selectable("No Item", Globals::GearSlotThree == nullptr)) {
                        Globals::GearSlotThree = nullptr;
                    }

                    for (int i = 0; i < Globals::saveFiles[Globals::CurrentSaveFile].items.size(); i++) {
                        Metagame::Item& item = Globals::saveFiles[Globals::CurrentSaveFile].items[i];

                        if (ImGui::Selectable(item.itemDisplayName.c_str(), Globals::GearSlotThree == &item)) {
                            Globals::GearSlotThree = &item;
                        }
                        if (ImGui::IsItemHovered()) {
                            ImGui::BeginTooltip();
                            ImGui::Text(item.itemDisplayName.c_str());
                            ImGui::Separator();
                            ImGui::Text(item.itemFlavor.c_str());
                            ImGui::EndTooltip();
                        }
                    }

                    ImGui::EndCombo();
                }

                ImGui::PopID();

                ImGui::SameLine();
                ImGui::Text(DisplayThree.c_str());
            }

            float availWidth = ImGui::GetContentRegionAvail().x;
            float spacing = ImGui::GetStyle().ItemSpacing.x;
            float buttonWidth = (availWidth - spacing) * 0.5f;

            if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::CharacterSelect) {
                if (ImGui::Button("Close", ImVec2(buttonWidth, 0))) {
                    Globals::LaunchSequenceState = Globals::ELaunchSequenceState::NotOpen;
                }
            }
            else {
                if (ImGui::Button("Back", ImVec2(buttonWidth, 0))) {
                    Globals::LaunchSequenceState = (Globals::ELaunchSequenceState)(Globals::LaunchSequenceState - 1);
                }
            }

            ImGui::SameLine();

            if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::GearSelect) {
                if (ImGui::Button("Start!", ImVec2(buttonWidth, 0))) {
                    Globals::LaunchSequenceState = Globals::ELaunchSequenceState::NotOpen;
                    EngineLogic::ExecConsoleCommand(Globals::LaunchCommand);
                }
            }
            else {
                if (ImGui::Button("Next", ImVec2(buttonWidth, 0))) {
                    Globals::LaunchSequenceState = (Globals::ELaunchSequenceState)(Globals::LaunchSequenceState + 1);
                }
            }

            ImGui::End();
        }

        if (Globals::SaveManagerOpen) {
            static int selectedSave = 0;

            ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
            ImGui::SetNextWindowSize(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always);
            ImGui::Begin("Reborn Save Manager", &Globals::SaveManagerOpen, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar);
            ImGui::SetWindowFontScale(2.0f);

            if (ImGui::Button("+ New Save", ImVec2(-1.0f, 0))) {
                Globals::NewSaveOpen = true;
            }
            for (int i = 0; i < Globals::saveFiles.size(); i++) {
                if (ImGui::RadioButton(Globals::saveFiles[i].name.c_str(), selectedSave == i)) {
                    selectedSave = i;
                }
            }
            if (Globals::saveFiles.size() > 0) {
                if (ImGui::Button("Select Save & Start Game!", ImVec2(-1.0f, 0))) {
                    Globals::SaveManagerOpen = false;
                    Globals::CurrentSaveFile = selectedSave;
                    Hooks::StartupCompletedHook();
                }
            }
            else {
                ImGui::Text("No saves found, create one!");
            }
            ImGui::End();
        }

        if (Globals::SoloVSAIOpen) {
            static const wchar_t* commandToExecute = nullptr;

            ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
            ImGui::SetNextWindowSize(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always);
            ImGui::Begin("Solo VS AI", &Globals::SoloVSAIOpen, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar);

            ImGui::SetWindowFontScale(2.0f);

            ImVec2 textSize = ImGui::CalcTextSize("Versus Private (Solo vs AI)");

            float windowWidth = ImGui::GetContentRegionAvail().x;

            float centerX = (windowWidth - textSize.x) * 0.5f;

            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + centerX);

            ImGui::Text("Versus Private (Solo vs AI)");

            if (ImGui::CollapsingHeader("Supercharge")) {
                ImGui::Indent();
                for (int i = 0; i < Constants::PvAIMaps::Supercharge.size(); i++) {
                    if (ImGui::RadioButton(Constants::PvAIMaps::Supercharge[i].first.c_str(), commandToExecute == Constants::PvAIMaps::Supercharge[i].second)) {
                        commandToExecute = Constants::PvAIMaps::Supercharge[i].second;
                    }
                }
                ImGui::Unindent();
            }

            if (ImGui::CollapsingHeader("Incursion")) {
                ImGui::Indent();
                for (int i = 0; i < Constants::PvAIMaps::Incursion.size(); i++) {
                    if (ImGui::RadioButton(Constants::PvAIMaps::Incursion[i].first.c_str(), commandToExecute == Constants::PvAIMaps::Incursion[i].second)) {
                        commandToExecute = Constants::PvAIMaps::Incursion[i].second;
                    }
                }
                ImGui::Unindent();
            }

            if (ImGui::CollapsingHeader("Capture")) {
                ImGui::Indent();
                for (int i = 0; i < Constants::PvAIMaps::Capture.size(); i++) {
                    if (ImGui::RadioButton(Constants::PvAIMaps::Capture[i].first.c_str(), commandToExecute == Constants::PvAIMaps::Capture[i].second)) {
                        commandToExecute = Constants::PvAIMaps::Capture[i].second;
                    }
                }
                ImGui::Unindent();
            }

            if (ImGui::CollapsingHeader("Meltdown")) {
                ImGui::Indent();
                for (int i = 0; i < Constants::PvAIMaps::Meltdown.size(); i++) {
                    if (ImGui::RadioButton(Constants::PvAIMaps::Meltdown[i].first.c_str(), commandToExecute == Constants::PvAIMaps::Meltdown[i].second)) {
                        commandToExecute = Constants::PvAIMaps::Meltdown[i].second;
                    }
                }
                ImGui::Unindent();
            }

            if (ImGui::CollapsingHeader("Face-Off")) {
                ImGui::Indent();
                for (int i = 0; i < Constants::PvAIMaps::FaceOff.size(); i++) {
                    if (ImGui::RadioButton(Constants::PvAIMaps::FaceOff[i].first.c_str(), commandToExecute == Constants::PvAIMaps::FaceOff[i].second)) {
                        commandToExecute = Constants::PvAIMaps::FaceOff[i].second;
                    }
                }
                ImGui::Unindent();
            }

            float availWidth = ImGui::GetContentRegionAvail().x;
            float spacing = ImGui::GetStyle().ItemSpacing.x;
            float buttonWidth = (availWidth - spacing) * 0.5f;

            if (ImGui::Button("Close", ImVec2(buttonWidth, 0))) {
                Globals::SoloVSAIOpen = false;
            }

            if (commandToExecute != nullptr) {
                ImGui::SameLine();

                if (ImGui::Button("Play!", ImVec2(buttonWidth, 0))) {
                    Globals::amStandalone = true;
                    StartLaunchSequence(commandToExecute);
                    commandToExecute = nullptr;
                    Globals::SoloVSAIOpen = false;
                }
            }

            

            ImGui::End();
        }

        if (Globals::NewSaveOpen) {
            static std::string saveName = "";
            static bool startWithEverything = false;

            ImGui::Begin("New Save", &Globals::NewSaveOpen, ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

            ImGui::SetWindowFontScale(2.0f);

            ImGui::InputText("Display Name (Visible in Multiplayer & Singleplayer)", &saveName);
            if (ImGui::RadioButton("Earn Gear, Mutations & Character Skins by Playing!", !startWithEverything)) {
                startWithEverything = false;
            }
            ImGui::SameLine();
            if (ImGui::RadioButton("Start With Everything!", startWithEverything)) {
                startWithEverything = true;
            }
            if (ImGui::Button("Create Save File!", ImVec2(-1.0f, 0))) {
                Globals::NewSaveOpen = false;
                Metagame::CreateNewSave(saveName, startWithEverything);
            }
            ImGui::End();
        }
    }
}

namespace Hooks{
    SafetyHookInline ProcessRemoteFunction;

    bool ProcessRemoteFunctionHook(AActor* actor, UFunction* function, void* params, void* stack) {
        if (!actor->WorldInfo) {
            actor->WorldInfo = SDKUtils::GetLastOfClass<AWorldInfo>();
        }

        bool ret = ProcessRemoteFunction.call<bool>(actor, function, params, stack);

        return ret;
    }

    SafetyHookInline WorldControlMessage;

    bool IsNetReady(UNetConnection* connection, int saturate) {
        return 1;
    }

    void WorldControlMessageHook(UWorld* world, UNetConnection* connection, uint8_t message, void* inbunch) {
        WorldControlMessage.call<void>(world, connection, message, inbunch);

        if (message == 0x0) {
            printf("[NETWORKING] Welcoming a new player!\n");

            reinterpret_cast<void* (*)(UWorld*, UNetConnection*)>(Globals::baseAddress + 0x045b060)(world, connection);
        }
        else if (message == 0x9) {
            printf("[NETWORKING] Spawning a new player!\n");

            static int numPlayersJoined = 0;

            numPlayersJoined++;

            Globals::connections.push_back(connection);
            Globals::sentTemporaries.push_back(std::make_pair(connection, new std::vector<AActor*>()));

            if (numPlayersJoined == Settings::NumPlayersToStart) {
                SDKUtils::GetLastOfClass<APoplarGameInfo>()->StartHumans();

                for (UNetConnection* connection2 : Globals::connections) {

                    UWorld* theWorld = Globals::GetGWorld();
                    FURL theURL = FURL();

                    FUniqueNetId netID = FUniqueNetId();

                    netID.bHasValue = true;

                    static uint8_t id = 0x0;

                    id++;

                    netID.RawId[0] = id;

                    FString err = FString();

                    APoplarPlayerController* pc = (APoplarPlayerController*)(SDKUtils::GetLastOfClass<AGameInfo>()->eventLogin(FString(), FString(), netID, err));//reinterpret_cast<APoplarPlayerController * (__thiscall*)(UWorld * world, UPlayer * player, ENetRole RemoteRole, FURL * url, FUniqueNetId * netID, FString * err, uint8_t InNetPlayerIndex)>(Globals::baseAddress + 0x03ef7b0)(theWorld, connection, ENetRole::ROLE_AutonomousProxy, &theURL, &netID, &err, 0);

                    connection2->Actor = pc;

                    pc->Player = connection2;

                    pc->RemoteRole = ENetRole::ROLE_AutonomousProxy;

                    SDKUtils::GetLastOfClass<AGameInfo>()->eventPostLogin(pc);

                    //pc->ClientGotoState(FName(), FName());
                }

                Globals::timeTillStartupMassacre = 5.0f;
            }
        }
        else if (message == 0xf) {
            printf("[NETWORKING] New player ack'd!\n");
        }
    }

    SafetyHookInline GameEngineTick;

    void GameEngineTickHook(UGameEngine* engine, float DeltaTime) {
        GameEngineTick.call<void>(engine, DeltaTime);

        if (Globals::amStandalone) {
            if (Globals::timeTillMutationInit > 0.0f) {
                Globals::timeTillMutationInit -= DeltaTime;

                if (Globals::timeTillMutationInit <= 0.0f) {
                    APoplarPlayerController* ppc = SDKUtils::GetLastOfClass<APoplarPlayerController>();

                    std::cout << "[GAME] Running Standalone Mutation Setup" << std::endl;

                    for (UMutationDefinition* mut : ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet->SupportedMutations) {
                        if (!ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel].Mutation.AugDef && Metagame::GetCharacterFromName(Globals::selectedCharacter).level >= mut->HelixLevel) {
                            ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel].Mutation.AugDef = (UPoplarAugDefinition*)EngineLogic::ScuffedDuplicateObject(mut->Augmentation, Globals::GetGWorld());
                        }
                    }

                    if (Globals::GearSlotOne) {
                        
                        ppc->MyPoplarPRI->Perks[0].PerkFunction = (UPoplarPerkFunction*)EngineLogic::ScuffedDuplicateObject(UObject::FindObject<UPoplarPerkFunction>(Globals::GearSlotOne->itemObjectName), Globals::GetGWorld());
                        ppc->MyPoplarPRI->Perks[0].PerkFunction->ItemLevelOverride = Globals::GearSlotOne->level;
                        ppc->MyPoplarPRI->Perks[0].PerkFunction->bUseItemLevelOverride = true;
                        ppc->MyPoplarPRI->Perks[0].bActive = 1;
                        ppc->MyPoplarPRI->Perks[0].bCanUse = 1;
                        ppc->MyPoplarPRI->Perks[0].Rarity = GameUtils::RarityStringToRarity(Globals::GearSlotOne->itemObjectName);
                        ppc->MyPoplarPRI->Perks[0].ItemLevel = Globals::GearSlotOne->level;

                        Globals::GearSlotOne = nullptr;
                    }

                    if (Globals::GearSlotTwo) {
                        ppc->MyPoplarPRI->Perks[1].PerkFunction = (UPoplarPerkFunction*)EngineLogic::ScuffedDuplicateObject(UObject::FindObject<UPoplarPerkFunction>(Globals::GearSlotTwo->itemObjectName), Globals::GetGWorld());;
                        ppc->MyPoplarPRI->Perks[1].PerkFunction->ItemLevelOverride = Globals::GearSlotTwo->level;
                        ppc->MyPoplarPRI->Perks[1].PerkFunction->bUseItemLevelOverride = true;
                        ppc->MyPoplarPRI->Perks[1].bActive = 1;
                        ppc->MyPoplarPRI->Perks[1].bCanUse = 1;
                        ppc->MyPoplarPRI->Perks[1].Rarity = GameUtils::RarityStringToRarity(Globals::GearSlotTwo->itemObjectName);
                        ppc->MyPoplarPRI->Perks[1].ItemLevel = Globals::GearSlotTwo->level;

                        Globals::GearSlotTwo = nullptr;
                    }

                    if (Globals::GearSlotThree) {
                        ppc->MyPoplarPRI->Perks[2].PerkFunction = (UPoplarPerkFunction*)EngineLogic::ScuffedDuplicateObject(UObject::FindObject<UPoplarPerkFunction>(Globals::GearSlotThree->itemObjectName), Globals::GetGWorld());
                        ppc->MyPoplarPRI->Perks[2].PerkFunction->ItemLevelOverride = Globals::GearSlotThree->level;
                        ppc->MyPoplarPRI->Perks[2].PerkFunction->bUseItemLevelOverride = true;
                        ppc->MyPoplarPRI->Perks[2].bActive = 1;
                        ppc->MyPoplarPRI->Perks[2].bCanUse = 1;
                        ppc->MyPoplarPRI->Perks[2].Rarity = GameUtils::RarityStringToRarity(Globals::GearSlotThree->itemObjectName);
                        ppc->MyPoplarPRI->Perks[2].ItemLevel = Globals::GearSlotThree->level;

                        Globals::GearSlotThree = nullptr;
                    }

                    ppc->MyPoplarPRI->OnRep_Perks(0, ppc->MyPoplarPRI->Perks[0]);
                    ppc->MyPoplarPRI->OnRep_Perks(1, ppc->MyPoplarPRI->Perks[1]);
                    ppc->MyPoplarPRI->OnRep_Perks(2, ppc->MyPoplarPRI->Perks[2]);
                }
            }
        }

        if (Globals::amServer) {
            if (Globals::netDriver && Globals::timeTillStartupMassacre > 0.0f) {
                bool tickTheDoomTimer = true;

                for (UNetConnection* Connection : Globals::connections) {
                    if (Connection && (APoplarPlayerController*)Connection->Actor && ((APoplarPlayerController*)Connection->Actor)->bPendingInitializeView) {
                        tickTheDoomTimer = false;
                        break;
                    }
                }

                if (tickTheDoomTimer) {
                    Globals::timeTillStartupMassacre -= DeltaTime;
                }

                if (Globals::timeTillStartupMassacre <= 0.0f) {
                    Globals::hasStartupMassacreHappened = true;

                    std::cout << "[GAME] Committing startup massacre to sync everyone up!" << std::endl;
                    for (UNetConnection* Connection : Globals::connections) {
                        if (Connection->Actor && ((APoplarPlayerController*)Connection->Actor)->MyPoplarPawn)
                            ((APoplarPlayerController*)Connection->Actor)->MyPoplarPawn->Suicide();

                        if (Connection->Actor && ((APoplarPlayerController*)Connection->Actor)->MyPoplarPawn) {
                            ((APoplarPlayerController*)Connection->Actor)->MyPoplarPawn->Suicide();
                        }
                    }
                }
            }

            if (Globals::netDriver) {
                Globals::time += DeltaTime;

                static float time = 0.0;

                time += DeltaTime;

                if (time > (1.0f / Settings::tickrate)) {
                    time = 0.0f;

                    ServerNetworking::TickNetServer(Globals::netDriver);
                }
            }
        }
    }

    SafetyHookInline MainMenu;
    
    bool MainMenuHook(__int64 a1, __int64* a2, __int64 a3, __int64 a4, int a5, int a6, __int64* a7) {
        return 1;
    }

    SafetyHookInline ProcessEvent;

    void StartupCompletedHook() {
        std::cout << "[GAME] Startup Complete!" << std::endl;
        SDKUtils::GetLastOfClass<APoplarPlayerController>()->ReadProfile();
        if (!SDKUtils::GetLastOfClass<UWillowProfile>()->bCompletedPrologue) {
            SDKUtils::GetLastOfClass<UWillowProfile>()->bCompletedPrologue = true;
            SDKUtils::GetLastOfClass<UWillowProfile>()->bCompletedVersusPrologue = true;
            SDKUtils::GetLastOfClass<UWillowProfile>()->bDirty = true;
        }
        SDKUtils::GetLastOfClass<UPoplarPressStartGFxMovie>()->ContinueToMenu();
    }

    void MainPanelClickedHook(uint32_t PanelId) {
        std::cout << PanelId << std::endl;
        if (PanelId == 4) { // Versus Private
            Overlay::OpenSoloVSAI();
        }
        else if (PanelId == 8) { // Dojo
            EngineLogic::ExecConsoleCommand(L"open Dojo_P");
        }
    }

    void ProcessEventHook(UObject* object, UFunction* function, void* params) {
        /*
        if (!function->GetFullName().contains("Input") && !function->GetFullName().contains("Timer") && !function->GetFullName().contains("Move")) {
            printf("[PE] %s - %s\n", object->GetFullName().c_str(), function->GetFullName().c_str());
        }
        */

        static UFunction* clientTravelUFunction = nullptr;

        if (!clientTravelUFunction)
            clientTravelUFunction = UFunction::FindFunction("Function Engine.PlayerController.ClientTravel");

        if (function == clientTravelUFunction) {
            std::cout << "[GAME] Running world switch behaviors!" << std::endl;

            Globals::AugStatus.clear();
            Globals::ppcsWeSetupAugsFor.clear();
            Globals::hasStartupMassacreHappened = false;
            Globals::timeTillStartupMassacre = 0.0f;
            Globals::didStandaloneCharacterInitialization = false;
        }

        static UFunction* updateHelixMenuStateUFunction = nullptr;

        if (!updateHelixMenuStateUFunction)
            updateHelixMenuStateUFunction = UFunction::FindFunction("Function PoplarGame.PoplarPlayerStateInfo.UpdateHelixMenuState");

        if (function == updateHelixMenuStateUFunction) {
            ProcessEvent.call<void>(object, function, params);

            APoplarPlayerStateInfo* ppsi = reinterpret_cast<APoplarPlayerStateInfo*>(object);

            for (int i = 0; i < Globals::AugStatus.size(); i++) { //
                int status = Globals::AugStatus[i];

                switch (status) {
                case 0:
                case 1:
                    ppsi->PoplarPRI->Augs.AllCategories[i].Augs[status].ClientPurchaseStatus = 2;
                    break;
                case 2:
                    if (ppsi->PoplarPRI->Augs.AllCategories[i].Mutation.AugDef) {
                        ppsi->PoplarPRI->Augs.AllCategories[i].Mutation.ClientPurchaseStatus = 2;
                    }
                    break;
                default:
                    break;
                }
            }

            return;
        }

        //PoplarPlayerReplicationInfo Wishbone_P.TheWorld.PersistentLevel.PoplarPlayerReplicationInfo - Function PoplarGame.PoplarPlayerReplicationInfo.OnConfirmCharacterSelection

        static UFunction* serverTryBuyNextTierUFunction = nullptr;

        if (!serverTryBuyNextTierUFunction)
            serverTryBuyNextTierUFunction = UFunction::FindFunction("Function PoplarGame.PoplarPlayerReplicationInfo.ServerTryBuyNextTierForAugmentation");

        if (function == serverTryBuyNextTierUFunction) {
            APoplarPlayerReplicationInfo* ppri = reinterpret_cast<APoplarPlayerReplicationInfo*>(object);

            UPoplarAugDefinition* def = ((APoplarPlayerReplicationInfo_eventServerTryBuyNextTierForAugmentation_Params*)(params))->AugDef;

            for (FAugCategoryInstance &cat : ppri->Augs.AllCategories) {
                if (cat.Augs[0].AugDef == def) {
                    Globals::AugStatus.push_back(0);
                    break;
                }
                if (cat.Augs[1].AugDef == def) {
                    Globals::AugStatus.push_back(1);
                    break;
                }
                if (cat.Mutation.AugDef == def) {
                    Globals::AugStatus.push_back(2);
                    break;
                }
            }
        }

        static UFunction* characterPossesionStandaloneUFunction = nullptr;

        if (!characterPossesionStandaloneUFunction)
            characterPossesionStandaloneUFunction = UFunction::FindFunction("Function PoplarGame.PoplarPlayerController.SwitchToPendingPlayerClass");

        if (function == characterPossesionStandaloneUFunction) {
            if (Globals::amStandalone && !Globals::didStandaloneCharacterInitialization) { // Standalone Character Initialization
                APoplarPlayerController* ppc = reinterpret_cast<APoplarPlayerController*>(object);

                if (ppc->MyPoplarPRI) {
                    Globals::didStandaloneCharacterInitialization = true;

                    std::cout << "[GAME] Running standalone character initialization!" << std::endl;

                    UPoplarPlayerNameIdentifierDefinition* nameIdDef = UObject::FindObject<UPoplarPlayerNameIdentifierDefinition>(Metagame::GetCharacterObjectNameFromName(Globals::selectedCharacter));

                    ProcessEvent.call(object, function, params);

                    ppc->eventSwitchPoplarPlayerClass(nameIdDef);

                    Globals::timeTillMutationInit = 5.0f;

                    return;
                }
            }
        }

        static UFunction* characterPossessionUFunction = nullptr;

        if (!characterPossessionUFunction)
            characterPossessionUFunction = UFunction::FindFunction("Function Engine.PlayerController.ServerAcknowledgePossession");

        if (function == characterPossessionUFunction) {
            if (!Globals::amStandalone) { // In theory should never happen outside of networked play, but I've been wrong before...
                APoplarPlayerController* ppc = reinterpret_cast<APoplarPlayerController*>(object);
                if (ppc->MyPoplarPRI && ppc->MyPoplarPawn && ppc->MyPoplarPawn->PoplarPlayerClassDef && ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet) {
                    // TODO: Client-auth Gear Status
                    if (Globals::amServer) {
                        //Globals::DisableGC = true;
                    }

                    bool alreadySetup = false;
                    for (APoplarPlayerController* cmpPPC : Globals::ppcsWeSetupAugsFor) {
                        if (cmpPPC == ppc) {
                            alreadySetup = true;
                            break;
                        }
                    }

                    if (!alreadySetup) { //
                        std::cout << "Setting up mutations, gear, and helix for " << ppc->GetFullName() << std::endl;
                        Globals::ppcsWeSetupAugsFor.push_back(ppc);

                        ppc->MyPoplarPRI->InitializeAugmentations(ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet);

                        // TODO: Client-auth Mutation Status
                        for (UMutationDefinition* mut : ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet->SupportedMutations) {
                            if (!ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel].Mutation.AugDef) {
                                ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel].Mutation.AugDef = (UPoplarAugDefinition*)EngineLogic::ScuffedDuplicateObject(mut->Augmentation, Globals::GetGWorld());
                            }
                        }

                        for (int i = 0; i < 3; i++) {
                            if (!ppc->MyPoplarPRI->Perks[i].PerkFunction) {
                                if (i == 0) {
                                    ppc->MyPoplarPRI->Perks[i].PerkFunction = (UPoplarPerkFunction*)EngineLogic::ScuffedDuplicateObject(UObject::FindObject<UPoplarPerkFunction>("PoplarPerkFunction GD_Gear.Gear.Legendary.PF_Gear_ShardGain_Legendary_LLC_FOUNDER"), Globals::GetGWorld());
                                }
                                if (i == 1) {
                                    ppc->MyPoplarPRI->Perks[i].PerkFunction = (UPoplarPerkFunction*)EngineLogic::ScuffedDuplicateObject(UObject::FindObject<UPoplarPerkFunction>("PoplarPerkFunction GD_Gear.Gear.Legendary.PF_Gear_ReloadSpeed_Legendary_ROG"), Globals::GetGWorld());
                                }
                                if (i == 2) {
                                    ppc->MyPoplarPRI->Perks[i].PerkFunction = (UPoplarPerkFunction*)EngineLogic::ScuffedDuplicateObject(UObject::FindObject<UPoplarPerkFunction>("PoplarPerkFunction GD_Gear.Gear.Legendary.PF_Gear_CritDamage_Legendary_JNT"), Globals::GetGWorld());
                                }

                                ppc->MyPoplarPRI->Perks[i].ItemLevel = INT_MAX;
                                ppc->MyPoplarPRI->Perks[i].bActive = 1;
                                ppc->MyPoplarPRI->Perks[i].bCanUse = 1;
                                ppc->MyPoplarPRI->Perks[i].Rarity = 5;//GameUtils::RarityStringToRarity(ppc->MyPoplarPRI->Perks[i].PerkFunction->GetFullName());
                                //ppc->MyPoplarPRI->OnRep_Perks(i, FReplicatedPerkItem());
                            }
                        }
                    }

                }
                else {
                    std::cout << "[GAME] Failed to setup Augments!" << std::endl;
                }
            }
        }

        static UFunction* serverConvolveUFunction = nullptr;

        if (!serverConvolveUFunction)
            serverConvolveUFunction = UFunction::FindFunction("Function Engine.PlayerController.ServerProcessConvolve");

        if (Globals::netDriver && function == serverConvolveUFunction) {
            printf("[NETWORKING] Switching player class...\n");

            APoplarPlayerController* ppc = reinterpret_cast<APoplarPlayerController*>(object);
            APlayerController_eventServerProcessConvolve_Params* parms = reinterpret_cast<APlayerController_eventServerProcessConvolve_Params*>(params);

            std::wstring wCharacterString(parms->C.c_str());

            std::string characterString(wCharacterString.begin(), wCharacterString.end());

            UPoplarPlayerNameIdentifierDefinition* playerClass = UObject::FindObject<UPoplarPlayerNameIdentifierDefinition>(characterString);

            if (playerClass) {
                //ppc->eventServerSelectCharacter(playerClass, nullptr, nullptr, true);

                //ppc->eventSwitchPoplarPlayerClass(playerClass);
                //ppc->ServerRestartPlayer();
            }
            
            ppc->MyPoplarPRI->InitializeAugmentations(ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet);

            return;
        }

        //Function PoplarGame.PoplarMetagameInventory.OnReceivePlayerMetaDataFromHydra

        static UFunction* startupCompleteUFunction = nullptr;

        if (!startupCompleteUFunction)
            startupCompleteUFunction = UFunction::FindFunction("Function PoplarGame.PoplarPlayerManager.StartupProcessComplete");

        if (function == startupCompleteUFunction) {
            Overlay::OpenSaveManager();
            return;
        }

        static UFunction* mainPanelClickedUFunction = nullptr;

        if (!mainPanelClickedUFunction)
            mainPanelClickedUFunction = UFunction::FindFunction("Function PoplarGame.PoplarFrontendScreenMainGFxObject.HandleMainPanelButtonClicked");

        if (function == mainPanelClickedUFunction) {
            MainPanelClickedHook(reinterpret_cast<UPoplarFrontendScreenMainGFxObject_execHandleMainPanelButtonClicked_Params*>(params)->PanelId);
            return;
        }


        static UFunction* refreshInventoryUFunction = nullptr;

        if (!refreshInventoryUFunction)
            refreshInventoryUFunction = UFunction::FindFunction("Function PoplarGame.PoplarCommandGFxMovie.OnRefreshInventoryComplete");

        if (function == refreshInventoryUFunction) {
            reinterpret_cast<UPoplarCommandGFxMovie_execOnRefreshInventoryComplete_Params*>(params)->ServiceResult = 0;
        }

        static UFunction* readStatsUFunction = nullptr;

        if (!readStatsUFunction)
            readStatsUFunction = UFunction::FindFunction("Function PoplarGame.PoplarCommandGFxMovie.ReadPlayersStatsDataComplete");

        if (function == readStatsUFunction) {
            reinterpret_cast<UPoplarCommandGFxMovie_execReadPlayersStatsDataComplete_Params*>(params)->ServiceResult = 0;
        }

        //Function PoplarGame.PoplarCommandGFxMovie.ReadPlayersStatsDataComplete

        return ProcessEvent.call<void>(object, function, params);
    }

    SafetyHookInline DestroyActor;

    bool DestroyActorHook(UWorld* world, AActor* actor, bool force) {
        if (Globals::netDriver) {
            for (UNetConnection* connection : Globals::connections) {
                UActorChannel* ch = ServerNetworking::GetActorChannelForActor(actor, connection);

                if (ch) {
                    {
                        std::lock_guard<std::mutex> lock(Globals::mutex);

                        Globals::channelsToClose.push_back(ch);
                    }
                }
            }
        }

        return DestroyActor.call<bool>(world, actor, force);
    }

    SafetyHookInline JustDoNothing;

    SafetyHookInline JustDoNothing2;

    void JustDoNothingHook(void* a1, void* a2, void* a3) {
        return;
    }

    SafetyHookInline PoplarGameInfoSetup;

    __int64 PoplarGameInfoSetupHook(APoplarGameInfo* a1, __int64 a2) {
        UPoplarCharacterSelectStyleDefinition* codeNameString = nullptr;

        int i = 0;

        std::cout << "[Game] Launched World " << Globals::GetGWorld()->GetFullName() << "!" << std::endl;

        if (Globals::amServer && !Globals::GetGWorld()->GetFullName().contains("MenuMap")) {
            a1->NumPlayers = Settings::NumPlayersToStart;

            a1->EffectiveNumPlayers = Settings::NumPlayersToStart;
        }        

        __int64 ret = PoplarGameInfoSetup.call<__int64>(a1, a2);

        if (Globals::amServer && !Globals::GetGWorld()->GetFullName().contains("MenuMap")) {
            a1->NumPlayers = Settings::NumPlayersToStart;

            a1->TeamMinSizeForStart = Settings::TeamMinSizeForStart;

            a1->EffectiveNumPlayers = Settings::NumPlayersToStart;

            ServerNetworking::InitListen();
        }

        return ret;
    }

    SafetyHookInline ServerCinematicCrashHook;

    __int64 ServerCinematicCrash(__int64 a1) {
        return 0;
    }

    struct Empy {
        unsigned char pad[0x100];
    };

    SafetyHookInline ServerCinematicCrash2Hook;

    __int64 ServerCinematicCrash2(__int64 a1,
        unsigned int a2,
        __int8* a3,
        __int8* a4,
        __int64 a5,
        int a6,
        int a7,
        char a8,
        unsigned int a9,
        int a10) {
        *(Empy**)(a1 + 0x100) = new Empy();

        return ServerCinematicCrash2Hook.call<__int64>(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    SafetyHookInline ServerCinematicCrash3Hook;

    __int64 ServerCinematicCrash3(__int64 a1) {
        return 0;
    }

    SafetyHookInline ConsoleCommand;

    bool ConsoleCommandHook(__int64 a1, const wchar_t* a2, __int64 a3) {
        if (Globals::amServer && !Globals::hasDoneInitialTravel) {
            Globals::hasDoneInitialTravel = true;
            a2 = Settings::MapString;
        }

        if (std::wstring(a2).contains(L"open") || std::wstring(a2).contains(L"disconnect")) {
            std::cout << "[GAME] Running world switch behaviors!" << std::endl;
            Globals::AugStatus.clear();
            Globals::ppcsWeSetupAugsFor.clear();
            Globals::didStandaloneCharacterInitialization = false;
        }

        bool ret = ConsoleCommand.call<bool>(a1, a2, a3);

        return ret;
    }

    HWND window = NULL;
    WNDPROC oWndProc;
    ID3D11Device* pDevice = NULL;
    ID3D11DeviceContext* pContext = NULL;
    ID3D11RenderTargetView* mainRenderTargetView = NULL;

    SafetyHookInline ResizeBuffers;

    bool init = false;

    HRESULT ResizeBuffersHook(
        IDXGISwapChain* pSwapChain,
        UINT        BufferCount,
        UINT        Width,
        UINT        Height,
        DXGI_FORMAT NewFormat,
        UINT        SwapChainFlags
    ) {
        if (pSwapChain)
        {
            pContext->OMSetRenderTargets(0, 0, 0);

            // Release all outstanding references to the swap chain's buffers.
            mainRenderTargetView->Release();

            HRESULT hr;
            // Preserve the existing buffer count and format.
            // Automatically choose the width and height to match the client rect for HWNDs.
            hr = ResizeBuffers.call<HRESULT>(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);

            // Perform error handling here!

            // Get buffer and create a render-target-view.
            ID3D11Texture2D* pBuffer;
            hr = pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D),
                (void**)&pBuffer);
            // Perform error handling here!

            hr = pDevice->CreateRenderTargetView(pBuffer, NULL,
                &mainRenderTargetView);
            // Perform error handling here!
            pBuffer->Release();

            pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);

            // Set up the viewport.
            D3D11_VIEWPORT vp;
            vp.Width = Width;
            vp.Height = Height;
            vp.MinDepth = 0.0f;
            vp.MaxDepth = 1.0f;
            vp.TopLeftX = 0;
            vp.TopLeftY = 0;
            pContext->RSSetViewports(1, &vp);
            return 1;
        }

        return ResizeBuffers.call<HRESULT>(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
    }

    SafetyHookInline Present;

    LRESULT WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

        if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
            return true;

        ImGuiIO& io = ImGui::GetIO();

        switch (uMsg)
        {
        case WM_LBUTTONDOWN:
        case WM_LBUTTONUP:
        case WM_RBUTTONDOWN:
        case WM_RBUTTONUP:
        case WM_MBUTTONDOWN:
        case WM_MBUTTONUP:
        case WM_XBUTTONDOWN:
        case WM_XBUTTONUP:
        {
            if (io.WantCaptureMouse)
                return true;
            break;
        }

        case WM_MOUSEWHEEL:
        case WM_MOUSEHWHEEL:
        {
            if (io.WantCaptureMouse)
                return true;
            break;
        }

        case WM_KEYDOWN:
        case WM_KEYUP:
        case WM_SYSKEYDOWN:
        case WM_SYSKEYUP:
        case WM_CHAR:
        {
            if (io.WantCaptureKeyboard)
                return true;
            break;
        }

        case WM_MOUSEMOVE:
        {
            if (io.WantCaptureMouse)
                return true;
            break;
        }
        }

        return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
    }

    HRESULT PresentHook(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags) {
        if (!init)
        {
            if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
            {
                pDevice->GetImmediateContext(&pContext);
                DXGI_SWAP_CHAIN_DESC sd;
                pSwapChain->GetDesc(&sd);
                window = sd.OutputWindow;
                ID3D11Texture2D* pBackBuffer;
                pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
                pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
                pBackBuffer->Release();
                oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
                ImGui::CreateContext();
                ImGuiIO& io = ImGui::GetIO();
                io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
                ImGui_ImplWin32_Init(window);
                ImGui_ImplDX11_Init(pDevice, pContext);
                init = true;
            }

            else
                return Present.call<HRESULT>(pSwapChain, SyncInterval, Flags);
        }

        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        Overlay::Render();

        ImGui::Render();

        pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
        return Present.call<HRESULT>(pSwapChain, SyncInterval, Flags);
    }
}

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
            Hooks::JustDoNothing = safetyhook::create_inline((void*)(Globals::baseAddress + 0x16EC4D0), &Hooks::JustDoNothingHook);
            Hooks::JustDoNothing2 = safetyhook::create_inline((void*)(Globals::baseAddress + 0xE5F320), &Hooks::JustDoNothingHook);
            Hooks::PoplarGameInfoSetup = safetyhook::create_inline((void*)(Globals::baseAddress + 0x1474140), &Hooks::PoplarGameInfoSetupHook);
            Hooks::WorldControlMessage = safetyhook::create_inline((void*)(Globals::baseAddress + 0x045c540), &Hooks::WorldControlMessageHook);
            Hooks::ServerCinematicCrashHook = safetyhook::create_inline((void*)(Globals::baseAddress + 0x2c4780), &Hooks::ServerCinematicCrash);
            Hooks::ServerCinematicCrash2Hook = safetyhook::create_inline((void*)(Globals::baseAddress + 0x2c69f0), &Hooks::ServerCinematicCrash2);
            Hooks::ServerCinematicCrash3Hook = safetyhook::create_inline((void*)(Globals::baseAddress + 0x2c74f0), &Hooks::ServerCinematicCrash3);
        }
        else {
            Hooks::MainMenu = safetyhook::create_inline((void*)(Globals::baseAddress + 0x127D860), &Hooks::MainMenuHook);
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
}

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
        EngineLogic::DontPauseOnLossOfFocus();
    }
    else {
        Init::ImGUI();
    }

    bool listening = false;
    bool connected = false;
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

