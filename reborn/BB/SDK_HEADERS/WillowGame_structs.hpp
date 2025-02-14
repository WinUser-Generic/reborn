/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: WillowGame_structs.hpp
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

// ScriptStruct WillowGame.Action_SwoopAttack.SwoopAttackData
// 0x0008
struct FSwoopAttackData
{
	uint32_t                                           bTriggered : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCacheTargetLocation : 1;                      // 0x0000 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	float                                              Distance;                                      // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.ActionSkill.ActionSkillCustomEventReplicationData
// 0x000C
struct FActionSkillCustomEventReplicationData
{
	uint8_t                                            EventCountForReplication;                      // 0x0000 (0x0001) [0x0000000000000000]               
	struct FName                                       EventName;                                     // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.ActionSkill.CachedWeaponInfo
// 0x0028
struct FCachedWeaponInfo
{
	int32_t                                            CachedClipSize;                                // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            CachedAmmoInClip;                              // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            CachedAmmoNotInClip;                           // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           CachedWeaponIsReloading : 1;                   // 0x000C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UWeaponTypeDefinition*                       CachedWeaponTypeDef;                           // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	class USwfMovie*                                   CachedWeaponTypeDLCClip;                       // 0x0018 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            IsReloadIconDisplayed;                         // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            IsInteractionIconDisplayed;                    // 0x0024 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct WillowGame.WillowCharacterClassDefinition.AttributeCategory
// 0x0020
struct FAttributeCategory
{
	class FString                                      Category;                                      // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FAttributeBaseValueData>       Attributes;                                    // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.InteractionIconDefinition.InteractionIconWithOverrides
// 0x001C
struct FInteractionIconWithOverrides
{
	class UInteractionIconDefinition*                  IconDef;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UInteractionIconDefinition*                  OverrideIconDef;                               // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bOverrideIcon : 1;                             // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverrideAction : 1;                           // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverrideText : 1;                             // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                            bCostsToUse;                                   // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            CostsCurrencyType;                             // 0x0015 (0x0001) [0x0000000000000000]               
	int32_t                                            CostsAmount;                                   // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.IUsable.UseActionData
// 0x0098
struct FUseActionData
{
	struct FAttributeInitializationData                Duration;                                      // 0x0000 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                UseRate;                                       // 0x0020 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                DecayRate;                                     // 0x0040 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                MultiUserUseScale;                             // 0x0060 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bHoldToUse : 1;                                // 0x0080 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bResetProgressWhenInterrupted : 1;             // 0x0080 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bInterruptWhenDamaged : 1;                     // 0x0080 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bDisplayProgressBar : 1;                       // 0x0080 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bAllowMultipleUsers : 1;                       // 0x0080 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           bCostsToUse : 1;                               // 0x0080 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	float                                              CancelUseRadius;                               // 0x0084 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CancelUseAngle;                                // 0x0088 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        CancelExpression;                              // 0x0090 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct WillowGame.IUsable.UseActionState
// 0x00A8
struct FUseActionState
{
	struct FUseActionData                              Data;                                          // 0x0000 (0x0098) [0x0000000000000000]               
	uint32_t                                           bManagedByUsable : 1;                          // 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                     // 0x009C (0x0004) [0x0000000000000000]               
	float                                              UsedTime;                                      // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              ResourceConsumedRemainder;                     // 0x00A4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.IUsable.ClientUseActionState
// 0x0010
struct FClientUseActionState
{
	float                                              Duration;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Rate;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StartOffset;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            UsedPct;                                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AIPawnPlaythroughData
// 0x0070
struct FAIPawnPlaythroughData
{
	int32_t                                            PlayThrough;                                   // 0x0000 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class FString                                      DisplayName;                                   // 0x0008 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<struct FAITransformedName>            TransformedNames;                              // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UBehaviorBase*>                 OnSpawnCustomizations;                         // 0x0028 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<struct FAttributeBaseValueData>       AttributeStartingValues;                       // 0x0038 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UItemPoolListDefinition*>       CustomItemPoolIncludedLists;                   // 0x0048 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FItemPoolInfo>                 CustomItemPoolList;                            // 0x0058 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UMaterialInstance*                           MeshMaterial;                                  // 0x0068 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AITransformedName
// 0x0020
struct FAITransformedName
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      TransformedName;                               // 0x0008 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FName                                       TransformedKillStat;                           // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.ItemPool.ItemPoolInfo
// 0x0028
struct FItemPoolInfo
{
	class UItemPoolDefinition*                         ItemPool;                                      // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                PoolProbability;                               // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AIPawnGradeModifierData
// 0x0070
struct FAIPawnGradeModifierData
{
	class AWillowPawn* CustomAIPawnArchetype;                         // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      DisplayName;                                   // 0x0008 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            ExpLevel;                                      // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UBehaviorBase*>                 OnSpawnCustomizations;                         // 0x0020 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<struct FAttributeBaseValueData>       AttributeStartingValues;                       // 0x0030 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UItemPoolListDefinition*>       CustomItemPoolIncludedLists;                   // 0x0040 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FItemPoolInfo>                 CustomItemPoolList;                            // 0x0050 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FAITransformedName>            TransformedNames;                              // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.AIPawnBalanceDefinition.AIPawnGameStageGradeWeightData
// 0x0070 (0x0048 - 0x00B8)
struct FAIPawnGameStageGradeWeightData : FGameStageGradeWeightData
{
	struct FAIPawnGradeModifierData                    GradeModifiers;                                // 0x0048 (0x0070) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.AttributePresentationDefinition.AttributePresentationValueRemappingData
// 0x0088
struct FAttributePresentationValueRemappingData
{
	uint32_t                                           bUseContextOverride : 1;                       // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                InputValueMn;                                  // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                InputValueMx;                                  // 0x0028 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                OutputValueMn;                                 // 0x0048 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                OutputValueMx;                                 // 0x0068 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.AttributePresentationDefinition.ModifierValuePresentationData
// 0x0018
struct FModifierValuePresentationData
{
	class UAttributePresentationDefinition*            AttributePresentation;                         // 0x0000 (0x0008) [0x0000000000100000]               
	class UAttributePresentationDefinition*            OptionalConstraintPresentation;                // 0x0008 (0x0008) [0x0000000000100000]               
	float                                              ModifierValue;                                 // 0x0010 (0x0004) [0x0000000000100000]               
	uint32_t                                           bShouldDisplay : 1;                            // 0x0014 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct WillowGame.BalanceModifierDefinition.BalanceModification
// 0x002C
struct FBalanceModification
{
	uint8_t                                            MinEffectiveLevel;                             // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              EnemyHealthMultiplier;                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BadassEnemyHealthMultiplier;                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EnemyShieldStrengthMultiplier;                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BadassEnemyShieldStrengthMultiplier;           // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EnemyDamageMultiplier;                         // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BadassEnemyDamageMultiplier;                   // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              XPGainedFromCombatMultiplier;                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              XPGainedFromQuestsMultiplier;                  // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BadassRankGainMultiplier;                      // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AmplifiedDamageMultiplier;                     // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.Behavior_AIThrowProjectileAtTarget.AIThrowProjectileBehaviorSequenceStateData
// 0x000C
struct FAIThrowProjectileBehaviorSequenceStateData
{
	uint8_t                                            Action;                                        // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       SequenceName;                                  // 0x0004 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.Behavior_Conditional.BehaviorCondition
// 0x0020
struct FBehaviorCondition
{
	int32_t                                            ConditionId;                                   // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UExpressionEvaluator*                        Condition;                                     // 0x0008 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class TArray<class UBehaviorBase*>                 Behaviors;                                     // 0x0010 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct WillowGame.Behavior_DropProjectile.DropProjectileBehaviorSequenceStateData
// 0x000C
struct FDropProjectileBehaviorSequenceStateData
{
	uint8_t                                            Action;                                        // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       SequenceName;                                  // 0x0004 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowLightProjectileManager.BeamLocationData
// 0x0030
struct FBeamLocationData
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       Socket;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     Offset;                                        // 0x0010 (0x000C) [0x0000000000000000]               
	class UIWorldBody*                                 WorldBody_Object;                              // 0x0020 (0x0010) [0x0000000000000000] 
	class UIWorldBody*                                 WorldBody_Interface;                           // 0x0020 (0x0010) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowLightProjectileManager.LightProjectile
// 0x00A8
struct FLightProjectile
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPendingAdd : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsConstantTrace : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bStartParticleTracerAtWeapon : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bActorReflected : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bEnemyPenetrating : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bOvercharged : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bRicochetTowardsEnemy : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bPenetrateUsingOriginalTraceDirection : 1;     // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     PartLocation;                                  // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x001C (0x000C) [0x0000000000000000]               
	class UParticleSystemComponent*                    PartRef;                                       // 0x0028 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FAkPlayingInfo                              AudioRef;                                      // 0x0030 (0x0010) [0x0000000000080000] (CPF_Component)
	class UFiringModeDefinition*                       FireDef;                                       // 0x0040 (0x0008) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            NumRicochets;                                  // 0x004C (0x0004) [0x0000000000000000]               
	float                                              LastTraceTime;                                 // 0x0050 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastSafeTraceStartLocation;                    // 0x0054 (0x000C) [0x0000000000000000]               
	class AActor*                                      LastHitActor;                                  // 0x0060 (0x0008) [0x0000000000000000]               
	class APawn*                                       Instigator;                                    // 0x0068 (0x0008) [0x0000000000000000]               
	float                                              Damage;                                        // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            FiringPatternIdx;                              // 0x0074 (0x0004) [0x0000000000000000]               
	uint8_t                                            BulletFromClipType;                            // 0x0078 (0x0001) [0x0000000000000000]               
	uint8_t                                            bHitWater;                                     // 0x0079 (0x0001) [0x0000000000000000]               
	uint8_t                                            PenetrationCount;                              // 0x007A (0x0001) [0x0000000000000000]               
	uint8_t                                            Id;                                            // 0x007B (0x0001) [0x0000000000000000]               
	uint8_t                                            StatId;                                        // 0x007C (0x0001) [0x0000000000000000]               
	struct FVector                                     StartTrace;                                    // 0x0080 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndTrace;                                      // 0x008C (0x000C) [0x0000000000000000]               
	struct FVector                                     OriginalStartTrace;                            // 0x0098 (0x000C) [0x0000000000000000]               
	float                                              DistanceTraveled;                              // 0x00A4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ReplicatedLightProjectile
// 0x0044
struct FReplicatedLightProjectile
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bStartParticleTracerAtWeapon : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bActorReflected : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bEnemyPenetrating : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOvercharged : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bRicochetTowardsEnemy : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint8_t                                            Id;                                            // 0x0004 (0x0001) [0x0000000000000000]               
	struct FVector                                     StartTrace;                                    // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndTrace;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              ReflectSpeed;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	class UFiringModeDefinition*                       FireDef;                                       // 0x0028 (0x0008) [0x0000000000000000]               
	int32_t                                            FiringPatternIdx;                              // 0x0030 (0x0004) [0x0000000000000000]               
	class APawn*                                       Instigator;                                    // 0x0038 (0x0008) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0040 (0x0004) [0x1000000000000000]               
};

// ScriptStruct WillowGame.WillowLightProjectileManager.BeamDamageData
// 0x003C
struct FBeamDamageData
{
	float                                              Momentum;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Amount;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	class UClass*                                      Source;                                        // 0x0010 (0x0008) [0x0000000000000000]               
	class UDamageTypeDefinition*                       TypeDefinition;                                // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              BarrelSourceTime;                              // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              PlantSourceTime;                               // 0x0024 (0x0004) [0x0000000000000000]               
	class UIDamageCauser*                              DamageCauser_Object;                           // 0x0028 (0x0010) [0x0000000000000000] 
	class UIDamageCauser*                              DamageCauser_Interface;                        // 0x0028 (0x0010) [0x0000000000000000]               
	uint32_t                                           bCanDamageFriendlies : 1;                      // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.DOFEffectModifierData
// 0x000C
struct FDOFEffectModifierData
{
	uint32_t                                           AutoRelcalculateFocusDistance : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              RecalculateFocusDistanceRate;                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FocusDistanceLerpRate;                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.AttributeDefinitionDefault
// 0x000C
struct FAttributeDefinitionDefault
{
	class UAttributeDefinition*                        Attribute;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              DefaultValue;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.PostProcessOverlay
// 0x013C
struct FPostProcessOverlay
{
	struct FName                                       OverlayName;                                   // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FPostProcessSettings                        DestPostProcessOverlay;                        // 0x0008 (0x0118) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	float                                              MinTransitionInDuration;                       // 0x0120 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinTransitionHoldDuration;                     // 0x0124 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinTransitionOutDuration;                      // 0x0128 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxTransitionInDuration;                       // 0x012C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxTransitionHoldDuration;                     // 0x0130 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxTransitionOutDuration;                      // 0x0134 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           ClearOverlayQueueAfterTransition : 1;          // 0x0138 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.AttributeScalarParam
// 0x0068
struct FAttributeScalarParam
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bVectorParam : 1;                              // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bClampInput : 1;                               // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	struct FAttributeDefinitionDefault                 Input;                                         // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeDefinitionDefault                 MinInput;                                      // 0x0020 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeDefinitionDefault                 MaxInput;                                      // 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeDefinitionDefault                 MinOutput;                                     // 0x0040 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeDefinitionDefault                 MaxOutput;                                     // 0x0050 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ScalarParamOperand;                            // 0x0060 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentValue;                                  // 0x0064 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.MaterialEffectModifier
// 0x0028
struct FMaterialEffectModifier
{
	struct FName                                       EffectName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FAttributeScalarParam>         ScalarParams;                                  // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              CachedValue;                                   // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstance*                           MaterialInstance;                              // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.DOFEffectData
// 0x002C
struct FDOFEffectData
{
	float                                              FalloffExponent;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlurKernelSize;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxNearBlurAmount;                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxFarBlurAmount;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      ModulateBlurColor;                             // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            FocusType;                                     // 0x0014 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              FocusInnerRadius;                              // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FocusDistance;                                 // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     FocusPosition;                                 // 0x0020 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.Behavior_RandomlySelectBehaviors.BehaviorsSelectionData
// 0x0030
struct FBehaviorsSelectionData
{
	struct FAttributeInitializationData                Weight;                                        // 0x0000 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UBehaviorBase*>                 Behaviors;                                     // 0x0020 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct WillowGame.Behavior_RemoveInstanceData.RemoveObject
// 0x0008
struct FRemoveObject
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleScalarParamOverTime
// 0x0018
struct FScreenParticleScalarParamOverTime
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              TotalTime;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartValue;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndValue;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastValue;                                     // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleVectorParamOverTime
// 0x0030
struct FScreenParticleVectorParamOverTime
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              TotalTime;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     VectorStartValue;                              // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     VectorEndValue;                                // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LastValue;                                     // 0x0024 (0x000C) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleParamOverTime
// 0x0020
struct FScreenParticleParamOverTime
{
	class TArray<struct FScreenParticleScalarParamOverTime> ScalarParams;                                  // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FScreenParticleVectorParamOverTime> VectorParams;                                  // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleModifier
// 0x0014
struct FScreenParticleModifier
{
	class TArray<struct FAttributeScalarParam>         ScalarParams;                                  // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              CachedValue;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleInitParams
// 0x0074
struct FScreenParticleInitParams
{
	class UParticleSystem*                             Template;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FScreenParticleModifier>       ScreenParticleModifiers;                       // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UMaterialInterface*                          TemplateScreenParticleMaterial;                // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       MatParamName;                                  // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bHideWhenFinished : 1;                         // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FName                                       ParticleTag;                                   // 0x002C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   ContentDims;                                   // 0x0034 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ParticleDepth;                                 // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ScalingMode;                                   // 0x0040 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FScreenParticleParamOverTime                StopParamsOT;                                  // 0x0048 (0x0020) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bOnlyOwnerSee : 1;                             // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            EffectDepthPriorityGroup;                      // 0x006C (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bAlwaysVisible : 1;                            // 0x0070 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseDesignerAttributeParameters : 1;           // 0x0070 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct WillowGame.IScreenParticle.ScreenParticleRecord
// 0x0068
struct FScreenParticleRecord
{
	struct FName                                       Tag;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             Template;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       MatParamName;                                  // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystemComponent*                    Component;                                     // 0x0018 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<struct FScreenParticleModifier>       AppliedModifiers;                              // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector2D                                   ContentDims;                                   // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ParticleDepth;                                 // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ScalingMode;                                   // 0x003C (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FScreenParticleParamOverTime                StopParamsOT;                                  // 0x0040 (0x0020) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bUseDesignerAttributeParameters : 1;           // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAlwaysVisible : 1;                            // 0x0060 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              StopTime;                                      // 0x0064 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct WillowGame.WillowWeaponTypes.ExtraMuzzleEffect
// 0x0010
struct FExtraMuzzleEffect
{
	class UParticleSystem*                             Particles;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    Sound;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponBoneControllerData
// 0x0018
struct FWeaponBoneControllerData
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            ControlType;                                   // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseInFirstPerson : 1;                         // 0x000C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseInThirdPerson : 1;                         // 0x000C (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class USkelControlBase*                            ControlTemplate;                               // 0x0010 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponDefinitionData
// 0x0008
struct FWeaponDefinitionData
{
	class UWeaponTypeDefinition*                       WeaponTypeDefinition;                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponAccessorySetup
// 0x0028
struct FWeaponAccessorySetup
{
	struct FName                                       WeaponArchetypeName;                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGestaltSkeletalMeshDefinition*              AccessoryDefinition;                           // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGestaltPartMatrices*                        AccessoryTransforms;                           // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FGestaltPartPermutation>       AccessoryParts;                                // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowEmitter.SpawnAttachmentInfo
// 0x000C
struct FSpawnAttachmentInfo
{
	uint8_t                                            SpawnType;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	struct FName                                       AttachmentName;                                // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.Behavior_SpawnProjectile.ProjectileBehaviorSequenceStateData
// 0x000C
struct FProjectileBehaviorSequenceStateData
{
	uint8_t                                            Action;                                        // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       SequenceName;                                  // 0x0004 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BehaviorAliasLookupDefinition.BehaviorAliasReference
// 0x0018
struct FBehaviorAliasReference
{
	class UBehaviorAliasDefinition*                    BehaviorAlias;                                 // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UBehaviorBase*>                 BehaviorList;                                  // 0x0008 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct WillowGame.BodyHitRegionDefinition.GoreTriggerData
// 0x0018
struct FGoreTriggerData
{
	class UDamageTypeDefinition*                       DamageTypeTrigger;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      DamageSourceTrigger;                           // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            CoreDamageTypeTrigger;                         // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              HealthPctDamageThreshold;                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.ImpactResponseParameters
// 0x0074
struct FImpactResponseParameters
{
	class TArray<struct FParticleSysParam>             ParticleParameters;                            // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FFontParameterValue>           FontParameterValues;                           // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FScalarParameterValue>         ScalarParameterValues;                         // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FTextureParameterValue>        TextureParameterValues;                        // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FVectorParameterValue>         VectorParameterValues;                         // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FRtpcParameterValue>           RtpcParameterValues;                           // 0x0050 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bNoSound : 1;                                  // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FVector                                     ReferenceLocation;                             // 0x0064 (0x000C) [0x0000000000000000]               
	float                                              GenericScale;                                  // 0x0070 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.ImpactResponseEffect
// 0x0158
struct FImpactResponseEffect
{
	uint32_t                                           bCensorThisEffect : 1;                         // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UWillowImpactDefinition*                     CensoredEffectAlternative;                     // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DamageModifierPercent;                         // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    ImpactEvent;                                   // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              AINoiseLevel;                                  // 0x0020 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UParticleSystem*                             ParticleTemplate;                              // 0x0028 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bAttachParticleToHitActor : 1;                 // 0x0030 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bHideEffectFromHitActor : 1;                   // 0x0030 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              MaxEffectDistance;                             // 0x0034 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UMaterialInterface*>            DecalMaterials;                                // 0x0038 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	float                                              DecalWidth;                                    // 0x0048 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalHeight;                                   // 0x004C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalMinScale;                                 // 0x0050 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalMaxScale;                                 // 0x0054 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalDepth;                                    // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           DecalRandomRotation : 1;                       // 0x005C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           DecalCreateNewMaterialInstanceConstant : 1;    // 0x005C (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class UClass*                                      ImpactFlashLightClass;                         // 0x0060 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FScreenParticleInitParams                   ScreenParticle;                                // 0x0068 (0x0078) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FImpactResponseParameters                   EffectParameters;                              // 0x00E0 (0x0078) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.RtpcParameterValue
// 0x000C
struct FRtpcParameterValue
{
	class UAkRtpc*                                     AkRtpc;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.ImpactResponseData
// 0x0160
struct FImpactResponseData
{
	class UWillowImpactDefinition*                     ImpactType;                                    // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FImpactResponseEffect                       ResponseEffect;                                // 0x0008 (0x0158) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowPhysicalMaterialProperty.WheelSlipModifierData
// 0x0008
struct FWheelSlipModifierData
{
	float                                              LongSlipFactor;                                // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              LatSlipFactor;                                 // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyHitRegionDefinition.HitReactionData
// 0x0020
struct FHitReactionData
{
	float                                              HoldTime;                                      // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              BlendInTime;                                   // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              BlendOutTime;                                  // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            BlendInType;                                   // 0x000C (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            BlendOutType;                                  // 0x000D (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              LinearSpringStrength;                          // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              AngularSpringStrength;                         // 0x0014 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ForceScale;                                    // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxForce;                                      // 0x001C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyHitRegionDefinition.DamageReactionData
// 0x0044 (0x0008 - 0x004C)
struct FDamageReactionData : FSpecializedBehaviorEvent
{
	class TArray<struct FGoreTriggerData>              DamageTriggers;                                // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              PercentOfHealthTrigger;                        // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USpecialMoveDefinition*                      DamageSpecialMove;                             // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UBehaviorBase*>                 ReactionBehaviors;                             // 0x0028 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FName>                         PrerequisiteDamageTriggeredReactions;          // 0x0038 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bDamageThreshold : 1;                          // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bRepeatableEvent : 1;                          // 0x0048 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bCensored : 1;                                 // 0x0048 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bOnlyTriggeredOnOwnerDeath : 1;                // 0x0048 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
};

// ScriptStruct WillowGame.BodyHitRegionDefinition.BodyHitRegionModifierData
// 0x0018
struct FBodyHitRegionModifierData
{
	struct FName                                       ModifierName;                                  // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPhysicalMaterial*                           PhysicalMaterial;                              // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPhysicalMaterial*                           ShieldedPhysicalMaterial;                      // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyClassDeathDefinition.TechDeathData
// 0x0020 (0x0008 - 0x0028)
struct FTechDeathData : FSpecializedBehaviorEvent
{
	class TArray<class UDamageTypeDefinition*>         DamageTypeTriggers;                            // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            CoreDamageTypeTrigger;                         // 0x0018 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpecialMoveDefinition*                      DeathAnimation;                                // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyClassDefinition.BreathingLoopInfo
// 0x0018
struct FBreathingLoopInfo
{
	class UExpressionEvaluator*                        Condition;                                     // 0x0000 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UAkEvent*                                    StartAkEvent;                                  // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    StopAkEvent;                                   // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyClassDefinition.GenericAnimMapping
// 0x0010
struct FGenericAnimMapping
{
	class USpecialMoveDefinition*                      FromAnim;                                      // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpecialMoveDefinition*                      ToAnim;                                        // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyClassDefinition.VehicleCrewMappingStruct
// 0x0010
struct FVehicleCrewMappingStruct
{
	struct FName                                       VehicleArchetypeName;                          // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAnimSet*                                    AnimSet;                                       // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyClassDefinition.ExertionVocalization
// 0x0010
struct FExertionVocalization
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    AkEvent;                                       // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyClassDefinition.ExtraWeaponSlot
// 0x000C
struct FExtraWeaponSlot
{
	struct FName                                       Socket;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bShowWeaponMesh : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct WillowGame.BodyHitRegionDefinition.HitReactionDamageData
// 0x0010
struct FHitReactionDamageData
{
	float                                              ForceScale;                                    // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDamageTypeDefinition*                       Type;                                          // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.BodyHandIKHoldData
// 0x0024
struct FBodyHandIKHoldData
{
	struct FVector                                     JointLocation;                                 // 0x0000 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     HandLocation;                                  // 0x000C (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FRotator                                    HandRotation;                                  // 0x0018 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.CustomBodyHandIKHoldData
// 0x002C
struct FCustomBodyHandIKHoldData
{
	struct FName                                       HoldName;                                      // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FBodyHandIKHoldData                         IKData;                                        // 0x0008 (0x0024) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.ConditionalAnimData
// 0x0010
struct FConditionalAnimData
{
	class UExpressionEvaluator*                        Expression;                                    // 0x0000 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class USpecialMoveDefinition*                      SpecialMove;                                   // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.BodyWeaponActionData
// 0x0020
struct FBodyWeaponActionData
{
	uint8_t                                            Action;                                        // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Expression;                                    // 0x0008 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class TArray<struct FConditionalAnimData>          Animations;                                    // 0x0010 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.BodyWeaponHoldDefinition.BodyWeaponActionPostureData
// 0x0018
struct FBodyWeaponActionPostureData
{
	uint8_t                                            Posture;                                       // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FBodyWeaponActionData>         Actions;                                       // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WeaponTypeDefinition.WeaponHeatSoundData
// 0x002C
struct FWeaponHeatSoundData
{
	class UAkRtpc*                                     Rtpc;                                          // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bNormalizeRtpcValue : 1;                       // 0x0008 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    StartEvent;                                    // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StartThreshold;                                // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    StopEvent;                                     // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StopThreshold;                                 // 0x0028 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WeaponTypeDefinition.WeaponBarrelSpinSoundData
// 0x0030
struct FWeaponBarrelSpinSoundData
{
	class UAkRtpc*                                     Rtpc;                                          // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    SpinningUpEvent;                               // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    SpinningDownEvent;                             // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    FullySpunUpEvent;                              // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    StopSpinningEvent;                             // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StartThreshold;                                // 0x0028 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StopThreshold;                                 // 0x002C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WeaponTypeDefinition.WeaponPartAttachmentData
// 0x0020
struct FWeaponPartAttachmentData
{
	struct FName                                       FirstPersonAttachmentSocket;                   // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       ThirdPersonAttachmentSocket;                   // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       FirstPersonOffHandAttachmentSocket;            // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       ThirdPersonOffHandAttachmentSocket;            // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WeaponSightDefinition.WeaponZoomLevel
// 0x0014
struct FWeaponZoomLevel
{
	float                                              ZoomTime;                                      // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FOV;                                           // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FOVLerpPct;                                    // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ViewModelFOVOffset;                            // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinZoomTimePctToFire;                          // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowWeaponTypes.ConditionalAnimationData
// 0x0028
struct FConditionalAnimationData
{
	class UExpressionEvaluator*                        Expression;                                    // 0x0000 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	struct FName                                       AnimationName;                                 // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bPlayInReverse : 1;                            // 0x0010 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UCameraAnim*                                 CameraAnim;                                    // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAnimSet*                                    AnimSet;                                       // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponParticleEffectData
// 0x0014
struct FWeaponParticleEffectData
{
	class UParticleSystemComponent*                    Effect;                                        // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            Id;                                            // 0x0008 (0x0004) [0x0000000000000000]               
	struct FName                                       Socket;                                        // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponLightEffectData
// 0x000C
struct FWeaponLightEffectData
{
	class UWillowPointLight*                           Light;                                         // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            Id;                                            // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowWeaponTypes.WeaponEffectsData
// 0x0020
struct FWeaponEffectsData
{
	class TArray<struct FWeaponParticleEffectData>     Particles;                                     // 0x0000 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FWeaponLightEffectData>        Lights;                                        // 0x0010 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WeaponTypeDefinition.NameExpressionData
// 0x0030
struct FNameExpressionData
{
	class TArray<struct FAttributeExpressionData>      Expressions;                                   // 0x0000 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class FString                                      PreModifier;                                   // 0x0010 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      PostModifier;                                  // 0x0020 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.CellsNavigator.MoveToCellData
// 0x000C
struct FMoveToCellData
{
	int32_t                                            IndexInCellsList;                              // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              DistanceFromCurrentCell;                       // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              CosAngle;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowDeclarations.CellInfo
// 0x0028
struct FCellInfo
{
	struct FVector                                     AbsolutePosition;                              // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Width;                                         // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      CellName;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowPlayerController.OneOffLevelChallengeData
// 0x0018
struct FOneOffLevelChallengeData
{
	uint8_t                                            PackageId;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            ContentId;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	class TArray<int32_t>                              Completion;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowPlayerController.ReplicatedProgressBarData
// 0x000C
struct FReplicatedProgressBarData
{
	float                                              Duration;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Rate;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              StartOffset;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerController.SpeedKillData
// 0x0014
struct FSpeedKillData
{
	class FString                                      VictimName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              VictimKillTime;                                // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.SkillDefinition.SkillDamageEventData
// 0x0028 (0x0008 - 0x0030)
struct FSkillDamageEventData : FSpecializedBehaviorEvent
{
	uint8_t                                            EventType;                                     // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FSkillDamagedEventConstraintData> EventConstraints;                              // 0x0010 (0x0010) [0x0000000020400002] (CPF_Const | CPF_NeedCtorLink | CPF_Deprecated)
	class TArray<class USkillDamageEventConstraints*>  Constraints;                                   // 0x0020 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct WillowGame.SkillDefinition.SkillDamagedEventConstraintData
// 0x0014
struct FSkillDamagedEventConstraintData
{
	class UDamageTypeDefinition*                       DamageTypeConstraint;                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      DamageSourceConstraint;                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bMustBeCriticalDamage : 1;                     // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bMustBeOneShotKill : 1;                        // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bMustBeFromBehind : 1;                         // 0x0010 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bMustBeFromFirstBullet : 1;                    // 0x0010 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bMustBeFromLastBullet : 1;                     // 0x0010 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
};

// ScriptStruct WillowGame.SkillDefinition.NamedSkillEvent
// 0x0029
struct FNamedSkillEvent
{
	struct FName                                       EventName;                                     // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class USkillDefinition*>              RequiredSkills;                                // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UBehaviorBase*>                 EventResponses;                                // 0x0018 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	uint8_t                                            RequiredActionSkillState;                      // 0x0028 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.SkillDefinition.SkillActionData
// 0x003C
struct FSkillActionData
{
	class FString                                      ClientConsoleCommand;                          // 0x0000 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bSkillOnInstigator : 1;                        // 0x0010 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bSkillOnRecipient : 1;                         // 0x0010 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint8_t                                            GradeType;                                     // 0x0014 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            HardcodedGrade;                                // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USkillDefinition* SkillToActivate;                               // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USkillDefinition* SkillToDeactivate;                             // 0x0028 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent* AkEvent;                                       // 0x0030 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bInstigatorPlaysSound : 1;                     // 0x0038 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bRecipientPlaysSound : 1;                      // 0x0038 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.SkillDefinition.SkillEventResponseData
// 0x0048
struct FSkillEventResponseData
{
	uint32_t                                           bPredictOnClient : 1;                          // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint8_t                                            EventType;                                     // 0x0004 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FSkillActionData                            Action;                                        // 0x0008 (0x0040) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.SkillDefinition.SkillConstraintData
// 0x0020
struct FSkillConstraintData
{
	uint32_t                                           bApplyConstraintOnActivatation : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bApplyConstraintWhileActive : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bApplyConstraintWhilePaused : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint8_t                                            OnFailure;                                     // 0x0004 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Evaluator;                                     // 0x0008 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class TArray<class USkillExpressionEvaluatorDefinition*> EvaluatorDefinitions;                          // 0x0010 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.SkillDefinition.BonusAttributeModifierUpgrade
// 0x0008
struct FBonusAttributeModifierUpgrade
{
	int32_t                                            GradeToApplyAt;                                // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Modifier;                                      // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.SkillDefinition.SkillEffectData
// 0x0078
struct FSkillEffectData
{
	class UAttributeDefinitionBase*                    AttributeToModify;                             // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bIncludeDuelingTargets : 1;                    // 0x0008 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bIncludeSelfAsTarget : 1;                      // 0x0008 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bOnlyEffectTargetsInRange : 1;                 // 0x0008 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bExcludeNonPlayerCharacters : 1;               // 0x0008 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint8_t                                            EffectTarget;                                  // 0x000C (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       TargetInstanceDataName;                        // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            TargetCriteria;                                // 0x0018 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            ModifierType;                                  // 0x0019 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                BaseModifierValue;                             // 0x0020 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            GradeToStartApplyingEffect;                    // 0x0040 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            PerGradeUpgradeInterval;                       // 0x0044 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                PerGradeUpgrade;                               // 0x0048 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FBonusAttributeModifierUpgrade> BonusUpgradeList;                              // 0x0068 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.SkillDefinition.SkillKillEventData
// 0x0028 (0x0008 - 0x0030)
struct FSkillKillEventData : FSpecializedBehaviorEvent
{
	uint8_t                                            EventType;                                     // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FSkillDamagedEventConstraintData> EventConstraints;                              // 0x0010 (0x0010) [0x0000000020400002] (CPF_Const | CPF_NeedCtorLink | CPF_Deprecated)
	class TArray<class USkillDamageEventConstraints*>  Constraints;                                   // 0x0020 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct WillowGame.SkillDefinition.SkillEffectAttributeData
// 0x0068
struct FSkillEffectAttributeData
{
	class UAttributeDefinitionBase* AttributeToModify;                             // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            ModifierType;                                  // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                BaseModifierValue;                             // 0x0010 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            GradeToStartApplyingEffect;                    // 0x0030 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            PerGradeUpgradeInterval;                       // 0x0034 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                PerGradeUpgrade;                               // 0x0038 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FBonusAttributeModifierUpgrade> BonusUpgradeList;                              // 0x0058 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.SkillDefinition.SkillEffectTargetData
// 0x0020
struct FSkillEffectTargetData
{
	uint32_t                                           bIncludeDuelingTargets : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bIncludeSelfAsTarget : 1;                      // 0x0000 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bOnlyEffectTargetsInRange : 1;                 // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bExcludeNonPlayerCharacters : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint8_t                                            EffectTarget;                                  // 0x0004 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       TargetInstanceDataName;                        // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            TargetCriteria;                                // 0x0010 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator* TargetEvaluator;                               // 0x0018 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct WillowGame.SkillDefinition.SkillEffectGroupData
// 0x0030
struct FSkillEffectGroupData
{
	class TArray<struct FSkillEffectAttributeData>     Attributes;                                    // 0x0000 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FSkillEffectTargetData                      TargetCriteria;                                // 0x0010 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowProfile.CustomCameraData
// 0x0028
struct FCustomCameraData
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     Location;                                      // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowProfile.UIBreadcrumbEntry
// 0x0014
struct FUIBreadcrumbEntry
{
	class FString                                      UIBreadcrumbKey;                               // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            HashKey;                                       // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerController.ReplicatedDamageScreenParticle
// 0x0089
struct FReplicatedDamageScreenParticle
{
	struct FScreenParticleInitParams                   Params;                                        // 0x0000 (0x0078) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     ReferenceLocation;                             // 0x0078 (0x000C) [0x0000000000000000]               
	float                                              GenericScale;                                  // 0x0084 (0x0004) [0x0000000000000000]               
	uint8_t                                            Counter;                                       // 0x0088 (0x0001) [0x1000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerController.LockoutData
// 0x000C
struct FLockoutData
{
	class ULockoutDefinition*                          LockoutDef;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LockoutTime;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowPlayerController.RegionGameStageData
// 0x0010
struct FRegionGameStageData
{
	class URegionDefinition*                           RegionDef;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            GameStage;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            PlaythroughIdx;                                // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerController.TaggedGFxMovie
// 0x0010
struct FTaggedGFxMovie
{
	class UGearboxGFxMovie*                            Movie;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       Tag;                                           // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerController.CustomizationUnlockData
// 0x0018
struct FCustomizationUnlockData
{
	int32_t                                            ProductId;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumUnlockedCustomizations;                     // 0x0004 (0x0004) [0x0000000000000000]               
	class TArray<uint8_t>                              UnlockedMask;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.PostProcessChainRecord
// 0x0034
struct FPostProcessChainRecord
{
	class UPostProcessChain*                           Template;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UPostProcessChain*                           Instance;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FMaterialEffectModifier>       AppliedModifiers;                              // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           PopWhenScalarParamIsMaxedOut : 1;              // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FDOFEffectModifierData                      DOFEffectModifier;                             // 0x0024 (0x000C) [0x0000000000000000]               
	float                                              NextDOFUpdateTime;                             // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.IUpdatePostProcessOverride.PostProcessChainOptions
// 0x001C
struct FPostProcessChainOptions
{
	class TArray<struct FMaterialEffectModifier>       MaterialEffectModifiers;                       // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FDOFEffectModifierData                      DOFEffectModifier;                             // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowPlayerController.PostProcessOverlayInfo
// 0x0149
struct FPostProcessOverlayInfo
{
	struct FPostProcessOverlay                         PostProcessOverlay;                            // 0x0000 (0x0140) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SceneInterpolationPhaseTime;                   // 0x0140 (0x0004) [0x0000000000000000]               
	float                                              SceneInterpolationDuration;                    // 0x0144 (0x0004) [0x0000000000000000]               
	uint8_t                                            PostProcessOverlayPhase;                       // 0x0148 (0x0001) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPawn.MaterialScalarFadeReplication
// 0x0018
struct FMaterialScalarFadeReplication
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              StartValue;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              EndValue;                                      // 0x000C (0x0004) [0x0000000000000000]               
	float                                              FadeTime;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bRunning : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsForGoreDeath : 1;                           // 0x0014 (0x0004) [0x1000000000000000] [0x00000002] 
};

// ScriptStruct WillowGame.WillowPawn.GoreEffect
// 0x0030
struct FGoreEffect
{
	class UBodyHitRegionDefinition*                    HitRegion;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            GoreDataIndex;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	class AController*                                 InstigatedBy;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	struct FVector                                     HitLocation;                                   // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     Momentum;                                      // 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPawn.HolsteredGearDisplaySlot
// 0x0010
struct FHolsteredGearDisplaySlot
{
	uint8_t                                            State;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	class AWillowInventory*                            Item;                                          // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPawn.BloodSplatterTrace
// 0x0024
struct FBloodSplatterTrace
{
	class UBodyHitRegionDefinition*                    HitRegion;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     HitLocation;                                   // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     Momentum;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              DamageSeverityPercent;                         // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPawn.HitReactionReplicatedData
// 0x0018
struct FHitReactionReplicatedData
{
	float                                              Force;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Origin;                                        // 0x0004 (0x000C) [0x0000000000000000]               
	class UBodyHitRegionDefinition*                    HitRegion;                                     // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.IHitRegionConsumer.ReplicatedHitRegionImpactEffect
// 0x003C
struct FReplicatedHitRegionImpactEffect
{
	struct FVector                                     HitLocation;                                   // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EffectDirection;                               // 0x000C (0x000C) [0x0000000000000000]               
	int32_t                                            PackedParams;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	class UObject*                                     ImpactSourceDef;                               // 0x0020 (0x0008) [0x0000000000000000]               
	class UPhysicalMaterial*                           PhysMat;                                       // 0x0028 (0x0008) [0x0000000000000000]               
	class APawn*                                       Instigator;                                    // 0x0030 (0x0008) [0x0000000000000000]               
	float                                              CreationTime;                                  // 0x0038 (0x0004) [0x1000000000000000]               
};

// ScriptStruct WillowGame.ItemPool.QueuedLootSpawnRequest
// 0x00D0
struct FQueuedLootSpawnRequest
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Scale;                                         // 0x001C (0x000C) [0x0000000000000000]               
	int32_t                                            GameStage;                                     // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            AwesomeLevel;                                  // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            BatchIndex;                                    // 0x0030 (0x0004) [0x0000000000000000]               
	struct FName                                       AttachmentPointName;                           // 0x0034 (0x0008) [0x0000000000000000]               
	uint8_t                                            LootStyle;                                     // 0x003C (0x0001) [0x0000000000000000]               
	class AActor*                                      SourceActor;                                   // 0x0040 (0x0008) [0x0000000000000000]               
	struct FName                                       CallbackFunctionName;                          // 0x0048 (0x0008) [0x0000000000000000]               
	struct FVector                                     ItemDropOffset;                                // 0x0050 (0x000C) [0x0000000000000000]               
	struct FVector                                     ItemDropVelocity;                              // 0x005C (0x000C) [0x0000000000000000]               
	struct FVector                                     ItemScatterOffset;                             // 0x0068 (0x000C) [0x0000000000000000]               
	float                                              DisablePickupsDuration;                        // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              CustomVelocity;                                // 0x0078 (0x0004) [0x0000000000000000]               
	struct FRelativeDirectionData                      CustomDirection;                               // 0x0080 (0x0038) [0x0000000000000000]               
	struct FVector                                     Torque;                                        // 0x00B8 (0x000C) [0x0000000000000000]               
	int32_t                                            OverrideMethodAsInt;                           // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              OverrideLifetime;                              // 0x00C8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bOverridePickupMethod : 1;                     // 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCircularScatter : 1;                          // 0x00CC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bTorque : 1;                                   // 0x00CC (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bForceDisableClientSidePhysics : 1;            // 0x00CC (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bScale : 1;                                    // 0x00CC (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct WillowGame.HitReactionDefinition.ReplicatedHitReactionData
// 0x0010
struct FReplicatedHitReactionData
{
	uint8_t                                            DirtyCounter;                                  // 0x0000 (0x0001) [0x1000000000000000]               
	class USpecialMoveDefinition*                      SMD;                                           // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.IDesignerAttributeProvider.ReplicatedDesignerAttributeState
// 0x0018
struct FReplicatedDesignerAttributeState
{
	class UDesignerAttributeDefinition*                Definition;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       AttributeName;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Value;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bOnlyRelevantToOwner : 1;                      // 0x0014 (0x0004) [0x1000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct WillowGame.IMeleeAttacker.MeleeOverTimeState
// 0x0050
struct FMeleeOverTimeState
{
	uint32_t                                           bIsMeleeActive : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UMeleeDefinition*                            MeleeDefinition;                               // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              OverrideEffectsClockFaceDirection;             // 0x0010 (0x0004) [0x0000000000000000]               
	struct FName                                       OverrideStartSocket;                           // 0x0014 (0x0008) [0x0000000000000000]               
	float                                              MeleeStartTime;                                // 0x001C (0x0004) [0x0000000000000000]               
	float                                              TimeElapsedSinceLastMelee;                     // 0x0020 (0x0004) [0x0000000000000000]               
	class TArray<class AActor*>                        HitActors;                                     // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     MeleeStartLocation;                            // 0x0038 (0x000C) [0x0000000000000000]               
	struct FRotator                                    MeleeStartRotation;                            // 0x0044 (0x000C) [0x0000000000000000]               
};

// ScriptStruct WillowGame.ISimpleAnimPlayer.SimpleAnimData
// 0x0020
struct FSimpleAnimData
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UWillowAnimTree*                             Tree;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	class TArray<class UWillowAnimNode_Simple*>        Nodes;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.IDesignerAttributeProvider.DesignerAttributeDefaultValueData
// 0x0028
struct FDesignerAttributeDefaultValueData
{
	class UDesignerAttributeDefinition*                DesignerAttribute;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                BaseValue;                                     // 0x0008 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.InventoryBalanceDefinition.InventoryGradeModifierData
// 0x0010
struct FInventoryGradeModifierData
{
	int32_t                                            ExpLevel;                                      // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UWillowInventoryDefinition* CustomInventoryDefinition;                     // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.InventoryBalanceDefinition.InventoryGameStageGradeWeightData
// 0x0010 (0x0048 - 0x0058)
struct FInventoryGameStageGradeWeightData : FGameStageGradeWeightData
{
	struct FInventoryGradeModifierData                 GradeModifiers;                                // 0x0048 (0x0010) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.InventoryBalanceDefinition.InventoryManufacturerBalanceData
// 0x0018
struct FInventoryManufacturerBalanceData
{
	class UManufacturerDefinition*                     Manufacturer;                                  // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FInventoryGameStageGradeWeightData> Grades;                                        // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.CombatMusicManager.TargetedPlayerState
// 0x001C
struct FTargetedPlayerState
{
	class AWillowMind*                                 Enemy;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Player;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              InitialThreat;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              StoppedTargetingPlayerTime;                    // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsPlayerPet : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedAudioDefinition
// 0x0030
struct FCoordinatedAudioDefinition
{
	class UAkEvent*                                    TriggerEvent;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              TriggerTime;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DeactivateTime;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkRtpc*                                     Rtpc;                                          // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveFloat                           RTPCOverTime;                                  // 0x0018 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedChunkTextureParameter
// 0x0010
struct FCoordinatedChunkTextureParameter
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    Value;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedScalarParameter
// 0x0048
struct FCoordinatedScalarParameter
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveFloat                           ParamValueOverTime;                            // 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            BoundsScale;                                   // 0x0020 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bConvertAxisToWorldSpace : 1;                  // 0x0024 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bApplyAttribute : 1;                           // 0x0024 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bScaleAttributeByValueOverTime : 1;            // 0x0024 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	struct FAttributeInitializationData                ParamAttributeValue;                           // 0x0028 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedVectorParameter
// 0x0020
struct FCoordinatedVectorParameter
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveVector                          ParamValueOverTime;                            // 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedChunkVectorParameter
// 0x0018
struct FCoordinatedChunkVectorParameter
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Value;                                         // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedChunkScalarParameter
// 0x000C
struct FCoordinatedChunkScalarParameter
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.CoordinatedEffectDefinition.CoordinatedParticleSystemDefinition
// 0x0064
struct FCoordinatedParticleSystemDefinition
{
	class UParticleSystem*                             ParticleSystem;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LocationOffset;                                // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    RotationOffset;                                // 0x0014 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AttachmentName;                                // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              TriggerTime;                                   // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DeactivateTime;                                // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ParticleScale;                                 // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FCoordinatedScalarParameter>   Parameters;                                    // 0x0038 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FCoordinatedVectorParameter>   VectorParameters;                              // 0x0048 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            ScaleByObjectSize;                             // 0x0058 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOnlyPlayerOwnerCanSee : 1;                    // 0x005C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            SortPriority;                                  // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.CreditsGFxDefinition.CreditsLine
// 0x0018
struct FCreditsLine
{
	class UCreditsLineDefinition*                      LineType;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      Text;                                          // 0x0008 (0x0010) [0x0000040000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.CreditsGFxDefinition.CreditsTextureInfo
// 0x0010
struct FCreditsTextureInfo
{
	class FString                                      TexturePath;                                   // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.CurrencyAttributeValueResolver.CurrencyState
// 0x000C
struct FCurrencyState
{
	uint8_t                                            FormOfCurrency;                                // 0x0000 (0x0001) [0x1000000000000002] (CPF_Const)   
	float                                              CurrentAmount;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              LastKnownAmount;                               // 0x0008 (0x0004) [0x1000000000000000]               
};

// ScriptStruct WillowGame.CurrencyListDefinition.CurrencyPresentation
// 0x0020
struct FCurrencyPresentation
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      WidgetFrame;                                   // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class USwfMovie*                                   WidgetClip;                                    // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowGFxThirdPersonDefinition.ThirdPersonMenuView
// 0x004C
struct FThirdPersonMenuView
{
	struct FVector                                     RelativeCameraLocation;                        // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    RelativeCameraRotation;                        // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RelativeMenuLocation;                          // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    RelativeMenuRotation;                          // 0x0024 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              CameraYawMin;                                  // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CameraYawMax;                                  // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VerticalSplitscreenCameraOffset;               // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VerticalSplitscreenCameraSpread;               // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FocusBoneName;                                 // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FocusScreenYaw;                                // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.DamageOverTimeManager.SourceObjectData
// 0x00A8
struct FSourceObjectData
{
	int32_t                                            UniqueId;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class UObject*                                     SourceObject;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     SourceLocation;                                // 0x0010 (0x000C) [0x0000000000000000]               
	class AController*                                 InstigatedByController;                        // 0x0020 (0x0008) [0x0000000000000000]               
	class UIDamageBehavior*                            DamageContext_Object;                          // 0x0028 (0x0010) [0x0000000000000000] 
	class UIDamageBehavior*                            DamageContext_Interface;                       // 0x0028 (0x0010) [0x0000000000000000]               
	float                                              StartDamageTime;                               // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              TimeElapsedSinceLastDamage;                    // 0x003C (0x0004) [0x0000000000000000]               
	class UExplosionDefinition*                        ExplosionDef;                                  // 0x0040 (0x0008) [0x0000000000000000]               
	int32_t                                            ExplosionScaleIndex;                           // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              InitialDamageRadius;                           // 0x004C (0x0004) [0x0000000000000000]               
	float                                              Damage;                                        // 0x0050 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFullDamage : 1;                               // 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Momentum;                                      // 0x0058 (0x0004) [0x0000000000000000]               
	class UClass*                                      DamageSource;                                  // 0x0060 (0x0008) [0x0000000000000000]               
	class UDamageTypeDefinition*                       DamageTypeDef;                                 // 0x0068 (0x0008) [0x0000000000000000]               
	class UImpactDefinition*                           ImpactDefinition;                              // 0x0070 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCanDamageFriendlies : 1;                      // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanDamageInstigator : 1;                      // 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	class UIDamageCauser*                              DamageCauser_Object;                           // 0x0080 (0x0010) [0x0000000000000000] 
	class UIDamageCauser*                              DamageCauser_Interface;                        // 0x0080 (0x0010) [0x0000000000000000]               
	uint32_t                                           bSkipTraceTest : 1;                            // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	class UObject*                                     HitObject;                                     // 0x0098 (0x0008) [0x0000000000000000]               
	float                                              BarrelSourceTime;                              // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              PlantSourceTime;                               // 0x00A4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.DamageOverTimeManager.DamageOnlyOnceData
// 0x0010
struct FDamageOnlyOnceData
{
	int32_t                                            UniqueId;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class AActor*                                      HurtActor;                                     // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.DamageTypeAttributeValueResolver.DamageTypeSelectorData
// 0x0028
struct FDamageTypeSelectorData
{
	struct FName                                       AssociatedDamageTypeName;                      // 0x0000 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAttributeInitializationData                ValueIfMatched;                                // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.DLCLegacyPlayerClassIdentifierDefinition.LegacyCustomizationItemData
// 0x0020
struct FLegacyCustomizationItemData
{
	class FString                                      ItemPoolDefPath;                               // 0x0000 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	int32_t                                            ItemPoolKey;                                   // 0x0010 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class UItemPoolDefinition*                         CustomizationItemPool;                         // 0x0018 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct WillowGame.GlobalsDefinition.PlayThroughData
// 0x0018
struct FPlayThroughData
{
	int32_t                                            PlayThroughNumber;                             // 0x0000 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class TArray<class UGameBalanceDefinition*>        BalanceDefinitions;                            // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.GlobalsDefinition.LevelBasedExpScale
// 0x000C
struct FLevelBasedExpScale
{
	int32_t                                            LevelDifference;                               // 0x0000 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	float                                              HigherLevelEnemyExpScale;                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LowerLevelEnemyExpScale;                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.GlobalsDefinition.LocalizedFloatingCombatTextParticle
// 0x0018
struct FLocalizedFloatingCombatTextParticle
{
	class UParticleSystem*                             ParticleEffectTemplate;                        // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FLocalizedFloatingCombatTextMaterial> Localizations;                                 // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.GlobalsDefinition.LocalizedFloatingCombatTextMaterial
// 0x0018
struct FLocalizedFloatingCombatTextMaterial
{
	class FString                                      Language;                                      // 0x0000 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UMaterialInstance*                           LocalizedMaterial;                             // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.GlobalsDefinition.InputContextData
// 0x0010
struct FInputContextData
{
	struct FName                                       ContextName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UInputContextDefinition*                     Definition;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.GlobalsDefinition.LevelBasedDamageScale
// 0x000C
struct FLevelBasedDamageScale
{
	int32_t                                            LevelDifference;                               // 0x0000 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	float                                              HigherLevelAttackerDmgScale;                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LowerLevelAttackerDmgScale;                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.GlobalsDefinition.RarityLevelColor
// 0x000E
struct FRarityLevelColor
{
	int32_t                                            MinLevel;                                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxLevel;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      Color;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            DropLifeSpanType;                              // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            RarityRating;                                  // 0x000D (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.GlobalsDefinition.ExpAwardWeight
// 0x000C
struct FExpAwardWeight
{
	int32_t                                            Players;                                       // 0x0000 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	float                                              KillerExpBonus;                                // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ExpWeight;                                     // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowExperiencePipeline.DamageTypeExpModifier
// 0x0014
struct FDamageTypeExpModifier
{
	class UClass*                                      DamageSource;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDamageTypeDefinition*                       TypeDefinition;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Multiplier;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.GlobalsDefinition.KillSkillDuration
// 0x0008
struct FKillSkillDuration
{
	int32_t                                            Players;                                       // 0x0000 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.DrunkenWaveComponent.DrunkenWaveFormData
// 0x0018
struct FDrunkenWaveFormData
{
	struct FVector2D                                   WaveFreq;                                      // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector2D                                   WaveAmp;                                       // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector2D                                   WavePhase;                                     // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.EffectCollectionDefinition.ConditionalParticleEffectData
// 0x0010
struct FConditionalParticleEffectData
{
	class UExpressionEvaluator*                        Expression;                                    // 0x0000 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UParticleSystem*                             ParticleEffect;                                // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.ExplosionCollectionDefinition.ConditionalExplosionData
// 0x0010
struct FConditionalExplosionData
{
	class UExpressionEvaluator*                        Expression;                                    // 0x0000 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UExplosionDefinition*                        Explosion;                                     // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.ExplosionDefinition.RecentExplosion
// 0x0018
struct FRecentExplosion
{
	struct FName                                       ExplosionInstigatorName;                       // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     ExplosionLocation;                             // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              ExpirationTime;                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.ExplosionDefinition.ExplosionScaleData
// 0x0058
struct FExplosionScaleData
{
	class UParticleSystem*                             ExplosionPSTemplate;                           // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            MinRadius;                                     // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            MaxRadius;                                     // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinParticleScale;                              // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxParticleScale;                              // 0x0014 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    ExplosionAkEvent;                              // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bPlayCamAnimOnAlivePlayersOnly : 1;            // 0x0020 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UCameraAnim*                                 CameraAnim;                                    // 0x0028 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinCameraEffectDistance;                       // 0x0030 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxCameraEffectDistance;                       // 0x0034 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UForceFeedbackWaveform*                      FFWaveform;                                    // 0x0038 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UWillowExplosionImpactDefinition*            ImpactEffect;                                  // 0x0040 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bDamageOverPeriodOfTime : 1;                   // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              MaxDamageDuration;                             // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DamageInterval;                                // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bDamageEachTargetOnlyOnce : 1;                 // 0x0054 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bExpandRadiusOverTime : 1;                     // 0x0054 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct WillowGame.WillowInteractiveObject.InteractiveObjectReplicatedStateData
// 0x0020
struct FInteractiveObjectReplicatedStateData
{
	struct FReplicatedBehaviorConsumerState            ReplicatedBehaviorConsumerState;               // 0x0000 (0x000C) [0x0000000000000000]               
	struct FCompressedBodyState2                       ReplicatedInstanceDataState;                   // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.LootConfigurationData
// 0x0040
struct FLootConfigurationData
{
	struct FName                                       ConfigurationName;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAttributeInitializationDefinition*          LootGameStageVarianceFormula;                  // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Weight;                                        // 0x0010 (0x0020) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FLootAttachmentData>           ItemAttachments;                               // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.LootAttachmentData
// 0x0030
struct FLootAttachmentData
{
	class UItemPoolDefinition*                         ItemPool;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                PoolProbability;                               // 0x0008 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AttachmentPointName;                           // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.FiringModeDefinition.BulletEventResponse
// 0x0030
struct FBulletEventResponse
{
	int32_t                                            SplitNum;                                      // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SplitAngle;                                    // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SplitAngleOffset;                              // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SplitDistance;                                 // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UFiringModeDefinition* SplitFire;                                     // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              NewSpeed;                                      // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bDetonate : 1;                                 // 0x001C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bRespawnTracer : 1;                            // 0x001C (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bUpdateBeamSourceLocation : 1;                 // 0x001C (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	class TArray<class UBehaviorBase*>                 Behaviors;                                     // 0x0020 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct WillowGame.FiringModeDefinition.BulletTimerEvent
// 0x0038
struct FBulletTimerEvent
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FBulletEventResponse                        Response;                                      // 0x0008 (0x0030) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.FiringModeDefinition.WaveMotionData
// 0x0028
struct FWaveMotionData
{
	uint32_t                                           bUseCustomWaveMotion : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FVector                                     WaveFreq;                                      // 0x0004 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     WaveAmp;                                       // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     WavePhase;                                     // 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.FiringModeDefinition.FiringPatternLine
// 0x0044
struct FFiringPatternLine
{
	struct FRotator                                    StartPoint;                                    // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    EndPoint;                                      // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseStartPointOnly : 1;                        // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FWaveMotionData                             CustomWaveMotion;                              // 0x001C (0x0028) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.FiringModeDefinition.BulletImpactEventData
// 0x0018
struct FBulletImpactEventData
{
	uint8_t                                            DamageSurfaceType;                             // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bDisableRegularBulletDamage : 1;               // 0x0004 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class TArray<class UBehaviorBase*>                 Behaviors;                                     // 0x0008 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct WillowGame.GameBalanceDefinition.RegionBalanceData
// 0x0090
struct FRegionBalanceData
{
	class URegionDefinition*                           Region;                                        // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                MinDefaultGameStage;                           // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                MaxDefaultGameStage;                           // 0x0028 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                DefaultAwesomeLevel;                           // 0x0048 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bSpecifyBoostAbovePlayer : 1;                  // 0x0068 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                GameStageIncreaseAbovePlayer;                  // 0x0070 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.GFxTextListContainer.GFxTextEntry
// 0x0005
struct FGFxTextEntry
{
	int32_t                                            ArrayIdx;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Kind;                                          // 0x0004 (0x0001) [0x0000000000000000]               
};

// ScriptStruct WillowGame.GFxTextListContainer.SortableDataElement
// 0x0018
struct FSortableDataElement
{
	uint32_t                                           bFiltered : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            OneTimeIdx;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            CategoryIdx;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	class UObject*                                     Data;                                          // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.GFxTextListContainer.OneTimeDataElement
// 0x0040
struct FOneTimeDataElement
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Icon;                                          // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      IconOverride;                                  // 0x0020 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FColor                                      TextColor;                                     // 0x0030 (0x0004) [0x0000000000000000]               
	class UObject*                                     Data;                                          // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.GFxTextListContent.FlashTextEntry
// 0x0030
struct FFlashTextEntry
{
	class FString                                      TextEntry;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      IconFrameLabel;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ArrayType;                                     // 0x0020 (0x0001) [0x0000000000000000]               
	class UObject*                                     Obj;                                           // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.HitRegionHelper.HitRegionDamage
// 0x0038
struct FHitRegionDamage
{
	class UBodyHitRegionDefinition*                    BodyHitRegion;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Damage;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RecentDamage;                                  // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasGored : 1;                                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<float>                                LastPctHealthForRunDamageTriggeredBehaviors;   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                LastPctHealthForRunHealingTriggeredBehaviors;  // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.IFireShotBehavior.FireShotParams
// 0x0058
struct FFireShotParams
{
	class UFiringModeDefinition*                       FiringModeDefinition;                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Direction;                                     // 0x0008 (0x000C) [0x0000000000000000]               
	class UIWorldBody*                                 WorldBodyInterface_Object;                     // 0x0018 (0x0010) [0x0000000000000000] 
	class UIWorldBody*                                 WorldBodyInterface_Interface;                  // 0x0018 (0x0010) [0x0000000000000000]               
	uint32_t                                           bTreatDirectionAsDestination : 1;              // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSimulateWeaponFire : 1;                       // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              DamageAmount;                                  // 0x002C (0x0004) [0x0000000000000000]               
	float                                              DamageRadius;                                  // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              Momentum;                                      // 0x0034 (0x0004) [0x0000000000000000]               
	class UClass*                                      DamageType;                                    // 0x0038 (0x0008) [0x0000000000000000]               
	class UDamageTypeDefinition*                       DamageTypeDefinition;                          // 0x0040 (0x0008) [0x0000000000000000]               
	class UImpactDefinition*                           ImpactDefinition;                              // 0x0048 (0x0008) [0x0000000000000000]               
	struct FName                                       FireSourceSocket;                              // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.InputDeviceDefinition.LookAxisDefinitionData
// 0x0010
struct FLookAxisDefinitionData
{
	class ULookAxisDefinition*                         Horizontal;                                    // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class ULookAxisDefinition*                         Vertical;                                      // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.InputDeviceDefinition.InputDeviceAxisData
// 0x0040
struct FInputDeviceAxisData
{
	class UInputButtonDefinition*                      ButtonDefinition;                              // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            AxisParameter;                                 // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DeadZone;                                      // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Speed;                                         // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              AbsoluteAxis;                                  // 0x0014 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            InvertMultiplier;                              // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       ActionName;                                    // 0x001C (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      Caption;                                       // 0x0028 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint32_t                                           ShowInRebindScreen : 1;                        // 0x0038 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	int32_t                                            SortIndex;                                     // 0x003C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.InputDeviceDefinition.InputDeviceButtonData
// 0x0058
struct FInputDeviceButtonData
{
	class UInputButtonDefinition*                      ButtonDefinition;                              // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UInputActionDefinition*>        PressActions;                                  // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UInputActionDefinition*>        TapActions;                                    // 0x0018 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UInputActionDefinition*>        HoldActions;                                   // 0x0028 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class FString                                      Caption;                                       // 0x0038 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UInputActionDefinition*                      RemapToDefaultLayoutInputAction;               // 0x0048 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           ShowInRebindScreen : 1;                        // 0x0050 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	int32_t                                            SortIndex;                                     // 0x0054 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.InputRemappingDefinition.InputRemappingButtonData
// 0x0050
struct FInputRemappingButtonData
{
	struct FName                                       DefaultKeyName;                                // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       RemappedKeyName;                               // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UInputActionDefinition*>        RemappedPressActions;                          // 0x0010 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UInputActionDefinition*>        RemappedTapActions;                            // 0x0020 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UInputActionDefinition*>        RemappedHoldActions;                           // 0x0030 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class FString                                      Caption;                                       // 0x0040 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.InputRemappingDefinition.InputRemappingAxisData
// 0x0028
struct FInputRemappingAxisData
{
	struct FName                                       DefaultAxisName;                               // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       RemappedAxisName;                              // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            RemappedAxisParameter;                         // 0x0010 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bInvertInput : 1;                              // 0x0014 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class FString                                      Caption;                                       // 0x0018 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.InteractiveObjectGradeModifierData
// 0x0058
struct FInteractiveObjectGradeModifierData
{
	class UInteractiveObjectDefinition* CustomInteractiveObject;                       // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      DisplayName;                                   // 0x0008 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FAttributeInitializationData                ExpLevel;                                      // 0x0018 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UInteractiveObjectLootListDefinition*> IncludedCustomLootLists;                       // 0x0038 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FLootConfigurationData>        CustomLoot;                                    // 0x0048 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.InteractiveObjectBalanceDefinition.InteractiveObjectGameStageGradeWeightData
// 0x0058 (0x0048 - 0x00A0)
struct FInteractiveObjectGameStageGradeWeightData : FGameStageGradeWeightData
{
	struct FInteractiveObjectGradeModifierData         GradeModifiers;                                // 0x0048 (0x0058) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.InterpTrackBehaviors.BehaviorKeyFrameEventData
// 0x0004 (0x0008 - 0x000C)
struct FBehaviorKeyFrameEventData : FSpecializedBehaviorEvent
{
	float                                              KeyTime;                                       // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.ISimpleAnimPlayer.SimpleAnimStateData
// 0x0004
struct FSimpleAnimStateData
{
	int32_t                                            AnimState;                                     // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.ItemPoolDefinition.BalancedInventoryData
// 0x0034
struct FBalancedInventoryData
{
	class UItemPoolDefinition*                         ItmPoolDefinition;                             // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UInventoryBalanceDefinition*                 InvBalanceDefinition;                          // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Probability;                                   // 0x0010 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bDropOnDeath : 1;                              // 0x0030 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.LevelDependencyList.PersistentMapDependencies
// 0x0040
struct FPersistentMapDependencies
{
	struct FName                                       PersistentMap;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FName>                         SecondaryMaps;                                 // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FName>                         ConnectedPersistents;                          // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      LevelName;                                     // 0x0028 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGameReleaseDefinition*                      GameReleaseDef;                                // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.LootConfigurationDefinition.LootData
// 0x0030
struct FLootData
{
	struct FAttributeInitializationData                Weight;                                        // 0x0000 (0x0020) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UItemPoolDefinition*>           ItemPools;                                     // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.ManufacturerAttributeValueResolver.ManufacturerSelectorData
// 0x0028
struct FManufacturerSelectorData
{
	struct FName                                       AssociatedManufacturerName;                    // 0x0000 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAttributeInitializationData                ValueIfMatched;                                // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.NPCLoadBalancer.NPCList
// 0x0018
struct FNPCList
{
	class AWillowMind*                                 Mind;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              LastPathTime;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              PathRequestTime;                               // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bWantsToPath : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOnPerch : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bForceStopped : 1;                             // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsPathing : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bCanPath : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              Score;                                         // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.OnlineMessageGFxMovie.OnlineMessage
// 0x0020
struct FOnlineMessage
{
	struct FPlatformUserId                             AssociatedUserId;                              // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  OnlineMessageClip;                             // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            MessageId;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlocking : 1;                                 // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHiding : 1;                                   // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bActive : 1;                                   // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            ProfileImageIndex;                             // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              HideTimer;                                     // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.PlayerActionExpressionEvaluator.EvalActionData
// 0x0005
struct FEvalActionData
{
	uint32_t                                           bIsActive : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.PlayerClassCountAttributeValueResolver.PlayerClassCountOverride
// 0x0010
struct FPlayerClassCountOverride
{
	int32_t                                            Override;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class UPlayerClassIdentifierDefinition*            PlayerClassIdDef;                              // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.PlayerClassIdentifierDefinition.CustomizationItemData
// 0x0010
struct FCustomizationItemData
{
	int32_t                                            ItemPoolKey;                                   // 0x0000 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class UItemPoolDefinition*                         CustomizationItemPool;                         // 0x0008 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct WillowGame.PlayerInteractionManager.ActiveInteraction
// 0x002C
struct FActiveInteraction
{
	float                                              TimeLength;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TimeRemaining;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	class UPlayerInteractionServer*                    InteractionServer;                             // 0x0008 (0x0008) [0x0000000000000000]               
	class TArray<class AWillowPlayerController*>       Players;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AWillowPlayerController*                     Instigator;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	uint32_t                                           IsValid : 1;                                   // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeTierLayoutData
// 0x0030
struct FSkillTreeTierLayoutData
{
	class USkillTreeBranchDefinition*                  ParentBranchDefinition;                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            TierNumber;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class USkillTreeBranchDefinition*                  DependencyBranchDefinition;                    // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            DependencyTierNumber;                          // 0x0018 (0x0004) [0x0000000000000000]               
	class TArray<class USkillDefinition*>              Skills;                                        // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.PlayerSkillTree.PlayerSkillTreeBranchData
// 0x0048
struct FPlayerSkillTreeBranchData
{
	class USkillTreeBranchDefinition*                  Definition;                                    // 0x0000 (0x0008) [0x0000000000100000]               
	int32_t                                            BranchPointsToUnlockNextBranch;                // 0x0008 (0x0004) [0x0000000000100000]               
	int32_t                                            Index;                                         // 0x000C (0x0004) [0x0000000000100000]               
	int32_t                                            ParentBranchIndex;                             // 0x0010 (0x0004) [0x0000000000100000]               
	int32_t                                            PrevBranchIndex;                               // 0x0014 (0x0004) [0x0000000000100000]               
	int32_t                                            NextBranchIndex;                               // 0x0018 (0x0004) [0x0000000000100000]               
	class TArray<int32_t>                              ChildBranchIndices;                            // 0x0020 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              TierIndices;                                   // 0x0030 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UPlayerSkillTree*                            Owner;                                         // 0x0040 (0x0008) [0x0000000000100000]               
};

// ScriptStruct WillowGame.PlayerSkillTree.PlayerSkillTreeTierData
// 0x0038
struct FPlayerSkillTreeTierData
{
	class TArray<int32_t>                              SkillIndices;                                  // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            BranchPointsToUnlockTier;                      // 0x0010 (0x0004) [0x0000000000100000]               
	int32_t                                            Index;                                         // 0x0014 (0x0004) [0x0000000000100000]               
	int32_t                                            PrevTierIndex;                                 // 0x0018 (0x0004) [0x0000000000100000]               
	int32_t                                            NextTierIndex;                                 // 0x001C (0x0004) [0x0000000000100000]               
	int32_t                                            ParentBranchIndex;                             // 0x0020 (0x0004) [0x0000000000100000]               
	int32_t                                            TierNumber;                                    // 0x0024 (0x0004) [0x0000000000100000]               
	uint32_t                                           bUnlocked : 1;                                 // 0x0028 (0x0004) [0x0000000000100000] [0x00000001] 
	class UPlayerSkillTree*                            Owner;                                         // 0x0030 (0x0008) [0x0000000000100000]               
};

// ScriptStruct WillowGame.PlayerSkillTree.PlayerSkillTreeSkillData
// 0x0030
struct FPlayerSkillTreeSkillData
{
	class USkillDefinition*                            Definition;                                    // 0x0000 (0x0008) [0x0000000000100000]               
	int32_t                                            Index;                                         // 0x0008 (0x0004) [0x0000000000100000]               
	int32_t                                            PrevSkillIndex;                                // 0x000C (0x0004) [0x0000000000100000]               
	int32_t                                            NextSkillIndex;                                // 0x0010 (0x0004) [0x0000000000100000]               
	int32_t                                            ParentTierIndex;                               // 0x0014 (0x0004) [0x0000000000100000]               
	int32_t                                            PrevSkillTypeIndex;                            // 0x0018 (0x0004) [0x0000000000100000]               
	int32_t                                            NextSkillTypeIndex;                            // 0x001C (0x0004) [0x0000000000100000]               
	int32_t                                            Grade;                                         // 0x0020 (0x0004) [0x0000000000100000]               
	class UPlayerSkillTree*                            Owner;                                         // 0x0028 (0x0008) [0x0000000000100000]               
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeSkillStateData
// 0x001C
struct FSkillTreeSkillStateData
{
	class USkillDefinition*                            SkillDefinition;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class USkillTreeBranchDefinition*                  ParentBranchDefinition;                        // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            TierNumber;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillGrade;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsUnlocked : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeTierStateData
// 0x0014
struct FSkillTreeTierStateData
{
	class USkillTreeBranchDefinition*                  ParentBranchDefinition;                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            TierNumber;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            PointsSpentInTier;                             // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsUnlocked : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.PlayerSkillTree.SkillTreeBranchStateData
// 0x0014
struct FSkillTreeBranchStateData
{
	class USkillTreeBranchDefinition*                  BranchDefinition;                              // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PointsSpentInBranch;                           // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxPointsForBranch;                            // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsUnlocked : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.ProjectileDefinition.HomingThresholdEvent
// 0x0008 (0x0008 - 0x0010)
struct FHomingThresholdEvent : FSpecializedBehaviorEvent
{
	uint32_t                                           bTriggerOnce : 1;                              // 0x0008 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	float                                              Radius;                                        // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.ReferenceSet.ObjectReference
// 0x0008
struct FObjectReference
{
	class UObject*                                     Obj;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.SharedEventProviderDefinition.SharedEventMessageData
// 0x0018
struct FSharedEventMessageData
{
	class AActor*                                      Instigator;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Other;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              FloatParams[0x2];                              // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.Skill.AppliedSkillEffect
// 0x0020
struct FAppliedSkillEffect
{
	class TArray<struct FAppliedModifierSkillEffect>   Modifiers;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UObject*>                       TargetContexts;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.Skill.AppliedModifierSkillEffect
// 0x0020
struct FAppliedModifierSkillEffect
{
	class UAttributeModifier*                          Modifier;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UAttributeDefinitionBase*                    AttributeToModify;                             // 0x0008 (0x0008) [0x0000000000000000]               
	class TArray<class UObject*>                       Contexts;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.SkillEffectManager.DeferredSkillActivationData
// 0x0040
struct FDeferredSkillActivationData
{
	class UISkillInstigator*                           SkillInstigator_Object;                        // 0x0000 (0x0010) [0x0000000000000000] 
	class UISkillInstigator*                           SkillInstigator_Interface;                     // 0x0000 (0x0010) [0x0000000000000000]               
	class AActor*                                      BuffInstigator;                                // 0x0010 (0x0008) [0x0000000000000000]               
	class USkillDefinition*                            Definition;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	class UObject*                                     AdditionalSkillTarget;                         // 0x0020 (0x0008) [0x0000000000000000]               
	int32_t                                            SkillGrade;                                    // 0x0028 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             StateChangeDelegate;                           // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.SkillTreeBranchDefinition.Tier
// 0x0014
struct FTier
{
	class TArray<class USkillDefinition*>              Skills;                                        // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            PointsToUnlockNextTier;                        // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.SkillTreeBranchLayoutDefinition.TierLayout
// 0x0010
struct FTierLayout
{
	class TArray<uint32_t>                             bCellIsOccupied;                               // 0x0000 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.StaggerDefinition.StaggeredRecoveryRotationData
// 0x0009
struct FStaggeredRecoveryRotationData
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneAxis;                                      // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowDeclarations.CardInfo
// 0x0048
struct FCardInfo
{
	struct FName                                       CardName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CellWidth;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CellHeight;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TextureWidth;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TextureHeight;                                 // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      MainPlayerLinkageName;                         // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      SplitPlayerLinkageName;                        // 0x0028 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FCardInfoRelativeToPanel>      CompareSettings;                               // 0x0038 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowDeclarations.CardInfoRelativeToPanel
// 0x0018
struct FCardInfoRelativeToPanel
{
	struct FName                                       PanelName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     ComparePosition;                               // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              CompareScale;                                  // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowDeclarations.CellContentData
// 0x001C
struct FCellContentData
{
	class UTexture*                                    Tex;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class UMeshComponent*                              Mesh;                                          // 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AWillowInventory*                            Inv;                                           // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            ExtArrayIndex;                                 // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowDeclarations.PanelInfo
// 0x0040
struct FPanelInfo
{
	struct FName                                       PanelName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     PanelFocused;                                  // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     PanelUnfocused;                                // 0x0014 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     PanelCompare;                                  // 0x0020 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            PanelBackground;                               // 0x002C (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CellWidth;                                     // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CellHeight;                                    // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TextureWidth;                                  // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TextureHeight;                                 // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.TestMapsListDefinition.TestMapsListDatum
// 0x0020
struct FTestMapsListDatum
{
	uint32_t                                           bUseLoader : 1;                                // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class FString                                      MapDisplayName;                                // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FName                                       MapName;                                       // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.TextMarkupDictionary.TextMarkupEntry
// 0x0050
struct FTextMarkupEntry
{
	class FString                                      MarkupTag;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      HTMLMarkupBeginText;                           // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      HTMLMarkupEndText;                             // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      MarkupBeginTag;                                // 0x0030 (0x0010) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      MarkupEndTag;                                  // 0x0040 (0x0010) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WeaponAmmoResourceAttributeValueResolver.WeaponAmmoResourceSelectorData
// 0x0028
struct FWeaponAmmoResourceSelectorData
{
	struct FName                                       AssociatedResourceName;                        // 0x0000 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAttributeInitializationData                ValueIfMatched;                                // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WeaponTracerManager.WeaponTracerInst
// 0x0028
struct FWeaponTracerInst
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              LifeSpan;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFirstUpdate : 1;                              // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	class UParticleSystemComponent*                    PartRef;                                       // 0x0020 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct WillowGame.WeaponTypeAttributeValueResolver.WeaponTypeSelectorData
// 0x0028
struct FWeaponTypeSelectorData
{
	uint8_t                                            WeaponType;                                    // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ValueIfMatched;                                // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowAIComponent.CombatZoneSearchData
// 0x0028
struct FCombatZoneSearchData
{
	float                                              ZoneMoveDist;                                  // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    ZoneTimeLimit;                                 // 0x0004 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    TargetRange;                                   // 0x000C (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinHeight;                                     // 0x0014 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bCanFail : 1;                                  // 0x0018 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint8_t                                            LineOfSight;                                   // 0x001C (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    LineOfSightTimeLimit;                          // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowAIComponent.CombatPointSearchData
// 0x0008 (0x0028 - 0x0030)
struct FCombatPointSearchData : FCombatZoneSearchData
{
	uint32_t                                           bUseCover : 1;                                 // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              PointRadius;                                   // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowAIComponent.CombatPointData
// 0x002C
struct FCombatPointData
{
	int32_t                                            Slot;                                          // 0x0000 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FActorReference                             Actor;                                         // 0x0010 (0x0018) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bClaimed : 1;                                  // 0x0028 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct WillowGame.WillowAIComponent.CombatPointDebugData
// 0x0014
struct FCombatPointDebugData
{
	uint32_t                                           bBest : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Score;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowAnimNode_AimState.AimAnimTransitionData
// 0x0018
struct FAimAnimTransitionData
{
	uint8_t                                            FromState;                                     // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ToState;                                       // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName;                                      // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPlayInReverse : 1;                            // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.PrismDataContainer
// 0x006C
struct FPrismDataContainer
{
	class TArray<struct FBoneRotateData>               RotateBoneTranslation;                         // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBoneRotateData>               RotateBone;                                    // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBoneRotateData>               RotateRefBone;                                 // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FAnimDeltaDataList>            AnimDeltaList;                                 // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FAnimDeltaDataList>            AnimDeltaRefList;                              // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FAnimSwapData>                 SwapList;                                      // 0x0050 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FRotator                                    RotateRootMotion;                              // 0x0060 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.BoneRotateData
// 0x0010
struct FBoneRotateData
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Rotation;                                      // 0x0004 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.AnimDeltaDataList
// 0x0010
struct FAnimDeltaDataList
{
	class TArray<int32_t>                              IndexList;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowAnimNode_Prism.AnimSwapData
// 0x0008
struct FAnimSwapData
{
	int32_t                                            Index1;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Index2;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowAnimNodeBlendWheeledPawn.DirChangeRateRange
// 0x0008
struct FDirChangeRateRange
{
	float                                              DirDegreesPerSecond;                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpeedRange;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowAnimNodeFeatherBlend.FeatherBoneBlendTarget
// 0x000C
struct FFeatherBoneBlendTarget
{
	struct FName                                       StartBoneName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendWeight;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowAutoAimStrategy.LockOnProfile
// 0x002C
struct FLockOnProfile
{
	class UITargetable*                                Target_Object;                                 // 0x0000 (0x0010) [0x0000000000000000] 
	class UITargetable*                                Target_Interface;                              // 0x0000 (0x0010) [0x0000000000000000]               
	struct FVector                                     Intersection;                                  // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     MagneticCenterToIntersect;                     // 0x001C (0x000C) [0x0000000000000000]               
	uint32_t                                           bWithinAcquisitionRadius : 1;                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWithinSlowdownRadius : 1;                     // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWithinCircleStrafeRadius : 1;                 // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct WillowGame.WillowAutoAimStrategy.ViewProfile
// 0x0070
struct FViewProfile
{
	class AWillowPlayerController*                     InPlayer;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     ViewNormal;                                    // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     ViewLocation;                                  // 0x0014 (0x000C) [0x0000000000000000]               
	struct FRotator                                    ViewRotation;                                  // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              ViewNormalDotViewNormal;                       // 0x002C (0x0004) [0x0000000000000000]               
	struct FMatrix                                     ViewMatrix;                                    // 0x0030 (0x0040) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowWeapon.LockOnTargetStateStruct
// 0x0014
struct FLockOnTargetStateStruct
{
	class AActor*                                      CurrentTarget;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           LockOnRequested : 1;                           // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           LockOnInProgress : 1;                          // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CoolDownStartTime;                             // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowWeapon.WeaponZoomState
// 0x0006
struct FWeaponZoomState
{
	int32_t                                            Padding;                                       // 0x0000 (0x0004) [0x1000000000000000]               
	uint8_t                                            State;                                         // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            Level;                                         // 0x0005 (0x0001) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowWeapon.ShellCasingImpact
// 0x0010
struct FShellCasingImpact
{
	float                                              ImpactTime;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     ImpactLocation;                                // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowWeapon.WeaponBoneControllerInstance
// 0x0018
struct FWeaponBoneControllerInstance
{
	uint8_t                                            BoneControlType;                               // 0x0000 (0x0001) [0x0000000000000000]               
	class UIWeaponBoneController*                      BoneController_Object;                         // 0x0008 (0x0010) [0x0000000000000000] 
	class UIWeaponBoneController*                      BoneController_Interface;                      // 0x0008 (0x0010) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowCheatManager.StatusEffectNameMapping
// 0x0020
struct FStatusEffectNameMapping
{
	class FString                                      StatusEffectName;                              // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StatusEffectDefinitionName;                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowCheatManager.BalanceMeResourceUpgradePath
// 0x0020
struct FBalanceMeResourceUpgradePath
{
	class FString                                      ResourceName;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              PlayerLevelForEachUpgrade;                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowClanDefinition.ClanMaterialData
// 0x0010
struct FClanMaterialData
{
	class UMaterialInstance*                           SourceMaterial;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstance*                           ReplacementMaterial;                           // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowClanDefinition.ClanSwitchData
// 0x000C
struct FClanSwitchData
{
	struct FName                                       SwitchName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SwitchValue;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowDamageTypeDefinition.PlayerRecentDamageEventData
// 0x0030
struct FPlayerRecentDamageEventData
{
	class UWillowDamageTypeDefinition*                 DamageTypeDefinition;                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     DamageLocation;                                // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              TotalDamageForDamageType;                      // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            DamageEventFlags;                              // 0x0018 (0x0004) [0x0000000000000000]               
	class AActor*                                      DamagedActor;                                  // 0x0020 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDirty : 1;                                    // 0x0028 (0x0004) [0x1000000000000000] [0x00000001] 
	float                                              DamageTime;                                    // 0x002C (0x0004) [0x1000000000000000]               
};

// ScriptStruct WillowGame.WillowDamageTypeDefinition.AggregateFloatingCombatTextData
// 0x0040
struct FAggregateFloatingCombatTextData
{
	struct FPlayerRecentDamageEventData                DamageEventData;                               // 0x0000 (0x0030) [0x0000000000000000]               
	class UParticleSystemComponent*                    FloatingCombatText;                            // 0x0030 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              TimeCreated;                                   // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              TimeLastUpdated;                               // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowDeclarations.UnloadableDlcPendingRewardData
// 0x0028
struct FUnloadableDlcPendingRewardData
{
	class FString                                      MissionDefName;                                // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FInventorySerialNumber                      WeaponRewards[0x2];                            // 0x0010 (0x0008) [0x0000000000000000]               
	struct FInventorySerialNumber                      ItemRewards[0x2];                              // 0x0018 (0x0008) [0x0000000000000000]               
	int32_t                                            DlcPackageId;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           bGrantAltReward : 1;                           // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowDialogNameTag.ScaleformPortraitData
// 0x001C
struct FScaleformPortraitData
{
	class FString                                      ScaleformLabelName;                            // 0x0000 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class USwfMovie* PortraitMovie;                                 // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bIsSquarePortrait : 1;                         // 0x0018 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowDialogNameTag.VideoPortraitData
// 0x0008
struct FVideoPortraitData
{
	class UTextureMovie* VideoMovie;                                    // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowDialogNameTag.EchoPortraitInfo
// 0x0030
struct FEchoPortraitInfo
{
	uint8_t                                            PortraitType;                                  // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FScaleformPortraitData                      ScaleformPortrait;                             // 0x0008 (0x0020) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FVideoPortraitData                          VideoPortrait;                                 // 0x0028 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowDialogNameTag.EmotePortraitInfo
// 0x0038
struct FEmotePortraitInfo
{
	class UDialogEmoteDefinition*                      Emote;                                         // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FEchoPortraitInfo                           EmotePortrait;                                 // 0x0008 (0x0030) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowDialogNameTag.EmoteStance
// 0x0010
struct FEmoteStance
{
	class UDialogEmoteDefinition*                      Emote;                                         // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpecialMoveDefinition*                      StanceSpecialMove;                             // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.CompatibilityVersionInfo
// 0x0014
struct FCompatibilityVersionInfo
{
	int32_t                                            CurrentCompatPackVersion;                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FDlcCompatibilityData                       CurrentCompatibilityMask;                      // 0x0004 (0x0010) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.DLCMissionData
// 0x0018
struct FDLCMissionData
{
	int32_t                                            MinMissionNumber;                              // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxMissionNumber;                              // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      MissionNameLocKey;                             // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.SeasonPassPackageCount
// 0x000C
struct FSeasonPassPackageCount
{
	int32_t                                            SeasonPassId;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PackageCount;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPreOrder : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.SeasonPassOfferUnion
// 0x0034
struct FSeasonPassOfferUnion
{
	class FString                                      AssociatedSeasonPassOfferId;                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PaidOfferId;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FreeOfferId;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SeasonPassId;                                  // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowDownloadableContentManager.ContentState
// 0x0008
struct FContentState
{
	int32_t                                            LicensedMask;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            InstalledMask;                                 // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowDynamicNavMeshConnectionPoint.DynamicNavMeshConnection
// 0x0010
struct FDynamicNavMeshConnection
{
	float                                              MaxConnectionDistance;                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AWillowDynamicNavMeshConnectionPoint*        ConnectedPoint;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowEffectCoordinator.CoordinatedEffectProcess
// 0x001A
struct FCoordinatedEffectProcess
{
	class UObject*                                     Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FCoordinatedEffectThread>      Threads;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Player0MatIndex;                               // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            Player1MatIndex;                               // 0x0019 (0x0001) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowEffectCoordinator.CoordinatedEffectIndices
// 0x0008
struct FCoordinatedEffectIndices
{
	int32_t                                            StartingIndex;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            EndingIndex;                                   // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowEffectCoordinator.CoordinatedEffectThread
// 0x0060
struct FCoordinatedEffectThread
{
	class UCoordinatedEffectDefinition*                EffectDefinition;                              // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       IgnoreInstanceData;                            // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              LatentFloat;                                   // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TargetFloat;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              ParticleSpeedMultiplier;                       // 0x0018 (0x0004) [0x0000000000000000]               
	struct FCoordinatedEffectIndices                   CriticalParticleEffects;                       // 0x001C (0x0008) [0x0000000000000000]               
	struct FCoordinatedEffectIndices                   ParticleEffects;                               // 0x0024 (0x0008) [0x0000000000000000]               
	struct FCoordinatedEffectIndices                   AudioEffects;                                  // 0x002C (0x0008) [0x0000000000000000]               
	struct FCoordinatedEffectIndices                   HiddenParticles;                               // 0x0034 (0x0008) [0x0000000000000000]               
	class AActor*                                      EffectOwner;                                   // 0x0040 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHideInstanceDataParticles : 1;                // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPendingDelete : 1;                            // 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FScriptDelegate                             EffectCompleteDelegate;                        // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowEffectNetworkManager.BasicEmitterData
// 0x0028
struct FBasicEmitterData
{
	class UParticleSystem*                             Template;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              CreationTime;                                  // 0x0024 (0x0004) [0x1000000000000000]               
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.EmitterTemplateOptions
// 0x0014
struct FEmitterTemplateOptions
{
	class UParticleSystem*                             DefaultTemplate;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             CensoredTemplateAlternative;                   // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEffectEligibleForCensoring : 1;               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.FloatParameter
// 0x000C
struct FFloatParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.VectorParameter
// 0x0014
struct FVectorParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Value;                                         // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.ColorParameter
// 0x000C
struct FColorParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FColor                                      Value;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowReplicatedEmitter.ActorParameter
// 0x0010
struct FActorParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Value;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowImpactDefinition.PhysicalMaterialResponseData
// 0x0198
struct FPhysicalMaterialResponseData
{
	class UPhysicalMaterial*                           PhysicalMaterial;                              // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FNameBasedObjectPath                        PhysicalMaterialPath;                          // 0x0008 (0x0034) [0x0000000000000002] (CPF_Const)   
	struct FImpactResponseEffect                       ResponseEffect;                                // 0x0040 (0x0158) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowExplosionImpactDefinition.DecalData
// 0x0024
struct FDecalData
{
	class TArray<class UMaterialInterface*>            Materials;                                     // 0x0000 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	float                                              Width;                                         // 0x0010 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Height;                                        // 0x0014 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinScale;                                      // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxScale;                                      // 0x001C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           RandomRotation : 1;                            // 0x0020 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           CreateNewMaterialInstanceConstant : 1;         // 0x0020 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
};

// ScriptStruct WillowGame.WillowGameViewportClient.SubtitleProfile
// 0x0010
struct FSubtitleProfile
{
	float                                              MinX;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxX;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MinY;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxY;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowGFxDialogBox.ButtonData
// 0x0018
struct FButtonData
{
	struct FName                                       HintTag;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             OnButtonClicked;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowGlobals.LoadingMovieExceptionInfo
// 0x0010
struct FLoadingMovieExceptionInfo
{
	struct FName                                       PersistentMapName;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       Tag;                                           // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowHUD.FadePickupParticle
// 0x0014
struct FFadePickupParticle
{
	class AActor*                                      SourceActor;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    Particle;                                      // 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              FadeEndTime;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ReplicatedBeamState
// 0x0078
struct FReplicatedBeamState
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPlayImpactAudio : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUseWeaponAsSource : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bLocked : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bConnectedToOwner : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	class UFiringModeDefinition*                       FireDef;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class UImpactDefinition*                           ImpactDefinition;                              // 0x0010 (0x0008) [0x0000000000000000]               
	struct FBeamLocationData                           SourceData;                                    // 0x0018 (0x0030) [0x0000000000000000]               
	struct FBeamLocationData                           TargetData;                                    // 0x0048 (0x0030) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ReplicatedBeamEndPoints
// 0x0018
struct FReplicatedBeamEndPoints
{
	struct FVector                                     StartPoint;                                    // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     EndPoint;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowLightProjectileManager.BeamEffectImpactLocation
// 0x0014
struct FBeamEffectImpactLocation
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              ExpirationTime;                                // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowLightProjectileManager.ServerBeamState
// 0x00A0
struct FServerBeamState
{
	uint32_t                                           bDeleteMe : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBeamDamageData                             DamageData;                                    // 0x0008 (0x0040) [0x0000000000000000]               
	class AController*                                 DamageInstigator;                              // 0x0048 (0x0008) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              LockTime;                                      // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              NextTraceTime;                                 // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              BeamNetUpdateTime;                             // 0x005C (0x0004) [0x0000000000000000]               
	float                                              LastDamageApplicationTime;                     // 0x0060 (0x0004) [0x0000000000000000]               
	class AActor*                                      LastDamagedActor;                              // 0x0068 (0x0008) [0x0000000000000000]               
	float                                              NextRandomBoneTime;                            // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            ParentBeamIndex;                               // 0x0074 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              ChildBeamsIndicies;                            // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class AActor*>                        DirectDamagedActors;                           // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       Name;                                          // 0x0098 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowLightProjectileManager.BeamState
// 0x01CC
struct FBeamState
{
	int32_t                                            BeamIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FServerBeamState                            ServerOnlyState;                               // 0x0008 (0x00A0) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FReplicatedBeamState                        CoreBeamState;                                 // 0x00A8 (0x0078) [0x0000000000000000]               
	class UParticleSystemComponent*                    PartRef;                                       // 0x0120 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FAkPlayingInfo                              BeamAudioInfo;                                 // 0x0128 (0x0010) [0x0000000000080000] (CPF_Component)
	struct FAkPlayingInfo                              BeamImpactAudioInfo;                           // 0x0138 (0x0010) [0x0000000000080000] (CPF_Component)
	struct FVector                                     CurrentStartPoint;                             // 0x0148 (0x000C) [0x0000000000000000]               
	struct FVector                                     CurrentEndPoint;                               // 0x0154 (0x000C) [0x0000000000000000]               
	struct FVector                                     CurrentStartTangent;                           // 0x0160 (0x000C) [0x0000000000000000]               
	struct FVector                                     CurrentEndTangent;                             // 0x016C (0x000C) [0x0000000000000000]               
	struct FRotator                                    CurrentDirection;                              // 0x0178 (0x000C) [0x0000000000000000]               
	class AActor*                                      CurrentImpactActor;                            // 0x0188 (0x0008) [0x0000000000000000]               
	struct FVector                                     LastImpactLocation;                            // 0x0190 (0x000C) [0x0000000000000000]               
	float                                              LastImpactExpirationTime;                      // 0x019C (0x0004) [0x0000000000000000]               
	class UParticleSystemComponent*                    PartRefSS;                                     // 0x01A0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     CurrentStartPointSS;                           // 0x01A8 (0x000C) [0x0000000000000000]               
	struct FVector                                     CurrentStartTangentSS;                         // 0x01B4 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CurrentDirectionSS;                            // 0x01C0 (0x000C) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowProjectile.SplineFollowData
// 0x0034
struct FSplineFollowData
{
	class ASplineActor*                                Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              TurnRate;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     NextLocation;                                  // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Length;                                        // 0x0018 (0x0004) [0x1000000000000000]               
	float                                              Distance;                                      // 0x001C (0x0004) [0x1000000000000000]               
	uint8_t                                            OldPhysics;                                    // 0x0020 (0x0001) [0x1000000000000000]               
	struct FAIRange                                    OffsetRange;                                   // 0x0024 (0x0008) [0x1000000000000000]               
	struct FAIRange                                    DistanceRange;                                 // 0x002C (0x0008) [0x1000000000000000]               
};

// ScriptStruct WillowGame.WillowProjectile.HomingThresholdEventState
// 0x0004
struct FHomingThresholdEventState
{
	int32_t                                            TriggerCount;                                  // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowProjectile.HitActorData
// 0x0060
struct FHitActorData
{
	class AActor*                                      HitActor;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FTraceHitInfo                               HitInfo;                                       // 0x0008 (0x0028) [0x0000000000080000] (CPF_Component)
	struct FVector                                     HitLocation;                                   // 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitLocationRelativeToHitActor;                 // 0x003C (0x000C) [0x0000000000000000]               
	struct FVector                                     HitNormal;                                     // 0x0048 (0x000C) [0x0000000000000000]               
	struct FVector                                     HitDirection;                                  // 0x0054 (0x000C) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowProjectile.HomingTargetedActorInfo
// 0x000C
struct FHomingTargetedActorInfo
{
	class AActor*                                      HomingActor;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            HomingActorCount;                              // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPauseTicker.PauseTimerData
// 0x0020
struct FPauseTimerData
{
	struct FName                                       FuncName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bLoop : 1;                                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Rate;                                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Count;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	class UObject*                                     TimerObj;                                      // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerInput.InputDeviceButtonAddress
// 0x0018
struct FInputDeviceButtonAddress
{
	class UInputDeviceDefinition*                      SourceDevice;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            SourceIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	struct FPointer                                    RemappedButton;                                // 0x0010 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct WillowGame.WillowPlayerInput.KeyRebindingData
// 0x0010
struct FKeyRebindingData
{
	struct FName                                       DefaultKeyName;                                // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       RemappedKeyName;                               // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerInput.InputButtonData
// 0x0020
struct FInputButtonData
{
	class TArray<struct FInputDeviceButtonAddress>     InputDeviceHandlers;                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UInputButtonDefinition*                      InputButtonDef;                                // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            State;                                         // 0x0018 (0x0001) [0x0000000000000000]               
	float                                              LastPressedTime;                               // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerInput.DeviceLookAxisData
// 0x0018
struct FDeviceLookAxisData
{
	class UInputDeviceDefinition*                      SourceDevice;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       LookXAxisName;                                 // 0x0008 (0x0008) [0x0000000000000000]               
	struct FName                                       LookYAxisName;                                 // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerInput.InputDeviceAxisAddress
// 0x000C
struct FInputDeviceAxisAddress
{
	class UInputDeviceDefinition* SourceDevice;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            SourceIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerInput.AccelStateData
// 0x0010
struct FAccelStateData
{
	uint32_t                                           bIsAccelerating : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Warmup;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              CurrentSpeed;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Direction;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerInput.InputAxisData
// 0x0034
struct FInputAxisData
{
	class UInputButtonDefinition*                      InputButtonDef;                                // 0x0000 (0x0008) [0x0000000000000000]               
	struct FInputDeviceAxisAddress                     InputDeviceHandler;                            // 0x0008 (0x0010) [0x0000000000000000]               
	struct FPointer                                    ParameterPtr;                                  // 0x0018 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FAccelStateData                             AccelState;                                    // 0x0020 (0x0010) [0x0000000000000000]               
	uint32_t                                           bIsLookAxis : 1;                               // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsRemappedInverted : 1;                       // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct WillowGame.WillowPlayerPawnDataManager.LoadedOnDemandPackage
// 0x001C
struct FLoadedOnDemandPackage
{
	uint32_t                                           bReleased : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bServerManaged : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bPendingLoad : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FName                                       PackageName;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	class UObjectReferencer*                           ObjReferencer;                                 // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              ForceReleaseTimeout;                           // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerPawnDataManager.AsyncDataRequest
// 0x0044
struct FAsyncDataRequest
{
	uint8_t                                            RequestType;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           bLocal : 1;                                    // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanceled : 1;                                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      ObjectPath;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     Instigator;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	class AWillowPlayerController*                     PlayerContext;                                 // 0x0020 (0x0008) [0x0000000000000000]               
	class UObject*                                     Payload;                                       // 0x0028 (0x0008) [0x0000000000000000]               
	struct FName                                       CallbackEventName;                             // 0x0030 (0x0008) [0x0000000000000000]               
	int32_t                                            IntParam;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              FloatParam;                                    // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            Priority;                                      // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerReplicationInfo.ReplicatedStandInGear
// 0x0010
struct FReplicatedStandInGear
{
	struct FWeaponDefinitionData                       Weapon1Data;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FWeaponDefinitionData                       Weapon2Data;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerReplicationInfo.TrackedSkillState
// 0x000C
struct FTrackedSkillState
{
	class USkillDefinition*                            SkillDef;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PackedStackCountAndPercentComplete;            // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPlayerStateInfo.WorldDiscoveryData
// 0x000C
struct FWorldDiscoveryData
{
	struct FName                                       DiscoveryName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           HasBeenUncovered : 1;                          // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct WillowGame.WillowPlayerStateInfo.RecentlyResistedAttackData
// 0x0010
struct FRecentlyResistedAttackData
{
	class AActor*                                      DamagedActor;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            DamageType;                                    // 0x0008 (0x0001) [0x0000000000000000]               
	float                                              LastResistTime;                                // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPointLight.LightValues
// 0x0010
struct FLightValues
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Radius;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Brightness;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      LightColor;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct WillowGame.WillowPursuitGrid.PursuitNode
// 0x0040
struct FPursuitNode
{
	struct FVector                                     RelativeLocation;                              // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              RelativeDistance;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              EvasiveActionDistance;                         // 0x0010 (0x0004) [0x0000000000000000]               
	struct FName                                       NodeType;                                      // 0x0014 (0x0008) [0x0000000000000000]               
	uint32_t                                           bNeverFallback : 1;                            // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMultipleReservations : 1;                     // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsReserved : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LastReservedTime;                              // 0x0020 (0x0004) [0x0000000000000000]               
	class AActor*                                      ReservedBy;                                    // 0x0028 (0x0008) [0x0000000000000000]               
	float                                              AIAlertDistance;                               // 0x0030 (0x0004) [0x0000000000000000]               
	class UFlagDefinition*                             AIAlertFlagDef;                                // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowPursuitGridDefinition.PursuitNodeData
// 0x002C
struct FPursuitNodeData
{
	struct FVector                                     RelativeLocation;                              // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       NodeType;                                      // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              EvasiveActionDistance;                         // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AIAlertDistance;                               // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UFlagDefinition*                             AIAlertFlagDef;                                // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNeverFallback : 1;                            // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bMultipleReservations : 1;                     // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct WillowGame.WillowSpawnMaster.SpawnerSummary
// 0x0014
struct FSpawnerSummary
{
	class FString                                      Summary;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Count;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

struct FReferencePoint {
	char UnknownData[0xC];
};

// ScriptStruct WillowGame.WillowStaggerAnimNodeBlend.ReferencePointComparisonData
// 0x0018
struct FReferencePointComparisonData
{
	struct FReferencePoint                             A;                                             // 0x0000 (0x000C) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	struct FReferencePoint                             B;                                             // 0x000C (0x000C) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct WillowGame.WillowSystemSettings.SystemOption
// 0x0020
struct FSystemOption
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ValueCount;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrValue;                                     // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        ValueStrings;                                  // 0x0010 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowSystemSettings.Resolution
// 0x0008
struct FResolution
{
	int32_t                                            Width;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Height;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowUIInteraction.DebugConsoleCommand
// 0x0044
struct FDebugConsoleCommand
{
	class FString                                      MenuName;                                      // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      CommandName;                                   // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0020 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Command;                                       // 0x0030 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           bOnClient : 1;                                 // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct WillowGame.WillowUIInteraction.tMenuData
// 0x00D0
struct FtMenuData
{
	uint32_t                                           bIsSelectable : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FColumnData>                   ColumnText;                                    // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      PrimaryActionCmd;                              // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      SecondaryActionCmd;                            // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      TertiaryActionCmd;                             // 0x0038 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      QuaternaryActionCmd;                           // 0x0048 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      QuinaryActionCmd;                              // 0x0058 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      OverCmd;                                       // 0x0068 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      LeaveCmd;                                      // 0x0078 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Data;                                          // 0x0088 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            HintFontSize;                                  // 0x0098 (0x0001) [0x0000000000100000]               
	class FString                                      Hint;                                          // 0x00A0 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      ItemDetail;                                    // 0x00B0 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      DescriptionBoxStr;                             // 0x00C0 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct WillowGame.WillowUIInteraction.ColumnData
// 0x0020
struct FColumnData
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FName                                       TextAsFName;                                   // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            HAlign;                                        // 0x0018 (0x0001) [0x0000000000000000]               
	struct FColor                                      TextColor;                                     // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowUIInteraction.MenuHeaderData
// 0x004C
struct FMenuHeaderData
{
	class FString                                      Header;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Width;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      InterfaceName;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            FontSize;                                      // 0x0028 (0x0001) [0x0000000000000000]               
	struct FColor                                      TextColor;                                     // 0x002C (0x0004) [0x0000000000000000]               
	struct FColor                                      TextHighlightColor;                            // 0x0030 (0x0004) [0x0000000000000000]               
	struct FColor                                      IconColor;                                     // 0x0034 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDrawIcon : 1;                                 // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            IconU;                                         // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            IconV;                                         // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            IconUL;                                        // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            IconVL;                                        // 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowUIInteraction.tMenuTextPos
// 0x0010
struct FtMenuTextPos
{
	uint8_t                                            TextHAlign;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            TextXPos;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            TextVAlign;                                    // 0x0008 (0x0001) [0x0000000000000000]               
	int32_t                                            TextYPos;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowUIInteraction.ColumnLayoutData
// 0x001D
struct FColumnLayoutData
{
	uint8_t                                            HeaderHAlign;                                  // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Header;                                        // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              Width;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            DataHAlign;                                    // 0x001C (0x0001) [0x0000000000000000]               
};


// ScriptStruct WillowGame.WillowUIInteraction.tMenuLayout
// 0x0090
struct FtMenuLayout
{
	class UTexture2D*                                  Background;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            BackgroundXPos;                                // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            BackgroundYPos;                                // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            BackgroundXL;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            BackgroundYL;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDrawOutlineToShowInputFocus : 1;              // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ColumnDataYL;                                  // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            ItemDetailYL;                                  // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      DescriptionBoxHeader;                          // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            DescriptionBoxHeaderHAlign;                    // 0x0038 (0x0001) [0x0000000000000000]               
	uint32_t                                           bUnderlineDescriptionBoxHeader : 1;            // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            DescriptionBoxXPos;                            // 0x0040 (0x0004) [0x0000000000000000]               
	int32_t                                            DescriptionBoxYPos;                            // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            DescriptionBoxXL;                              // 0x0048 (0x0004) [0x0000000000000000]               
	struct FtMenuTextPos                               TitlePos;                                      // 0x004C (0x0010) [0x0000000000000000]               
	uint32_t                                           bDrawHintSeparatorLine : 1;                    // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FtMenuTextPos                               HintPos;                                       // 0x0060 (0x0010) [0x0000000000000000]               
	int32_t                                            ColumnPadding;                                 // 0x0070 (0x0004) [0x0000000000000000]               
	class TArray<struct FColumnLayoutData>             ColumnLayout;                                  // 0x0078 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UFont*                                       ColumnDataFont;                                // 0x0088 (0x0008) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowUIInteraction.WeaponSettings
// 0x0020
struct FWeaponSettings
{
	class UWeaponTypeDefinition*                       WeaponTypeDefinition;                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UWeaponBalanceDefinition*                    BalanceDefinition;                             // 0x0008 (0x0008) [0x0000000000000000]               
	class UManufacturerDefinition*                     ManufacturerDefinition;                        // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            ManufacturerGradeIndex;                        // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Level;                                         // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowUIInteraction.NetworkChannelData
// 0x0060
struct FNetworkChannelData
{
	class FString                                      ChannelName;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StateName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UClass*                                      ActorClass;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	class FString                                      ActorClassName;                                // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Role;                                          // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RemoteRole;                                    // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ActorClassCount;                               // 0x0058 (0x0004) [0x0000000000000000]               
	float                                              ActorClassPercent;                             // 0x005C (0x0004) [0x0000000000000000]               
};

// ScriptStruct WillowGame.WillowUIInteraction.SkillIndexLevelRequirementPair
// 0x0008
struct FSkillIndexLevelRequirementPair
{
	int32_t                                            SkillIndex;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            PlayerLevelRequirement;                        // 0x0004 (0x0004) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
