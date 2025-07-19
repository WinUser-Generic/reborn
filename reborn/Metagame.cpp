#include "Metagame.hpp"

#include "Utils.hpp"
#include "Globals.hpp"

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