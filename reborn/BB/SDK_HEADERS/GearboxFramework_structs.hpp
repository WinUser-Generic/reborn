/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: GearboxFramework_structs.hpp
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

// ScriptStruct GearboxFramework.ActionSequence.LatentStateData
// 0x0020
struct FLatentStateData
{
	struct FName                                       StateName;                                     // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       NextStateName;                                 // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            LatentValue;                                   // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bFirstLatent : 1;                              // 0x0014 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	struct FPointer                                    LatentString;                                  // 0x0018 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

struct FGBXNavMeshPath {
	char UnknownData[0x18];
};

// ScriptStruct GearboxFramework.GearboxNavigationHandle.PathFindData
// 0x0080
struct FPathFindData
{
	struct FGBXNavMeshPath                             Path;                                          // 0x0000 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBasedPosition                              FinalDest;                                     // 0x0018 (0x0038) [0x0000000000000000]               
	float                                              ReachTolerance;                                // 0x0050 (0x0004) [0x0000000000000000]               
	struct FGBXNavMeshPolyRef                          AnchorPoly;                                    // 0x0058 (0x0010) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0068 (0x0001) [0x0000000000000000]               
	uint32_t                                           bBestPath : 1;                                 // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Counter;                                       // 0x0070 (0x0004) [0x0000000000000000]               
	class UActionSequencePawn* Action;                                        // 0x0078 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxNavigationHandle.PathRequestData
// 0x0170
struct FPathRequestData
{
	int32_t                                            RequestNum;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     GoalLoc;                                       // 0x0004 (0x000C) [0x0000000000000000]               
	class AActor*                                      GoalActor;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	struct FVector                                     GoalOffset;                                    // 0x0018 (0x000C) [0x0000000000000000]               
	uint32_t                                           bTryDirect : 1;                                // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            Type;                                          // 0x0028 (0x0001) [0x0000000000000000]               
	struct FPathFindData                               PathData;                                      // 0x0030 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ReachTolerance;                                // 0x00B0 (0x0004) [0x0000000000000000]               
	struct FVector                                     StartLocation;                                 // 0x00B4 (0x000C) [0x0000000000000000]               
	struct FVector                                     PawnStartLocation;                             // 0x00C0 (0x000C) [0x0000000000000000]               
	uint32_t                                           bUseBestResult : 1;                            // 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              OverrideWidth;                                 // 0x00D0 (0x0004) [0x0000000000000000]               
	class UMindTargetInfo*                             TargetRec;                                     // 0x00D8 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDisableFailureDebugMessages : 1;              // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bStartAtGoal : 1;                              // 0x00E0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bForcePathFind : 1;                            // 0x00E0 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              LastConstrainedScore;                          // 0x00E4 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Constraints;                                   // 0x00E8 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    CostModifiers;                                 // 0x00F0 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FVector                                     FailedSelfLoc;                                 // 0x00F8 (0x000C) [0x0000000000000000]               
	struct FVector                                     FailedGoalLoc;                                 // 0x0104 (0x000C) [0x0000000000000000]               
	struct FNavMeshPathParams                          FailedPathParams;                              // 0x0110 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxNavigationHandle.GBXNavMeshPathPoint
// 0x0038
struct FGBXNavMeshPathPoint
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	int32_t                                            SpecialMoveId;                                 // 0x000C (0x0004) [0x0000000000000000]               
	struct FGBXNavMeshPolyRef                          Poly;                                          // 0x0010 (0x0010) [0x0000000000000000]               
	float                                              NextPathObjectDistance;                        // 0x0020 (0x0004) [0x0000000000000000]               
	class TArray<struct FIGBXNavMeshObstaclePointer>   CrossedObstacles;                              // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxNavigationHandle.IGBXNavMeshObstaclePointer
// 0x0008
struct FIGBXNavMeshObstaclePointer
{
	struct FPointer                                    Dummy;                                         // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct GearboxFramework.GearboxGlobals.GearboxViewShakeInfo
// 0x0044
struct FGearboxViewShakeInfo
{
	struct FVector                                     OffsetMag;                                     // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     OffsetRate;                                    // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              OffsetTime;                                    // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RotMag;                                        // 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RotRate;                                       // 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              RotTime;                                       // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FOVMag;                                        // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FOVRate;                                       // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FOVTime;                                       // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.GearboxGlobals.ObjectKey
// 0x0010
struct FObjectKey
{
	struct FName                                       ObjectName;                                    // 0x0000 (0x0008) [0x0000000000100000]               
	struct FName                                       AdditionalKey;                                 // 0x0008 (0x0008) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.GearboxGlobals.LevelStateRecord
// 0x0020
struct FLevelStateRecord
{
	struct FName                                       LevelName;                                     // 0x0000 (0x0008) [0x0000000000100000]               
	uint8_t                                            LevelLoaded;                                   // 0x0008 (0x0001) [0x0000000000100000]               
	class TArray<struct FObjectKey>                    ObjectKeys;                                    // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxGlobals.ValidNameRange
// 0x0008
struct FValidNameRange
{
	int32_t                                            Start;                                         // 0x0000 (0x0004) [0x0000000000100000]               
	int32_t                                            End;                                           // 0x0004 (0x0004) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.GearboxGlobals.LocationInfo
// 0x0010
struct FLocationInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           IsPlayerInfo : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.GearboxGlobals.SpawnActorData
// 0x004C
struct FSpawnActorData
{
	class USpawnFactory*                               SpawnFactory;                                  // 0x0000 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	struct FAttributeInitializationData                Probability;                                   // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                MaxActiveAtOneTime;                            // 0x0028 (0x0020) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           TestVisibility : 1;                            // 0x0048 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           TestFOV : 1;                                   // 0x0048 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
};

// ScriptStruct GearboxFramework.GearboxGlobals.SubarrayData_Mirror
// 0x0004
struct FSubarrayData_Mirror
{
	int32_t                                            ArrayIndexAndLength;                           // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct GearboxFramework.GearboxGlobals.AIRange
// 0x0008
struct FAIRange
{
	float                                              MinVal;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxVal;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.GearboxGlobals.TQPOV
// 0x0024
struct FTQPOV
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FQuat                                       Rotation;                                      // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	float                                              FOV;                                           // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.IBehaviorConsumer.BehaviorConsumerHandle
// 0x0004
struct FBehaviorConsumerHandle
{
	int32_t                                            PID;                                           // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.BehaviorHelpers.RelativeDirectionData
// 0x0034
struct FRelativeDirectionData
{
	uint8_t                                            Direction;                                     // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                ConeAroundDirection;                           // 0x0008 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    AdditionalRotation;                            // 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.BehaviorHelpers.BehaviorEventUserData
// 0x0020
struct FBehaviorEventUserData
{
	struct FName                                       EventName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            MaxTriggerCount;                               // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ReTriggerDelay;                                // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnabled : 1;                                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReplicate : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	class UObject*                                     FilterObject;                                  // 0x0018 (0x0008) [0x0000000020000000]  CPF_Deprecated)
};

// ScriptStruct GearboxFramework.AIComponent.TrajectoryData
// 0x0024
struct FTrajectoryData
{
	uint32_t                                           bAutoGenerate : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              Speed;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AnglePct;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Angle;                                         // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Error;                                         // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x0014 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              PredictDistMax;                                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.AIComponent.InvalidPointData
// 0x0018
struct FInvalidPointData
{
	float                                              EndTime;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	struct FInfluencePointRef                          Point;                                         // 0x0008 (0x0010) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.AIComponent.AIScriptedActionParams
// 0x003C
struct FAIScriptedActionParams
{
	class FString                                      DisplayName;                                   // 0x0000 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UActionSequence*                             Action;                                        // 0x0010 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class AActor*                                      Target;                                        // 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UExpressionEvaluator*                        SucceedIf;                                     // 0x0020 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	float                                              SucceedTime;                                   // 0x0028 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        FailIf;                                        // 0x0030 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	float                                              FailTime;                                      // 0x0038 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct GearboxFramework.AIComponent.PriorityData
// 0x0018
struct FPriorityData
{
	class FString                                      Description;                                   // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UExpressionEvaluator*                        Condition;                                     // 0x0010 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct GearboxFramework.AIComponent.AISequenceResultData
// 0x0003
struct FAISequenceResultData
{
	uint8_t                                            OnSuccess;                                     // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            OnFailure;                                     // 0x0001 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            OnCannotRun;                                   // 0x0002 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct GearboxFramework.AIComponent.AITreeData
// 0x0139
struct FAITreeData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FName                                       BehaviorName;                                  // 0x0004 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class TArray<int32_t>                              Children;                                      // 0x0010 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
	class UAIResource*                                 Resource;                                      // 0x0020 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	uint32_t                                           bStopWhenCanRunIfFails : 1;                    // 0x0028 (0x0004) [0x0000000000020003] [0x00000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	class UExpressionEvaluator*                        CanRunIf;                                      // 0x0030 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class UExpressionEvaluator*                        ShouldStopIf;                                  // 0x0038 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class UExpressionEvaluator*                        ShouldStopIfSuccess;                           // 0x0040 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAIRange                                    FailTimer;                                     // 0x0048 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAIRange                                    SuccessTimer;                                  // 0x0050 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAIRange                                    StartTimer;                                    // 0x0058 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAIRange                                    NewTargetTimer;                                // 0x0060 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAIRange                                    CombatStartTimer;                              // 0x0068 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAIRange                                    FailureCooldown;                               // 0x0070 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAIRange                                    SuccessCooldown;                               // 0x0078 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	uint32_t                                           bStopIfCannotRun : 1;                          // 0x0080 (0x0004) [0x0000000000020003] [0x00000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FAIRange                                    TimedStart;                                    // 0x0084 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FAIRange                                    TimedReset;                                    // 0x008C (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FAIRange                                    TimedFail;                                     // 0x0094 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FUInt64                                     ActionTagMask;                                 // 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FUInt64                                     ChildActionTagMask;                            // 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UActionSequence*                             Action;                                        // 0x00B0 (0x0008) [0x000000000442000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline)
	class UActionSequencePawn*                         PawnAction;                                    // 0x00B8 (0x0008) [0x0000000000022003] (CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst)
	class TArray<float>                                Weights;                                       // 0x00C0 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<int32_t>                              LoopCountMax;                                  // 0x00D0 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
	uint32_t                                           bInterrupt : 1;                                // 0x00E0 (0x0004) [0x0000000000020003] [0x00000001] (CPF_Edit | CPF_Const | CPF_EditConst)
	class TArray<class UExpressionEvaluator*>          Conditions;                                    // 0x00E8 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
	struct FAISequenceResultData                       SequenceData;                                  // 0x00F8 (0x0003) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FAISequenceResultData>         PerNodeSequenceData;                           // 0x0100 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UUtilityDefinition*                          UtilityDef;                                    // 0x0110 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            PosX;                                          // 0x0118 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            PosY;                                          // 0x011C (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      NodeName;                                      // 0x0120 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FName                                       ActionFailName;                                // 0x0130 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            FailReason;                                    // 0x0138 (0x0001) [0x0000000000000002] (CPF_Const)   
};


// ScriptStruct GearboxFramework.AIComponent.AIHoldData
// 0x0010
struct FAIHoldData
{
	struct FName                                       HoldName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     HoldTag;                                       // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.AIComponent.AITreeState
// 0x0050
struct FAITreeState
{
	struct FRef_Mirror                                 Data;                                          // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	float                                              LastFailTime;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              NextTimedRun;                                  // 0x000C (0x0004) [0x0000000000000000]               
	float                                              NextTimedFail;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              NextTimedSuccess;                              // 0x0014 (0x0004) [0x0000000000000000]               
	struct FName                                       FailReason;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	int32_t                                            ActiveChildIdx;                                // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            NextActiveChildIdx;                            // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           bStoppedByResource : 1;                        // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	class UActionSequence*                             Action;                                        // 0x0030 (0x0008) [0x0000000000000000]               
	int32_t                                            LoopCount;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            LastRandomChild;                               // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            NextSequentialChildIdx;                        // 0x0040 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsDisabled : 1;                               // 0x0044 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	float                                              LargestSizeX;                                  // 0x0048 (0x0004) [0x0000000000000000]               
	float                                              LargestSizeY;                                  // 0x004C (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.AIComponent.AIResourceState
// 0x0038
struct FAIResourceState
{
	class UAIResource*                                 Resource;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              NextTimedFail;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              NextTimedSuccess;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              NextAvailableTime;                             // 0x0010 (0x0004) [0x0000000000000000]               
	class TArray<class UAIComponent*>                  IsRunning;                                     // 0x0018 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UAIComponent*>                  WantsToRun;                                    // 0x0028 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct GearboxFramework.TerritoryComponent.TerritoryData
// 0x0028
struct FTerritoryData
{
	uint32_t                                           bEverywhere : 1;                               // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	float                                              Height;                                        // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class AVolume*>                       Volumes;                                       // 0x0010 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class AVolume*                                     Volume;                                        // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorSequenceData
// 0x0018
struct FBehaviorSequenceData
{
	struct FName                                       BehaviorSequenceName;                          // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bEnabledOnSpawn : 1;                           // 0x0008 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bSequenceEnabledMutex : 1;                     // 0x0008 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class UBehaviorSequenceCustomEnableCondition*      CustomEnableCondition;                         // 0x0010 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.BehaviorVariableValue
// 0x002D
struct FBehaviorVariableValue
{
	class TArray<class UObject*>                       ObjectArrayValue;                              // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     ObjectValue;                                   // 0x0010 (0x0008) [0x0000000000000000]               
	struct FVector                                     VectorValue;                                   // 0x0018 (0x000C) [0x0000000000000000]               
	int32_t                                            IntValue;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              FloatValue;                                    // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                            VariableType;                                  // 0x002C (0x0001) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.UserBehaviorSequence
// 0x0020
struct FUserBehaviorSequence
{
	struct FName                                       BehaviorSequenceName;                          // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bEnabledOnSpawn : 1;                           // 0x0008 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bSequenceEnabledMutex : 1;                     // 0x0008 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class UBehaviorSequenceCustomEnableCondition*      CustomEnableCondition;                         // 0x0010 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UObject*                                     Sequence;                                      // 0x0018 (0x0008) [0x000000000440000A] (CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct GearboxFramework.BehaviorProviderDefinition.CompiledBehaviorProvider
// 0x0040
struct FCompiledBehaviorProvider
{
	struct FArray_Mirror                               BehaviorSequences;                             // 0x0000 (0x0010) [0x0000000000201000] (CPF_Native)  
	struct FArray_Mirror                               AccessorData;                                  // 0x0010 (0x0010) [0x0000000000201000] (CPF_Native)  
	struct FArray_Mirror                               BehaviorData;                                  // 0x0020 (0x0010) [0x0000000000201000] (CPF_Native)  
	struct FArray_Mirror                               ReferenceData;                                 // 0x0030 (0x0010) [0x0000000000201000] (CPF_Native)  
};

// ScriptStruct GearboxFramework.AIDebugCamera.DebugListItem
// 0x005D
struct FDebugListItem
{
	uint8_t                                            DisplayType;                                   // 0x0000 (0x0001) [0x0000000000100000]               
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000100000]               
	struct FVector                                     Location2;                                     // 0x0010 (0x000C) [0x0000000000100000]               
	struct FVector                                     Location3;                                     // 0x001C (0x000C) [0x0000000000100000]               
	class UTexture2D*                                  Texture;                                       // 0x0028 (0x0008) [0x0000000000100000]               
	float                                              U;                                             // 0x0030 (0x0004) [0x0000000000100000]               
	float                                              V;                                             // 0x0034 (0x0004) [0x0000000000100000]               
	float                                              UL;                                            // 0x0038 (0x0004) [0x0000000000100000]               
	float                                              VL;                                            // 0x003C (0x0004) [0x0000000000100000]               
	float                                              Scale;                                         // 0x0040 (0x0004) [0x0000000000100000]               
	class FString                                      TextString;                                    // 0x0048 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FColor                                      TextColor;                                     // 0x0058 (0x0004) [0x0000000000100000]               
	uint8_t                                            Alignment;                                     // 0x005C (0x0001) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.GearboxAIMoveNode.NodeData
// 0x000C
struct FNodeData
{
	class AGearboxAIMoveNode*                          Node;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.AIResource.AIResourceRestriction
// 0x0010
struct FAIResourceRestriction
{
	int32_t                                            MaxUsers;                                      // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            MinUsers;                                      // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAIResource*                                 Resource;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.AnimNode_DirectionSet.AnimDirectionSetChildData
// 0x0020
struct FAnimDirectionSetChildData
{
	class TArray<struct FName>                         NodeNames;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UAnimNode_Crossfade*>           Nodes;                                         // 0x0010 (0x0010) [0x0000000000602002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.AnimNode_MasterMovement.AnimMovementChildData
// 0x0020
struct FAnimMovementChildData
{
	class TArray<float>                                AnimSpeeds;                                    // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<float>                                AnimRates;                                     // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.AnimNode_SpeedCrossfade.AnimSpeedCrossfadeChildData
// 0x0008
struct FAnimSpeedCrossfadeChildData
{
	float                                              Speed;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AnimLength;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.AnimNode_StanceTransition.StanceTransitionPair
// 0x0010
struct FStanceTransitionPair
{
	class UStanceDefinition*                           FromStance;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStanceDefinition*                           ToStance;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.SpecialMoveInterface.SpecialMoveData
// 0x0038
struct FSpecialMoveData
{
	class UObject* Data;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              PlayRateScale;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           bSendCallbackAtEndOfSequence : 1;              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bStartOfSequence : 1;                          // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FName                                       CallbackName;                                  // 0x0014 (0x0008) [0x0000000000000000]               
	class UObject* CallbackObject;                                // 0x0020 (0x0008) [0x0000000000000000]               
	class USpecialMoveDefinition* SMD;                                           // 0x0028 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHasBlendInOverrideTime : 1;                   // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BlendInOverrideTime;                           // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.AnimNodeSpecialMoveBlend.SlotAnimParameters
// 0x0074
struct FSlotAnimParameters
{
	struct FSpecialMoveData                            SMData;                                        // 0x0000 (0x0038) [0x0000000000000000]               
	class UGearboxAnimDefinition*                      CustomAnimDef;                                 // 0x0038 (0x0008) [0x0000000000000000]               
	struct FName                                       CustomAnimName;                                // 0x0040 (0x0008) [0x0000000000000000]               
	class TArray<float>                                PerBoneWeights;                                // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              TransformReqBone;                              // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            TransformReqBoneIndex;                         // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x006C (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisableNotifies : 1;                          // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.Spawner.SpawnerCleanupParameters
// 0x0008
struct FSpawnerCleanupParameters
{
	uint32_t                                           bCleanupActorsWhenIrrelevant : 1;              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              ActorIrrelvantDistance;                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.Spawner.SpawnerSavedState
// 0x0010
struct FSpawnerSavedState
{
	int32_t                                            SelectedSpawnIdx;                              // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumTotalActors;                                // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            MaxActiveActors;                               // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            NumActiveActors;                               // 0x0009 (0x0001) [0x0000000000000000]               
	float                                              NextSpawnTime;                                 // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.AreaSpawner.AreaSpawnerOptionData
// 0x0018
struct FAreaSpawnerOptionData
{
	class UExpressionEvaluatorDefinition*              ExpressionDef;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FAreaSpawnerSpawnDefData>      SpawnDefinitions;                              // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.AreaSpawner.AreaSpawnerSpawnDefData
// 0x0070
struct FAreaSpawnerSpawnDefData
{
	class USpawnDefinition*                            SpawnDef;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                MaxTotalActorsFormula;                         // 0x0008 (0x0020) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxTotalActors;                                // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxActiveActors;                               // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                RespawnDelay;                                  // 0x0030 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                RespawnDelayAfterDeath;                        // 0x0050 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.AreaSpawner.AreaSpawnerData
// 0x0010
struct FAreaSpawnerData
{
	class TArray<struct FAreaSpawnerSpawnDefStateData> Data;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.AreaSpawner.AreaSpawnerSpawnDefStateData
// 0x001C
struct FAreaSpawnerSpawnDefStateData
{
	class FString                                      SpawnDefName;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            NumTotalActors;                                // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            NumActiveActors;                               // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              NextSpawnTime;                                 // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.IGFxUIManager.GFxUIActionParam
// 0x0018
struct FGFxUIActionParam
{
	int32_t                                            IntValue;                                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FloatValue;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           BoolValue : 1;                                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UObject*                                     ObjectValue;                                   // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.IBehaviorProvider.SpecializedBehaviorEvent
// 0x0008
struct FSpecializedBehaviorEvent
{
	struct FName                                       EventName;                                     // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct GearboxFramework.ITimerBehavior.TimerEventReactionData
// 0x0018
struct FTimerEventReactionData
{
	uint8_t                                            EventType;                                     // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UBehaviorBase*>                 Behaviors;                                     // 0x0008 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct GearboxFramework.ITimerBehavior.TimerEventReactionDataSpecialized
// 0x0000 (0x0008 - 0x0008)
struct FTimerEventReactionDataSpecialized : FSpecializedBehaviorEvent
{
};

// ScriptStruct GearboxFramework.ITimerBehavior.BehaviorTimerState
// 0x000C
struct FBehaviorTimerState
{
	uint32_t                                           bIsRunning : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Delay;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              EventTime;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.ITimerBehavior.TimerBehaviorUserState
// 0x0024
struct FTimerBehaviorUserState
{
	struct FBehaviorTimerState                         Timers[0x3];                                   // 0x0000 (0x0024) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.BehaviorHelpers.AttachmentLocationData
// 0x0028
struct FAttachmentLocationData
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class UIWorldBody*                                 AttachmentBase_Object;                         // 0x0010 (0x0010) [0x0000000000000000] 
	class UIWorldBody*                                 AttachmentBase_Interface;                      // 0x0010 (0x0010) [0x0000000000000000]               
	struct FName                                       AttachmentName;                                // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.DamageReceiverComponent.DamageInstanceDataState
// 0x0008
struct FDamageInstanceDataState
{
	struct FRef_Mirror                                 Data;                                          // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct GearboxFramework.DamageReceiverComponent.DamageEventState
// 0x0018
struct FDamageEventState
{
	int32_t                                            TriggerCount;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              LastTriggerTime;                               // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              DamageApplied;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              DamageAppliedTime;                             // 0x000C (0x0004) [0x0000000000000000]               
	struct FRef_Mirror                                 Data;                                          // 0x0010 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct GearboxFramework.DamageReceiverComponent.DamageModeState
// 0x0020
struct FDamageModeState
{
	float                                              MinHealth;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FDamageEventState>             Events;                                        // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FRef_Mirror                                 Data;                                          // 0x0018 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct GearboxFramework.DamageReceiverComponent.DamageReceiverDebugData
// 0x0010
struct FDamageReceiverDebugData
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TakeDamage;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              PassDamage;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            StartNodeIdx;                                  // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.DamageReceiverComponent.DamageNodeState
// 0x0038
struct FDamageNodeState
{
	int32_t                                            ModeIdx;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Health;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxHealth;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	class TArray<struct FDamageModeState>              Modes;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FDamageEventState>             Events;                                        // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FRef_Mirror                                 Data;                                          // 0x0030 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct GearboxFramework.FlagDefinition.FlagDefinitionInitialization
// 0x0048
struct FFlagDefinitionInitialization
{
	class UFlagDefinition*                             FlagToSet;                                     // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ChanceTrue;                                    // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Duration;                                      // 0x0028 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct GearboxFramework.DialogSystem.DialogParameters
// 0x0035
struct FDialogParameters
{
	uint32_t                                           bOverride_ComfortableNoiseLevel : 1;           // 0x0000 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	float                                              ComfortableNoiseLevel;                         // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverride_bNonSocial : 1;                      // 0x0008 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bNonSocial : 1;                                // 0x0008 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverride_CaresAbout : 1;                      // 0x0008 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint8_t                                            CaresAbout;                                    // 0x000C (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverride_bInterruptSamePriority : 1;          // 0x0010 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bInterruptSamePriority : 1;                    // 0x0010 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverride_InterruptMethod : 1;                 // 0x0010 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint8_t                                            InterruptMethod;                               // 0x0014 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverride_Priority : 1;                        // 0x0018 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	int32_t                                            Priority;                                      // 0x001C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverride_SubtitlePriority : 1;                // 0x0020 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint8_t                                            SubtitlePriority;                              // 0x0024 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverride_MaxWaitTime : 1;                     // 0x0028 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	float                                              MaxWaitTime;                                   // 0x002C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverride_SpeakableWhenDead : 1;               // 0x0030 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bSpeakableWhenDead : 1;                        // 0x0030 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverride_SpeakableWhenStealthed : 1;          // 0x0030 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bSpeakableWhenStealthed : 1;                   // 0x0030 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverride_ListenerFilter : 1;                  // 0x0030 (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint8_t                                            ListenerFilter;                                // 0x0034 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.DialogSystem.DialogContextData
// 0x0018
struct FDialogContextData
{
	class UObject*                                     Subject;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     Target;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	class UObject*                                     Instigator;                                    // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.DialogSystem.DialogEventAndResponse
// 0x0028
struct FDialogEventAndResponse
{
	class UDialogEvent*                                Event;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDialogEventCondition*                       Expression;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverride_ChanceToUseSpecialization : 1;       // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ChanceToUseSpecialization;                     // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UIDialogResponse*                            Response_Object;                               // 0x0018 (0x0010) [0x0000000000000001] (CPF_Edit)
	class UIDialogResponse*                            Response_Interface;                            // 0x0018 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.BehaviorKernel.ProviderRecord
// 0x000C
struct FProviderRecord
{
	class UBehaviorProviderDefinition*                 ProviderDefinition;                            // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ReferenceCount;                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.BehaviorKernel.ProviderRemovalRequest
// 0x0008
struct FProviderRemovalRequest
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ProvidersIndex;                                // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.IBehaviorConsumer.ReplicatedBehaviorConsumerState
// 0x000C
struct FReplicatedBehaviorConsumerState
{
	uint32_t                                           bIsProcessSuspended : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            BehaviorSequenceEnabledFlags;                  // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           bNeedToApplyThisState : 1;                     // 0x0008 (0x0004) [0x1000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.IBehaviorConsumer.ReplicatedBehaviorEvent
// 0x0010
struct FReplicatedBehaviorEvent
{
	uint8_t                                            SequenceIndex;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            EventCounter;                                  // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            EventIndex;                                    // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            EventOutput;                                   // 0x0003 (0x0001) [0x0000000000000000]               
	class UObject*                                     Instigator;                                    // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.BehaviorSequenceCustomEnableCondition.LinkedBehaviorSequence
// 0x0010
struct FLinkedBehaviorSequence
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    SequenceState;                                 // 0x0008 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct GearboxFramework.BehaviorTrigger.BehaviorTriggerJournalEntry
// 0x000C
struct FBehaviorTriggerJournalEntry
{
	class AActor*                                      Other;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           Event : 1;                                     // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.BodyProviderDefinition.CompressedBodyState2
// 0x0010
struct FCompressedBodyState2
{
	struct FQWord                                      Bits;                                          // 0x0000 (0x0008) [0x1000000000000000]               
	struct FQWord                                      ReplicatedBits;                                // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SpecialMoveInterface.ReplicatedSpecialMoveData
// 0x0028
struct FReplicatedSpecialMoveData
{
	uint32_t                                           bInterrupted : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UObject*                                     Data;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              PlayRateScale;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            DirtyCounter;                                  // 0x0018 (0x0001) [0x0000000000000000]               
	class USpecialMoveDefinition*                      SMD;                                           // 0x0020 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.BodyProviderDefinition.BodyCompositionItem2
// 0x0058
struct FBodyCompositionItem2
{
	struct FInstanceDataCore2                          Core;                                          // 0x0000 (0x0040) [0x0000000000000000]               
	struct FName                                       AttachmentInfo;                                // 0x0040 (0x0008) [0x0000000000000000]               
	int32_t                                            ParentIndex;                                   // 0x0048 (0x0004) [0x0000000000000000]               
	class UObject*                                     AdditionalObject;                              // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.BodyProviderDefinition.BodyCompositionData2
// 0x002D
struct FBodyCompositionData2
{
	class TArray<struct FBodyCompositionItem2>         Data;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBox                                        SpawnBounds;                                   // 0x0010 (0x001C) [0x0000000000000000]               
	uint8_t                                            MaxExpectedInstanceData;                       // 0x002C (0x0001) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SpecialMoveDefinition.SMBehavior
// 0x0018
struct FSMBehavior
{
	uint32_t                                           PlayServer : 1;                                // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           PlayClient : 1;                                // 0x0000 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           PlayLocal : 1;                                 // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	class TArray<class UBehaviorBase*>                 Behaviors;                                     // 0x0008 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct GearboxFramework.SpecialMoveDefinition.SMNotify
// 0x0004 (0x0018 - 0x001C)
struct FSMNotify : FSMBehavior
{
	float                                              Time;                                          // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct GearboxFramework.GearboxAnimDefinition.TimedAnimBehaviorEvent
// 0x0008 (0x0008 - 0x0010)
struct FTimedAnimBehaviorEvent : FSpecializedBehaviorEvent
{
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bServerOnly : 1;                               // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct GearboxFramework.GearboxPawn.CoverUseState
// 0x0020
struct FCoverUseState
{
	class AActor*                                      Owner;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            SlotIdx;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	struct FName                                       DesiredState;                                  // 0x000C (0x0008) [0x0000000000000000]               
	class UCoverStanceDefinition*                      Stance;                                        // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.PhysicsJumpNode.PhysicsJumpUserState
// 0x0020
struct FPhysicsJumpUserState
{
	class AActor*                                      User;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            ConnectionIdx;                                 // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            JumpState;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	class UPhysicsJumpConnection*                      Connection;                                    // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxPawn.LeapAttackData
// 0x0020
struct FLeapAttackData
{
	float                                              Speed;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AnglePct;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	class AActor*                                      Target;                                        // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.IFeatureConsumer.FeatureConsumerState
// 0x0028
struct FFeatureConsumerState
{
	uint32_t                                           bInitialized : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLocalInitialized : 1;                         // 0x0000 (0x0004) [0x1000000000000000] [0x00000002] 
	struct FQWord                                      SwitchState;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	struct FQWord                                      LocalSwitchState;                              // 0x0010 (0x0008) [0x1000000000000000]               
	class TArray<struct FFeatureState>                 Features;                                      // 0x0018 (0x0010) [0x1000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.IFeatureConsumer.FeatureState
// 0x0020
struct FFeatureState
{
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPaused : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class UObject*                                     Object;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	class UClass*                                      Class;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	class UFeatureDefinition*                          Def;                                           // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxPawn.CoverExposureData
// 0x0004
struct FCoverExposureData
{
	uint32_t                                           bExposedUp : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bExposedLeft : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bExposedRight : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct GearboxFramework.GearboxPawn.TouchData
// 0x0030
struct FTouchData
{
	class AActor*                                      OtherActor;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0014 (0x000C) [0x0000000000000000]               
	class UPrimitiveComponent*                         MyComponent;                                   // 0x0020 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPrimitiveComponent*                         OtherComponent;                                // 0x0028 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct GearboxFramework.GearboxPawn.NavMeshWalkingMove
// 0x0078
struct FNavMeshWalkingMove
{
	class AActor*                                      Base;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Floor;                                         // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastLocation;                                  // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     DesiredMove;                                   // 0x002C (0x000C) [0x0000000000000000]               
	struct FGBXNavMeshPolyRef                          Anchor;                                        // 0x0038 (0x0010) [0x0000000000000000]               
	struct FPointer                                    PathParams;                                    // 0x0048 (0x0008) [0x0000000000001000] (CPF_Native)  
	float                                              DeltaTime;                                     // 0x0050 (0x0004) [0x0000000000000000]               
	class TArray<class AActor*>                        Touching;                                      // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTouchData>                    TouchData;                                     // 0x0068 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.DamageReceiverDefinition.DamageEventData
// 0x0028
struct FDamageEventData
{
	struct FName                                       EventName;                                     // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              EventHealthPercent;                            // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            EventType;                                     // 0x000C (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDamageFilter*                               Filter;                                        // 0x0010 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	float                                              DamageTime;                                    // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            TriggerDelay;                                  // 0x001C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            MaxTriggerCount;                               // 0x0020 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            EventIdx;                                      // 0x0024 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct GearboxFramework.DamageReceiverDefinition.DamageInstanceData
// 0x0014
struct FDamageInstanceData
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       BoneName;                                      // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            MaxDebugValues;                                // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct GearboxFramework.DamageReceiverDefinition.DamageNodeData
// 0x007C
struct FDamageNodeData
{
	int32_t                                            InitialModeIdx;                                // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FDamageModeData>               Modes;                                         // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UBaseHitRegionDefinition*                    HitRegion;                                     // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FDamageEventData>              Events;                                        // 0x0020 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FAttributeInitializationData                MaxHealthPct;                                  // 0x0030 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                InitialHealthPct;                              // 0x0050 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       BehaviorEventName;                             // 0x0070 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            MaxDebugValues;                                // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct GearboxFramework.DamageReceiverDefinition.DamageModeData
// 0x0060
struct FDamageModeData
{
	struct FName                                       ModeName;                                      // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FDamageEventData>              Events;                                        // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FAttributeInitializationData                MinHealthPct;                                  // 0x0018 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UDamageModifier*>               TakeModifiers;                                 // 0x0038 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UDamageModifier*>               PassModifiers;                                 // 0x0048 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	uint8_t                                            PassType;                                      // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            PassIdx;                                       // 0x005C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct GearboxFramework.DenSpawner.DenSpawnData
// 0x0028
struct FDenSpawnData
{
	class FString                                      SpawnDefName;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MaxActiveActors;                               // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            NumTotalActors;                                // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            NumActiveActors;                               // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              NextSpawnTime;                                 // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            NumTotalExternalActors;                        // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            NumActiveExternalActors;                       // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.TargetingComponent.AITargetStackLayerData
// 0x0014
struct FAITargetStackLayerData
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UMindTargetInfo*                             TargetInfo;                                    // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bForce : 1;                                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.TargetingComponent.ClusterGroupData
// 0x0018
struct FClusterGroupData
{
	class UTargetClusterDefinition*                    Def;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<struct FClusterData>                  Clusters;                                      // 0x0008 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.TargetingComponent.ClusterData
// 0x0030
struct FClusterData
{
	struct FVector                                     Center;                                        // 0x0000 (0x000C) [0x0000000000000000]               
	class TArray<struct FClusterMember>                Members;                                       // 0x0010 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<class UMindTargetInfo*>               TargetInfoList;                                // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.TargetingComponent.ClusterMember
// 0x0030
struct FClusterMember
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Angle;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Width;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x001C (0x000C) [0x0000000000000000]               
	class UTargetingComponent*                         Comp;                                          // 0x0028 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct GearboxFramework.TargetingComponent.ClusterPair
// 0x0008
struct FClusterPair
{
	int32_t                                            ClusterIdx;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ClusterMemberIdx;                              // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.IDialogSpeaker.ReplicatedSpeakStateData
// 0x002C
struct FReplicatedSpeakStateData
{
	uint8_t                                            Instruction;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            PlayingID;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	class UAkEvent*                                    AkEvent;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEcho : 1;                                     // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSpeakableWhenDead : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            SubtitlePriority;                              // 0x0014 (0x0001) [0x0000000000000000]               
	class UObject*                                     Emote;                                         // 0x0018 (0x0008) [0x0000000000000000]               
	int32_t                                            RandomSeed;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            RequiredTeamIndex;                             // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              AkEventTime;                                   // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.DialogComponent.CurrentDialogInfo
// 0x003C
struct FCurrentDialogInfo
{
	struct FAkPlayingInfo                              SpeakPlayingInfo;                              // 0x0000 (0x0010) [0x0000000000080000] (CPF_Component)
	int32_t                                            SpeakPlayingID;                                // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bSpeakingDeathDialog : 1;                      // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class UDialogEmoteDefinition*                      EmoteDefinition;                               // 0x0018 (0x0008) [0x0000000000000000]               
	class UDialogEmoteSequence*                        EmoteSequence;                                 // 0x0020 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSimulatingPlayback : 1;                       // 0x0028 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FDouble                                     SimulatedPlaybackStartTime;                    // 0x0030 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bForcingOwnerRelevantForEcho : 1;              // 0x0038 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct GearboxFramework.DialogEmoteSequence.DialogEmoteSequenceEntry
// 0x0010
struct FDialogEmoteSequenceEntry
{
	float                                              PlaybackFraction;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDialogEmoteDefinition*                      Emote;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.DialogEventCondition.EventCondition
// 0x0010
struct FEventCondition
{
	uint8_t                                            Context;                                       // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UExpressionEvaluator*                        Expression;                                    // 0x0008 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct GearboxFramework.DialogPoolDefinition.CharacterDialogSet
// 0x0018
struct FCharacterDialogSet
{
	class UGearboxDialogNameTag*                       SpeakerName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDialogSet*                                  Set;                                           // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCanBeConstructedVirtual : 1;                  // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            ScoreModifier;                                 // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.DialogResponse_Random.RandomDialogLineOption
// 0x0020
struct FRandomDialogLineOption
{
	int32_t                                            Weight;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    AkEvent;                                       // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDialogEmoteDefinition*                      Emote;                                         // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDialogEmoteSequence*                        EmoteSequence;                                 // 0x0018 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct GearboxFramework.DialogResponse_VariableChance.ThresholdChance
// 0x0010
struct FThresholdChance
{
	int32_t                                            TriggerNumber;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Chance;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FAIRange                                    QuietTime;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.DialogSystem.QuietTimeTracker
// 0x0038
struct FQuietTimeTracker
{
	class UObject*                                     QuietObject;                                   // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UObject*                                     ScopeObject;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     ScopeLocation;                                 // 0x0010 (0x000C) [0x0000000000000000]               
	struct FDouble                                     EndTime;                                       // 0x0020 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              HoldOwners;                                    // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.DialogSystem.PreviewModeState
// 0x0020
struct FPreviewModeState
{
	class UIDialogEditorHelper*                        ExclusiveDialogSource_Object;                  // 0x0000 (0x0010) [0x0000000000000000] 
	class UIDialogEditorHelper*                        ExclusiveDialogSource_Interface;               // 0x0000 (0x0010) [0x0000000000000000]               
	class TArray<class UDialogEventCondition*>         TrueConditions;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.DialogSystem.DialogThread
// 0x00C8
struct FDialogThread
{
	struct FDialogContextData                          Context;                                       // 0x0000 (0x0018) [0x0000000000000000]               
	class UIDialogSpeaker*                             Speaker_Object;                                // 0x0018 (0x0010) [0x0000000000000000] 
	class UIDialogSpeaker*                             Speaker_Interface;                             // 0x0018 (0x0010) [0x0000000000000000]               
	class UIDialogResponse*                            Response_Object;                               // 0x0028 (0x0010) [0x0000000000000000] 
	class UIDialogResponse*                            Response_Interface;                            // 0x0028 (0x0010) [0x0000000000000000]               
	struct FDialogParameters                           PlayParameters;                                // 0x0038 (0x0038) [0x0000000000000000]               
	class UDialogEvent*                                Event;                                         // 0x0070 (0x0008) [0x0000000000000000]               
	class UObject*                                     ResponseUObject;                               // 0x0078 (0x0008) [0x0000000000000000]               
	uint8_t                                            ExecutionStage;                                // 0x0080 (0x0001) [0x0000000000000000]               
	int32_t                                            PlayingID;                                     // 0x0084 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasPlaying : 1;                               // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSimulatingPlayback : 1;                       // 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bTriggeredOnFinished : 1;                      // 0x0088 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FDouble                                     QueueTime;                                     // 0x0090 (0x0008) [0x0000000000000000]               
	int32_t                                            SequenceID;                                    // 0x0098 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFirstInSequence : 1;                          // 0x009C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SequenceOutputDelay;                           // 0x00A0 (0x0004) [0x0000000000000000]               
	int32_t                                            TieBreakerSortValue;                           // 0x00A4 (0x0004) [0x0000000000000000]               
	float                                              WakeUpDelay;                                   // 0x00A8 (0x0004) [0x0000000000000000]               
	struct FDouble                                     PredictedStartTime;                            // 0x00B0 (0x0008) [0x0000000000000000]               
	struct FDouble                                     StartTime;                                     // 0x00B8 (0x0008) [0x0000000000000000]               
	struct FDouble                                     PredictedEndTime;                              // 0x00C0 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.DialogSystem.FinishedThreadInfo
// 0x0018
struct FFinishedThreadInfo
{
	int32_t                                            PlayingID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            SequenceID;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            Result;                                        // 0x0008 (0x0001) [0x0000000000000000]               
	struct FDouble                                     TimeEnded;                                     // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.DynamicReplicatedDecalActor.ReplicatedDecalParameterData
// 0x004C
struct FReplicatedDecalParameterData
{
	class UMaterialInterface*                          Material;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              SizeX;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              SizeY;                                         // 0x000C (0x0004) [0x0000000000000000]               
	float                                              OffsetX;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              OffsetY;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              PivotOffsetPctX;                               // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              PivotOffsetPctY;                               // 0x001C (0x0004) [0x0000000000000000]               
	float                                              NearPlane;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              FarPlane;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              TwistRotation;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              Lifetime;                                      // 0x002C (0x0004) [0x0000000000000000]               
	float                                              FadeTime;                                      // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAffectStaticGeometry : 1;                     // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAffectDynamicGeometry : 1;                    // 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAbsoluteOrientation : 1;                      // 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FRotator                                    AbsoluteOrientation;                           // 0x0038 (0x000C) [0x0000000000000000]               
	struct FName                                       FadeMaterialParamName;                         // 0x0044 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.ExposureUtilityBase.CalculateTargetExposureVantageResult
// 0x001C
struct FCalculateTargetExposureVantageResult
{
	uint32_t                                           bIsValid : 1;                                  // 0x0000 (0x0004) [0x0000000000003000] [0x00000001] (CPF_Native | CPF_Transient)
	uint32_t                                           bHitActor : 1;                                 // 0x0000 (0x0004) [0x0000000000003000] [0x00000002] (CPF_Native | CPF_Transient)
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FVector                                     HitLocation;                                   // 0x0010 (0x000C) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct GearboxFramework.ExposureUtilityBase.CalculateTargetExposureResult
// 0x0058
struct FCalculateTargetExposureResult
{
	struct FCalculateTargetExposureVantageResult       EyeExposureCheckResult;                        // 0x0000 (0x001C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FCalculateTargetExposureVantageResult       WeaponExposureCheckResult;                     // 0x001C (0x001C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FCalculateTargetExposureVantageResult       FullExposureCheckResult;                       // 0x0038 (0x001C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            NumExposureChecksUsed;                         // 0x0054 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct GearboxFramework.ExposureUtilityBasicCaching.ExposureCacheStruct
// 0x0090
struct FExposureCacheStruct
{
	struct FName                                       FromPawnName;                                  // 0x0000 (0x0008) [0x0000000000100000]               
	struct FName                                       ToActorName;                                   // 0x0008 (0x0008) [0x0000000000100000]               
	float                                              TimeCached;                                    // 0x0010 (0x0004) [0x0000000000100000]               
	float                                              NextUpdateTime;                                // 0x0014 (0x0004) [0x0000000000100000]               
	float                                              Exposure;                                      // 0x0018 (0x0004) [0x0000000000100000]               
	struct FVector                                     FromLoc;                                       // 0x001C (0x000C) [0x0000000000100000]               
	struct FVector                                     ToLoc;                                         // 0x0028 (0x000C) [0x0000000000100000]               
	uint32_t                                           bSourceCrouched : 1;                           // 0x0034 (0x0004) [0x0000000000100000] [0x00000001] 
	uint32_t                                           bTargetCrouched : 1;                           // 0x0034 (0x0004) [0x0000000000100000] [0x00000002] 
	struct FCalculateTargetExposureResult              CalcTargetExpResult;                           // 0x0038 (0x0058) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.ExposureUtilityFixedCost.PointExposureData
// 0x0048
struct FPointExposureData
{
	class AActor*                                      Looker;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Ignore1;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class AActor*                                      Ignore2;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	struct FVector                                     Point;                                         // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     Point2;                                        // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     Extent;                                        // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              Exposure;                                      // 0x003C (0x0004) [0x0000000000000000]               
	float                                              LastCheckTime;                                 // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              LastUpdateTime;                                // 0x0044 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.ExposureUtilityFixedCost.BucketStruct
// 0x0010
struct FBucketStruct
{
	int32_t                                            NdxToStartCheckFrom;                           // 0x0000 (0x0004) [0x0000000000100000]               
	float                                              DistanceSquared;                               // 0x0004 (0x0004) [0x0000000000100000]               
	int32_t                                            MaxLineChecksPerFrame;                         // 0x0008 (0x0004) [0x0000000000100000]               
	int32_t                                            MaxIterationsPerFrame;                         // 0x000C (0x0004) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.ExposureUtilityFixedCost.ExposureUpdateStruct
// 0x0074
struct FExposureUpdateStruct
{
	class AGearboxPawn*                                FromPawn;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	class AActor*                                      ToActor;                                       // 0x0008 (0x0008) [0x0000000000100000]               
	float                                              TimeRequested;                                 // 0x0010 (0x0004) [0x0000000000100000]               
	float                                              Exposure;                                      // 0x0014 (0x0004) [0x0000000000100000]               
	uint8_t                                            ShouldRemove;                                  // 0x0018 (0x0001) [0x0000000000100000]               
	struct FCalculateTargetExposureResult              CalcTargetExpResult;                           // 0x001C (0x0058) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.ExposureUtilityFixedCost.ExposureLookupPair
// 0x0010
struct FExposureLookupPair
{
	class AGearboxPawn*                                pLooker;                                       // 0x0000 (0x0008) [0x0000000000100000]               
	class AActor*                                      pTarget;                                       // 0x0008 (0x0008) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.FeatherBoneBlendDefinition.FeatherBoneBlendData
// 0x000C
struct FFeatherBoneBlendData
{
	struct FName                                       StartBoneName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendWeight;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.FeatureProviderDefinition.FeatureSwitchData
// 0x0028
struct FFeatureSwitchData
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            BitWidth;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            BitIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            StartValue;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              Items;                                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.FeatureProviderDefinition.FeatureNodeData
// 0x0020
struct FFeatureNodeData
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              Items;                                         // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UFeatureDefinition*                          Definition;                                    // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.FlagExpressionEvaluator.FlagEvalORConnector
// 0x0010
struct FFlagEvalORConnector
{
	class TArray<struct FFlagEvalConditional>          ANDChain;                                      // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.FlagExpressionEvaluator.FlagEvalConditional
// 0x0030
struct FFlagEvalConditional
{
	uint8_t                                            FlagEvalType;                                  // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UFlagDefinition*                             FlagDefinition;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                TimeSeconds;                                   // 0x0010 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.FoleyMainComponent.ExtraFoleyParameter
// 0x000C
struct FExtraFoleyParameter
{
	class UAkRtpc*                                     Parameter;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.GBXActorList.s_actorList
// 0x0010
struct Fs_actorList
{
	struct FName                                       LevelName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GBXCameraState.CameraPostProcessModifier
// 0x0124
struct FCameraPostProcessModifier
{
	float                                              BlendAlpha;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPostProcessSettings                        PPSettings;                                    // 0x0008 (0x0118) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bOnlyOverrideMaxNearBlurAmountIfDOFWasOff : 1; // 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.GBXInfluenceInfo_Danger.DangerTypeData
// 0x0020
struct FDangerTypeData
{
	struct FName                                       Type;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Filter;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            TeamIdx;                                       // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<struct FName>                         LinkedTypes;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GBXInfluenceInfo_GroupLineOfSight.LOSGroup
// 0x0020
struct FLOSGroup
{
	class TArray<int32_t>                              GroupInfo;                                     // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<int32_t>                              GroupInfoBuffer;                               // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.IGBXTargetSearch.TargetSearchResult
// 0x0048
struct FTargetSearchResult
{
	class AActor*                                      HitActor;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	struct FVector                                     HitLocation;                                   // 0x0008 (0x000C) [0x0000000000100000]               
	struct FVector                                     HitNormal;                                     // 0x0014 (0x000C) [0x0000000000100000]               
	struct FTraceHitInfo                               HitInfo;                                       // 0x0020 (0x0028) [0x0000000000180000] (CPF_Component)
};

// ScriptStruct GearboxFramework.GearboxData.ServiceParameterResult
// 0x0020
struct FServiceParameterResult
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxData.ServiceResult
// 0x0020
struct FServiceResult
{
	struct FName                                       ServiceName;                                   // 0x0000 (0x0008) [0x0000000000100000]               
	struct FName                                       ConfigurationGroup;                            // 0x0008 (0x0008) [0x0000000000100000]               
	class TArray<struct FServiceParameterResult>       Parameters;                                    // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxData.EntitlementResult
// 0x0028
struct FEntitlementResult
{
	struct FName                                       Identifier;                                    // 0x0000 (0x0008) [0x0000000000100000]               
	class FString                                      Payload;                                       // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Id;                                            // 0x0018 (0x0004) [0x0000000000100000]               
	uint32_t                                           bConsumable : 1;                               // 0x001C (0x0004) [0x0000000000100000] [0x00000001] 
	int32_t                                            Consumed;                                      // 0x0020 (0x0004) [0x0000000000100000]               
	int32_t                                            ConsumableAmount;                              // 0x0024 (0x0004) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.GearboxData.OfferResult
// 0x0038
struct FOfferResult
{
	class FString                                      TitleLocalized;                                // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      DescriptionLocalized;                          // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Id;                                            // 0x0020 (0x0004) [0x0000000000100000]               
	uint32_t                                           bNotified : 1;                                 // 0x0024 (0x0004) [0x0000000000100000] [0x00000001] 
	class FString                                      DateUnlocked;                                  // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxData.ArchwayResult
// 0x00E0
struct FArchwayResult
{
	class FString                                      AuthToken;                                     // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      GearboxUserToken;                              // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      GearboxUserEmail;                              // 0x0020 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Messages;                                      // 0x0030 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FEntitlementResult>            Entitlements;                                  // 0x0040 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FOfferResult>                  Offers;                                        // 0x0050 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           bInProgress : 1;                               // 0x0060 (0x0004) [0x0000000000100000] [0x00000001] 
	uint32_t                                           bSuccess : 1;                                  // 0x0060 (0x0004) [0x0000000000100000] [0x00000002] 
	uint32_t                                           bDisableSpark : 1;                             // 0x0060 (0x0004) [0x0000000000100000] [0x00000004] 
	uint32_t                                           bTimeOut : 1;                                  // 0x0060 (0x0004) [0x0000000000100000] [0x00000008] 
	uint32_t                                           bHasShiftAccount : 1;                          // 0x0060 (0x0004) [0x0000000000100000] [0x00000010] 
	uint32_t                                           bBanned : 1;                                   // 0x0060 (0x0004) [0x0000000000100000] [0x00000020] 
	uint32_t                                           bQueued : 1;                                   // 0x0060 (0x0004) [0x0000000000100000] [0x00000040] 
	int32_t                                            QueueStatus;                                   // 0x0064 (0x0004) [0x0000000000100000]               
	class FString                                      EmergencyMessage;                              // 0x0068 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      SignAgreements;                                // 0x0078 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      NATType;                                       // 0x0088 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      SupportId;                                     // 0x0098 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           bWarning : 1;                                  // 0x00A8 (0x0004) [0x0000000000100000] [0x00000001] 
	uint32_t                                           bSuspended : 1;                                // 0x00A8 (0x0004) [0x0000000000100000] [0x00000002] 
	class FString                                      SuspensionEndDate;                             // 0x00B0 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      BanEndDate;                                    // 0x00C0 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      UserMessage;                                   // 0x00D0 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxAccountData.RedeemCodeRequest
// 0x0024
struct FRedeemCodeRequest
{
	class FString                                      JobID;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MaxWaitMilliseconds;                           // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MinWaitMilliseconds;                           // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            NumRetriesRemaining;                           // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetries;                                    // 0x001C (0x0004) [0x0000000000000000]               
	float                                              NextRetryTime;                                 // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SparkTypes.SparkResult
// 0x0024
struct FSparkResult
{
	int32_t                                            RequestId;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bRequestSucceeded : 1;                         // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            ErrorCode;                                     // 0x0008 (0x0001) [0x0000000000000000]               
	int32_t                                            HttpStatusCode;                                // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<uint8_t>                              ResponseBody;                                  // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            ResultTimeDelta;                               // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.PathingObstacleInfo.AvoidData
// 0x0030
struct FAvoidData
{
	int32_t                                            GridSize;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxTime;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxDist;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	class TArray<struct FObstaclePoint>                ObstaclePoints;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UPathingObstacleInfo*>          Obstacles;                                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.PathingObstacleInfo.ObstaclePoint
// 0x000C
struct FObstaclePoint
{
	float                                              Value;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   Offset;                                        // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.PathingObstacleInfo.NavMeshData
// 0x0070
struct FNavMeshData
{
	float                                              Distance;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              VertDistance;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              LastCheck;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastCheckLoc;                                  // 0x000C (0x000C) [0x0000000000000000]               
	uint32_t                                           bRequiresLineCheck : 1;                        // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FBasedPosition                              NearestLoc;                                    // 0x0020 (0x0038) [0x0000000000000000]               
	struct FGBXNavMeshPolyRef                          NearestPoly;                                   // 0x0058 (0x0010) [0x0000000000000000]               
	class UGearboxNavigationHandle*                    NavHandle;                                     // 0x0068 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.PathingObstacleInfo.VelocityObstacle
// 0x002C
struct FVelocityObstacle
{
	uint32_t                                           bTooClose : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCausesAvoidance : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector2D                                   Apex;                                          // 0x0004 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   LeftPoint;                                     // 0x000C (0x0008) [0x0000000000000000]               
	struct FVector2D                                   LeftNormal;                                    // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   RightPoint;                                    // 0x001C (0x0008) [0x0000000000000000]               
	struct FVector2D                                   RightNormal;                                   // 0x0024 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxAIUtility.PathingEntity
// 0x0020
struct FPathingEntity
{
	int32_t                                            PathIndex;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class AGearboxPawn*                                GBXPawn;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class UAIComponent*                                AIComponent;                                   // 0x0010 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UGearboxNavigationHandle*                    NavHandle;                                     // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxEditorNode.VariableLink
// 0x0010
struct FVariableLink
{
	class TArray<class UGearboxEditorNode*>            Links;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxEditorNode.OutputLink
// 0x0010
struct FOutputLink
{
	class TArray<class UGearboxEditorNode*>            Links;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GFxMovieState.MovieStateStruct
// 0x0020
struct FMovieStateStruct
{
	class TArray<struct FName>                         States;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FName>                         Flags;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GFxMovieState.MovieStateData
// 0x0030
struct FMovieStateData
{
	struct FName                                       State;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Mode;                                          // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      Context;                                       // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FASValue>                      ASArgs;                                        // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxGFxMovie.MovieInitParams
// 0x0018
struct FMovieInitParams
{
	uint32_t                                           bAllowFocus : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAllowInput : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bStartPaused : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bEnableGammaCorrection : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDisplayWithHudOff : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	int32_t                                            LocalPlayerOwnerIndex;                         // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            RenderTextureMode;                             // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            ScaleMode;                                     // 0x0009 (0x0001) [0x0000000000000000]               
	uint8_t                                            AlignMode;                                     // 0x000A (0x0001) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      RenderTexture;                                 // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxGFxObjectManager.InnerGFxObjectMap
// 0x0050
struct FInnerGFxObjectMap
{
	uint8_t                                           UnknownData00[0x50];                              // 0x0000 (0x0050) UNKNOWN PROPERTY: MapProperty GearboxFramework.GearboxGFxObjectManager.InnerGFxObjectMap.Objects
};

// ScriptStruct GearboxFramework.GearboxHintBarContainerGFxObject.GearboxGFxMovieHint
// 0x0028
struct FGearboxGFxMovieHint
{
	struct FName                                       HintTag;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      HintLabel;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            HintInputMapIndex;                             // 0x0018 (0x0004) [0x0000000000000000]               
	struct FName                                       AudioEvent;                                    // 0x001C (0x0008) [0x0000000000000000]               
	uint32_t                                           bVisible : 1;                                  // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisabled : 1;                                 // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bHandleInput : 1;                              // 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bClickable : 1;                                // 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIsPressAndHold : 1;                           // 0x0024 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bIsCurrentlyPressed : 1;                       // 0x0024 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct GearboxFramework.GearboxHintBarContainerGFxObject.GearboxGFxMovieHintInput
// 0x0018
struct FGearboxGFxMovieHintInput
{
	struct FName                                       HintIdentifier;                                // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       InputKeyKeyboard;                              // 0x0008 (0x0008) [0x0000000000000000]               
	struct FName                                       InputKeyController;                            // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.IFlagProvider.FlagProviderData
// 0x0070
struct FFlagProviderData
{
	class TArray<struct FFlag>                         DynamicFlags;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UFlagDefinition*>               DynamicFlagDefinitions;                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                           UnknownData00[0x50];                              // 0x0020 (0x0050) UNKNOWN PROPERTY: MapProperty GearboxFramework.IFlagProvider.FlagProviderData.DynamicFlagDefLookup
};

// ScriptStruct GearboxFramework.INounAttributeProvider.NounAttributeState
// 0x0028
struct FNounAttributeState
{
	struct FName                                       NounName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              BaseValue;                                     // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<class UAttributeModifier*>            ModifierStack;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ReplicationStrategy;                           // 0x0020 (0x0001) [0x0000000000000000]               
	int32_t                                            IndexInReplicationArray;                       // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxNavigationHandle.ConstrainedPointData
// 0x0024
struct FConstrainedPointData
{
	struct FInfluencePointRef                          Point;                                         // 0x0000 (0x0010) [0x0000000000000000]               
	struct FGBXNavMeshPolyRef                          Poly;                                          // 0x0010 (0x0010) [0x0000000000000000]               
	float                                              Distance;                                      // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SnapshotRecord.IconData
// 0x0014
struct FIconData
{
	float                                              U;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              V;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              UL;                                            // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              VL;                                            // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.TargetDebugDatum
// 0x0030
struct FTargetDebugDatum
{
	uint32_t                                           bValid : 1;                                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCurrent : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsPlayer : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	class FString                                      TargetName;                                    // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TotalPriority;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	class TArray<struct FTargetPriorityInfo>           PriorityData;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.TargetPriorityInfo
// 0x0020
struct FTargetPriorityInfo
{
	struct FName                                       TargetName;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      ShortName;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Value;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	struct FColor                                      BarColor;                                      // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.CoverDebugInfo
// 0x0060
struct FCoverDebugInfo
{
	struct FName                                       CoverRegionName;                               // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Score;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Distance;                                      // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           IsACandidate : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           IsBestCandidate : 1;                           // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	class FString                                      FailString;                                    // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FVector                                     LeftEndPoint;                                  // 0x0028 (0x000C) [0x0000000000000000]               
	struct FVector                                     RightEndPoint;                                 // 0x0034 (0x000C) [0x0000000000000000]               
	struct FVector                                     CoverDirection;                                // 0x0040 (0x000C) [0x0000000000000000]               
	class TArray<struct FCoverDebugScoringData>        ScoringInfo;                                   // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.CoverDebugScoringData
// 0x000C
struct FCoverDebugScoringData
{
	struct FName                                       PriorityName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Score;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxPawnSnapshotRecord.DebugExposure
// 0x0018
struct FDebugExposure
{
	float                                              TargetExposure;                                // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MyExposure;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     InWorldLocation;                               // 0x0008 (0x000C) [0x0000000000000000]               
	uint32_t                                           IsPlayerInfo : 1;                              // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.GearboxProcess.StepConfiguration
// 0x0014
struct FStepConfiguration
{
	int32_t                                            FirstAttemptDelay;                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            BaseRetrySeconds;                              // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              RetryMultiplier;                               // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetryAttempts;                              // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            RetryJitter;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxRenderTextureManager.ThumbnailRenderData
// 0x004C
struct FThumbnailRenderData
{
	struct FName                                       Context;                                       // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UTextureRenderTarget2D*                      RenderTarget;                                  // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UTexture*                                    ResultTexture;                                 // 0x0010 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            UpdateType;                                    // 0x0018 (0x0001) [0x0000000000000000]               
	class UMeshComponent*                              Mesh;                                          // 0x0020 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            TextureSizeX;                                  // 0x0028 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            TextureSizeY;                                  // 0x002C (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            SizeX;                                         // 0x0030 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            SizeY;                                         // 0x0034 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<class UTexture*>                      ReferencedTextures;                            // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              StopStreamTexturesTime;                        // 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GearboxRenderTextureManager.ThumbnailLightData
// 0x0018
struct FThumbnailLightData
{
	struct FRotator                                    Direction;                                     // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class ULightComponent*                             Light;                                         // 0x0010 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltPartBoundsEntry
// 0x0024
struct FGestaltPartBoundsEntry
{
	struct FName                                       SkeletalMeshFragmentName;                      // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FBoxSphereBounds                            ReferencePoseBounds;                           // 0x0008 (0x001C) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltSocketRemapEntry
// 0x0020
struct FGestaltSocketRemapEntry
{
	class USkeletalMesh*                               SkeletalMeshFragment;                          // 0x0000 (0x0008) [0x0000000020020000] (CPF_EditConst | CPF_Deprecated)
	struct FName                                       SkeletalMeshFragmentName;                      // 0x0008 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FName                                       OriginalSocketName;                            // 0x0010 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FName                                       MangledSocketName;                             // 0x0018 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltAccessoryNameEntry
// 0x0008
struct FGestaltAccessoryNameEntry
{
	struct FName                                       SkeletalMeshFragmentName;                      // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltInfo
// 0x0010
struct FGestaltInfo
{
	class TArray<struct FGestaltPart>                  Parts;                                         // 0x0000 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.GestaltSkeletalMeshDefinition.GestaltPartPermutation
// 0x0018
struct FGestaltPartPermutation
{
	struct FName                                       MeshName;                                      // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FName                                       GroupName;                                     // 0x0008 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FName                                       PartName;                                      // 0x0010 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct GearboxFramework.GFxActorMoviePool.MovieInstanceArray
// 0x0018
struct FMovieInstanceArray
{
	class TArray<class UGearboxGFxMovie*>              Movies;                                        // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UGearboxGFxMovie*                            PoolParent;                                    // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GFxMovieDefinition.GFxMenuLink
// 0x0010
struct FGFxMenuLink
{
	struct FName                                       MenuName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGFxMovieDefinition*                         Definition;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.GFxMovieDrawStyleHUD.HUDCoordValue
// 0x0010
struct FHUDCoordValue
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentValue;                                  // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bCacheValid : 1;                               // 0x000C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct GearboxFramework.GFxMovieDrawStyleHUD.HUDAnchorPoint
// 0x0024
struct FHUDAnchorPoint
{
	uint8_t                                            MoviePoint;                                    // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ScreenPoint;                                   // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FHUDCoordValue                              Offset[0x2];                                   // 0x0004 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.GFxMovieManager.GearboxGFxPlayParameters
// 0x0018
struct FGearboxGFxPlayParameters
{
	class UGFxMovieDefinition*                         Definition;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     OtherObject;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class APlayerController*                           PlayerOwner;                                   // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.GFxMovieStatePlayerAware.MovieRangeStateData
// 0x0004 (0x0030 - 0x0034)
struct FMovieRangeStateData : FMovieStateData
{
	float                                              Distance;                                      // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.IAIInterface.AttributeValuePair
// 0x0028
struct FAttributeValuePair
{
	struct FName                                       Key;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                Value;                                         // 0x0008 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.IAIInterface.SpecialMoveValuePair
// 0x0010
struct FSpecialMoveValuePair
{
	struct FName                                       Key;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USpecialMoveDefinition*                      Value;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.IBodyProvider.BodySlotOptions
// 0x001C
struct FBodySlotOptions
{
	class UBodySlotDefinition*                         Slots[0x3];                                    // 0x0000 (0x0018) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPopulated : 1;                                // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.ICustomEvent.CustomEventReactionData
// 0x0020
struct FCustomEventReactionData
{
	struct FName                                       EventName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bReplicateEvent : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class TArray<class UBehaviorBase*>                 Behaviors;                                     // 0x0010 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct GearboxFramework.ICustomEvent.CustomEventReactionDataSpecialized
// 0x0004 (0x0008 - 0x000C)
struct FCustomEventReactionDataSpecialized : FSpecializedBehaviorEvent
{
	uint32_t                                           bReplicateEvent : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct GearboxFramework.IExpandableListEntry.CategoryPair
// 0x0010
struct FCategoryPair
{
	class UGearboxExpandableListCategory*              Category;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGearboxExpandableListSubCategory*           SubCategory;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.IFeatureConsumer.NamedFeatureData
// 0x0010
struct FNamedFeatureData
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UClass*                                      Class;                                         // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.IGFxUIManager.QueuedGFxUIAction
// 0x0020
struct FQueuedGFxUIAction
{
	class UGFxUIAction_Base*                           Action;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class UGFxMoviePlayer*                             KnownTargetMovie;                              // 0x0008 (0x0008) [0x0000000000000000]               
	class TArray<struct FGFxUIActionParam>             OptParams;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.INounAttributeProvider.ReplicatedNounAttributeState
// 0x0010
struct FReplicatedNounAttributeState
{
	struct FName                                       NounName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bOnlyRelevantToOwner : 1;                      // 0x000C (0x0004) [0x1000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct GearboxFramework.InterpTrackSpeak.SpeakTrackKey
// 0x0010
struct FSpeakTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class UDialogResponse_ScriptedSpeak*               SpeakResponse;                                 // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.MindTargetInfo.HitTargetRecord
// 0x0014
struct FHitTargetRecord
{
	float                                              Damage;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              HitTime;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     HitLoc;                                        // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.MindTargetInfo.PriorityDebugStruct
// 0x0020
struct FPriorityDebugStruct
{
	struct FName                                       IteratorName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      ShortName;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              PriorityValue;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           AutomaticTopPriority : 1;                      // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.NavAnimDefinition.NavAnimData
// 0x0018
struct FNavAnimData
{
	class UNavAnimTag*                                 Tag;                                           // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpecialMove_NavAnim*                        Anim;                                          // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Condition;                                     // 0x0010 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct GearboxFramework.PawnRelevanceUtilityCaching.RelevanceCacheStruct
// 0x0038
struct FRelevanceCacheStruct
{
	struct FName                                       RealViewerName;                                // 0x0000 (0x0008) [0x0000000000100000]               
	struct FName                                       ToPawnName;                                    // 0x0008 (0x0008) [0x0000000000100000]               
	float                                              TimeCached;                                    // 0x0010 (0x0004) [0x0000000000100000]               
	float                                              NextUpdateTime;                                // 0x0014 (0x0004) [0x0000000000100000]               
	uint32_t                                           bIsRelevant : 1;                               // 0x0018 (0x0004) [0x0000000000100000] [0x00000001] 
	struct FVector                                     FromLoc;                                       // 0x001C (0x000C) [0x0000000000100000]               
	struct FVector                                     ToLoc;                                         // 0x0028 (0x000C) [0x0000000000100000]               
	int32_t                                            RotatingIndex;                                 // 0x0034 (0x0004) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.PawnRelevanceUtilityFixedCost.RelevanceLookupPair
// 0x0010
struct FRelevanceLookupPair
{
	class APlayerController*                           Viewer;                                        // 0x0000 (0x0008) [0x0000000000100000]               
	class AGearboxPawn*                                Pawn;                                          // 0x0008 (0x0008) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.PawnRelevanceUtilityFixedCost.RelevanceBucketStruct
// 0x0014
struct FRelevanceBucketStruct
{
	int32_t                                            NdxToStartCheckFrom;                           // 0x0000 (0x0004) [0x0000000000100000]               
	float                                              DistanceSquared;                               // 0x0004 (0x0004) [0x0000000000100000]               
	int32_t                                            MinLineChecksPerFrame;                         // 0x0008 (0x0004) [0x0000000000100000]               
	int32_t                                            MaxLineChecksPerFrame;                         // 0x000C (0x0004) [0x0000000000100000]               
	int32_t                                            MaxIterationsPerFrame;                         // 0x0010 (0x0004) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.PawnRelevanceUtilityFixedCost.RelevanceUpdateStruct
// 0x0034
struct FRelevanceUpdateStruct
{
	class APlayerController*                           FromRealViewer;                                // 0x0000 (0x0008) [0x0000000000100000]               
	struct FVector                                     SrcLocation;                                   // 0x0008 (0x000C) [0x0000000000100000]               
	class AGearboxPawn*                                ToPawn;                                        // 0x0018 (0x0008) [0x0000000000100000]               
	float                                              TimeRequested;                                 // 0x0020 (0x0004) [0x0000000000100000]               
	uint32_t                                           bRelevant : 1;                                 // 0x0024 (0x0004) [0x0000000000100000] [0x00000001] 
	uint8_t                                            ShouldRemove;                                  // 0x0028 (0x0001) [0x0000000000100000]               
	uint32_t                                           bIsForcedValue : 1;                            // 0x002C (0x0004) [0x0000000000100000] [0x00000001] 
	uint32_t                                           bForceNextCheckTrue : 1;                       // 0x002C (0x0004) [0x0000000000100000] [0x00000002] 
	float                                              NextUpdateTime;                                // 0x0030 (0x0004) [0x0000000000100000]               
};

// ScriptStruct GearboxFramework.Perch.PerchAttachPieceData
// 0x0048
struct FPerchAttachPieceData
{
	class AActor*                                      User;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Actor;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAttach : 1;                                   // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     LocOffset;                                     // 0x0018 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RotOffset;                                     // 0x0024 (0x000C) [0x0000000000000000]               
	struct FName                                       AttachmentName;                                // 0x0030 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 StaticMesh;                                    // 0x0038 (0x0008) [0x0000000000000000]               
	class USkeletalMesh*                               SkelMesh;                                      // 0x0040 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.PerchDefinition.PerchData
// 0x0018
struct FPerchData
{
	class UPerchTag*                                   Tag;                                           // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpecialMove_Perch*                          Anim;                                          // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Condition;                                     // 0x0010 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct GearboxFramework.PhysicsJumpDefinition.PhysicsJumpData
// 0x0018
struct FPhysicsJumpData
{
	class UPhysicsJumpTag*                             Tag;                                           // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpecialMove_PhysicsJump*                    Anim;                                          // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Condition;                                     // 0x0010 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct GearboxFramework.PopUpDebugBarGraph.ColumnDataStruct
// 0x0018
struct FColumnDataStruct
{
	class FString                                      HeaderText;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Value;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	struct FColor                                      BarColor;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.RandomAttributeValueResolver.SavedRandomValue
// 0x0010
struct FSavedRandomValue
{
	struct FName                                       ContextName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              SavedValue;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ExpirationTime;                                // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.ShowDebugHelpers.DebugStringData
// 0x0014
struct FDebugStringData
{
	class FString                                      DebugStr;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      StrColor;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.ShowDebugHelpers.DebugEntryData
// 0x0010
struct FDebugEntryData
{
	class TArray<struct FDebugStringData>              DebugStrs;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.SparkInitializationProcess.SparkFallbackAuthSessionTicketRequestData
// 0x0020
struct FSparkFallbackAuthSessionTicketRequestData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPlatformUserId                             UserId;                                        // 0x0004 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              Ticket;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.SparkInterface.HttpParameters
// 0x0050
struct FHttpParameters
{
	class USparkServiceConfiguration*                  ServiceConfiguration;                          // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SubService;                                    // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            ContentType;                                   // 0x0018 (0x0001) [0x0000000000000000]               
	class FString                                      CustomContentType;                             // 0x0020 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            AcceptsType;                                   // 0x0030 (0x0001) [0x0000000000000000]               
	class FString                                      CustomAcceptsType;                             // 0x0038 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            Method;                                        // 0x0048 (0x0001) [0x0000000000000000]               
	uint32_t                                           bResponseDesired : 1;                          // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAllowRetries : 1;                             // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct GearboxFramework.SparkInterfaceImpl.LastModifiedCacheEntry
// 0x0038
struct FLastModifiedCacheEntry
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      URL;                                           // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      EntityTag;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LastModifiedTime;                              // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.SparkInterfaceImpl.SparkOutstandingRequest
// 0x0150
struct FSparkOutstandingRequest
{
	uint8_t                                            State;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	struct FDouble                                     SleepUntil;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bWantResponse : 1;                             // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bScriptCallback : 1;                           // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAwsRequest : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bCertPinning : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FScriptDelegate                             RequestCompleteDelegate;                       // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            RequestIdentifier;                             // 0x0028 (0x0004) [0x0000000000000000]               
	struct FPointer                                    SparkUpdateCallback;                           // 0x0030 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    HttpRequest;                                   // 0x0038 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FSharedPtr_Mirror                           RequestBody;                                   // 0x0040 (0x0010) [0x0000000000001000] (CPF_Native)  
	struct FSharedPtr_Mirror                           ResponseBody;                                  // 0x0050 (0x0010) [0x0000000000001000] (CPF_Native)  
	struct FSharedPtr_Mirror                           ResponseHeaders;                               // 0x0060 (0x0010) [0x0000000000001000] (CPF_Native)  
	int32_t                                            RetryNumber;                                   // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            BaseRetryIntervalSeconds;                      // 0x0074 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetryAttempts;                              // 0x0078 (0x0004) [0x0000000000000000]               
	float                                              RetryMultiplier;                               // 0x007C (0x0004) [0x0000000000000000]               
	int32_t                                            RetryJitter;                                   // 0x0080 (0x0004) [0x0000000000000000]               
	int32_t                                            HttpTimeout;                                   // 0x0084 (0x0004) [0x0000000000000000]               
	class FString                                      Accept;                                        // 0x0088 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      ContentType;                                   // 0x0098 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            Method;                                        // 0x00A8 (0x0001) [0x0000000000000000]               
	class FString                                      URL;                                           // 0x00B0 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FDouble                                     RequestCreateTime;                             // 0x00C0 (0x0008) [0x0000000000000000]               
	struct FDouble                                     RequestStartTime;                              // 0x00C8 (0x0008) [0x0000000000000000]               
	class FString                                      AuthToken;                                     // 0x00D0 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class USparkServiceConfiguration*                  ServiceConfiguration;                          // 0x00E0 (0x0008) [0x0000000000000000]               
	class FString                                      SparkEnv;                                      // 0x00E8 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                           UnknownData00[0x50];                              // 0x00F8 (0x0050) UNKNOWN PROPERTY: MapProperty GearboxFramework.SparkInterfaceImpl.SparkOutstandingRequest.Headers
	struct FPlatformUserId                             UserId;                                        // 0x0148 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SparkNews.NewsArticle
// 0x0070
struct FNewsArticle
{
	class FString                                      Header;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Body;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Summary;                                       // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FullscreenTextureURL;                          // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SmallTextureURL;                               // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LearnMoreURL;                                  // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FNewsArticleTag>               ArticleTags;                                   // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.SparkNews.NewsArticleTag
// 0x0030
struct FNewsArticleTag
{
	class FString                                      TagName;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TagType;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TagValue;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.SparkServiceConfiguration.SparkMicropatch
// 0x0044
struct FSparkMicropatch
{
	class FString                                      ObjectPath;                                    // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      PropertyPath;                                  // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      OriginalValue;                                 // 0x0020 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      NewValue;                                      // 0x0030 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           bApplied : 1;                                  // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct GearboxFramework.SpawnEncounter.EncounterWaveData
// 0x0050
struct FEncounterWaveData
{
	float                                              InitialDelay;                                  // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PercentToComplete;                             // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpawnDefinition*                            SpawnDef;                                      // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class ASpawner*>                      Spawners;                                      // 0x0010 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FEncounterLimitData>           SpawnLimits;                                   // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           WaveComplete : 1;                              // 0x0030 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           AllKilledInWave : 1;                           // 0x0030 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class USpawnDefinition*                            EncounterPopulationDef;                        // 0x0038 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<class ASpawner*>                      MemberOpportunities;                           // 0x0040 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.SpawnEncounter.EncounterLimitState
// 0x0008
struct FEncounterLimitState
{
	int32_t                                            NumTotalSpawned;                               // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumCurrentlyActive;                            // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct GearboxFramework.SpawnEncounter.EncounterLimitData
// 0x005C
struct FEncounterLimitData
{
	class TArray<class USpawnedActorTagDefinition*>    ActorTags;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FAttributeInitializationData                MaxTotalToSpawn;                               // 0x0010 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                MaxActiveAtATime;                              // 0x0030 (0x0020) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ConstraintType;                                // 0x0050 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FEncounterLimitState                        LimitState;                                    // 0x0054 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct GearboxFramework.SpawnEncounter.SpawnOption
// 0x000C
struct FSpawnOption
{
	class USpawnFactory*                               Factory;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              ComputedProbability;                           // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SpawnFactory.DestructionParameters
// 0x0004
struct FDestructionParameters
{
	uint32_t                                           bActorExemptFromIrrelevancyTests : 1;          // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct GearboxFramework.SpawnMaster.SpawnerTracker
// 0x0064
struct FSpawnerTracker
{
	struct FName                                       SpawnerOutermostName;                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       SpawnerName;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class ASpawner*                                    LoadedSpawner;                                 // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<struct FSpawnedActorData>             SpawnedActors;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    SavedActorsList;                               // 0x0028 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class TArray<struct FRemovedActorData>             ActorsRemovedWhileUnloaded;                    // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           DynamicSpawner : 1;                            // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasSavedState : 1;                            // 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            bTotalResetOnLevelLoad;                        // 0x0044 (0x0001) [0x0000000000000000]               
	uint8_t                                            RespawnStyle;                                  // 0x0045 (0x0001) [0x0000000000000000]               
	float                                              RespawnDelayStartTime;                         // 0x0048 (0x0004) [0x0000000000000000]               
	struct FSpawnerSavedState                          SavedState;                                    // 0x004C (0x0010) [0x0000000000000000]               
	struct FSpawnerCleanupParameters                   SpawnerCleanupParams;                          // 0x005C (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SpawnMaster.SpawnedActorData
// 0x0024
struct FSpawnedActorData
{
	class AActor*                                      SpawnedActor;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class USpawnFactory*                               SpawnFactory;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	struct FDestructionParameters                      FactoryDestructionParams;                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              flLastInRadiusOrVisible;                       // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            SpawnCost;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            CreationFlags;                                 // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           Reuse : 1;                                     // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsDead : 1;                                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCanSave : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bShouldRemove : 1;                             // 0x0020 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct GearboxFramework.SpawnMaster.RemovedActorData
// 0x003C
struct FRemovedActorData
{
	uint32_t                                           bReuseActor : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            CreationFlags;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	struct FNameBasedObjectPath                        FactoryPath;                                   // 0x0008 (0x0034) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SpawnMaster.SpawnMasterStat
// 0x0020
struct FSpawnMasterStat
{
	struct FName                                       StatName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              StatTime;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              StatMaxTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            StatIterations;                                // 0x0010 (0x0004) [0x0000000000000000]               
	struct FQWord                                      IterationStartTime;                            // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SpawnMaster.EncounterTracker
// 0x006C
struct FEncounterTracker
{
	class ASpawnEncounter*                             LoadedEncounter;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class ULevelStreaming*                             EncountersLevel;                               // 0x0008 (0x0008) [0x0000000000000000]               
	struct FNameBasedObjectPath                        EncounterPath;                                 // 0x0010 (0x0034) [0x0000000000000000]               
	uint32_t                                           bNeedsKismetUpdate : 1;                        // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<uint8_t>                              EncounterCompletionSaveState;                  // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FEncounterWaveTracker>         EncounterSaveState;                            // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              RespawnDelayStartTime;                         // 0x0068 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SpawnMaster.EncounterWaveTracker
// 0x0010
struct FEncounterWaveTracker
{
	int32_t                                            nWaveIdx;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            nLimitStateIdx;                                // 0x0004 (0x0004) [0x0000000000000000]               
	struct FEncounterLimitState                        LimitSaveState;                                // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.SpawnPointDefinition.SpawnData
// 0x0020
struct FSpawnData
{
	class USpawnPointTag*                              Tag;                                           // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpecialMove_Spawn*                          Anim;                                          // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UGearboxAnimDefinition*                      PointAnim;                                     // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Condition;                                     // 0x0018 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct GearboxFramework.SpecialMoveExpressionEvaluator.SpecialMoveEvalConditional
// 0x0010
struct FSpecialMoveEvalConditional
{
	uint8_t                                            SpecialMoveEvalType;                           // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class USpecialMoveDefinition*                      SpecialMoveDefinition;                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.SpecialMoveExpressionList.SMExpressionList
// 0x0010
struct FSMExpressionList
{
	class UExpressionEvaluator*                        Expression;                                    // 0x0000 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class USpecialMoveDefinition*                      SMD;                                           // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct GearboxFramework.SpecialMoveRandom.SMRandomPair
// 0x0010
struct FSMRandomPair
{
	float                                              Weight;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USpecialMoveDefinition*                      SMD;                                           // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GearboxFramework.TargetingDefinition.TargetBucketData
// 0x0018
struct FTargetBucketData
{
	int32_t                                            SortIndex;                                     // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<int32_t>                              FirstConditions;                               // 0x0008 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.TargetingDefinition.TargetConditionData
// 0x001A
struct FTargetConditionData
{
	class TArray<int32_t>                              NextConditions;                                // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UExpressionEvaluator*                        Condition;                                     // 0x0010 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            Context;                                       // 0x0018 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            Evaluation;                                    // 0x0019 (0x0001) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct GearboxFramework.TargetingDefinition.TargetSortData
// 0x0018
struct FTargetSortData
{
	class TArray<class UTI_Prioritize*>                SortCriteria;                                  // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UTargetSortDefinition*                       SortDefinition;                                // 0x0010 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct GearboxFramework.TurnDefinition.TurnData
// 0x0038
struct FTurnData
{
	float                                              MinRepeatTime;                                 // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpecialMove_Turn*                           Left;                                          // 0x0008 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class USpecialMove_Turn*                           Right;                                         // 0x0010 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class USpecialMove_Turn*                           Left01;                                        // 0x0018 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class USpecialMove_Turn*                           Right01;                                       // 0x0020 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class USpecialMove_Turn*                           Left02;                                        // 0x0028 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class USpecialMove_Turn*                           Right02;                                       // 0x0030 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
};

// ScriptStruct GearboxFramework.UtilityDefinition.UtilityContextData
// 0x0018
struct FUtilityContextData
{
	class UObject*                                     SelfContext;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     EntryContext;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class UObject*                                     CustomContext;                                 // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.UtilityDefinition.UtilityCurveSectionData
// 0x000C
struct FUtilityCurveSectionData
{
	float                                              MinValue;                                      // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Slope;                                         // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Offset;                                        // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct GearboxFramework.UtilityDefinition.UtilityCurveData
// 0x0020
struct FUtilityCurveData
{
	uint32_t                                           bPivotValue : 1;                               // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	float                                              PivotOrigin;                                   // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Scale;                                         // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxValue;                                      // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FUtilityCurveSectionData>      Sections;                                      // 0x0010 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct GearboxFramework.UtilityDefinition.UtilityAxisData
// 0x0040
struct FUtilityAxisData
{
	class UUtilityAxis*                                Value;                                         // 0x0000 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	struct FUtilityCurveData                           Curve;                                         // 0x0008 (0x0020) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	int32_t                                            EntryIndex;                                    // 0x0028 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	int32_t                                            NextAxis;                                      // 0x002C (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	float                                              PreviewValue;                                  // 0x0030 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RuntimePreviewValue;                           // 0x0034 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            RuntimePreviewEntryIndex;                      // 0x0038 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint32_t                                           RuntimePreviewEntryFailed : 1;                 // 0x003C (0x0004) [0x0000000000002002] [0x00000001] (CPF_Const | CPF_Transient)
};

// ScriptStruct GearboxFramework.UtilityDefinition.UtilityConditionData
// 0x0034
struct FUtilityConditionData
{
	class UExpressionEvaluator*                        Condition;                                     // 0x0000 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	uint8_t                                            Context;                                       // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UUtilityAxis*                                ConditionAxis;                                 // 0x0010 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	uint8_t                                            ComparisonOperator;                            // 0x0018 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ComparisonValue;                               // 0x001C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            EntryIndex;                                    // 0x0020 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	int32_t                                            NextCondition;                                 // 0x0024 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	float                                              PreviewAxisValue;                              // 0x0028 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RuntimePreviewAxisValue;                       // 0x002C (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint32_t                                           RuntimePreviewValue : 1;                       // 0x0030 (0x0004) [0x0000000000002002] [0x00000001] (CPF_Const | CPF_Transient)
	uint32_t                                           RuntimePreviewEntryFailed : 1;                 // 0x0030 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
};

// ScriptStruct GearboxFramework.UtilityDefinition.UtilityRuntimePreviewData
// 0x001C
struct FUtilityRuntimePreviewData
{
	struct FName                                       SelfContextName;                               // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       EntryContextName;                              // 0x0008 (0x0008) [0x0000000000000000]               
	struct FName                                       CustomContextName;                             // 0x0010 (0x0008) [0x0000000000000000]               
	float                                              Utility;                                       // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GearboxFramework.UtilityDefinition.UtilityEntryData
// 0x003C
struct FUtilityEntryData
{
	struct FName                                       EntryName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              UtilityScale;                                  // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              UtilityAdd;                                    // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            FirstAxis;                                     // 0x0010 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	int32_t                                            FirstCondition;                                // 0x0014 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class UAttributeContextResolver*                   ContextResolver;                               // 0x0018 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	struct FUtilityRuntimePreviewData                  RuntimePreviewData;                            // 0x0020 (0x001C) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct GearboxFramework.WireTerminal.WireLinkage
// 0x001C
struct FWireLinkage
{
	struct FVector                                     Offset;                                        // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              Width;                                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Slack;                                         // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Segments;                                      // 0x0014 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Link;                                          // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
