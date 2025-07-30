#include "Hooks.hpp"

#include "Init.hpp"
#include "Globals.hpp"
#include "ServerSettings.hpp"
#include "Engine.hpp"
#include "Networking.hpp"
#include "Overlay.hpp"

namespace Hooks {
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

    Globals::ServerPlayer* ConnectionToServerPlayer(UNetConnection* connection) {
        for (Globals::ServerPlayer& serverPlayer : Globals::ServerPlayers) {
            if(serverPlayer.Connection == connection)
                return &serverPlayer;
        }

        return nullptr;
    }

    void WorldControlMessageHook(UWorld* world, UNetConnection* connection, uint8_t message, void* inbunch) {
        WorldControlMessage.call<void>(world, connection, message, inbunch);

        static int numPlayersJoined = 0;
        
        if (message == 0x0) {
            if (ServerSettings::amRunningWithGameCoordinator && Globals::NextExpectedServerPlayer) {
                printf("[NETWORKING] Welcoming %s\n", Globals::NextExpectedServerPlayer->Name.c_str());

                for (Globals::ServerPlayer& serverPlayer : Globals::ServerPlayers) {
                    if (&serverPlayer == Globals::NextExpectedServerPlayer) {
                        serverPlayer.Connection = connection;
                        Globals::NextExpectedServerPlayer = nullptr;

                        break;
                    }
                }

                reinterpret_cast<void* (*)(UWorld*, UNetConnection*)>(Globals::baseAddress + 0x045b060)(world, connection);
            }
            else if (!ServerSettings::amRunningWithGameCoordinator) {
                printf("[NETWORKING] Welcoming a new player!\n");

                Globals::ServerPlayer serverPlayer = Globals::ServerPlayer("LAN Player", "PoplarPlayerNameIdentifierDefinition GD_RocketHawk.NameId_RocketHawk", "", "", "PoplarPerkFunction GD_Gear_DAH.Gear.PF_Gear_MaxShield_Legendary_UPR2", "PoplarPerkFunction GD_Gear_DAH.Gear.PF_Gear_MaxShield_Legendary_UPR2", "PoplarPerkFunction GD_Gear_DAH.Gear.PF_Gear_MaxShield_Legendary_UPR2");

                serverPlayer.Connection = connection;

                Globals::ServerPlayers.push_back(serverPlayer);

                reinterpret_cast<void* (*)(UWorld*, UNetConnection*)>(Globals::baseAddress + 0x045b060)(world, connection);
            }
        }
        else if (message == 0x9) {
            Globals::ServerPlayer* player = ConnectionToServerPlayer(connection);

            if (player) {
                printf("[NETWORKING] Spawning %s!\n", player->Name.c_str());

                numPlayersJoined++;

                if (numPlayersJoined >= ServerSettings::NumPlayersToStart) {
                    Globals::timeTillHumanStart = 5.0f;
                }
            }
        }
        else if (message == 0xf) {
            printf("[NETWORKING] New player ack'd!\n");
        }
    }

    SafetyHookInline GameEngineTick;

    void GameEngineTickHook(UGameEngine* engine, float DeltaTime) {
        GameEngineTick.call<void>(engine, DeltaTime);

        if (Globals::amServer) {
            /*
            static float timeSinceLoggedChannels = 0.0f;

            timeSinceLoggedChannels += DeltaTime;

            if (timeSinceLoggedChannels >= 5.0f) {
                timeSinceLoggedChannels = 0.0f;

                std::cout << "[NETWORKING] " << SDKUtils::GetAllOfClass<UActorChannel>().size() << std::endl;
            }
            */
        }

        if (Globals::amServer && ServerSettings::amRunningWithGameCoordinator) {
            Globals::timeSinceGameControllerServerPoll += DeltaTime;

            if (Globals::timeSinceGameControllerServerPoll > 5.0f) {
                Globals::timeSinceGameControllerServerPoll = 0.0f;

                std::thread t(ServerNetworking::GameControllerPoll);
                t.detach();
            }
        }

        if (Globals::amStandalone) {
            if (Globals::timeTillMutationInit > 0.0f) {
                Globals::timeTillMutationInit -= DeltaTime;

                if (Globals::timeTillMutationInit <= 0.0f) {
                    APoplarPlayerController* ppc = SDKUtils::GetLastOfClass<APoplarPlayerController>();

                    std::cout << "[GAME] Running Standalone Mutation Setup" << std::endl;

                    for (UMutationDefinition* mut : ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet->SupportedMutations) {
                        if (!ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel - 1].Mutation.AugDef && Metagame::GetCharacterFromName(Globals::selectedCharacter).level >= mut->HelixLevel) {
                            ppc->MyPoplarPRI->Augs.AllCategories[mut->HelixLevel - 1].Mutation.AugDef = (UPoplarAugDefinition*)Engine::ScuffedDuplicateObject(mut->Augmentation, Globals::GetGWorld());
                        }
                    }

                    if (Globals::GearSlotOne) {

                        ppc->MyPoplarPRI->Perks[0].PerkFunction = (UPoplarPerkFunction*)Engine::ScuffedDuplicateObject(UObject::FindObject<UPoplarPerkFunction>(Globals::GearSlotOne->itemObjectName), Globals::GetGWorld());
                        ppc->MyPoplarPRI->Perks[0].PerkFunction->ItemLevelOverride = Globals::GearSlotOne->level;
                        ppc->MyPoplarPRI->Perks[0].PerkFunction->bUseItemLevelOverride = true;
                        ppc->MyPoplarPRI->Perks[0].bActive = 1;
                        ppc->MyPoplarPRI->Perks[0].bCanUse = 1;
                        ppc->MyPoplarPRI->Perks[0].Rarity = GameUtils::RarityStringToRarity(Globals::GearSlotOne->itemObjectName);
                        ppc->MyPoplarPRI->Perks[0].ItemLevel = Globals::GearSlotOne->level;

                        Globals::GearSlotOne = nullptr;
                    }

                    if (Globals::GearSlotTwo) {
                        ppc->MyPoplarPRI->Perks[1].PerkFunction = (UPoplarPerkFunction*)Engine::ScuffedDuplicateObject(UObject::FindObject<UPoplarPerkFunction>(Globals::GearSlotTwo->itemObjectName), Globals::GetGWorld());;
                        ppc->MyPoplarPRI->Perks[1].PerkFunction->ItemLevelOverride = Globals::GearSlotTwo->level;
                        ppc->MyPoplarPRI->Perks[1].PerkFunction->bUseItemLevelOverride = true;
                        ppc->MyPoplarPRI->Perks[1].bActive = 1;
                        ppc->MyPoplarPRI->Perks[1].bCanUse = 1;
                        ppc->MyPoplarPRI->Perks[1].Rarity = GameUtils::RarityStringToRarity(Globals::GearSlotTwo->itemObjectName);
                        ppc->MyPoplarPRI->Perks[1].ItemLevel = Globals::GearSlotTwo->level;

                        Globals::GearSlotTwo = nullptr;
                    }

                    if (Globals::GearSlotThree) {
                        ppc->MyPoplarPRI->Perks[2].PerkFunction = (UPoplarPerkFunction*)Engine::ScuffedDuplicateObject(UObject::FindObject<UPoplarPerkFunction>(Globals::GearSlotThree->itemObjectName), Globals::GetGWorld());
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
            if (Globals::ShutdownTimer > 0.0f) {
                Globals::ShutdownTimer -= DeltaTime;

                if (Globals::ShutdownTimer <= 0.0f) {
                    exit(0);
                }
            }

            if (Globals::timeTillHumanStart > 0.0f) {
                Globals::timeTillHumanStart -= DeltaTime;

                if (Globals::timeTillHumanStart <= 0.0f) {
                    Globals::haveHumansStarted = true;

                    SDKUtils::GetLastOfClass<APoplarGameInfo>()->StartHumans();

                    for (Globals::ServerPlayer& serverPlayer: Globals::ServerPlayers) {
                        if (serverPlayer.Connection) {
                            UWorld* theWorld = Globals::GetGWorld();
                            FURL theURL = FURL();

                            FUniqueNetId* netID = (FUniqueNetId*)Engine::EngineMalloc(sizeof(FUniqueNetId));

                            *netID = FUniqueNetId();

                            netID->bHasValue = true;

                            static uint8_t id = 0x0;

                            id++;

                            netID->RawId[0] = id;

                            FString err = FString();

                            FString* portalString = (FString*)Engine::EngineMalloc(sizeof(FString));

                            *portalString = FString();

                            FString* optionsString = (FString*)Engine::EngineMalloc(sizeof(FString));

                            *optionsString = FString();

                            APoplarPlayerController* pc = (APoplarPlayerController*)(SDKUtils::GetLastOfClass<AGameInfo>()->eventLogin(*portalString, *optionsString, *netID, err));//reinterpret_cast<APoplarPlayerController * (__thiscall*)(UWorld * world, UPlayer * player, ENetRole RemoteRole, FURL * url, FUniqueNetId * netID, FString * err, uint8_t InNetPlayerIndex)>(Globals::baseAddress + 0x03ef7b0)(theWorld, connection, ENetRole::ROLE_AutonomousProxy, &theURL, &netID, &err, 0);

                            pc->eventServerSelectCharacter(serverPlayer.Character, serverPlayer.OptionalSkin, serverPlayer.OptionalTaunt, true);

                            if (serverPlayer.OptionalSkin)
                                pc->eventServerSelectCharacterSkin(serverPlayer.OptionalSkin);

                            if(serverPlayer.OptionalTaunt)
                                pc->eventServerSelectCharacterTaunt(serverPlayer.OptionalTaunt);

                            if (serverPlayer.GearSlotOne) {
                                pc->MyPoplarPRI->Perks[0].PerkFunction = serverPlayer.GearSlotOne;
                                pc->MyPoplarPRI->Perks[0].bActive = 1;
                                pc->MyPoplarPRI->Perks[0].bCanUse = 1;
                                pc->MyPoplarPRI->Perks[0].Rarity = GameUtils::RarityStringToRarity(serverPlayer.GearSlotOne->GetFullName());
                            }

                            if (serverPlayer.GearSlotTwo) {
                                pc->MyPoplarPRI->Perks[1].PerkFunction = serverPlayer.GearSlotTwo;
                                pc->MyPoplarPRI->Perks[1].bActive = 1;
                                pc->MyPoplarPRI->Perks[1].bCanUse = 1;
                                pc->MyPoplarPRI->Perks[1].Rarity = GameUtils::RarityStringToRarity(serverPlayer.GearSlotTwo->GetFullName());
                            }

                            if (serverPlayer.GearSlotThree) {
                                pc->MyPoplarPRI->Perks[2].PerkFunction = serverPlayer.GearSlotThree;
                                pc->MyPoplarPRI->Perks[2].bActive = 1;
                                pc->MyPoplarPRI->Perks[2].bCanUse = 1;
                                pc->MyPoplarPRI->Perks[2].Rarity = GameUtils::RarityStringToRarity(serverPlayer.GearSlotThree->GetFullName());
                            }

                            std::wstring wPlayerName = std::wstring(serverPlayer.Name.begin(), serverPlayer.Name.end());

                            pc->MyPoplarPRI->PlayerName = FString(wcsdup(wPlayerName.c_str())); // TODO: stop leaking memory like it's going out of style

                            serverPlayer.Connection->Actor = pc;

                            pc->Player = serverPlayer.Connection;

                            pc->RemoteRole = ENetRole::ROLE_AutonomousProxy;

                            SDKUtils::GetLastOfClass<AGameInfo>()->eventPostLogin(pc);

                            serverPlayer.shouldReplicateTo = true;
                        }
                    }
                }
            }

            if (Globals::netDriver) {
                Globals::time += DeltaTime;

                static float time = 0.0;

                time += DeltaTime;

                //if (time > (1.0f / ServerSettings::tickrate)) {
                    {
                        std::scoped_lock t(Globals::Telemetry::TickrateMutex);

                        Globals::Telemetry::Tickrates.push_back(1.0f / time);
                    }

                    time = 0.0f;

                    ServerNetworking::TickNetServer(Globals::netDriver);
                //}
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
        if (!SDKUtils::GetLastOfClass<UWillowProfile>()->bCompletedPrologue || !SDKUtils::GetLastOfClass<UWillowProfile>()->bCompletedVersusPrologue) {
            SDKUtils::GetLastOfClass<UWillowProfile>()->bCompletedPrologue = true;
            SDKUtils::GetLastOfClass<UWillowProfile>()->bCompletedVersusPrologue = true;
            SDKUtils::GetLastOfClass<UWillowProfile>()->bDirty = true;
        }
        SDKUtils::GetLastOfClass<UPoplarPressStartGFxMovie>()->ContinueToMenu();
    }

    void MainPanelClickedHook(uint32_t PanelId) {
        std::cout << PanelId << std::endl;
        if (PanelId == 1 || PanelId == 2 || PanelId == 6) { // Versus Public; Story Public; Operations Public
            Overlay::OpenServerBrowser();
        }
        else if (PanelId == 4) { // Versus Private
            Overlay::OpenSoloVSAI();
        }
        else if (PanelId == 5) { // Story Private
            Overlay::OpenCampaign();
        }
        else if (PanelId == 7) { // Operations Private
            Overlay::OpenOperations();
        }
        else if (PanelId == 3 || PanelId == 18) {
            Globals::GearViewerOpen = true;
        }
        else if (PanelId == 8) { // Dojo
            Globals::amStandalone = true;
            Overlay::StartLaunchSequence(L"open Dojo_P");
            //Engine::ExecConsoleCommand(L"open Dojo_P");
        }
    }


    void SetGear() {
        Sleep(10 * 1000);

        APoplarPlayerController* ppc = SDKUtils::GetLastOfClass<APoplarPlayerController>();

        nlohmann::json jsonObj = nlohmann::json();

        jsonObj["NEMA"] = true;

        if (Globals::GearSlotOne)
            jsonObj["perkOne"] = Globals::GearSlotOne->itemObjectName;

        if (Globals::GearSlotTwo)
            jsonObj["perkTwo"] = Globals::GearSlotTwo->itemObjectName;

        if (Globals::GearSlotThree)
            jsonObj["perkThree"] = Globals::GearSlotThree->itemObjectName;

        std::string jsonObjStr = jsonObj.dump();

        std::wstring wJsonObjStr(jsonObjStr.begin(), jsonObjStr.end());

        ppc->eventServerProcessConvolve(wJsonObjStr.c_str(), 0);

        Sleep(5 * 1000);

        if (Globals::GearSlotOne) {
            ppc->MyPoplarPRI->Perks[0].PerkFunction = UObject::FindObject<UPoplarPerkFunction>(Globals::GearSlotOne->itemObjectName);
            ppc->MyPoplarPRI->Perks[0].bActive = 1;
            ppc->MyPoplarPRI->Perks[0].bCanUse = 1;
            ppc->MyPoplarPRI->Perks[0].Rarity = GameUtils::RarityStringToRarity(Globals::GearSlotOne->itemObjectName);

            //std::cout << ppc->MyPoplarPRI->Perks[0].PerkFunction->GetFullName() << std::endl;

            
        }

        if (Globals::GearSlotTwo) {
            ppc->MyPoplarPRI->Perks[1].PerkFunction = UObject::FindObject<UPoplarPerkFunction>(Globals::GearSlotTwo->itemObjectName);
            ppc->MyPoplarPRI->Perks[1].bActive = 1;
            ppc->MyPoplarPRI->Perks[1].bCanUse = 1;
            ppc->MyPoplarPRI->Perks[1].Rarity = GameUtils::RarityStringToRarity(Globals::GearSlotTwo->itemObjectName);
        }

        if (Globals::GearSlotThree) {
            ppc->MyPoplarPRI->Perks[2].PerkFunction = UObject::FindObject<UPoplarPerkFunction>(Globals::GearSlotThree->itemObjectName);
            ppc->MyPoplarPRI->Perks[2].bActive = 1;
            ppc->MyPoplarPRI->Perks[2].bCanUse = 1;
            ppc->MyPoplarPRI->Perks[2].Rarity = GameUtils::RarityStringToRarity(Globals::GearSlotThree->itemObjectName);
        }

        ppc->MyPoplarPRI->OnRep_Perks(0, ppc->MyPoplarPRI->Perks[0]);
    }

    void ProcessEventHook(UObject* object, UFunction* function, void* params) {
        /*
        if (Globals::amServer && !function->GetFullName().contains("Input") && !function->GetFullName().contains("Timer") && !function->GetFullName().contains("Move")) {
            printf("[PE] %s - %s\n", object->GetFullName().c_str(), function->GetFullName().c_str());
        }
        */

        static UFunction* characterSelectUFunction = nullptr;

        if (!characterSelectUFunction)
            characterSelectUFunction = UFunction::FindFunction("Function PoplarGame.PoplarCharacterSelectGFxMovie.extRequestPopulatePerks");

        if (!Globals::amServer && !Globals::amStandalone && function == characterSelectUFunction) {
            reinterpret_cast<UPoplarCharacterSelectGFxMovie*>(object)->bMovieAndManagerReady = true;
            Globals::CharacterSelectMenuOpen = true;
        }

        static UFunction* characterSelectClosedUFunction = nullptr;

        if (!characterSelectClosedUFunction)
            characterSelectClosedUFunction = UFunction::FindFunction("Function PoplarGame.PoplarCharacterSelectGFxMovie.WaitForCharacterSelectLevelToUnload");

        if (!Globals::amServer && !Globals::amStandalone && function == characterSelectClosedUFunction) {
            std::thread t(SetGear);
            t.detach();

            Globals::CharacterSelectMenuOpen = false;
        }

        static UFunction* matchEndedUFunction = nullptr;

        if (!matchEndedUFunction)
            matchEndedUFunction = UFunction::FindFunction("Function PoplarGame.PoplarGameInfo.MatchEnded.Timer");

        if (Globals::amServer && !Globals::amStandalone && function == matchEndedUFunction && Globals::ShutdownTimer == 0.0f) {
            std::cout << "[GAME] Match ended, shutting down in 10sec!" << std::endl;
            
            Globals::ShutdownTimer = 10.0f;
        }

        static UFunction* eventNotifyDisconnectUFunction = nullptr;

        if (!eventNotifyDisconnectUFunction)
            eventNotifyDisconnectUFunction = UFunction::FindFunction("Function Engine.PlayerController.NotifyDisconnect");

        if (function == eventNotifyDisconnectUFunction) {
            std::cout << "[NETWORKING] Player notifyDisconnect!" << std::endl;

            for (Globals::ServerPlayer& serverPlayer : Globals::ServerPlayers) {
                if (serverPlayer.Connection && serverPlayer.Connection->Actor == object) {
                    std::cout << "[NETWORKING] Player disconnected!" << std::endl;

                    serverPlayer.Connection = nullptr;
                }
            }
        }

        static UFunction* clientTravelUFunction = nullptr;

        if (!clientTravelUFunction)
            clientTravelUFunction = UFunction::FindFunction("Function Engine.PlayerController.ClientTravel");

        if (function == clientTravelUFunction) {
            Globals::OnWorldSwitch();
        }

        static UFunction* updateHelixMenuStateUFunction = nullptr;

        if (!updateHelixMenuStateUFunction)
            updateHelixMenuStateUFunction = UFunction::FindFunction("Function PoplarGame.PoplarPlayerStateInfo.UpdateHelixMenuState");

        if (function == updateHelixMenuStateUFunction && !Globals::amServer) {
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

        if (function == serverTryBuyNextTierUFunction && !Globals::amServer) {
            APoplarPlayerReplicationInfo* ppri = reinterpret_cast<APoplarPlayerReplicationInfo*>(object);

            UPoplarAugDefinition* def = ((APoplarPlayerReplicationInfo_eventServerTryBuyNextTierForAugmentation_Params*)(params))->AugDef;

            for (FAugCategoryInstance& cat : ppri->Augs.AllCategories) {
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

                    //ProcessEvent.call(object, function, params);

                    ppc->eventSwitchPoplarPlayerClass(nameIdDef);

                    UPoplarMetaSkinDefinition* skin = nullptr;

                    if (Globals::CharacterSkin) {
                        skin = UObject::FindObject<UPoplarMetaSkinDefinition>(Globals::CharacterSkin->skinObjectName);
                        
                    }

                    UPoplarMetaTauntDefinition* taunt = nullptr;

                    if (Globals::CharacterTaunt) {
                        taunt = UObject::FindObject<UPoplarMetaTauntDefinition>(Globals::CharacterTaunt->tauntObjectName);
                    }

                    ppc->ClientApplyPendingPlayerClass(nameIdDef, skin, taunt);

                    Globals::timeTillMutationInit = 5.0f;

                    return;
                }
            }
        }

        static UFunction* characterPossessionUFunction = nullptr;

        if (!characterPossessionUFunction)
            characterPossessionUFunction = UFunction::FindFunction("Function Engine.PlayerController.ServerAcknowledgePossession");

        if (function == characterPossessionUFunction) {
            if (!Globals::amStandalone) {
                APoplarPlayerController* ppc = reinterpret_cast<APoplarPlayerController*>(object);

                bool alreadySetup = false;
                for (APoplarPlayerController* cmpPPC : Globals::ppcsWeSetupAugsFor) {
                    if (cmpPPC == ppc) {
                        alreadySetup = true;
                        break;
                    }
                }

                if (!Globals::amServer) { // && Globals::CharacterSelectThisPossesionsTheRealOne
                    SDKUtils::GetLastOfClass< UMHW_DeathRecap>()->SetVisible(false, 0.0f);

                    if (ppc->MyPoplarPawn && ppc->MyPoplarPawn->PoplarPlayerClassDef && ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet) {
                        Globals::ppcsWeSetupAugsFor.push_back(ppc);

                        for (int i = 0; i < 5; i++) {
                            if (i < ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet->SupportedMutations.size())
                                ppc->MyPoplarPRI->GetMetaPRI()->UnlockedMutations[i] = ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet->SupportedMutations[i]->MutationMetaItemDefinition;
                        }

                        ppc->MyPoplarPRI->InitializeAugmentations(ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet);
                    }
                }
                else if(Globals::amServer) {
                    if ( ppc->MyPoplarPawn && ppc->MyPoplarPawn->PoplarPlayerClassDef && ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet) {
                        Globals::ppcsWeSetupAugsFor.push_back(ppc);

                        for (int i = 0; i < 5; i++) {
                            if (i < ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet->SupportedMutations.size())
                                ppc->MyPoplarPRI->GetMetaPRI()->UnlockedMutations[i] = ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet->SupportedMutations[i]->MutationMetaItemDefinition;
                        }

                        ppc->MyPoplarPRI->InitializeAugmentations(ppc->MyPoplarPawn->PoplarPlayerClassDef->AugSet);
                    }
                }
            }
        }

        /*
        if (function == characterPossessionUFunction) {
            if (!Globals::amStandalone && !Globals::amServer) { // In theory should never happen outside of networked play, but I've been wrong before...
                
            }
        }
        */
        static UFunction* serverConvolveUFunction = nullptr;

        if (!serverConvolveUFunction)
            serverConvolveUFunction = UFunction::FindFunction("Function Engine.PlayerController.ServerProcessConvolve");

        if (Globals::netDriver && function == serverConvolveUFunction) {
            printf("[NETWORKING] Setting up a player's gear!\n");

            APoplarPlayerController* ppc = reinterpret_cast<APoplarPlayerController*>(object);
            APlayerController_eventServerProcessConvolve_Params* parms = reinterpret_cast<APlayerController_eventServerProcessConvolve_Params*>(params);

            std::wstring wJoinParams(parms->C.c_str());

            std::string joinParams(wJoinParams.begin(), wJoinParams.end());

            nlohmann::json jsonObj = nlohmann::json::parse(joinParams);

            if (jsonObj["NEMA"] == true) { // Now you're in all of our matches :)
                UPoplarPerkFunction* perkOne = nullptr;
                UPoplarPerkFunction* perkTwo = nullptr;
                UPoplarPerkFunction* perkThree = nullptr;

                if (jsonObj.contains("perkOne"))
                    perkOne = UObject::FindObject< UPoplarPerkFunction>(jsonObj["perkOne"]);

                if (jsonObj.contains("perkTwo"))
                    perkTwo = UObject::FindObject< UPoplarPerkFunction>(jsonObj["perkTwo"]);

                if (jsonObj.contains("perkThree"))
                    perkThree = UObject::FindObject< UPoplarPerkFunction>(jsonObj["perkThree"]);

                if (perkOne) {
                    ppc->MyPoplarPRI->Perks[0].PerkFunction = (UPoplarPerkFunction*)Engine::ScuffedDuplicateObject(perkOne, Globals::GetGWorld());
                    ppc->MyPoplarPRI->Perks[0].bActive = 1;
                    ppc->MyPoplarPRI->Perks[0].bCanUse = 1;
                    ppc->MyPoplarPRI->Perks[0].Rarity = GameUtils::RarityStringToRarity(jsonObj["perkOne"]);
                    ppc->MyPoplarPRI->OnRep_Perks(0, FReplicatedPerkItem());
                }

                if (perkTwo) {
                    ppc->MyPoplarPRI->Perks[1].PerkFunction = (UPoplarPerkFunction*)Engine::ScuffedDuplicateObject(perkTwo, Globals::GetGWorld());
                    ppc->MyPoplarPRI->Perks[1].bActive = 1;
                    ppc->MyPoplarPRI->Perks[1].bCanUse = 1;
                    ppc->MyPoplarPRI->Perks[1].Rarity = GameUtils::RarityStringToRarity(jsonObj["perkTwo"]);
                    ppc->MyPoplarPRI->OnRep_Perks(1, FReplicatedPerkItem());
                }

                if (perkThree) {
                    ppc->MyPoplarPRI->Perks[2].PerkFunction = (UPoplarPerkFunction*)Engine::ScuffedDuplicateObject(perkThree, Globals::GetGWorld());
                    ppc->MyPoplarPRI->Perks[2].bActive = 1;
                    ppc->MyPoplarPRI->Perks[2].bCanUse = 1;
                    ppc->MyPoplarPRI->Perks[2].Rarity = GameUtils::RarityStringToRarity(jsonObj["perkThree"]);
                    ppc->MyPoplarPRI->OnRep_Perks(2, FReplicatedPerkItem());
                }
            }

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
            if (reinterpret_cast<UPoplarFrontendScreenMainGFxObject_execHandleMainPanelButtonClicked_Params*>(params)->PanelId != 11) {
                return;
            }
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
            for (const Globals::ServerPlayer& serverPlayer: Globals::ServerPlayers) {
                UNetConnection* connection = serverPlayer.Connection;

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

    SafetyHookInline StaticConstructObject;

    UObject* StaticConstructObjectHook(UClass* a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9) {
        UObject* ret = StaticConstructObject.call<UObject*>(a1, a2, a3, a4, a5, a6, a7, a8, a9);

 
        if (Globals::netDriver && ret && ret->IsA<AActor>()) {
                    std::scoped_lock t(Globals::NetworkObjectListMutex);

                    Globals::NetworkObjectList.push_back((AActor*)ret);
        }

        return ret;
    }

    SafetyHookInline BeginDestroy;

    bool BeginDestroyHook(UObject* obj) {
        if (Globals::netDriver && obj && obj->IsA<AActor>()) {
            {
                std::scoped_lock l(Globals::NetworkObjectListMutex);

                Globals::NetworkObjectList.erase(std::remove_if(Globals::NetworkObjectList.begin(), Globals::NetworkObjectList.end(), [&obj](AActor* cmpActor) {
                    return obj == cmpActor;
                    }), Globals::NetworkObjectList.end());
            }
        }

        bool ret = BeginDestroy.call<bool>(obj);

        return ret;
    }

    SafetyHookInline PoplarGameInfoSetup;

    __int64 PoplarGameInfoSetupHook(APoplarGameInfo* a1, __int64 a2) {
        UPoplarCharacterSelectStyleDefinition* codeNameString = nullptr;

        int i = 0;

        std::cout << "[Game] Launched " << Globals::GetGWorld()->GetFullName() << "!" << std::endl;

        if (Globals::amServer && !Globals::GetGWorld()->GetFullName().contains("MenuMap")) {
            a1->NumPlayers = ServerSettings::NumPlayersToStart;

            a1->EffectiveNumPlayers = ServerSettings::NumPlayersToStart;
        }

        __int64 ret = PoplarGameInfoSetup.call<__int64>(a1, a2);

        if (Globals::amServer && !Globals::GetGWorld()->GetFullName().contains("MenuMap")) {
            a1->NumPlayers = ServerSettings::NumPlayersToStart;

            a1->TeamMinSizeForStart = ServerSettings::TeamMinSizeForStart;

            a1->EffectiveNumPlayers = ServerSettings::NumPlayersToStart;

            ServerNetworking::InitListen();
        }

        return ret;
    }

    SafetyHookInline ServerCinematicCrashHook;

    __int64 ServerCinematicCrash(__int64 a1) {
        return 0;
    }

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
            Init::ServerConfig();

            Globals::hasDoneInitialTravel = true;
            a2 = ServerSettings::MapString;
        }

        if (std::wstring(a2).contains(L"open") || std::wstring(a2).contains(L"disconnect")) {
            Globals::OnWorldSwitch();
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