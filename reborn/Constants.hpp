#pragma once

#include <vector>
#include <string>
#include <unordered_map>

namespace Constants {
    const std::string GameCoordinatorEndpoint = "gc.bereborn.dev:5000";

    const std::unordered_map<std::string, std::string> CharacterLookupTable = {
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
        const std::vector<std::pair<std::string, const wchar_t*>> Supercharge = {
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

        const std::vector < std::pair<std::string, const wchar_t*>> Incursion = {
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

        const std::vector < std::pair<std::string, const wchar_t*>> Capture = {
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

        const std::vector < std::pair<std::string, const wchar_t*>> Meltdown = {
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

        const std::vector < std::pair<std::string, const wchar_t*>> FaceOff = {
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

    const std::vector<std::pair<std::string, const wchar_t*>> CampaignMaps = {
        {
            "Prologue", L"open PvE_Prologue_P"
        },
        {
            "The Algorithm", L"open Caverns_P"
        },
        {
            "Void's Edge", L"open Portal_P"
        },
        {
            "The Renegade", L"open Captains_P"
        },
        {
            "The Archive", L"open Evacuation_P"
        },
        {
            "Sentinel", L"open Ruins_P"
        },
        {
            "The Experiment", L"open Observatory_p"
        },
        {
            "The Saboteur", L"open Refinery_P"
        },
        {
            "Heliophage", L"open Cathedral_P"
        },
    };

    const std::vector<std::pair<std::string, const wchar_t*>> OperationMaps = {
        {
            "Attikus and the Thrall Rebellion", L"open Slums_P"
        },
        {
            "Toby's Friendship Raid", L"open Toby_Raid_P"
        },
        {
            "Oscar Mike vs the Battleschool", L"open CullingFacility_P"
        },
        {
            "Montana and the Demon Bear", L"open TallTales_P"
        },
        {
            "Phoebe and the Heart of Ekkunar", L"open Heart_Ekkunar_P"
        },
    };
}