#include "Overlay.hpp"

#include "Globals.hpp"
#include "Engine.hpp"
#include "GameCoordinator.hpp"
#include "Constants.hpp"
#include "Hooks.hpp"

namespace Overlay {
    void OpenServerBrowser() {
        std::thread t(GameCoordinator::RefreshServerBrowser);
        t.detach();

        Globals::ServerBrowserOpen = true;
    }

    void OpenDirectConnect() {
        Globals::DirectConnectOpen = true;
    }

    void StartLaunchSequence(const wchar_t* command) {
        Globals::LaunchSequenceState = Globals::ELaunchSequenceState::CharacterSelect;
        Globals::GearSlotOne = nullptr;
        Globals::GearSlotTwo = nullptr;
        Globals::GearSlotThree = nullptr;
        Globals::CharacterSkin = nullptr;
        Globals::CharacterTaunt = nullptr;
        Globals::LaunchCommand = command;
    }

    void OpenSoloVSAI() {
        Globals::SoloVSAIOpen = true;
    }

    void OpenCampaign() {
        Globals::CampaignOpen = true;
    }

    void OpenOperations() {
        Globals::OperationsOpen = true;
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

    void UpdateWaitingForPlayers() {
        bool shouldExit = false;

        while (!shouldExit && !Globals::SaveManagerOpen) {
            GameCoordinator::RefreshWaitingForPlayers();

            if (Globals::CurrentMatchEntry.MatchStarted) {
                shouldExit = true;
                Globals::DisplayWaitingForPlayers = false;
            }
            else {
                Globals::DisplayWaitingForPlayers = true;
            }

            Sleep(2 * 1000);
        }
    }

    void Render() {
        if (Globals::DisplayWaitingForPlayers) {
            ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
            ImGui::SetNextWindowSize(ImVec2(ImGui::GetIO().DisplaySize.x * 0.25f, ImGui::GetIO().DisplaySize.y * 0.25f), ImGuiCond_Always);

            ImGui::Begin("Waiting For Players", &Globals::DisplayWaitingForPlayers, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

            ImGui::SetWindowFontScale(2.0f);

            std::string waitingString = "";

            if (Globals::CurrentMatchEntry.CurrentNumPlayers == Globals::CurrentMatchEntry.MaxNumPlayers) {
                waitingString += "All Players Connected!";
            }
            else if (Globals::CurrentMatchEntry.CurrentNumPlayers > Globals::CurrentMatchEntry.MaxNumPlayers) {
                waitingString += "You're in for a good one!";
            }
            else {
                waitingString += "Waiting For Players (";
                waitingString += std::to_string(Globals::CurrentMatchEntry.CurrentNumPlayers);
                waitingString += "/";
                waitingString += std::to_string(Globals::CurrentMatchEntry.MaxNumPlayers);
                waitingString += ")...";
            }

            ImVec2 textSize;
            textSize = ImGui::CalcTextSize(waitingString.c_str());

            float windowWidth = ImGui::GetContentRegionAvail().x;

            float centerX = (windowWidth - textSize.x) * 0.5f;

            float windowHeight = ImGui::GetContentRegionAvail().y;

            float centerY = (windowHeight - textSize.y) * 0.5f;

            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + centerX);

            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + centerY);

            ImGui::Text(waitingString.c_str());

            ImGui::End();
        }

        if (Globals::ServerBrowserOpen) {
            ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
            ImGui::SetNextWindowSize(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always);
            ImGui::Begin("Server Browser", &Globals::ServerBrowserOpen, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

            ImGui::SetWindowFontScale(2.0f);

            ImVec2 textSize;
            textSize = ImGui::CalcTextSize("Server Browser");

            float windowWidth = ImGui::GetContentRegionAvail().x;

            float centerX = (windowWidth - textSize.x) * 0.5f;

            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + centerX);

            ImGui::Text("Server Browser");

            float availWidth = ImGui::GetContentRegionAvail().x;
            float spacing = ImGui::GetStyle().ItemSpacing.x;
            float buttonWidth = (availWidth - spacing) * 0.25f;

            if (ImGui::Button("RCON Admin", ImVec2(buttonWidth, 0))) {

            }

            ImGui::SameLine();

            if (ImGui::Button("Direct Connect", ImVec2(buttonWidth, 0))) {
                Globals::ServerBrowserOpen = false;
                Globals::DirectConnectOpen = true;
            }

            ImGui::SameLine();

            if (ImGui::Button("Refresh Server Browser", ImVec2(buttonWidth, 0))) {
                std::thread t(GameCoordinator::RefreshServerBrowser);
                t.detach();
            }

            ImGui::SameLine();

            if (ImGui::Button("Close", ImVec2(buttonWidth, 0))) {
                Globals::ServerBrowserOpen = false;
            }

            if (ImGui::BeginTable("ServerBrowserTable", 5,
                ImGuiTableFlags_Borders |
                ImGuiTableFlags_RowBg |
                ImGuiTableFlags_Resizable |
                ImGuiTableFlags_Sortable |
                ImGuiTableFlags_ScrollY)) {

                // Setup table headers
                ImGui::TableSetupColumn("Server Name", ImGuiTableColumnFlags_WidthStretch);
                ImGui::TableSetupColumn("Map & Mode", ImGuiTableColumnFlags_WidthFixed, 150.0f);
                ImGui::TableSetupColumn("Players", ImGuiTableColumnFlags_WidthFixed, 80.0f);
                ImGui::TableSetupColumn("Status", ImGuiTableColumnFlags_WidthFixed, 100.0f);
                ImGui::TableSetupColumn("Action", ImGuiTableColumnFlags_WidthFixed, 80.0f);
                ImGui::TableSetupScrollFreeze(0, 1);
                ImGui::TableHeadersRow();

                for (size_t i = 0; i < Globals::ServerBrowserEntries.size(); ++i) {
                    const auto& server = Globals::ServerBrowserEntries[i];
                    ImGui::TableNextRow();

                    ImGui::TableSetColumnIndex(0);
                    ImGui::TextUnformatted(server.InstanceName.c_str());

                    ImGui::TableSetColumnIndex(1);
                    ImGui::TextUnformatted(server.HumanReadableInstanceMapMode.c_str());

                    ImGui::TableSetColumnIndex(2);
                    ImGui::Text("%d/%d", server.CurrentNumPlayers, server.MaxNumPlayers);

                    ImGui::TableSetColumnIndex(3);
                    if (server.MatchStarted) {
                        ImGui::TextColored(ImVec4(1.0f, 0.6f, 0.0f, 1.0f), "In Progress");
                    }
                    else {
                        ImGui::TextColored(ImVec4(0.0f, 0.8f, 0.0f, 1.0f), "Joinable!");
                    }

                    ImGui::TableSetColumnIndex(4);

                    ImGui::PushID(static_cast<int>(i));

                    bool canJoin = server.CurrentNumPlayers < server.MaxNumPlayers && !server.MatchStarted;
                    if (!canJoin) {
                        ImGui::BeginDisabled();
                    }

                    if (ImGui::Button("Join")) {
                        Globals::amStandalone = false;
                        Globals::ServerBrowserOpen = false;

                        Globals::MatchIndex = i;
                        Globals::ConnectedToGameCoordinatorMatch = true;

                        std::wstring wLaunchCommand = std::wstring(server.ServerConnectString.begin(), server.ServerConnectString.end());

                        StartLaunchSequence(wcsdup(wLaunchCommand.c_str()));
                    }

                    if (!canJoin) {
                        ImGui::EndDisabled();
                    }

                    ImGui::PopID();
                }

                ImGui::EndTable();
            }

            ImGui::End();
        }

        if (Globals::DirectConnectOpen) {
            ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
            ImGui::SetNextWindowSize(ImVec2(ImGui::GetIO().DisplaySize.x * 0.25f, ImGui::GetIO().DisplaySize.y * 0.25f), ImGuiCond_Always);
            ImGui::Begin("Direct Connect", &Globals::DirectConnectOpen, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

            ImGui::SetWindowFontScale(2.0f);

            ImVec2 textSize;
            textSize = ImGui::CalcTextSize("Direct Connect");

            float windowWidth = ImGui::GetContentRegionAvail().x;

            float centerX = (windowWidth - textSize.x) * 0.5f;

            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + centerX);

            ImGui::Text("Direct Connect");

            static std::string ipToConnectTo = "";

            ImGui::InputText("Enter Server IP: ", &ipToConnectTo);

            float availWidth = ImGui::GetContentRegionAvail().x;
            float spacing = ImGui::GetStyle().ItemSpacing.x;
            float buttonWidth = (availWidth - spacing) * 0.5f;

            if (ImGui::Button("Close", ImVec2(buttonWidth, 0))) {
                Globals::DirectConnectOpen = false;
            }

            ImGui::SameLine();

            if (!ipToConnectTo.empty()) {
                if (ImGui::Button("Start!", ImVec2(buttonWidth, 0))) {
                    std::wstring wIp(ipToConnectTo.begin(), ipToConnectTo.end());

                    std::wstring wcmd = L"open ";

                    Globals::amStandalone = false;

                    Globals::ConnectedToGameCoordinatorMatch = false;

                    StartLaunchSequence(wcsdup((wcmd.append(wIp).c_str())));

                    Globals::DirectConnectOpen = false;
                }
            }

            ImGui::End();
        }

        if (Globals::LaunchSequenceState > Globals::ELaunchSequenceState::NotOpen) {
            ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
            ImGui::SetNextWindowSize(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always);
            ImGui::Begin("Launch Sequence", &Globals::SoloVSAIOpen, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

            ImGui::SetWindowFontScale(2.0f);

            ImVec2 textSize;
            if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::CharacterSelect) {
                textSize = ImGui::CalcTextSize("Select a Character");
            }
            else if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::GearSelect) {
                textSize = ImGui::CalcTextSize("Select your Gear & Cosmetics");
            }

            float windowWidth = ImGui::GetContentRegionAvail().x;

            float centerX = (windowWidth - textSize.x) * 0.5f;

            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + centerX);

            if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::CharacterSelect) {
                ImGui::Text("Select a Character");
            }
            else if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::GearSelect) {
                ImGui::Text("Select your Gear & Cosmetics");
            }

            if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::CharacterSelect) {
                for (int i = 0; i < Globals::saveFiles[Globals::CurrentSaveFile].characters.size(); i++) {
                    const Metagame::Character& character = Globals::saveFiles[Globals::CurrentSaveFile].characters[i];
                    if (ImGui::RadioButton((Constants::CharacterLookupTable.at(character.characterDisplayName) + " - Level " + std::to_string(character.level) + "/10").c_str(), character.characterDisplayName == Globals::selectedCharacter)) {
                        Globals::selectedCharacter = character.characterDisplayName;
                    };
                }
            }
            else if (Globals::LaunchSequenceState == Globals::ELaunchSequenceState::GearSelect) {
                ImGui::PushID("ItemSlotOne");

                static std::string displayOne = "No Item";

                displayOne = GetItemDisplayName(Globals::GearSlotOne);

                if (ImGui::BeginCombo("Gear Slot One", displayOne.c_str(), ImGuiComboFlags_WidthFitPreview | ImGuiComboFlags_HeightLarge)) {

                    static std::string displayOneFilter = "";

                    ImGui::InputText("Filter Gear", &displayOneFilter);

                    if (ImGui::Selectable("No Item", Globals::GearSlotOne == nullptr)) {
                        Globals::GearSlotOne = nullptr;
                    }

                    for (int i = 0; i < Globals::saveFiles[Globals::CurrentSaveFile].items.size(); i++) {
                        Metagame::Item& item = Globals::saveFiles[Globals::CurrentSaveFile].items[i];

                        if (displayOneFilter.empty() || item.itemDisplayName.contains(displayOneFilter)) {
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
                    }

                    ImGui::EndCombo();
                }

                ImGui::PopID();

                ImGui::PushID("ItemSlotTwo");

                static std::string DisplayTwo = "No Item";

                DisplayTwo = GetItemDisplayName(Globals::GearSlotTwo);

                if (ImGui::BeginCombo("Gear Slot Two", DisplayTwo.c_str(), ImGuiComboFlags_WidthFitPreview | ImGuiComboFlags_HeightLarge)) {

                    static std::string displayTwoFilter = "";

                    ImGui::InputText("Filter Gear", &displayTwoFilter);

                    if (ImGui::Selectable("No Item", Globals::GearSlotTwo == nullptr)) {
                        Globals::GearSlotTwo = nullptr;
                    }

                    for (int i = 0; i < Globals::saveFiles[Globals::CurrentSaveFile].items.size(); i++) {
                        Metagame::Item& item = Globals::saveFiles[Globals::CurrentSaveFile].items[i];

                        if (displayTwoFilter.empty() || item.itemDisplayName.contains(displayTwoFilter)) {
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
                    }

                    ImGui::EndCombo();
                }

                ImGui::PopID();

                ImGui::PushID("ItemSlotThree");

                static std::string DisplayThree = "No Item";

                DisplayThree = GetItemDisplayName(Globals::GearSlotThree);

                if (ImGui::BeginCombo("Gear Slot Three", DisplayThree.c_str(), ImGuiComboFlags_WidthFitPreview | ImGuiComboFlags_HeightLarge)) {
                    static std::string displayThreeFilter = "";

                    ImGui::InputText("Filter Gear", &displayThreeFilter);

                    if (ImGui::Selectable("No Item", Globals::GearSlotThree == nullptr)) {
                        Globals::GearSlotThree = nullptr;
                    }


                    for (int i = 0; i < Globals::saveFiles[Globals::CurrentSaveFile].items.size(); i++) {
                        Metagame::Item& item = Globals::saveFiles[Globals::CurrentSaveFile].items[i];

                        if (displayThreeFilter.empty() || item.itemDisplayName.contains(displayThreeFilter)) {
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
                    }

                    ImGui::EndCombo();
                }

                ImGui::PopID();

                static std::string DisplaySkin = "Default Skin";

                if (Globals::CharacterSkin) {
                    DisplaySkin = Globals::CharacterSkin->skinDisplayName;
                }

                if (Globals::amStandalone) {
                    ImGui::PushID("SkinSelect");

                    if (ImGui::BeginCombo("Character Skin", DisplaySkin.c_str(), ImGuiComboFlags_WidthFitPreview | ImGuiComboFlags_HeightLarge)) {
                        static std::string skinFilter = "";

                        ImGui::InputText("Filter Skins", &skinFilter);

                        if (ImGui::Selectable("Default Skin", Globals::CharacterSkin == nullptr)) {
                            Globals::CharacterSkin = nullptr;
                        }

                        for (int i = 0; i < Globals::saveFiles[Globals::CurrentSaveFile].characterSkins.size(); i++) {
                            Metagame::CharacterSkin& skin = Globals::saveFiles[Globals::CurrentSaveFile].characterSkins[i];

                            if ((skinFilter.empty() || skin.skinDisplayName.contains(skinFilter)) && skin.characterName.contains(Globals::selectedCharacter)) {
                                if (ImGui::Selectable(skin.skinDisplayName.c_str(), Globals::CharacterSkin == &skin)) {
                                    Globals::CharacterSkin = &skin;
                                }
                            }
                        }

                        ImGui::EndCombo();
                    }

                    ImGui::PopID();
                }

                /*
                static std::string DisplayTaunt = "Default Taunt";

                if (Globals::CharacterTaunt) {
                    DisplayTaunt = Globals::CharacterTaunt->tauntDisplayName;
                }

                ImGui::PushID("TauntSelect");

                if (ImGui::BeginCombo("Character Taunt", DisplayTaunt.c_str(), ImGuiComboFlags_WidthFitPreview | ImGuiComboFlags_HeightLarge)) {
                    static std::string tauntFilter = "";

                    ImGui::InputText("Filter Taunts", &tauntFilter);

                    if (ImGui::Selectable("Default Taunt", Globals::CharacterTaunt == nullptr)) {
                        Globals::CharacterTaunt = nullptr;
                    }

                    for (int i = 0; i < Globals::saveFiles[Globals::CurrentSaveFile].characterTaunts.size(); i++) {
                        Metagame::CharacterTaunt& taunt = Globals::saveFiles[Globals::CurrentSaveFile].characterTaunts[i];

                        if ((tauntFilter.empty() || taunt.tauntDisplayName.contains(tauntFilter)) && taunt.characterName.contains(Globals::selectedCharacter)) {
                            if (ImGui::Selectable(taunt.tauntDisplayName.c_str(), Globals::CharacterTaunt == &taunt)) {
                                Globals::CharacterTaunt = &taunt;
                            }
                        }
                    }

                    ImGui::EndCombo();
                }

                ImGui::PopID();
                */
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
                    std::cout << "[GAME] Entering the match!" << std::endl;
                    Engine::ExecConsoleCommand(Globals::LaunchCommand);

                    if (!Globals::amStandalone && Globals::ConnectedToGameCoordinatorMatch) {
                        Globals::ConnectedToGameCoordinatorMatch = false;

                        std::thread t(UpdateWaitingForPlayers);
                        t.detach();
                    }
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
            ImGui::Begin("Reborn Save Manager", &Globals::SaveManagerOpen, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
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
            ImGui::Begin("Solo VS AI", &Globals::SoloVSAIOpen, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

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

        if (Globals::CampaignOpen) {
            static const wchar_t* commandToExecute = nullptr;

            ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
            ImGui::SetNextWindowSize(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always);
            ImGui::Begin("Campaign", &Globals::SoloVSAIOpen, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

            ImGui::SetWindowFontScale(2.0f);

            ImVec2 textSize = ImGui::CalcTextSize("Campaign (Story Private)");

            float windowWidth = ImGui::GetContentRegionAvail().x;

            float centerX = (windowWidth - textSize.x) * 0.5f;

            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + centerX);

            ImGui::Text("Campaign (Story Private)");

            for (int i = 0; i < Constants::CampaignMaps.size(); i++) {
                if (ImGui::RadioButton(Constants::CampaignMaps[i].first.c_str(), commandToExecute == Constants::CampaignMaps[i].second)) {
                    commandToExecute = Constants::CampaignMaps[i].second;
                }
            }

            float availWidth = ImGui::GetContentRegionAvail().x;
            float spacing = ImGui::GetStyle().ItemSpacing.x;
            float buttonWidth = (availWidth - spacing) * 0.5f;

            if (ImGui::Button("Close", ImVec2(buttonWidth, 0))) {
                Globals::CampaignOpen = false;
            }

            if (commandToExecute != nullptr) {
                ImGui::SameLine();

                if (ImGui::Button("Play!", ImVec2(buttonWidth, 0))) {
                    Globals::amStandalone = true;
                    StartLaunchSequence(commandToExecute);
                    commandToExecute = nullptr;
                    Globals::CampaignOpen = false;
                }
            }

            ImGui::End();
        }

        if (Globals::OperationsOpen) {
            static const wchar_t* commandToExecute = nullptr;

            ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
            ImGui::SetNextWindowSize(ImVec2(ImGui::GetIO().DisplaySize.x * 0.5f, ImGui::GetIO().DisplaySize.y * 0.5f), ImGuiCond_Always);
            ImGui::Begin("Operations", &Globals::SoloVSAIOpen, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

            ImGui::SetWindowFontScale(2.0f);

            ImVec2 textSize = ImGui::CalcTextSize("Operations (Operations Private)");

            float windowWidth = ImGui::GetContentRegionAvail().x;

            float centerX = (windowWidth - textSize.x) * 0.5f;

            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + centerX);

            ImGui::Text("Operations (Operations Private)");

            for (int i = 0; i < Constants::OperationMaps.size(); i++) {
                if (ImGui::RadioButton(Constants::OperationMaps[i].first.c_str(), commandToExecute == Constants::OperationMaps[i].second)) {
                    commandToExecute = Constants::OperationMaps[i].second;
                }
            }

            float availWidth = ImGui::GetContentRegionAvail().x;
            float spacing = ImGui::GetStyle().ItemSpacing.x;
            float buttonWidth = (availWidth - spacing) * 0.5f;

            if (ImGui::Button("Close", ImVec2(buttonWidth, 0))) {
                Globals::OperationsOpen = false;
            }

            if (commandToExecute != nullptr) {
                ImGui::SameLine();

                if (ImGui::Button("Play!", ImVec2(buttonWidth, 0))) {
                    Globals::amStandalone = true;
                    StartLaunchSequence(commandToExecute);
                    commandToExecute = nullptr;
                    Globals::OperationsOpen = false;
                }
            }

            ImGui::End();
        }

        if (Globals::NewSaveOpen) {
            static std::string saveName = "";
            static bool startWithEverything = true;

            ImGui::Begin("New Save", &Globals::NewSaveOpen, ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

            ImGui::SetWindowFontScale(2.0f);

            ImGui::InputText("Display Name (Visible in Multiplayer & Singleplayer)", &saveName);
            /*
            if (ImGui::RadioButton("Earn Gear, Mutations & Character Skins by Playing!", !startWithEverything)) {
                startWithEverything = false;
            }
            ImGui::SameLine();
            */
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