#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <filesystem>
#include <shlobj.h>
#include <fstream>
#include <shellapi.h>

#include "json.hpp"
#include "BB/SdkHeaders.hpp"

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

    std::string GetDocumentsPath();

    std::string GetSavePath();

    void WriteSave(int saveNum, const SaveFile& file);

    SaveFile ReadSave(int saveNum);

    std::vector<SaveFile> ReadAllSaves();

    void CreateNewSave(std::string saveName, bool startWithEverything);

    const std::string& GetCharacterObjectNameFromName(std::string& characterDisplayName);

    const Character& GetCharacterFromName(std::string& characterDisplayName);
}