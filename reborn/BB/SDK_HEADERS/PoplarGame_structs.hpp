/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: PoplarGame_structs.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct PoplarGame.Action_BotUseActionSkill.BotUseActionSkillSecondaryActionSkillData
// 0x0011
struct FBotUseActionSkillSecondaryActionSkillData
{
	float                                              RunAfter;                                      // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        RunIf;                                         // 0x0008 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	uint8_t                                            Context;                                       // 0x0010 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.AssistModifiersDefinition.AssistStreakTier
// 0x0004
struct FAssistStreakTier
{
	int32_t                                            Threshold;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.AssistModifiersDefinition.AssistModifier
// 0x00C8
struct FAssistModifier
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                XPModifier;                                    // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ScoreAwarded;                                  // 0x0028 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                AssistStatScoreModifier;                       // 0x0048 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                AssistStatXPModifier;                          // 0x0068 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      Title;                                         // 0x0088 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      FlashFrameName;                                // 0x0098 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x00A8 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	int32_t                                            AssistModifiersArrayIndex;                     // 0x00AC (0x0004) [0x0000000000000000]               
	uint32_t                                           bTrackForPostMatchAwards : 1;                  // 0x00B0 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UStatDefinition*                             AssistModifierStat;                            // 0x00B8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USwfMovie*                                   DisplayIcon;                                   // 0x00C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.AssistModifiersDefinition.AssistCombo
// 0x00B4
struct FAssistCombo
{
	class TArray<uint8_t>                              AssistModifiers;                               // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FAttributeInitializationData                XPModifier;                                    // 0x0010 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ScoreAwarded;                                  // 0x0030 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                AssistStatScoreModifier;                       // 0x0050 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                AssistStatXPModifier;                          // 0x0070 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      Title;                                         // 0x0090 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<class FString>                        IconFrameNames;                                // 0x00A0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            AssistCombosArrayIndex;                        // 0x00B0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.AssistModifiersDefinition.AssistModAwardData
// 0x0018
struct FAssistModAwardData
{
	class APoplarPlayerReplicationInfo*                PPRI;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              XPModifierToAward;                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ScoreToAward;                                  // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AssistStatXPModifierToAward;                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AssistStatScoreModifierToAward;                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.IAttackSequence.AttackMovementActions
// 0x0004
struct FAttackMovementActions
{
	uint32_t                                           bForward : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bBack : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLeft : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bRight : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bNotMoving : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bInAir : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bSprinting : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bJumping : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
};

// ScriptStruct PoplarGame.AttackSeqNode.AttackActionOutputLinkDescriptionData
// 0x0004
struct FAttackActionOutputLinkDescriptionData
{
	int32_t                                            LinkId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.AttackSequenceDefinition.AttackStateData
// 0x0004
struct FAttackStateData
{
	int32_t                                            OutputLinks;                                   // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.AttackSequenceDefinition.AttackActionOutputLinkData
// 0x0004
struct FAttackActionOutputLinkData
{
	int32_t                                            LinkIdAndLinkedAction;                         // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.AttackSequenceDefinition.AttackSequenceActionData
// 0x000C (0x0004 - 0x0010)
struct FAttackSequenceActionData : FAttackStateData
{
	class UAttackSeqNode*                              Action;                                        // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.ICreditsProvider.TeamCreditsTypeRewardFormula
// 0x0050
struct FTeamCreditsTypeRewardFormula
{
	uint32_t                                           bUseSharesSystem : 1;                          // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	float                                              NumberOfSharesForKiller;                       // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              NumberOfSharesForNonKiller;                    // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                CreditsPercentageAwardedToKillerFormula;       // 0x0010 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                CreditsPercentageAwardedToNonKillerFormula;    // 0x0030 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.ICreditsProvider.CreditsProviderData
// 0x0028
struct FCreditsProviderData
{
	uint32_t                                           bDenyCreditsRewardIfKillerIsStationaryUnit : 1;// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            DeathShouldRewardCreditsToTeam;                // 0x0004 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                CreditsToAwardOnDeathFormula;                  // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarTypes.ChallengePatchData
// 0x0010
struct FChallengePatchData
{
	class UPoplarChallengeDefinition*                  ChallengeDef;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ChallengeLevel;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            OldValue;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarTypes.PoplarMetaReward
// 0x0038
struct FPoplarMetaReward
{
	int32_t                                            PlayerExperience;                              // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CharacterExperience;                           // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            EarnedCurrency;                                // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            PremiumCurrency;                               // 0x000C (0x0004) [0x0000000000000000]               
	class UPoplarMetaItemDefinition* MetaItemDefinition;                            // 0x0010 (0x0008) [0x0000000000000000]               
	class UPoplarPerkFunction* PerkItemDefinition;                            // 0x0018 (0x0008) [0x0000000000000000]               
	class UUnlockDefinition* AssociatedUnlock;                              // 0x0020 (0x0008) [0x0000000000000000]               
	class FString                                      ApolloJSON;                                    // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarTypes.ChallengeUpdate
// 0x0070
struct FChallengeUpdate
{
	uint32_t                                           bComplete : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UPoplarChallengeDefinition*                  ChallengeDefinition;                           // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            LevelIndex;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            TargetSum;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            ProgressSum;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	class FString                                      ChallengeAssetTrackerKey;                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasMetaReward : 1;                            // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPoplarMetaReward                           MetaReward;                                    // 0x0038 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarTypes.CharacterStat
// 0x0029
struct FCharacterStat
{
	class UStatDefinition*                             StatDef;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      DisplayString;                                 // 0x0008 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class USwfMovie*                                   DisplayIcon;                                   // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMarkupAttributePresentationDefinition*      StatPresentatonDef;                            // 0x0020 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	uint8_t                                            UIPosition;                                    // 0x0028 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarTypes.PoplarScoreboardPlayerSelectList
// 0x0014
struct FPoplarScoreboardPlayerSelectList
{
	class TArray<struct FPoplarScoreboardPlayerSelectPlayer> SelectablePlayerOrdering;                      // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            SelectedIndex;                                 // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarTypes.PoplarScoreboardPlayerSelectPlayer
// 0x0008
struct FPoplarScoreboardPlayerSelectPlayer
{
	int32_t                                            TeamIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PlayerIndex;                                   // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.TeammateCompareStat
// 0x0021
struct FTeammateCompareStat
{
	class FString                                      StatName;                                      // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FTeammateStatCompareEntry>     Entries;                                       // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            PlayerOrdering;                                // 0x0020 (0x0001) [0x0000000000100000]               
};

// ScriptStruct PoplarGame.PoplarTypes.TeammateStatCompareEntry
// 0x0008
struct FTeammateStatCompareEntry
{
	int32_t                                            PlayerTeamIndex;                               // 0x0000 (0x0004) [0x0000000000100000]               
	int32_t                                            PlayerStat;                                    // 0x0004 (0x0004) [0x0000000000100000]               
};

// ScriptStruct PoplarGame.PoplarTypes.PlayerMatchResultData
// 0x0138
struct FPlayerMatchResultData
{
	uint8_t                                            Outcome;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            PreviousEarnedCurrency;                        // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentEarnedCurrency;                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            PreviousCharacterTokens;                       // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentCharacterTokens;                        // 0x0010 (0x0004) [0x0000000000000000]               
	class TArray<struct FCharacterTokenPair>           RefundedCharacterTokens;                       // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            BaseMetaXP;                                    // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            BonusMetaXP;                                   // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            RewardsMetaXP;                                 // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            RewardsBonusMetaXP;                            // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            BaseEarnedCurrency;                            // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            BonusEarnedCurrency;                           // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            RewardsEC;                                     // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            RewardsBonusEC;                                // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            BaseCharacterXP;                               // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            BonusAndRewardsCharacterXP;                    // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            PreviousMetaXP;                                // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentMetaXP;                                 // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            MetaLevel;                                     // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            PreviousMetaLevel;                             // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxMetaLevel;                                  // 0x0060 (0x0004) [0x0000000000000000]               
	class FString                                      CharacterId;                                   // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CharacterSkinID;                               // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PreviousCharacterXP;                           // 0x0088 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentCharacterXP;                            // 0x008C (0x0004) [0x0000000000000000]               
	int32_t                                            CharacterLevel;                                // 0x0090 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxCharacterLevel;                             // 0x0094 (0x0004) [0x0000000000000000]               
	int32_t                                            PreviousCharacterLevel;                        // 0x0098 (0x0004) [0x0000000000000000]               
	class TArray<struct FMatchResultDataRewardModifier> RewardModifiers;                               // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        CharacterMatchRewardIds;                       // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ProfileMatchRewardIds;                         // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        MatchRewardIds;                                // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLevelXPThreshold>             MetaLevelXPThresholds;                         // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLevelXPThreshold>             CharacterLevelXPThresholds;                    // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerUniqueId;                                // 0x0100 (0x0014) [0x0000000000000000]               
	struct FPlatformUserId                             PlayerID;                                      // 0x0114 (0x0008) [0x0000000000000000]               
	class FString                                      JobGuid;                                       // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ServiceResult;                                 // 0x0130 (0x0004) [0x0000000000000000]               
	int32_t                                            NumMatchResultRetrievalAttempts;               // 0x0134 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.CharacterTokenPair
// 0x0014
struct FCharacterTokenPair
{
	class FString                                      CharacterId;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NumTokens;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.MatchResultDataRewardModifier
// 0x0015
struct FMatchResultDataRewardModifier
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Modifier;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.LevelXPThreshold
// 0x0008
struct FLevelXPThreshold
{
	int32_t                                            Level;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            XPRequiredForLevel;                            // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.BuffStateInfo
// 0x0028
struct FBuffStateInfo
{
	class UPoplarBuffDefinition*                       BuffDefinition;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class APoplarPlayerReplicationInfo*                InstigatingPRI;                                // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              TimeStarted;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TimeRemaining;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Stacks;                                        // 0x001C (0x0004) [0x0000000000000000]               
	uint8_t                                            FlashCount;                                    // 0x0020 (0x0001) [0x0000000000000000]               
	int32_t                                            SourcePerkIndex;                               // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.WeakUPtr_map
// 0x0008
struct FWeakUPtr_map
{
	int32_t                                            ObjectIndex;                                   // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ObjectSerialNumber;                            // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarTypes.CombatModifierAchievedData
// 0x0044
struct FCombatModifierAchievedData
{
	uint32_t                                           bIsKillMod : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      Title;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NumTimesAchieved;                              // 0x0028 (0x0004) [0x0000000000000000]               
	class FString                                      IconPath;                                      // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.sMatchInfo
// 0x00BC
struct FsMatchInfo
{
	class FString                                      MatchDate;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameMode;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MapDifficultyMode;                             // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MapHardcoreMode;                               // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TeamSizeDim;                                   // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameModeDim;                                   // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LevelDim;                                      // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           IsPvE : 1;                                     // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            MatchTime;                                     // 0x0084 (0x0004) [0x0000000000000000]               
	class FString                                      MatchDateUTC;                                  // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Result;                                        // 0x0098 (0x0004) [0x0000000000000000]               
	class FString                                      MatchEndReason;                                // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamAScore;                                    // 0x00B0 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamBScore;                                    // 0x00B4 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamModeBonus;                                 // 0x00B8 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.sStatInfo
// 0x004D
struct FsStatInfo
{
	class FString                                      StatName;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            UIPosition;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            StatValue;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            StatStartingValue;                             // 0x0018 (0x0004) [0x0000000000000000]               
	class FString                                      StatValueString;                               // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PersonalBest;                                  // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           bNewPersonalBest : 1;                          // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      StatIconPath;                                  // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bTeamBest : 1;                                 // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            PlayerOrdering;                                // 0x004C (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.sChallengeInfo
// 0x00C8
struct FsChallengeInfo
{
	class FString                                      RawName;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RankString;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DisplayValue;                                  // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CurrentValue;                                  // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            TargetValue;                                   // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            Progress;                                      // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            Level;                                         // 0x004C (0x0004) [0x0000000000000000]               
	class FString                                      Description;                                   // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPoplarChallengeDefinition*                  ChallengeDef;                                  // 0x0060 (0x0008) [0x0000000000000000]               
	class FString                                      RewardName0;                                   // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RewardName1;                                   // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RewardName2;                                   // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RewardIconPath0;                               // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RewardIconPath1;                               // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RewardIconPath2;                               // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarTypes.sGearInfo
// 0x0018
struct FsGearInfo
{
	class FString                                      ApolloJSON;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ItemLevel;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bActivated : 1;                                // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarTypes.sPlayerInfo
// 0x00C8
struct FsPlayerInfo
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0014) [0x0000000000000000]               
	uint32_t                                           bIsBot : 1;                                    // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      PlayerName;                                    // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlayerLevel;                                   // 0x0028 (0x0004) [0x0000000000000000]               
	class FString                                      CharacterId;                                   // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CharacterSkin;                                 // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           IsPrimary : 1;                                 // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsSecondary : 1;                               // 0x0050 (0x0004) [0x0000000000000000] [0x00000002] 
	class TArray<struct FsStatInfo>                    PrimaryStats;                                  // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FsStatInfo>                    CharacterStats;                                // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FsStatInfo>                    RawStats;                                      // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FsChallengeInfo>               CompletedChallenges;                           // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCombatModifierAchievedData>   CombatModifiersAchieved;                       // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        PostMatchEntitlements;                         // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FsGearInfo>                    GearInfos;                                     // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarTypes.sTeamInfo
// 0x0028
struct FsTeamInfo
{
	int32_t                                            TeamIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamScore;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	class TArray<struct FsPlayerInfo>                  Players;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FsStatInfo>                    TotalStats;                                    // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarTypes.sPostMatchData
// 0x0370
struct FsPostMatchData
{
	class FString                                      MatchId;                                       // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FPlatformUserId                             PlayerID;                                      // 0x0010 (0x0008) [0x0000000000100000]               
	struct FsMatchInfo                                 MatchInfo;                                     // 0x0018 (0x00C0) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FsTeamInfo>                    Teams;                                         // 0x00D8 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            PrimaryPlayerTeamIndex;                        // 0x00E8 (0x0004) [0x0000000000100000]               
	uint32_t                                           IsPrimaryPlayerSpectator : 1;                  // 0x00EC (0x0004) [0x0000000000100000] [0x00000001] 
	class TArray<struct FTeammateCompareStat>          TeammateComparisonStats;                       // 0x00F0 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FPlayerMatchResultData                      MatchResultData;                               // 0x0100 (0x0138) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FPlayerMatchResultData                      SplitScreenMatchResultData;                    // 0x0238 (0x0138) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarTypes.PoplarMatchHistoryEntry
// 0x005C
struct FPoplarMatchHistoryEntry
{
	class FString                                      MatchId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameModeName;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MatchResult;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      MatchDateUTC;                                  // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CharacterName;                                 // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bSpectator : 1;                                // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarTypes.MatchHistoryEntrySet
// 0x0020
struct FMatchHistoryEntrySet
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            StartIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            EndIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<struct FPoplarMatchHistoryEntry>      Entries;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarTypes.DurangoHeroProgressStruct
// 0x0020
struct FDurangoHeroProgressStruct
{
	int32_t                                            ProgressPercent_Server;                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ProgressCommandRank_Server;                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            ProgressCharacterRank_Server;                  // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      ProgressCharacterId_Server;                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarTypes.TrainingData
// 0x0010
struct FTrainingData
{
	class APoplarPlayerController*                     PCOwner;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarTrainingMessageDefinition*            TrainingDefinition;                            // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.BotPlayerStatsData
// 0x000C
struct FBotPlayerStatsData
{
	class UStatDefinition*                             StatDef;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            StatValue;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.BroadcastMessageData
// 0x0048
struct FBroadcastMessageData
{
	uint8_t                                            Filter;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            ClientSideFilter;                              // 0x0001 (0x0001) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       InstigatingTeam;                               // 0x0008 (0x0008) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       OpposingTeam;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class AActor*                                      InstigatingPlayer;                             // 0x0018 (0x0008) [0x0000000000000000]               
	class AActor*                                      OpposingPlayer;                                // 0x0020 (0x0008) [0x0000000000000000]               
	class UPoplarLaneDefinition*                       LaneDef;                                       // 0x0028 (0x0008) [0x0000000000000000]               
	class UPoplarSkillDefinition*                      SkillDef;                                      // 0x0030 (0x0008) [0x0000000000000000]               
	class UPoplarTrainingMessageDefinition*            TrainingDef;                                   // 0x0038 (0x0008) [0x0000000000000000]               
	class UObject*                                     OtherParticipant;                              // 0x0040 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.PoplarSkinRepData
// 0x0010
struct FPoplarSkinRepData
{
	uint8_t                                            RepIndex;                                      // 0x0000 (0x0001) [0x0000000000000000]               
	class UPoplarContentSkinDefinition*                SkinDef;                                       // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTypes.DamageTags
// 0x0004
struct FDamageTags
{
	uint32_t                                           bStandardAttackAny : 1;                        // 0x0000 (0x0004) [0x0000000000800001] [0x00000001] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bStandardAttack01 : 1;                         // 0x0000 (0x0004) [0x0000000000800001] [0x00000002] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bStandardAttack02 : 1;                         // 0x0000 (0x0004) [0x0000000000800001] [0x00000004] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bActionAbilityAny : 1;                         // 0x0000 (0x0004) [0x0000000000800001] [0x00000008] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bActionAbility01 : 1;                          // 0x0000 (0x0004) [0x0000000000800001] [0x00000010] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bActionAbility02 : 1;                          // 0x0000 (0x0004) [0x0000000000800001] [0x00000020] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bCCAny : 1;                                    // 0x0000 (0x0004) [0x0000000000800001] [0x00000040] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bCCStun : 1;                                   // 0x0000 (0x0004) [0x0000000000800001] [0x00000080] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bCCBlind : 1;                                  // 0x0000 (0x0004) [0x0000000000800001] [0x00000100] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bCCSlow : 1;                                   // 0x0000 (0x0004) [0x0000000000800001] [0x00000200] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bCCForcedMove : 1;                             // 0x0000 (0x0004) [0x0000000000800001] [0x00000400] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bBuffSkill : 1;                                // 0x0000 (0x0004) [0x0000000000800001] [0x00000800] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bDebuffSkill : 1;                              // 0x0000 (0x0004) [0x0000000000800001] [0x00001000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bUlt : 1;                                      // 0x0000 (0x0004) [0x0000000000800001] [0x00002000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bDot : 1;                                      // 0x0000 (0x0004) [0x0000000000800001] [0x00004000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bHeal : 1;                                     // 0x0000 (0x0004) [0x0000000000800001] [0x00008000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bShieldHeal : 1;                               // 0x0000 (0x0004) [0x0000000000800001] [0x00010000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bEnvironmental : 1;                            // 0x0000 (0x0004) [0x0000000000800001] [0x00020000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bRanged : 1;                                   // 0x0000 (0x0004) [0x0000000000800001] [0x00040000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bMelee : 1;                                    // 0x0000 (0x0004) [0x0000000000800001] [0x00080000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bAoE : 1;                                      // 0x0000 (0x0004) [0x0000000000800001] [0x00100000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bPassiveAbility : 1;                           // 0x0000 (0x0004) [0x0000000000800001] [0x00200000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bPerksAndArtifacts : 1;                        // 0x0000 (0x0004) [0x0000000000800001] [0x00400000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bDismantleMinions : 1;                         // 0x0000 (0x0004) [0x0000000000800001] [0x00800000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bWorldInteraction : 1;                         // 0x0000 (0x0004) [0x0000000000800001] [0x01000000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bDirectionalHardFlinch : 1;                    // 0x0000 (0x0004) [0x0000000000800001] [0x02000000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bMeleeQuickstrike : 1;                         // 0x0000 (0x0004) [0x0000000000800001] [0x04000000] (CPF_Edit | CPF_NoExport)
	uint32_t                                           bReflectedDamage : 1;                          // 0x0000 (0x0004) [0x0000000000800001] [0x08000000] (CPF_Edit | CPF_NoExport)
};

// ScriptStruct PoplarGame.PoplarTypes.BehaviorLineTraceFlags
// 0x0004
struct FBehaviorLineTraceFlags
{
	uint32_t                                           bComplexCollision : 1;                         // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bStopAtAnyHit : 1;                             // 0x0000 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bPawns : 1;                                    // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bMovers : 1;                                   // 0x0000 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bLevel : 1;                                    // 0x0000 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           bVolumes : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           bOnlyProjActor : 1;                            // 0x0000 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           bBlocking : 1;                                 // 0x0000 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           bLevelGeometry : 1;                            // 0x0000 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           bTerrain : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           bPhysicsVolumes : 1;                           // 0x0000 (0x0004) [0x0000000000000003] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           bBlockingMesh : 1;                             // 0x0000 (0x0004) [0x0000000000000003] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           bWater : 1;                                    // 0x0000 (0x0004) [0x0000000000000003] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           bProjectiles : 1;                              // 0x0000 (0x0004) [0x0000000000000003] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           bFieldVolumes : 1;                             // 0x0000 (0x0004) [0x0000000000000003] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           bIgnoreRigidBody : 1;                          // 0x0000 (0x0004) [0x0000000000000003] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           bActorsGroup : 1;                              // 0x0000 (0x0004) [0x0000000000000003] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           bWorldGroup : 1;                               // 0x0000 (0x0004) [0x0000000000000003] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           bAllCollidingGroup : 1;                        // 0x0000 (0x0004) [0x0000000000000003] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           bProjTargetsGroup : 1;                         // 0x0000 (0x0004) [0x0000000000000003] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           bAllBlockingGroup : 1;                         // 0x0000 (0x0004) [0x0000000000000003] [0x00100000] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarDamagePipeline.ConditionalDamageModifier
// 0x0050
struct FConditionalDamageModifier
{
	uint8_t                                            Context;                                       // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Condition;                                     // 0x0008 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	uint8_t                                            DamageTagsTest;                                // 0x0010 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FDamageTags                                 DamageTags;                                    // 0x0014 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bCriticalHit : 1;                              // 0x0018 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                DamageModifier;                                // 0x0020 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      ReferenceName;                                 // 0x0040 (0x0010) [0x0000000000500003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarStatReplicationInfo.MaxStatsExceededMessage
// 0x0010
struct FMaxStatsExceededMessage
{
	int32_t                                            ExceededMaxStatsCount;                         // 0x0000 (0x0004) [0x0000000000000000]               
	class UStatDefinition*                             LastExceededStatDef;                           // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.KillModifiersDefinition.KillModAwardData
// 0x0018
struct FKillModAwardData
{
	class APoplarPlayerReplicationInfo*                PPRI;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              XPModifierToAward;                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ScoreToAward;                                  // 0x000C (0x0004) [0x0000000000000000]               
	float                                              KillStatXPModifierToAward;                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              KillStatScoreModifierToAward;                  // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.KillModifiersDefinition.KillStreakTier
// 0x0004
struct FKillStreakTier
{
	int32_t                                            Threshold;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.KillModifiersDefinition.KillModifier
// 0x00D8
struct FKillModifier
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                XPModifier;                                    // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ScoreAwarded;                                  // 0x0028 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                KillStatScoreModifier;                         // 0x0048 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                KillStatXPModifier;                            // 0x0068 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      Title;                                         // 0x0088 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0098 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      FlashFrameName;                                // 0x00A8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x00B8 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	int32_t                                            KillModifiersArrayIndex;                       // 0x00BC (0x0004) [0x0000000000000000]               
	uint32_t                                           bTrackForPostMatchAwards : 1;                  // 0x00C0 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UStatDefinition*                             KillModifierStat;                              // 0x00C8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USwfMovie*                                   DisplayIcon;                                   // 0x00D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.KillModifiersDefinition.KillCombo
// 0x00D4
struct FKillCombo
{
	class TArray<class UPlayerClassDefinition*>        Killer;                                        // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UCharacterClassDefinition*>     Victim;                                        // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<uint8_t>                              KillModifiers;                                 // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FAttributeInitializationData                XPModifier;                                    // 0x0030 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ScoreAwarded;                                  // 0x0050 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                KillStatScoreModifier;                         // 0x0070 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                KillStatXPModifier;                            // 0x0090 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      Title;                                         // 0x00B0 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<class FString>                        IconFrameNames;                                // 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            KillCombosArrayIndex;                          // 0x00D0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMusicSystem.PoplarCombatMusicParams
// 0x0030
struct FPoplarCombatMusicParams
{
	uint32_t                                           bIsActive : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              AlarmedThreshold;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CombatThreshold;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RelaxThreshold;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AttackRate;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DecayRate;                                     // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkState* AmbientMusicState;                             // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkState* AlarmedMusicState;                             // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkState* CombatMusicState;                              // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarMusicSystem.MusicSystemConfiguration
// 0x0054
struct FMusicSystemConfiguration
{
	class UAkEvent*                                    StartAkEvent;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    StopAkEvent;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkStateGroup*                               StateGroup;                                    // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              MinimumDelayBetweenCues;                       // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FPoplarCombatMusicParams                    CombatMusicSettings;                           // 0x0020 (0x0030) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            BroadcastIndex;                                // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMusicSystem.MusicCue
// 0x002C
struct FMusicCue
{
	uint8_t                                            MessageType;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            Target;                                        // 0x0001 (0x0001) [0x0000000000000000]               
	int32_t                                            Priority;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Value;                                         // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bNowOrNever : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class UAkEvent* MusicAkEvent;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class UAkState* MusicAkState;                                  // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            BroadcastIndex;                                // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMusicSystem.ServerMusicCue
// 0x0048
struct FServerMusicCue
{
	struct FMusicCue                                   Cue;                                           // 0x0000 (0x0030) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       Team;                                          // 0x0030 (0x0008) [0x0000000000000000]               
	class APoplarPlayerController*                     Individual;                                    // 0x0038 (0x0008) [0x0000000000000000]               
	class UAkState*                                    DefaultAkState;                                // 0x0040 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMusicSystem.PlayerMusicState
// 0x0094
struct FPlayerMusicState
{
	struct FMusicCue                                   MusicCues[0x3];                                // 0x0000 (0x0090) [0x0000000000000000]               
	int32_t                                            BroadcastIndex;                                // 0x0090 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMusicSystem.PoplarCombatMusicThreat
// 0x0018
struct FPoplarCombatMusicThreat
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class AWillowMind*                                 Enemy;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              ThreatLevel;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              LastUpdateTime;                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPickupDefinition.PickupConstraintData
// 0x0010
struct FPickupConstraintData
{
	uint32_t                                           bDesiredResultFromEvaluator : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Evaluator;                                     // 0x0008 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct PoplarGame.PoplarBuffDefinition.BuffSortInfo
// 0x0028
struct FBuffSortInfo
{
	uint8_t                                            SortContext;                                   // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            SortOrder;                                     // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                SortAttribute;                                 // 0x0008 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarBuffDefinition.CrowdControlStateInfo
// 0x0014
struct FCrowdControlStateInfo
{
	uint8_t                                            CrowdControlEffect;                            // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              TimeStarted;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeRemaining;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            Stacks;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameReplicationInfo.KillEventStruct
// 0x003D
struct FKillEventStruct
{
	class APoplarPlayerReplicationInfo*                KilledPRI;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class APoplarPlayerReplicationInfo*                KillerPRI;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	class UPoplarUnitTypeDefinition*                   KillerUnitTypeDef;                             // 0x0010 (0x0008) [0x0000000000000000]               
	class UPoplarUnitTypeDefinition*                   KilledUnitTypeDef;                             // 0x0018 (0x0008) [0x0000000000000000]               
	class UWillowCharacterClassDefinition*             KillerClassDef;                                // 0x0020 (0x0008) [0x0000000000000000]               
	class UWillowCharacterClassDefinition*             KilledClassDef;                                // 0x0028 (0x0008) [0x0000000000000000]               
	float                                              TimeOccurred;                                  // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            CashAwarded;                                   // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            ExperienceAwarded;                             // 0x0038 (0x0004) [0x0000000000000000]               
	uint8_t                                            MessageType;                                   // 0x003C (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameReplicationInfo.MatchStateData
// 0x0028
struct FMatchStateData
{
	int32_t                                            State;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bTournamentMode : 1;                           // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRankedPlay : 1;                               // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	class UPoplarTeamDefinition*                       WinningTeam;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            Outcome;                                       // 0x0010 (0x0001) [0x0000000000000000]               
	class FString                                      MatchId;                                       // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.CharacterUsabilityData
// 0x0014
struct FCharacterUsabilityData
{
	class FString                                      MetaID;                                        // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           bCanUse : 1;                                   // 0x0010 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarGameReplicationInfo.SurrenderData
// 0x0048
struct FSurrenderData
{
	uint32_t                                           bSurrenderDisabled : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSurrenderVoteInProgress : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSurrenderSucceeded : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	class APoplarPlayerReplicationInfo*                InitiatingPRI;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       InitiatingTeamDef;                             // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              FloatFailedSurrenderCooldownTimeInSecondsRemaining;// 0x0018 (0x0004) [0x1000000000000000]               
	float                                              FloatSurrenderVotingTimeInSecondsRemaining;    // 0x001C (0x0004) [0x1000000000000000]               
	float                                              SurrenderVoteStartTime;                        // 0x0020 (0x0004) [0x1000000000000000]               
	int32_t                                            FailedSurrenderCooldownTimeInSecondsRemaining; // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            SurrenderVotingTimeInSecondsRemaining;         // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            NumSurrenderPassVotes;                         // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            NumSurrenderFailVotes;                         // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            NumVoters;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	class TArray<struct FSurrenderVoterData>           Voters;                                        // 0x0038 (0x0010) [0x1000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGameReplicationInfo.SurrenderVoterData
// 0x0015
struct FSurrenderVoterData
{
	class APoplarPlayerReplicationInfo*                PRI;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            CommanderMetaRank;                             // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            CharacterMetaRank;                             // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            TeamIndex;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            Vote;                                          // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameInfoDefinition.GameTimeEventData
// 0x000C (0x0008 - 0x0014)
struct FGameTimeEventData : FSpecializedBehaviorEvent
{
	int32_t                                            EventTimeMinutes;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EventTimeSeconds;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bRepeatable : 1;                               // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ServerMatchDocumentPlayer
// 0x0024
struct FServerMatchDocumentPlayer
{
	class FString                                      Id;                                            // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Roles;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Team;                                          // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ServerMatchDocumentPair
// 0x0010
struct FServerMatchDocumentPair
{
	class FString                                      GameData;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ServerMatchDocumentExperience
// 0x0060
struct FServerMatchDocumentExperience
{
	class FString                                      Guid;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Rules;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ImageUrl;                                      // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamCount;                                     // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxTeamSize;                                   // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            MinTeamSize;                                   // 0x0048 (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        Tags;                                          // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ServerMatchDocumentSkill
// 0x0014
struct FServerMatchDocumentSkill
{
	class FString                                      Algorithm;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Tolerance;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};


// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ServerMatchDocument
// 0x0188
struct FServerMatchDocument
{
	class FString                                      ServerKey;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FServerMatchDocumentPlayer>    Players;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FServerMatchDocumentPair                    Map;                                           // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FServerMatchDocumentPair                    Mode;                                          // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AllocateTime;                                  // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ZeppelinTicket;                                // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlayerCount;                                   // 0x0060 (0x0004) [0x0000000000000000]               
	struct FServerMatchDocumentExperience              Experience;                                    // 0x0068 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Platform;                                      // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Hardware;                                      // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            AverageDuration;                               // 0x00F8 (0x0004) [0x0000000000000000]               
	class FString                                      RewardOptions;                                 // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ClusterMapParams;                              // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            HeartbeatInterval;                             // 0x0120 (0x0004) [0x0000000000000000]               
	class FString                                      GlobalsVersionId;                              // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SparkEnvironment;                              // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCharacterUsabilityData>       CharacterUsabilities;                          // 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            StagedReveal;                                  // 0x0158 (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        CalculateSkillRatings;                         // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FServerMatchDocumentSkill                   MatchmakingSkill;                              // 0x0170 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ReplicatedMetagameItem
// 0x005C
struct FReplicatedMetagameItem
{
	class FString                                      MetaID;                                        // 0x0000 (0x0010) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      AssetKey;                                      // 0x0010 (0x0010) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           bCanUse : 1;                                   // 0x0020 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	int32_t                                            ItemLevel;                                     // 0x0024 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            Rarity;                                        // 0x0028 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FUniqueNetId                                PlayerID;                                      // 0x002C (0x0014) [0x1000000000002000] (CPF_Transient)
	class FString                                      ApolloJSON;                                    // 0x0040 (0x0010) [0x1000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPointer                                    ItemData;                                      // 0x0050 (0x0008) [0x1000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            EntitlementIndex;                              // 0x0058 (0x0004) [0x1000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ServerPlayerLoadoutData
// 0x0138
struct FServerPlayerLoadoutData
{
	class FString                                      FriendlyName;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Id;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Version;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	struct FReplicatedMetagameItem                     Perks[0x3];                                    // 0x0018 (0x0120) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ServerPlayerSkillRating
// 0x0014
struct FServerPlayerSkillRating
{
	class FString                                      Algorithm;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Rating;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ServerPlayerMetaData
// 0x0070
struct FServerPlayerMetaData
{
	class FString                                      UniqueIdString;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            BankSize;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	class TArray<struct FReplicatedMetagameItem>       Entitlements;                                  // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MetaXP;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MetaLevel;                                     // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxMetaLevel;                                  // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            GamesWon;                                      // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxCharacterRank;                              // 0x0038 (0x0004) [0x0000000000000000]               
	class TArray<struct FServerPlayerLoadoutData>      Loadouts;                                      // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FReplicatedMetagameItem>       Perks;                                         // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FServerPlayerSkillRating>      SkillRatings;                                  // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ServerPlayerStatData
// 0x0020
struct FServerPlayerStatData
{
	int32_t                                            StatDelta;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      StatKey;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            StatStartingValue;                             // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            ReportingStyle;                                // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ServerPlayerStatsData
// 0x0028
struct FServerPlayerStatsData
{
	class FString                                      UniqueIdString;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlayerID;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	class TArray<struct FServerPlayerStatData>         Stats;                                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.ReplicatedPerkItem
// 0x001C (0x005C - 0x0078)
struct FReplicatedPerkItem : FReplicatedMetagameItem
{
	uint32_t                                           bActive : 1;                                   // 0x0060 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UPoplarPerkFunction* PerkFunction;                                  // 0x0068 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPoplarPlayerWearableDefinition* Wearable;                                      // 0x0070 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarOnlineServerPlayerService.MetaLoadoutInstance
// 0x0180
struct FMetaLoadoutInstance
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            Version;                                       // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	class FString                                      LoadoutName;                                   // 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FReplicatedPerkItem                         Perks[0x3];                                    // 0x0018 (0x0168) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.Behavior_ShowCastBar.CastBarData
// 0x0030
struct FCastBarData
{
	float                                              BeginValue;                                    // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              EndValue;                                      // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              RateOfChange;                                  // 0x0008 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bHideBarWhenDoneAnimating : 1;                 // 0x000C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bEnableTextOutput : 1;                         // 0x000C (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	float                                              RedValue;                                      // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              BlueValue;                                     // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              GreenValue;                                    // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bUseResourcePool : 1;                          // 0x001C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	class UResourcePoolDefinition*                     ResourcePoolDefinition;                        // 0x0020 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            CaptionIndex;                                  // 0x0028 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bTeleportCastBar : 1;                          // 0x002C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct PoplarGame.Behavior_SpawnCurrencyPickups.CurrencyInfo
// 0x0018
struct FCurrencyInfo
{
	class UDesignerAttributeDefinition*                CurrencyValue;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CalculatedCurrencyValue;                       // 0x0008 (0x0004) [0x0000000000000000]               
	class UItemPoolDefinition*                         CurrencyItemPool;                              // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarPlayerController.PauseSurrenderData
// 0x0004
struct FPauseSurrenderData
{
	uint32_t                                           bSurrenderAvailable : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSurrenderVoteInProgress : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bEligibleToVote : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bHasSurrenderData : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bSurrenderSucceeded : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct PoplarGame.MiniMapSelectionFilter.ActorSelectionFilterSettings
// 0x0010
struct FActorSelectionFilterSettings
{
	class UPoplarUnitTypeDefinition*                   UnitTypeFilter;                                // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            AllegianceFilter;                              // 0x0008 (0x0001) [0x0000000000000000]               
	uint32_t                                           bCanSelectSelf : 1;                            // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanSelectDeadTargets : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PoplarGame.MiniMapSelectionFilter.ActorSelectionDataContainer
// 0x0068
struct FActorSelectionDataContainer
{
	float                                              Health;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisplayHealth : 1;                            // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Shield;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisplayShield : 1;                            // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Overshield;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisplayOvershield : 1;                        // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Level;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisplayLevel : 1;                             // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RespawnTime;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisplayRespawnTime : 1;                       // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisplayName : 1;                              // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     Location;                                      // 0x0028 (0x000C) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	class UPoplarUnitTypeDefinition*                   UnitType;                                      // 0x0038 (0x0008) [0x0000000000000000]               
	class APlayerReplicationInfo*                      PRI;                                           // 0x0040 (0x0008) [0x0000000000000000]               
	uint32_t                                           bInjured : 1;                                  // 0x0048 (0x0004) [0x1000000000000000] [0x00000001] 
	class UPlayerNameIdentifierDefinition*             NameID;                                        // 0x0050 (0x0008) [0x1000000000000000]               
	class FString                                      Name;                                          // 0x0058 (0x0010) [0x1000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarLocalMessage.PoplarMessageDefParams
// 0x0040
struct FPoplarMessageDefParams
{
	class UPoplarTeamDefinition*                       InstigatingTeam;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       OpposingTeam;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class UObject*                                     InstigatingPlayer;                             // 0x0010 (0x0008) [0x0000000000000000]               
	class UObject*                                     OpposingPlayer;                                // 0x0018 (0x0008) [0x0000000000000000]               
	class UPoplarLaneDefinition*                       LaneDef;                                       // 0x0020 (0x0008) [0x0000000000000000]               
	class UPoplarSkillDefinition*                      SkillDef;                                      // 0x0028 (0x0008) [0x0000000000000000]               
	class UPoplarTrainingMessageDefinition*            TrainingDef;                                   // 0x0030 (0x0008) [0x0000000000000000]               
	class UObject*                                     OtherParticipant;                              // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.IRemoteController.RemoteControlInfo
// 0x0018
struct FRemoteControlInfo
{
	class URemoteControlDefinition*                    RCDefinition;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class UIRemoteControllable*                        ControlledActor_Object;                        // 0x0008 (0x0010) [0x0000000000000000] 
	class UIRemoteControllable*                        ControlledActor_Interface;                     // 0x0008 (0x0010) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerController.CombatantActionData
// 0x0016
struct FCombatantActionData
{
	class UPoplarActionDefinition* NonSkillAction;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarSkillDefinition* SkillDef;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              ActionAmount;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            DamageTypeFlags;                               // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            ActionTypeFlags;                               // 0x0015 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerController.CombatantData
// 0x008C
struct FCombatantData
{
	class AActor*                                      Attacker;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            AttackerID;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class APoplarPlayerReplicationInfo*                AttackerPRI;                                   // 0x0010 (0x0008) [0x0000000000000000]               
	class UPoplarUnitTypeDefinition*                   AttackerUnitTypeDef;                           // 0x0018 (0x0008) [0x0000000000000000]               
	class UWillowCharacterClassDefinition*             AttackerWillowClassDef;                        // 0x0020 (0x0008) [0x0000000000000000]               
	struct FCombatantActionData                        Actions[0x4];                                  // 0x0028 (0x0060) [0x0000000000000000]               
	int32_t                                            CreditsReceived;                               // 0x0088 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerController.CameraViewData
// 0x0019
struct FCameraViewData
{
	class AActor*                                      ViewTarget;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       ModeName;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              BlendTimeOverride;                             // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsTeleport : 1;                               // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            DesiredDeathSpectatorState;                    // 0x0018 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerController.ClientInitialPerformanceData
// 0x0040
struct FClientInitialPerformanceData
{
	uint32_t                                           bIsSet : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUsingGamepad : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              RamInMB;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      CPUID;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      OSInfo;                                        // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      VideoCardInfo;                                 // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FQWord                                      VideoCardRamInBytes;                           // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerController.ClientFrameData
// 0x0024
struct FClientFrameData
{
	class UITargetable*                                Target_Object;                                 // 0x0000 (0x0010) [0x0000000000000000] 
	class UITargetable*                                Target_Interface;                              // 0x0000 (0x0010) [0x0000000000000000]               
	int32_t                                            AverageFrameTimeMS;                            // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            AverageGameThreadTimeMS;                       // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            AverageRenderThreadTimeMS;                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            AverageGPUTimeMS;                              // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            AllocatedSpaceMB;                              // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerController.PlayerConnectionMessage
// 0x001C
struct FPlayerConnectionMessage
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlayerCount;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MessageId;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              RemainingTime;                                 // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerController.ContextMapping
// 0x0014
struct FContextMapping
{
	class FString                                      KeyValue;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ContextId;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerController.MapModeMapping
// 0x0020
struct FMapModeMapping
{
	class FString                                      MapKeyValue;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ModeName;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPlayerController.ServerSendClientFrameDataArgs
// 0x0018
struct FServerSendClientFrameDataArgs
{
	class UITargetable*                                Target_Object;                                 // 0x0000 (0x0010) [0x0000000000000000] 
	class UITargetable*                                Target_Interface;                              // 0x0000 (0x0010) [0x0000000000000000]               
	struct FQWord                                      Payload;                                       // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerController.PendingClientTrainingMessage
// 0x0014
struct FPendingClientTrainingMessage
{
	class UClass*                                      Message;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarTrainingMessageDefinition*            TrainingDefinition;                            // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.ExperienceData
// 0x0100
struct FExperienceData
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      Description;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Requirements;                                  // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Guid;                                          // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ImageUrl;                                      // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ImageKey;                                      // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Rules;                                         // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamCount;                                     // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamSize;                                      // 0x007C (0x0004) [0x0000000000000000]               
	int32_t                                            TeamMinSize;                                   // 0x0080 (0x0004) [0x0000000000000000]               
	int32_t                                            SpectatorCount;                                // 0x0084 (0x0004) [0x0000000000000000]               
	class FString                                      TeamHopperName;                                // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameHopperName;                                // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            MatchmakingType;                               // 0x00A8 (0x0001) [0x0000000000000000]               
	class TArray<struct FExperienceDataGameMode>       GameModes;                                     // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SkillVersion;                                  // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamSkillTolerance;                            // 0x00D0 (0x0004) [0x0000000000000000]               
	int32_t                                            GameSkillTolerance;                            // 0x00D4 (0x0004) [0x0000000000000000]               
	int32_t                                            AverageQueueSeconds;                           // 0x00D8 (0x0004) [0x0000000000000000]               
	int32_t                                            Ordinal;                                       // 0x00DC (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        Tags;                                          // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URLParams;                                     // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPartyBeaconHost.SelectedExperienceData
// 0x0108
struct FSelectedExperienceData
{
	struct FExperienceData                             Experience;                                    // 0x0000 (0x0100) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPlatformUserId                             HostUserId;                                    // 0x0100 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.ExperienceDataGameMode
// 0x0040
struct FExperienceDataGameMode
{
	class FString                                      Guid;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameData;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FExperienceDataMap>            Maps;                                          // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.ExperienceDataMap
// 0x003C
struct FExperienceDataMap
{
	int32_t                                            Chance;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Guid;                                          // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameData;                                      // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x0038 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.ReadExperienceDataRequest
// 0x0028
struct FReadExperienceDataRequest
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              NextRetryTime;                                 // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            NumRetriesRemaining;                           // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetries;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	class FString                                      JobID;                                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.ZeppelinTicketData
// 0x0020
struct FZeppelinTicketData
{
	class FString                                      ZeppelinTicket;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FVoteOptionData>               VoteOptions;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.VoteOptionData
// 0x0028
struct FVoteOptionData
{
	int32_t                                            VoteOptionId;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      MapName;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameModeName;                                  // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.SkillRating
// 0x0018
struct FSkillRating
{
	class FString                                      SkillVersion;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SkillRating;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillTolerance;                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.PlayerBuildStatusData
// 0x0020
struct FPlayerBuildStatusData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bBuildEnabled : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisplayDebug : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      BuildStatus;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.PlayerExperienceData
// 0x0030
struct FPlayerExperienceData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FDouble                                     LastReadTime;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class TArray<struct FSkillRating>                  SkillRatings;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FExperienceData>               Experiences;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.QosServerData
// 0x0054
struct FQosServerData
{
	class FString                                      Address;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Location;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Ping;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            Loss;                                          // 0x0024 (0x0004) [0x0000000000000000]               
	struct FPointer                                    ResolveInfo;                                   // 0x0028 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    Socket;                                        // 0x0030 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FDouble                                     SendTime;                                      // 0x0038 (0x0008) [0x0000000000000000]               
	int32_t                                            SendCount;                                     // 0x0040 (0x0004) [0x0000000000000000]               
	struct FDouble                                     ReceiveTime;                                   // 0x0048 (0x0008) [0x0000000000000000]               
	int32_t                                            ReceiveCount;                                  // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.PlayerQosServerData
// 0x0048
struct FPlayerQosServerData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            QosAttempts;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            QosAttemptTimeout;                             // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            QosPort;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            QosSize;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	class TArray<uint8_t>                              QosSendBuffer;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              QosReceiveBuffer;                              // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FQosServerData>                QosServers;                                    // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.RejoinServerData
// 0x0188
struct FRejoinServerData
{
	class FString                                      ZeppelinTicket;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Address;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TeamNum;                                       // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      SessionId;                                     // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ServerKey;                                     // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StartTimeUTC;                                  // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        PlayerList;                                    // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FExperienceData                             Experience;                                    // 0x0068 (0x0100) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MapGuid;                                       // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.PlayerRejoinServerData
// 0x0018
struct FPlayerRejoinServerData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FRejoinServerData>             RejoinServers;                                 // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.NonLocalRejoinServerData
// 0x0028
struct FNonLocalRejoinServerData
{
	class FString                                      ServerState;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsPrivate : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<class FString>                        ServerTags;                                    // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.NonLocalPlayerRejoinServerData
// 0x0018
struct FNonLocalPlayerRejoinServerData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FNonLocalRejoinServerData>     RejoinServers;                                 // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.StatData
// 0x0014
struct FStatData
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Value;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.PlayerStatsData
// 0x0018
struct FPlayerStatsData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FStatData>                     Stats;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.ChallengeManagerData
// 0x0010
struct FChallengeManagerData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarChallengeManager*                     ChallengeMgr;                                  // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.MatchHistoryRequestInfo
// 0x004C
struct FMatchHistoryRequestInfo
{
	int32_t                                            RequestId;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      MatchId;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPlatformUserId                             PlayerID;                                      // 0x0018 (0x0008) [0x0000000000000000]               
	struct FPlatformUserId                             SplitsScreenPlayerID;                          // 0x0020 (0x0008) [0x0000000000000000]               
	float                                              NextRetryTime;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            NumRetriesTaken;                               // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetries;                                    // 0x0030 (0x0004) [0x0000000000000000]               
	class FString                                      JobID;                                         // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              RequestStartTime;                              // 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.GetDedicatedServerData
// 0x0064
struct FGetDedicatedServerData
{
	class FString                                      ServerAddr;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ServerKey;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MapGuid;                                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DebugCode;                                     // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MinWaitMilliseconds;                           // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxWaitMilliseconds;                           // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetryAttempts;                              // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            EstimatedWaitSeconds;                          // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            TimeoutSeconds;                                // 0x0060 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.PlayerDisplayData
// 0x0070
struct FPlayerDisplayData
{
	uint32_t                                           bIsValid : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReadInProgress : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FUniqueNetId                                UniqueId;                                      // 0x0004 (0x0014) [0x0000000000000000]               
	class FString                                      DisplayName;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            XP;                                            // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MetaLevel;                                     // 0x002C (0x0004) [0x0000000000000000]               
	class FString                                      ProfileImageURL;                               // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SelectedMetaTitleName;                         // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SelectedMetaTitleFrame;                        // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SelectedMetaTitleIconPath;                     // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientService.MetaItemBase
// 0x002C
struct FMetaItemBase
{
	class FString                                      MetaID;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      JSON;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Type;                                          // 0x0020 (0x0001) [0x0000000000000000]               
	uint32_t                                           bCanUse : 1;                                   // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ItemLevel;                                     // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientService.MetaItem
// 0x004C (0x002C - 0x0078)
struct FMetaItem : FMetaItemBase
{
	class FString                                      PlatformID;                                    // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      HydraID;                                       // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Source;                                        // 0x0050 (0x0001) [0x0000000000000000]               
	class FString                                      AcquisitionTime;                               // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Count;                                         // 0x0068 (0x0004) [0x0000000000000000]               
	uint32_t                                           bMetagameBreadcrumb : 1;                       // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            EarnedCurrencySellValue;                       // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            PremiumCurrencySellValue;                      // 0x0074 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.PlayerMetaData
// 0x00D0
struct FPlayerMetaData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            MetaExperience;                                // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            MetaXPRequiredForNextLevel;                    // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            GamesWon;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            PrestigeCount;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MetaLevel;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            MetaLevelProgression;                          // 0x001C (0x0004) [0x0000000000000000]               
	struct FMetaItem                                   CurrentTitle;                                  // 0x0020 (0x0078) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Loadouts;                                      // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LoadoutCount;                                  // 0x00A8 (0x0004) [0x0000000000000000]               
	class TArray<struct FCharacterExperience>          CharacterRamps;                                // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ProfileUID;                                    // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.CharacterExperience
// 0x0020
struct FCharacterExperience
{
	class FString                                      CharacterMetaID;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Experience;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            ExperienceToNextLevel;                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            CharacterLevel;                                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              NormalizedLevelProgression;                    // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.NATTypeData
// 0x0011
struct FNATTypeData
{
	class FString                                      PlayerID;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            NATType;                                       // 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.PlayerEULAData
// 0x0018
struct FPlayerEULAData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FEULAData>                     EULAChain;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.EULAData
// 0x003C
struct FEULAData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Version;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Title;                                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Text;                                          // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bAccepted : 1;                                 // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.DisplayDataRequest
// 0x0050
struct FDisplayDataRequest
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	class TArray<struct FUniqueNetId>                  UniqueIds;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ServiceResult;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	class TArray<struct FPlayerDisplayData>            ResultData;                                    // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            OnlineDisplayDataReadState;                    // 0x0038 (0x0001) [0x0000000000000000]               
	class TArray<struct FOnlinePlayerDisplayData>      OnlineResultData;                              // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.MetagameOperationRequest
// 0x0024
struct FMetagameOperationRequest
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      JobID;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              NextRetryDelay;                                // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            JobResultRetryAttempts;                        // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxJobResultRetryAttempts;                     // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.ReadFirstPartyEntitlementRequest
// 0x0030
struct FReadFirstPartyEntitlementRequest
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              NextRetryTime;                                 // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MinWaitMilliseconds;                           // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxWaitMilliseconds;                           // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            NumRetriesRemaining;                           // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetries;                                    // 0x001C (0x0004) [0x0000000000000000]               
	class FString                                      JobID;                                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.FirstPartyEntitlementData
// 0x000C
struct FFirstPartyEntitlementData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PremiumCurrency;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPlayerService.LoadoutCount
// 0x0014
struct FLoadoutCount
{
	class FString                                      CharacterMetaID;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Count;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientService.ClientRequest
// 0x000C
struct FClientRequest
{
	struct FPlatformUserId                             ClientId;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.Behavior_UnitTest_StartPlayerTest.PlayerTestDefFromCharacterName
// 0x0020
struct FPlayerTestDefFromCharacterName
{
	class FString                                      CharacterName;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PlayerTestDefLoc;                              // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.BehaviorSequenceEnableByPoplarMission.PoplarMissionStateSelectionData
// 0x0004
struct FPoplarMissionStateSelectionData
{
	uint32_t                                           bNotStarted : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bComplete : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bFailed : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
};

// ScriptStruct PoplarGame.BehaviorSequenceEnableByPoplarMission.PoplarMissionObjectiveStateSelectionData
// 0x0004
struct FPoplarMissionObjectiveStateSelectionData
{
	uint32_t                                           bNotStarted : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bComplete : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct PoplarGame.IPoplarMission.PoplarMissionEventData
// 0x0010
struct FPoplarMissionEventData
{
	class APoplarMissionTracker*                       Tracker;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarMissionObjectiveDefinition*           Objective;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.BuffComponent.BuffInfo
// 0x0090
struct FBuffInfo
{
	class UPoplarBuffDefinition*                       BuffDefinition;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      InstigatorActor;                               // 0x0008 (0x0008) [0x0000000000000000]               
	class AActor*                                      TargetActor;                                   // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            FlashCount;                                    // 0x001C (0x0001) [0x0000000000000000]               
	int32_t                                            SourcePerkIndex;                               // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentActivationTier;                         // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            BuffComponentGUID;                             // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            ServerSideBuffGUID;                            // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            BuffInstanceGUID;                              // 0x0030 (0x0004) [0x0000000000000000]               
	class UIBuffable*                                  BuffableOwner_Object;                          // 0x0038 (0x0010) [0x1000000000000000] 
	class UIBuffable*                                  BuffableOwner_Interface;                       // 0x0038 (0x0010) [0x1000000000000000]               
	class TArray<float>                                SortValues;                                    // 0x0048 (0x0010) [0x1000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           bRemove : 1;                                   // 0x0058 (0x0004) [0x1000000000000000] [0x00000001] 
	uint32_t                                           bSkipBuffStopActions : 1;                      // 0x0058 (0x0004) [0x1000000000000000] [0x00000002] 
	int32_t                                            ReplicatedIndex;                               // 0x005C (0x0004) [0x1000000000000000]               
	float                                              TimeStarted;                                   // 0x0060 (0x0004) [0x1000000000000000]               
	float                                              DamageAmount;                                  // 0x0064 (0x0004) [0x1000000000000000]               
	float                                              DamageInterval;                                // 0x0068 (0x0004) [0x1000000000000000]               
	float                                              LastDamageTime;                                // 0x006C (0x0004) [0x1000000000000000]               
	float                                              LifestealPercentage;                           // 0x0070 (0x0004) [0x1000000000000000]               
	float                                              ShieldstealPercentage;                         // 0x0074 (0x0004) [0x1000000000000000]               
	float                                              ShieldPenetrationPercentage;                   // 0x0078 (0x0004) [0x1000000000000000]               
	float                                              CurrentOvershieldValue;                        // 0x007C (0x0004) [0x1000000000000000]               
	float                                              MaxOvershieldValue;                            // 0x0080 (0x0004) [0x1000000000000000]               
	float                                              OvershieldRegenDelay;                          // 0x0084 (0x0004) [0x1000000000000000]               
	float                                              OvershieldRegenRate;                           // 0x0088 (0x0004) [0x1000000000000000]               
	uint32_t                                           bDoNotActivatePerk : 1;                        // 0x008C (0x0004) [0x1000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.BuffComponent.BuffRemovalInfo
// 0x0030
struct FBuffRemovalInfo
{
	class UPoplarBuffDefinition*                       BuffDefinition;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              Tags;                                          // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           bNukeAll : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            RemovalStrategy;                               // 0x001C (0x0001) [0x0000000000000000]               
	int32_t                                            NumStacksToRemove;                             // 0x0020 (0x0004) [0x0000000000000000]               
	class AActor*                                      BuffInstigator;                                // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.BuffComponent.ServerSideBuffInfo
// 0x0048
struct FServerSideBuffInfo
{
	class UPoplarBuffDefinition*                       BuffDefinition;                                // 0x0000 (0x0008) [0x1000000000002000] (CPF_Transient)
	class UIBuffable*                                  BuffableOwner_Object;                          // 0x0008 (0x0010) [0x1000000000002000] (CPF_Transient)
	class UIBuffable*                                  BuffableOwner_Interface;                       // 0x0008 (0x0010) [0x1000000000002000] (CPF_Transient)
	int32_t                                            ServerSideBuffGUID;                            // 0x0018 (0x0004) [0x1000000000002000] (CPF_Transient)
	float                                              BuffTypePriority;                              // 0x001C (0x0004) [0x1000000000002000] (CPF_Transient)
	class AActor*                                      InstigatorActor;                               // 0x0020 (0x0008) [0x1000000000002000] (CPF_Transient)
	class TArray<struct FBuffInfo>                     ActiveInstances;                               // 0x0028 (0x0010) [0x1000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FBuffInfo>                     InactiveInstances;                             // 0x0038 (0x0010) [0x1000000000502000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.CommandRing.CRVisualElementData
// 0x0020
struct FCRVisualElementData
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     LocalTranslation;                              // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    LocalRotation;                                 // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.DerivedStatsHelperDefinition.StatDimensionData
// 0x0060
struct FStatDimensionData
{
	class FString                                      DimensionValueStrings[0x4];                    // 0x0000 (0x0040) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UStatDimensionValueDefinition*               DimensionValueDefs[0x4];                       // 0x0040 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.DerivedStatsHelperDefinition.DerivedStatsCommandletData
// 0x0038
struct FDerivedStatsCommandletData
{
	uint32_t                                           bPreviewOnly : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bVerbose : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	class TArray<class FString>                        Errors;                                        // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FString>                        ExistingStats;                                 // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FString>                        NewStats;                                      // 0x0028 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.DerivedStatsHelperDefinition.DerivedStatData
// 0x0070
struct FDerivedStatData
{
	class FString                                      BaseStatName;                                  // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      BaseObjectname;                                // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      GroupName;                                     // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            EndOfMatchReportingStyle;                      // 0x0030 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UStatDefinition*                             SourceStat;                                    // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatDimensionDefinition*                    Dimensions[0x4];                               // 0x0040 (0x0020) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UStatDimensionValueDefinition*> IgnoredDimensionValues;                        // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.ErrorReporter.ErrorData
// 0x0040
struct FErrorData
{
	struct FName                                       ErrorKey;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ErrorCode;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      ErrorLocFile;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ErrorLocSection;                               // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.IExperienceProvider.ExperienceProviderData
// 0x0005
struct FExperienceProviderData
{
	uint32_t                                           bDenyXPRewardIfKillerIsStationaryUnit : 1;     // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            DeathShouldRewarddXPToTeam;                    // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.IExperienceProvider.TeamExperienceTypeRewardFormula
// 0x0050
struct FTeamExperienceTypeRewardFormula
{
	uint32_t                                           bUseSharesSystem : 1;                          // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	float                                              NumberOfSharesForKiller;                       // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              NumberOfSharesForNonKiller;                    // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ExperiencePercentageAwardedToKillerFormula;    // 0x0010 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ExperiencePercentageAwardedToNonKillerFormula; // 0x0030 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.IAugmentable.AugInstance
// 0x0014
struct FAugInstance
{
	class UPoplarAugDefinition* AugDef;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            CurrentTier;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            ClientPurchaseStatus;                          // 0x000C (0x0001) [0x0000000000000000]               
	uint32_t                                           Preselected : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.IAugmentable.AugCategoryInstance
// 0x0054
struct FAugCategoryInstance
{
	class UPoplarAugCategory* CategoryDef;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FAugInstance                                Augs[0x2];                                     // 0x0008 (0x0030) [0x0000000000000000]               
	struct FAugInstance                                Mutation;                                      // 0x0038 (0x0018) [0x0000000000000000]               
	uint32_t                                           CategoryIsUnlocked : 1;                        // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.IAugmentable.AugSetInstance
// 0x0378
struct FAugSetInstance
{
	class UPoplarAugSet*                               AugSetDef;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FAugCategoryInstance                        AllCategories[0xA];                            // 0x0008 (0x0370) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.IControlledMove.ControlledMoveParams
// 0x0020
struct FControlledMoveParams
{
	class AActor*                                      TargetActor;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     TargetLocation;                                // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              SpeedOverride;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              LaunchAngleOverride;                           // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              DurationOverride;                              // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.IControlledMove.ReplicatedControlledMoveData
// 0x003D
struct FReplicatedControlledMoveData
{
	class UPoplarControlledMoveDefinition*             ControlledMove;                                // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bZeroVelocity : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bInterrupted : 1;                              // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FControlledMoveParams                       Params;                                        // 0x0010 (0x0020) [0x0000000000000000]               
	struct FVector                                     PackedDirection;                               // 0x0030 (0x000C) [0x0000000000000000]               
	uint8_t                                            DirtyCounter;                                  // 0x003C (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientItemService.PlayerTransaction
// 0x003D
struct FPlayerTransaction
{
	class FString                                      TransactionID;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TransactionDate;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bRefundable : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRefunded : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      PurchasedItemMetaID;                           // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PricePaid;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	uint8_t                                            CurrencyType;                                  // 0x003C (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientItemService.PlayerTransactions
// 0x0020
struct FPlayerTransactions
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FPlayerTransaction>            Transactions;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PageNumber;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            TotalPages;                                    // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientItemService.PurchaseWithMetaCurrencyRequest
// 0x0028
struct FPurchaseWithMetaCurrencyRequest
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              NextRetryTime;                                 // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            NumRetriesRemaining;                           // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetries;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	class FString                                      JobID;                                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientService.PlayerEntitlementData
// 0x002C
struct FPlayerEntitlementData
{
	struct FPlatformUserId                             PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FMetaItem>                     Entitlements;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            EarnedCurrency;                                // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            ReputationPoints;                              // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            EarnedCurrencyRate;                            // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            PerkBankMaxSize;                               // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            RefundTokens;                                  // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientService.PerkMetaItem
// 0x0020 (0x0078 - 0x0098)
struct FPerkMetaItem : FMetaItem
{
	uint32_t                                           bLocked : 1;                                   // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	class UPoplarPerkFamilyDefinition*                 PerkFamily;                                    // 0x0080 (0x0008) [0x0000000000000000]               
	uint8_t                                            Rarity;                                        // 0x0088 (0x0001) [0x0000000000000000]               
	class UPoplarPerkFunction*                         PerkFunction;                                  // 0x0090 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientService.RecipeInputSlotCompatibility
// 0x0018
struct FRecipeInputSlotCompatibility
{
	int32_t                                            InputSlotIndex;                                // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FPerkMetaItem>                 CompatiblePerks;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientService.RecipeMetaItem
// 0x0038 (0x0078 - 0x00B0)
struct FRecipeMetaItem : FMetaItem
{
	uint32_t                                           bCanCompleteRecipe : 1;                        // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FRecipeInputSlotCompatibility> InputSlotCompatibilities;                      // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPerkMetaItem>                 AssignedPerks;                                 // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPerkMetaItem>                 AutoAssignedPerks;                             // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarOnlineClientService.SideboardMetaItem
// 0x0158 (0x0078 - 0x01D0)
struct FSideboardMetaItem : FMetaItem
{
	struct FPerkMetaItem                               Perk;                                          // 0x0078 (0x0098) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FRecipeMetaItem                             Recipe;                                        // 0x0110 (0x00B0) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      OriginItemID;                                  // 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.MarkupAttributePresentationDefinition.MarkupSubstitution
// 0x0020
struct FMarkupSubstitution
{
	class FString                                      DefaultOption;                                 // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<struct FMarkupSubstitutionOption>     AdditionalOptions;                             // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.MarkupAttributePresentationDefinition.MarkupSubstitutionOption
// 0x0018
struct FMarkupSubstitutionOption
{
	float                                              MinimumValue;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      SubstitutionText;                              // 0x0008 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.MatchingObjectsCounter.ObjectMatchCount
// 0x0008
struct FObjectMatchCount
{
	int32_t                                            Count;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              LastUpdateTime;                                // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MetaRankDefinition.RankStruct
// 0x0038
struct FRankStruct
{
	int32_t                                            ExperienceRequired;                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      RankName;                                      // 0x0008 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      RankIconFlashFrameName;                        // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UUnlockDefinition*>             Unlocks;                                       // 0x0028 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.ModularHUDWidgetGFxObject.UIResourceBarHelper
// 0x0018
struct FUIResourceBarHelper
{
	int32_t                                            CachedBarFrameNum;                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CachedDeltaNum;                                // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              CachedCountdownTime;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              CachedDeltaFloat;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              CachedMaxValue;                                // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsPausing : 1;                                // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.MHW_AllyKillMessageBase.BufferedPlayerKill
// 0x0035
struct FBufferedPlayerKill
{
	class FString                                      PathToPlayerMovie;                             // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PawnLabel;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeStamp;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPlayerNotified : 1;                           // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ExperienceAwarded;                             // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            CashAwarded;                                   // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            PlayerLevel;                                   // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                            MessageType;                                   // 0x0034 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MHW_ButtonPrompts.HUDInteractionIcon
// 0x0040
struct FHUDInteractionIcon
{
	struct FInteractionIconWithOverrides               Icons[0x2];                                    // 0x0000 (0x0040) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.MHW_DamageIndicators.PoplarDamageEvent
// 0x002C
struct FPoplarDamageEvent
{
	class APlayerController*                           DamagedPlayer;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class APawn*                                       InstigatorPawn;                                // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              DamageSeverityPercent;                         // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     SourceLocation;                                // 0x0014 (0x000C) [0x0000000000000000]               
	uint32_t                                           bHealing : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            MyDamageType;                                  // 0x0024 (0x0001) [0x0000000000000000]               
	float                                              TimeLeftAnimating;                             // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MHW_DeadPlayerList.DeadPlayerIconObject
// 0x0028
struct FDeadPlayerIconObject
{
	class UGFxObject*                                  IconContainer;                                 // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  RespawnTimeTextBox;                            // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  ParentClip;                                    // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  TintClip;                                      // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
	class APoplarPlayerReplicationInfo*                CurrentlyTrackedPlayer;                        // 0x0020 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.ModularHUDGFxMovie.IncomeMessage
// 0x0018
struct FIncomeMessage
{
	int32_t                                            ExperienceAmount;                              // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Priority;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      Reason;                                        // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.ModularHUDGFxMovie.CrowdControlTrackingStruct
// 0x0010
struct FCrowdControlTrackingStruct
{
	uint8_t                                            CrowdControlEffect;                            // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            Stacks;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              TimeStampStarted;                              // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.ModularHUDGFxMovie.PlayerRecentRewardEventData
// 0x005C
struct FPlayerRecentRewardEventData
{
	int32_t                                            ShardAmount;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ExperienceAmount;                              // 0x0004 (0x0004) [0x0000000000000000]               
	class UPoplarRewardMessageDefinition*              ReasonMessage;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	struct FPoplarMessageDefParams                     ReasonParams;                                  // 0x0010 (0x0040) [0x0000000000000000]               
	int32_t                                            FlashCount;                                    // 0x0050 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDirty : 1;                                    // 0x0054 (0x0004) [0x1000000000000000] [0x00000001] 
	float                                              RewardTime;                                    // 0x0058 (0x0004) [0x1000000000000000]               
};

// ScriptStruct PoplarGame.MHW_InWorldIcon.IconsToBeDeletedInfo
// 0x0014
struct FIconsToBeDeletedInfo
{
	class UGFxObject*                                  Icon;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  IconCaret;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              TimeRemainingInAnimation;                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MHW_InWorldIcon.WorldSpaceIcon
// 0x0074
struct FWorldSpaceIcon
{
	uint32_t                                           bOccluded : 1;                                 // 0x0000 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bNeedsTransitionAnimation : 1;                 // 0x0000 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bDestroyWhenAnimationIsDone : 1;               // 0x0000 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	float                                              RemainingAnimationTime;                        // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NextOcclusionTestTime;                         // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  IconClip[0x4];                                 // 0x0010 (0x0020) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  DirectionCaret[0x4];                           // 0x0030 (0x0020) [0x0000000000002000] (CPF_Transient)
	int32_t                                            CachedDirectionCaretVisible[0x4];              // 0x0050 (0x0010) [0x0000000000002000] (CPF_Transient)
	int32_t                                            CachedDirectionCaretAngleToMarker[0x4];        // 0x0060 (0x0010) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bCachedIsUnitCurrentTargetable : 1;            // 0x0070 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct PoplarGame.MHW_InWorldIcon.PoplarWorldSpaceUnitInfo
// 0x0010
struct FPoplarWorldSpaceUnitInfo
{
	class AActor*                                      WorldSpaceUnit;                                // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FName                                       SocketName;                                    // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MHW_InWorldIcon.CachedCapturePointObjects
// 0x0030
struct FCachedCapturePointObjects
{
	int32_t                                            CurrentCapturingTeamIndex;                     // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  CaptureIcon;                                   // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  CaptureLetter;                                 // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  CaptureCircle;                                 // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  CaptureCircleTintMe;                           // 0x0020 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  DirectionCaret;                                // 0x0028 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.MHW_InWorldIcon.InWorldObject
// 0x0190
struct FInWorldObject
{
	class AActor*                                      IconSource;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      TargetActor;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       TargetTeam;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            ObjectType;                                    // 0x0018 (0x0001) [0x0000000000000000]               
	struct FWorldSpaceIcon                             WorldIcon;                                     // 0x0020 (0x0078) [0x0000000000000000]               
	struct FName                                       SocketName;                                    // 0x0098 (0x0008) [0x0000000000000000]               
	struct FCachedCapturePointObjects                  CapturePointObjects[0x4];                      // 0x00A0 (0x00C0) [0x0000000000000000]               
	class FString                                      OverrideIconSymbol;                            // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CustomIconString;                              // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CustomIconStringPath;                          // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.MHW_InWorldIcon.HeroLOSStruct
// 0x0018
struct FHeroLOSStruct
{
	class UIUnit*                                      Enemy_Object;                                  // 0x0000 (0x0010) [0x0000000000000000] 
	class UIUnit*                                      Enemy_Interface;                               // 0x0000 (0x0010) [0x0000000000000000]               
	float                                              TimeLastChecked;                               // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           Seen : 1;                                      // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.MHW_KO.KnockoutMessage
// 0x0024
struct FKnockoutMessage
{
	class FString                                      FlashFrameName;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Subtext;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bAssist : 1;                                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.MHW_MatchEventsFeed.MessageInitParams
// 0x000C
struct FMessageInitParams
{
	int32_t                                            InitClass;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            ObjectiveType;                                 // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            Label;                                         // 0x0005 (0x0001) [0x0000000000000000]               
	uint32_t                                           bWaitForCompletedClear : 1;                    // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.MHW_MatchEventsFeed.InitializationData
// 0x0010
struct FInitializationData
{
	int32_t                                            InitializationIndex;                           // 0x0000 (0x0004) [0x0000000000000000]               
	class UMatchFeedData*                              Initializer;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MHW_MatchEventsFeed.MatchEventObjectiveInfo
// 0x0009
struct FMatchEventObjectiveInfo
{
	class UPoplarMissionObjectiveDefinition*           Objective;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Progress;                                      // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MHW_MatchEventsHeadline.MatchEventHeadlineQueueData
// 0x0064
struct FMatchEventHeadlineQueueData
{
	class UPoplarMessageDefinition*                    MessageDefinition;                             // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            BackgroundFrame;                               // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      Message;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPoplarMessageDefParams                     Params;                                        // 0x0020 (0x0040) [0x0000000000000000]               
	int32_t                                            Multiplier;                                    // 0x0060 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MHW_MiniMapActorSelect.ActorSelectionGFxContainer
// 0x0058
struct FActorSelectionGFxContainer
{
	class UGFxObject*                                  BaseClip;                                      // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  HealthClip;                                    // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  ShieldClip;                                    // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  OvershieldClip;                                // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  LevelClip;                                     // 0x0020 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  NameClip;                                      // 0x0028 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  TalkingClip;                                   // 0x0030 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  IconContainerClip;                             // 0x0038 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  DeathTimerClip;                                // 0x0040 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  RespawnTimerClip;                              // 0x0048 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  FocusClip;                                     // 0x0050 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.MHW_MinimapExpanded.MinimapObjective
// 0x0028
struct FMinimapObjective
{
	uint8_t                                            CurrentState;                                  // 0x0000 (0x0001) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  ObjectiveClip;                                 // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  ObjectiveNameClip;                             // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  ObjectiveIconClip;                             // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  ObjectiveEndedClip;                            // 0x0020 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarMinimapIconType.PoplarMinimapIconClip
// 0x002C
struct FPoplarMinimapIconClip
{
	class UGFxObject* Object;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bVisible : 1;                                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNeedsObjectsToColorRetry : 1;                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	class TArray<class UGFxObject*>                    ObjectsToColor;                                // 0x0010 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UGFxObject* AreaObject;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            AreaIndex;                                     // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMinimapIconType.PoplarMinimapIconSubClip
// 0x0008 (0x002C - 0x0034)
struct FPoplarMinimapIconSubClip : FPoplarMinimapIconClip
{
	uint32_t                                           bEnabled : 1;                                  // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarMinimapIconType.PoplarMinimapIconInstance
// 0x0128
struct FPoplarMinimapIconInstance
{
	struct FPoplarMinimapIconClip                      Clip;                                          // 0x0000 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPoplarMinimapIconSubClip                   SubClips[0x4];                                 // 0x0030 (0x00E0) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector2D                                   MapPos;                                        // 0x0110 (0x0008) [0x0000000000000000]               
	float                                              RotationDegrees;                               // 0x0118 (0x0004) [0x0000000000000000]               
	float                                              DrawScale;                                     // 0x011C (0x0004) [0x0000000000000000]               
	float                                              Alpha;                                         // 0x0120 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamIndex;                                     // 0x0124 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMinimapIconType.PoplarMinimapIconState
// 0x0038
struct FPoplarMinimapIconState
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x001C (0x0004) [0x0000000000000000]               
	float                                              Alpha;                                         // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              TimeToLive;                                    // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamIndex;                                     // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bShouldBeVisible : 1;                          // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            AreaRadius;                                    // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            AreaCircleIndex;                               // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MHW_MiniMapInner.PoplarMinimapIconData
// 0x016C
struct FPoplarMinimapIconData
{
	struct FPoplarMinimapIconInstance                  Instance;                                      // 0x0000 (0x0128) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPoplarMinimapIconState                     IconState;                                     // 0x0128 (0x0038) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNeedsOverlapCheck : 1;                        // 0x0160 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsUpdate : 1;                              // 0x0160 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            OverlappedBy;                                  // 0x0164 (0x0004) [0x0000000000000000]               
	int32_t                                            PoolIdx;                                       // 0x0168 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMinimapIconType.PoplarMinimapIconGroup
// 0x0010
struct FPoplarMinimapIconGroup
{
	class UPoplarMinimapIconGroupDefinition*           GroupDefinition;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  GroupObject;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMinimapIconType.PoplarMinimapIconUpdateData
// 0x00A4
struct FPoplarMinimapIconUpdateData
{
	class UIMinimap*                                   Minimap_Object;                                // 0x0000 (0x0010) [0x0000000000000000] 
	class UIMinimap*                                   Minimap_Interface;                             // 0x0000 (0x0010) [0x0000000000000000]               
	struct FMatrix                                     WorldToMinimapSpace;                           // 0x0010 (0x0040) [0x0000000000000000]               
	struct FVector2D                                   MinimapOrigin;                                 // 0x0050 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   MinimapCenter;                                 // 0x0058 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   MinimapBounds;                                 // 0x0060 (0x0008) [0x0000000000000000]               
	float                                              TopographyYaw;                                 // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              PlayerYaw;                                     // 0x006C (0x0004) [0x0000000000000000]               
	float                                              MinimapExpansionScaleAlpha;                    // 0x0070 (0x0004) [0x0000000000000000]               
	struct FLinearColor                                TeamRelativeColors[0x3];                       // 0x0074 (0x0030) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MHW_MiniMapInner.PoplarIconClipPool
// 0x0020
struct FPoplarIconClipPool
{
	class UPoplarMinimapIconType*                      IconType;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            TotalNumClips;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              FreeClips;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.MHW_MiniMapInner.PoplarMinimapObject
// 0x0048
struct FPoplarMinimapObject
{
	struct FPoplarMinimapIconState                     CurrentState;                                  // 0x0000 (0x0038) [0x0000000000000000]               
	class UPoplarMinimapIconType*                      IconType;                                      // 0x0038 (0x0008) [0x0000000000000000]               
	uint32_t                                           bActive : 1;                                   // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            IconClip;                                      // 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.MHW_MiniMapInner.MinimapIconClip
// 0x0014
struct FMinimapIconClip
{
	class UGFxObject*                                  Object;                                        // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bVisible : 1;                                  // 0x0008 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FVector2D                                   MapPos;                                        // 0x000C (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.MHW_Player11Spectator.SpectatorHUDHintButton
// 0x000C
struct FSpectatorHUDHintButton
{
	struct FName                                       HintTag;                                       // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DisplayOptions;                                // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.MHW_Player11Spectator.SpectatorHUDActionIconPair
// 0x001C
struct FSpectatorHUDActionIconPair
{
	class UGFxObject*                                  SpectatorHUDClip;                              // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FName                                       ActionName;                                    // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FName                                       ControllerActionName;                          // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DisplayOptions;                                // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.MHW_Player11Spectator_Definition.SpectatorDisplayOptions
// 0x0004
struct FSpectatorDisplayOptions
{
	uint32_t                                           ShowWhileInCharacterSelect : 1;                // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           ShowWhileInMatch : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           ShowWhileInFreeCam : 1;                        // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           ShowWhileSpectatingPlayer : 1;                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           ShowWhileControlsHidden : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           ShowWhileControlsShown : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           ShowWhileInClashScreen : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           ShowWhileSpectatingDeadPlayer : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           ShowWhileSpectatingLivePlayer : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           ShowWhileDeathRecapHidden : 1;                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           ShowWhileDeathRecapShown : 1;                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
};

// ScriptStruct PoplarGame.MHW_Player11Spectator_Definition.SpectatorHUDHintBarEntryData
// 0x0044
struct FSpectatorHUDHintBarEntryData
{
	struct FName                                       HintTag;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       HintInputMapKey;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      LocalizedLabelFile;                            // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      LocalizedLabelSection;                         // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      LocalizedLabelKey;                             // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FSpectatorDisplayOptions                    DisplayOptions;                                // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.MHW_Player11Spectator_Definition.SpectatorHUDActionIconPairData
// 0x001C
struct FSpectatorHUDActionIconPairData
{
	struct FName                                       ActionName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ControllerActionName;                          // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ObjectName;                                    // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FSpectatorDisplayOptions                    DisplayOptions;                                // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.ModularHUDGFxMovieDefinition.SplitscreenScaledHUDItem
// 0x000C
struct FSplitscreenScaledHUDItem
{
	struct FName                                       HUDElementName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              CounterScaling;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.ModularHUDGFxMovieDefinition.CrowdControlSwfMapping
// 0x0018
struct FCrowdControlSwfMapping
{
	uint8_t                                            CrowdControlState;                             // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class USwfMovie*                                   LargeBarIcon;                                  // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USwfMovie*                                   SmallIcon;                                     // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.ModularHUDGFxMovieDefinition.ASClassNameToGFxObjectClass
// 0x0010
struct FASClassNameToGFxObjectClass
{
	struct FName                                       ASClassName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      GFxObjectClass;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.ModularHUDGFxMovieDefinition.DefinitionLookup
// 0x0020
struct FDefinitionLookup
{
	struct FName                                       InstanceName;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGBXDefinition*                              Definition;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       ASClassName;                                   // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      GFxObjectClass;                                // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.ModularHUDGFxMovieDefinition.HUDStateVisibilityWrapper
// 0x0009
struct FHUDStateVisibilityWrapper
{
	struct FName                                       HUDState;                                      // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint8_t                                            Visibility;                                    // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.ModularHUDGFxMovieDefinition.HUDGFxTag
// 0x0018
struct FHUDGFxTag
{
	struct FName                                       GFxTag;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FHUDStateVisibilityWrapper>    HUDStateVisibilityData;                        // 0x0008 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPawn.AttackTimeData
// 0x0014
struct FAttackTimeData
{
	float                                              LastAttackedTime;                              // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              LastAttackTime;                                // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              LastPlayerAttackTime;                          // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              LastMinionAttackTime;                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LastSentryAttackTime;                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMatchTracker.PmtData
// 0x0028
struct FPmtData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class UObject*                                     Owner;                                         // 0x0008 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    Prev;                                          // 0x0010 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    Next;                                          // 0x0018 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    List;                                          // 0x0020 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarHighlightComponent.HighlightReplicationStruct
// 0x0020
struct FHighlightReplicationStruct
{
	class UPoplarHighlightDefinition*                  HighlightEffectDef;                            // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       InstigatingTeam;                               // 0x0008 (0x0008) [0x0000000000000000]               
	class APlayerReplicationInfo*                      InstigatingPlayer;                             // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           bRemoveHighlights : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            FlashCount;                                    // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPawn.WearableData
// 0x0010
struct FWearableData
{
	class TArray<struct FWearableMeshData>             MeshDatum;                                     // 0x0000 (0x0010) [0x0000000000482000] (CPF_Transient | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPawn.WearableMeshData
// 0x0010
struct FWearableMeshData
{
	class UStaticMeshComponent*                        MeshComponent;                                 // 0x0000 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	uint8_t                                            AttachmentTarget;                              // 0x0008 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bVisibleInFirstPerson : 1;                     // 0x000C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bVisibleInThirdPerson : 1;                     // 0x000C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarHotSpot.PoplarHotSpotTeamData
// 0x0048
struct FPoplarHotSpotTeamData
{
	class UPoplarTeamDefinition*                       TeamDefinition;                                // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            TeamIndex;                                     // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            UnitCount;                                     // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            UnitTypeCountTable[0xE];                       // 0x0010 (0x0038) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.WillowAIPawnOld.StaggerStateData
// 0x0044
struct FStaggerStateData
{
	uint32_t                                           bIsStaggered : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsUnstaggering : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bForced : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                            State;                                         // 0x0004 (0x0001) [0x1000000000000000]               
	float                                              StaggerStartTime;                              // 0x0008 (0x0004) [0x1000000000000000]               
	float                                              StaggerEndTime;                                // 0x000C (0x0004) [0x1000000000000000]               
	float                                              StaggerEndRagdollTime;                         // 0x0010 (0x0004) [0x1000000000000000]               
	float                                              StaggerRecoveryStartTime;                      // 0x0014 (0x0004) [0x1000000000000000]               
	float                                              NextUnstaggerCheckTime;                        // 0x0018 (0x0004) [0x1000000000000000]               
	class UPhysicalMaterial*                           PreviousOverridePhysicalMaterial;              // 0x0020 (0x0008) [0x1000000000000000]               
	uint8_t                                            PreviousCollisionChannel;                      // 0x0028 (0x0001) [0x1000000000000000]               
	class UPrimitiveComponent*                         PreviousCollisionComponent;                    // 0x0030 (0x0008) [0x1000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class APawn*                                       StaggerInstigator;                             // 0x0038 (0x0008) [0x1000000000000000]               
	int32_t                                            RestaggeredCount;                              // 0x0040 (0x0004) [0x1000000000000000]               
};

// ScriptStruct PoplarGame.WillowAIPawnOld.DamageLocationData
// 0x0010
struct FDamageLocationData
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.WillowAIPawnOld.SplineAnimPathData
// 0x0014
struct FSplineAnimPathData
{
	class ASplineActor*                                StartSpline;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       AnimSeqName;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bReverse : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.WillowAIPawnOld.RagdollDeathImpulseStruct
// 0x0024
struct FRagdollDeathImpulseStruct
{
	struct FVector                                     Impulse;                                       // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       BoneName;                                      // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           VelocityRatherThanForce : 1;                   // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           TransformImpulseByVelocityDirection : 1;       // 0x0020 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct PoplarGame.PoplarAIPawn.BotActionSkillData
// 0x0028
struct FBotActionSkillData
{
	class APoplarActionSkill*                          ActionSkill;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FResourcePoolReference                      CooldownPool;                                  // 0x0008 (0x0018) [0x0000000000000000]               
	class UPoplarSkillDefinition*                      SkillDefinition;                               // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarAlertPoint.AlertPointData
// 0x0051
struct FAlertPointData
{
	uint8_t                                            AlertAllegiance;                               // 0x0000 (0x0001) [0x0000000000000000]               
	class UPoplarAlertPointDefinition*                 AlertPointDef;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     AlertLocation;                                 // 0x0010 (0x000C) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       InstigatorTeam;                                // 0x0020 (0x0008) [0x0000000000000000]               
	class APoplarPlayerReplicationInfo*                PPRIOwner;                                     // 0x0028 (0x0008) [0x0000000000000000]               
	class AActor*                                      TargetActor;                                   // 0x0030 (0x0008) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       TargetTeam;                                    // 0x0038 (0x0008) [0x0000000000000000]               
	class UObject*                                     InstanceDataContextObject;                     // 0x0040 (0x0008) [0x0000000000000000]               
	struct FName                                       InstanceDataName;                              // 0x0048 (0x0008) [0x0000000000000000]               
	uint8_t                                            FlashCount;                                    // 0x0050 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarAugDefinition.AugTier
// 0x0014
struct FAugTier
{
	class FString                                      TierDescription;                               // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            Cost;                                          // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarAugSet.BonusSkillInfo
// 0x0050
struct FBonusSkillInfo
{
	class FString                                      Title;                                         // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0010 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class USwfMovie*                                   ActionSkillIcon;                               // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USwfMovie*                                   ActionSkillIconLarge;                          // 0x0028 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      ButtonPrompt;                                  // 0x0030 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UMarkupAttributePresentationDefinition*> DescriptionPresentations;                      // 0x0040 (0x0010) [0x000000000440000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct PoplarGame.PoplarAutoAimStrategyDefinition.PoplarUnitTypePriority
// 0x000C
struct FPoplarUnitTypePriority
{
	class UPoplarUnitTypeDefinition*                   UnitType;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Priority;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarAutoAimStrategyDefinition.AutoAimZoneData
// 0x0010
struct FAutoAimZoneData
{
	float                                              MaxDistance;                                   // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPoplarAutoAimZoneDefinition*                Definition;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarAutoAimZoneDefinition.AutoAimProfileData
// 0x0010
struct FAutoAimProfileData
{
	uint8_t                                            Profile;                                       // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UWillowAutoAimProfileDefinition*             Definition;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarBodyClassDefinition.MeshAttachmentAimOffsetData
// 0x0010
struct FMeshAttachmentAimOffsetData
{
	struct FName                                       AttachmentMeshInstanceName;                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPoplarAimOffsetProfileDefinition*           PoplarAimOffsetProfile;                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarBodyClassDefinition.SnapLocationData
// 0x0024
struct FSnapLocationData
{
	class UBodyHitRegionDefinition*                    AssociatedHitRegion;                           // 0x0000 (0x0008) [0x0000000020000000]  CPF_Deprecated)
	struct FName                                       LocationName;                                  // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LocationOffset;                                // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              Radius;                                        // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Region;                                        // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarBodyHitRegionDefinition.HitRegionDamageModifierData
// 0x0040
struct FHitRegionDamageModifierData
{
	struct FAttributeInitializationData                DamageScale;                                   // 0x0000 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bInstantKill : 1;                              // 0x0020 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bCriticalHit : 1;                              // 0x0020 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class UDamageTypeDefinition*                       DamageTypeDefinition;                          // 0x0028 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            DamageTagsTest;                                // 0x0030 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FDamageTags                                 DamageTags;                                    // 0x0034 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Conditions;                                    // 0x0038 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct PoplarGame.PoplarBuffManager.BuffableData
// 0x0020
struct FBuffableData
{
	class UIBuffable*                                  Buffable_Object;                               // 0x0000 (0x0010) [0x0000000000002000] (CPF_Transient)
	class UIBuffable*                                  Buffable_Interface;                            // 0x0000 (0x0010) [0x0000000000002000] (CPF_Transient)
	class UBuffComponent*                              BuffComponent;                                 // 0x0010 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class AActor*                                      DeadBuffableActor;                             // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarBuildableDefinition.BuildableObject
// 0x0088
struct FBuildableObject
{
	class FString                                      BuildableName;                                 // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      BuildableDescription;                          // 0x0010 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FAttributeInitializationData                ShardCostToBuildInitializationData;            // 0x0020 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                ShardCostToRepairInitializationData;           // 0x0040 (0x0020) [0x0000000000000000]               
	class USpawnDefinition*                            BuildableSpawnDefinition;                      // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UInteractionIconDefinition*                  CanAffordIconDef;                              // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UInteractionIconDefinition*                  CannotAffordIconDef;                           // 0x0070 (0x0008) [0x0000000000000000]               
	uint8_t                                            BuildableType;                                 // 0x0078 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            InitialState;                                  // 0x0079 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             PreviewParticle;                               // 0x0080 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarBuildNodeGFxMovie.BuildableState
// 0x0040
struct FBuildableState
{
	uint8_t                                            Status;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      PathString;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Title;                                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Cost;                                          // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnabled : 1;                                  // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPurchased : 1;                                // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCanAfford : 1;                                // 0x003C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct PoplarGame.PoplarBuildNodeSpawner.BuildableOrientationData
// 0x0010
struct FBuildableOrientationData
{
	class UPoplarTeamDefinition*                       OwnerTeam;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      DirectionToFaceBuildables;                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarCameraShakeManager.CameraLurchData
// 0x0014
struct FCameraLurchData
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              LocMagnitude;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              RotMagnitude;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              FalloffRate;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarChallengeDefinition.ChallengeLevel
// 0x003C
struct FChallengeLevel
{
	class TArray<class UPoplarChallengeConditionDefinition*> ConditionDefinitions;                          // 0x0000 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	class FString                                      ChallengeDescription;                          // 0x0010 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            ProgressThresholdValue;                        // 0x0020 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UUnlockDefinition*>             Unlocks;                                       // 0x0028 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bCanRepeatCompletion : 1;                      // 0x0038 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct PoplarGame.PoplarChallengeManager.SortedDailyData
// 0x0010
struct FSortedDailyData
{
	int32_t                                            ChallengeIndex;                                // 0x0000 (0x0004) [0x0000000000000000]               
	class UPoplarChallengeDefinition*                  ChallengeDef;                                  // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarChallengeManager.PoplarChallengeLevelData
// 0x007C
struct FPoplarChallengeLevelData
{
	class UPoplarChallengeDefinition*                  ChallengeDefinition;                           // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ChallengeLevel;                                // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bChallengeLocked : 1;                          // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSecretChallenge : 1;                          // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            ExpirationTime;                                // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPinnedChallenge : 1;                          // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bChallengeSucceeded : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bChallengeFailed : 1;                          // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	class TArray<int32_t>                              ModifiedTargetValues;                          // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ConditionTargetSum;                            // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            DerivedToBaseStatDelta;                        // 0x002C (0x0004) [0x0000000000000000]               
	class UPoplarChallengeDefinition*                  UnlocksChallenge;                              // 0x0030 (0x0008) [0x0000000000000000]               
	uint8_t                                            StatCategory;                                  // 0x0038 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bClientCompleted : 1;                          // 0x003C (0x0004) [0x1000000000000000] [0x00000001] 
	struct FPoplarMetaReward                           ChallengeReward;                               // 0x0040 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bPreviouslyCompleted : 1;                      // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarChallengeManager.PoplarChallengeRewardInfo
// 0x0010
struct FPoplarChallengeRewardInfo
{
	class UPoplarChallengeDefinition*                  Challenge;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            LevelIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLoreChallenge : 1;                            // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarChallengeManager.PoplarChallengeProgressData
// 0x0030
struct FPoplarChallengeProgressData
{
	int32_t                                            CurrentValue;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            TargetValue;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentLevel;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ProgressPercentage;                            // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      ChallengeDescription;                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ChallengeState;                                // 0x0020 (0x0001) [0x0000000000000000]               
	class UPoplarChallengeDefinition*                  ChallengeDef;                                  // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarChallengeManager.DailyChallengeData
// 0x0020
struct FDailyChallengeData
{
	int32_t                                            UnlockTime;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class UPoplarChallengeDefinition*                  ChallengeDef;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class UStatDefinition*                             ChallengeIndexStat;                            // 0x0010 (0x0008) [0x0000000000000000]               
	class UStatDefinition*                             UnlockTimeStat;                                // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarChallengeManager.DailyChallengeHistoryData
// 0x0014
struct FDailyChallengeHistoryData
{
	class UPoplarChallengeDefinition*                  LastCompletedChallengeDef;                     // 0x0000 (0x0008) [0x0000000000000000]               
	class UStatDefinition*                             LastCompletedIndexStat;                        // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            LastCompletedChallengeIndex;                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCharacterIntroCoordinator.CharacterIntroData
// 0x002C
struct FCharacterIntroData
{
	class APoplarPlayerReplicationInfo*                PRI;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarMetaTauntDefinition*                  Taunt;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	class UPoplarPlayerNameIdentifierDefinition*       NameID;                                        // 0x0010 (0x0008) [0x0000000000000000]               
	class UPoplarMetaSkinDefinition*                   SkinId;                                        // 0x0018 (0x0008) [0x0000000000000000]               
	class APoplarPlayerStandIn*                        StandIn;                                       // 0x0020 (0x0008) [0x1000000000000000]               
	uint32_t                                           bInitialized : 1;                              // 0x0028 (0x0004) [0x1000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.PhaseActionNotification
// 0x0070
struct FPhaseActionNotification
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UAkEvent*                                    IntroAudioToPlay;                              // 0x0008 (0x0008) [0x0000000000000000]               
	class UPoplarCharacterSelectGFxMovie*              OwningMovie;                                   // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Friendly_Ban;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Enemy_Ban;                                     // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Friendly_Select;                               // 0x0028 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Enemy_Select;                                  // 0x0030 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Friendly_NewPhase_Ban;                         // 0x0038 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Enemy_NewPhase_Ban;                            // 0x0040 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Friendly_NewPhase_Reserve;                     // 0x0048 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Enemy_NewPhase_Reserve;                        // 0x0050 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Friendly_NewPhase_Select;                      // 0x0058 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Enemy_NewPhase_Select;                         // 0x0060 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  CurrentNewPhaseClip;                           // 0x0068 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.PlayerPopupInformation
// 0x0008
struct FPlayerPopupInformation
{
	int32_t                                            CurrentFocusedMessageId;                       // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            CurrentFocusedMessageButtonId;                 // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.PlayerSelections
// 0x008C
struct FPlayerSelections
{
	class UPoplarPlayerNameIdentifierDefinition*       SelectedCharacter;                             // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      PendingClassDefRequestString;                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPoplarPlayerClassDefinition*                LoadedCharacter;                               // 0x0018 (0x0008) [0x0000000000000000]               
	int32_t                                            SelectedCharacterIndex;                        // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectedLoadoutIndex;                          // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectedSkinIndex;                             // 0x0028 (0x0004) [0x0000000000000000]               
	class UPoplarMetaSkinDefinition*                   SelectedSkin;                                  // 0x0030 (0x0008) [0x0000000000000000]               
	class TArray<class UPoplarMetaSkinDefinition*>     UnlockedCharacterSkins;                        // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DefaultSkinHydraID;                            // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DefaultTauntHydraID;                           // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SelectedTauntIndex;                            // 0x0068 (0x0004) [0x0000000000000000]               
	class UPoplarMetaTauntDefinition*                  SelectedTaunt;                                 // 0x0070 (0x0008) [0x0000000000000000]               
	class TArray<class UPoplarMetaTauntDefinition*>    UnlockedCharacterTaunts;                       // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bCanPlayTaunt : 1;                             // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bInfoPopupVisible : 1;                         // 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bInputMessageBlocked : 1;                      // 0x0088 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bSelectedRandomCharacter : 1;                  // 0x0088 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.PlayerLoadoutListEntry
// 0x0010
struct FPlayerLoadoutListEntry
{
	class TArray<struct FMetaLoadoutInstance>          PlayerLoadouts;                                // 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.MetaItemListEntry
// 0x0010
struct FMetaItemListEntry
{
	class TArray<class UPoplarMetaItemDefinition*>     UnlockedItems;                                 // 0x0000 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.CharacterSelectPlayerMetaData
// 0x0030
struct FCharacterSelectPlayerMetaData
{
	struct FPlayerLoadoutListEntry                     PlayerLoadouts;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMetaItemListEntry                          UnlockedSkins;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMetaItemListEntry                          UnlockedTaunts;                                // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.LocalPlayerInfo
// 0x0004
struct FLocalPlayerInfo
{
	int32_t                                            LocalPlayerIndex;                              // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.PhaseInfoDisplay
// 0x0058
struct FPhaseInfoDisplay
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDataCached : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class UGFxObject*                                  PhaseClip;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  PhaseTitleClip;                                // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  PhaseDescriptionClip;                          // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  PhaseTitleClipEnemy;                           // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  PhaseDescriptionClipEnemy;                     // 0x0028 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsShown : 1;                                  // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      CachedPhaseTitle;                              // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CachedPhaseDesc;                               // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.PlayerMenuDisplay
// 0x002C
struct FPlayerMenuDisplay
{
	class UGFxObject* MenuClip;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject* MuteButtonClip;                                // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject* ViewProfileClip;                               // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject* ReportPlayerClip;                              // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject* BackgroundClip;                                // 0x0020 (0x0008) [0x0000000000000000]               
	uint32_t                                           bShown : 1;                                    // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectManager.PlayerSelectionData
// 0x0041
struct FPlayerSelectionData
{
	class APoplarPlayerReplicationInfo* PRI;                                           // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            TeamIndex;                                     // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bCanSelect : 1;                                // 0x000C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	int32_t                                            SelectionsMadeThisPhase;                       // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UPoplarPlayerNameIdentifierDefinition* SelectedCharacter;                             // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPoplarPlayerNameIdentifierDefinition* WantedCharacter;                               // 0x0020 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPoplarPlayerNameIdentifierDefinition* BanVote;                                       // 0x0028 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPoplarPlayerNameIdentifierDefinition* Suggestion;                                    // 0x0030 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bHasReceivedEntitlements : 1;                  // 0x0038 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint8_t                                            TradeRequests[0x5];                            // 0x003C (0x0005) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.TeamInfoEntry
// 0x011C
struct FTeamInfoEntry
{
	class UPoplarCharacterSelectGFxMovie* OwningMovie;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bClipsInitialized : 1;                         // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDataCached : 1;                               // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	class UGFxObject* TeamInfoEntryClip;                             // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject* GamerTagClip;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject* CharacterIconClip;                             // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject* SelectingIndicatorClip;                        // 0x0028 (0x0008) [0x0000000000000000]               
	class UGFxObject* CaptainClip;                                   // 0x0030 (0x0008) [0x0000000000000000]               
	class UGFxObject* NetworkConnectionClip;                         // 0x0038 (0x0008) [0x0000000000000000]               
	class UGFxObject* TimerClip;                                     // 0x0040 (0x0008) [0x0000000000000000]               
	class UGFxObject* VoiceStatusClip;                               // 0x0048 (0x0008) [0x0000000000000000]               
	class UGFxObject* P1_Indicator;                                  // 0x0050 (0x0008) [0x0000000000000000]               
	class UGFxObject* P2_Indicator;                                  // 0x0058 (0x0008) [0x0000000000000000]               
	class UGFxObject* P1_P2_Indicator;                               // 0x0060 (0x0008) [0x0000000000000000]               
	class UGFxObject* Solo_Indicator;                                // 0x0068 (0x0008) [0x0000000000000000]               
	class UGFxObject* ElapsedTimeClip;                               // 0x0070 (0x0008) [0x0000000000000000]               
	struct FPlayerMenuDisplay                          PlayerMenu;                                    // 0x0078 (0x0030) [0x0000000000000000]               
	uint32_t                                           bIsShown : 1;                                  // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsFriendlyTeam : 1;                           // 0x00A8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsSelecting : 1;                              // 0x00A8 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsCaptain : 1;                                // 0x00A8 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            CachedTeamIndex;                               // 0x00AC (0x0004) [0x0000000000000000]               
	int32_t                                            PlayerDataIndex;                               // 0x00B0 (0x0004) [0x0000000000000000]               
	int32_t                                            EntryMenuSelection;                            // 0x00B4 (0x0004) [0x0000000000000000]               
	uint32_t                                           P1_Selection : 1;                              // 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           P2_Selection : 1;                              // 0x00B8 (0x0004) [0x0000000000000000] [0x00000002] 
	class UPoplarPlayerNameIdentifierDefinition* CachedNameID;                                  // 0x00C0 (0x0008) [0x0000000000000000]               
	uint8_t                                            CurrentNetDisplayState;                        // 0x00C8 (0x0001) [0x0000000000000000]               
	struct FPlayerSelectionData                        CachedPlayerData;                              // 0x00D0 (0x0048) [0x0000000000000000]               
	struct FColor                                      CachedTeamColor;                               // 0x0118 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.TeamInfoList
// 0x05D8
struct FTeamInfoList
{
	class UPoplarCharacterSelectGFxMovie* OwningMovie;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bClipsInitialized : 1;                         // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDataCached : 1;                               // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FTeamInfoEntry                              TeamInfoEntries[0x5];                          // 0x0010 (0x05A0) [0x0000000000000000]               
	class UGFxObject* TeamInfoListClip;                              // 0x05B0 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsShown : 1;                                  // 0x05B8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsFriendlyTeam : 1;                           // 0x05B8 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            CachedTeamIndex;                               // 0x05BC (0x0004) [0x0000000000000000]               
	struct FColor                                      CachedTeamColor;                               // 0x05C0 (0x0004) [0x0000000000000000]               
	int32_t                                            PrimaryPlayerSelection;                        // 0x05C4 (0x0004) [0x0000000000000000]               
	uint32_t                                           PrimaryPlayerEntryMenuShown : 1;               // 0x05C8 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            SecondaryPlayerSelection;                      // 0x05CC (0x0004) [0x0000000000000000]               
	uint32_t                                           SecondaryPlayerEntryMenuShown : 1;             // 0x05D0 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            MaxShownEntryIndex;                            // 0x05D4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.CharacterGrid
// 0x006C
struct FCharacterGrid
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  ParentClip;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  CharacterGridClip;                             // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  TitleClip;                                     // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  BackgroundClip;                                // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  IconClip;                                      // 0x0028 (0x0008) [0x0000000000000000]               
	class TArray<struct FCharacterCell>                CharacterCells;                                // 0x0030 (0x0010) [0x0000000000001000] (CPF_Native)  
	class TArray<int32_t>                              CharactersInGrid;                              // 0x0040 (0x0010) [0x0000000000001000] (CPF_Native)  
	int32_t                                            MaxShownCells;                                 // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            NumShownCells;                                 // 0x0054 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectedCellIndex;                             // 0x0058 (0x0004) [0x0000000000000000]               
	int32_t                                            AssociatedTeamIndex;                           // 0x005C (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsShown : 1;                                  // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            GridType;                                      // 0x0064 (0x0001) [0x0000000000000000]               
	uint8_t                                            CurrentDisplayOption;                          // 0x0065 (0x0001) [0x0000000000000000]               
	struct FLocalPlayerInfo                            PlayerInfo;                                    // 0x0068 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.CharacterCell
// 0x0044
struct FCharacterCell
{
	struct FLocalPlayerInfo                            PlayerInfo;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class UPoplarCharacterSelectGFxMovie*              OwningMovie;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  CharacterCellClip;                             // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            CharacterDataIndex;                            // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            FriendlyTeamIndex;                             // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            CachedNumBanVotes;                             // 0x0020 (0x0004) [0x0000000000000000]               
	class UPoplarPlayerNameIdentifierDefinition*       CachedNameID;                                  // 0x0028 (0x0008) [0x0000000000000000]               
	uint32_t                                           bShowEnemyData : 1;                            // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            GridType;                                      // 0x0034 (0x0001) [0x0000000000000000]               
	uint8_t                                            GridDisplayOp;                                 // 0x0035 (0x0001) [0x0000000000000000]               
	uint32_t                                           bIsShown : 1;                                  // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsFocus : 1;                                  // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            ForceRevealFrameCountdown;                     // 0x003C (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsLocked : 1;                                 // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsSelected : 1;                               // 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsBanned : 1;                                 // 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsReserved : 1;                               // 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
};


// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.MenuSelector
// 0x002C
struct FMenuSelector
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject* SelectorClip;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject* SelectorIconClip;                              // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject* TabTitleText;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	uint8_t                                            MenuType;                                      // 0x0020 (0x0001) [0x0000000000000000]               
	int32_t                                            CurrentSelection;                              // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsMenuUsable : 1;                             // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsShown : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsCurrentMenu : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.CycleSelector
// 0x006C
struct FCycleSelector
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject* ItemNameClip;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject* PagingTextClip;                                // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject* LeftArrowClip;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject* LeftControlsPromptClip;                        // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject* RightArrowClip;                                // 0x0028 (0x0008) [0x0000000000000000]               
	class UGFxObject* RightControlsPromptClip;                       // 0x0030 (0x0008) [0x0000000000000000]               
	class UGFxObject* MetaItemClips[0x5];                            // 0x0038 (0x0028) [0x0000000000000000]               
	int32_t                                            CurrentFocusCell;                              // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentPage;                                   // 0x0064 (0x0004) [0x0000000000000000]               
	uint32_t                                           bShouldShowPagePrompt : 1;                     // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.CharacterSkillInfo
// 0x0030
struct FCharacterSkillInfo
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject* SkillIcon;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject* SkillName;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject* SkillText;                                     // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject* ButtonGlyph;                                   // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject* LoadingIcon;                                   // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.CharacterInfoPopup
// 0x0124
struct FCharacterInfoPopup
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject* InfoPopupClip;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject* FactionIconClip;                               // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject* RoleTextClip;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject* PassiveTextClip;                               // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject* AdjectiveIconClips[0x3];                       // 0x0028 (0x0018) [0x0000000000000000]               
	class UGFxObject* AdjectiveTextClips[0x3];                       // 0x0040 (0x0018) [0x0000000000000000]               
	struct FCharacterSkillInfo                         SkillClips[0x4];                               // 0x0058 (0x00C0) [0x0000000000000000]               
	class UPoplarPlayerNameIdentifierDefinition* CachedNameID;                                  // 0x0118 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsShown : 1;                                  // 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.LoadoutInfoPopup
// 0x0004
struct FLoadoutInfoPopup
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsShown : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.CharacterSelectMessagePopup
// 0x0058
struct FCharacterSelectMessagePopup
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDataCached : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class UGFxObject* PopupClip;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject* GamerTagTextClip;                              // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject* InfoTextClip;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject* LeftButtonClip;                                // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject* LeftButtonTextClip;                            // 0x0028 (0x0008) [0x0000000000000000]               
	class UGFxObject* LeftButtonHintClip;                            // 0x0030 (0x0008) [0x0000000000000000]               
	class UGFxObject* RightButtonClip;                               // 0x0038 (0x0008) [0x0000000000000000]               
	class UGFxObject* RightButtonTextClip;                           // 0x0040 (0x0008) [0x0000000000000000]               
	class UGFxObject* RightButtonHintClip;                           // 0x0048 (0x0008) [0x0000000000000000]               
	int32_t                                            CurrentButtonIndex;                            // 0x0050 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasBeenCaptainPrompted : 1;                   // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsShowingCaptainPrompt : 1;                   // 0x0054 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.LocalPlayerMenuManager
// 0x05B4
struct FLocalPlayerMenuManager
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDataCached : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class UPoplarCharacterSelectGFxMovie*              ParentMovie;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  MenuContainer;                                 // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  OuterClip;                                     // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  LoadingClip;                                   // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  FlameSelectingClip;                            // 0x0028 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  GamerTagTextClip;                              // 0x0030 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  NavLeftHintClip;                               // 0x0038 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  NavRightHintClip;                              // 0x0040 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  ActionTextClip;                                // 0x0048 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  ActionPromptClip;                              // 0x0050 (0x0008) [0x0000000000000000]               
	struct FMenuSelector                               PlayerMenuData[0x6];                           // 0x0058 (0x0120) [0x0000000000000000]               
	struct FCycleSelector                              SkinMenuData;                                  // 0x0178 (0x0070) [0x0000000000000000]               
	struct FCycleSelector                              TauntMenuData;                                 // 0x01E8 (0x0070) [0x0000000000000000]               
	struct FCharacterGrid                              Grids[0x3];                                    // 0x0258 (0x0150) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FCharacterInfoPopup                         CharacterInfo;                                 // 0x03A8 (0x0128) [0x0000000000000000]               
	struct FLoadoutInfoPopup                           LoadoutInfo;                                   // 0x04D0 (0x0004) [0x0000000000000000]               
	class UPoplarCharacterSelectGFxMovieDefinition*    MovieDef;                                      // 0x04D8 (0x0008) [0x0000000000000000]               
	uint8_t                                            CurrentMenuState;                              // 0x04E0 (0x0001) [0x0000000000000000]               
	struct FCharacterSelectMessagePopup                MessagePopup;                                  // 0x04E8 (0x0058) [0x0000000000000000]               
	class UPoplarPlayerNameIdentifierDefinition*       SelectedCharacter;                             // 0x0540 (0x0008) [0x0000000000000000]               
	struct FLocalPlayerInfo                            AssociatedPlayerInfo;                          // 0x0548 (0x0004) [0x0000000000000000]               
	int32_t                                            PlayerDataIndex;                               // 0x054C (0x0004) [0x0000000000000000]               
	int32_t                                            LocalPlayerIndex;                              // 0x0550 (0x0004) [0x0000000000000000]               
	struct FMetaItemListEntry                          UnlockedSkinsList;                             // 0x0558 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPoplarMetaItemDefinition*                   CurrentSkin;                                   // 0x0568 (0x0008) [0x0000000000000000]               
	struct FMetaItemListEntry                          UnlockedTauntsList;                            // 0x0570 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPoplarMetaItemDefinition*                   CurrentTaunt;                                  // 0x0580 (0x0008) [0x0000000000000000]               
	struct FPlayerLoadoutListEntry                     PlayerLoadoutData;                             // 0x0588 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWillowGFxDialogBox*                         ConfirmationDialog;                            // 0x0598 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHasReceivedEntitlements : 1;                  // 0x05A0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsShown : 1;                                  // 0x05A0 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            CurrentGridIndex;                              // 0x05A4 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCanDoPrimaryAction : 1;                       // 0x05A8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanSuggest : 1;                               // 0x05A8 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCanSelectPreferredCharacter : 1;              // 0x05A8 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCanShowMoreInfo : 1;                          // 0x05A8 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bHasPreferredSkin : 1;                         // 0x05A8 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bHasPreferredTaunt : 1;                        // 0x05A8 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bTeamInfoEntryMenuOpen : 1;                    // 0x05A8 (0x0004) [0x0000000000000000] [0x00000040] 
	int32_t                                            CurrentEntryMenuIndex;                         // 0x05AC (0x0004) [0x0000000000000000]               
	int32_t                                            LoadingBarFrame;                               // 0x05B0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.PhaseTimelineEntry
// 0x0030
struct FPhaseTimelineEntry
{
	class UGFxObject* PhaseIconClip;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject* PhaseIconInnerClip;                            // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject* PhaseIconBaseClip;                             // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject* PhaseIconBaseInnerClip;                        // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject* PhaseColorClip;                                // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            AssociatedPhaseIndex;                          // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFriendly : 1;                                 // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.PhaseTimeline
// 0x036C
struct FPhaseTimeline
{
	class UGFxObject*                                  PhaseTimelineClip;                             // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPhaseTimelineEntry                         PhaseClips[0x12];                              // 0x0008 (0x0360) [0x0000000000000000]               
	uint32_t                                           bShouldShow : 1;                               // 0x0368 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.RepresentedRole
// 0x0020
struct FRepresentedRole
{
	class UPoplarCharacterRoleDefinition*              RoleDef;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RoleCount;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            bRepresentedByLocalPlayer;                     // 0x000C (0x0001) [0x0000000000000000]               
	class TArray<class FString>                        RoleCharacterNames;                            // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovie.HintActionPair
// 0x001C
struct FHintActionPair
{
	uint32_t                                           bClipsInitialized : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGFxObject*                                  ActionHintButton;                              // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  ActionHintText;                                // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           bActionSet : 1;                                // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectManager.CharacterSelectionData
// 0x0024
struct FCharacterSelectionData
{
	class UPoplarPlayerNameIdentifierDefinition*       NameID;                                        // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPoplarTeamDefinition*                       BannedBy;                                      // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPoplarTeamDefinition*                       ReservedFor;                                   // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	class APoplarPlayerReplicationInfo*                SelectedBy;                                    // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bAvailableForCaptain_TeamA : 1;                // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAvailableForCaptain_TeamB : 1;                // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovieDefinition.CharacterDifficultyList
// 0x0020
struct FCharacterDifficultyList
{
	class TArray<class UPoplarPlayerNameIdentifierDefinition*> RecommendedCharacters;                         // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UPoplarPlayerNameIdentifierDefinition*> AdvancedCharacters;                            // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};


// ScriptStruct PoplarGame.PoplarCharacterSelectGFxMovieDefinition.MapCharacterDifficultyLookup
// 0x0030
struct FMapCharacterDifficultyLookup
{
	class FString                                      MapName;                                       // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FCharacterDifficultyList                    DifficultyList;                                // 0x0010 (0x0020) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarCharacterSelectManager.TeamSelectionData
// 0x018C
struct FTeamSelectionData
{
	class APoplarPlayerReplicationInfo*                CaptainPRI;                                    // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPoplarTeamDefinition*                       TeamDefinition;                                // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FPlayerSelectionData                        Players[0x5];                                  // 0x0010 (0x0168) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SelectingPlayerIndex;                          // 0x0178 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumPlayers;                                    // 0x017C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumExpectedPlayers;                            // 0x0180 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumBots;                                       // 0x0184 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumExpectedBots;                               // 0x0188 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarCharacterSelectManager.PhaseActionData
// 0x0018
struct FPhaseActionData
{
	class APoplarPlayerReplicationInfo*                PRI;                                           // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPoplarCharacterSelectPhaseDefinition*       PhaseDef;                                      // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPoplarPlayerNameIdentifierDefinition*       NameID;                                        // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarCharacterSelectManager.CharacterSelectLeviathanData
// 0x0020
struct FCharacterSelectLeviathanData
{
	class TArray<class FString>                        StringTags;                                    // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class FString>                        StringValues;                                  // 0x0010 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarCharacterSelectManagerDebugDefinition.CharacterSelectDebugBoxData
// 0x0028
struct FCharacterSelectDebugBoxData
{
	float                                              BoxPositionX;                                  // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              BoxPositionY;                                  // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              BoxSizeX;                                      // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              BoxSizeY;                                      // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bBasePositionXOnHudCenter : 1;                 // 0x0010 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bBasePositionYOnHudCenter : 1;                 // 0x0010 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseCenterOfBoxForPositioning : 1;             // 0x0010 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint8_t                                            FontSize;                                      // 0x0014 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FColor                                      BoxColor;                                      // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FColor                                      TextColor;                                     // 0x001C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FColor                                      SelectedBoxColor;                              // 0x0020 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FColor                                      SelectedTextColor;                             // 0x0024 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarCheckpoint.PoplarCheckpointRegion
// 0x0010
struct FPoplarCheckpointRegion
{
	float                                              Height;                                        // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Radius;                                        // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class AVolume*                                     Volume;                                        // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarCheckpoint.PoplarCheckpointSpawnPoint
// 0x0010
struct FPoplarCheckpointSpawnPoint
{
	class APoplarCheckpointPlayerStart*                PlayerStart;                                   // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class APoplarInteractiveObject*                    BasePad;                                       // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarCombatantActionTracker.CombatantDataCacheEntry
// 0x0020
struct FCombatantDataCacheEntry
{
	int32_t                                            CombatantID;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      DisplayName;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class USwfMovie*                                   DisplayIcon;                                   // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCombatantActionTracker.FullCombatantActionData
// 0x0030
struct FFullCombatantActionData
{
	class UPoplarActionDefinition*                     NonSkillAction;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarSkillDefinition*                      SkillDef;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            ActionTypeFlags;                               // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            ActionTypePriorityFlags;                       // 0x0011 (0x0001) [0x0000000000000000]               
	float                                              ActionAmount;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            DamageTypeFlags;                               // 0x0018 (0x0001) [0x0000000000000000]               
	float                                              PhysicalDamage;                                // 0x001C (0x0004) [0x0000000000000000]               
	float                                              TrueDamage;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ShieldDamage;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              HealingDamage;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCombatantActionTracker.FullCombatantData
// 0x004C
struct FFullCombatantData
{
	class AActor*                                      Attacker;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            AttackerID;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class APoplarPlayerReplicationInfo*                AttackerPRI;                                   // 0x0010 (0x0008) [0x0000000000000000]               
	class UPoplarUnitTypeDefinition*                   UnitTypeDef;                                   // 0x0018 (0x0008) [0x0000000000000000]               
	class UWillowCharacterClassDefinition*             AttackerWillowClassDef;                        // 0x0020 (0x0008) [0x0000000000000000]               
	class TArray<struct FFullCombatantActionData>      Actions;                                       // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TotalActionAmount;                             // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              TotalDamageAmount;                             // 0x003C (0x0004) [0x0000000000000000]               
	float                                              LastActionTimeStamp;                           // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            CombinedActionPriorityFlags;                   // 0x0044 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsFriendlyToVictim : 1;                       // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarCombatantActionTracker.ActiveAssistStruct
// 0x0030
struct FActiveAssistStruct
{
	class AController*                                 Victim;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            VictimID;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	class TArray<struct FFullCombatantData>            Assisters;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              FirstTimeStamp;                                // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              LastTimeStamp;                                 // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            KillerAssisterIndex;                           // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            KillerToRewardAssisterIndex;                   // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCombatantActionTracker.InternalRegisterActionData
// 0x0041
struct FInternalRegisterActionData
{
	class AController*                                 Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class AController*                                 Instigator;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class UIDamageCauser*                              DamageCauser_Object;                           // 0x0010 (0x0010) [0x0000000000000000] 
	class UIDamageCauser*                              DamageCauser_Interface;                        // 0x0010 (0x0010) [0x0000000000000000]               
	class UPoplarActionDefinition*                     ActionDef;                                     // 0x0020 (0x0008) [0x0000000000000000]               
	class UPoplarSkillDefinition*                      TrackedSkillDef;                               // 0x0028 (0x0008) [0x0000000000000000]               
	class UWillowDamageTypeDefinition*                 DamageTypeDef;                                 // 0x0030 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDetrimentalBuff : 1;                          // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ActionAmount;                                  // 0x003C (0x0004) [0x0000000000000000]               
	uint8_t                                            ActionType;                                    // 0x0040 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCombatantActionTracker.BuffRegisterActionData
// 0x0024
struct FBuffRegisterActionData
{
	class AController*                                 BuffTarget;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class UISkillInstigator*                           BuffInstigator_Object;                         // 0x0008 (0x0010) [0x0000000000000000] 
	class UISkillInstigator*                           BuffInstigator_Interface;                      // 0x0008 (0x0010) [0x0000000000000000]               
	class UPoplarBuffDefinition*                       BuffDefinition;                                // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              MaxOvershieldAmount;                           // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCombatantActionTracker.PendingCombatantNameRemoval
// 0x0008
struct FPendingCombatantNameRemoval
{
	int32_t                                            CombatantID;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TimeUntilRemoval;                              // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCommandGFxMovie.PoplarCharacterDetails
// 0x0060
struct FPoplarCharacterDetails
{
	struct FPointer                                    Item;                                          // 0x0000 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class UPoplarPlayerNameIdentifierDefinition*       Character;                                     // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SortOrder;                                     // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	class FString                                      CharacterIconMoviePath;                        // 0x0018 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            CharacterLevel;                                // 0x0028 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CharacterLevelExperiencePercentage;            // 0x002C (0x0004) [0x0000000000002000] (CPF_Transient)
	class FString                                      FactionIconPath;                               // 0x0030 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            LoreChallengesCompleted;                       // 0x0040 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            BreadcrumbCount;                               // 0x0044 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ScheduledCommandRank;                          // 0x0048 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bChallengeRequirementMet : 1;                  // 0x004C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class FString                                      ChallengeUnlockDescription;                    // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarCommandMenuDefinition.PoplarCommandPagePairing
// 0x0010
struct FPoplarCommandPagePairing
{
	class UPoplarCommandPageGFxMovieDefinition* PageDefinition;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPoplarCommandPageGFxMovie* PageMovie;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCommandGFxMovie.CommandPageData
// 0x0024
struct FCommandPageData
{
	struct FPoplarCommandPagePairing                   PagePairing;                                   // 0x0000 (0x0010) [0x0000000000002000] (CPF_Transient)
	class FString                                      Label;                                         // 0x0010 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            BreadcrumbCount;                               // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarCommandGFxMovie.PoplarCommandTelemetryEvent
// 0x0050
struct FPoplarCommandTelemetryEvent
{
	class FString                                      EventType;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CurrentPageName;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PreviousPageName;                              // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      OwningPageName;                                // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SelectedItemID;                                // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarCommandMenuDefinition.PoplarSubPageGroup
// 0x0018
struct FPoplarSubPageGroup
{
	class UPoplarCommandPageGFxMovieDefinition*        SubPageGroupOwner;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FPoplarCommandPagePairing>     PagePairingGroup;                              // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarFrontendGFxMovie.FrontendCombinedBoostInfo
// 0x0014
struct FFrontendCombinedBoostInfo
{
	struct FPointer                                    Item;                                          // 0x0000 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class UPoplarMetaItemBoosterDefinition*            BoosterDefinition;                             // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumberInactive;                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarCommandPageGFxMovieDefinition.CommandSubPageData
// 0x0044
struct FCommandSubPageData
{
	class FString                                      Label;                                         // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      IconFrame;                                     // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      TelemetryID;                                   // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<uint8_t>                              BreadcrumbItems;                               // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              BackgroundMatineeTime;                         // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarCommandPageGFxMovieDefinition.StatDimensionOverrides
// 0x0040
struct FStatDimensionOverrides
{
	class UDifficultyStatDimensionValueDefinition*     OptionalDifficulty;                            // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGameModeStatDimensionValueDefinition*       OptionalGameMode;                              // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UHardcoreStatDimensionValueDefinition*       OptionalHardcore;                              // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class ULevelStatDimensionValueDefinition*          OptionalLevel;                                 // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UFactionStatDimensionValueDefinition*        OptionalFaction;                               // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTeamSizeStatDimensionValueDefinition*       OptionalTeamSize;                              // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class URoleStatDimensionValueDefinition*           OptionalRole;                                  // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class URankedSeasonStatDimensionValueDefinition*   OptionalSeason;                                // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarCommandPageGFxMovieDefinition.OverrideStatData
// 0x0091
struct FOverrideStatData
{
	class UStatDefinition*                             StatA;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FStatDimensionOverrides                     StatADimensions;                               // 0x0008 (0x0040) [0x0000000000000001] (CPF_Edit)    
	class UStatDefinition*                             StatB;                                         // 0x0048 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FStatDimensionOverrides                     StatBDimensions;                               // 0x0050 (0x0040) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Operation;                                     // 0x0090 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarCommandPageGFxMovieDefinition.OverrideStatDisplayData
// 0x0020
struct FOverrideStatDisplayData
{
	class TArray<struct FOverrideStatData>             OverrideData;                                  // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      OverrideDisplayName;                           // 0x0010 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarCommandPageGFxMovieDefinition.SingleStatDisplayData
// 0x0049
struct FSingleStatDisplayData
{
	class UStatDefinition*                             TheStat;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FOverrideStatDisplayData                    OverrideDisplayData;                           // 0x0008 (0x0020) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      NamePath;                                      // 0x0028 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      ValuePath;                                     // 0x0038 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            FormatType;                                    // 0x0048 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarCommandPageGFxMovieDefinition.ColorBarStatDisplayData
// 0x0054
struct FColorBarStatDisplayData
{
	class TArray<struct FSingleStatDisplayData>        Stats;                                         // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FColor>                        TintColors;                                    // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      NamePath;                                      // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      ColorBarPath;                                  // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      ColorBarClipsPrefix;                           // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            NumFramesPerClip;                              // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarCommandPageGFxMovieDefinition.MapRowData
// 0x0020
struct FMapRowData
{
	class ULevelStatDimensionValueDefinition*          MapStat;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      RowPrefix;                                     // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UStatDefinition*                             RevealStat;                                    // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarCommandPageGFxMovieDefinition.ScoreColumnData
// 0x0060
struct FScoreColumnData
{
	class FString                                      ColumnTitle;                                   // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UStatDefinition*                             BaseStat;                                      // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDifficultyStatDimensionValueDefinition*     OptionalDifficulty;                            // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGameModeStatDimensionValueDefinition*       OptionalGameMode;                              // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UHardcoreStatDimensionValueDefinition*       OptionalHardcore;                              // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UFactionStatDimensionValueDefinition*        OptionalFaction;                               // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTeamSizeStatDimensionValueDefinition*       OptionalTeamSize;                              // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class URoleStatDimensionValueDefinition*           OptionalRole;                                  // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class URankedSeasonStatDimensionValueDefinition*   OptionalSeason;                                // 0x0048 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      ColumnPrefix;                                  // 0x0050 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarCommandPageGFxMovieDefinition.TabStatData
// 0x0098
struct FTabStatData
{
	class TArray<struct FSingleStatDisplayData>        StatsOnTab;                                    // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FMapRowData>                   MapRowsOnTab;                                  // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FScoreColumnData>              MapColumnsOnTab;                               // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FMapRowData>                   OperationsOnTab;                               // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FScoreColumnData>              OperationsColumnsOnTab;                        // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bCharacterSpecific : 1;                        // 0x0050 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UStatDefinition*                             BestMedalBaseStat;                             // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatDefinition*                             MinutesPlayedBaseStat;                         // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatDefinition*                             MatchesPlayedBaseStat;                         // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStatDefinition*                             BestScoreBaseStat;                             // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UGameModeStatDimensionValueDefinition*> PvEModeDimensionValueList;                     // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UGameModeStatDimensionValueDefinition*> PvPModeDimensionValueList;                     // 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarCommandTitleSelectPanelGFxObject.CommandTitleDisplayInfo
// 0x0024
struct FCommandTitleDisplayInfo
{
	uint8_t                                            TitleDisplayState;                             // 0x0000 (0x0001) [0x0000000000002000] (CPF_Transient)
	class FString                                      UnlockDescription;                             // 0x0008 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPointer                                    TitleMetaItem;                                 // 0x0018 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            ProgressPercent;                               // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarCommManager.VoiceRecord
// 0x0038
struct FVoiceRecord
{
	class FString                                      ProviderType;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExperienceGuid;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bPlayerRejoined : 1;                           // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPlayerLeft : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            BeaconState;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            NumPacketsSent[0x3];                           // 0x0028 (0x000C) [0x0000000000000000]               
	uint32_t                                           bIsDirty : 1;                                  // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarControlledMoveDefinition.TimedCMBehaviorEvent
// 0x0008 (0x0008 - 0x0010)
struct FTimedCMBehaviorEvent : FSpecializedBehaviorEvent
{
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bServerOnly : 1;                               // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct PoplarGame.PoplarControlledMoveDefinition.CMUnitCollisionFilter
// 0x0018
struct FCMUnitCollisionFilter
{
	uint8_t                                            Allegiance;                                    // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UPoplarUnitTypeDefinition*                   Unit;                                          // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPoplarUnitTypeTag*                          UnitTag;                                       // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarDedicatedServerStatManager.StatCallbackEntry
// 0x0018
struct FStatCallbackEntry
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000102000] (CPF_Transient)
	class TArray<struct FPointer>                      Callbacks;                                     // 0x0008 (0x0010) [0x0000000000103000] (CPF_Native | CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarDedicatedServerStatManager.ServerStatEntry
// 0x0010
struct FServerStatEntry
{
	struct FDouble                                     TimeAdded;                                     // 0x0000 (0x0008) [0x0000000000102000] (CPF_Transient)
	uint8_t                                            StatType;                                      // 0x0008 (0x0001) [0x0000000000102000] (CPF_Transient)
	uint32_t                                           Recorded : 1;                                  // 0x000C (0x0004) [0x0000000000102000] [0x00000001] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarDownloadableContentManager.MarketplaceContentOfferMapping
// 0x0014
struct FMarketplaceContentOfferMapping
{
	class FString                                      OfferId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            OfferMask;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarDownloadableContentManager.BundleContentMapping
// 0x0030
struct FBundleContentMapping
{
	class FString                                      VisibleOfferId;                                // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      HiddenOfferId;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EntitlementId;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarMetaItemDefinition.SortTableEntry
// 0x0014
struct FSortTableEntry
{
	class FString                                      Category;                                      // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarFrontendGFxMovie.FrontendElementState
// 0x0009
struct FFrontendElementState
{
	struct FName                                       ElementTag;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            ElementState;                                  // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarFrontendGFxMovie.OverlayData
// 0x0018
struct FOverlayData
{
	struct FName                                       OverlayName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPlatformUserId                             UserId;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	class UGearboxGFxMovie*                            OverlayMovie;                                  // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarFrontendGFxMovie.MessageOfTheDay
// 0x0080
struct FMessageOfTheDay
{
	int32_t                                            MessageId;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FNewsArticle                                Article;                                       // 0x0008 (0x0070) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DisplayTime;                                   // 0x0078 (0x0004) [0x0000000000000000]               
	uint32_t                                           bForceFullscreen : 1;                          // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarFrontendGFxMovie.FrontendExperienceImage
// 0x0020
struct FFrontendExperienceImage
{
	class FString                                      Guid;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ImageFilename;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarFrontendPlayerListGFxObject.PlayerListEntry
// 0x0018
struct FPlayerListEntry
{
	uint8_t                                            RowTypeId;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	struct FUniqueNetId                                AssociatedPlayerId;                            // 0x0004 (0x0014) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.ScrollingGridGFxObject.ScrollingGridOption
// 0x0018
struct FScrollingGridOption
{
	class FString                                      Caption;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture*                                    Image;                                         // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarFrontendScreenMainGFxObject.FullGameLicenseOfferId
// 0x0030
struct FFullGameLicenseOfferId
{
	class FString                                      Platform;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Region;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Id;                                            // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarFrontendScreenMainGFxObject.FrontendNavigationEntry
// 0x0018
struct FFrontendNavigationEntry
{
	class UPanelButtonListGFxObject*                   PanelButtonList;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      Label;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarFrontendScreenPrivateMatchGFxObject.OptionDescription
// 0x0018
struct FOptionDescription
{
	int32_t                                            EventId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Description;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarFrontendScreenVotingGFxObject.VoteOptionPlayerIdentifier
// 0x002C
struct FVoteOptionPlayerIdentifier
{
	struct FUniqueNetId                                NetId;                                         // 0x0000 (0x0014) [0x0000000000000000]               
	class FString                                      ProfileImageURL;                               // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            VoteOptionIndex;                               // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameConstantBuffer.PoplarGameConstantBufferStruct
// 0x0040
struct FPoplarGameConstantBufferStruct
{
	struct FFloat3                                     WindDirection;                                 // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Padding0;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FFloat2                                     DecalFadeParameters;                           // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FriendlyTeamScore;                             // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EnemyTeamScore;                                // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PointsFromWinning;                             // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PointsFromLosing;                              // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FriendlyTeamPointRate;                         // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EnemyTeamPointRate;                            // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FFloat1                                     WindOscillationRate;                           // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FFloat1                                     WindOscillationMagnitude;                      // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FFloat1                                     MatchTimeRemaining;                            // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FFloat1                                     MatchTimeElapsed;                              // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarGameEngine.LoadingMovieMapping
// 0x0020
struct FLoadingMovieMapping
{
	class FString                                      MapName;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MoviePath;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGameInfo.PlayerEntitlement
// 0x0034
struct FPlayerEntitlement
{
	class FString                                      UserId;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MetaID;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ApolloJSON;                                    // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ItemLevel;                                     // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameInfo.CreditsProviderDefinitionOverride
// 0x0010
struct FCreditsProviderDefinitionOverride
{
	class UPoplarUnitTypeDefinition*                   UnitType;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UCreditsProviderDefinition*                  OverrideCreditsProvDef;                        // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameInfo.LaneBucketSet
// 0x0018
struct FLaneBucketSet
{
	class UPoplarLaneDefinition* LaneDef;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FPointer>                      Buckets;                                       // 0x0008 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct PoplarGame.PoplarGameInfo.TeamBucketSet
// 0x0018
struct FTeamBucketSet
{
	class UPoplarTeamDefinition* TeamDef;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FPointer>                      Buckets;                                       // 0x0008 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct PoplarGame.PoplarGameInfo.UnitTypeBucketSet
// 0x0018
struct FUnitTypeBucketSet
{
	class UPoplarUnitTypeDefinition* UnitTypeDef;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FPointer>                      Buckets;                                       // 0x0008 (0x0010) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct PoplarGame.PoplarGameInfo.UnitsArray
// 0x0010
struct FUnitsArray
{
	class TArray<class UIUnit*>                        Units;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGameInfo.GameObjectCollection
// 0x01A0
struct FGameObjectCollection
{
	class TArray<struct FLaneBucketSet>                GameObjectsByLane;                             // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTeamBucketSet>                GameObjectsByTeam;                             // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUnitTypeBucketSet>            UnitsByType;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUnitsArray                                 UnitsByCoderUnitType[0x10];                    // 0x0030 (0x0100) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class APoplarInteractiveObject*>      InteractiveObjects;                            // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPoplarLaneDefinition*                       CachedUnassignedLane;                          // 0x0140 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDestroyed : 1;                                // 0x0148 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                           UnknownData00[0x50];                              // 0x0150 (0x0050) UNKNOWN PROPERTY: MapProperty PoplarGame.PoplarGameInfo.GameObjectCollection.RegisteredUnits
};

// ScriptStruct PoplarGame.PoplarGameInfo.PrivateMatchOptionDesc
// 0x001C
struct FPrivateMatchOptionDesc
{
	class FString                                      OptionName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            OptionType;                                    // 0x0010 (0x0001) [0x0000000000000000]               
	int32_t                                            MinValue;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxValue;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameInfo.MetaRewardListener
// 0x0020
struct FMetaRewardListener
{
	class UObject*                                     RewardListener;                                // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	class TArray<struct FPoplarMetaReward>             MetaRewards;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGameInfo.SpawnBotArgs
// 0x010C
struct FSpawnBotArgs
{
	struct FScriptDelegate                             OnBotSpawned;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class APoplarPlayerReplicationInfo*                PoplarPRI;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	class UPoplarPlayerNameIdentifierDefinition*       CharacterNameId;                               // 0x0018 (0x0008) [0x0000000000000000]               
	class UPoplarMetaSkinDefinition*                   SkinId;                                        // 0x0020 (0x0008) [0x0000000000000000]               
	class UPoplarMetaTauntDefinition*                  TauntId;                                       // 0x0028 (0x0008) [0x0000000000000000]               
	class UPoplarPlayerClassDefinition*                PlayerClass;                                   // 0x0030 (0x0008) [0x0000000000000000]               
	class APoplarAIPawn*                               BotArchetype;                                  // 0x0038 (0x0008) [0x0000000000000000]               
	class UPoplarSkinDefinition*                       Skin;                                          // 0x0040 (0x0008) [0x0000000000000000]               
	class UPoplarSpecialMove_Taunt*                    Taunt;                                         // 0x0048 (0x0008) [0x0000000000000000]               
	struct FVector                                     CustomBotSpawnLocation;                        // 0x0050 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CustomBotSpawnRotation;                        // 0x005C (0x000C) [0x0000000000000000]               
	int32_t                                            TeamIndex;                                     // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            ExpLevel;                                      // 0x006C (0x0004) [0x0000000000000000]               
	float                                              HealthLostPct;                                 // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              ShieldLostPct;                                 // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              Overshield;                                    // 0x0078 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUseCustomBotSpawnLocation : 1;                // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLoadingPlayerClass : 1;                       // 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsNPC : 1;                                    // 0x007C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDisableRagdoll : 1;                           // 0x007C (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            Difficulty;                                    // 0x0080 (0x0004) [0x0000000000000000]               
	class APoplarPlayerReplicationInfo*                Owner;                                         // 0x0088 (0x0008) [0x0000000000000000]               
	uint8_t                                            AugSet[0xA];                                   // 0x0090 (0x000A) [0x0000000000000000]               
	int32_t                                            Credits;                                       // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            SkillPoints;                                   // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              SkillCooldownTable[0x5];                       // 0x00A4 (0x0014) [0x0000000000000000]               
	float                                              Exp;                                           // 0x00B8 (0x0004) [0x0000000000000000]               
	class TArray<struct FBotPlayerStatsData>           ExistingPlayerStats;                           // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bReplacingLeaverPlayer : 1;                    // 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      CustomBotPlayerName;                           // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayingOnBehalfOfUniqueID;                     // 0x00E8 (0x0014) [0x0000000000000000]               
	class APlayerReplicationInfo*                      PlayingOnBehalfOfPRI;                          // 0x0100 (0x0008) [0x0000000000000000]               
	float                                              NextSpawnTime;                                 // 0x0108 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameInfo.ExperienceProviderDefinitionOverride
// 0x0010
struct FExperienceProviderDefinitionOverride
{
	class UPoplarUnitTypeDefinition*                   UnitType;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UExperienceProviderDefinition*               OverrideExperienceProvDef;                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameInfo.LaneVariableStruct
// 0x000C
struct FLaneVariableStruct
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Value;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameInfo.PoplarSpawnerBucket
// 0x0010
struct FPoplarSpawnerBucket
{
	class TArray<class UIPoplarSpawner*>               Spawners;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGameInfo.PoplarUnitBucket
// 0x0018
struct FPoplarUnitBucket
{
	class UPoplarUnitTypeDefinition*                   UnitTypeDef;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class UIUnit*>                        Units;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGameInfo.MetaBucket
// 0x0050
struct FMetaBucket
{
	class UPoplarLaneDefinition*                       LaneDef;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       TeamDef;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class UMinionLaneTracker*                          MinionLaneTracker;                             // 0x0010 (0x0008) [0x0000000000000000]               
	struct FPoplarSpawnerBucket                        SpawnerBucket;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPointer>                      UnitBuckets;                                   // 0x0028 (0x0010) [0x0000000000001000] (CPF_Native)  
	int32_t                                            OpposingLaneNdx;                               // 0x0038 (0x0004) [0x0000000000000000]               
	class TArray<struct FLaneVariableStruct>           LaneVariables;                                 // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGameInfo.ServerStartupTelemetry
// 0x0040
struct FServerStartupTelemetry
{
	class TArray<struct FDouble>                       Times;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHadError : 1;                                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            ErrorEvent;                                    // 0x0014 (0x0001) [0x0000000000000000]               
	class FString                                      ErrorString;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bRequiredRestart : 1;                          // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      ZTicket;                                       // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGameInfoConstruct.GIDAlias
// 0x0020
struct FGIDAlias
{
	class FString                                      Path;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Alias;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGameInfoDefinition.DeathMessage
// 0x0010
struct FDeathMessage
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UPoplarMessageDefinition*                    DeathMessageDefinition;                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarGameInfoFrontend.TelemetryVoteData
// 0x0010
struct FTelemetryVoteData
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            VoteOptionId;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              VoteCastTime;                                  // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGameInfoFrontend.PendingCastVoteData
// 0x0010
struct FPendingCastVoteData
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            VoteOptionId;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasVoted : 1;                                 // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarGameInputEmulator.InputAxisState
// 0x0008
struct FInputAxisState
{
	float                                              Delta;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bGamepad : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           WasUsedThisFrame : 1;                          // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PoplarGame.PoplarGameInputEmulator.InputAxisUniqueKey
// 0x0010
struct FInputAxisUniqueKey
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       Key;                                           // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGlobalData.PostMatchDefLookupEntry
// 0x0018
struct FPostMatchDefLookupEntry
{
	class UPoplarPostMatchDefinition*                  Definition;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class FString>                        GameModeNames;                                 // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGlobals.PlayerStandInData
// 0x0010
struct FPlayerStandInData
{
	class APoplarPlayerReplicationInfo* PRI;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class APoplarPlayerStandIn* StandIn;                                       // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGlobals.PlayerStandInSet
// 0x00A0
struct FPlayerStandInSet
{
	struct FPlayerStandInData                          AssignedStandIns[0xA];                         // 0x0000 (0x00A0) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGlobals.PoplarQueuedLootSpawnRequest
// 0x00F0
struct FPoplarQueuedLootSpawnRequest
{
	struct FQueuedLootSpawnRequest                     BaseData;                                      // 0x0000 (0x00D0) [0x0000000000000000]               
	class UPoplarLootDropDefinition*                   LootDropDefinition;                            // 0x00D0 (0x0008) [0x0000000000000000]               
	class UPoplarUnitTypeDefinition*                   UnitTypeDef;                                   // 0x00D8 (0x0008) [0x0000000000000000]               
	class UPoplarTeamDefinition*                       TeamDef;                                       // 0x00E0 (0x0008) [0x0000000000000000]               
	class UPoplarLaneDefinition*                       LaneDef;                                       // 0x00E8 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarGlobals.PostMatchLoadingMovieData
// 0x0050
struct FPostMatchLoadingMovieData
{
	class FString                                      MoviePath;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MainMessagePath;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SupplementalMessagePath;                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TeamAScorePath;                                // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TeamBScorePath;                                // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGlobals.ModeSpecficLoadingMovieData
// 0x0040
struct FModeSpecficLoadingMovieData
{
	class FString                                      ModeName;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      VictoryMoviePath;                              // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DefeatMoviePath;                               // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MainMessagePath;                               // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarGlobals.MapSpecificLoadingMovieData
// 0x0064
struct FMapSpecificLoadingMovieData
{
	class FString                                      MapName;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MoviePath;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      MainMessagePath;                               // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SupplementalMessagePath;                       // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TeamAScorePath;                                // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TeamBScorePath;                                // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bRequiresVictory : 1;                          // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarGlobalsDefinition.TeamRelativeColorStruct
// 0x0044
struct FTeamRelativeColorStruct
{
	class FString                                      TeamRelativeColorName;                         // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FLinearColor                                TextColor;                                     // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                ShapeColor;                                    // 0x0020 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                MaterialColor;                                 // 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bDefaultAlliedColor : 1;                       // 0x0040 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDefaultEnemyColor : 1;                        // 0x0040 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct PoplarGame.PoplarGlobalsDefinition.TeamAnnouncerData
// 0x0010
struct FTeamAnnouncerData
{
	class UDialogSet*                                  DialogSet;                                     // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UGearboxDialogNameTag*                       NameTag;                                       // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarHighlightComponent.RunningHighlightState
// 0x002C
struct FRunningHighlightState
{
	class UPoplarHighlightDefinition* Highlight;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarTeamDefinition* InstigatingTeam;                               // 0x0008 (0x0008) [0x0000000000000000]               
	class APlayerReplicationInfo* InstigatingPlayer;                             // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            NumViewportsAtStartTime;                       // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           Paused : 1;                                    // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FadeRate;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              FadeLevel;                                     // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarHighlightComponent.RunningHighlightStack
// 0x0094
struct FRunningHighlightStack
{
	struct FRunningHighlightState                      Stack[0x3];                                    // 0x0000 (0x0090) [0x0000000000000000]               
	int32_t                                            StackTopIndex;                                 // 0x0090 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarHighlightComponent.RunningHighlightViewport
// 0x01C8
struct FRunningHighlightViewport
{
	struct FRunningHighlightStack                      StackChannels[0x3];                            // 0x0000 (0x01C8) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarHitReactionDefinition.PoplarHitReactionItem
// 0x0021
struct FPoplarHitReactionItem
{
	class TArray<struct FPoplarHitReactionConditionData> Conditions;                                    // 0x0000 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FPoplarHitReactionData>        Actions;                                       // 0x0010 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            Operator;                                      // 0x0020 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarHitReactionDefinition.PoplarHitReactionConditionData
// 0x0038
struct FPoplarHitReactionConditionData
{
	class UClass*                                      DamageSource;                                  // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDamageTypeDefinition*                       DamageTypeDefinition;                          // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            DamageTagsTest;                                // 0x0010 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FDamageTags                                 DamageTags;                                    // 0x0014 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FName>                         MatchedAnims;                                  // 0x0018 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bMatchedAnimsMirrored : 1;                     // 0x0028 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Conditions;                                    // 0x0030 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct PoplarGame.PoplarHitReactionDefinition.PoplarHitReactionData
// 0x0018
struct FPoplarHitReactionData
{
	uint32_t                                           bFront : 1;                                    // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bBack : 1;                                     // 0x0000 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bLeft : 1;                                     // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bRight : 1;                                    // 0x0000 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint8_t                                            DirectionReference;                            // 0x0004 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            SwingType;                                     // 0x0005 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class USpecialMoveDefinition*>        SpecialMoves;                                  // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarImageManager.ImageRequestData
// 0x0038
struct FImageRequestData
{
	class FString                                      ImageUrl;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTexture*                                    ImageTexture;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            ReadState;                                     // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            ImageLifespan;                                 // 0x0019 (0x0001) [0x0000000000000000]               
	int32_t                                            ImageSize;                                     // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                PlayerID;                                      // 0x0024 (0x0014) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarInputBindingGFxMovie.KeyBindInfo
// 0x0038
struct FKeyBindInfo
{
	struct FName                                       Tag;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       ActionName;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      Caption;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       CurrentKey;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            DisplayOrder;                                  // 0x0028 (0x0004) [0x0000000000000000]               
	class UGFxObject*                                  Object;                                        // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarProjectile.PoplarProjectileDefinitionData
// 0x0010
struct FPoplarProjectileDefinitionData
{
	class UPoplarProjectileDefinition*                 Definition;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarContentSkinDefinition*                Skin;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarManagedActorManager.ManagedActorOwnerEntry
// 0x0018
struct FManagedActorOwnerEntry
{
	class AActor*                                      Owner;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FManagedActorEntry>            ManagedActors;                                 // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarManagedActorManager.ManagedActorEntry
// 0x0018
struct FManagedActorEntry
{
	class UPoplarManagedActorDefinition*               Type;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class AActor*>                        Actors;                                        // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarSpectatorController.SpectatorFixedCameraView
// 0x002C
struct FSpectatorFixedCameraView
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     Location;                                      // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bHasBeenSet : 1;                               // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct PoplarGame.PoplarMapInfo.TeamFallbackCameraView
// 0x0010
struct FTeamFallbackCameraView
{
	class UPoplarTeamDefinition*                       TeamDefinition;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class ACameraActor*                                ViewPoint;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarMapManager.MinimapObjectGroup
// 0x0020
struct FMinimapObjectGroup
{
	class TArray<struct FMinimapObjectData>            ObjectData;                                    // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<int32_t>                              FreeIndices;                                   // 0x0010 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarMapManager.MinimapObjectData
// 0x0094
struct FMinimapObjectData
{
	struct FPoplarMinimapIconState                     IconState;                                     // 0x0000 (0x0038) [0x0000000000000000]               
	int32_t                                            MinimapObjectIDs[0x4];                         // 0x0038 (0x0010) [0x0000000000000000]               
	class UPoplarMinimapIconDefinition*                IconDefinition;                                // 0x0048 (0x0008) [0x0000000000000000]               
	class UObject*                                     IconSelectionKey;                              // 0x0050 (0x0008) [0x0000000000000000]               
	class UIMinimapObject*                             MO_Object;                                     // 0x0058 (0x0010) [0x0000000000000000] 
	class UIMinimapObject*                             MO_Interface;                                  // 0x0058 (0x0010) [0x0000000000000000]               
	class APoplarPlayerReplicationInfo*                PRI;                                           // 0x0068 (0x0008) [0x0000000000000000]               
	class AActor*                                      MOActor;                                       // 0x0070 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsActive : 1;                                 // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsPlayer : 1;                                 // 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUnitLocationRotationChanged : 1;              // 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bUnitIconChanged : 1;                          // 0x0078 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FVector2D                                   Velocity;                                      // 0x007C (0x0008) [0x0000000000000000]               
	struct FVector                                     LastLocation;                                  // 0x0084 (0x000C) [0x0000000000000000]               
	float                                              LastRepTime;                                   // 0x0090 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMapManager.MinimapObjectStaticData
// 0x0014
struct FMinimapObjectStaticData
{
	class UPoplarMinimapIconDefinition*                IconDefinition;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     IconSelectionKey;                              // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            TeamIndex;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMapManager.MinimapObjectDynamicData
// 0x000C
struct FMinimapObjectDynamicData
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMetagameGlobalsDefinition.MetaGameImplicitReward
// 0x0018
struct FMetaGameImplicitReward
{
	class FString                                      RewardName;                                    // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class USwfMovie*                                   TrophyIcon;                                    // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarMetagameGlobalsDefinition.ChallengeRewardIconInfo
// 0x0018
struct FChallengeRewardIconInfo
{
	class FString                                      IconName;                                      // 0x0000 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class USwfMovie*                                   Icon;                                          // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarMetagameGlobalsDefinition.ChallengeRewardDisplayNameInfo
// 0x0020
struct FChallengeRewardDisplayNameInfo
{
	class FString                                      Rewards;                                       // 0x0000 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class FString                                      DisplayTextFormat;                             // 0x0010 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarMetagameGlobalsDefinition.MetaGameTypeInfo
// 0x0038
struct FMetaGameTypeInfo
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class USwfMovie*                                   FallbackIconMovie;                             // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USwfMovie*                                   FallbackRewardModifierTrophyIconMovie;         // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      UnlockText;                                    // 0x0018 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      UnlockSoundEvent;                              // 0x0028 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarMetagameGlobalsDefinition.ExperienceCommandRankRestrictions
// 0x0018
struct FExperienceCommandRankRestrictions
{
	class FString                                      ExperienceTag;                                 // 0x0000 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	int32_t                                            MinimumCommandRank;                            // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            MaximumCommandRank;                            // 0x0014 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarMetaItemBundleDefinition.BundleVisibilityCriteria
// 0x0018
struct FBundleVisibilityCriteria
{
	uint8_t                                            OwnershipFlag;                                 // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<class FString>                        EntitlementMetaID;                             // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarMetaItemProbabilityDefinition.ItemProbability
// 0x000C
struct FItemProbability
{
	class UPoplarMetaItemDefinition*                   ItemToCreate;                                  // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Probability;                                   // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarMetaLoadoutDefinition.LoadoutSlotData
// 0x0008
struct FLoadoutSlotData
{
	uint8_t                                            MetaItemTypeForSlot;                           // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MetaLevelRequirement;                          // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarMetaPlayerReplicationInfo.MetaReplicationInfoInitializationData
// 0x0038
struct FMetaReplicationInfoInitializationData
{
	struct FUniqueNetId                                PlayerUniqueId;                                // 0x0000 (0x0014) [0x0000000000000000]               
	struct FPointer                                    MatchDocument;                                 // 0x0018 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    PlayerMetaData;                                // 0x0020 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    PlayerMatchDocument;                           // 0x0028 (0x0008) [0x0000000000001000] (CPF_Native)  
	class APoplarPlayerStateInfo*                      PlayerStateInfo;                               // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMetaPlayerReplicationInfo.ReplicatedCharacterSelection
// 0x000C
struct FReplicatedCharacterSelection
{
	class UPoplarMetaItemCharacterDefinition*          CharacterOwner;                                // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            LoadoutCount;                                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMissionObjectiveWaypointComponent.PoplarMissionObjectiveWaypointData
// 0x0010
struct FPoplarMissionObjectiveWaypointData
{
	class UPoplarMissionDefinition*                    Mission;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPoplarMissionObjectiveDefinition*           LinkedObjective;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarMissionTracker.ReplicatedWaypointData
// 0x0010
struct FReplicatedWaypointData
{
	class AActor*                                      WaypointActor;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarMissionObjectiveDefinition*           Objective;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarMissionTracker.PoplarMissionObjectiveUpdateData
// 0x0009
struct FPoplarMissionObjectiveUpdateData
{
	class UPoplarMissionObjectiveDefinition*           MissionObjective;                              // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            Event;                                         // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarOnlineClientPresenceService.PlayerPresenceData
// 0x0028
struct FPlayerPresenceData
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              HeartbeatTime;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RefreshTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bSuccessfulPost : 1;                           // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      CachedPresence;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPerkFamilyDefinition.PerkFunctionPool
// 0x0010
struct FPerkFunctionPool
{
	class TArray<struct FPerkPossibility>              Functions;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPerkFamilyDefinition.PerkPossibility
// 0x000C
struct FPerkPossibility
{
	class UPoplarPerkFunction*                         Function;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Probability;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarPerkFunction.TieredActivationData
// 0x0030
struct FTieredActivationData
{
	struct FAttributeInitializationData                ActivationCost;                                // 0x0000 (0x0020) [0x0000000000000001] (CPF_Edit)    
	class FString                                      ItemCardDescription;                           // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPerkProbabilityDefinition.PerkFamilyProbability
// 0x000C
struct FPerkFamilyProbability
{
	class UPoplarPerkFamilyDefinition*                 PerkFamily;                                    // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Probability;                                   // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarPerkProbabilityDefinition.RarityProbability
// 0x0018
struct FRarityProbability
{
	uint8_t                                            Rarity;                                        // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Probability;                                   // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              WearableProbability;                           // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPoplarPlayerWearableDefinitionList*         WearablesList;                                 // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarPickup.PickupMethodOverrideInfo
// 0x0005
struct FPickupMethodOverrideInfo
{
	uint32_t                                           bDoOverride : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            Method;                                        // 0x0004 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerClassDefinition.PoplarWeaponData
// 0x0014
struct FPoplarWeaponData
{
	struct FWeaponDefinitionData                       WeaponDefinitionData;                          // 0x0000 (0x0008) [0x0000000020000000]  CPF_Deprecated)
	class UPoplarWeaponTypeDefinition*                 Definition;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOffHand : 1;                                  // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDontAutoEquip : 1;                            // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct PoplarGame.PoplarPlayerManager.PendingUserStartupWork
// 0x0018
struct FPendingUserStartupWork
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEntitlementsUpdated : 1;                      // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReadProfile : 1;                              // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSparkInitialized : 1;                         // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                            SparkInitializedResult;                        // 0x000C (0x0001) [0x0000000000000000]               
	class UGearboxData*                                SparkInitializedData;                          // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerNameIdentifierDefinition.PoplarStatSpecification
// 0x0010
struct FPoplarStatSpecification
{
	int32_t                                            AttackStat;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SkillsStat;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DefenseStat;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DifficultyStat;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.WillowPlayerPawnOld.WeatherSystemEffects
// 0x0010
struct FWeatherSystemEffects
{
	class UParticleSystem*                             WeatherSystemTemplate;                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             ScreenEffectsTemplate;                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.WillowPlayerPawnOld.AttachmentData
// 0x0029
struct FAttachmentData
{
	class AActor*                                      AttachmentBase;                                // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       AttachmentBaseBoneName;                        // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     AttachmentRelativeOffset;                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    AttachmentRelativeRotation;                    // 0x001C (0x000C) [0x0000000000000000]               
	uint8_t                                            AttachmentPhysicsMode;                         // 0x0028 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.WillowPlayerPawnOld.SpeedTravelData
// 0x0005
struct FSpeedTravelData
{
	float                                              OriginLeaveTime;                               // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            OriginRegion;                                  // 0x0004 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerReplicationInfo.ManagedActorCountData
// 0x000C
struct FManagedActorCountData
{
	class UPoplarManagedActorDefinition*               Type;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerReplicationInfo.PerKillVictimData
// 0x0008
struct FPerKillVictimData
{
	int32_t                                            NumKills;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumUnansweredKills;                            // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerStandInDefinition.PlayerStandInState
// 0x0024 (0x0008 - 0x002C)
struct FPlayerStandInState : FSpecializedBehaviorEvent
{
	uint32_t                                           bDelayLoading : 1;                             // 0x0008 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bResetRotation : 1;                            // 0x0008 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bBlockExternalSM : 1;                          // 0x0008 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bResetAudio : 1;                               // 0x0008 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	float                                              NormalizedCharacterHeightOverride;             // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpecialMoveDefinition*                      StateSM;                                       // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FPlayerStandInTransitionState> TransitionStates;                              // 0x0018 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bResetParticles : 1;                           // 0x0028 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarPlayerStandInDefinition.PlayerStandInTransitionState
// 0x0010
struct FPlayerStandInTransitionState
{
	struct FName                                       NextState;                                     // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       TransitionState;                               // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarPlayerStartStrategy.TeamAssignedStart
// 0x0018
struct FTeamAssignedStart
{
	class UPoplarTeamDefinition*                       TeamDefinition;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FAssignedStart>                AssignedStarts;                                // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPlayerStartStrategy.AssignedStart
// 0x0010
struct FAssignedStart
{
	class APoplarPlayerStart*                          PlayerStart;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class APoplarPlayerStateInfo*                      PSI;                                           // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerStateInfo.PlayerDeathRecapData
// 0x0308
struct FPlayerDeathRecapData
{
	struct FCombatantData                              Killer;                                        // 0x0000 (0x0090) [0x0000000000000000]               
	int32_t                                            KillingActionIndex;                            // 0x0090 (0x0004) [0x0000000000000000]               
	float                                              ExcessDamage;                                  // 0x0094 (0x0004) [0x4000000000000000]               
	struct FCombatantData                              Assisters[0x4];                                // 0x0098 (0x0240) [0x0000000000000000]               
	int32_t                                            FlashCount;                                    // 0x02D8 (0x0004) [0x0000000000000000]               
	float                                              TotalDamageRecorded;                           // 0x02DC (0x0004) [0x4000000000000000]               
	float                                              TotalTimeRecorded;                             // 0x02E0 (0x0004) [0x4000000000000000]               
	float                                              TotalDamageReceivedFromKiller;                 // 0x02E4 (0x0004) [0x4000000000000000]               
	float                                              TotalPhysicalDamageReceivedFromKiller;         // 0x02E8 (0x0004) [0x4000000000000000]               
	float                                              TotalShieldDamageReceivedFromKiller;           // 0x02EC (0x0004) [0x4000000000000000]               
	float                                              TotalTrueDamageReceivedFromKiller;             // 0x02F0 (0x0004) [0x4000000000000000]               
	float                                              TotalPhysicalDamageReceived;                   // 0x02F4 (0x0004) [0x4000000000000000]               
	float                                              TotalTrueDamageReceived;                       // 0x02F8 (0x0004) [0x4000000000000000]               
	float                                              TotalShieldDamageReceived;                     // 0x02FC (0x0004) [0x4000000000000000]               
	float                                              TotalHealingDamageReceived;                    // 0x0300 (0x0004) [0x4000000000000000]               
	int32_t                                            CurrencyLostOnDeath;                           // 0x0304 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerStateInfo.PlayerRecentDamageTakenEventData
// 0x0016
struct FPlayerRecentDamageTakenEventData
{
	class APawn*                                       Instigator;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              SeverityPercent;                               // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            Flags;                                         // 0x000C (0x0001) [0x0000000000000000]               
	int32_t                                            DamageTags;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            RepDirtyCounter;                               // 0x0014 (0x0001) [0x1000000000000000]               
	uint8_t                                            MyDamageType;                                  // 0x0015 (0x0001) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerStateInfo.OutstandingActivityFeedData
// 0x0010
struct FOutstandingActivityFeedData
{
	class UPoplarActivityFeedDefinition*               ActivityFeedDef;                               // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ChallengeLevelTargetValue;                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            ChallengeLevelCompleted;                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPlayerTestDefinition.NamedTest
// 0x0018
struct FNamedTest
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UGameTestDefinition*                         Test;                                          // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarPostMatchGFxMovie.PostMatchExperienceClips
// 0x0040
struct FPostMatchExperienceClips
{
	class UGFxObject*                                  TargetSliderClip;                              // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  TargetSliderDeltaClip;                         // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  TargetLevelUpClip;                             // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  TargetLevelClip;                               // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  TargetLevelDescClip;                           // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  TargetLevelMaxRankClip;                        // 0x0028 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  TargetSliderXPRemainingClip;                   // 0x0030 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  TargetSliderXPClip;                            // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPostMatchGFxMovie.PostMatchReward
// 0x0084
struct FPostMatchReward
{
	class FString                                      MetaID;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Name;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Info;                                          // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      IconPath;                                      // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UnlockSoundEvent;                              // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            EarnedCurrencyAmount;                          // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            MetaXPAmount;                                  // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            CharacterXPAmount;                             // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            ReputationPointAmount;                         // 0x006C (0x0004) [0x0000000000000000]               
	int32_t                                            TokensRefunded;                                // 0x0070 (0x0004) [0x0000000000000000]               
	struct FDouble                                     BoosterEndTime;                                // 0x0078 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsPerk : 1;                                   // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarPostMatchGFxMovie.PostMatchPlayerResults
// 0x01A8
struct FPostMatchPlayerResults
{
	struct FPlayerMatchResultData                      MatchResult;                                   // 0x0000 (0x0138) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPostMatchReward>              MatchRewards;                                  // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPostMatchReward>              XPMatchRewards;                                // 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPostMatchReward>              CharXPMatchRewards;                            // 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPostMatchReward>              ECMatchRewards;                                // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPostMatchReward>              CommandMatchRewards;                           // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPostMatchReward>              CharacterRewards;                              // 0x0188 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPostMatchReward>              MapRewards;                                    // 0x0198 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPostMatchGFxMovie.PostMatchExperienceDisplay
// 0x0038
struct FPostMatchExperienceDisplay
{
	class TArray<struct FPostMatchExperienceSliderInfo> SliderInfos;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CurrentSliderInfoIndex;                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              SliderTimer;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUpdateSlider : 1;                             // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FLevelXPThreshold>             LevelXPThresholdArray;                         // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MaxPossibleLevel;                              // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsGainingXp : 1;                              // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsCharSlider : 1;                             // 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PoplarGame.PoplarPostMatchGFxMovie.PostMatchXpPlayerData
// 0x0234
struct FPostMatchXpPlayerData
{
	class APoplarPlayerController*                     PPC;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      PlayerHTMLName;                                // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPostMatchPlayerResults                     PlayerResults;                                 // 0x0018 (0x01A8) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPostMatchExperienceDisplay                 MetaSliderInfo;                                // 0x01C0 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPostMatchExperienceDisplay                 CharSliderInfo;                                // 0x01F8 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasSeenFullTrain : 1;                         // 0x0230 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarPostMatchGFxMovie.PostMatchExperienceSliderInfo
// 0x0020
struct FPostMatchExperienceSliderInfo
{
	float                                              Duration;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            StartAmount;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Amount;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            EndAmount;                                     // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            StartSliderAmount;                             // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            SliderAmount;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            DeltaAmount;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            DisplayedLevel;                                // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPostMatchGFxMovie.PostMatchReplayData
// 0x04A8
struct FPostMatchReplayData
{
	struct FsPostMatchData                             ReplayPostMatchData;                           // 0x0000 (0x0370) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPlayerMatchResultData                      ReplayPlayerMatchResults;                      // 0x0370 (0x0138) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPostMatchGFxMovie.PostMatchCharacterUnlockInfo
// 0x0038
struct FPostMatchCharacterUnlockInfo
{
	class FString                                      CharacterId;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      OwnerName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PendingRequestId;                              // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPoplarPlayerClassDefinition*                LoadedClass;                                   // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarPostMatchGFxMovie.MetaLevelUnlock
// 0x0030
struct FMetaLevelUnlock
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      IconPath;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarRecipeDefinition.RecipePerkInputRequirements
// 0x0020
struct FRecipePerkInputRequirements
{
	class UPoplarPerkFamilyDefinition*                 RequiredPerkFamily;                            // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            MinimumRarityLevel;                            // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPoplarFactionDefinition*                    RequiredFaction;                               // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPoplarCharacterRoleDefinition*              RequiredPlayerRoleArchetype;                   // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarRecipeUpgradeDefinition.RecipeOutputUpgrades
// 0x0028
struct FRecipeOutputUpgrades
{
	uint32_t                                           bBurnThisCard : 1;                             // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UPoplarPerkFamilyDefinition*                 UpgradedPerkFamily;                            // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            UpgradedRarityLevel;                           // 0x0010 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPoplarFactionDefinition*                    UpgradedFaction;                               // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPoplarCharacterRoleDefinition*              UpgradedPlayerRoleArchetype;                   // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarScoreboardGFxMovie.ScoreboardTeamSumStats
// 0x0010
struct FScoreboardTeamSumStats
{
	class TArray<struct FStatInfo>                     StatsToCompare;                                // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarScoreboardGFxMovie.StatInfo
// 0x0018
struct FStatInfo
{
	int32_t                                            Value;                                         // 0x0000 (0x0004) [0x0000000000100000]               
	class FString                                      Name;                                          // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarScoreboardGFxMovie.PlayerDetailInfo
// 0x0080
struct FPlayerDetailInfo
{
	int32_t                                            LastDisplayRowIndex;                           // 0x0000 (0x0004) [0x0000000000102000] (CPF_Transient)
	class FString                                      PlayerNameHTML;                                // 0x0008 (0x0010) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           bIsPlayerDead : 1;                             // 0x0018 (0x0004) [0x0000000000102000] [0x00000001] (CPF_Transient)
	uint32_t                                           bIsDisconnected : 1;                           // 0x0018 (0x0004) [0x0000000000102000] [0x00000002] (CPF_Transient)
	uint32_t                                           bIsBot : 1;                                    // 0x0018 (0x0004) [0x0000000000102000] [0x00000004] (CPF_Transient)
	uint32_t                                           bIsAFK : 1;                                    // 0x0018 (0x0004) [0x0000000000102000] [0x00000008] (CPF_Transient)
	class UPlayerNameIdentifierDefinition*             CharacterNameIdDef;                            // 0x0020 (0x0008) [0x0000000000102000] (CPF_Transient)
	float                                              RespawnTimeRemaining;                          // 0x0028 (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              InitialRespawnTime;                            // 0x002C (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              BleedOutTimeRemaining;                         // 0x0030 (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              BleedOutPercentRemaining;                      // 0x0034 (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              ReviveProgress;                                // 0x0038 (0x0004) [0x0000000000102000] (CPF_Transient)
	int32_t                                            ExpLevel;                                      // 0x003C (0x0004) [0x0000000000102000] (CPF_Transient)
	int32_t                                            PingBars;                                      // 0x0040 (0x0004) [0x0000000000102000] (CPF_Transient)
	uint32_t                                           bIsMuted : 1;                                  // 0x0044 (0x0004) [0x0000000000102000] [0x00000001] (CPF_Transient)
	uint32_t                                           bIsTalking : 1;                                // 0x0044 (0x0004) [0x0000000000102000] [0x00000002] (CPF_Transient)
	uint32_t                                           bWasTalking : 1;                               // 0x0044 (0x0004) [0x0000000000102000] [0x00000004] (CPF_Transient)
	struct FUniqueNetId                                UniqueId;                                      // 0x0048 (0x0014) [0x0000000000102000] (CPF_Transient)
	uint32_t                                           bUpdateComparisonStats : 1;                    // 0x005C (0x0004) [0x0000000000102000] [0x00000001] (CPF_Transient)
	class TArray<int32_t>                              RowStatValues;                                 // 0x0060 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              CompareStatValues;                             // 0x0070 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarScorePipeline.ScoreEventSummary
// 0x000C (0x00B8 - 0x00C4)
struct FScoreEventSummary : FEventSummary
{
	int32_t                                            ScoreForKiller;                                // 0x00B8 (0x0004) [0x0000000000000000]               
	int32_t                                            ScoreForAssisters;                             // 0x00BC (0x0004) [0x0000000000000000]               
	int32_t                                            NumAssisters;                                  // 0x00C0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarScrollingList.DataProviderInfo
// 0x0014
struct FDataProviderInfo
{
	class UIPoplarScrollingListDataProvider*           DataProvider_Object;                           // 0x0000 (0x0010) [0x0000000000000000] 
	class UIPoplarScrollingListDataProvider*           DataProvider_Interface;                        // 0x0000 (0x0010) [0x0000000000000000]               
	int32_t                                            SelectedIndex;                                 // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarScrollingListDataProviderOptionsBase.DescriptionEntry
// 0x0018
struct FDescriptionEntry
{
	int32_t                                            EventId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Description;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarSeqAct_CharacterLayout.CharacterLayoutKey
// 0x0008
struct FCharacterLayoutKey
{
	int32_t                                            TeamSize;                                      // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Time;                                          // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarShop3GFxMovie.SkillDisplayData
// 0x0050
struct FSkillDisplayData
{
	class UGFxObject*                                  Title;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Body;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Button;                                        // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  UpgradeArrow;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class FString                                      CachedState_UpgradeArrow;                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UGFxObject*                                  SkillIcon;                                     // 0x0030 (0x0008) [0x0000000000000000]               
	class UPoplarSkillDefinition*                      Skill;                                         // 0x0038 (0x0008) [0x0000000000000000]               
	class FString                                      RawSkillDesc;                                  // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarShop3StorePanelGFxObject.ShopAugData
// 0x0098
struct FShopAugData
{
	class UGFxObject*                                  GFxItem;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Amount;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Currency;                                      // 0x0010 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  Flourish;                                      // 0x0018 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  FocusIndicator;                                // 0x0020 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  LightningIndicator;                            // 0x0028 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  BreadcrumbIndicator;                           // 0x0030 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  LockedOverlay;                                 // 0x0038 (0x0008) [0x0000000000000000]               
	struct FPointer                                    AugData;                                       // 0x0040 (0x0008) [0x0000000000001000] (CPF_Native)  
	class FString                                      CachedState_GFxItem;                           // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CachedState_FocusIndicator;                    // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CachedState_LightningIndicator;                // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CachedState_BreadcrumbIndicator;               // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CachedState_LockedOverlay;                     // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarSkelControl_AttributeAnimatedBone.AttributeBoneRotationState
// 0x0010
struct FAttributeBoneRotationState
{
	uint8_t                                            AnimationType;                                 // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bScaleExtentByAttribute : 1;                   // 0x0004 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bScaleMaxSpeedByAttribute : 1;                 // 0x0004 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bScaleAccelerationByAttribute : 1;             // 0x0004 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	float                                              MaxSpeed;                                      // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Acceleration;                                  // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarSkelControl_AttributeAnimatedBone.AttributeBoneTranslationState
// 0x0010
struct FAttributeBoneTranslationState
{
	uint8_t                                            AnimationType;                                 // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bScaleExtentByAttribute : 1;                   // 0x0004 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bScaleMaxSpeedByAttribute : 1;                 // 0x0004 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bScaleAccelerationByAttribute : 1;             // 0x0004 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	float                                              MaxSpeed;                                      // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Acceleration;                                  // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarSkelControl_AttributeAnimatedBone.AttributeBoneScaleState
// 0x0010
struct FAttributeBoneScaleState
{
	uint8_t                                            AnimationType;                                 // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bScaleExtentByAttribute : 1;                   // 0x0004 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bScaleMaxSpeedByAttribute : 1;                 // 0x0004 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bScaleAccelerationByAttribute : 1;             // 0x0004 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	float                                              MaxSpeed;                                      // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Acceleration;                                  // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarSkill.BuffSkillData
// 0x0018
struct FBuffSkillData
{
	class UPoplarBuffDefinition*                       BuffDefinition;                                // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      BuffInstigator;                                // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ServerSideBuffGUID;                            // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PerkIndex;                                     // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarSkillDefinition.SkillAssistEventData
// 0x0010 (0x0008 - 0x0018)
struct FSkillAssistEventData : FSpecializedBehaviorEvent
{
	class TArray<class UPoplarSkillAssistEventConstraints*> Constraints;                                   // 0x0008 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct PoplarGame.PoplarSkillEffectManager.DeferredBuffSkillActivationData
// 0x0018 (0x0040 - 0x0058)
struct FDeferredBuffSkillActivationData : FDeferredSkillActivationData
{
	struct FBuffSkillData                              BuffData;                                      // 0x0040 (0x0018) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct PoplarGame.PoplarSkinData_Audio.PoplarSkinAkEventSwap
// 0x0010
struct FPoplarSkinAkEventSwap
{
	class UAkEvent*                                    OldAkEvent;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    NewAkEvent;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarSkinData_Audio.PoplarSkinFoleyAccessorySwap
// 0x004C
struct FPoplarSkinFoleyAccessorySwap
{
	class UAkEvent*                                    OldAccessoryAkEvent;                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    AccessoryFoleyAkEvent;                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              AccessoryVolume;                               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AccessoryPitch;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    LoopStartAkEvent;                              // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FVector>                       CustomRelativeLocations;                       // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MaxAudibleAttenuationDistanceFraction;         // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UAkEvent*>                      AdditionalAkEvents;                            // 0x0038 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              CullVolumeOffset;                              // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarSpecialMove_Melee.SMMeleeHitData
// 0x0010
struct FSMMeleeHitData
{
	class USpecialMove_FirstPerson*                    FirstPersonSM;                                 // 0x0000 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class USpecialMove_WeaponAction*                   ThirdPersonSM;                                 // 0x0008 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct PoplarGame.PoplarSwitchPadSpawner.NumPlayerSpawnConstraint
// 0x0024
struct FNumPlayerSpawnConstraint
{
	class ASpawnPoint*                                 SpawnPoint;                                    // 0x0000 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	uint32_t                                           bSpawnIfNumPlayers1 : 1;                       // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSpawnIfNumPlayers2 : 1;                       // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bSpawnIfNumPlayers3 : 1;                       // 0x0008 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bSpawnIfNumPlayers4 : 1;                       // 0x0008 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bSpawnIfNumPlayers5 : 1;                       // 0x0008 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	class TArray<class AActor*>                        AssociatedActors;                              // 0x0010 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bIsInUse : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarTeamInfo.UI_PVEStateValues
// 0x006C
struct FUI_PVEStateValues
{
	int32_t                                            CurrentState;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            BossMode;                                      // 0x0004 (0x0001) [0x0000000000000000]               
	int32_t                                            ShardGoal;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentShards;                                 // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            CountdownTime;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            CachedCountdownStartTime;                      // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            ShardResult;                                   // 0x0018 (0x0001) [0x0000000000000000]               
	uint32_t                                           bShowCountdownText : 1;                        // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShowDanger : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bHideTheShardBar : 1;                          // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bStartedCountdown : 1;                         // 0x001C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bShardMissionComplete : 1;                     // 0x001C (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              HealthOverrideValue;                           // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ProgressOverrideValue;                         // 0x0024 (0x0004) [0x0000000000000000]               
	class FString                                      NameOverrideValue;                             // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bSetNameOverrideValue : 1;                     // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUsingOverrides : 1;                           // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bPlayEscortVsBossOutro : 1;                    // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            DefenseState;                                  // 0x003C (0x0004) [0x0000000000000000]               
	float                                              DefenseWaveTimeLeft;                           // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            DefenseProgress;                               // 0x0044 (0x0004) [0x0000000000000000]               
	class FString                                      DefenseBarString;                              // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DefenseWaveStartsInString;                     // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bDefenseBarVisible : 1;                        // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceBarReset : 1;                            // 0x0068 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct PoplarGame.PoplarTeamInfo.UI_PVETrackedUnitInfo
// 0x0014
struct FUI_PVETrackedUnitInfo
{
	int32_t                                            UnitIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              CurHealthAlpha;                                // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              CurShieldAlpha;                                // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              CurOvershieldAlpha;                            // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasShield : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasOvershield : 1;                            // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsBoss : 1;                                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsDead : 1;                                   // 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bInvulnerable : 1;                             // 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct PoplarGame.PoplarTeamInfo.UI_PVECurrentTeamState
// 0x009C
struct FUI_PVECurrentTeamState
{
	struct FUI_PVEStateValues                          Values;                                        // 0x0000 (0x0070) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TrackedPawnsNum;                               // 0x0070 (0x0004) [0x0000000000000000]               
	struct FUI_PVETrackedUnitInfo                      TrackedPawns[0x2];                             // 0x0074 (0x0028) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTeamInfo.RespawnInfo
// 0x0014
struct FRespawnInfo
{
	class APoplarPlayerStateInfo*                      DeadGuy;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              InitialRespawnTicks;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              CurRespawnTicks;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              RespawnTickRate;                               // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTeamInfo.TrackedEnemyPlayerStruct
// 0x0010
struct FTrackedEnemyPlayerStruct
{
	class APawn*                                       EnemyPlayer;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TimeStampSeen;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bVisible : 1;                                  // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct PoplarGame.PoplarTeamInfo.TeamStatData
// 0x000C
struct FTeamStatData
{
	int32_t                                            NumTeamAssists;                                // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumTeamPlayerKills;                            // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            NumTeamPlayerDeaths;                           // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTeamInfo.UI_PVEBehaviorToInfoMessage
// 0x0080
struct FUI_PVEBehaviorToInfoMessage
{
	struct FUI_PVEStateValues                          Values;                                        // 0x0000 (0x0070) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     Units[0x2];                                    // 0x0070 (0x0010) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.PoplarTestMapsListDefinition.PoplarTestMapsListDatum
// 0x0038
struct FPoplarTestMapsListDatum
{
	uint32_t                                           bTournamentMode : 1;                           // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UClass*                                      GameInfoClass;                                 // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       GameInfoName;                                  // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      MapDisplayName;                                // 0x0018 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FName                                       MapName;                                       // 0x0028 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            WarmupTime;                                    // 0x0030 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bRankedPlay : 1;                               // 0x0034 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarUnitTypeDefinition.BuffTagImmunity
// 0x0008
struct FBuffTagImmunity
{
	uint32_t                                           bImmuneTo_BUFFTAG_Good : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Bad : 1;                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Stun : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Slow : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Immobilize : 1;              // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Silence : 1;                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Daze : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Fear : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Charm : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_ForceMove : 1;               // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Provoke : 1;                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Blind : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_HealthDrain : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_HealthRegen : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_ManaDrain : 1;               // 0x0000 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_ManaRegen : 1;               // 0x0000 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_ArmorIncrease : 1;           // 0x0000 (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_ArmorReduce : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_AttackPowerIncrease : 1;     // 0x0000 (0x0004) [0x0000000000000001] [0x00040000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_AttackPowerDecrease : 1;     // 0x0000 (0x0004) [0x0000000000000001] [0x00080000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_SkillPowerIncrease : 1;      // 0x0000 (0x0004) [0x0000000000000001] [0x00100000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_SkillPowerDecrease : 1;      // 0x0000 (0x0004) [0x0000000000000001] [0x00200000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_AttackSpeedIncrease : 1;     // 0x0000 (0x0004) [0x0000000000000001] [0x00400000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_AttackSpeedDecrease : 1;     // 0x0000 (0x0004) [0x0000000000000001] [0x00800000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_ReloadSpeedIncrease : 1;     // 0x0000 (0x0004) [0x0000000000000001] [0x01000000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_ReloadSpeedDecrease : 1;     // 0x0000 (0x0004) [0x0000000000000001] [0x02000000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_ElementalResistIncrease : 1; // 0x0000 (0x0004) [0x0000000000000001] [0x04000000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_ElementalResistDecrease : 1; // 0x0000 (0x0004) [0x0000000000000001] [0x08000000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_MaxHealthIncrease : 1;       // 0x0000 (0x0004) [0x0000000000000001] [0x10000000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_MaxManaIncrease : 1;         // 0x0000 (0x0004) [0x0000000000000001] [0x20000000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_MovementSpeedIncrease : 1;   // 0x0000 (0x0004) [0x0000000000000001] [0x40000000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Shield : 1;                  // 0x0000 (0x0004) [0x0000000000000001] [0x80000000] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Stealth : 1;                 // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Jamming : 1;                 // 0x0004 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bImmuneTo_BUFFTAG_Wound : 1;                   // 0x0004 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct PoplarGame.PoplarWeapon.PoplarWeaponDefinitionData
// 0x0010
struct FPoplarWeaponDefinitionData
{
	class UPoplarWeaponTypeDefinition*                 Definition;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class UPoplarContentSkinDefinition*                Skin;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct PoplarGame.RankedPlayGlobalsDefinition.RankedTierLevelData
// 0x0018
struct FRankedTierLevelData
{
	class FString                                      LevelName;                                     // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              MinimumCSRValue;                               // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaximumCSRValue;                               // 0x0014 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.RankedPlayGlobalsDefinition.RankedTierData
// 0x0094
struct FRankedTierData
{
	class FString                                      TierName;                                      // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FRankedTierLevelData                        TierLevels[0x5];                               // 0x0010 (0x0078) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	float                                              KValue;                                        // 0x0088 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CSRDecayValue;                                 // 0x008C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MatchmakingCSRTolerance;                       // 0x0090 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.RankedPlayGlobalsDefinition.RankedSeasonData
// 0x0030
struct FRankedSeasonData
{
	class FString                                      SeasonName;                                    // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      SeasonDescription;                             // 0x0010 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              NumPlacementMatchWinsRequired;                 // 0x0020 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           IsSeasonActive : 1;                            // 0x0024 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           IsSeasonVisible : 1;                           // 0x0024 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class URankedSeasonStatDimensionValueDefinition*   StatDimensionValueDef;                         // 0x0028 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.RankedPlayGlobalsDefinition.RankedDecayData
// 0x0008
struct FRankedDecayData
{
	float                                              NumDaysBeforeConsideredIdle;                   // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              NumHoursAfterIdleBeforeApplyingDecayPenalty;   // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.ServerLookupDefinition.FamilyPair
// 0x0018
struct FFamilyPair
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UPoplarPerkFamilyDefinition*                 Family;                                        // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.StarRatingMapDefinition.StarDifficulyMode
// 0x0018
struct FStarDifficulyMode
{
	class UDifficultyStatDimensionValueDefinition*     DifficultyDimension;                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FStarHardcoreSetting>          HardcoreSettings;                              // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.StarRatingMapDefinition.StarHardcoreSetting
// 0x0018
struct FStarHardcoreSetting
{
	class UHardcoreStatDimensionValueDefinition*       HardcoreDimension;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FStarRatingScores>             Scores;                                        // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.StarRatingMapDefinition.StarRatingScores
// 0x0008
struct FStarRatingScores
{
	uint8_t                                            StarRating;                                    // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ScoreValue;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.StatGlobalsDefinition.BestStatReportingSetting
// 0x000C
struct FBestStatReportingSetting
{
	class UStatDefinition*                             BaseStat;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           RequireCharacter : 1;                          // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           RequireDifficulty : 1;                         // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           RequireGameMode : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           RequireHardcoreMode : 1;                       // 0x0008 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           RequireLevel : 1;                              // 0x0008 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           RequireFaction : 1;                            // 0x0008 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           RequireTeamSize : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           RequireRole : 1;                               // 0x0008 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           RequireSeason : 1;                             // 0x0008 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
};

// ScriptStruct PoplarGame.StatGlobalsDefinition.StarRatingStatMapping
// 0x0010
struct FStarRatingStatMapping
{
	uint8_t                                            StarRating;                                    // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UStatDefinition*                             StarRatingStat;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct PoplarGame.PoplarPlayerWearableDefinition.PlayerWearableMeshData
// 0x0020
struct FPlayerWearableMeshData
{
	class UPoplarPlayerClassIdentifierDefinition*      PlayerClassDef;                                // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            OverrideAttachmentTargetMesh;                  // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FPlayerWearableMeshDrawData>   MeshDrawData;                                  // 0x0010 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPlayerWearableDefinition.PlayerWearableMeshDrawData
// 0x0028
struct FPlayerWearableMeshDrawData
{
	struct FName                                       OverrideAttachmentPointName;                   // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     RelativeLocation;                              // 0x0008 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FRotator                                    RelativeRotation;                              // 0x0014 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RelativeScale;                                 // 0x0020 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            OverrideMaterialIndex;                         // 0x0024 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarPlayerWearableDefinition.PlayerWearableParticleData
// 0x0020
struct FPlayerWearableParticleData
{
	class UPoplarPlayerClassIdentifierDefinition*      PlayerClassDef;                                // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            OverrideAttachmentTargetMesh;                  // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FPlayerWearableMeshDrawData>   ParticleDrawData;                              // 0x0010 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct PoplarGame.PoplarPlayerWearableDefinition.StandardWearableParticleData
// 0x0010
struct FStandardWearableParticleData
{
	class UParticleSystem*                             WearableParticle;                              // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AttachmentPointName;                           // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarPlayerWearableDefinition.StandardWearableMeshData
// 0x001C
struct FStandardWearableMeshData
{
	class UStaticMesh*                                 WearableMesh;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AttachmentPointName;                           // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          OverrideMaterial;                              // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            OverrideMaterialIndex;                         // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct PoplarGame.PoplarPlayerWearableDefinition.PlayerWearablParticleDrawData
// 0x001C
struct FPlayerWearablParticleDrawData
{
	struct FVector                                     RelativeLocation;                              // 0x0000 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FRotator                                    RelativeRotation;                              // 0x000C (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RelativeScale;                                 // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
