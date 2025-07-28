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
        Engine::ExecConsoleCommand(command);
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

    void UnfuckCharacterSelect(APoplarPlayerController* ppc, int characterSelectIDX) {
        Sleep(1 * 1000);

        Globals::CharacterSelectThisPossesionsTheRealOne = true;

        ppc->ServerCharacterSelectInput(characterSelectIDX);

        ppc->ServerSetHasReceivedEntitlements();
        ppc->eventServerSelectCharacter(nullptr, nullptr, nullptr, true);
        ppc->ServerPlayerSelectClass(L"", L"");

        
    }

    void Render() {
        if (Globals::CharacterSelectMenuOpen) {
            ImGui::Begin("Character & Gear Select", &Globals::CreateGameOpen, ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar);

            ImGui::SetWindowFontScale(2.0f);

            if (ImGui::BeginTabBar("CharacterGearSelect")) {
                if (!Globals::CharacterSelectHasLockedIn) {
                    if (ImGui::BeginTabItem("Character Select")) {
                        for (int i = 0; i < 30; i++) {
                            if (ImGui::Button(("Lock In " + Constants::CharacterSelectCharacterTable[i]).c_str())) {
                                Globals::CharacterSelectHasLockedIn = true;

                                // We're on the client here, so we should only ever have one PPC (aside from the CDO), so this *shouldn't* break. TODO refactor tho
                                APoplarPlayerController* ppc = SDKUtils::GetLastOfClass<APoplarPlayerController>();

                                ppc->ServerCharacterSelectInput(i);

                                ppc->ServerSetHasReceivedEntitlements();
                                ppc->eventServerSelectCharacter(nullptr, nullptr, nullptr, true);
                                ppc->ServerPlayerSelectClass(L"", L"");

                                ppc->ServerCharacterSelectInput(i);

                                std::thread t(UnfuckCharacterSelect, ppc, i);
                                t.detach();
                            }
                        }

                        ImGui::EndTabItem();
                    }
                }
                if (ImGui::BeginTabItem("Gear Select")) {
                    ImGui::EndTabItem();
                }

                ImGui::EndTabBar();
            }

            ImGui::End();
        }

        if (Globals::CreateGameOpen) {
            //std::string InstanceName, std::string HumanReadableInstanceMapMode, std::string ServerStartupCommand, int MaxNumPlayers, std::string Password
            
            static std::string InstanceName = "";

            static std::pair<std::string, std::string> MapMode = std::make_pair("Supercharge - Ziggurat", "open Wishbone_P");

            static int MaxNumPlayers = 1;

            static std::string Password = "";

            ImGui::Begin("Create a Match", &Globals::CreateGameOpen, ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

            ImGui::SetWindowFontScale(2.0f);

            ImGui::InputText("Instance name", &InstanceName);

            ImGui::PushID("MapMode");

            static std::string mapModeDisplay = "Supercharge - Ziggurat";

            mapModeDisplay = MapMode.first;

            if (ImGui::BeginCombo("Map/Mode Selection", mapModeDisplay.c_str(), ImGuiComboFlags_WidthFitPreview | ImGuiComboFlags_HeightLarge)) {
                static std::string displayOneFilter = "";

                ImGui::InputText("Filter Maps/Modes", &displayOneFilter);

                for (int i = 0; i < Constants::GameCreationOptions.size(); i++) {
                    auto& cmpMapMode = Constants::GameCreationOptions[i];

                    if (displayOneFilter.empty() || cmpMapMode.first.contains(displayOneFilter)) {
                        if (ImGui::Selectable(cmpMapMode.first.c_str(), MapMode == cmpMapMode)) {
                            MapMode = cmpMapMode;
                        }
                    }
                }

                ImGui::EndCombo();
            }

            ImGui::PopID();

            ImGui::SliderInt("Required Players to Start", &MaxNumPlayers, 1, 15);

            ImGui::InputText("RCON Password", &Password);

            if (ImGui::Button("Create Game!", ImVec2(-1.0f, 0))) {
                Globals::CreateGameOpen = false;
                GameCoordinator::CreateGame(InstanceName, MapMode.first, MapMode.second, MaxNumPlayers, Password);
            }
            ImGui::End();
        }

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
                Globals::ServerBrowserOpen = false;
                Globals::CreateGameOpen = true;
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