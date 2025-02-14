/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: GearboxFramework_parameters.hpp
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
# Parameters
# ========================================================================================= #
*/

// Function GearboxFramework.ActionSequence.TriggerBehavior
// [0x00020401]  (iNative[36571])
struct UActionSequence_execTriggerBehavior_Params
{
	struct FName                                       OutputName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.ActionSequence.CanRun
// [0x00020C00]  (iNative[14806])
struct UActionSequence_eventCanRun_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequence.ActivateEvent
// [0x00020C02]  (iNative[2481])
struct UActionSequence_eventActivateEvent_Params
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.ActionSequence.Update
// [0x00020C02]  (iNative[2482])
struct UActionSequence_eventUpdate_Params
{
};

// Function GearboxFramework.ActionSequence.Init
// [0x00020C00]  (iNative[762])
struct UActionSequence_eventInit_Params
{
};

// Function GearboxFramework.ActionSequence.Stop
// [0x00020C00]  (iNative[623])
struct UActionSequence_eventStop_Params
{
};

// Function GearboxFramework.ActionSequence.Start
// [0x00020C00]  (iNative[14797])
struct UActionSequence_eventStart_Params
{
};

// Function GearboxFramework.ActionSequence.Sleep
// [0x00020409]  (iNative[29170])
struct UActionSequence_execSleep_Params
{
	float                                              Seconds;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequence.InterruptLatentAction
// [0x00020401]  (iNative[34622])
struct UActionSequence_execInterruptLatentAction_Params
{
};

// Function GearboxFramework.ActionSequence.IsAtomic
// [0x00020401]  (iNative[34647])
struct UActionSequence_execIsAtomic_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequence.StopAtomic
// [0x00020401]  (iNative[36300])
struct UActionSequence_execStopAtomic_Params
{
};

// Function GearboxFramework.ActionSequence.StartAtomic
// [0x00020401]  (iNative[36249])
struct UActionSequence_execStartAtomic_Params
{
};

// Function GearboxFramework.ActionSequencePawn.IsValidTeleportLocation
// [0x00020401]  (iNative[34701])
struct UActionSequencePawn_execIsValidTeleportLocation_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bCheckStaticCollision : 1;                        		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.Teleport
// [0x00020401]  (iNative[1365])
struct UActionSequencePawn_execTeleport_Params
{
	struct FVector                                     TeleportLoc;                                      		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bCheckWorldCollision : 1;                         		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.SetPawnMovementSpeed
// [0x00020400]  (iNative[35917])
struct UActionSequencePawn_execSetPawnMovementSpeed_Params
{
	uint8_t                                            NewPawnMovementSpeed;                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.ActionSequencePawn.SetDefaultStanceName
// [0x00020401]  (iNative[35894])
struct UActionSequencePawn_execSetDefaultStanceName_Params
{
	struct FName                                       InDefaultStanceName;                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.ActionSequencePawn.GetMoveStyle
// [0x00020401]  (iNative[34134])
struct UActionSequencePawn_execGetMoveStyle_Params
{
	EMoveStyle                                         ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.SetCloakOverride
// [0x00024401]  (iNative[35890])
struct UActionSequencePawn_execSetCloakOverride_Params
{
	uint8_t                                            InOverride;                                       		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bImmediate : 1;                                   		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.ActionSequencePawn.CheckCloaked
// [0x00024408]  (iNative[32725])
struct UActionSequencePawn_execCheckCloaked_Params
{
	struct FName                                       CloakState;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bOnlyWaitForAnims : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.PlaySpecialMove
// [0x00024408]  (iNative[35481])
struct UActionSequencePawn_execPlaySpecialMove_Params
{
	class USpecialMoveDefinition*                      SpecialMove;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayRateScale;                                    		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       CallbackName;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     CallbackObject;                                   		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     Data;                                             		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.WaitForPawnToStop
// [0x00020409]  (iNative[36725])
struct UActionSequencePawn_execWaitForPawnToStop_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.StopMovement
// [0x00020400]  (iNative[36306])
struct UActionSequencePawn_execStopMovement_Params
{
};

// Function GearboxFramework.ActionSequencePawn.FinishedPathFollowing
// [0x00020C02]  (iNative[2483])
struct UActionSequencePawn_eventFinishedPathFollowing_Params
{
};

// Function GearboxFramework.ActionSequencePawn.FinishedPathFinding
// [0x00020C02]  (iNative[2484])
struct UActionSequencePawn_eventFinishedPathFinding_Params
{
};

// Function GearboxFramework.ActionSequencePawn.CreateCustomPath
// [0x00420C02]  (iNative[2485])
struct UActionSequencePawn_eventCreateCustomPath_Params
{
	struct FPathRequestData                            Request;                                          		// 0x0000 (0x0170) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	ECustomPathResult                                  ReturnValue;                                      		// 0x0170 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.PathRequestCustom
// [0x00020401]  (iNative[35378])
struct UActionSequencePawn_execPathRequestCustom_Params
{
};

// Function GearboxFramework.ActionSequencePawn.PathToCustom
// [0x00020408]  (iNative[35383])
struct UActionSequencePawn_execPathToCustom_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.BuildPathCostModifiers
// [0x00020400]  (iNative[32552])
struct UActionSequencePawn_execBuildPathCostModifiers_Params
{
};

// Function GearboxFramework.ActionSequencePawn.PathRequestConstrained
// [0x00424401]  (iNative[35377])
struct UActionSequencePawn_execPathRequestConstrained_Params
{
	uint32_t                                           bSearch : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class TArray<class UGBXPathConstraint*>            Constraints;                                      		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class AActor*                                      GoalActor;                                        		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     GoalLoc;                                          		// 0x0020 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.ActionSequencePawn.PathToConstrained
// [0x00424408]  (iNative[35382])
struct UActionSequencePawn_execPathToConstrained_Params
{
	uint32_t                                           bSearch : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class TArray<class UGBXPathConstraint*>            Constraints;                                      		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class AActor*                                      GoalActor;                                        		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     GoalLoc;                                          		// 0x0020 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.PathRequestLocation
// [0x00024401]  (iNative[35380])
struct UActionSequencePawn_execPathRequestLocation_Params
{
	struct FVector                                     GoalLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReachTolerance;                                   		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.ActionSequencePawn.PathToLocation
// [0x00024408]  (iNative[35384])
struct UActionSequencePawn_execPathToLocation_Params
{
	struct FVector                                     GoalLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReachTolerance;                                   		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.PathRequestActor
// [0x00024401]  (iNative[35375])
struct UActionSequencePawn_execPathRequestActor_Params
{
	class AActor*                                      GoalActor;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReachTolerance;                                   		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.ActionSequencePawn.PathToActor
// [0x00024408]  (iNative[35381])
struct UActionSequencePawn_execPathToActor_Params
{
	class AActor*                                      GoalActor;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReachTolerance;                                   		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.SetPathing
// [0x00020401]  (iNative[35915])
struct UActionSequencePawn_execSetPathing_Params
{
	uint32_t                                           bIsPathing : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.ActionSequencePawn.PathRequestClear
// [0x00020401]  (iNative[35376])
struct UActionSequencePawn_execPathRequestClear_Params
{
};

// Function GearboxFramework.ActionSequencePawn.IsPathing
// [0x00020401]  (iNative[34678])
struct UActionSequencePawn_execIsPathing_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.Path
// [0x00020408]  (iNative[27184])
struct UActionSequencePawn_execPath_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.LocationReachedPathRequest
// [0x00024400]  (iNative[34858])
struct UActionSequencePawn_execLocationReachedPathRequest_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.ReachedPathRequest
// [0x00020400]  (iNative[35606])
struct UActionSequencePawn_execReachedPathRequest_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.PathIsValid
// [0x00424400]  (iNative[35368])
struct UActionSequencePawn_execPathIsValid_Params
{
	struct FPathRequestData                            Request;                                          		// 0x0000 (0x0170) [0x0000000000400190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0170 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.SetPathRequestGoal
// [0x00424401]  (iNative[35916])
struct UActionSequencePawn_execSetPathRequestGoal_Params
{
	struct FPathRequestData                            Request;                                          		// 0x0000 (0x0170) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class AActor*                                      GoalActor;                                        		// 0x0170 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     GoalLocation;                                     		// 0x0178 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.ActionSequencePawn.GetPathDestination
// [0x00020400]  (iNative[34168])
struct UActionSequencePawn_execGetPathDestination_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.GetPathRequestGoal
// [0x00020400]  (iNative[34169])
struct UActionSequencePawn_execGetPathRequestGoal_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActionSequencePawn.Stop
// [0x00020C00]  (iNative[623])
struct UActionSequencePawn_eventStop_Params
{
};

// Function GearboxFramework.ActionSequencePawn.Start
// [0x00020C00]  (iNative[14797])
struct UActionSequencePawn_eventStart_Params
{
};

// Function GearboxFramework.ActionSequencePawn.Init
// [0x00020C00]  (iNative[762])
struct UActionSequencePawn_eventInit_Params
{
};

// Function GearboxFramework.Action_Companion.GoToTeleportState
// [0x00020402]  (iNative[2452])
struct UAction_Companion_execGoToTeleportState_Params
{
};

// Function GearboxFramework.Action_Companion.CheckState
// [0x00020402]  (iNative[2453])
struct UAction_Companion_execCheckState_Params
{
};

// Function GearboxFramework.Action_Dodge.IsDodging
// [0x00020401]  (iNative[34657])
struct UAction_Dodge_execIsDodging_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_Dodge.Start
// [0x00020C00]  (iNative[14797])
struct UAction_Dodge_eventStart_Params
{
};

// Function GearboxFramework.Action_Dodge.CanRun
// [0x00020C00]  (iNative[14806])
struct UAction_Dodge_eventCanRun_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_Dodge.Init
// [0x00020C00]  (iNative[762])
struct UAction_Dodge_eventInit_Params
{
};

// Function GearboxFramework.Action_FollowMoveNodes.InterruptMoveNode
// [0x12020000] 
struct UAction_FollowMoveNodes_execInterruptMoveNode_Params
{
};

// Function GearboxFramework.Action_FollowMoveNodes.InterruptPath
// [0x12020000] 
struct UAction_FollowMoveNodes_execInterruptPath_Params
{
};

// Function GearboxFramework.Action_FollowMoveNodes.ShouldFaceNodeDirection
// [0x12020000] 
struct UAction_FollowMoveNodes_execShouldFaceNodeDirection_Params
{
	class AGearboxAIMoveNode*                          TestNode;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_FollowMoveNodes.SetMoveNode
// [0x12020002] 
struct UAction_FollowMoveNodes_execSetMoveNode_Params
{
	class AGearboxAIMoveNode*                          NewMoveNode;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Action_FollowMoveNodes.GetFollowNodesCloakName
// [0x12020000] 
struct UAction_FollowMoveNodes_execGetFollowNodesCloakName_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_FollowMoveNodes.GetMoveNode
// [0x12020002] 
struct UAction_FollowMoveNodes_execGetMoveNode_Params
{
	class AGearboxAIMoveNode*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_FollowMoveNodes.CheckStateTransition
// [0x12020002] 
struct UAction_FollowMoveNodes_execCheckStateTransition_Params
{
};

// Function GearboxFramework.Action_FollowMoveNodes.SetMoveFacingPolicy
// [0x12020000] 
struct UAction_FollowMoveNodes_execSetMoveFacingPolicy_Params
{
};

// Function GearboxFramework.Action_FollowMoveNodes.SetMoveNodeSpeed
// [0x12020000] 
struct UAction_FollowMoveNodes_execSetMoveNodeSpeed_Params
{
};

// Function GearboxFramework.Action_Patrol.FindMyPerch
// [0x12020000] 
struct UAction_Patrol_execFindMyPerch_Params
{
};

// Function GearboxFramework.Action_Patrol.GetPatrolWaitTime
// [0x12020000] 
struct UAction_Patrol_execGetPatrolWaitTime_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_Patrol.GetFollowNodesCloakName
// [0x12020000] 
struct UAction_Patrol_execGetFollowNodesCloakName_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_Patrol.SetMoveNode
// [0x16020000] 
struct UAction_Patrol_execSetMoveNode_Params
{
	class AGearboxAIMoveNode*                          NewNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Action_Patrol.GetMoveNode
// [0x16020000] 
struct UAction_Patrol_execGetMoveNode_Params
{
	class AGearboxAIMoveNode*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_Patrol.SetMoveNodeSpeed
// [0x12020000] 
struct UAction_Patrol_execSetMoveNodeSpeed_Params
{
};

// Function GearboxFramework.Action_Patrol.SetMoveFacingPolicy
// [0x12020000] 
struct UAction_Patrol_execSetMoveFacingPolicy_Params
{
};

// Function GearboxFramework.Action_Perch.ShouldFaceNodeDirection
// [0x12020000] 
struct UAction_Perch_execShouldFaceNodeDirection_Params
{
	class AGearboxAIMoveNode*                          TestNode;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_Perch.SetMoveFacingPolicy
// [0x12020000] 
struct UAction_Perch_execSetMoveFacingPolicy_Params
{
};

// Function GearboxFramework.Action_Perch.Start
// [0x12020800] 
struct UAction_Perch_eventStart_Params
{
};

// Function GearboxFramework.Action_Perch.CanRun
// [0x12020800] 
struct UAction_Perch_eventCanRun_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_Scripted.SetMoveNode
// [0x12020000] 
struct UAction_Scripted_execSetMoveNode_Params
{
	class AGearboxAIMoveNode*                          NewNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Action_Scripted.GetMoveNode
// [0x12020000] 
struct UAction_Scripted_execGetMoveNode_Params
{
	class AGearboxAIMoveNode*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_Scripted.SetMoveNodeSpeed
// [0x12020000] 
struct UAction_Scripted_execSetMoveNodeSpeed_Params
{
};

// Function GearboxFramework.Action_Scripted.SetMoveFacingPolicy
// [0x12020000] 
struct UAction_Scripted_execSetMoveFacingPolicy_Params
{
};

// Function GearboxFramework.Action_Scripted.ScriptedAnimFinished
// [0x12020002] 
struct UAction_Scripted_execScriptedAnimFinished_Params
{
	uint32_t                                           bInterrupted : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.Action_Scripted.ScriptedActionEnded
// [0x16020002] 
struct UAction_Scripted_execScriptedActionEnded_Params
{
};

// Function GearboxFramework.Action_Scripted.ScriptedActionStarted
// [0x16020002] 
struct UAction_Scripted_execScriptedActionStarted_Params
{
};

// Function GearboxFramework.Action_Scripted.CheckStateTransition
// [0x12020002] 
struct UAction_Scripted_execCheckStateTransition_Params
{
};

// Function GearboxFramework.Action_Scripted.GetDesiredStateName
// [0x12020000] 
struct UAction_Scripted_execGetDesiredStateName_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_Scripted.Start
// [0x12020800] 
struct UAction_Scripted_eventStart_Params
{
};

// Function GearboxFramework.Action_Scripted.CanRun
// [0x12020800] 
struct UAction_Scripted_eventCanRun_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_MoveTo.GetMoveLocation
// [0x12020000] 
struct UAction_MoveTo_execGetMoveLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_MoveTo.Start
// [0x12020800] 
struct UAction_MoveTo_eventStart_Params
{
};

// Function GearboxFramework.Action_Search.SetSearchLocation
// [0x12020000] 
struct UAction_Search_execSetSearchLocation_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Action_Search.FinishedLooking
// [0x12020002] 
struct UAction_Search_execFinishedLooking_Params
{
};

// Function GearboxFramework.Action_Search.FinishedSearching
// [0x12020000] 
struct UAction_Search_execFinishedSearching_Params
{
};

// Function GearboxFramework.Action_Search.CheckStateTransition
// [0x12020002] 
struct UAction_Search_execCheckStateTransition_Params
{
};

// Function GearboxFramework.Action_Search.UpdateSearchInfo
// [0x12020002] 
struct UAction_Search_execUpdateSearchInfo_Params
{
};

// Function GearboxFramework.Action_Search.Stop
// [0x12020800] 
struct UAction_Search_eventStop_Params
{
};

// Function GearboxFramework.Action_Search.Start
// [0x12020800] 
struct UAction_Search_eventStart_Params
{
};

// Function GearboxFramework.Action_Search.ActivateEvent
// [0x12020800] 
struct UAction_Search_eventActivateEvent_Params
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Action_Search.CanRun
// [0x12020800] 
struct UAction_Search_eventCanRun_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ActorAttributeContextResolver.GetAttributeContext
// [0x12020000] 
struct UActorAttributeContextResolver_execGetAttributeContext_Params
{
	class UAttributeDefinitionBase*                    Attribute;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     AttributeContextSource;                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetAIRangeTime
// [0x00022400]  (iNative[34039])
struct UAIComponent_execGetAIRangeTime_Params
{
	struct FAIRange                                    InRange;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.DecrementConstraintDebugIndex
// [0x00022400]  (iNative[33096])
struct UAIComponent_execDecrementConstraintDebugIndex_Params
{
};

// Function GearboxFramework.AIComponent.IncrementConstraintDebugIndex
// [0x00022400]  (iNative[34517])
struct UAIComponent_execIncrementConstraintDebugIndex_Params
{
};

// Function GearboxFramework.AIComponent.GetPointScore
// [0x00424401]  (iNative[34182])
struct UAIComponent_execGetPointScore_Params
{
	struct FPathRequestData                            Request;                                          		// 0x0000 (0x0170) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     TestLoc;                                          		// 0x0170 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           bRanged : 1;                                      		// 0x017C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0180 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      Target;                                           		// 0x0190 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInitialize : 1;                                  		// 0x0198 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x019C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetLocationScore
// [0x00424401]  (iNative[34129])
struct UAIComponent_execGetLocationScore_Params
{
	struct FPathRequestData                            Request;                                          		// 0x0000 (0x0170) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     TestLoc;                                          		// 0x0170 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           bRanged : 1;                                      		// 0x017C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class AActor*                                      Target;                                           		// 0x0180 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInitialize : 1;                                  		// 0x0188 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x018C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.WithinValidSpace
// [0x00420400]  (iNative[36751])
struct UAIComponent_execWithinValidSpace_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bRanged : 1;                                      		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.SetMaxInfluencePointTime
// [0x00020401]  (iNative[35904])
struct UAIComponent_execSetMaxInfluencePointTime_Params
{
	float                                              MaxTime;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.GetInfluenceMap
// [0x00020401]  (iNative[34112])
struct UAIComponent_execGetInfluenceMap_Params
{
	class AGBXInfluenceMap*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.UpdateInfluencePoint
// [0x00020401]  (iNative[36616])
struct UAIComponent_execUpdateInfluencePoint_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.InvalidateInfluencePoint
// [0x00024401]  (iNative[34635])
struct UAIComponent_execInvalidateInfluencePoint_Params
{
	float                                              InvalidTime;                                      		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.AIComponent.MarkCurrentInfluencePoint
// [0x00020401]  (iNative[34882])
struct UAIComponent_execMarkCurrentInfluencePoint_Params
{
};

// Function GearboxFramework.AIComponent.CalcBestTrajectoryParams
// [0x00422400]  (iNative[32645])
struct UAIComponent_execCalcBestTrajectoryParams_Params
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector                                     EndLoc;                                           		// 0x000C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              LeapGravity;                                      		// 0x0018 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              OutSpeed;                                         		// 0x001C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              OutAngle;                                         		// 0x0020 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIComponent.CalcTrajectoryByTime
// [0x00422400]  (iNative[32649])
struct UAIComponent_execCalcTrajectoryByTime_Params
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector                                     EndLoc;                                           		// 0x000C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              LeapTime;                                         		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              LeapGravity;                                      		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     OutVelocity;                                      		// 0x0020 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIComponent.CalcTrajectoryAtActor
// [0x00422400]  (iNative[32648])
struct UAIComponent_execCalcTrajectoryAtActor_Params
{
	class AActor*                                      Source;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      Target;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FTrajectoryData                             Data;                                             		// 0x0010 (0x0024) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              OutTime;                                          		// 0x0034 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              OutGravity;                                       		// 0x0038 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     OutVelocity;                                      		// 0x003C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIComponent.CalcTrajectory
// [0x00422400]  (iNative[32647])
struct UAIComponent_execCalcTrajectory_Params
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector                                     EndLoc;                                           		// 0x000C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              LeapSpeed;                                        		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              LeapAngle;                                        		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              OutTime;                                          		// 0x0020 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              OutGravity;                                       		// 0x0024 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     OutVelocity;                                      		// 0x0028 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIComponent.GetTrajectoryOffset
// [0x00022400]  (iNative[34249])
struct UAIComponent_execGetTrajectoryOffset_Params
{
	float                                              OffsetTime;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              TotalTime;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Gravity;                                          		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     StartVelocity;                                    		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.LogDemigodHolds
// [0x12020000] 
struct UAIComponent_execLogDemigodHolds_Params
{
};

// Function GearboxFramework.AIComponent.ReleaseDialog
// [0x00020400]  (iNative[35648])
struct UAIComponent_execReleaseDialog_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.HoldDialog
// [0x00020400]  (iNative[34458])
struct UAIComponent_execHoldDialog_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.DialogOnHold
// [0x00020400]  (iNative[33219])
struct UAIComponent_execDialogOnHold_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.ReleaseGod
// [0x00020400]  (iNative[35649])
struct UAIComponent_execReleaseGod_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.HoldGod
// [0x00020400]  (iNative[34460])
struct UAIComponent_execHoldGod_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.GodOnHold
// [0x00020400]  (iNative[34274])
struct UAIComponent_execGodOnHold_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.ReleaseDemigod
// [0x00020400]  (iNative[35647])
struct UAIComponent_execReleaseDemigod_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.HoldDemigod
// [0x00020400]  (iNative[34457])
struct UAIComponent_execHoldDemigod_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.DemigodOnHold
// [0x00020400]  (iNative[33175])
struct UAIComponent_execDemigodOnHold_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.ReleaseMovement
// [0x00020400]  (iNative[35650])
struct UAIComponent_execReleaseMovement_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.HoldMovement
// [0x00020400]  (iNative[34461])
struct UAIComponent_execHoldMovement_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.MovementOnHold
// [0x00020400]  (iNative[35000])
struct UAIComponent_execMovementOnHold_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.ReleaseTarget
// [0x00020400]  (iNative[35651])
struct UAIComponent_execReleaseTarget_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.HoldTarget
// [0x00020400]  (iNative[34466])
struct UAIComponent_execHoldTarget_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.TargetOnHold
// [0x00020400]  (iNative[36396])
struct UAIComponent_execTargetOnHold_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.ReleaseType
// [0x00020400]  (iNative[35652])
struct UAIComponent_execReleaseType_Params
{
	uint8_t                                            HoldType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       HoldName;                                         		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.HoldType
// [0x00020400]  (iNative[34468])
struct UAIComponent_execHoldType_Params
{
	uint8_t                                            HoldType;                                         		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       HoldName;                                         		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.Release
// [0x00020400]  (iNative[35646])
struct UAIComponent_execRelease_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.Hold
// [0x00020400]  (iNative[34456])
struct UAIComponent_execHold_Params
{
	struct FName                                       HoldName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Tag;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.OnHold
// [0x00020400]  (iNative[35277])
struct UAIComponent_execOnHold_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetSoundSenseModifier
// [0x00020401]  (iNative[34213])
struct UAIComponent_execGetSoundSenseModifier_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetSightSenseModifier
// [0x00020401]  (iNative[34207])
struct UAIComponent_execGetSightSenseModifier_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetAwarenessMeter
// [0x00020401]  (iNative[34048])
struct UAIComponent_execGetAwarenessMeter_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetAwareness
// [0x00020401]  (iNative[34047])
struct UAIComponent_execGetAwareness_Params
{
	EAwareness                                         ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.UpdateAwareness
// [0x00020401]  (iNative[36609])
struct UAIComponent_execUpdateAwareness_Params
{
};

// Function GearboxFramework.AIComponent.GetNumValidHumanTargets
// [0x00020401]  (iNative[34156])
struct UAIComponent_execGetNumValidHumanTargets_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetTargetRecordFor
// [0x00024400]  (iNative[34239])
struct UAIComponent_execGetTargetRecordFor_Params
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bTryParent : 1;                                   		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class UMindTargetInfo*                             ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetTargetRecord
// [0x00024400]  (iNative[34238])
struct UAIComponent_execGetTargetRecord_Params
{
	uint32_t                                           bTryParent : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class UMindTargetInfo*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.IsTarget
// [0x00020400]  (iNative[34697])
struct UAIComponent_execIsTarget_Params
{
	class AActor*                                      TestTarget;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetNumValidTargets
// [0x00020400]  (iNative[34157])
struct UAIComponent_execGetNumValidTargets_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetTarget
// [0x00020400]  (iNative[34236])
struct UAIComponent_execGetTarget_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.HasTarget
// [0x00020402]  (iNative[2486])
struct UAIComponent_execHasTarget_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.NotifyAttackedBy
// [0x00020400]  (iNative[35182])
struct UAIComponent_execNotifyAttackedBy_Params
{
	class AActor*                                      Attacker;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.SetScriptedNode
// [0x00020401]  (iNative[35930])
struct UAIComponent_execSetScriptedNode_Params
{
	class AGearboxAIMoveNode*                          InScriptedNode;                                   		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.GetScriptedNode
// [0x00020401]  (iNative[34202])
struct UAIComponent_execGetScriptedNode_Params
{
	class AGearboxAIMoveNode*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.HasScriptedNode
// [0x00020401]  (iNative[34324])
struct UAIComponent_execHasScriptedNode_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.SetScriptedAction
// [0x00020401]  (iNative[35929])
struct UAIComponent_execSetScriptedAction_Params
{
	class USeqAct_AIScripted*                          InScriptedAction;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIComponent.ClearScriptedAction
// [0x00024401]  (iNative[32758])
struct UAIComponent_execClearScriptedAction_Params
{
	uint32_t                                           bInterrupted : 1;                                 		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.AIComponent.GetScriptedAction
// [0x00020401]  (iNative[34201])
struct UAIComponent_execGetScriptedAction_Params
{
	class USeqAct_AIScripted*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.HasScriptedAction
// [0x00020401]  (iNative[34323])
struct UAIComponent_execHasScriptedAction_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponent.GetParentComponent
// [0x00020401]  (iNative[34166])
struct UAIComponent_execGetParentComponent_Params
{
	class UAIComponent*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.AIComponent.GetAllegiance
// [0x00020400]  (iNative[34040])
struct UAIComponent_execGetAllegiance_Params
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIComponentAttributeContextResolver.GetAttributeContext
// [0x12020000] 
struct UAIComponentAttributeContextResolver_execGetAttributeContext_Params
{
	class UAttributeDefinitionBase*                    Attribute;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     AttributeContextSource;                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AICostExpressionEvaluator.Evaluate
// [0x00020400]  (iNative[22809])
struct UAICostExpressionEvaluator_execEvaluate_Params
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugCamera.GetDebugMind
// [0x00022400]  (iNative[34076])
struct UAIDebugCamera_execGetDebugMind_Params
{
	class AGearboxMind*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugCamera.ToggleAITree
// [0x12020000] 
struct UAIDebugCamera_execToggleAITree_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleAwareness
// [0x12020000] 
struct UAIDebugCamera_execToggleAwareness_Params
{
};

// Function GearboxFramework.AIDebugCamera.TogglePaths
// [0x12020000] 
struct UAIDebugCamera_execTogglePaths_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleTargetViewCones
// [0x12020000] 
struct UAIDebugCamera_execToggleTargetViewCones_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleCombat
// [0x12020000] 
struct UAIDebugCamera_execToggleCombat_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleShowTimers
// [0x12020000] 
struct UAIDebugCamera_execToggleShowTimers_Params
{
};

// Function GearboxFramework.AIDebugCamera.ToggleFlags
// [0x12020000] 
struct UAIDebugCamera_execToggleFlags_Params
{
};

// Function GearboxFramework.AIDebugCamera.GetTracker
// [0x00020400]  (iNative[34248])
struct UAIDebugCamera_execGetTracker_Params
{
	class UAITracker*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugCamera.SetMind
// [0x00020400]  (iNative[35906])
struct UAIDebugCamera_execSetMind_Params
{
	class AGearboxMind*                                NewMind;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDebugCamera.InitDummies
// [0x00020400]  (iNative[34532])
struct UAIDebugCamera_execInitDummies_Params
{
	int32_t                                            NewNumDummies;                                    		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDebugCamera.WantsToDoCameraInspection
// [0x00020400]  (iNative[36731])
struct UAIDebugCamera_execWantsToDoCameraInspection_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugCamera.SetCurrentInspectedTarget
// [0x00020400]  (iNative[35891])
struct UAIDebugCamera_execSetCurrentInspectedTarget_Params
{
	class AActor*                                      TargetActor;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDebugCamera.SetPrevSnapshot
// [0x00020400]  (iNative[35922])
struct UAIDebugCamera_execSetPrevSnapshot_Params
{
};

// Function GearboxFramework.AIDebugCamera.SetNextSnapshot
// [0x00020400]  (iNative[35910])
struct UAIDebugCamera_execSetNextSnapshot_Params
{
};

// Function GearboxFramework.AIDebugCamera.NotifyGameUnPaused
// [0x00020400]  (iNative[26537])
struct UAIDebugCamera_execNotifyGameUnPaused_Params
{
};

// Function GearboxFramework.AIDebugCamera.NotifyGamePaused
// [0x00020400]  (iNative[26536])
struct UAIDebugCamera_execNotifyGamePaused_Params
{
};

// Function GearboxFramework.AIDebugCamera.Display
// [0x00020400]  (iNative[7436])
struct UAIDebugCamera_execDisplay_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIResourceExpressionEvaluator.Evaluate
// [0x00020400]  (iNative[22809])
struct UAIResourceExpressionEvaluator_execEvaluate_Params
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AISoundDefinition.Play
// [0x00024401]  (iNative[765])
struct UAISoundDefinition_execPlay_Params
{
	class UITargetable*                                SourceTargetable;                                 		// 0x0000 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           bCommunicate : 1;                                 		// 0x0010 (0x0004) [0x0000000000000092] [0x00000001] (CPF_Const | CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.AISoundDefinition.GetLoudness
// [0x00020401]  (iNative[34130])
struct UAISoundDefinition_execGetLoudness_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AISoundDefinition.GetRadius
// [0x00020401]  (iNative[14451])
struct UAISoundDefinition_execGetRadius_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AllegianceExpressionEvaluator.Evaluate
// [0x00020400]  (iNative[22809])
struct UAllegianceExpressionEvaluator_execEvaluate_Params
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AnimNode_StanceTransition.IsTransitionPending
// [0x00020400]  (iNative[34699])
struct UAnimNode_StanceTransition_execIsTransitionPending_Params
{
	int32_t                                            Transition;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AnimNode_StanceTransition.CheckQueuedTransitions
// [0x00020400]  (iNative[32730])
struct UAnimNode_StanceTransition_execCheckQueuedTransitions_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.StopDynamicPlayRate
// [0x00020400]  (iNative[36302])
struct UAnimNodeSpecialMoveBlend_execStopDynamicPlayRate_Params
{
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.StartDynamicPlayRate
// [0x00020400]  (iNative[36252])
struct UAnimNodeSpecialMoveBlend_execStartDynamicPlayRate_Params
{
	class UDynamicPlayRateControlDefinition*           InDynamicPlayRateDef;                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentSMData
// [0x00420400]  (iNative[34071])
struct UAnimNodeSpecialMoveBlend_execGetCurrentSMData_Params
{
	struct FSpecialMoveData                            SMData;                                           		// 0x0000 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0038 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.IsPlaying
// [0x00020400]  (iNative[34682])
struct UAnimNodeSpecialMoveBlend_execIsPlaying_Params
{
	class UGearboxAnimDefinition*                      AnimSMD;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.SetRootMotion
// [0x00020400]  (iNative[35928])
struct UAnimNodeSpecialMoveBlend_execSetRootMotion_Params
{
	class URootMotionDefinition*                       RMDef;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentAnimDef
// [0x00020400]  (iNative[34065])
struct UAnimNodeSpecialMoveBlend_execGetCurrentAnimDef_Params
{
	class UGearboxAnimDefinition*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentAnimName
// [0x00020400]  (iNative[34066])
struct UAnimNodeSpecialMoveBlend_execGetCurrentAnimName_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.Finish
// [0x00020400]  (iNative[33819])
struct UAnimNodeSpecialMoveBlend_execFinish_Params
{
	uint32_t                                           bInterrupted : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.Stop
// [0x00020400]  (iNative[623])
struct UAnimNodeSpecialMoveBlend_execStop_Params
{
	class UGearboxAnimDefinition*                      AnimSMD;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.PlayData
// [0x00424400]  (iNative[35451])
struct UAnimNodeSpecialMoveBlend_execPlayData_Params
{
	struct FSpecialMoveData                            SMData;                                           		// 0x0000 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FName                                       AnimNameOverride;                                 		// 0x0038 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              PlayRateScale;                                    		// 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              BlendInOverride;                                  		// 0x0044 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              BlendOutOverride;                                 		// 0x0048 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bDisableNotifies : 1;                             		// 0x004C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              StartTimeOverride;                                		// 0x0050 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0054 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AnimNodeSpecialMoveBlend.Play
// [0x00024400]  (iNative[765])
struct UAnimNodeSpecialMoveBlend_execPlay_Params
{
	class UGearboxAnimDefinition*                      CustomAnimSMD;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       AnimNameOverride;                                 		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              PlayRateScale;                                    		// 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              BlendInOverride;                                  		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              BlendOutOverride;                                 		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bDisableNotifies : 1;                             		// 0x001C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              StartTimeOverride;                                		// 0x0020 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AnimPreviewComponent.ListObjValidateSpecialMove
// [0x00020400]  (iNative[34841])
struct UAnimPreviewComponent_execListObjValidateSpecialMove_Params
{
	class UObject*                                     Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AttributeExpressionEvaluator.Evaluate
// [0x00020400]  (iNative[22809])
struct UAttributeExpressionEvaluator_execEvaluate_Params
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AwarenessDefinition.CanCommunicate
// [0x00020401]  (iNative[20407])
struct UAwarenessDefinition_execCanCommunicate_Params
{
	float                                              LastSenseTime;                                    		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AwarenessDefinition.GetDecayRate
// [0x00020401]  (iNative[34078])
struct UAwarenessDefinition_execGetDecayRate_Params
{
	float                                              LastSenseTime;                                    		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AwarenessDefinition.GetAwareness
// [0x00020401]  (iNative[34047])
struct UAwarenessDefinition_execGetAwareness_Params
{
	float                                              Meter;                                            		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              LastUpdateTime;                                   		// 0x0004 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	EAwareness                                         ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AwarenessDefinition.GetSoundSenseModifier
// [0x00020401]  (iNative[34213])
struct UAwarenessDefinition_execGetSoundSenseModifier_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AwarenessDefinition.GetSightSenseModifier
// [0x00020401]  (iNative[34207])
struct UAwarenessDefinition_execGetSightSenseModifier_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Behavior_AICloak.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_AICloak_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_AIGetTarget.PublishBehaviorOutput
// [0x12480000] 
struct UBehavior_AIGetTarget_execPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AActor*                                      Target;                                           		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_AIGetTarget.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_AIGetTarget_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_AIHold.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_AIHold_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_AIPriority.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_AIPriority_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_AIScriptTarget.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_AIScriptTarget_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_CallFunction.CallFunction
// [0x00020500]  (iNative[32654])
struct UBehavior_CallFunction_execCallFunction_Params
{
	class AActor*                                      inActor;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       InFunctionName;                                   		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_CallFunction.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_CallFunction_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_ChangeAnyBehaviorSequenceState.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_ChangeAnyBehaviorSequenceState_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_ChangeFeatureSwitch.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_ChangeFeatureSwitch_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_ChangeLocalBehaviorSequenceState.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_ChangeLocalBehaviorSequenceState_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_ChangeRemoteBehaviorSequenceState.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_ChangeRemoteBehaviorSequenceState_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_ChangeTimer.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_ChangeTimer_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_ClearObjectList.PublishBehaviorOutput
// [0x00480401]  (iNative[14855])
struct UBehavior_ClearObjectList_execPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class TArray<class UObject*>                       List;                                             		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_ClearObjectList.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_ClearObjectList_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_CompareBool.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_CompareBool_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_CompareValues.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_CompareValues_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_CustomEvent.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_CustomEvent_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_Delay.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_Delay_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_Gate.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_Gate_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_GetFloatParam.PublishBehaviorOutput
// [0x12480000] 
struct UBehavior_GetFloatParam_execPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              Value;                                            		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_GetFloatParam.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_GetFloatParam_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_GetObjectParam.PublishBehaviorOutput
// [0x12480000] 
struct UBehavior_GetObjectParam_execPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     Value;                                            		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_GetObjectParam.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_GetObjectParam_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_GetVectorParam.PublishBehaviorOutput
// [0x12480000] 
struct UBehavior_GetVectorParam_execPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              R;                                                		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              G;                                                		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              A;                                                		// 0x002C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_GetVectorParam.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_GetVectorParam_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_GFxUIAction.AssembleOptionalParameters
// [0x12480000] 
struct UBehavior_GFxUIAction_execAssembleOptionalParameters_Params
{
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_GFxUIAction.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_GFxUIAction_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_AttachGFxMovieClip.PublishBehaviorOutput
// [0x12480800] 
struct UBehavior_AttachGFxMovieClip_eventPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     Result;                                           		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_AttachGFxMovieClip.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_AttachGFxMovieClip_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_InterpActor.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_InterpActor_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_InterpolateFloatOverTime.PublishBehaviorOutput
// [0x12420000] 
struct UBehavior_InterpolateFloatOverTime_execPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              Result;                                           		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_InterpolateFloatOverTime.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_InterpolateFloatOverTime_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_IsSequenceEnabled.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_IsSequenceEnabled_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_LeaderCommand.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_LeaderCommand_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_Metronome.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_Metronome_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_ModifyTimer.PublishBehaviorOutput
// [0x12420000] 
struct UBehavior_ModifyTimer_execPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              TimeRemaining;                                    		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_ModifyTimer.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_ModifyTimer_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_MultiTargetSearch.PublishBehaviorOutput
// [0x12480800] 
struct UBehavior_MultiTargetSearch_eventPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            TargetCount;                                      		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      Target;                                           		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TargetLocation;                                   		// 0x0030 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_MultiTargetSearch.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_MultiTargetSearch_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_PlayFoleySound.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_PlayFoleySound_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_PostAkEvent.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_PostAkEvent_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_RandomGate.ApplyBehaviorToContext
// [0x00480C00]  (iNative[14282])
struct UBehavior_RandomGate_eventApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetFlag.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_SetFlag_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetFloatParam.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_SetFloatParam_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetFoleyParams.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_SetFoleyParams_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetObjectList.PublishBehaviorOutput
// [0x00480401]  (iNative[14855])
struct UBehavior_SetObjectList_execPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class TArray<class UObject*>                       List;                                             		// 0x0020 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetObjectList.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_SetObjectList_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetObjectParam.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_SetObjectParam_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetStance.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_SetStance_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SetVectorParam.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_SetVectorParam_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SpawnDecalActor.PublishBehaviorOutput
// [0x00480400]  (iNative[14855])
struct UBehavior_SpawnDecalActor_execPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class ADecalActorBase*                             Decal;                                            		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_SpawnDecalActor.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_SpawnDecalActor_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_Speak.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_Speak_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SpecialMove.PlaySpecialMove
// [0x12020000] 
struct UBehavior_SpecialMove_execPlaySpecialMove_Params
{
	class USpecialMoveComponent*                       SMC;                                              		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_SpecialMove.TriggerOutput
// [0x12420000] 
struct UBehavior_SpecialMove_execTriggerOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.Behavior_SpecialMove.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_SpecialMove_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_SpecialMoveStop.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_SpecialMoveStop_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_StanceTransition.GetTransitionNode
// [0x12020000] 
struct UBehavior_StanceTransition_execGetTransitionNode_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UAnimNode_StanceTransition*                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Behavior_StanceTransition.StartTransition
// [0x12020000] 
struct UBehavior_StanceTransition_execStartTransition_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UAnimNode_StanceTransition*                  TransitionNode;                                   		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_StanceTransition.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_StanceTransition_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_StartAkAmbientSound.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_StartAkAmbientSound_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_StopAkAmbientSound.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_StopAkAmbientSound_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_StopSpeaking.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_StopSpeaking_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_TargetSearch.PublishBehaviorOutput
// [0x12480800] 
struct UBehavior_TargetSearch_eventPublishBehaviorOutput_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AActor*                                      TargetActor;                                      		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TargetLocation;                                   		// 0x0028 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Behavior_TargetSearch.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_TargetSearch_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_TimedGate.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_TimedGate_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_ToggleDanger.ApplyToDanger
// [0x12080000] 
struct UBehavior_ToggleDanger_execApplyToDanger_Params
{
	class UGBXDangerComponent*                         Danger;                                           		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.Behavior_ToggleDanger.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_ToggleDanger_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_UIBase.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_UIBase_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_UIBase.GetTargetObject
// [0x00020500]  (iNative[34237])
struct UBehavior_UIBase_execGetTargetObject_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Behavior_UIBase.ResolveTargetObject
// [0x00020500]  (iNative[35737])
struct UBehavior_UIBase_execResolveTargetObject_Params
{
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FName>                         TargetChain;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Behavior_UIBase.ResolveTargetMovie
// [0x00020500]  (iNative[35735])
struct UBehavior_UIBase_execResolveTargetMovie_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USwfMovie*                                   Movie;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxMoviePlayer*                             ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Behavior_ShowHUDWidget.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_ShowHUDWidget_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_UnitTest.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_UnitTest_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_UnitTestEndFail.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_UnitTestEndFail_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_UnitTestEndPass.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_UnitTestEndPass_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_UnitTestHelper_ChangeMapTransitionURL.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_UnitTestHelper_ChangeMapTransitionURL_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_UnitTestHelper_LookAtTarget.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_UnitTestHelper_LookAtTarget_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_UnitTestHelper_RunGameModeGTD.ApplyBehaviorToContext
// [0x12480000] 
struct UBehavior_UnitTestHelper_RunGameModeGTD_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_UnitTestHelper_RunGameTest.GetBehaviorConsumerHandle
// [0x00020400]  (iNative[34051])
struct UBehavior_UnitTestHelper_RunGameTest_execGetBehaviorConsumerHandle_Params
{
	struct FBehaviorConsumerHandle                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Behavior_UnitTestHelper_RunGameTest.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_UnitTestHelper_RunGameTest_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.Behavior_UnitTestHelper_WaitForGameTestEvent.ApplyBehaviorToContext
// [0x00480400]  (iNative[14282])
struct UBehavior_UnitTestHelper_WaitForGameTestEvent_execApplyBehaviorToContext_Params
{
	class UObject*                                     ContextObject;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0008 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.BehaviorHelpers.RunAllBehaviorsForEvent
// [0x00026501]  (iNative[35794])
struct UBehaviorHelpers_execRunAllBehaviorsForEvent_Params
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             SetStrategy;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             Strategy;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UObject*                                     SelfObject;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     MyInstigatorObject;                               		// 0x0030 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0038 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FBehaviorParameters                         EventData;                                        		// 0x0040 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            EnumValue;                                        		// 0x0050 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.BehaviorHelpers.BehaviorStrategy
// [0x00524000] 
struct UBehaviorHelpers_execBehaviorStrategy_Params
{
	struct FPointer                                    BehaviorSet;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       EventName;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UBehaviorBase*>                 BehaviorList;                                     		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            EnumValue;                                        		// 0x0020 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.BehaviorHelpers.BehaviorSetStrategy
// [0x00520000] 
struct UBehaviorHelpers_execBehaviorSetStrategy_Params
{
	class TArray<struct FPointer>                      BehaviorSetList;                                  		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.BehaviorHelpers.ResolveBehaviorProviderDefinitionReference
// [0x00422400]  (iNative[35734])
struct UBehaviorHelpers_execResolveBehaviorProviderDefinitionReference_Params
{
	class UBehaviorBase*                               SourceBehavior;                                   		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UObject*                                     ProviderReference;                                		// 0x0008 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FNameBasedObjectPath                        PathName;                                         		// 0x0010 (0x0034) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UBehaviorProviderDefinition*                 ReturnValue;                                      		// 0x0048 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BehaviorHelpers.IsBehaviorsV2
// [0x00422400]  (iNative[34649])
struct UBehaviorHelpers_execIsBehaviorsV2_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BehaviorHelpers.ShouldContinueExecution
// [0x12422000] 
struct UBehaviorHelpers_execShouldContinueExecution_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              TimeBetweenSteps;                                 		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumSteps;                                         		// 0x0024 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            MaxSteps;                                         		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BehaviorHelpers.GetNextFireLocationSocket
// [0x12422000] 
struct UBehaviorHelpers_execGetNextFireLocationSocket_Params
{
	uint8_t                                            FireSocketSelection;                              		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FName>                         FireLocationSocketNames;                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FName>                         FireLocationSocketsRemaining;                     		// 0x0018 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FName                                       ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BehaviorHelpers.GetRotationFromAttachmentLocationData
// [0x00422400]  (iNative[34196])
struct UBehaviorHelpers_execGetRotationFromAttachmentLocationData_Params
{
	struct FAttachmentLocationData                     AttachmentLocation;                               		// 0x0000 (0x0028) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FRotator                                    AttachmentLocationRotation;                       		// 0x0028 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BehaviorHelpers.GetRelativeDirection
// [0x00026400]  (iNative[34192])
struct UBehaviorHelpers_execGetRelativeDirection_Params
{
	struct FRelativeDirectionData                      DesiredDirection;                                 		// 0x0000 (0x0038) [0x0000000000000080] (CPF_Parm)    
	class UIWorldBody*                                 Source;                                           		// 0x0038 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     DefaultDirection;                                 		// 0x0048 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SpawnSocketName;                                  		// 0x0054 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     ReturnValue;                                      		// 0x005C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BehaviorKernel.PrevDebugPage
// [0x00020401]  (iNative[35523])
struct UBehaviorKernel_execPrevDebugPage_Params
{
};

// Function GearboxFramework.BehaviorKernel.NextDebugPage
// [0x00020401]  (iNative[35144])
struct UBehaviorKernel_execNextDebugPage_Params
{
};

// Function GearboxFramework.BehaviorKernel.DisplayDebug
// [0x00020401]  (iNative[21839])
struct UBehaviorKernel_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorKernel.IsBehaviorSequenceEnabled
// [0x00422401]  (iNative[34648])
struct UBehaviorKernel_execIsBehaviorSequenceEnabled_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       BehaviorSequenceName;                             		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BehaviorKernel.ActivateBehaviorOutputLink
// [0x00422401]  (iNative[31631])
struct UBehaviorKernel_execActivateBehaviorOutputLink_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	int32_t                                            OutputLinkId;                                     		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorKernel.PublishBoolOutputVariable
// [0x00422401]  (iNative[35575])
struct UBehaviorKernel_execPublishBoolOutputVariable_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           Output : 1;                                       		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.BehaviorKernel.PublishObjectOutputVariable
// [0x00422401]  (iNative[35578])
struct UBehaviorKernel_execPublishObjectOutputVariable_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     Output;                                           		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorKernel.PublishVectorOutputVariable
// [0x00422401]  (iNative[35579])
struct UBehaviorKernel_execPublishVectorOutputVariable_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector                                     Output;                                           		// 0x0020 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.BehaviorKernel.PublishFloatOutputVariable
// [0x00422401]  (iNative[35576])
struct UBehaviorKernel_execPublishFloatOutputVariable_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              Output;                                           		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorKernel.PublishIntOutputVariable
// [0x00422401]  (iNative[35577])
struct UBehaviorKernel_execPublishIntOutputVariable_Params
{
	struct FBehaviorKernelInfo                         KernelInfo;                                       		// 0x0000 (0x0020) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	int32_t                                            Output;                                           		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorKernel.BeginNondeterministicProviderRegistration
// [0x00422401]  (iNative[32138])
struct UBehaviorKernel_execBeginNondeterministicProviderRegistration_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.BehaviorKernel.ProcessReplicatedBehaviorEvent
// [0x00422401]  (iNative[35554])
struct UBehaviorKernel_execProcessReplicatedBehaviorEvent_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FReplicatedBehaviorEvent                    EventData;                                        		// 0x0008 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.BehaviorKernel.ProcessReplicatedBehaviorConsumerState
// [0x00422401]  (iNative[35553])
struct UBehaviorKernel_execProcessReplicatedBehaviorConsumerState_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FReplicatedBehaviorConsumerState            ReplicatedConsumerState;                          		// 0x0004 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BehaviorKernel.ChangeBehaviorSequenceActivationStatus
// [0x00422401]  (iNative[32714])
struct UBehaviorKernel_execChangeBehaviorSequenceActivationStatus_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       SequenceName;                                     		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ActivationStatusChanage;                          		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorKernel.ChangeBehaviorConsumerSuspensionStatus
// [0x00422401]  (iNative[32713])
struct UBehaviorKernel_execChangeBehaviorConsumerSuspensionStatus_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            SuspensionStatusChanage;                          		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorKernel.BroadcastBehaviorEventFromScript
// [0x00426401]  (iNative[32461])
struct UBehaviorKernel_execBroadcastBehaviorEventFromScript_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FName                                       EventName;                                        		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UBehaviorProviderDefinition*>   ProvidersToBroadcast;                             		// 0x0010 (0x0010) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            EventOutputToActivate;                            		// 0x0020 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class TArray<struct FBehaviorVariableValue>        Parameters;                                       		// 0x0028 (0x0010) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.BehaviorKernel.ActivateBehaviorEventFromScript
// [0x00426401]  (iNative[31630])
struct UBehaviorKernel_execActivateBehaviorEventFromScript_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       EventName;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            EventOutputToActivate;                            		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class TArray<struct FBehaviorVariableValue>        Parameters;                                       		// 0x0020 (0x0010) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.BehaviorKernel.RemoveBehaviorProviderFromConsumer
// [0x00422401]  (iNative[35666])
struct UBehaviorKernel_execRemoveBehaviorProviderFromConsumer_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorKernel.InitializeBehaviorProviderForConsumer
// [0x00422401]  (iNative[34545])
struct UBehaviorKernel_execInitializeBehaviorProviderForConsumer_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UBehaviorProviderDefinition*                 ProviderDefinition;                               		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorKernel.ForceUnregisterBehaviorConsumer
// [0x00422401]  (iNative[33900])
struct UBehaviorKernel_execForceUnregisterBehaviorConsumer_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.BehaviorKernel.RegisterBehaviorConsumer
// [0x00022401]  (iNative[35631])
struct UBehaviorKernel_execRegisterBehaviorConsumer_Params
{
	class UObject*                                     BehaviorConsumer;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorConsumerHandle                     ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BehaviorProviderDefinition.SetObjectBehaviorVariable
// [0x00422401]  (iNative[35912])
struct UBehaviorProviderDefinition_execSetObjectBehaviorVariable_Params
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                 		// 0x0000 (0x0030) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UObject*                                     Value;                                            		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorProviderDefinition.SetVectorBehaviorVariable
// [0x00422401]  (iNative[35942])
struct UBehaviorProviderDefinition_execSetVectorBehaviorVariable_Params
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                 		// 0x0000 (0x0030) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     Value;                                            		// 0x0030 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.BehaviorProviderDefinition.SetFloatBehaviorVariable
// [0x00422401]  (iNative[35902])
struct UBehaviorProviderDefinition_execSetFloatBehaviorVariable_Params
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                 		// 0x0000 (0x0030) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              Value;                                            		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorProviderDefinition.SetIntBehaviorVariable
// [0x00422401]  (iNative[35903])
struct UBehaviorProviderDefinition_execSetIntBehaviorVariable_Params
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                 		// 0x0000 (0x0030) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            Value;                                            		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorProviderDefinition.SetBoolBehaviorVariable
// [0x00422401]  (iNative[35886])
struct UBehaviorProviderDefinition_execSetBoolBehaviorVariable_Params
{
	struct FBehaviorVariableValue                      BehaviorVariable;                                 		// 0x0000 (0x0030) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           Value : 1;                                        		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.BehaviorTrigger.UnTouch
// [0x00020C00]  (iNative[307])
struct ABehaviorTrigger_eventUnTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BehaviorTrigger.Touch
// [0x00020C00]  (iNative[306])
struct ABehaviorTrigger_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PerchBodyDefinition.OnFinished
// [0x80420401]  (iNative[2501])
struct UPerchBodyDefinition_execOnFinished_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.PerchBodyDefinition.OnEndAnim
// [0x80420401]  (iNative[2502])
struct UPerchBodyDefinition_execOnEndAnim_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.PerchBodyDefinition.OnIdleAnim
// [0x80420401]  (iNative[2503])
struct UPerchBodyDefinition_execOnIdleAnim_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.PerchBodyDefinition.OnStartAnim
// [0x80420401]  (iNative[2504])
struct UPerchBodyDefinition_execOnStartAnim_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpawnPointBodyDefinition.OnSpawned
// [0x80420401]  (iNative[2506])
struct USpawnPointBodyDefinition_execOnSpawned_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     SpawnedActor;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BodyKernel.UpdateBodyComposition
// [0x00022401]  (iNative[36610])
struct UBodyKernel_execUpdateBodyComposition_Params
{
	class UIBodyCompositionInstance*                   Owner;                                            		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.CompoundExpressionEvaluator.Evaluate
// [0x00020400]  (iNative[22809])
struct UCompoundExpressionEvaluator_execEvaluate_Params
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.HasMantlePath
// [0x00020401]  (iNative[34318])
struct UCoverUseComponent_execHasMantlePath_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.StopMantle
// [0x00020403]  (iNative[2490])
struct UCoverUseComponent_execStopMantle_Params
{
};

// Function GearboxFramework.CoverUseComponent.StartMantle
// [0x00420401]  (iNative[36255])
struct UCoverUseComponent_execStartMantle_Params
{
	struct FVector                                     MoveStart;                                        		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector                                     MoveDest;                                         		// 0x000C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.CoverUseComponent.FireTimer
// [0x00020403]  (iNative[2491])
struct UCoverUseComponent_execFireTimer_Params
{
};

// Function GearboxFramework.CoverUseComponent.IdleTimer
// [0x00020403]  (iNative[2492])
struct UCoverUseComponent_execIdleTimer_Params
{
};

// Function GearboxFramework.CoverUseComponent.CanFire
// [0x00020400]  (iNative[32669])
struct UCoverUseComponent_execCanFire_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.TransitionFinished
// [0x00020403]  (iNative[2493])
struct UCoverUseComponent_execTransitionFinished_Params
{
};

// Function GearboxFramework.CoverUseComponent.PlayTransition
// [0x00020401]  (iNative[35483])
struct UCoverUseComponent_execPlayTransition_Params
{
	class USpecialMoveDefinition*                      Transition;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.CoverUseComponent.CheckCoverState
// [0x00020400]  (iNative[32727])
struct UCoverUseComponent_execCheckCoverState_Params
{
};

// Function GearboxFramework.CoverUseComponent.FinishCoverState
// [0x00020400]  (iNative[33820])
struct UCoverUseComponent_execFinishCoverState_Params
{
};

// Function GearboxFramework.CoverUseComponent.BeginCoverState
// [0x00020400]  (iNative[32136])
struct UCoverUseComponent_execBeginCoverState_Params
{
};

// Function GearboxFramework.CoverUseComponent.NetUpdate
// [0x00420401]  (iNative[35087])
struct UCoverUseComponent_execNetUpdate_Params
{
	struct FCoverUseState                              InState;                                          		// 0x0000 (0x0020) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.CoverUseComponent.GotoCoverState
// [0x00020401]  (iNative[34277])
struct UCoverUseComponent_execGotoCoverState_Params
{
	struct FName                                       NewState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.CoverUseComponent.SetDesiredCover
// [0x00020401]  (iNative[35895])
struct UCoverUseComponent_execSetDesiredCover_Params
{
	class UCoverSlotComponent*                         InDesiredCover;                                   		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.CoverUseComponent.SetCanUseCover
// [0x00020401]  (iNative[35888])
struct UCoverUseComponent_execSetCanUseCover_Params
{
	uint32_t                                           bInCanUse : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.CoverUseComponent.CanUseCover
// [0x00020401]  (iNative[32688])
struct UCoverUseComponent_execCanUseCover_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.GetCoverRotation
// [0x00020401]  (iNative[34063])
struct UCoverUseComponent_execGetCoverRotation_Params
{
	class UCoverSlotComponent*                         Slot;                                             		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FRotator                                    ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.GetCoverLocation
// [0x00020401]  (iNative[34062])
struct UCoverUseComponent_execGetCoverLocation_Params
{
	class UCoverSlotComponent*                         Slot;                                             		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.GetDesiredCoverRotation
// [0x00020401]  (iNative[34085])
struct UCoverUseComponent_execGetDesiredCoverRotation_Params
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.GetCurrentCoverRotation
// [0x00020401]  (iNative[34069])
struct UCoverUseComponent_execGetCurrentCoverRotation_Params
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.GetDesiredCoverLocation
// [0x00020401]  (iNative[34084])
struct UCoverUseComponent_execGetDesiredCoverLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.GetCurrentCoverLocation
// [0x00020401]  (iNative[34068])
struct UCoverUseComponent_execGetCurrentCoverLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.GetDesiredCover
// [0x00020401]  (iNative[34083])
struct UCoverUseComponent_execGetDesiredCover_Params
{
	class UCoverSlotComponent*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.CoverUseComponent.GetCurrentCover
// [0x00020401]  (iNative[34067])
struct UCoverUseComponent_execGetCurrentCover_Params
{
	class UCoverSlotComponent*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.CoverUseComponent.HasValidCover
// [0x00020401]  (iNative[34325])
struct UCoverUseComponent_execHasValidCover_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.CanMantle
// [0x00020401]  (iNative[32675])
struct UCoverUseComponent_execCanMantle_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.IsInCover
// [0x00020401]  (iNative[34666])
struct UCoverUseComponent_execIsInCover_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.CoverUseComponent.ClearCover
// [0x00024401]  (iNative[32750])
struct UCoverUseComponent_execClearCover_Params
{
	uint32_t                                           bClearAnim : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.DialogActor.ReplicatedEvent
// [0x12020900] 
struct ADialogActor_eventReplicatedEvent_Params
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DialogPureEchoActor.ReplicatedEvent
// [0x12020900] 
struct ADialogPureEchoActor_eventReplicatedEvent_Params
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DodgeComponent.TryCombatDodge
// [0x00420401]  (iNative[36577])
struct UDodgeComponent_execTryCombatDodge_Params
{
	struct FVector                                     SourceLoc;                                        		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class AActor*                                      Instigator;                                       		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DodgeComponent.DodgeFromLocationTimer
// [0x00020403]  (iNative[2494])
struct UDodgeComponent_execDodgeFromLocationTimer_Params
{
};

// Function GearboxFramework.DodgeComponent.DodgeAnimFinished
// [0x00020403]  (iNative[2495])
struct UDodgeComponent_execDodgeAnimFinished_Params
{
};

// Function GearboxFramework.DodgeComponent.DoMovementDodge
// [0x00020403]  (iNative[2496])
struct UDodgeComponent_execDoMovementDodge_Params
{
};

// Function GearboxFramework.DynamicDecalActor.SetDecalParameters
// [0x00020400]  (iNative[28787])
struct ADynamicDecalActor_execSetDecalParameters_Params
{
	class UMaterialInterface*                          Material;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              SizeX;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              SizeY;                                            		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              OffsetX;                                          		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              OffsetY;                                          		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PivotOffsetPctX;                                  		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PivotOffsetPctY;                                  		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              NearPlane;                                        		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              FarPlane;                                         		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              TwistRotation;                                    		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Lifetime;                                         		// 0x002C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAffectStaticGeometry : 1;                        		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAffectDynamicGeometry : 1;                       		// 0x0034 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAbsoluteOrientation : 1;                         		// 0x0038 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FRotator                                    AbsoluteOrientation;                              		// 0x003C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeTime;                                         		// 0x0048 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       FadeMaterialParamName;                            		// 0x004C (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DynamicDecalActor.PostBeginPlay
// [0x12020900] 
struct ADynamicDecalActor_eventPostBeginPlay_Params
{
};

// Function GearboxFramework.DynamicReplicatedDecalActor.SetDecalParameters
// [0x00020400]  (iNative[28787])
struct ADynamicReplicatedDecalActor_execSetDecalParameters_Params
{
	class UMaterialInterface*                          Material;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              SizeX;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              SizeY;                                            		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              OffsetX;                                          		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              OffsetY;                                          		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PivotOffsetPctX;                                  		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PivotOffsetPctY;                                  		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              NearPlane;                                        		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              FarPlane;                                         		// 0x0024 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              TwistRotation;                                    		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Lifetime;                                         		// 0x002C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAffectStaticGeometry : 1;                        		// 0x0030 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAffectDynamicGeometry : 1;                       		// 0x0034 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bAbsoluteOrientation : 1;                         		// 0x0038 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FRotator                                    AbsoluteOrientation;                              		// 0x003C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeTime;                                         		// 0x0048 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       FadeMaterialParamName;                            		// 0x004C (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DynamicReplicatedDecalActor.ReplicatedEvent
// [0x12020900] 
struct ADynamicReplicatedDecalActor_eventReplicatedEvent_Params
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DynamicPlayRateControlDefinition.GetPlayRateScale
// [0x00020401]  (iNative[34181])
struct UDynamicPlayRateControlDefinition_execGetPlayRateScale_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDefinition.TryOnGiveDamage
// [0x00022400]  (iNative[36578])
struct UAIDefinition_execTryOnGiveDamage_Params
{
	class UObject*                                     Instigator;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Receiver;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ShieldDamage;                                     		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessDamageDone;                                 		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasCrit : 1;                                     		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            DamageTags;                                       		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     DamageSource;                                     		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     DamageType;                                       		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnCommunicated
// [0x80420401]  (iNative[2514])
struct UAIDefinition_execOnCommunicated_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDefinition.OnBecomeAware
// [0x80420401]  (iNative[2515])
struct UAIDefinition_execOnBecomeAware_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDefinition.OnBecomeSuspicious
// [0x80420401]  (iNative[2516])
struct UAIDefinition_execOnBecomeSuspicious_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDefinition.OnBecomeCautious
// [0x80420401]  (iNative[2517])
struct UAIDefinition_execOnBecomeCautious_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDefinition.OnBecomeOblivious
// [0x80420401]  (iNative[2518])
struct UAIDefinition_execOnBecomeOblivious_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDefinition.OnReset
// [0x80420401]  (iNative[2519])
struct UAIDefinition_execOnReset_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDefinition.OnHitByVehicle
// [0x80420401]  (iNative[2520])
struct UAIDefinition_execOnHitByVehicle_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class AVehicle*                                    Vehicle;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnRanOver
// [0x80420401]  (iNative[2521])
struct UAIDefinition_execOnRanOver_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class AVehicle*                                    Vehicle;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnTimerEvent
// [0x80420401]  (iNative[2522])
struct UAIDefinition_execOnTimerEvent_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FName                                       SpecializedEventName;                             		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnKilledPawn
// [0x80420401]  (iNative[2523])
struct UAIDefinition_execOnKilledPawn_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     Killed;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnLanded
// [0x80420401]  (iNative[2524])
struct UAIDefinition_execOnLanded_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDefinition.OnStopFiringWeapon
// [0x80420401]  (iNative[2525])
struct UAIDefinition_execOnStopFiringWeapon_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDefinition.OnStartFiringWeapon
// [0x80420401]  (iNative[2526])
struct UAIDefinition_execOnStartFiringWeapon_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDefinition.OnTargetInvalid
// [0x80420401]  (iNative[2527])
struct UAIDefinition_execOnTargetInvalid_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     Target;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnTargetValid
// [0x80420401]  (iNative[2528])
struct UAIDefinition_execOnTargetValid_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     Target;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnTargetLost
// [0x80420401]  (iNative[2529])
struct UAIDefinition_execOnTargetLost_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     OldTarget;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bChangedTargets : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.AIDefinition.OnTargetChanged
// [0x80420401]  (iNative[2530])
struct UAIDefinition_execOnTargetChanged_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     OldTarget;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     NewTarget;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnTargetAcquired
// [0x80420401]  (iNative[2531])
struct UAIDefinition_execOnTargetAcquired_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     NewTarget;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bChangedTargets : 1;                              		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.AIDefinition.OnSpawned
// [0x80420401]  (iNative[2506])
struct UAIDefinition_execOnSpawned_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            EventOutput;                                      		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnTakeHeal
// [0x80420401]  (iNative[2532])
struct UAIDefinition_execOnTakeHeal_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ShieldDamage;                                     		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     DamageSource;                                     		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     DamageType;                                       		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnVehicleTakeDamage
// [0x80420401]  (iNative[2533])
struct UAIDefinition_execOnVehicleTakeDamage_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     HitVehicle;                                       		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Damage;                                           		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ShieldDamage;                                     		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     DamageSource;                                     		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     DamageType;                                       		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnGiveDamage
// [0x80420401]  (iNative[2534])
struct UAIDefinition_execOnGiveDamage_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     Receiver;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ShieldDamage;                                     		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     DamageSource;                                     		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     DamageType;                                       		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasCrit : 1;                                     		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              ExcessDamageDone;                                 		// 0x002C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DamageTags;                                       		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnTakeDamage
// [0x80420401]  (iNative[2535])
struct UAIDefinition_execOnTakeDamage_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Damage;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ShieldDamage;                                     		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     DamageSource;                                     		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     DamageType;                                       		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasCrit : 1;                                     		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              ExcessDamageDone;                                 		// 0x002C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DamageTags;                                       		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnUserCouldNotAffordSecondary
// [0x80420401]  (iNative[2536])
struct UAIDefinition_execOnUserCouldNotAffordSecondary_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            EventOutput;                                      		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     UsedComponent;                                    		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnUserCouldNotAfford
// [0x80420401]  (iNative[2537])
struct UAIDefinition_execOnUserCouldNotAfford_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            EventOutput;                                      		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     UsedComponent;                                    		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnSecondaryUsed
// [0x80420401]  (iNative[2538])
struct UAIDefinition_execOnSecondaryUsed_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            EventOutput;                                      		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     UsedComponent;                                    		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDefinition.OnUsed
// [0x80420401]  (iNative[2539])
struct UAIDefinition_execOnUsed_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            EventOutput;                                      		// 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Instigator;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     UsedComponent;                                    		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.FlagExpressionEvaluator.Evaluate
// [0x00020400]  (iNative[22809])
struct UFlagExpressionEvaluator_execEvaluate_Params
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.FlagSingleExpressionEvaluator.Evaluate
// [0x00020400]  (iNative[22809])
struct UFlagSingleExpressionEvaluator_execEvaluate_Params
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.FormationComponent.GetFormationRotation
// [0x00020400]  (iNative[34102])
struct UFormationComponent_execGetFormationRotation_Params
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.FormationComponent.GetFormationLocation
// [0x00020400]  (iNative[34101])
struct UFormationComponent_execGetFormationLocation_Params
{
	uint32_t                                           bFlying : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.FormationComponent.SetAIOwner
// [0x00020401]  (iNative[35884])
struct UFormationComponent_execSetAIOwner_Params
{
	class UIAIInterface*                               NewOwner;                                         		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.FormationComponent.GetAIOwner
// [0x00020401]  (iNative[34037])
struct UFormationComponent_execGetAIOwner_Params
{
	class UIAIInterface*                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.FormationComponent.ShouldCrouch
// [0x00020401]  (iNative[29070])
struct UFormationComponent_execShouldCrouch_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GameTestDefinition.GameTestEvent
// [0x80420401]  (iNative[2446])
struct UGameTestDefinition_execGameTestEvent_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FName                                       SpecializedEventName;                             		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Instigator;                                       		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     Other;                                            		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     TeamDefinition;                                   		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              FloatParam;                                       		// 0x002C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GameTestDefinition.CleanupTest
// [0x80420401]  (iNative[2447])
struct UGameTestDefinition_execCleanupTest_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GameTestDefinition.RunTest
// [0x80420401]  (iNative[2448])
struct UGameTestDefinition_execRunTest_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GBXActorList.RemoveAndDeleteActorsOfClassFromLevel
// [0x00020400]  (iNative[35665])
struct UGBXActorList_execRemoveAndDeleteActorsOfClassFromLevel_Params
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class ULevel*                                      Level;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXActorList.RemoveActorsOfClassFromLevel
// [0x00020400]  (iNative[35661])
struct UGBXActorList_execRemoveActorsOfClassFromLevel_Params
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class ULevel*                                      Level;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXActorList.RemoveAndDeleteActorsFromLevel
// [0x00020400]  (iNative[35664])
struct UGBXActorList_execRemoveAndDeleteActorsFromLevel_Params
{
	class ULevel*                                      Level;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXActorList.RemoveActorsFromLevel
// [0x00020400]  (iNative[35660])
struct UGBXActorList_execRemoveActorsFromLevel_Params
{
	class ULevel*                                      Level;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXActorList.FindNextActorByLevel
// [0x00420400]  (iNative[33817])
struct UGBXActorList_execFindNextActorByLevel_Params
{
	class ULevel*                                      Level;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AActor*                                      ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXActorList.FindFirstActorByLevel
// [0x00420400]  (iNative[33811])
struct UGBXActorList_execFindFirstActorByLevel_Params
{
	class ULevel*                                      Level;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AActor*                                      ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXActorList.FindNextActorByClass
// [0x00420400]  (iNative[33816])
struct UGBXActorList_execFindNextActorByClass_Params
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AActor*                                      ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXActorList.FindFirstActorByClass
// [0x00420400]  (iNative[33810])
struct UGBXActorList_execFindFirstActorByClass_Params
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AActor*                                      ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXActorList.RemoveActor
// [0x00020400]  (iNative[35659])
struct UGBXActorList_execRemoveActor_Params
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXActorList.AddActor
// [0x00020400]  (iNative[31659])
struct UGBXActorList_execAddActor_Params
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class ULevel*                                      Level;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXAutoTestManager.ShutdownClients
// [0x00020402]  (iNative[2449])
struct AGBXAutoTestManager_execShutdownClients_Params
{
};

// Function GearboxFramework.GBXAutoTestManager.ShutdownTimer
// [0x00020402]  (iNative[2450])
struct AGBXAutoTestManager_execShutdownTimer_Params
{
};

// Function GearboxFramework.GBXAutoTestManager.AutoTestTimer
// [0x00020402]  (iNative[2451])
struct AGBXAutoTestManager_execAutoTestTimer_Params
{
};

// Function GearboxFramework.GBXAutoTestManager.GetBehaviorConsumerHandle
// [0x00020400]  (iNative[34051])
struct AGBXAutoTestManager_execGetBehaviorConsumerHandle_Params
{
	struct FBehaviorConsumerHandle                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXCameraMode.PreViewTargetUpdate
// [0x00420400]  (iNative[35529])
struct UGBXCameraMode_execPreViewTargetUpdate_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGBXCameraState*                             CamState;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    OutViewRotation;                                  		// 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GBXCameraMode.Update
// [0x00420400]  (iNative[2482])
struct UGBXCameraMode_execUpdate_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGBXCameraState*                             CamState;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FTViewTarget                                ViewTarget;                                       		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FTQPOV                                      ViewmodelPOV;                                     		// 0x0050 (0x0030) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GBXCameraMode.End
// [0x00020400]  (iNative[15573])
struct UGBXCameraMode_execEnd_Params
{
	class UGBXCameraState*                             CamState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXCameraMode.Start
// [0x00424400]  (iNative[14797])
struct UGBXCameraMode_execStart_Params
{
	class UGBXCameraState*                             CamState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FTPOV                                       PreviousPOV;                                      		// 0x0008 (0x001C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FTQPOV                                      PreviousViewmodelOffsetPOV;                       		// 0x0030 (0x0030) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              BlendTimeOverride;                                		// 0x0060 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GBXCameraMode.ShutDown
// [0x00020400]  (iNative[2361])
struct UGBXCameraMode_execShutDown_Params
{
};

// Function GearboxFramework.GBXCameraMode.Initialize
// [0x00020400]  (iNative[14833])
struct UGBXCameraMode_execInitialize_Params
{
	class UGBXCameraInputs*                            CameraInputs;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXCameraModeSet.GetMode
// [0x00020400]  (iNative[34131])
struct UGBXCameraModeSet_execGetMode_Params
{
	struct FName                                       ModeName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGBXCameraMode*                              ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXCameraModeSet.ShutdownModes
// [0x00020400]  (iNative[35962])
struct UGBXCameraModeSet_execShutdownModes_Params
{
};

// Function GearboxFramework.GBXCameraModeSet.InitializeModes
// [0x00020400]  (iNative[34557])
struct UGBXCameraModeSet_execInitializeModes_Params
{
	class UGBXCameraInputs*                            CameraInputs;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXCameraModeSet.InitializeFromDefinition
// [0x00020400]  (iNative[15031])
struct UGBXCameraModeSet_execInitializeFromDefinition_Params
{
	class UGBXCameraModeSetDefinition*                 Def;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxCamera.DisplayDebug
// [0x12420100] 
struct AGearboxCamera_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GearboxCamera.GetDesiredPawnRotation
// [0x00020500]  (iNative[34086])
struct AGearboxCamera_execGetDesiredPawnRotation_Params
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxCamera.CycleDebugCameraMode
// [0x00024500]  (iNative[32989])
struct AGearboxCamera_execCycleDebugCameraMode_Params
{
	uint32_t                                           bReverse : 1;                                     		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCamera.GetCameraModeNames
// [0x00420500]  (iNative[34058])
struct AGearboxCamera_execGetCameraModeNames_Params
{
	class TArray<struct FName>                         OutModeNames;                                     		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxCamera.UpdateViewTarget
// [0x12420000] 
struct AGearboxCamera_execUpdateViewTarget_Params
{
	struct FTViewTarget                                OutVT;                                            		// 0x0000 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              DeltaTime;                                        		// 0x0038 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxCamera.UpdateCameraInputs
// [0x00020500]  (iNative[36611])
struct AGearboxCamera_execUpdateCameraInputs_Params
{
};

// Function GearboxFramework.GearboxCamera.ProcessViewRotation
// [0x00420400]  (iNative[27737])
struct AGearboxCamera_execProcessViewRotation_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    OutViewRotation;                                  		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    OutDeltaRot;                                      		// 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GearboxCamera.UpdateCamera
// [0x00020D00]  (iNative[14775])
struct AGearboxCamera_eventUpdateCamera_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxCamera.ClearAllCameraShakes
// [0x12020000] 
struct AGearboxCamera_execClearAllCameraShakes_Params
{
};

// Function GearboxFramework.GearboxCamera.StopCameraShake
// [0x12020000] 
struct AGearboxCamera_execStopCameraShake_Params
{
	class UCameraShake*                                Shake;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxCamera.PlayCameraShake
// [0x12024000] 
struct AGearboxCamera_execPlayCameraShake_Params
{
	class UCameraShake*                                Shake;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlaySpace;                                        		// 0x000C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    UserPlaySpaceRot;                                 		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCamera.RemoveAllEpicCameraShakes
// [0x00020400]  (iNative[35662])
struct AGearboxCamera_execRemoveAllEpicCameraShakes_Params
{
};

// Function GearboxFramework.GearboxCamera.RemoveEpicCameraShake
// [0x00020400]  (iNative[35669])
struct AGearboxCamera_execRemoveEpicCameraShake_Params
{
	class UCameraShake*                                Shake;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxCamera.AddEpicCameraShake
// [0x00024400]  (iNative[31662])
struct AGearboxCamera_execAddEpicCameraShake_Params
{
	class UCameraShake*                                NewShake;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlaySpace;                                        		// 0x000C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    UserPlaySpaceRot;                                 		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCamera.StopGBXCameraShake
// [0x00020400]  (iNative[36304])
struct AGearboxCamera_execStopGBXCameraShake_Params
{
};

// Function GearboxFramework.GearboxCamera.PlayGBXCameraShake
// [0x00020400]  (iNative[35462])
struct AGearboxCamera_execPlayGBXCameraShake_Params
{
	struct FGearboxViewShakeInfo                       Shake;                                            		// 0x0000 (0x0044) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxCamera.SetViewTarget
// [0x00024400]  (iNative[29021])
struct AGearboxCamera_execSetViewTarget_Params
{
	class AActor*                                      NewViewTarget;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FViewTargetTransitionParams                 TransitionParams;                                 		// 0x0008 (0x0010) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCamera.ResetCameraRotation
// [0x00020400]  (iNative[35715])
struct AGearboxCamera_execResetCameraRotation_Params
{
	struct FRotator                                    NewRot;                                           		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxCamera.GetCurrentMode
// [0x00020400]  (iNative[34070])
struct AGearboxCamera_execGetCurrentMode_Params
{
	class UGBXCameraMode*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxCamera.ClearCameraMode
// [0x00020400]  (iNative[32749])
struct AGearboxCamera_execClearCameraMode_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxCamera.PopCameraMode
// [0x00024400]  (iNative[35505])
struct AGearboxCamera_execPopCameraMode_Params
{
	struct FName                                       ModeName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendTimeOverride;                                		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxCamera.PushCameraMode
// [0x00024400]  (iNative[35582])
struct AGearboxCamera_execPushCameraMode_Params
{
	struct FName                                       ModeName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendTimeOverride;                                		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxCamera.SetCameraMode
// [0x00024400]  (iNative[28738])
struct AGearboxCamera_execSetCameraMode_Params
{
	struct FName                                       ModeName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              BlendTimeOverride;                                		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bForceResetMode : 1;                              		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxCamera.ClearModeSets
// [0x00020400]  (iNative[32755])
struct AGearboxCamera_execClearModeSets_Params
{
};

// Function GearboxFramework.GearboxCamera.HasModeSet
// [0x00020400]  (iNative[34319])
struct AGearboxCamera_execHasModeSet_Params
{
	class UGBXCameraModeSet*                           ModeSet;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxCamera.RemoveModeSetByDefinition
// [0x00020400]  (iNative[35673])
struct AGearboxCamera_execRemoveModeSetByDefinition_Params
{
	class UGBXCameraModeSetDefinition*                 ModeSetDefinition;                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxCamera.AddModeSetByDefinition
// [0x00020400]  (iNative[31674])
struct AGearboxCamera_execAddModeSetByDefinition_Params
{
	class UGBXCameraModeSetDefinition*                 ModeSetDefinition;                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxCamera.RemoveModeSet
// [0x00020400]  (iNative[35672])
struct AGearboxCamera_execRemoveModeSet_Params
{
	class UGBXCameraModeSet*                           ModeSet;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxCamera.AddModeSet
// [0x00020400]  (iNative[31673])
struct AGearboxCamera_execAddModeSet_Params
{
	class UGBXCameraModeSet*                           ModeSet;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXCameraShakeManager.AddEpicCameraShake
// [0x00020400]  (iNative[31662])
struct UGBXCameraShakeManager_execAddEpicCameraShake_Params
{
	class UCameraShake*                                NewShake;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Scale;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PlaySpace;                                        		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    UserPlaySpaceRot;                                 		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXCameraShakeManager.PlayGBXCameraShake
// [0x00020400]  (iNative[35462])
struct UGBXCameraShakeManager_execPlayGBXCameraShake_Params
{
	struct FGearboxViewShakeInfo                       NewShake;                                         		// 0x0000 (0x0044) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0044 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXCameraShakeManager.ApplyShakes
// [0x00420400]  (iNative[31893])
struct UGBXCameraShakeManager_execApplyShakes_Params
{
	struct FVector                                     OutLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    OutRotation;                                      		// 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              OutFOV;                                           		// 0x0018 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GBXCameraShakeManager.Update
// [0x00020400]  (iNative[2482])
struct UGBXCameraShakeManager_execUpdate_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXCameraState.LimitPitch
// [0x00020400]  (iNative[34825])
struct UGBXCameraState_execLimitPitch_Params
{
	float                                              MinDegree;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              MaxDegree;                                        		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXCameraState.ResetNonPersistentVariables
// [0x00020400]  (iNative[35719])
struct UGBXCameraState_execResetNonPersistentVariables_Params
{
};

// Function GearboxFramework.GBXCameraState.GetViewmodelFOV
// [0x00020400]  (iNative[34255])
struct UGBXCameraState_execGetViewmodelFOV_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXCameraState.GetCameraFOV
// [0x00020400]  (iNative[34056])
struct UGBXCameraState_execGetCameraFOV_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXCameraState.GetViewmodelLocationRotation
// [0x00420400]  (iNative[34256])
struct UGBXCameraState_execGetViewmodelLocationRotation_Params
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FQuat                                       Rotation;                                         		// 0x0010 (0x0010) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     DeltaLocation;                                    		// 0x0020 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    DeltaRotation;                                    		// 0x002C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXCameraState.GetCameraLocationRotation
// [0x00420400]  (iNative[34057])
struct UGBXCameraState_execGetCameraLocationRotation_Params
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GBXCameraState.GetBaseLocationRotation
// [0x00420400]  (iNative[34050])
struct UGBXCameraState_execGetBaseLocationRotation_Params
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GBXDangerComponent.SetEnabled
// [0x00020401]  (iNative[28802])
struct UGBXDangerComponent_execSetEnabled_Params
{
	uint32_t                                           bNewEnabled : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GBXInfluenceInfo_Boundary.InitPoints
// [0x00020400]  (iNative[24595])
struct UGBXInfluenceInfo_Boundary_execInitPoints_Params
{
	int32_t                                            NumPoints;                                        		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GBXInfluenceInfo_Combine.GetOperand2
// [0x00020401]  (iNative[34162])
struct UGBXInfluenceInfo_Combine_execGetOperand2_Params
{
	class UGBXInfluenceInfo*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Combine.GetOperand1
// [0x00020401]  (iNative[34161])
struct UGBXInfluenceInfo_Combine_execGetOperand1_Params
{
	class UGBXInfluenceInfo*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Combine.GetValue
// [0x00020400]  (iNative[24017])
struct UGBXInfluenceInfo_Combine_execGetValue_Params
{
	int32_t                                            PointIdx;                                         		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Combine.InitPoints
// [0x00020400]  (iNative[24595])
struct UGBXInfluenceInfo_Combine_execInitPoints_Params
{
	int32_t                                            NumPoints;                                        		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GBXInfluenceInfo_Danger.DangerInUnitRadius
// [0x00424401]  (iNative[33015])
struct UGBXInfluenceInfo_Danger_execDangerInUnitRadius_Params
{
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              Units;                                            		// 0x0010 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FName                                       Type;                                             		// 0x0014 (0x0008) [0x0000000000000092] (CPF_Const | CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Danger.DangerInNodeRadius
// [0x00424401]  (iNative[33014])
struct UGBXInfluenceInfo_Danger_execDangerInNodeRadius_Params
{
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	int32_t                                            Nodes;                                            		// 0x0010 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FName                                       Type;                                             		// 0x0014 (0x0008) [0x0000000000000092] (CPF_Const | CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Danger.UnregisterDanger
// [0x00020401]  (iNative[36602])
struct UGBXInfluenceInfo_Danger_execUnregisterDanger_Params
{
	class UGBXDangerComponent*                         OldDanger;                                        		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.GBXInfluenceInfo_Danger.RegisterDanger
// [0x00020401]  (iNative[35632])
struct UGBXInfluenceInfo_Danger_execRegisterDanger_Params
{
	class UGBXDangerComponent*                         NewDanger;                                        		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.GBXInfluenceInfo_Danger.GetValue
// [0x00020400]  (iNative[24017])
struct UGBXInfluenceInfo_Danger_execGetValue_Params
{
	int32_t                                            PointIdx;                                         		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Danger.InitPoints
// [0x00020400]  (iNative[24595])
struct UGBXInfluenceInfo_Danger_execInitPoints_Params
{
	int32_t                                            NumPoints;                                        		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GBXInfluenceInfo_Danger.Prepare
// [0x00020400]  (iNative[27641])
struct UGBXInfluenceInfo_Danger_execPrepare_Params
{
};

// Function GearboxFramework.GBXInfluenceInfo_Danger.Update
// [0x00020400]  (iNative[2482])
struct UGBXInfluenceInfo_Danger_execUpdate_Params
{
};

// Function GearboxFramework.GBXInfluenceInfo_Debug.Update
// [0x00020400]  (iNative[2482])
struct UGBXInfluenceInfo_Debug_execUpdate_Params
{
};

// Function GearboxFramework.GBXInfluenceInfo_LineOfSight.CheckPoints
// [0x00020400]  (iNative[32729])
struct UGBXInfluenceInfo_LineOfSight_execCheckPoints_Params
{
	int32_t                                            Point1;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Point2;                                           		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	ELineOfSightInfo                                   ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_LineOfSight.InitPoints
// [0x00020400]  (iNative[24595])
struct UGBXInfluenceInfo_LineOfSight_execInitPoints_Params
{
	int32_t                                            NumPoints;                                        		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GBXInfluenceInfo_Occupancy.IsUnitRadiusOccupied
// [0x00420401]  (iNative[34700])
struct UGBXInfluenceInfo_Occupancy_execIsUnitRadiusOccupied_Params
{
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              Units;                                            		// 0x0010 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UPathingObstacleInfo*                        TestingObstacle;                                  		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UExpressionEvaluator*                        Condition;                                        		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Occupancy.IsNodeRadiusOccupied
// [0x00420401]  (iNative[34676])
struct UGBXInfluenceInfo_Occupancy_execIsNodeRadiusOccupied_Params
{
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0000 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	int32_t                                            Nodes;                                            		// 0x0010 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UPathingObstacleInfo*                        TestingObstacle;                                  		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UExpressionEvaluator*                        Condition;                                        		// 0x0020 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Occupancy.SubtractObstacle
// [0x00020401]  (iNative[36336])
struct UGBXInfluenceInfo_Occupancy_execSubtractObstacle_Params
{
	class UPathingObstacleInfo*                        Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXInfluenceInfo_Occupancy.ResetObstacle
// [0x00020401]  (iNative[35720])
struct UGBXInfluenceInfo_Occupancy_execResetObstacle_Params
{
	class UPathingObstacleInfo*                        Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXInfluenceInfo_Occupancy.AddObstacle
// [0x00020401]  (iNative[31678])
struct UGBXInfluenceInfo_Occupancy_execAddObstacle_Params
{
	class UPathingObstacleInfo*                        Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXInfluenceInfo_Occupancy.InitPoints
// [0x00020400]  (iNative[24595])
struct UGBXInfluenceInfo_Occupancy_execInitPoints_Params
{
	int32_t                                            NumPoints;                                        		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GBXInfluenceInfo_Occupancy.Update
// [0x00020400]  (iNative[2482])
struct UGBXInfluenceInfo_Occupancy_execUpdate_Params
{
};

// Function GearboxFramework.GBXInfluenceInfo_Search.ClearVisiblePointsInCone
// [0x00420401]  (iNative[32763])
struct UGBXInfluenceInfo_Search_execClearVisiblePointsInCone_Params
{
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0000 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              ConeDist;                                         		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ConeAngle;                                        		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ConeDir;                                          		// 0x0018 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Search.GetBestPoint
// [0x00420401]  (iNative[34053])
struct UGBXInfluenceInfo_Search_execGetBestPoint_Params
{
	struct FVector                                     Location;                                         		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              Radius;                                           		// 0x000C (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Search.UnclaimPoint
// [0x00020401]  (iNative[36596])
struct UGBXInfluenceInfo_Search_execUnclaimPoint_Params
{
	int32_t                                            PointIdx;                                         		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GBXInfluenceInfo_Search.ClaimPoint
// [0x00020401]  (iNative[32742])
struct UGBXInfluenceInfo_Search_execClaimPoint_Params
{
	int32_t                                            PointIdx;                                         		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GBXInfluenceInfo_Search.PointClaimed
// [0x00020401]  (iNative[35489])
struct UGBXInfluenceInfo_Search_execPointClaimed_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXInfluenceInfo_Search.CheckClear
// [0x00020401]  (iNative[32724])
struct UGBXInfluenceInfo_Search_execCheckClear_Params
{
};

// Function GearboxFramework.GBXInfluenceInfo_Search.Update
// [0x00020400]  (iNative[2482])
struct UGBXInfluenceInfo_Search_execUpdate_Params
{
};

// Function GearboxFramework.GBXObjectList.RemoveObjectsOfClass
// [0x00020400]  (iNative[35676])
struct UGBXObjectList_execRemoveObjectsOfClass_Params
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GBXObjectList.FindNextObjectByClass
// [0x00420400]  (iNative[33818])
struct UGBXObjectList_execFindNextObjectByClass_Params
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXObjectList.FindFirstObjectByClass
// [0x00420400]  (iNative[33812])
struct UGBXObjectList_execFindFirstObjectByClass_Params
{
	class UClass*                                      TheClass;                                         		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UObject*                                     ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXObjectList.RemoveObject
// [0x00020400]  (iNative[35675])
struct UGBXObjectList_execRemoveObject_Params
{
	class UObject*                                     TheObject;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXObjectList.AddObject
// [0x00020400]  (iNative[31677])
struct UGBXObjectList_execAddObject_Params
{
	class UObject*                                     TheObject;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXPathConstraint.GetPointScore
// [0x00480400]  (iNative[34182])
struct UGBXPathConstraint_execGetPointScore_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint.Init
// [0x00080400]  (iNative[762])
struct UGBXPathConstraint_execInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      InTarget;                                         		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InStartLoc;                                       		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint.FirstInit
// [0x00020400]  (iNative[33840])
struct UGBXPathConstraint_execFirstInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint.NewPathInit
// [0x00080400]  (iNative[35107])
struct UGBXPathConstraint_execNewPathInit_Params
{
};

// Function GearboxFramework.GBXPathConstraint_Boundary.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_Boundary_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Boundary.Init
// [0x00080400]  (iNative[762])
struct UGBXPathConstraint_Boundary_execInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      InTarget;                                         		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InStartLoc;                                       		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Danger.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_Danger_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Danger.Init
// [0x00080400]  (iNative[762])
struct UGBXPathConstraint_Danger_execInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      InTarget;                                         		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InStartLoc;                                       		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Direct.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_Direct_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Distance.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_Distance_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Distance.NewPathInit
// [0x00080400]  (iNative[35107])
struct UGBXPathConstraint_Distance_execNewPathInit_Params
{
};

// Function GearboxFramework.GBXPathConstraint_Height.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_Height_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_MaxDistance.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_MaxDistance_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Move.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_Move_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Move.FirstInit
// [0x00020400]  (iNative[33840])
struct UGBXPathConstraint_Move_execFirstInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Occupancy.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_Occupancy_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Occupancy.Init
// [0x00080400]  (iNative[762])
struct UGBXPathConstraint_Occupancy_execInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      InTarget;                                         		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InStartLoc;                                       		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Range.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_Range_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Range.Init
// [0x00080400]  (iNative[762])
struct UGBXPathConstraint_Range_execInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      InTarget;                                         		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InStartLoc;                                       		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Side.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_Side_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Side.Init
// [0x00080400]  (iNative[762])
struct UGBXPathConstraint_Side_execInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      InTarget;                                         		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InStartLoc;                                       		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Side.FirstInit
// [0x00020400]  (iNative[33840])
struct UGBXPathConstraint_Side_execFirstInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Territory.ValidPoint
// [0x00480400]  (iNative[36669])
struct UGBXPathConstraint_Territory_execValidPoint_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FInfluencePointRef                          InfPoint;                                         		// 0x0010 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Territory.Init
// [0x00080400]  (iNative[762])
struct UGBXPathConstraint_Territory_execInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      InTarget;                                         		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InStartLoc;                                       		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXPathConstraint_Territory.FirstInit
// [0x00020400]  (iNative[33840])
struct UGBXPathConstraint_Territory_execFirstInit_Params
{
	class UIAIInterface*                               AI;                                               		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXTargetSearchDefinition.GetHitNormalOffset
// [0x00020401]  (iNative[34109])
struct UGBXTargetSearchDefinition_execGetHitNormalOffset_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXTargetSearchDefinition.DoMultiSearch
// [0x00424401]  (iNative[33303])
struct UGBXTargetSearchDefinition_execDoMultiSearch_Params
{
	class UIGBXTargetSearch*                           Source;                                           		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      PreferredTarget;                                  		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class AActor*>                        ExcludedActors;                                   		// 0x0018 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<struct FTargetSearchResult>           SearchResults;                                    		// 0x0028 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     SourceLocationOverride;                           		// 0x0038 (0x000C) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	struct FRotator                                    SourceRotationOverride;                           		// 0x0044 (0x000C) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	class UObject*                                     AdditionalContext;                                		// 0x0050 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXTargetSearchDefinition.DoSearch
// [0x00424401]  (iNative[33305])
struct UGBXTargetSearchDefinition_execDoSearch_Params
{
	class UIGBXTargetSearch*                           Source;                                           		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      PreferredTarget;                                  		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class AActor*>                        ExcludedActors;                                   		// 0x0018 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FTargetSearchResult                         SearchResult;                                     		// 0x0028 (0x0048) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     SourceLocationOverride;                           		// 0x0070 (0x000C) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	struct FRotator                                    SourceRotationOverride;                           		// 0x007C (0x000C) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	class UObject*                                     AdditionalContext;                                		// 0x0088 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0090 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXTargetSearchLimits.SetDebuggingLifeTime
// [0x00022400]  (iNative[35892])
struct UGBXTargetSearchLimits_execSetDebuggingLifeTime_Params
{
	float                                              Lifetime;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GBXTargetSearchLimits.RestoreDebuggingToDefaults
// [0x00022400]  (iNative[35754])
struct UGBXTargetSearchLimits_execRestoreDebuggingToDefaults_Params
{
};

// Function GearboxFramework.GBXTargetSearchLimits.IsDebuggingEnabled
// [0x00022400]  (iNative[34653])
struct UGBXTargetSearchLimits_execIsDebuggingEnabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GBXTargetSearchLimits.ToggleDebugging
// [0x00022400]  (iNative[36531])
struct UGBXTargetSearchLimits_execToggleDebugging_Params
{
};

// Function GearboxFramework.GearboxAIMoveNode.GetBrokenNodes
// [0x00422400]  (iNative[34055])
struct AGearboxAIMoveNode_execGetBrokenNodes_Params
{
	class TArray<class AGearboxAIMoveNode*>            OutNodes;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAIMoveNode.GetError
// [0x00420400]  (iNative[34097])
struct AGearboxAIMoveNode_execGetError_Params
{
	class FString                                      OutError;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIMoveNode.TimerHoldFinished
// [0x00020403]  (iNative[2559])
struct AGearboxAIMoveNode_execTimerHoldFinished_Params
{
};

// Function GearboxFramework.GearboxAIMoveNode.SpecialMovesFinished
// [0x00020401]  (iNative[36182])
struct AGearboxAIMoveNode_execSpecialMovesFinished_Params
{
};

// Function GearboxFramework.GearboxAIMoveNode.DoesPatrolPathExistToPoint
// [0x00020400]  (iNative[33301])
struct AGearboxAIMoveNode_execDoesPatrolPathExistToPoint_Params
{
	class AGearboxAIMoveNode*                          PatrolPoint;                                      		// 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIMoveNode.GetAllLinkedNodes
// [0x00420400]  (iNative[34041])
struct AGearboxAIMoveNode_execGetAllLinkedNodes_Params
{
	class TArray<class AGearboxAIMoveNode*>            OutNodes;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAIMoveNode.GetNextMoveNodeClosestToPoint
// [0x00020400]  (iNative[34145])
struct AGearboxAIMoveNode_execGetNextMoveNodeClosestToPoint_Params
{
	struct FVector                                     TestPoint;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AGearboxAIMoveNode*                          ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIMoveNode.GetPrevMoveNode
// [0x00024400]  (iNative[34185])
struct AGearboxAIMoveNode_execGetPrevMoveNode_Params
{
	uint32_t                                           bIgnoreEnabled : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      User;                                             		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AGearboxAIMoveNode*                          ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIMoveNode.GetNextMoveNode
// [0x00024400]  (iNative[34144])
struct AGearboxAIMoveNode_execGetNextMoveNode_Params
{
	uint32_t                                           bIgnoreEnabled : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      User;                                             		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AGearboxAIMoveNode*                          ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIMoveNode.RemoveNode
// [0x00020400]  (iNative[35674])
struct AGearboxAIMoveNode_execRemoveNode_Params
{
	class AGearboxAIMoveNode*                          OldNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIMoveNode.AddNode
// [0x00020400]  (iNative[31676])
struct AGearboxAIMoveNode_execAddNode_Params
{
	class AGearboxAIMoveNode*                          NewNode;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAIMoveNode.ClearLinks
// [0x00020400]  (iNative[32754])
struct AGearboxAIMoveNode_execClearLinks_Params
{
};

// Function GearboxFramework.GearboxAIMoveNode.OnToggle
// [0x12020102] 
struct AGearboxAIMoveNode_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDebugTarget.GetObstacleInfo
// [0x00024400]  (iNative[34160])
struct AAIDebugTarget_execGetObstacleInfo_Params
{
	uint32_t                                           bFillInfo : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class UPathingObstacleInfo*                        ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.SetObstacleInfo
// [0x00020400]  (iNative[35913])
struct AAIDebugTarget_execSetObstacleInfo_Params
{
	class UPathingObstacleInfo*                        Info;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDebugTarget.GetObstacleActor
// [0x00020400]  (iNative[34159])
struct AAIDebugTarget_execGetObstacleActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetAudibility
// [0x00020400]  (iNative[23564])
struct AAIDebugTarget_execGetAudibility_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetVisibility
// [0x00020400]  (iNative[24027])
struct AAIDebugTarget_execGetVisibility_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.SetPatsy
// [0x00020400]  (iNative[28914])
struct AAIDebugTarget_execSetPatsy_Params
{
	class UITargetable*                                NewPatsy;                                         		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDebugTarget.GetPatsy
// [0x00020400]  (iNative[23847])
struct AAIDebugTarget_execGetPatsy_Params
{
	class UITargetable*                                ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.IsBeingHealed
// [0x00020500]  (iNative[24848])
struct AAIDebugTarget_execIsBeingHealed_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.SetBeingHealed
// [0x00020500]  (iNative[28724])
struct AAIDebugTarget_execSetBeingHealed_Params
{
	uint32_t                                           bNewBeingHealed : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.AIDebugTarget.IsBoss
// [0x00020500]  (iNative[24851])
struct AAIDebugTarget_execIsBoss_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.Behavior_RegisterTargetable
// [0x00020400]  (iNative[10753])
struct AAIDebugTarget_execBehavior_RegisterTargetable_Params
{
	uint32_t                                           bUnregister : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.AIDebugTarget.IsTargetableProxy
// [0x00020400]  (iNative[24943])
struct AAIDebugTarget_execIsTargetableProxy_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetAutoAimProfile
// [0x00020400]  (iNative[23566])
struct AAIDebugTarget_execGetAutoAimProfile_Params
{
	EAutoAimProfile                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetMagnetismRange
// [0x00020400]  (iNative[23780])
struct AAIDebugTarget_execGetMagnetismRange_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetMagnetismOrigin
// [0x00020400]  (iNative[23779])
struct AAIDebugTarget_execGetMagnetismOrigin_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.IsAutoAimTarget
// [0x00020400]  (iNative[24844])
struct AAIDebugTarget_execIsAutoAimTarget_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetTargetingModifier
// [0x00020400]  (iNative[23976])
struct AAIDebugTarget_execGetTargetingModifier_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.IsValidHomingTarget
// [0x00020400]  (iNative[24953])
struct AAIDebugTarget_execIsValidHomingTarget_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetTargetableIsHidden
// [0x00020400]  (iNative[23972])
struct AAIDebugTarget_execGetTargetableIsHidden_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.CanSnapZoom
// [0x00020400]  (iNative[20422])
struct AAIDebugTarget_execCanSnapZoom_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetSnapRegion
// [0x00420400]  (iNative[23936])
struct AAIDebugTarget_execGetSnapRegion_Params
{
	struct FTargetSnapRegion                           SnapRegion;                                       		// 0x0000 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDebugTarget.GetSnapLocation
// [0x00020400]  (iNative[23935])
struct AAIDebugTarget_execGetSnapLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetAuxiliaryTargetableLocations
// [0x00420400]  (iNative[23567])
struct AAIDebugTarget_execGetAuxiliaryTargetableLocations_Params
{
	class TArray<struct FVector>                       AuxLocations;                                     		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.AIDebugTarget.GetTargetableLocation
// [0x00020400]  (iNative[23974])
struct AAIDebugTarget_execGetTargetableLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.Behavior_SetCanTarget
// [0x00020400]  (iNative[18322])
struct AAIDebugTarget_execBehavior_SetCanTarget_Params
{
	uint8_t                                            ChangeStatus;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDebugTarget.IsTargetable
// [0x00024400]  (iNative[24942])
struct AAIDebugTarget_execIsTargetable_Params
{
	int32_t                                            TargetFlags;                                      		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.ShowSelfAsTarget
// [0x00020400]  (iNative[29092])
struct AAIDebugTarget_execShowSelfAsTarget_Params
{
	uint32_t                                           bControllersOnly : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetOpinion
// [0x00020400]  (iNative[23837])
struct AAIDebugTarget_execGetOpinion_Params
{
	class UObject*                                     Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	EOpinion                                           ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.SetAllegiance
// [0x00020400]  (iNative[28695])
struct AAIDebugTarget_execSetAllegiance_Params
{
	class UPawnAllegiance*                             NewAllegiance;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AIDebugTarget.GetDefaultAllegiance
// [0x00020400]  (iNative[23666])
struct AAIDebugTarget_execGetDefaultAllegiance_Params
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.GetObjectAllegiance
// [0x00020400]  (iNative[23829])
struct AAIDebugTarget_execGetObjectAllegianceW_Params
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.IsSameAllegiance
// [0x00020400]  (iNative[24932])
struct AAIDebugTarget_execIsSameAllegiance_Params
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.IsNeutral
// [0x00020400]  (iNative[24906])
struct AAIDebugTarget_execIsNeutral_Params
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.IsFriendly
// [0x00020400]  (iNative[24878])
struct AAIDebugTarget_execIsFriendly_Params
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.IsEnemy
// [0x00020400]  (iNative[24873])
struct AAIDebugTarget_execIsEnemy_Params
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.HideTargetInfoOnHud
// [0x00024500]  (iNative[24214])
struct AAIDebugTarget_execHideTargetInfoOnHud_Params
{
	class APawn*                                       HUDOwner;                                         		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.IsChampion
// [0x00020500]  (iNative[24853])
struct AAIDebugTarget_execIsChampion_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.DoesTargetableTakeDamage
// [0x00020400]  (iNative[22004])
struct AAIDebugTarget_execDoesTargetableTakeDamage_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.DisplayParentInfo
// [0x00020500]  (iNative[21844])
struct AAIDebugTarget_execDisplayParentInfo_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.AIDebugTarget.SetInfoBarVisibility
// [0x00020500]  (iNative[28846])
struct AAIDebugTarget_execSetInfoBarVisibility_Params
{
	uint32_t                                           bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.AIDebugTarget.GetHealthInfo
// [0x00420500]  (iNative[23741])
struct AAIDebugTarget_execGetHealthInfo_Params
{
	struct FHealthInfo                                 OutHealthInfo;                                    		// 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDebugTarget.GetExpInfo
// [0x00420500]  (iNative[23707])
struct AAIDebugTarget_execGetExpInfo_Params
{
	int32_t                                            ExpLevelValue;                                    		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AIDebugTarget.GetTargetableActor
// [0x00020400]  (iNative[23971])
struct AAIDebugTarget_execGetTargetableActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BodyAIMoveNode.ServerSpecialMove_StopAny
// [0xFFFF0000122248C0] 
struct ABodyAIMoveNode_eventServerSpecialMove_StopAny_Params
{
	uint32_t                                           bClearQueue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.BodyAIMoveNode.ServerSpecialMove_Stop
// [0xFFFF0000122248C0] 
struct ABodyAIMoveNode_eventServerSpecialMove_Stop_Params
{
	class USpecialMoveDefinition*                      OldSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bClearQueue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.BodyAIMoveNode.ServerSpecialMove_Queue
// [0xFFFF0000122248C0] 
struct ABodyAIMoveNode_eventServerSpecialMove_Queue_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayRateScale;                                    		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       CallbackName;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     CallbackObject;                                   		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     Data;                                             		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSendCallbackAtEndOfSequence : 1;                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bStartOfSequence : 1;                             		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.BodyAIMoveNode.ServerSpecialMove_Play
// [0xFFFF0000122248C0] 
struct ABodyAIMoveNode_eventServerSpecialMove_Play_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayRateScale;                                    		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       CallbackName;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     CallbackObject;                                   		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     Data;                                             		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSendCallbackAtEndOfSequence : 1;                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.BodyAIMoveNode.SetReplicatedSMData
// [0x00424400]  (iNative[35926])
struct ABodyAIMoveNode_execSetReplicatedSMData_Params
{
	struct FSpecialMoveData                            NewSMData;                                        		// 0x0000 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.BodyAIMoveNode.GetDefaultRootMotionRotationMode
// [0x00020500]  (iNative[23677])
struct ABodyAIMoveNode_execGetDefaultRootMotionRotationMode_Params
{
	ERootMotionRotationMode                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BodyAIMoveNode.GetDefaultRootMotionMode
// [0x00020500]  (iNative[23676])
struct ABodyAIMoveNode_execGetDefaultRootMotionMode_Params
{
	ERootMotionMode                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BodyAIMoveNode.GetSkelMesh
// [0x00020500]  (iNative[34208])
struct ABodyAIMoveNode_execGetSkelMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.BodyAIMoveNode.GetSMComponent
// [0x00020500]  (iNative[34209])
struct ABodyAIMoveNode_execGetSMComponent_Params
{
	class USpecialMoveComponent*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.BodyAIMoveNode.GetActor
// [0x00020500]  (iNative[34025])
struct ABodyAIMoveNode_execGetActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BodyAIMoveNode.ReplicatedEvent
// [0x12020900] 
struct ABodyAIMoveNode_eventReplicatedEvent_Params
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.BodyAIMoveNode.GetBehaviorConsumerHandle
// [0x00020400]  (iNative[34051])
struct ABodyAIMoveNode_execGetBehaviorConsumerHandle_Params
{
	struct FBehaviorConsumerHandle                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BodyAIMoveNode.RegisterBehaviorConsumer
// [0x00020401]  (iNative[35631])
struct ABodyAIMoveNode_execRegisterBehaviorConsumer_Params
{
};

// Function GearboxFramework.BodyAIMoveNode.GetInstanceDataState
// [0x12420000] 
struct ABodyAIMoveNode_execGetInstanceDataState_Params
{
	struct FInstanceData2                              OutInstanceDataState;                             		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BodyAIMoveNode.RemoveInstanceData
// [0x12020800] 
struct ABodyAIMoveNode_eventRemoveInstanceData_Params
{
	struct FName                                       DataName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BodyAIMoveNode.GetInstanceData
// [0x12420800] 
struct ABodyAIMoveNode_eventGetInstanceData_Params
{
	struct FName                                       DataName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FInstanceDataItem2>            InstanceData;                                     		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BodyAIMoveNode.SetInstanceData
// [0x12024800] 
struct ABodyAIMoveNode_eventSetInstanceData_Params
{
	struct FInstanceDataItem2                          InstanceData;                                     		// 0x0000 (0x0060) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bAllowDuplicateNames : 1;                         		// 0x0060 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0064 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.BodyAIMoveNode.CheckStartReplication
// [0x00020401]  (iNative[32733])
struct ABodyAIMoveNode_execCheckStartReplication_Params
{
};

// Function GearboxFramework.BodyAIMoveNode.InitBody
// [0x00020401]  (iNative[34531])
struct ABodyAIMoveNode_execInitBody_Params
{
};

// Function GearboxFramework.Perch.GetInstanceData
// [0x12420900] 
struct APerch_eventGetInstanceData_Params
{
	struct FName                                       DataName;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FInstanceDataItem2>            InstanceData;                                     		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Perch.ReplicatedEvent
// [0x12020900] 
struct APerch_eventReplicatedEvent_Params
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Perch.MatchActorToPerchPiece
// [0x00022400]  (iNative[34889])
struct APerch_execMatchActorToPerchPiece_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      MatchActor;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Perch.GetPieceProjectileFromUser
// [0x00022400]  (iNative[34176])
struct APerch_execGetPieceProjectileFromUser_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Perch.DetachPieceFromUser
// [0x00022400]  (iNative[33199])
struct APerch_execDetachPieceFromUser_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Perch.NotifyAttachDataReplicated
// [0x00020401]  (iNative[35181])
struct APerch_execNotifyAttachDataReplicated_Params
{
};

// Function GearboxFramework.Perch.IdleFinished
// [0x00020403]  (iNative[2499])
struct APerch_execIdleFinished_Params
{
};

// Function GearboxFramework.Perch.PerchEnded
// [0x00020401]  (iNative[35415])
struct APerch_execPerchEnded_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Perch.PerchStarted
// [0x00020401]  (iNative[35418])
struct APerch_execPerchStarted_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Perch.SetDynamicData
// [0x00020401]  (iNative[35896])
struct APerch_execSetDynamicData_Params
{
	class UPerchTag*                                   NewTag;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              NewUseRadius;                                     		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              NewUseHeight;                                     		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Perch.SetPerchState
// [0x00020401]  (iNative[35920])
struct APerch_execSetPerchState_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            NewState;                                         		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Perch.GetPerchState
// [0x00020401]  (iNative[34174])
struct APerch_execGetPerchState_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	EPerchState                                        ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Perch.GetUserLocation
// [0x00020401]  (iNative[34252])
struct APerch_execGetUserLocation_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Perch.MarkUnreachable
// [0x00020401]  (iNative[34884])
struct APerch_execMarkUnreachable_Params
{
};

// Function GearboxFramework.Perch.GetBody
// [0x00020401]  (iNative[34054])
struct APerch_execGetBody_Params
{
	class UPerchBodyDefinition*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Perch.GetTag
// [0x00020401]  (iNative[34235])
struct APerch_execGetTag_Params
{
	class UPerchTag*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnPoint.GetSpawnRotation
// [0x00020400]  (iNative[34223])
struct ASpawnPoint_execGetSpawnRotation_Params
{
	struct FRotator                                    ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnPoint.GetSpawnLocation
// [0x00020400]  (iNative[34219])
struct ASpawnPoint_execGetSpawnLocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnPoint.CanSpawnFromFactory
// [0x00020400]  (iNative[32684])
struct ASpawnPoint_execCanSpawnFromFactory_Params
{
	class USpawnFactory*                               Factory;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameStage;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AwesomeLevel;                                     		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnPoint.ActorSpawned
// [0x00020400]  (iNative[31654])
struct ASpawnPoint_execActorSpawned_Params
{
	class AActor*                                      SpawnedActor;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnPoint.RandomizeInitialDestinations
// [0x00020401]  (iNative[35601])
struct ASpawnPoint_execRandomizeInitialDestinations_Params
{
};

// Function GearboxFramework.SpawnPoint.GetInitialDestination
// [0x00020400]  (iNative[34114])
struct ASpawnPoint_execGetInitialDestination_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnPoint.GetInitialAction
// [0x12020000] 
struct ASpawnPoint_execGetInitialAction_Params
{
	EInitialActionType                                 ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnPoint.StartStretchy
// [0x00020403]  (iNative[2445])
struct ASpawnPoint_execStartStretchy_Params
{
};

// Function GearboxFramework.SpawnPoint.SpawnEnded
// [0x00020401]  (iNative[36122])
struct ASpawnPoint_execSpawnEnded_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnPoint.SpawnStarted
// [0x00020401]  (iNative[36156])
struct ASpawnPoint_execSpawnStarted_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              StretchyStartTime;                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.NavAnimNode.StartStretchy
// [0x00020403]  (iNative[2445])
struct ANavAnimNode_execStartStretchy_Params
{
};

// Function GearboxFramework.NavAnimNode.NavAnimEnded
// [0x00020401]  (iNative[35068])
struct ANavAnimNode_execNavAnimEnded_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.NavAnimNode.NavAnimStarted
// [0x00020401]  (iNative[35070])
struct ANavAnimNode_execNavAnimStarted_Params
{
	class UNavAnimConnection*                          Connection;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      User;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              StretchyStartTime;                                		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PhysicsJumpNode.CheckWaitingUsers
// [0x00020403]  (iNative[2505])
struct APhysicsJumpNode_execCheckWaitingUsers_Params
{
};

// Function GearboxFramework.PhysicsJumpNode.GetJumpState
// [0x00020401]  (iNative[34124])
struct APhysicsJumpNode_execGetJumpState_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	EPhysicsJumpState                                  ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PhysicsJumpNode.ShouldPlayLand
// [0x00020401]  (iNative[35951])
struct APhysicsJumpNode_execShouldPlayLand_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PhysicsJumpNode.JumpEnded
// [0x00020401]  (iNative[34710])
struct APhysicsJumpNode_execJumpEnded_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PhysicsJumpNode.PlayLand
// [0x00020401]  (iNative[35467])
struct APhysicsJumpNode_execPlayLand_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PhysicsJumpNode.PlayIdle
// [0x00020401]  (iNative[35463])
struct APhysicsJumpNode_execPlayIdle_Params
{
	class AActor*                                      User;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PhysicsJumpNode.PlayLaunch
// [0x00020401]  (iNative[35468])
struct APhysicsJumpNode_execPlayLaunch_Params
{
	class UPhysicsJumpConnection*                      Connection;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      User;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAIUtility.AIUpdateWhilePaused
// [0x12024000] 
struct UGearboxAIUtility_execAIUpdateWhilePaused_Params
{
	int32_t                                            TickCount;                                        		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxAIUtility.ShowAIRelevance
// [0x12420000] 
struct UGearboxAIUtility_execShowAIRelevance_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GearboxAIUtility.ShowMoveNodeErrors
// [0x12020000] 
struct UGearboxAIUtility_execShowMoveNodeErrors_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAIUtility.ShowPathingEntityErrors
// [0x12020000] 
struct UGearboxAIUtility_execShowPathingEntityErrors_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAIUtility.DisplayPathErrors
// [0x12020800] 
struct UGearboxAIUtility_eventDisplayPathErrors_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAIUtility.DisplayDebug
// [0x12420000] 
struct UGearboxAIUtility_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GearboxAIUtility.IsDebugObstacle
// [0x00020400]  (iNative[34654])
struct UGearboxAIUtility_execIsDebugObstacle_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIUtility.AIRelevanceActive
// [0x00022400]  (iNative[31769])
struct UGearboxAIUtility_execAIRelevanceActive_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIUtility.ToggleForceAIToBeIrrelevant
// [0x00022400]  (iNative[36533])
struct UGearboxAIUtility_execToggleForceAIToBeIrrelevant_Params
{
};

// Function GearboxFramework.GearboxAIUtility.ToggleAIRelevance
// [0x00022400]  (iNative[36520])
struct UGearboxAIUtility_execToggleAIRelevance_Params
{
};

// Function GearboxFramework.GearboxAIUtility.GetNearestNavMeshPoly
// [0x00020401]  (iNative[34140])
struct UGearboxAIUtility_execGetNearestNavMeshPoly_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FGBXNavMeshPolyRef                          ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIUtility.GetObstacleInfo
// [0x00020401]  (iNative[34160])
struct UGearboxAIUtility_execGetObstacleInfo_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPathingObstacleInfo*                        ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIUtility.GetNearestNavMeshLoc
// [0x00020401]  (iNative[34139])
struct UGearboxAIUtility_execGetNearestNavMeshLoc_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FBasedPosition                              ReturnValue;                                      		// 0x0008 (0x0038) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIUtility.GetVertDistToNavMesh
// [0x00020401]  (iNative[34254])
struct UGearboxAIUtility_execGetVertDistToNavMesh_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIUtility.GetDistToNavMesh
// [0x00020401]  (iNative[34090])
struct UGearboxAIUtility_execGetDistToNavMesh_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIUtility.IsAboveNavMesh
// [0x00020401]  (iNative[34642])
struct UGearboxAIUtility_execIsAboveNavMesh_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIUtility.ClearNavMeshInfo
// [0x00020401]  (iNative[32756])
struct UGearboxAIUtility_execClearNavMeshInfo_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAIUtility.UnregisterAIComponent
// [0x00020401]  (iNative[36601])
struct UGearboxAIUtility_execUnregisterAIComponent_Params
{
	class UAIComponent*                                InAIComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.GearboxAIUtility.RegisterAIComponent
// [0x00020401]  (iNative[35630])
struct UGearboxAIUtility_execRegisterAIComponent_Params
{
	class UAIComponent*                                InAIComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.GearboxAIUtility.IsRegisteredObstacle
// [0x00020401]  (iNative[34688])
struct UGearboxAIUtility_execIsRegisteredObstacle_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAIUtility.UnRegisterObstacle
// [0x00020401]  (iNative[36605])
struct UGearboxAIUtility_execUnRegisterObstacle_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAIUtility.RegisterObstacle
// [0x00020401]  (iNative[35640])
struct UGearboxAIUtility_execRegisterObstacle_Params
{
	class AActor*                                      Obstacle;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAnimNodeAimOffset.GetPivotPoint
// [0x00420400]  (iNative[34177])
struct UGearboxAnimNodeAimOffset_execGetPivotPoint_Params
{
	struct FVector                                     PivotPoint;                                       		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimNodeAimOffset.CalcAim
// [0x00020400]  (iNative[32644])
struct UGearboxAnimNodeAimOffset_execCalcAim_Params
{
	struct FVector2D                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.Direction
// [0x0002A401]  (iNative[16130])
struct UGearboxBehaviorFunctionLibrary_execDirection_Params
{
	struct FVector                                     A;                                                		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.WorldToLocalVector
// [0x0002A401]  (iNative[36755])
struct UGearboxBehaviorFunctionLibrary_execWorldToLocalVector_Params
{
	struct FVector                                     WorldDir;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Forward;                                          		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.ObjectListElement
// [0x0042A401]  (iNative[35236])
struct UGearboxBehaviorFunctionLibrary_execObjectListElement_Params
{
	class TArray<class UObject*>                       List;                                             		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.GetScale3D
// [0x0002A401]  (iNative[34199])
struct UGearboxBehaviorFunctionLibrary_execGetScale3D_Params
{
	class UObject*                                     A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.GetScale
// [0x0002A401]  (iNative[34198])
struct UGearboxBehaviorFunctionLibrary_execGetScale_Params
{
	class UObject*                                     A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.SortDistance
// [0x0042A401]  (iNative[36052])
struct UGearboxBehaviorFunctionLibrary_execSortDistance_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.Nearest
// [0x0042A401]  (iNative[35076])
struct UGearboxBehaviorFunctionLibrary_execNearest_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.Farthest
// [0x0042A401]  (iNative[33798])
struct UGearboxBehaviorFunctionLibrary_execFarthest_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.NearFilter
// [0x0042A401]  (iNative[35080])
struct UGearboxBehaviorFunctionLibrary_execNearFilter_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Distance;                                         		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.FarFilter
// [0x0042A401]  (iNative[33797])
struct UGearboxBehaviorFunctionLibrary_execFarFilter_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Distance;                                         		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllegianceFilter
// [0x0042A401]  (iNative[17202])
struct UGearboxBehaviorFunctionLibrary_execAllegianceFilter_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UObject*                                     AllegianceInfo;                                   		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.DamageableFilter
// [0x0042A401]  (iNative[32990])
struct UGearboxBehaviorFunctionLibrary_execDamageableFilter_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.FriendlyFilter
// [0x0042A401]  (iNative[33920])
struct UGearboxBehaviorFunctionLibrary_execFriendlyFilter_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UObject*                                     AllegianceInfo;                                   		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.EnemyFilter
// [0x0042A401]  (iNative[33571])
struct UGearboxBehaviorFunctionLibrary_execEnemyFilter_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UObject*                                     AllegianceInfo;                                   		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.ItemFilter
// [0x0042A401]  (iNative[34702])
struct UGearboxBehaviorFunctionLibrary_execItemFilter_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.ProjectileFilter
// [0x0042A401]  (iNative[35559])
struct UGearboxBehaviorFunctionLibrary_execProjectileFilter_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.PlayerFilter
// [0x0042A401]  (iNative[35455])
struct UGearboxBehaviorFunctionLibrary_execPlayerFilter_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IsPlayer
// [0x0002A401]  (iNative[34679])
struct UGearboxBehaviorFunctionLibrary_execIsPlayer_Params
{
	class UObject*                                     A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllDiff_Vect
// [0x0042A401]  (iNative[31840])
struct UGearboxBehaviorFunctionLibrary_execAllDiff_Vect_Params
{
	class TArray<struct FVector>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllSame_Vect
// [0x0042A401]  (iNative[31856])
struct UGearboxBehaviorFunctionLibrary_execAllSame_Vect_Params
{
	class TArray<struct FVector>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllDiff_Float
// [0x0042A401]  (iNative[31837])
struct UGearboxBehaviorFunctionLibrary_execAllDiff_Float_Params
{
	class TArray<float>                                A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllSame_Float
// [0x0042A401]  (iNative[31853])
struct UGearboxBehaviorFunctionLibrary_execAllSame_Float_Params
{
	class TArray<float>                                A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllDiff_Int
// [0x0042A401]  (iNative[31838])
struct UGearboxBehaviorFunctionLibrary_execAllDiff_Int_Params
{
	class TArray<int32_t>                              A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllSame_Int
// [0x0042A401]  (iNative[31854])
struct UGearboxBehaviorFunctionLibrary_execAllSame_Int_Params
{
	class TArray<int32_t>                              A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllDiff_Object
// [0x0042A401]  (iNative[31839])
struct UGearboxBehaviorFunctionLibrary_execAllDiff_Object_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllSame_Object
// [0x0042A401]  (iNative[31855])
struct UGearboxBehaviorFunctionLibrary_execAllSame_Object_Params
{
	class TArray<class UObject*>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllDiff_Bool
// [0x0042A401]  (iNative[31836])
struct UGearboxBehaviorFunctionLibrary_execAllDiff_Bool_Params
{
	class TArray<bool>                                 A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllSame_Bool
// [0x0042A401]  (iNative[31852])
struct UGearboxBehaviorFunctionLibrary_execAllSame_Bool_Params
{
	class TArray<bool>                                 A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AnyFalse
// [0x0042A401]  (iNative[31887])
struct UGearboxBehaviorFunctionLibrary_execAnyFalse_Params
{
	class TArray<bool>                                 A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AnyTrue
// [0x0042A401]  (iNative[31888])
struct UGearboxBehaviorFunctionLibrary_execAnyTrue_Params
{
	class TArray<bool>                                 A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllFalse
// [0x0042A401]  (iNative[31845])
struct UGearboxBehaviorFunctionLibrary_execAllFalse_Params
{
	class TArray<bool>                                 A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.AllTrue
// [0x0042A401]  (iNative[31859])
struct UGearboxBehaviorFunctionLibrary_execAllTrue_Params
{
	class TArray<bool>                                 A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.BoolToIntGBX
// [0x0002A401]  (iNative[32366])
struct UGearboxBehaviorFunctionLibrary_execBoolToIntGBX_Params
{
	uint32_t                                           A : 1;                                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IntToFloatGBX
// [0x0002A401]  (iNative[34632])
struct UGearboxBehaviorFunctionLibrary_execIntToFloatGBX_Params
{
	int32_t                                            A;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.BoolToFloatGBX
// [0x0002A401]  (iNative[32365])
struct UGearboxBehaviorFunctionLibrary_execBoolToFloatGBX_Params
{
	uint32_t                                           A : 1;                                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.ProductVector
// [0x0042A401]  (iNative[35558])
struct UGearboxBehaviorFunctionLibrary_execProductVector_Params
{
	class TArray<struct FVector>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.ProductInt
// [0x0042A401]  (iNative[35557])
struct UGearboxBehaviorFunctionLibrary_execProductInt_Params
{
	class TArray<int32_t>                              A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.ProductFloat
// [0x0042A401]  (iNative[35556])
struct UGearboxBehaviorFunctionLibrary_execProductFloat_Params
{
	class TArray<float>                                A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.SumFloat
// [0x0042A401]  (iNative[36341])
struct UGearboxBehaviorFunctionLibrary_execSumFloat_Params
{
	class TArray<float>                                A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.SumInt
// [0x0042A401]  (iNative[36342])
struct UGearboxBehaviorFunctionLibrary_execSumInt_Params
{
	class TArray<int32_t>                              A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.SumVector
// [0x0042A401]  (iNative[36344])
struct UGearboxBehaviorFunctionLibrary_execSumVector_Params
{
	class TArray<struct FVector>                       A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FVector                                     ReturnValue;                                      		// 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.MakeVector3
// [0x0002A401]  (iNative[34875])
struct UGearboxBehaviorFunctionLibrary_execMakeVector3_Params
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.MakeVector1
// [0x0002A401]  (iNative[34874])
struct UGearboxBehaviorFunctionLibrary_execMakeVector1_Params
{
	float                                              XYZ;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.FltMultiMax
// [0x0042A401]  (iNative[33876])
struct UGearboxBehaviorFunctionLibrary_execFltMultiMax_Params
{
	class TArray<float>                                Options;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.FltMultiMin
// [0x0042A401]  (iNative[33877])
struct UGearboxBehaviorFunctionLibrary_execFltMultiMin_Params
{
	class TArray<float>                                Options;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IntMultiMax
// [0x0042A401]  (iNative[34627])
struct UGearboxBehaviorFunctionLibrary_execIntMultiMax_Params
{
	class TArray<int32_t>                              Options;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IntMultiMin
// [0x0042A401]  (iNative[34628])
struct UGearboxBehaviorFunctionLibrary_execIntMultiMin_Params
{
	class TArray<int32_t>                              Options;                                          		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.VectorZ
// [0x0002A401]  (iNative[36682])
struct UGearboxBehaviorFunctionLibrary_execVectorZ_Params
{
	struct FVector                                     A;                                                		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.VectorY
// [0x0002A401]  (iNative[36681])
struct UGearboxBehaviorFunctionLibrary_execVectorY_Params
{
	struct FVector                                     A;                                                		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.VectorX
// [0x0002A401]  (iNative[36680])
struct UGearboxBehaviorFunctionLibrary_execVectorX_Params
{
	struct FVector                                     A;                                                		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IntRand
// [0x0002A401]  (iNative[34631])
struct UGearboxBehaviorFunctionLibrary_execIntRand_Params
{
	int32_t                                            Min;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Max;                                              		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IntAvg
// [0x0042A401]  (iNative[34582])
struct UGearboxBehaviorFunctionLibrary_execIntAvg_Params
{
	class TArray<int32_t>                              A;                                                		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IntPow
// [0x0002A401]  (iNative[34630])
struct UGearboxBehaviorFunctionLibrary_execIntPow_Params
{
	int32_t                                            Value;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Exponent;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IWithinRange
// [0x0002A401]  (iNative[34707])
struct UGearboxBehaviorFunctionLibrary_execIWithinRange_Params
{
	int32_t                                            A;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Min;                                              		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Max;                                              		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.FWithinRange
// [0x0002A401]  (iNative[33940])
struct UGearboxBehaviorFunctionLibrary_execFWithinRange_Params
{
	float                                              A;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Min;                                              		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Max;                                              		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.FilterSanitize_Object
// [0x0042A401]  (iNative[33808])
struct UGearboxBehaviorFunctionLibrary_execFilterSanitize_Object_Params
{
	class TArray<class UObject*>                       Objs;                                             		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<class UObject*>                       ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.GetOwner
// [0x0002A401]  (iNative[34163])
struct UGearboxBehaviorFunctionLibrary_execGetOwner_Params
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.GetAttachedActors
// [0x0002A401]  (iNative[34045])
struct UGearboxBehaviorFunctionLibrary_execGetAttachedActors_Params
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class AActor*>                        ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.SetBase
// [0x0002A401]  (iNative[28720])
struct UGearboxBehaviorFunctionLibrary_execSetBase_Params
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      Input;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.GetBase
// [0x0002A401]  (iNative[34049])
struct UGearboxBehaviorFunctionLibrary_execGetBase_Params
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IntNonzero
// [0x0002A401]  (iNative[34629])
struct UGearboxBehaviorFunctionLibrary_execIntNonzero_Params
{
	int32_t                                            A;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IntZero
// [0x0002A401]  (iNative[34633])
struct UGearboxBehaviorFunctionLibrary_execIntZero_Params
{
	int32_t                                            A;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IsInvalid
// [0x0002A401]  (iNative[34672])
struct UGearboxBehaviorFunctionLibrary_execIsInvalid_Params
{
	class UObject*                                     A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IsValid
// [0x0002A401]  (iNative[16322])
struct UGearboxBehaviorFunctionLibrary_execIsValid_Params
{
	class UObject*                                     A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.IsNearby
// [0x0002A401]  (iNative[34674])
struct UGearboxBehaviorFunctionLibrary_execIsNearby_Params
{
	struct FVector                                     A;                                                		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Dist;                                             		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.Distance
// [0x0002A401]  (iNative[21851])
struct UGearboxBehaviorFunctionLibrary_execDistance_Params
{
	struct FVector                                     A;                                                		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.ActorPointDistance
// [0x0002A401]  (iNative[31653])
struct UGearboxBehaviorFunctionLibrary_execActorPointDistance_Params
{
	class UObject*                                     A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.ActorDistance
// [0x0002A401]  (iNative[31648])
struct UGearboxBehaviorFunctionLibrary_execActorDistance_Params
{
	class UObject*                                     A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     B;                                                		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxBehaviorFunctionLibrary.ActorNearby
// [0x0002A401]  (iNative[31652])
struct UGearboxBehaviorFunctionLibrary_execActorNearby_Params
{
	class UObject*                                     A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     B;                                                		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Dist;                                             		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.LookAt
// [0xFFFF0000010205C0]  (iNative[14838])
struct AGearboxPlayerController_execLookAt_Params
{
	struct FVector                                     LookAtLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPlayerController.ShowSparkID
// [0x12020200] 
struct AGearboxPlayerController_execShowSparkID_Params
{
};

// Function GearboxFramework.GearboxPlayerController.ShouldCheckRemoteControlCheckbox
// [0x00024400]  (iNative[29068])
struct AGearboxPlayerController_execShouldCheckRemoteControlCheckbox_Params
{
	uint8_t                                            CheckBoxName;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class AHUD*                                        HUD;                                              		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.DisplayDebugSpark
// [0x00420400]  (iNative[33268])
struct AGearboxPlayerController_execDisplayDebugSpark_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GearboxPlayerController.DisplayDebug
// [0x12420100] 
struct AGearboxPlayerController_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GearboxPlayerController.AITree
// [0x12020200] 
struct AGearboxPlayerController_execAITree_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleLineOfSight
// [0x00020601]  (iNative[31813])
struct AGearboxPlayerController_execAIToggleLineOfSight_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleAwareness
// [0x12020200] 
struct AGearboxPlayerController_execAIToggleAwareness_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AITogglePaths
// [0x12020200] 
struct AGearboxPlayerController_execAITogglePaths_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleTargetViewCones
// [0x12020200] 
struct AGearboxPlayerController_execAIToggleTargetViewCones_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleCombat
// [0x12020200] 
struct AGearboxPlayerController_execAIToggleCombat_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIToggleFlags
// [0x12020200] 
struct AGearboxPlayerController_execAIToggleFlags_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIDebugNextSnapshot
// [0x12020200] 
struct AGearboxPlayerController_execAIDebugNextSnapshot_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIDebugPrevSnapshot
// [0x12020200] 
struct AGearboxPlayerController_execAIDebugPrevSnapshot_Params
{
};

// Function GearboxFramework.GearboxPlayerController.ainext
// [0x12020200] 
struct AGearboxPlayerController_execainext_Params
{
};

// Function GearboxFramework.GearboxPlayerController.aiprev
// [0x12020200] 
struct AGearboxPlayerController_execaiprev_Params
{
};

// Function GearboxFramework.GearboxPlayerController.AIDebugSetPawn
// [0x12020000] 
struct AGearboxPlayerController_execAIDebugSetPawn_Params
{
	class AGearboxPawn*                                NewPawn;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPlayerController.AIDebugSetPawnByName
// [0x12020200] 
struct AGearboxPlayerController_execAIDebugSetPawnByName_Params
{
	struct FName                                       NewPawnName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPlayerController.debugpawn
// [0x12020200] 
struct AGearboxPlayerController_execdebugpawn_Params
{
};

// Function GearboxFramework.GearboxPlayerController.aisetp
// [0x12020200] 
struct AGearboxPlayerController_execaisetp_Params
{
	struct FName                                       NewPawnName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPlayerController.PawnDied
// [0x16020000] 
struct AGearboxPlayerController_execPawnDied_Params
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPlayerController.NotifyGameUnPaused
// [0x12020000] 
struct AGearboxPlayerController_execNotifyGameUnPaused_Params
{
};

// Function GearboxFramework.GearboxPlayerController.NotifyGamePaused
// [0x12020000] 
struct AGearboxPlayerController_execNotifyGamePaused_Params
{
};

// Function GearboxFramework.GearboxPlayerController.GetMyUserId
// [0x00020400]  (iNative[34135])
struct AGearboxPlayerController_execGetMyUserId_Params
{
	struct FPlatformUserId                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.ClientKeepPlayingLoadingMovie
// [0xFFFF0000130209C0] 
struct AGearboxPlayerController_eventClientKeepPlayingLoadingMovie_Params
{
};

// Function GearboxFramework.GearboxPlayerController.SpawnPlayerCamera
// [0x12020800] 
struct AGearboxPlayerController_eventSpawnPlayerCamera_Params
{
};

// Function GearboxFramework.GearboxPlayerController.InitInputSystem
// [0x12020800] 
struct AGearboxPlayerController_eventInitInputSystem_Params
{
};

// Function GearboxFramework.GearboxPlayerController.NoTargetAll
// [0x12030200] 
struct AGearboxPlayerController_execNoTargetAll_Params
{
};

// Function GearboxFramework.GearboxPlayerController.NoTarget
// [0x12020200] 
struct AGearboxPlayerController_execNoTarget_Params
{
};

// Function GearboxFramework.GearboxPlayerController.Possess
// [0x12020000] 
struct AGearboxPlayerController_execPossess_Params
{
	class APawn*                                       aPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxPlayerController.DontTarget
// [0x12020200] 
struct AGearboxPlayerController_execDontTarget_Params
{
	uint32_t                                           bModeFlag : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxPlayerController.ClientConsoleCommand
// [0xFFFF0000130201C0] 
struct AGearboxPlayerController_execClientConsoleCommand_Params
{
	class FString                                      Command;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxPlayerController.IsPlayerAllowingActiveMoment
// [0x12020000] 
struct AGearboxPlayerController_execIsPlayerAllowingActiveMoment_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.IsActiveMomentRunning
// [0x12020000] 
struct AGearboxPlayerController_execIsActiveMomentRunning_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.UpdateViewLeadingDelta
// [0x00420400]  (iNative[36624])
struct AGearboxPlayerController_execUpdateViewLeadingDelta_Params
{
	struct FVector                                     CameraTranslation;                                		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FQuat                                       CameraRotation;                                   		// 0x0010 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GearboxPlayerController.UpdateViewModelTransform
// [0x00420400]  (iNative[36625])
struct AGearboxPlayerController_execUpdateViewModelTransform_Params
{
	struct FVector                                     ViewModelLocation;                                		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FQuat                                       ViewModelRotation;                                		// 0x0010 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPlayerController.StopViewShaking
// [0x00020400]  (iNative[36310])
struct AGearboxPlayerController_execStopViewShaking_Params
{
};

// Function GearboxFramework.GearboxPlayerController.OnCameraShake
// [0x12020002] 
struct AGearboxPlayerController_execOnCameraShake_Params
{
	class UGearboxSeqAct_CameraShake*                  ShakeAction;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPlayerController.ShakeView
// [0x00020400]  (iNative[35945])
struct AGearboxPlayerController_execShakeView_Params
{
	struct FGearboxViewShakeInfo                       NewViewShake;                                     		// 0x0000 (0x0044) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPlayerController.ClientDamageShake
// [0xFFFF0000130201C0] 
struct AGearboxPlayerController_execClientDamageShake_Params
{
	int32_t                                            Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPlayerController.ConsoleEcho
// [0x12024000] 
struct AGearboxPlayerController_execConsoleEcho_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bLogOutput : 1;                                   		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxPlayerController.Initialize
// [0x12020100] 
struct AGearboxPlayerController_execInitialize_Params
{
};

// Function GearboxFramework.GearboxPlayerController.PostBeginPlay
// [0x12020100] 
struct AGearboxPlayerController_execPostBeginPlay_Params
{
};

// Function GearboxFramework.GearboxPlayerController.GenerateNewSessionGuid
// [0x00080401]  (iNative[34010])
struct AGearboxPlayerController_execGenerateNewSessionGuid_Params
{
};

// Function GearboxFramework.GearboxPlayerController.RemoveAudioEffect
// [0xFFFF0000002204C0]  (iNative[14856])
struct AGearboxPlayerController_execRemoveAudioEffect_Params
{
	struct FEnvironmentalEffectInfo                    EffectInfo;                                       		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPlayerController.ApplyAudioEffect
// [0xFFFF0000002204C0]  (iNative[14801])
struct AGearboxPlayerController_execApplyAudioEffect_Params
{
	struct FEnvironmentalEffectInfo                    EffectInfo;                                       		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxCheatManager.AIHoldTypes
// [0x12020200] 
struct UGearboxCheatManager_execAIHoldTypes_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIHoldReleaseAll
// [0x12024200] 
struct UGearboxCheatManager_execAIHoldReleaseAll_Params
{
	struct FName                                       HoldType;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Reason;                                           		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCheatManager.AIHoldAll
// [0x12024200] 
struct UGearboxCheatManager_execAIHoldAll_Params
{
	struct FName                                       HoldType;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Reason;                                           		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCheatManager.AIHoldRelease
// [0x12024200] 
struct UGearboxCheatManager_execAIHoldRelease_Params
{
	struct FName                                       HoldType;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Reason;                                           		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCheatManager.AIHold
// [0x12024200] 
struct UGearboxCheatManager_execAIHold_Params
{
	struct FName                                       HoldType;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Reason;                                           		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCheatManager.AIOpenAITree
// [0x12020200] 
struct UGearboxCheatManager_execAIOpenAITree_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIOpenAIDef
// [0x12020200] 
struct UGearboxCheatManager_execAIOpenAIDef_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIOpenTargetingDef
// [0x12020200] 
struct UGearboxCheatManager_execAIOpenTargetingDef_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIOpenBalanceDef
// [0x12020200] 
struct UGearboxCheatManager_execAIOpenBalanceDef_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIOpenSpawnDef
// [0x12020200] 
struct UGearboxCheatManager_execAIOpenSpawnDef_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIOpenPawnDef
// [0x12020200] 
struct UGearboxCheatManager_execAIOpenPawnDef_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AISyncAIDef
// [0x12020200] 
struct UGearboxCheatManager_execAISyncAIDef_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AISyncTargetingDef
// [0x12020200] 
struct UGearboxCheatManager_execAISyncTargetingDef_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AISyncBalanceDef
// [0x12020200] 
struct UGearboxCheatManager_execAISyncBalanceDef_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AISyncSpawnDef
// [0x12020200] 
struct UGearboxCheatManager_execAISyncSpawnDef_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AISyncPawnDef
// [0x12020200] 
struct UGearboxCheatManager_execAISyncPawnDef_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIShowActions
// [0x12020200] 
struct UGearboxCheatManager_execAIShowActions_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AISetDisabledActions
// [0x12024200] 
struct UGearboxCheatManager_execAISetDisabledActions_Params
{
	class FString                                      ActionTagNames;                                   		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxCheatManager.AISetEnabledActions
// [0x12024200] 
struct UGearboxCheatManager_execAISetEnabledActions_Params
{
	class FString                                      ActionTagNames;                                   		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxCheatManager.AIDisableActions
// [0x12024200] 
struct UGearboxCheatManager_execAIDisableActions_Params
{
	class FString                                      ActionTagNames;                                   		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxCheatManager.AIEnableActions
// [0x12024200] 
struct UGearboxCheatManager_execAIEnableActions_Params
{
	class FString                                      ActionTagNames;                                   		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxCheatManager.DebugAIBreadCrumbs
// [0x00020600]  (iNative[33031])
struct UGearboxCheatManager_execDebugAIBreadCrumbs_Params
{
};

// Function GearboxFramework.GearboxCheatManager.DebugAwareness
// [0x00020600]  (iNative[33041])
struct UGearboxCheatManager_execDebugAwareness_Params
{
};

// Function GearboxFramework.GearboxCheatManager.ToggleAISight
// [0x00020600]  (iNative[36522])
struct UGearboxCheatManager_execToggleAISight_Params
{
};

// Function GearboxFramework.GearboxCheatManager.YUNoCover
// [0x00020600]  (iNative[36758])
struct UGearboxCheatManager_execYUNoCover_Params
{
};

// Function GearboxFramework.GearboxCheatManager.YUNoPerch
// [0x00024600]  (iNative[36759])
struct UGearboxCheatManager_execYUNoPerch_Params
{
	float                                              CheckRadius;                                      		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCheatManager.ResetFeatureClass
// [0x00020600]  (iNative[35717])
struct UGearboxCheatManager_execResetFeatureClass_Params
{
	class UClass*                                      FeatureClass;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxCheatManager.DebugTargetClusters
// [0x00024600]  (iNative[33075])
struct UGearboxCheatManager_execDebugTargetClusters_Params
{
	struct FName                                       ClusterName;                                      		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCheatManager.DebugTerritory
// [0x00020600]  (iNative[33076])
struct UGearboxCheatManager_execDebugTerritory_Params
{
};

// Function GearboxFramework.GearboxCheatManager.PrintGameObjectPools
// [0x00020600]  (iNative[35539])
struct UGearboxCheatManager_execPrintGameObjectPools_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIScriptedTarget
// [0x00020600]  (iNative[31790])
struct UGearboxCheatManager_execAIScriptedTarget_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIScriptedLook
// [0x00020600]  (iNative[31788])
struct UGearboxCheatManager_execAIScriptedLook_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIScriptedMove
// [0x00020600]  (iNative[31789])
struct UGearboxCheatManager_execAIScriptedMove_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIScriptedClear
// [0x00020600]  (iNative[31787])
struct UGearboxCheatManager_execAIScriptedClear_Params
{
};

// Function GearboxFramework.GearboxCheatManager.SpecialMoveSetTime
// [0x00020600]  (iNative[36181])
struct UGearboxCheatManager_execSpecialMoveSetTime_Params
{
	float                                              NewTime;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxCheatManager.AIClearInfluenceMaps
// [0x12020200] 
struct UGearboxCheatManager_execAIClearInfluenceMaps_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIUpdateWhilePaused
// [0x12024200] 
struct UGearboxCheatManager_execAIUpdateWhilePaused_Params
{
	int32_t                                            TickCount;                                        		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxCheatManager.GbxAnimDebug
// [0x12020200] 
struct UGearboxCheatManager_execGbxAnimDebug_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIConstraintClear
// [0x12020200] 
struct UGearboxCheatManager_execAIConstraintClear_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIConstraintCurr
// [0x12020200] 
struct UGearboxCheatManager_execAIConstraintCurr_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIConstraintPrev
// [0x12020200] 
struct UGearboxCheatManager_execAIConstraintPrev_Params
{
};

// Function GearboxFramework.GearboxCheatManager.AIConstraintNext
// [0x12020200] 
struct UGearboxCheatManager_execAIConstraintNext_Params
{
};

// Function GearboxFramework.GearboxCheatManager.DebugArcLOS
// [0x12020200] 
struct UGearboxCheatManager_execDebugArcLOS_Params
{
};

// Function GearboxFramework.GearboxCheatManager.DebugHumanRotation
// [0x12020200] 
struct UGearboxCheatManager_execDebugHumanRotation_Params
{
};

// Function GearboxFramework.GearboxCheatManager.DebugAIRotation
// [0x12020200] 
struct UGearboxCheatManager_execDebugAIRotation_Params
{
};

// Function GearboxFramework.GearboxCheatManager.DebugForceUncloak
// [0x12020200] 
struct UGearboxCheatManager_execDebugForceUncloak_Params
{
};

// Function GearboxFramework.GearboxCheatManager.DebugForceCloak
// [0x12020200] 
struct UGearboxCheatManager_execDebugForceCloak_Params
{
};

// Function GearboxFramework.GearboxData.HasValidShiftAccount
// [0x12020800] 
struct UGearboxData_eventHasValidShiftAccount_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxData.ProcessArchwayVerification
// [0x12420000] 
struct UGearboxData_execProcessArchwayVerification_Params
{
	struct FArchwayResult                              Archway;                                          		// 0x0000 (0x00E0) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxData.CanGetTicket
// [0x12020000] 
struct UGearboxData_execCanGetTicket_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxData.EscapeJson
// [0x12022000] 
struct UGearboxData_execEscapeJson_Params
{
	class FString                                      Input;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxData.ReplaceServices
// [0x00420400]  (iNative[35686])
struct UGearboxData_execReplaceServices_Params
{
	class TArray<struct FServiceResult>                NewServices;                                      		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxData.GetService
// [0x12020800] 
struct UGearboxData_eventGetService_Params
{
	struct FName                                       ServiceName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxData.Clear
// [0x12020000] 
struct UGearboxData_execClear_Params
{
};

// Function GearboxFramework.GearboxAccountData.HandleQueueStatusResponse
// [0x00420402]  (iNative[2428])
struct UGearboxAccountData_execHandleQueueStatusResponse_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.HasValidShiftAccount
// [0x12020800] 
struct UGearboxAccountData_eventHasValidShiftAccount_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.ProcessArchwayVerification
// [0x12420000] 
struct UGearboxAccountData_execProcessArchwayVerification_Params
{
	struct FArchwayResult                              Archway;                                          		// 0x0000 (0x00E0) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.GetPlatformTicket
// [0x12020000] 
struct UGearboxAccountData_execGetPlatformTicket_Params
{
	struct FScriptDelegate                             GetPlatformTicketCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.CanGetTicket
// [0x12020000] 
struct UGearboxAccountData_execCanGetTicket_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.EstablishPlatformId
// [0x12020000] 
struct UGearboxAccountData_execEstablishPlatformId_Params
{
	struct FPlatformUserId                             NewUserId;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAccountData.HandleOffersNotifiedResponse
// [0x12420002] 
struct UGearboxAccountData_execHandleOffersNotifiedResponse_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.HandleBulkEntitlementsConsumedResponse
// [0x12420002] 
struct UGearboxAccountData_execHandleBulkEntitlementsConsumedResponse_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.HandleEntitlementConsumedResponse
// [0x12420002] 
struct UGearboxAccountData_execHandleEntitlementConsumedResponse_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.HandleCodeRedeemedResponse
// [0x12420002] 
struct UGearboxAccountData_execHandleCodeRedeemedResponse_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.HandleResetPasswordResponse
// [0x12420002] 
struct UGearboxAccountData_execHandleResetPasswordResponse_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.HandleSignUpResponse
// [0x12420002] 
struct UGearboxAccountData_execHandleSignUpResponse_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.HandleSignInResponse
// [0x12420002] 
struct UGearboxAccountData_execHandleSignInResponse_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.MarkOffersNotified
// [0x12020000] 
struct UGearboxAccountData_execMarkOffersNotified_Params
{
};

// Function GearboxFramework.GearboxAccountData.LocallyConsumeEntitlementWithCount
// [0x12020000] 
struct UGearboxAccountData_execLocallyConsumeEntitlementWithCount_Params
{
	struct FName                                       EntitlementName;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumToConsume;                                     		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.ConsumeEntitlementsWithCounts
// [0x12020800] 
struct UGearboxAccountData_eventConsumeEntitlementsWithCounts_Params
{
	class TArray<class UGearboxAccountEntitlement*>    EntitlementsToConsume;                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<int32_t>                              Counts;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             EntitlementConsumedDelegate;                      		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.ConsumeEntitlementWithCount
// [0x12020000] 
struct UGearboxAccountData_execConsumeEntitlementWithCount_Params
{
	struct FName                                       EntitlementName;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Count;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             EntitlementConsumedDelegate;                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.RedeemCode
// [0x12020000] 
struct UGearboxAccountData_execRedeemCode_Params
{
	class FString                                      Code;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             CodeRedeemedDelegate;                             		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.ResetPasswordGearboxAccount
// [0x12020000] 
struct UGearboxAccountData_execResetPasswordGearboxAccount_Params
{
	class FString                                      Email;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             ResetPasswordDelegate;                            		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.SignUpGearboxAccount
// [0x12020000] 
struct UGearboxAccountData_execSignUpGearboxAccount_Params
{
	class FString                                      Email;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PasswordConfirm;                                  		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      AgeString;                                        		// 0x0030 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SignUpDelegate;                                   		// 0x0040 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.SignInGearboxAccount
// [0x12020000] 
struct UGearboxAccountData_execSignInGearboxAccount_Params
{
	class FString                                      Email;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SignInDelegate;                                   		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.OnEntitlementConsumed
// [0x00120000] 
struct UGearboxAccountData_execOnEntitlementConsumed_Params
{
	uint8_t                                            ConsumeResult;                                    		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAccountData.OnCodeRedeemed
// [0x00120000] 
struct UGearboxAccountData_execOnCodeRedeemed_Params
{
	uint8_t                                            RedeemResult;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAccountData.OnResetPasswordGearboxAccount
// [0x00120000] 
struct UGearboxAccountData_execOnResetPasswordGearboxAccount_Params
{
	uint8_t                                            ResetResult;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAccountData.OnSignUpGearboxAccount
// [0x00120000] 
struct UGearboxAccountData_execOnSignUpGearboxAccount_Params
{
	uint8_t                                            SignUpResult;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAccountData.OnSignInGearboxAccount
// [0x00120000] 
struct UGearboxAccountData_execOnSignInGearboxAccount_Params
{
	uint8_t                                            SignInResult;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAccountData.CountEntitlement
// [0x12024000] 
struct UGearboxAccountData_execCountEntitlement_Params
{
	struct FName                                       EntitlementName;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIgnoreLocallyConsumed : 1;                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.LocalMarkOffersNotified
// [0x12040001] 
struct UGearboxAccountData_execLocalMarkOffersNotified_Params
{
};

// Function GearboxFramework.GearboxAccountData.GetUnnotifiedOffers
// [0x12020000] 
struct UGearboxAccountData_execGetUnnotifiedOffers_Params
{
	class TArray<class UGearboxAccountOffer*>          ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.GetEntitlementWithName
// [0x12020000] 
struct UGearboxAccountData_execGetEntitlementWithName_Params
{
	struct FName                                       EntitlementName;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGearboxAccountEntitlement*                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.GetEntitlementWithId
// [0x12020000] 
struct UGearboxAccountData_execGetEntitlementWithId_Params
{
	int32_t                                            Id;                                               		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGearboxAccountEntitlement*                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.HasEntitlement
// [0x12024000] 
struct UGearboxAccountData_execHasEntitlement_Params
{
	struct FName                                       EntitlementName;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIgnoreLocallyConsumed : 1;                       		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.RemoveEntitlement
// [0x12020000] 
struct UGearboxAccountData_execRemoveEntitlement_Params
{
	class UGearboxAccountEntitlement*                  Entitlement;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAccountData.ReplaceEntitlements
// [0x12420000] 
struct UGearboxAccountData_execReplaceEntitlements_Params
{
	class TArray<struct FEntitlementResult>            NewEntitlements;                                  		// 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<struct FOfferResult>                  NewOffers;                                        		// 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.HandleReloadEntitlementsResponse
// [0x12420002] 
struct UGearboxAccountData_execHandleReloadEntitlementsResponse_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.ReloadEntitlements
// [0x12020000] 
struct UGearboxAccountData_execReloadEntitlements_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.ResetEntitlementUpdateTimer
// [0x00020401]  (iNative[35716])
struct UGearboxAccountData_execResetEntitlementUpdateTimer_Params
{
};

// Function GearboxFramework.GearboxAccountData.CanReloadEntitlements
// [0x00020401]  (iNative[32680])
struct UGearboxAccountData_execCanReloadEntitlements_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAccountData.TriggerEntitlementsUpdatedDelegates
// [0x12020000] 
struct UGearboxAccountData_execTriggerEntitlementsUpdatedDelegates_Params
{
};

// Function GearboxFramework.GearboxAccountData.ClearEntitlementsUpdatedDelegate
// [0x12020000] 
struct UGearboxAccountData_execClearEntitlementsUpdatedDelegate_Params
{
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.AddEntitlementsUpdatedDelegate
// [0x12020000] 
struct UGearboxAccountData_execAddEntitlementsUpdatedDelegate_Params
{
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxAccountData.Clear
// [0x12020000] 
struct UGearboxAccountData_execClear_Params
{
};

// Function GearboxFramework.GearboxServerData.ProcessArchwayVerification
// [0x12420000] 
struct UGearboxServerData_execProcessArchwayVerification_Params
{
	struct FArchwayResult                              Archway;                                          		// 0x0000 (0x00E0) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxServerData.GetServerTicket
// [0x12020000] 
struct UGearboxServerData_execGetServerTicket_Params
{
	struct FScriptDelegate                             GetServerTicketCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxServerData.CanGetTicket
// [0x12020000] 
struct UGearboxServerData_execCanGetTicket_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxEditorNode.IsChild
// [0x00020400]  (iNative[34651])
struct UGearboxEditorNode_execIsChild_Params
{
	class UGearboxEditorNode*                          TestNode;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.ExpandableListReacteSelected
// [0x00120000] 
struct UGearboxExpandableListGFxObject_execExpandableListReacteSelected_Params
{
	class TArray<class UIExpandableListEntry*>         Entries;                                          		// 0x0000 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.ExpandableListEntryFocused
// [0x00120000] 
struct UGearboxExpandableListGFxObject_execExpandableListEntryFocused_Params
{
	class UIExpandableListEntry*                       ListItem;                                         		// 0x0000 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.ExpandableListSubCategoryFocused
// [0x00120000] 
struct UGearboxExpandableListGFxObject_execExpandableListSubCategoryFocused_Params
{
	class UGearboxExpandableListSubCategory*           SubCategory;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxExpandableListGFxObject.ExpandableListCategoryFocused
// [0x00120000] 
struct UGearboxExpandableListGFxObject_execExpandableListCategoryFocused_Params
{
	class UGearboxExpandableListCategory*              Category;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxExpandableListGFxObject.UpdateListEntryDisplayInfo
// [0x00120000] 
struct UGearboxExpandableListGFxObject_execUpdateListEntryDisplayInfo_Params
{
	class UIExpandableListEntry*                       ListItem;                                         		// 0x0000 (0x0010) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.UpdateListSubCategoryDisplayInfo
// [0x00120000] 
struct UGearboxExpandableListGFxObject_execUpdateListSubCategoryDisplayInfo_Params
{
	class UGearboxExpandableListSubCategory*           SubCategory;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UIExpandableListEntry*>         Entries;                                          		// 0x0008 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.UpdateListCategoryDisplayInfo
// [0x00120000] 
struct UGearboxExpandableListGFxObject_execUpdateListCategoryDisplayInfo_Params
{
	class UGearboxExpandableListCategory*              Category;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UIExpandableListEntry*>         Entries;                                          		// 0x0008 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.extOnEntryFocused
// [0x00020402]  (iNative[2419])
struct UGearboxExpandableListGFxObject_execextOnEntryFocused_Params
{
	class FString                                      EntryName;                                        		// 0x0000 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.extOnEntrySelected
// [0x00020402]  (iNative[2420])
struct UGearboxExpandableListGFxObject_execextOnEntrySelected_Params
{
	class FString                                      EntryName;                                        		// 0x0000 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.extOnSubCategoryFocused
// [0x00020402]  (iNative[2421])
struct UGearboxExpandableListGFxObject_execextOnSubCategoryFocused_Params
{
	int32_t                                            CurItemGroup;                                     		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.extOnSubCategorySelected
// [0x00020402]  (iNative[2422])
struct UGearboxExpandableListGFxObject_execextOnSubCategorySelected_Params
{
	int32_t                                            CurItemGroup;                                     		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            CategoryDisplayIndex;                             		// 0x0004 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.extOnCategoryFocused
// [0x00020402]  (iNative[2423])
struct UGearboxExpandableListGFxObject_execextOnCategoryFocused_Params
{
	int32_t                                            CurItemGroup;                                     		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.extOnCategorySelected
// [0x00020402]  (iNative[2424])
struct UGearboxExpandableListGFxObject_execextOnCategorySelected_Params
{
	int32_t                                            CurItemGroup;                                     		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            CategoryDisplayIndex;                             		// 0x0004 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.GearboxExpandableListGFxObject.HandleInputKeyFromOwner
// [0x00020402]  (iNative[2425])
struct UGearboxExpandableListGFxObject_execHandleInputKeyFromOwner_Params
{
	struct FPlatformUserId                             InUserId;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ukey;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            uevent;                                           		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.extOnEventDispatched
// [0x00020402]  (iNative[2545])
struct UGearboxGFxMovie_execextOnEventDispatched_Params
{
	class FString                                      Path;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  EventData;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumArrayEntries;                                  		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.ForceUpdateImages
// [0x00020401]  (iNative[33901])
struct UGearboxGFxMovie_execForceUpdateImages_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.extOnClipUnloaded
// [0x12020002] 
struct UGearboxGFxMovie_execextOnClipUnloaded_Params
{
	class UGFxObject*                                  Clip;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.extOnClipLoaded
// [0x12020002] 
struct UGearboxGFxMovie_execextOnClipLoaded_Params
{
	class UGFxObject*                                  Clip;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.OnInputTypeChanged
// [0x00020402]  (iNative[2546])
struct UGearboxGFxMovie_execOnInputTypeChanged_Params
{
	uint32_t                                           bNewUsingGamepad : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxGFxMovie.HandleHintInput
// [0x00020402]  (iNative[2547])
struct UGearboxGFxMovie_execHandleHintInput_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       HintTag;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.PopulateHintBar
// [0x00020402]  (iNative[2548])
struct UGearboxGFxMovie_execPopulateHintBar_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.FilterButtonInput
// [0x12020800] 
struct UGearboxGFxMovie_eventFilterButtonInput_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.extUncacheClip
// [0x12020002] 
struct UGearboxGFxMovie_execextUncacheClip_Params
{
	class FString                                      ClassName;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Clip;                                             		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.extCacheClip
// [0x12020002] 
struct UGearboxGFxMovie_execextCacheClip_Params
{
	class FString                                      ClassName;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Clip;                                             		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.GetUCClassForASClass
// [0x00020400]  (iNative[31382])
struct UGearboxGFxMovie_execGetUCClassForASClass_Params
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.GetBehaviorConsumerHandle
// [0x00020400]  (iNative[34051])
struct UGearboxGFxMovie_execGetBehaviorConsumerHandle_Params
{
	struct FBehaviorConsumerHandle                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.OnSetViewport
// [0x12020800] 
struct UGearboxGFxMovie_eventOnSetViewport_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.extSetLanguageExt
// [0x12020002] 
struct UGearboxGFxMovie_execextSetLanguageExt_Params
{
	class FString                                      ClipPath;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.OnClosedOnDeath
// [0x12020000] 
struct UGearboxGFxMovie_execOnClosedOnDeath_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.GetStyleDebugString
// [0x12020000] 
struct UGearboxGFxMovie_execGetStyleDebugString_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.GetStateDebugString
// [0x12024000] 
struct UGearboxGFxMovie_execGetStateDebugString_Params
{
	uint32_t                                           bIncludeFlags : 1;                                		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.InitializeFrom
// [0x00020400]  (iNative[34556])
struct UGearboxGFxMovie_execInitializeFrom_Params
{
	class UGearboxGFxMovie*                            SrcMovie;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.RemoveStylesDrawnTo
// [0x00020401]  (iNative[35680])
struct UGearboxGFxMovie_execRemoveStylesDrawnTo_Params
{
	class UPrimitiveComponent*                         PrimComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	class UIGFxActorMovie*                             Target;                                           		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.RemoveStyles
// [0x00020401]  (iNative[35679])
struct UGearboxGFxMovie_execRemoveStyles_Params
{
	class UIGFxActorMovie*                             Target;                                           		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.RemoveStyle
// [0x00020401]  (iNative[35678])
struct UGearboxGFxMovie_execRemoveStyle_Params
{
	class UGFxMovieDrawStyle*                          Style;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.AddStyle
// [0x00020401]  (iNative[31682])
struct UGearboxGFxMovie_execAddStyle_Params
{
	class UGFxMovieDrawStyle*                          Style;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.ShutdownMoviePlayback
// [0x00020401]  (iNative[35963])
struct UGearboxGFxMovie_execShutdownMoviePlayback_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.InitMoviePlayback
// [0x00020401]  (iNative[34560])
struct UGearboxGFxMovie_execInitMoviePlayback_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.GetRenderTexture
// [0x00020401]  (iNative[34193])
struct UGearboxGFxMovie_execGetRenderTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_OnChanged
// [0x12020800] 
struct UGearboxGFxMovie_eventMovieState_OnChanged_Params
{
	uint32_t                                           bStateWasChanged : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_SetFromMovie
// [0x12020801] 
struct UGearboxGFxMovie_eventMovieState_SetFromMovie_Params
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Copy
// [0x00420401]  (iNative[35022])
struct UGearboxGFxMovie_execMovieState_Copy_Params
{
	struct FMovieStateStruct                           StateDst;                                         		// 0x0000 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FMovieStateStruct                           StateSrc;                                         		// 0x0020 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Compare
// [0x00420401]  (iNative[35021])
struct UGearboxGFxMovie_execMovieState_Compare_Params
{
	struct FMovieStateStruct                           S1;                                               		// 0x0000 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FMovieStateStruct                           S2;                                               		// 0x0020 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Toggle
// [0x00020401]  (iNative[35031])
struct UGearboxGFxMovie_execMovieState_Toggle_Params
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Enable
// [0x00024401]  (iNative[35024])
struct UGearboxGFxMovie_execMovieState_Enable_Params
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bEnable : 1;                                      		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_IsEnabled
// [0x00020401]  (iNative[35027])
struct UGearboxGFxMovie_execMovieState_IsEnabled_Params
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_SupportsState
// [0x00020401]  (iNative[35030])
struct UGearboxGFxMovie_execMovieState_SupportsState_Params
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Init
// [0x00020401]  (iNative[35026])
struct UGearboxGFxMovie_execMovieState_Init_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.InitFromDefinition
// [0x00020400]  (iNative[34533])
struct UGearboxGFxMovie_execInitFromDefinition_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_Apply
// [0x12022000] 
struct UGearboxGFxMovie_execMovieState_Apply_Params
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      HandlerClass;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.MovieState_ApplyState
// [0x12022000] 
struct UGearboxGFxMovie_execMovieState_ApplyState_Params
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.ApplyState
// [0x12020000] 
struct UGearboxGFxMovie_execApplyState_Params
{
	class FString                                      StateName;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      StateAction;                                      		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.SetRenderingEnabled
// [0x12020000] 
struct UGearboxGFxMovie_execSetRenderingEnabled_Params
{
	uint32_t                                           bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxGFxMovie.GotoAndStop
// [0x12020000] 
struct UGearboxGFxMovie_execGotoAndStop_Params
{
	class FString                                      FrameLabel;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.GotoAndPlay
// [0x12020000] 
struct UGearboxGFxMovie_execGotoAndPlay_Params
{
	class FString                                      FrameLabel;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.TriggerUIEvent
// [0x12020002] 
struct UGearboxGFxMovie_execTriggerUIEvent_Params
{
	class FString                                      EventString;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.PlaySpecialUISound
// [0x12020002] 
struct UGearboxGFxMovie_execPlaySpecialUISound_Params
{
	class FString                                      SoundString;                                      		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.PlayUISound
// [0x00020C00]  (iNative[14854])
struct UGearboxGFxMovie_eventPlayUISound_Params
{
	struct FName                                       UIEvent;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.SetOtherObject
// [0x12020801] 
struct UGearboxGFxMovie_eventSetOtherObject_Params
{
	class UObject*                                     Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxMovie.GetInstanceContextObject
// [0x00020400]  (iNative[34116])
struct UGearboxGFxMovie_execGetInstanceContextObject_Params
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.OnTick
// [0x12020800] 
struct UGearboxGFxMovie_eventOnTick_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.OnClose
// [0x12020800] 
struct UGearboxGFxMovie_eventOnClose_Params
{
};

// Function GearboxFramework.GearboxGFxMovie.Start
// [0x12024800] 
struct UGearboxGFxMovie_eventStart_Params
{
	uint32_t                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.ColorizeTooltipText
// [0x12024001] 
struct UGearboxGFxMovie_execColorizeTooltipText_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bDisabled : 1;                                    		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxMovie.GetLocalPlayer
// [0x00020401]  (iNative[34128])
struct UGearboxGFxMovie_execGetLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxMovie.OnClosed
// [0x00120000] 
struct UGearboxGFxMovie_execOnClosed_Params
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovie_StateParent.MovieState_OnChanged
// [0x12020000] 
struct UGFxMovie_StateParent_execMovieState_OnChanged_Params
{
	uint32_t                                           bStateWasChanged : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GFxMovie_StateParent.Start
// [0x12024800] 
struct UGFxMovie_StateParent_eventStart_Params
{
	uint32_t                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxObjectManager.RegisterRoot
// [0x00020401]  (iNative[35641])
struct UGearboxGFxObjectManager_execRegisterRoot_Params
{
	class UGFxObject*                                  Root;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxObjectManager.ApplyLayoutToAllObjects
// [0x00020401]  (iNative[31891])
struct UGearboxGFxObjectManager_execApplyLayoutToAllObjects_Params
{
};

// Function GearboxFramework.GearboxGFxObjectManager.RemoveAllObjects
// [0x00020401]  (iNative[35663])
struct UGearboxGFxObjectManager_execRemoveAllObjects_Params
{
};

// Function GearboxFramework.GearboxGFxObjectManager.RemoveObject
// [0x00020401]  (iNative[35675])
struct UGearboxGFxObjectManager_execRemoveObject_Params
{
	class UGFxObject*                                  Parent;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       InstanceName;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxObjectManager.GetObject
// [0x00020401]  (iNative[23828])
struct UGearboxGFxObjectManager_execGetObjectW_Params
{
	class UGFxObject*                                  Parent;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       InstanceName;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGFxObjectManager.GetObjects
// [0x00024401]  (iNative[34158])
struct UGearboxGFxObjectManager_execGetObjectsW_Params
{
	class UGFxMoviePlayer*                             OuterMovie;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       TagName;                                          		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class TArray<class UGFxObject*>                    ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxGFxObjectManager.OnChildLoaded
// [0x00020401]  (iNative[35270])
struct UGearboxGFxObjectManager_execOnChildLoaded_Params
{
	struct FName                                       InstanceName;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Object;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGFxObjectManager.Tick
// [0x00020401]  (iNative[317])
struct UGearboxGFxObjectManager_execTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxGlobals.DisplayDebug
// [0x12420000] 
struct UGearboxGlobals_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GearboxGlobals.GetPawnRelevanceUtility
// [0x00020401]  (iNative[34172])
struct UGearboxGlobals_execGetPawnRelevanceUtility_Params
{
	class UPawnRelevanceUtility*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetBehaviorKernel
// [0x00022401]  (iNative[34052])
struct UGearboxGlobals_execGetBehaviorKernel_Params
{
	class UBehaviorKernel*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetDialogSystem
// [0x00020401]  (iNative[34088])
struct UGearboxGlobals_execGetDialogSystem_Params
{
	class UDialogSystem*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetSpawnerResetDelay
// [0x00020400]  (iNative[34217])
struct UGearboxGlobals_execGetSpawnerResetDelay_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.NotifyActorDied
// [0x00020400]  (iNative[26522])
struct UGearboxGlobals_execNotifyActorDied_Params
{
	class AActor*                                      TheActor;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bKeepBody : 1;                                    		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxGlobals.DoesLOSIntersectSpecialOccluder
// [0x00020400]  (iNative[33300])
struct UGearboxGlobals_execDoesLOSIntersectSpecialOccluder_Params
{
	struct FVector                                     FromLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ToLoc;                                            		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UPawnAllegiance*                             AllegianceAffected;                               		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.ValidatePlayerName
// [0x00424400]  (iNative[36665])
struct UGearboxGlobals_execValidatePlayerName_Params
{
	class FString                                      InName;                                           		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bReplaceCharacters : 1;                           		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.RegisterStateKey
// [0x00020400]  (iNative[35642])
struct UGearboxGlobals_execRegisterStateKey_Params
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ObjectName;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       AdditionalKey;                                    		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.DoesStateKeyExist
// [0x00020400]  (iNative[33302])
struct UGearboxGlobals_execDoesStateKeyExist_Params
{
	struct FName                                       LevelName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ObjectName;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       AdditionalKey;                                    		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.FreeTexture2D
// [0x00020400]  (iNative[23365])
struct UGearboxGlobals_execFreeTexture2D_Params
{
	class UTexture2D*                                  Texture;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetTexture2D
// [0x00020400]  (iNative[23989])
struct UGearboxGlobals_execGetTexture2D_Params
{
	class UTexture2D*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetRenderTextureManager
// [0x00020400]  (iNative[34195])
struct UGearboxGlobals_execGetRenderTextureManager_Params
{
	class UGearboxRenderTextureManager*                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetGFxManager
// [0x00020401]  (iNative[34107])
struct UGearboxGlobals_execGetGFxManager_Params
{
	class UGFxMovieManager*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetScreenSpaceManager
// [0x00020400]  (iNative[34200])
struct UGearboxGlobals_execGetScreenSpaceManager_Params
{
	class UScreenSpaceManager*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.RegDynamicTextureStreaming
// [0x00024400]  (iNative[28050])
struct UGearboxGlobals_execRegDynamicTextureStreaming_Params
{
	class AActor*                                      A;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bRegister : 1;                                    		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxGlobals.GetDynamicTextureActorList
// [0x00020400]  (iNative[34092])
struct UGearboxGlobals_execGetDynamicTextureActorList_Params
{
	class UGBXActorList*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetSpawnMaster
// [0x00020401]  (iNative[34220])
struct UGearboxGlobals_execGetSpawnMaster_Params
{
	class USpawnMaster*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetGBXObjectList
// [0x00020400]  (iNative[34104])
struct UGearboxGlobals_execGetGBXObjectList_Params
{
	class UGBXObjectList*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetGBXActorList
// [0x00020400]  (iNative[34103])
struct UGearboxGlobals_execGetGBXActorList_Params
{
	class UGBXActorList*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetExposureUtility
// [0x00020401]  (iNative[34098])
struct UGearboxGlobals_execGetExposureUtility_Params
{
	class UExposureUtilityBase*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetGearboxGlobalsDefinition
// [0x00020401]  (iNative[34106])
struct UGearboxGlobals_execGetGearboxGlobalsDefinition_Params
{
	class UGearboxGlobalsDefinition*                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxGlobals.GetGearboxGlobals
// [0x00022401]  (iNative[34105])
struct UGearboxGlobals_execGetGearboxGlobals_Params
{
	class UGearboxGlobals*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxHintBarContainerGFxObject.extHandleHintInput
// [0x00020403]  (iNative[2560])
struct UGearboxHintBarContainerGFxObject_execextHandleHintInput_Params
{
	int32_t                                            ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      HintTag;                                          		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxHUD.InspectAIPawn
// [0x12020000] 
struct AGearboxHUD_execInspectAIPawn_Params
{
	class AGearboxPawn*                                AIPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxHUD.InspectAI
// [0x12020200] 
struct AGearboxHUD_execInspectAI_Params
{
};

// Function GearboxFramework.GearboxMind.GetAIChild
// [0x00020400]  (iNative[34032])
struct AGearboxMind_execGetAIChild_Params
{
	int32_t                                            ChildIdx;                                         		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UIAIInterface*                               ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetNumAIChildren
// [0x00020400]  (iNative[34150])
struct AGearboxMind_execGetNumAIChildren_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.InitSequence
// [0x00020400]  (iNative[34561])
struct AGearboxMind_execInitSequence_Params
{
	class UActionSequence*                             NewSequence;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxMind.GetAllegiance
// [0x00020400]  (iNative[34040])
struct AGearboxMind_execGetAllegiance_Params
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetAIDefinition
// [0x00020400]  (iNative[34034])
struct AGearboxMind_execGetAIDefinition_Params
{
	class UAIDefinition*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.SetAIComponent
// [0x00020400]  (iNative[35883])
struct AGearboxMind_execSetAIComponent_Params
{
	class UAIComponent*                                NewAIComp;                                        		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.GearboxMind.GetAIComponent
// [0x00020400]  (iNative[34033])
struct AGearboxMind_execGetAIComponent_Params
{
	class UAIComponent*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.GearboxMind.GetAIParent
// [0x00020400]  (iNative[34038])
struct AGearboxMind_execGetAIParent_Params
{
	class UIAIInterface*                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetAILocation
// [0x00020400]  (iNative[34035])
struct AGearboxMind_execGetAILocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetAIActor
// [0x00020400]  (iNative[34031])
struct AGearboxMind_execGetAIActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.CanTickAI
// [0x00020400]  (iNative[32687])
struct AGearboxMind_execCanTickAI_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.InGodMode
// [0x00020400]  (iNative[24542])
struct AGearboxMind_execInGodMode_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.PawnDied
// [0x16020000] 
struct AGearboxMind_execPawnDied_Params
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxMind.Suicide
// [0x12020000] 
struct AGearboxMind_execSuicide_Params
{
};

// Function GearboxFramework.GearboxMind.OnTargetPriority
// [0x12020002] 
struct AGearboxMind_execOnTargetPriority_Params
{
	class UGearboxSeqAct_TargetPriority*               inAction;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxMind.Behavior_SetCanTarget
// [0x00020400]  (iNative[18322])
struct AGearboxMind_execBehavior_SetCanTarget_Params
{
	uint8_t                                            ChangeStatus;                                     		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxMind.GetNoTargetAllEnemies
// [0x00022400]  (iNative[34148])
struct AGearboxMind_execGetNoTargetAllEnemies_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.SetNoTargetAllEnemies
// [0x00022400]  (iNative[35911])
struct AGearboxMind_execSetNoTargetAllEnemies_Params
{
	uint32_t                                           bNoTarget : 1;                                    		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxMind.ActivateEventRule
// [0x00020400]  (iNative[31633])
struct AGearboxMind_execActivateEventRule_Params
{
	struct FName                                       RuleEventName;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.AddHitTargetRecord
// [0x12020000] 
struct AGearboxMind_execAddHitTargetRecord_Params
{
	class AGearboxPawn*                                HitByPawn;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     NewHitLocation;                                   		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              flNewDamage;                                      		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxMind.StopMovement
// [0x12020000] 
struct AGearboxMind_execStopMovement_Params
{
};

// Function GearboxFramework.GearboxMind.Possess
// [0x12020800] 
struct AGearboxMind_eventPossess_Params
{
	class APawn*                                       inPawn;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxMind.NotifyShotAtBy
// [0x00020400]  (iNative[35184])
struct AGearboxMind_execNotifyShotAtBy_Params
{
	class AGearboxPawn*                                ShootingPawn;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxMind.GetDenSpawner
// [0x00020400]  (iNative[34081])
struct AGearboxMind_execGetDenSpawner_Params
{
	class ADenSpawner*                                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetSpawner
// [0x00020400]  (iNative[34214])
struct AGearboxMind_execGetSpawner_Params
{
	class ASpawner*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetCurrentTargetInfo
// [0x00420400]  (iNative[34073])
struct AGearboxMind_execGetCurrentTargetInfo_Params
{
	class UMindTargetInfo*                             OutTargetRec;                                     		// 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsSameAllegianceMind
// [0x00020400]  (iNative[34690])
struct AGearboxMind_execIsSameAllegianceMind_Params
{
	class AGearboxMind*                                aMind;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsSameAllegiance
// [0x00020400]  (iNative[24932])
struct AGearboxMind_execIsSameAllegiance_Params
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsNeutralMind
// [0x00020400]  (iNative[34675])
struct AGearboxMind_execIsNeutralMind_Params
{
	class AGearboxMind*                                aMind;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsNeutral
// [0x00020400]  (iNative[24906])
struct AGearboxMind_execIsNeutral_Params
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsFriendlyMind
// [0x00020400]  (iNative[34662])
struct AGearboxMind_execIsFriendlyMind_Params
{
	class AGearboxMind*                                aMind;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsFriendly
// [0x00020400]  (iNative[24878])
struct AGearboxMind_execIsFriendly_Params
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsEnemyMind
// [0x00020400]  (iNative[34658])
struct AGearboxMind_execIsEnemyMind_Params
{
	class AGearboxMind*                                aMind;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.IsEnemy
// [0x00020400]  (iNative[24873])
struct AGearboxMind_execIsEnemy_Params
{
	class UObject*                                     anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.WantsToWalk
// [0x00020400]  (iNative[36733])
struct AGearboxMind_execWantsToWalk_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.SetWantsToWalk
// [0x00020400]  (iNative[35943])
struct AGearboxMind_execSetWantsToWalk_Params
{
	uint32_t                                           bInWantsToWalk : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxMind.SetFacingPolicy
// [0x00024401]  (iNative[35900])
struct AGearboxMind_execSetFacingPolicy_Params
{
	uint8_t                                            NewFacingPolicy;                                  		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      NewFacingActor;                                   		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     NewFacingVector;                                  		// 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            NewFacingStyle;                                   		// 0x001C (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxMind.GetCurrentTarget
// [0x00020400]  (iNative[34072])
struct AGearboxMind_execGetCurrentTarget_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxMind.GetNavigationHandle
// [0x00020401]  (iNative[34137])
struct AGearboxMind_execGetNavigationHandle_Params
{
	class UGearboxNavigationHandle*                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.GetNearestPositionOnNavMesh
// [0x00426400]  (iNative[34141])
struct UGearboxNavigationHandle_execGetNearestPositionOnNavMesh_Params
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TestLoc;                                          		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FBasedPosition                              NearestPos;                                       		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FNavMeshPathParams                          PolyUsableCheckParams;                            		// 0x0048 (0x0060) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FGBXNavMeshPolyRef                          NearestPoly;                                      		// 0x00A8 (0x0010) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	uint32_t                                           bAnyHeight : 1;                                   		// 0x00B8 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x00BC (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.GetNavMeshPolyForPoint
// [0x00426400]  (iNative[34138])
struct UGearboxNavigationHandle_execGetNavMeshPolyForPoint_Params
{
	struct FVector                                     Point;                                            		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FGBXNavMeshPolyRef                          FoundPoly;                                        		// 0x0010 (0x0010) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FNavMeshPathParams                          PolyUsableCheckParams;                            		// 0x0020 (0x0060) [0x0000000000400192] (CPF_Const | CPF_OptionalParm | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0080 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.GetPawnLocationOnNavMesh
// [0x00020400]  (iNative[34171])
struct UGearboxNavigationHandle_execGetPawnLocationOnNavMesh_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.InFinalPoly
// [0x00020400]  (iNative[34525])
struct UGearboxNavigationHandle_execInFinalPoly_Params
{
	struct FVector                                     TestLoc;                                          		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.PopulatePathfindingParamCache
// [0x00020400]  (iNative[27567])
struct UGearboxNavigationHandle_execPopulatePathfindingParamCache_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.NeedsRegularWalkingPhysics
// [0x00020400]  (iNative[35086])
struct UGearboxNavigationHandle_execNeedsRegularWalkingPhysics_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.IsHardAttached
// [0x00020400]  (iNative[34664])
struct UGearboxNavigationHandle_execIsHardAttached_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.FixByLerping
// [0x00020401]  (iNative[33842])
struct UGearboxNavigationHandle_execFixByLerping_Params
{
};

// Function GearboxFramework.GearboxNavigationHandle.SetFixPosition
// [0x00020401]  (iNative[35901])
struct UGearboxNavigationHandle_execSetFixPosition_Params
{
};

// Function GearboxFramework.GearboxNavigationHandle.TryToFixPathing
// [0x00020401]  (iNative[36579])
struct UGearboxNavigationHandle_execTryToFixPathing_Params
{
};

// Function GearboxFramework.GearboxNavigationHandle.CanFixPathing
// [0x00020401]  (iNative[32671])
struct UGearboxNavigationHandle_execCanFixPathing_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.SetPhysicsJumpDefinition
// [0x00020401]  (iNative[35921])
struct UGearboxNavigationHandle_execSetPhysicsJumpDefinition_Params
{
	class UPhysicsJumpDefinition*                      NewDef;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxNavigationHandle.GetPhysicsJumpDefinition
// [0x00020401]  (iNative[34175])
struct UGearboxNavigationHandle_execGetPhysicsJumpDefinition_Params
{
	class UPhysicsJumpDefinition*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.SetSpawnPointDefinition
// [0x00020401]  (iNative[35933])
struct UGearboxNavigationHandle_execSetSpawnPointDefinition_Params
{
	class USpawnPointDefinition*                       NewDef;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxNavigationHandle.GetSpawnPointDefinition
// [0x00020401]  (iNative[34221])
struct UGearboxNavigationHandle_execGetSpawnPointDefinition_Params
{
	class USpawnPointDefinition*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.SetNavAnimDefinition
// [0x00020401]  (iNative[35909])
struct UGearboxNavigationHandle_execSetNavAnimDefinition_Params
{
	class UNavAnimDefinition*                          NewDef;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxNavigationHandle.GetNavAnimDefinition
// [0x00020401]  (iNative[34136])
struct UGearboxNavigationHandle_execGetNavAnimDefinition_Params
{
	class UNavAnimDefinition*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.SetPerchDefinition
// [0x00020401]  (iNative[35919])
struct UGearboxNavigationHandle_execSetPerchDefinition_Params
{
	class UPerchDefinition*                            NewDef;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxNavigationHandle.GetPerchDefinition
// [0x00020401]  (iNative[34173])
struct UGearboxNavigationHandle_execGetPerchDefinition_Params
{
	class UPerchDefinition*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.UpdateAnchor
// [0x00024401]  (iNative[36608])
struct UGearboxNavigationHandle_execUpdateAnchor_Params
{
	uint32_t                                           bCanDoFullSearch : 1;                             		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxNavigationHandle.ClearAnchor
// [0x00020401]  (iNative[32746])
struct UGearboxNavigationHandle_execClearAnchor_Params
{
};

// Function GearboxFramework.GearboxNavigationHandle.GetPathCost
// [0x00024401]  (iNative[34167])
struct UGearboxNavigationHandle_execGetPathCost_Params
{
	uint32_t                                           bReset : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.InsertCurrentLocationIntoPath
// [0x00420401]  (iNative[34571])
struct UGearboxNavigationHandle_execInsertCurrentLocationIntoPath_Params
{
	struct FGBXNavMeshPath                             Path;                                             		// 0x0000 (0x0018) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxNavigationHandle.CreateConstrainedPath
// [0x00420401]  (iNative[32911])
struct UGearboxNavigationHandle_execCreateConstrainedPath_Params
{
	struct FPathRequestData                            Request;                                          		// 0x0000 (0x0170) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0170 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.CreatePathToLocation
// [0x00420401]  (iNative[32915])
struct UGearboxNavigationHandle_execCreatePathToLocation_Params
{
	struct FPathRequestData                            Request;                                          		// 0x0000 (0x0170) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0170 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.CreateDirectPath
// [0x00424401]  (iNative[32912])
struct UGearboxNavigationHandle_execCreateDirectPath_Params
{
	struct FPathRequestData                            Request;                                          		// 0x0000 (0x0170) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint8_t                                            Type;                                             		// 0x0170 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0174 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.CanPathFind
// [0x00020400]  (iNative[32678])
struct UGearboxNavigationHandle_execCanPathFind_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.SetPawnPhysics
// [0x00020400]  (iNative[35918])
struct UGearboxNavigationHandle_execSetPawnPhysics_Params
{
};

// Function GearboxFramework.GearboxNavigationHandle.ClearSpecialMovement
// [0x00020400]  (iNative[32761])
struct UGearboxNavigationHandle_execClearSpecialMovement_Params
{
};

// Function GearboxFramework.GearboxNavigationHandle.CanMoveTo
// [0x00420400]  (iNative[32676])
struct UGearboxNavigationHandle_execCanMoveTo_Params
{
	struct FVector                                     GoalLoc;                                          		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.CanAvoidObstacles
// [0x00020400]  (iNative[32668])
struct UGearboxNavigationHandle_execCanAvoidObstacles_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.AbortPath
// [0x00024400]  (iNative[31583])
struct UGearboxNavigationHandle_execAbortPath_Params
{
	uint32_t                                           bAllowDelayedAbort : 1;                           		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.PathIsValid
// [0x00420400]  (iNative[35368])
struct UGearboxNavigationHandle_execPathIsValid_Params
{
	struct FPathFindData                               Data;                                             		// 0x0000 (0x0080) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0080 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.IsFollowingActionPath
// [0x00020400]  (iNative[34660])
struct UGearboxNavigationHandle_execIsFollowingActionPath_Params
{
	class UActionSequencePawn*                         Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.SetPath
// [0x00420400]  (iNative[35914])
struct UGearboxNavigationHandle_execSetPath_Params
{
	struct FPathFindData                               Data;                                             		// 0x0000 (0x0080) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0080 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.IsFollowingPath
// [0x00020400]  (iNative[34661])
struct UGearboxNavigationHandle_execIsFollowingPath_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.CanMoveToGoal
// [0x00020400]  (iNative[32677])
struct UGearboxNavigationHandle_execCanMoveToGoal_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxNavigationHandle.CanFollowPath
// [0x00020400]  (iNative[32672])
struct UGearboxNavigationHandle_execCanFollowPath_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetFirstPersonMeshComponent
// [0x00020400]  (iNative[34099])
struct AGearboxPawn_execGetFirstPersonMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.GearboxPawn.SetReplicatedCloak
// [0x00020400]  (iNative[35925])
struct AGearboxPawn_execSetReplicatedCloak_Params
{
	uint32_t                                           bInReplicatedCloak : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.SetCloakComponent
// [0x00020400]  (iNative[35889])
struct AGearboxPawn_execSetCloakComponent_Params
{
	class UCloakComponent*                             InComponent;                                      		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.GearboxPawn.GetCloakComponent
// [0x00020400]  (iNative[34060])
struct AGearboxPawn_execGetCloakComponent_Params
{
	class UCloakComponent*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.GearboxPawn.SetDefaultStance
// [0x00024401]  (iNative[35893])
struct AGearboxPawn_execSetDefaultStance_Params
{
	struct FName                                       StanceName;                                       		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.ClearStance
// [0x00020401]  (iNative[32762])
struct AGearboxPawn_execClearStance_Params
{
	uint8_t                                            System;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.SetStance
// [0x00020401]  (iNative[35934])
struct AGearboxPawn_execSetStance_Params
{
	uint8_t                                            System;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UStanceDefinition*                           NewStance;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetStance
// [0x00020401]  (iNative[34225])
struct AGearboxPawn_execGetStance_Params
{
	class UStanceDefinition*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetStanceComponent
// [0x00020400]  (iNative[34226])
struct AGearboxPawn_execGetStanceComponent_Params
{
	class UStanceComponent*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.GearboxPawn.Landed
// [0x16020800] 
struct AGearboxPawn_eventLanded_Params
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      FloorActor;                                       		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPawn.PlayFootStepSound
// [0x00020500]  (iNative[27477])
struct AGearboxPawn_execPlayFootStepSound_Params
{
	int32_t                                            FootDown;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bFirstPerson : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.GetStealthAwareness
// [0x00020400]  (iNative[34229])
struct AGearboxPawn_execGetStealthAwareness_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetSpeedAwareness
// [0x00020400]  (iNative[34224])
struct AGearboxPawn_execGetSpeedAwareness_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetAudibility
// [0x00020400]  (iNative[23564])
struct AGearboxPawn_execGetAudibility_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetVisibility
// [0x00020400]  (iNative[24027])
struct AGearboxPawn_execGetVisibility_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.InterpRelativeRotation
// [0x00020401]  (iNative[34606])
struct AGearboxPawn_execInterpRelativeRotation_Params
{
	struct FRotator                                    NewRelRot;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.InterpRelativeLocation
// [0x00020401]  (iNative[34605])
struct AGearboxPawn_execInterpRelativeLocation_Params
{
	struct FVector                                     NewRelLoc;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.InterpControllerRotation
// [0x00020401]  (iNative[34591])
struct AGearboxPawn_execInterpControllerRotation_Params
{
	struct FRotator                                    NewRot;                                           		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.InterpRotation
// [0x00024401]  (iNative[34617])
struct AGearboxPawn_execInterpRotation_Params
{
	struct FRotator                                    NewRot;                                           		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bYawOnly : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.InterpLocation
// [0x00024401]  (iNative[34598])
struct AGearboxPawn_execInterpLocation_Params
{
	struct FVector                                     NewLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bNoZ : 1;                                         		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.IsInterpolating
// [0x00020401]  (iNative[34671])
struct AGearboxPawn_execIsInterpolating_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.AttachObstacleDebugComponent
// [0x12020000] 
struct AGearboxPawn_execAttachObstacleDebugComponent_Params
{
};

// Function GearboxFramework.GearboxPawn.PossessedBy
// [0x12020000] 
struct AGearboxPawn_execPossessedBy_Params
{
	class AController*                                 C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bVehicleTransition : 1;                           		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.GetObstacleInfo
// [0x00024400]  (iNative[34160])
struct AGearboxPawn_execGetObstacleInfo_Params
{
	uint32_t                                           bFillInfo : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class UPathingObstacleInfo*                        ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.SetObstacleInfo
// [0x00020400]  (iNative[35913])
struct AGearboxPawn_execSetObstacleInfo_Params
{
	class UPathingObstacleInfo*                        Info;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPawn.GetObstacleActor
// [0x00020400]  (iNative[34159])
struct AGearboxPawn_execGetObstacleActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetPivotPoint
// [0x00024400]  (iNative[34177])
struct AGearboxPawn_execGetPivotPoint_Params
{
	uint32_t                                           bForFiring : 1;                                   		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetAimDirection
// [0x00020400]  (iNative[34036])
struct AGearboxPawn_execGetAimDirection_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetSpotOthersShouldLookAt
// [0x12020900] 
struct AGearboxPawn_eventGetSpotOthersShouldLookAt_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.SetReplicatedSMData
// [0x00424500]  (iNative[35926])
struct AGearboxPawn_execSetReplicatedSMData_Params
{
	struct FSpecialMoveData                            NewSMData;                                        		// 0x0000 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_StopAny
// [0xFFFF0000122248C0] 
struct AGearboxPawn_eventServerSpecialMove_StopAny_Params
{
	uint32_t                                           bClearQueue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Stop
// [0xFFFF0000122248C0] 
struct AGearboxPawn_eventServerSpecialMove_Stop_Params
{
	class USpecialMoveDefinition*                      OldSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bClearQueue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Queue
// [0xFFFF0000122248C0] 
struct AGearboxPawn_eventServerSpecialMove_Queue_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayRateScale;                                    		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       CallbackName;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     CallbackObject;                                   		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     Data;                                             		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSendCallbackAtEndOfSequence : 1;                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bStartOfSequence : 1;                             		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Play
// [0xFFFF0000122248C0] 
struct AGearboxPawn_eventServerSpecialMove_Play_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayRateScale;                                    		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       CallbackName;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     CallbackObject;                                   		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     Data;                                             		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSendCallbackAtEndOfSequence : 1;                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.GetDefaultRootMotionRotationMode
// [0x00020500]  (iNative[23677])
struct AGearboxPawn_execGetDefaultRootMotionRotationMode_Params
{
	ERootMotionRotationMode                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetDefaultRootMotionMode
// [0x00020500]  (iNative[23676])
struct AGearboxPawn_execGetDefaultRootMotionMode_Params
{
	ERootMotionMode                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetSkelMesh
// [0x00020500]  (iNative[34208])
struct AGearboxPawn_execGetSkelMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.GearboxPawn.GetSMComponent
// [0x00020500]  (iNative[34209])
struct AGearboxPawn_execGetSMComponent_Params
{
	class USpecialMoveComponent*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.GearboxPawn.GetActor
// [0x00020500]  (iNative[34025])
struct AGearboxPawn_execGetActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.GetNavigationHandle
// [0x00020400]  (iNative[34137])
struct AGearboxPawn_execGetNavigationHandle_Params
{
	class UGearboxNavigationHandle*                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.Touch
// [0x12020800] 
struct AGearboxPawn_eventTouch_Params
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPawn.PlayHit
// [0x12024000] 
struct AGearboxPawn_execPlayHit_Params
{
	class APawn*                                       SomePawn;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          		// 0x0030 (0x0028) [0x0000000000000080] (CPF_Parm)    
	class UDamagePipeline*                             Pipeline;                                         		// 0x0058 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bFriendlyNoDamage : 1;                            		// 0x0060 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GearboxPawn.ReplicatedEvent
// [0x12020900] 
struct AGearboxPawn_eventReplicatedEvent_Params
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPawn.Died
// [0x16024000] 
struct AGearboxPawn_execDied_Params
{
	class AController*                                 Killer;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamagePipeline*                             Pipeline;                                         		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxPawn.Destroyed
// [0x12020900] 
struct AGearboxPawn_eventDestroyed_Params
{
};

// Function GearboxFramework.GearboxPawn.SetMovementPhysics
// [0x12020000] 
struct AGearboxPawn_execSetMovementPhysics_Params
{
};

// Function GearboxFramework.GearboxPawn.PostBeginPlay
// [0x12020900] 
struct AGearboxPawn_eventPostBeginPlay_Params
{
};

// Function GearboxFramework.GearboxPawn.NotifyShotAtBy
// [0x00020400]  (iNative[35184])
struct AGearboxPawn_execNotifyShotAtBy_Params
{
	class AGearboxPawn*                                ShootingPawn;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxPawn.HaveIBeenShotAtRecently
// [0x00020400]  (iNative[34326])
struct AGearboxPawn_execHaveIBeenShotAtRecently_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxProcess.IsProcessActive
// [0x00020400]  (iNative[34686])
struct UGearboxProcess_execIsProcessActive_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxProcess.ProcessFailed
// [0x00020400]  (iNative[35552])
struct UGearboxProcess_execProcessFailed_Params
{
};

// Function GearboxFramework.GearboxProcess.ProcessComplete
// [0x00020400]  (iNative[35549])
struct UGearboxProcess_execProcessComplete_Params
{
};

// Function GearboxFramework.GearboxProcess.StepWaiting
// [0x00020400]  (iNative[36296])
struct UGearboxProcess_execStepWaiting_Params
{
};

// Function GearboxFramework.GearboxProcess.StepFailed
// [0x00020400]  (iNative[36294])
struct UGearboxProcess_execStepFailed_Params
{
};

// Function GearboxFramework.GearboxProcess.StepSucceeded
// [0x00020400]  (iNative[36295])
struct UGearboxProcess_execStepSucceeded_Params
{
};

// Function GearboxFramework.GearboxProcess.GetStepConfiguration
// [0x00020400]  (iNative[34230])
struct UGearboxProcess_execGetStepConfiguration_Params
{
	struct FStepConfiguration                          ReturnValue;                                      		// 0x0000 (0x0014) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxProcess.PerformStep
// [0x12020800] 
struct UGearboxProcess_eventPerformStep_Params
{
};

// Function GearboxFramework.GearboxProcess.StopProcess
// [0x00020400]  (iNative[36307])
struct UGearboxProcess_execStopProcess_Params
{
};

// Function GearboxFramework.GearboxProcess.StartProcess
// [0x00020400]  (iNative[36257])
struct UGearboxProcess_execStartProcess_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxProcess.Init
// [0x00020400]  (iNative[762])
struct UGearboxProcess_execInit_Params
{
};

// Function GearboxFramework.SparkInitializationProcess.HandleReadDiscoveryReceived
// [0x00420402]  (iNative[2437])
struct USparkInitializationProcess_execHandleReadDiscoveryReceived_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.TriggerSparkInitializedDelegates
// [0x12020800] 
struct USparkInitializationProcess_eventTriggerSparkInitializedDelegates_Params
{
	uint8_t                                            InitializeResult;                                 		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInitializationProcess.GetPlatformTicketFallback
// [0x12020000] 
struct USparkInitializationProcess_execGetPlatformTicketFallback_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.ClearGetPlatformTicketCompleteDelegate
// [0x12020000] 
struct USparkInitializationProcess_execClearGetPlatformTicketCompleteDelegate_Params
{
	struct FScriptDelegate                             GetPlatformTicketCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.AddGetPlatformTicketCompleteDelegate
// [0x12020000] 
struct USparkInitializationProcess_execAddGetPlatformTicketCompleteDelegate_Params
{
	struct FScriptDelegate                             GetPlatformTicketCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.OnGetPlatformTicketComplete
// [0x00120000] 
struct USparkInitializationProcess_execOnGetPlatformTicketComplete_Params
{
	struct FPlatformUserId                             TicketUserId;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Ticket;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.ClearSparkInitializedDelegate
// [0x12020000] 
struct USparkInitializationProcess_execClearSparkInitializedDelegate_Params
{
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.AddSparkInitializedDelegate
// [0x12020000] 
struct USparkInitializationProcess_execAddSparkInitializedDelegate_Params
{
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.GetStepName
// [0x00020400]  (iNative[34231])
struct USparkInitializationProcess_execGetStepName_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.GetStepConfiguration
// [0x00020400]  (iNative[34230])
struct USparkInitializationProcess_execGetStepConfiguration_Params
{
	struct FStepConfiguration                          ReturnValue;                                      		// 0x0000 (0x0014) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.IsInitialized
// [0x12020000] 
struct USparkInitializationProcess_execIsInitialized_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.IsDisabled
// [0x12020000] 
struct USparkInitializationProcess_execIsDisabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.IsInitializing
// [0x12020000] 
struct USparkInitializationProcess_execIsInitializing_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.HandleVerificationReceived
// [0x12420002] 
struct USparkInitializationProcess_execHandleVerificationReceived_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.VerifyAuthentication
// [0x12020800] 
struct USparkInitializationProcess_eventVerifyAuthentication_Params
{
};

// Function GearboxFramework.SparkInitializationProcess.AuthenticateTicketString
// [0x12020800] 
struct USparkInitializationProcess_eventAuthenticateTicketString_Params
{
};

// Function GearboxFramework.SparkInitializationProcess.HandleAuthenticationReceived
// [0x12420002] 
struct USparkInitializationProcess_execHandleAuthenticationReceived_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.GetPlatformTicketComplete
// [0x12020002] 
struct USparkInitializationProcess_execGetPlatformTicketComplete_Params
{
	struct FPlatformUserId                             InUserId;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Ticket;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.GetServerTicketComplete
// [0x12020002] 
struct USparkInitializationProcess_execGetServerTicketComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Ticket;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.GetTicketComplete
// [0x12020000] 
struct USparkInitializationProcess_execGetTicketComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Ticket;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.GetPlatformTicket
// [0x12020800] 
struct USparkInitializationProcess_eventGetPlatformTicket_Params
{
};

// Function GearboxFramework.SparkInitializationProcess.ProcessFailed
// [0x00020400]  (iNative[35552])
struct USparkInitializationProcess_execProcessFailed_Params
{
};

// Function GearboxFramework.SparkInitializationProcess.ProcessComplete
// [0x00020400]  (iNative[35549])
struct USparkInitializationProcess_execProcessComplete_Params
{
};

// Function GearboxFramework.SparkInitializationProcess.GetConfigQuery
// [0x00020400]  (iNative[34061])
struct USparkInitializationProcess_execGetConfigQuery_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.CompleteInitialization
// [0x00020400]  (iNative[32833])
struct USparkInitializationProcess_execCompleteInitialization_Params
{
};

// Function GearboxFramework.SparkInitializationProcess.PerformStep
// [0x00020400]  (iNative[14853])
struct USparkInitializationProcess_execPerformStep_Params
{
};

// Function GearboxFramework.SparkInitializationProcess.StartProcess
// [0x00020400]  (iNative[36257])
struct USparkInitializationProcess_execStartProcess_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInitializationProcess.InitFromServer
// [0x12020800] 
struct USparkInitializationProcess_eventInitFromServer_Params
{
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInitializationProcess.InitWithUser
// [0x12020000] 
struct USparkInitializationProcess_execInitWithUser_Params
{
	struct FPlatformUserId                             InUserId;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GearboxRenderTextureManager.SetThumbnailMesh
// [0x00020401]  (iNative[35936])
struct UGearboxRenderTextureManager_execSetThumbnailMesh_Params
{
	class UTexture*                                    Texture;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UMeshComponent*                              Mesh;                                             		// 0x0008 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeContext
// [0x00020401]  (iNative[33911])
struct UGearboxRenderTextureManager_execFreeContext_Params
{
	struct FName                                       Context;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeThumbnail
// [0x00020401]  (iNative[33917])
struct UGearboxRenderTextureManager_execFreeThumbnail_Params
{
	class UTexture*                                    Texture;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxRenderTextureManager.GetThumbnail
// [0x00024401]  (iNative[34243])
struct UGearboxRenderTextureManager_execGetThumbnail_Params
{
	struct FName                                       Context;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TextureSizeX;                                     		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TextureSizeY;                                     		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            UpdateType;                                       		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SizeX;                                            		// 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            SizeY;                                            		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UTexture*                                    ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeTexture2D
// [0x00020401]  (iNative[23365])
struct UGearboxRenderTextureManager_execFreeTexture2D_Params
{
	class UTexture2D*                                  Texture;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxRenderTextureManager.GetTexture2D
// [0x00020401]  (iNative[23989])
struct UGearboxRenderTextureManager_execGetTexture2D_Params
{
	class UTexture2D*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeRenderTextureDepth
// [0x00020401]  (iNative[33916])
struct UGearboxRenderTextureManager_execFreeRenderTextureDepth_Params
{
	class UTextureRenderTarget2D*                      Texture;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxRenderTextureManager.GetRenderTextureDepth
// [0x00020401]  (iNative[34194])
struct UGearboxRenderTextureManager_execGetRenderTextureDepth_Params
{
	int32_t                                            InSizeX;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InSizeY;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UTextureRenderTarget2D*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxRenderTextureManager.FreeRenderTexture
// [0x00020401]  (iNative[33915])
struct UGearboxRenderTextureManager_execFreeRenderTexture_Params
{
	class UTextureRenderTarget2D*                      Texture;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxRenderTextureManager.GetRenderTexture
// [0x00020401]  (iNative[34193])
struct UGearboxRenderTextureManager_execGetRenderTexture_Params
{
	int32_t                                            InSizeX;                                          		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            InSizeY;                                          		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UTextureRenderTarget2D*                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxSkeletalMeshComponent.SetFOV
// [0x00020401]  (iNative[28825])
struct UGearboxSkeletalMeshComponent_execSetFOV_Params
{
	float                                              NewFOV;                                           		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GestaltSkeletalMeshDefinition.InitGestaltAccessoryMeshDataFromParts
// [0x00420401]  (iNative[34534])
struct UGestaltSkeletalMeshDefinition_execInitGestaltAccessoryMeshDataFromParts_Params
{
	class USkeletalMesh*                               MeshToBorrowBonesFrom;                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGestaltPartMatrices*                        AccessoryMatrices;                                		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USkeletalMeshComponent*                      TargetComponent;                                  		// 0x0010 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	class TArray<struct FGestaltPartPermutation>       PermutationConfiguration;                         		// 0x0018 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GestaltSkeletalMeshDefinition.InitGestaltMeshDataFromParts
// [0x00420401]  (iNative[34535])
struct UGestaltSkeletalMeshDefinition_execInitGestaltMeshDataFromParts_Params
{
	class USkeletalMeshComponent*                      TargetComponent;                                  		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	class TArray<struct FName>                         PartMeshNames;                                    		// 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxActorMoviePool.DisplayDebug
// [0x12420000] 
struct UGFxActorMoviePool_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              X;                                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x0010 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GFxActorMoviePool.GetPoolName
// [0x12020001] 
struct UGFxActorMoviePool_execGetPoolName_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxActorMoviePool.PoolStyleString
// [0x12020001] 
struct UGFxActorMoviePool_execPoolStyleString_Params
{
	uint8_t                                            Pooling;                                          		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxActorMoviePool.MovieStateChanged
// [0x00020401]  (iNative[35032])
struct UGFxActorMoviePool_execMovieStateChanged_Params
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieDefinition.OnSetViewport
// [0x80420401]  (iNative[2554])
struct UGFxMovieDefinition_execOnSetViewport_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GFxMovieDefinition.OnClipUnloaded
// [0x80420401]  (iNative[2555])
struct UGFxMovieDefinition_execOnClipUnloaded_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     Clip;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieDefinition.OnClipLoaded
// [0x80420401]  (iNative[2556])
struct UGFxMovieDefinition_execOnClipLoaded_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class UObject*                                     Clip;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieDefinition.OnClose
// [0x80420401]  (iNative[2557])
struct UGFxMovieDefinition_execOnClose_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GFxMovieDefinition.OnStart
// [0x80420401]  (iNative[2544])
struct UGFxMovieDefinition_execOnStart_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GFxMovieDefinition.FindMovieLink
// [0x12020000] 
struct UGFxMovieDefinition_execFindMovieLink_Params
{
	struct FName                                       MovieName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxMovieDefinition*                         ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieDefinition.PostMovieStart
// [0x12020001] 
struct UGFxMovieDefinition_execPostMovieStart_Params
{
	class UGearboxGFxMovie*                            StartedMovie;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieDefinition.SpawnPlayerMovie
// [0x00024400]  (iNative[36145])
struct UGFxMovieDefinition_execSpawnPlayerMovie_Params
{
	class AGearboxPlayerController*                    Owner;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     ContextObject;                                    		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGearboxGFxMovie*                            ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieDefinition.SupportsStatePooling
// [0x00020401]  (iNative[36347])
struct UGFxMovieDefinition_execSupportsStatePooling_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieDefinition.GetPoolStyle
// [0x00020401]  (iNative[34184])
struct UGFxMovieDefinition_execGetPoolStyle_Params
{
	EGFxMoviePooling                                   ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieDrawStyle.GetStyleDebugString
// [0x12020000] 
struct UGFxMovieDrawStyle_execGetStyleDebugString_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxMovieDrawStyleHUD.RequiresClientInstance
// [0x12020800] 
struct UGFxMovieDrawStyleHUD_eventRequiresClientInstance_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieDrawStyleMesh.GetStyleDebugString
// [0x12020000] 
struct UGFxMovieDrawStyleMesh_execGetStyleDebugString_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxMovieDrawStyleMesh.RequiresClientInstance
// [0x12020800] 
struct UGFxMovieDrawStyleMesh_eventRequiresClientInstance_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieDrawStyleInstanceData.RequiresClientInstance
// [0x12020800] 
struct UGFxMovieDrawStyleInstanceData_eventRequiresClientInstance_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieDrawStyleSplitscreen.RequiresClientInstance
// [0x12020800] 
struct UGFxMovieDrawStyleSplitscreen_eventRequiresClientInstance_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieManager.DisplayDebug
// [0x12420000] 
struct UGFxMovieManager_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GFxMovieManager.ChangeMovieState
// [0x00024401]  (iNative[32715])
struct UGFxMovieManager_execChangeMovieState_Params
{
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       State;                                            		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Change;                                           		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class AGearboxPlayerController*                    PC;                                               		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.GFxMovieManager.Unsubscribe
// [0x00020401]  (iNative[36607])
struct UGFxMovieManager_execUnsubscribe_Params
{
	class AGearboxPlayerController*                    PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieManager.Subscribe
// [0x00020401]  (iNative[36332])
struct UGFxMovieManager_execSubscribe_Params
{
	class AGearboxPlayerController*                    PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieManager.UnregisterMoviesDrawnTo
// [0x00020401]  (iNative[36604])
struct UGFxMovieManager_execUnregisterMoviesDrawnTo_Params
{
	class UPrimitiveComponent*                         PrimComp;                                         		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieManager.UnregisterTarget
// [0x00020401]  (iNative[36606])
struct UGFxMovieManager_execUnregisterTarget_Params
{
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieManager.UnregisterMovie
// [0x00020401]  (iNative[36603])
struct UGFxMovieManager_execUnregisterMovie_Params
{
	class UGFxMovieDefinition*                         Definition;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieManager.RegisterMovie
// [0x00020401]  (iNative[35639])
struct UGFxMovieManager_execRegisterMovie_Params
{
	class UGFxMovieDefinition*                         Definition;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UIGFxActorMovie*                             TargetActor;                                      		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieState.GetDebugString
// [0x12024000] 
struct UGFxMovieState_execGetDebugString_Params
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIncludeFlags : 1;                                		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxMovieState.ApplyMovieState
// [0x12020000] 
struct UGFxMovieState_execApplyMovieState_Params
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      HandlerClass;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GFxMovieState.FindMovieState
// [0x00020401]  (iNative[33814])
struct UGFxMovieState_execFindMovieState_Params
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieState.TestState
// [0x00420400]  (iNative[16618])
struct UGFxMovieState_execTestState_Params
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FMovieStateStruct                           MovieState;                                       		// 0x0008 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieState.ToggleState
// [0x00420400]  (iNative[36537])
struct UGFxMovieState_execToggleState_Params
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FMovieStateStruct                           MovieState;                                       		// 0x0008 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieState.EnableState
// [0x00424400]  (iNative[33541])
struct UGFxMovieState_execEnableState_Params
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FMovieStateStruct                           MovieState;                                       		// 0x0008 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bEnable : 1;                                      		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxMovieStatePlayerAware.EnableState
// [0x00424400]  (iNative[33541])
struct UGFxMovieStatePlayerAware_execEnableState_Params
{
	struct FName                                       TheState;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FMovieStateStruct                           MovieState;                                       		// 0x0008 (0x0020) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           bEnable : 1;                                      		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxUIAction_Base.RunAction
// [0x00024400]  (iNative[35793])
struct UGFxUIAction_Base_execRunAction_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxUIAction_ApplyLayout.RunAction
// [0x00024400]  (iNative[35793])
struct UGFxUIAction_ApplyLayout_execRunAction_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxUIAction_ApplyLayoutToAll.RunAction
// [0x00024400]  (iNative[35793])
struct UGFxUIAction_ApplyLayoutToAll_execRunAction_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxUIAction_Attach.ClearAttachedClip
// [0x00020400]  (iNative[32747])
struct UGFxUIAction_Attach_execClearAttachedClip_Params
{
};

// Function GearboxFramework.GFxUIAction_Attach.GetAttachedClip
// [0x00020400]  (iNative[34046])
struct UGFxUIAction_Attach_execGetAttachedClip_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GFxUIAction_Attach.RunAction
// [0x00024400]  (iNative[35793])
struct UGFxUIAction_Attach_execRunAction_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxUIAction_Move.RunAction
// [0x00024400]  (iNative[35793])
struct UGFxUIAction_Move_execRunAction_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxUIAction_Remove.RunAction
// [0x00024400]  (iNative[35793])
struct UGFxUIAction_Remove_execRunAction_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxUIAction_RemoveAll.RunAction
// [0x00024400]  (iNative[35793])
struct UGFxUIAction_RemoveAll_execRunAction_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxUIAction_SetString.RunAction
// [0x00024400]  (iNative[35793])
struct UGFxUIAction_SetString_execRunAction_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxUIAction_TargetGFxTagBase.RunAction
// [0x00024400]  (iNative[35793])
struct UGFxUIAction_TargetGFxTagBase_execRunAction_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.GFxUIAction_ToggleGFxTagVisibility.RunAction
// [0x00024400]  (iNative[35793])
struct UGFxUIAction_ToggleGFxTagVisibility_execRunAction_Params
{
	class UGFxObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.IAIInterface.GetAIChild
// [0x00020400]  (iNative[34032])
struct UIAIInterface_execGetAIChild_Params
{
	int32_t                                            ChildIdx;                                         		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UIAIInterface*                               ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IAIInterface.GetNumAIChildren
// [0x00020400]  (iNative[34150])
struct UIAIInterface_execGetNumAIChildren_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IAIInterface.InitSequence
// [0x00020400]  (iNative[34561])
struct UIAIInterface_execInitSequence_Params
{
	class UActionSequence*                             NewSequence;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.IAIInterface.GetAllegiance
// [0x00020400]  (iNative[34040])
struct UIAIInterface_execGetAllegiance_Params
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IAIInterface.GetAIDefinition
// [0x00020400]  (iNative[34034])
struct UIAIInterface_execGetAIDefinition_Params
{
	class UAIDefinition*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IAIInterface.SetAIComponent
// [0x00020400]  (iNative[35883])
struct UIAIInterface_execSetAIComponent_Params
{
	class UAIComponent*                                NewAIComp;                                        		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.IAIInterface.GetAIComponent
// [0x00020400]  (iNative[34033])
struct UIAIInterface_execGetAIComponent_Params
{
	class UAIComponent*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.IAIInterface.GetAIParent
// [0x00020400]  (iNative[34038])
struct UIAIInterface_execGetAIParent_Params
{
	class UIAIInterface*                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IAIInterface.GetAILocation
// [0x00020400]  (iNative[34035])
struct UIAIInterface_execGetAILocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IAIInterface.GetAIActor
// [0x00020400]  (iNative[34031])
struct UIAIInterface_execGetAIActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IAIInterface.CanTickAI
// [0x00020400]  (iNative[32687])
struct UIAIInterface_execCanTickAI_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IBehaviorConsumer.GetBehaviorConsumerHandle
// [0x00020400]  (iNative[34051])
struct UIBehaviorConsumer_execGetBehaviorConsumerHandle_Params
{
	struct FBehaviorConsumerHandle                     ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ICloak.SetReplicatedCloak
// [0x00020400]  (iNative[35925])
struct UICloak_execSetReplicatedCloak_Params
{
	uint32_t                                           bInReplicatedCloak : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.ICloak.SetCloakComponent
// [0x00020400]  (iNative[35889])
struct UICloak_execSetCloakComponent_Params
{
	class UCloakComponent*                             InComponent;                                      		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.ICloak.GetCloakComponent
// [0x00020400]  (iNative[34060])
struct UICloak_execGetCloakComponent_Params
{
	class UCloakComponent*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.ICustomEvent.RunCustomEvent
// [0x12024800] 
struct UICustomEvent_eventRunCustomEvent_Params
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     EventInstigator;                                  		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     OtherEventParticipantObject;                      		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FBehaviorParameters                         EventData;                                        		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.IExpandableListEntry.GetCategoryPair
// [0x00420400]  (iNative[34059])
struct UIExpandableListEntry_execGetCategoryPair_Params
{
	struct FCategoryPair                               OutCategoryPair;                                  		// 0x0000 (0x0010) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.IExpandableListEntry.GetEntryName
// [0x00420400]  (iNative[34096])
struct UIExpandableListEntry_execGetEntryName_Params
{
	class FString                                      OutEntryName;                                     		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.IGBXTargetSearch.GetTargetSearchDefaultTarget
// [0x00020400]  (iNative[34240])
struct UIGBXTargetSearch_execGetTargetSearchDefaultTarget_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IGBXTargetSearch.GetTargetSearchSourceLocationAndRotation
// [0x00420400]  (iNative[34242])
struct UIGBXTargetSearch_execGetTargetSearchSourceLocationAndRotation_Params
{
	struct FVector                                     OutLocation;                                      		// 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    OutRotation;                                      		// 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.IGBXTargetSearch.GetTargetSearchSourceActor
// [0x00020400]  (iNative[34241])
struct UIGBXTargetSearch_execGetTargetSearchSourceActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IGFxActorMovie.GFx_NotifyMovieDestroy
// [0x00020400]  (iNative[34259])
struct UIGFxActorMovie_execGFx_NotifyMovieDestroy_Params
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.IGFxActorMovie.GFx_NotifyMovieCreate
// [0x00020400]  (iNative[34258])
struct UIGFxActorMovie_execGFx_NotifyMovieCreate_Params
{
	class UGearboxGFxMovie*                            Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.IGFxActorMovie.GFx_GetMovieActor
// [0x00020400]  (iNative[34257])
struct UIGFxActorMovie_execGFx_GetMovieActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IGFxMovieLocator.GetAGFxMovie
// [0x00020400]  (iNative[34029])
struct UIGFxMovieLocator_execGetAGFxMovie_Params
{
	class UGFxMoviePlayer*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IGFxMovieLocator.GetAGFxUIManager
// [0x00020400]  (iNative[34030])
struct UIGFxMovieLocator_execGetAGFxUIManager_Params
{
	class UIGFxUIManager*                              ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IGFxObjectManager.extOnClipUnloaded
// [0x12020002] 
struct UIGFxObjectManager_execextOnClipUnloaded_Params
{
	class UGFxObject*                                  Clip;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.IGFxObjectManager.extOnClipLoaded
// [0x12020002] 
struct UIGFxObjectManager_execextOnClipLoaded_Params
{
	class UGFxObject*                                  Clip;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.IGFxObjectManager.GetIsSpectatorMode
// [0x00020400]  (iNative[34122])
struct UIGFxObjectManager_execGetIsSpectatorMode_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IGFxObjectManager.GetLayoutDefinition
// [0x00020400]  (iNative[34126])
struct UIGFxObjectManager_execGetLayoutDefinition_Params
{
	class UGFxLayoutDefinition*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IGFxObjectManager.GetGFxObjectManager
// [0x00020400]  (iNative[34108])
struct UIGFxObjectManager_execGetGFxObjectManager_Params
{
	class UGearboxGFxObjectManager*                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IGFxUIManager.ResolveTargetObjectsForAction
// [0x00020400]  (iNative[35738])
struct UIGFxUIManager_execResolveTargetObjectsForAction_Params
{
	class UGFxUIAction_Base*                           Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<class UGFxObject*>                    ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.IGFxUIManager.ResolveTargetMovie
// [0x00020400]  (iNative[35735])
struct UIGFxUIManager_execResolveTargetMovie_Params
{
	class USwfMovie*                                   Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxMoviePlayer*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IGFxUIManager.ResolveTargetMovieForAction
// [0x00020400]  (iNative[35736])
struct UIGFxUIManager_execResolveTargetMovieForAction_Params
{
	class UGFxUIAction_Base*                           Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxMoviePlayer*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IGFxUIManager.RunGFxUIAction
// [0x00420400]  (iNative[35795])
struct UIGFxUIManager_execRunGFxUIAction_Params
{
	struct FQueuedGFxUIAction                          Action;                                           		// 0x0000 (0x0020) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.IGFxUIManager.RunGFxUIActions
// [0x00020400]  (iNative[35796])
struct UIGFxUIManager_execRunGFxUIActions_Params
{
};

// Function GearboxFramework.IGFxUIManager.QueueGFxUIAction
// [0x00024400]  (iNative[35589])
struct UIGFxUIManager_execQueueGFxUIAction_Params
{
	class UGFxUIAction_Base*                           inAction;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxMoviePlayer*                             KnownTargetMovie;                                 		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class TArray<struct FGFxUIActionParam>             OptParams;                                        		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bRunImmediately : 1;                              		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.InterpComponent.InterpBallisticsByTime
// [0x00020401]  (iNative[34588])
struct UInterpComponent_execInterpBallisticsByTime_Params
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     EndLoc;                                           		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              LeapTime;                                         		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              LeapGravity;                                      		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0020 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.InterpComponent.InterpBallistics
// [0x00020401]  (iNative[34587])
struct UInterpComponent_execInterpBallistics_Params
{
	struct FVector                                     StartLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     EndLoc;                                           		// 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              LeapSpeed;                                        		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              LeapAngle;                                        		// 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.InterpComponent.InterpRelativeRotation
// [0x00020401]  (iNative[34606])
struct UInterpComponent_execInterpRelativeRotation_Params
{
	struct FRotator                                    NewRelRot;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.InterpComponent.InterpRelativeLocation
// [0x00020401]  (iNative[34605])
struct UInterpComponent_execInterpRelativeLocation_Params
{
	struct FVector                                     NewRelLoc;                                        		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.InterpComponent.InterpControllerRotation
// [0x00020401]  (iNative[34591])
struct UInterpComponent_execInterpControllerRotation_Params
{
	struct FRotator                                    NewRot;                                           		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.InterpComponent.InterpDeltaRotation
// [0x00024401]  (iNative[34597])
struct UInterpComponent_execInterpDeltaRotation_Params
{
	struct FRotator                                    DeltaRot;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bYawOnly : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.InterpComponent.InterpRotation
// [0x00024401]  (iNative[34617])
struct UInterpComponent_execInterpRotation_Params
{
	struct FRotator                                    NewRot;                                           		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bYawOnly : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.InterpComponent.InterpDeltaLocation
// [0x00024401]  (iNative[34596])
struct UInterpComponent_execInterpDeltaLocation_Params
{
	struct FVector                                     DeltaLoc;                                         		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bNoZ : 1;                                         		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.InterpComponent.InterpLocation
// [0x00024401]  (iNative[34598])
struct UInterpComponent_execInterpLocation_Params
{
	struct FVector                                     NewLoc;                                           		// 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpTime;                                       		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bLinear : 1;                                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bNoZ : 1;                                         		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.InterpComponent.Stop
// [0x00020401]  (iNative[623])
struct UInterpComponent_execStop_Params
{
};

// Function GearboxFramework.InterpComponent.Get
// [0x00022400]  (iNative[34022])
struct UInterpComponent_execGet_Params
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UInterpComponent*                            ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.IPathingObstacle.GetObstacleInfo
// [0x00024400]  (iNative[34160])
struct UIPathingObstacle_execGetObstacleInfo_Params
{
	uint32_t                                           bFillInfo : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class UPathingObstacleInfo*                        ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IPathingObstacle.SetObstacleInfo
// [0x00020400]  (iNative[35913])
struct UIPathingObstacle_execSetObstacleInfo_Params
{
	class UPathingObstacleInfo*                        Info;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.IPathingObstacle.GetObstacleActor
// [0x00020400]  (iNative[34159])
struct UIPathingObstacle_execGetObstacleActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ISpawnPoint.GetInitialAction
// [0x12020000] 
struct UISpawnPoint_execGetInitialAction_Params
{
	EInitialActionType                                 ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ISpawnPoint.GetInitialDestination
// [0x12020000] 
struct UISpawnPoint_execGetInitialDestination_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.IStanceInterface.GetStanceComponent
// [0x00020400]  (iNative[34226])
struct UIStanceInterface_execGetStanceComponent_Params
{
	class UStanceComponent*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.ITimerBehavior.SetTimerState
// [0x12020000] 
struct UITimerBehavior_execSetTimerState_Params
{
	uint8_t                                            TimerId;                                          		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorTimerState                         TimerState;                                       		// 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ITimerBehavior.GetTimerState
// [0x12420000] 
struct UITimerBehavior_execGetTimerState_Params
{
	uint8_t                                            TimerId;                                          		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FBehaviorTimerState                         TimerState;                                       		// 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ITimerBehavior.GetTimeSeconds
// [0x12020000] 
struct UITimerBehavior_execGetTimeSeconds_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.LeviathanService.OnExternalUIChanged
// [0x00020402]  (iNative[2263])
struct ULeviathanService_execOnExternalUIChanged_Params
{
	uint32_t                                           bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.LeviathanService.GetLeviathanService
// [0x00022401]  (iNative[34127])
struct ULeviathanService_execGetLeviathanService_Params
{
	class ULeviathanService*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.MindTargetInfo.IsTargetingMe
// [0x00020402]  (iNative[2498])
struct UMindTargetInfo_execIsTargetingMe_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PerchTag.RequiresEnd
// [0x00020401]  (iNative[35711])
struct UPerchTag_execRequiresEnd_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PerchTag.RequiresIdle
// [0x00020401]  (iNative[35712])
struct UPerchTag_execRequiresIdle_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PerchTag.RequiresStart
// [0x00020401]  (iNative[35713])
struct UPerchTag_execRequiresStart_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PerchTag.RotateToPerch
// [0x00020401]  (iNative[35776])
struct UPerchTag_execRotateToPerch_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PerchTag.AlignToPerch
// [0x00020401]  (iNative[31835])
struct UPerchTag_execAlignToPerch_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PerchTag.GetIdleType
// [0x00020401]  (iNative[34111])
struct UPerchTag_execGetIdleType_Params
{
	EPerchIdleType                                     ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.NavAnimConnection.GetNode
// [0x00020401]  (iNative[34147])
struct UNavAnimConnection_execGetNode_Params
{
	class ANavAnimNode*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PathingObstacleActor.GetObstacleInfo
// [0x00024400]  (iNative[34160])
struct APathingObstacleActor_execGetObstacleInfo_Params
{
	uint32_t                                           bFillInfo : 1;                                    		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class UPathingObstacleInfo*                        ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PathingObstacleActor.SetObstacleInfo
// [0x00020400]  (iNative[35913])
struct APathingObstacleActor_execSetObstacleInfo_Params
{
	class UPathingObstacleInfo*                        Info;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PathingObstacleActor.OnToggle
// [0x00020400]  (iNative[2212])
struct APathingObstacleActor_execOnToggle_Params
{
	class USeqAct_Toggle*                              ToggleAction;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PathingObstacleActor.GetObstacleActor
// [0x00020400]  (iNative[34159])
struct APathingObstacleActor_execGetObstacleActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PawnRelevanceUtilityFixedCost.SetMaxLineChecks
// [0x00020400]  (iNative[35905])
struct UPawnRelevanceUtilityFixedCost_execSetMaxLineChecks_Params
{
	int32_t                                            CheckCount;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PawnRelevanceUtilityFixedCost.SetBucket
// [0x00020400]  (iNative[35887])
struct UPawnRelevanceUtilityFixedCost_execSetBucket_Params
{
	int32_t                                            BucketNum;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              BucketDistance;                                   		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MaxLineChecks;                                    		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MaxIterations;                                    		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PawnRelevanceUtilityFixedCost.ShowBucketSettings
// [0x00020400]  (iNative[35957])
struct UPawnRelevanceUtilityFixedCost_execShowBucketSettings_Params
{
};

// Function GearboxFramework.PawnRelevanceUtilityFixedCost.PrintBuckets
// [0x00020400]  (iNative[35538])
struct UPawnRelevanceUtilityFixedCost_execPrintBuckets_Params
{
};

// Function GearboxFramework.PhysicsJumpConnection.GetNode
// [0x00020401]  (iNative[34147])
struct UPhysicsJumpConnection_execGetNode_Params
{
	class APhysicsJumpNode*                            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PhysicsStateExpressionEvaluator.Evaluate
// [0x00020400]  (iNative[22809])
struct UPhysicsStateExpressionEvaluator_execEvaluate_Params
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PopUpDebugBarGraph.Display
// [0x00020400]  (iNative[7436])
struct UPopUpDebugBarGraph_execDisplay_Params
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UCanvas*                                     Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PopUpDebugBarGraph.GetValue
// [0x00020400]  (iNative[24017])
struct UPopUpDebugBarGraph_execGetValue_Params
{
	int32_t                                            ColumnNdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PopUpDebugBarGraph.SetValue
// [0x00020400]  (iNative[35941])
struct UPopUpDebugBarGraph_execSetValue_Params
{
	int32_t                                            ColumnNdx;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              NewValue;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PopUpDebugBarGraph.AddNewColumn
// [0x00024400]  (iNative[31675])
struct UPopUpDebugBarGraph_execAddNewColumn_Params
{
	struct FColor                                      ColumnColor;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      HeaderText;                                       		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              Value;                                            		// 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PopUpDebugBarGraph.AddTitleText
// [0x00020400]  (iNative[31683])
struct UPopUpDebugBarGraph_execAddTitleText_Params
{
	class FString                                      NewTitleText;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.RegionDefinition.GetDefaultRegionGameStage
// [0x00420400]  (iNative[34079])
struct URegionDefinition_execGetDefaultRegionGameStage_Params
{
	int32_t                                            MinGameStage;                                     		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            MaxGameStage;                                     		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            AwesomeLevel;                                     		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            GameStageIncreaseOverPlayerLevel;                 		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.RegionDefinition.TestRegionGameStage
// [0x00424400]  (iNative[36428])
struct URegionDefinition_execTestRegionGameStage_Params
{
	int32_t                                            GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            AwesomeLevel;                                     		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bDefaultGameStage : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.RegionDefinition.GetRegionGameStage
// [0x00424400]  (iNative[34191])
struct URegionDefinition_execGetRegionGameStage_Params
{
	int32_t                                            GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            AwesomeLevel;                                     		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bDefaultGameStage : 1;                            		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.RootMotionDefinition.CausesRootMotion
// [0x00020401]  (iNative[32696])
struct URootMotionDefinition_execCausesRootMotion_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.RotationComponent.IsHumanRotationDebugEnabled
// [0x00022400]  (iNative[34665])
struct URotationComponent_execIsHumanRotationDebugEnabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.RotationComponent.ToggleHumanRotationDebug
// [0x00022400]  (iNative[36534])
struct URotationComponent_execToggleHumanRotationDebug_Params
{
};

// Function GearboxFramework.RotationComponent.IsAIRotationDebugEnabled
// [0x00022400]  (iNative[34645])
struct URotationComponent_execIsAIRotationDebugEnabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.RotationComponent.ToggleAIRotationDebug
// [0x00022400]  (iNative[36521])
struct URotationComponent_execToggleAIRotationDebug_Params
{
};

// Function GearboxFramework.RotationComponent.DrawRotationDebug
// [0x00022400]  (iNative[33311])
struct URotationComponent_execDrawRotationDebug_Params
{
};

// Function GearboxFramework.RotationComponent.TurnAnimFinished
// [0x00020402]  (iNative[2566])
struct URotationComponent_execTurnAnimFinished_Params
{
};

// Function GearboxFramework.RotationComponent.Initialize
// [0x00020400]  (iNative[14833])
struct URotationComponent_execInitialize_Params
{
};

// Function GearboxFramework.SeqAct_AIScripted.GetScriptedStateName
// [0x12020000] 
struct USeqAct_AIScripted_execGetScriptedStateName_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SeqAct_AIScripted.Deactivate
// [0x00020400]  (iNative[14975])
struct USeqAct_AIScripted_execDeactivate_Params
{
	class UIAIInterface*                               AIInterface;                                      		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SeqAct_AIScripted.Activate
// [0x00020400]  (iNative[2290])
struct USeqAct_AIScripted_execActivate_Params
{
	class UIAIInterface*                               AIInterface;                                      		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SeqAct_AICombatVolume.Activate
// [0x00020400]  (iNative[2290])
struct USeqAct_AICombatVolume_execActivate_Params
{
	class UIAIInterface*                               AIInterface;                                      		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SeqAct_AIScriptedAbort.Activate
// [0x00020400]  (iNative[2290])
struct USeqAct_AIScriptedAbort_execActivate_Params
{
	class UIAIInterface*                               AIInterface;                                      		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SeqAct_AIScriptedAction.Activate
// [0x00020400]  (iNative[2290])
struct USeqAct_AIScriptedAction_execActivate_Params
{
	class UIAIInterface*                               AIInterface;                                      		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SeqAct_AIScriptedMove.Activate
// [0x00020400]  (iNative[2290])
struct USeqAct_AIScriptedMove_execActivate_Params
{
	class UIAIInterface*                               AIInterface;                                      		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SeqAct_AIScriptedProvoke.Activate
// [0x00020400]  (iNative[2290])
struct USeqAct_AIScriptedProvoke_execActivate_Params
{
	class UIAIInterface*                               AIInterface;                                      		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SeqAct_AllPlayersInVolume.AllPlayersInVolumes
// [0x00020400]  (iNative[31851])
struct USeqAct_AllPlayersInVolume_execAllPlayersInVolumes_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SeqAct_AllPlayersInVolume.PlayerIsInAVolume
// [0x00020400]  (iNative[35456])
struct USeqAct_AllPlayersInVolume_execPlayerIsInAVolume_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SeqEvent_EncounterWaveComplete.NotifyWaveComplete
// [0x00020400]  (iNative[35185])
struct USeqEvent_EncounterWaveComplete_execNotifyWaveComplete_Params
{
	int32_t                                            nWave;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SeqEvent_SpawnedActor.NotifySpawnedActor
// [0x12020800] 
struct USeqEvent_SpawnedActor_eventNotifySpawnedActor_Params
{
	class AActor*                                      SpawnedActor;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class ASpawner*                                    InDestSpawner;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      InSpawnPoint;                                     		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AWorldInfo*                                  InOriginator;                                     		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.ShowDebugHelpers.DisplayMultiColumnDebugOutput
// [0x12422000] 
struct UShowDebugHelpers_execDisplayMultiColumnDebugOutput_Params
{
	class TArray<struct FDebugEntryData>               DebugInfo;                                        		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class AHUD*                                        HUD;                                              		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0018 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x001C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SparkInterface.ClearSparkRestartAuthenticationCompleteDelegate
// [0x12020000] 
struct USparkInterface_execClearSparkRestartAuthenticationCompleteDelegate_Params
{
	struct FScriptDelegate                             AuthCompleteDelegate;                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.AddSparkRestartAuthenticationCompleteDelegate
// [0x12020000] 
struct USparkInterface_execAddSparkRestartAuthenticationCompleteDelegate_Params
{
	struct FScriptDelegate                             AuthCompleteDelegate;                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.GetDiscoveryService
// [0x00020400]  (iNative[34089])
struct USparkInterface_execGetDiscoveryService_Params
{
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetArchwayService
// [0x00020400]  (iNative[34044])
struct USparkInterface_execGetArchwayService_Params
{
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetDebug
// [0x00420400]  (iNative[34075])
struct USparkInterface_execGetDebug_Params
{
	class TArray<class FString>                        out_DebugStrings;                                 		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.GetNewsService
// [0x12020000] 
struct USparkInterface_execGetNewsService_Params
{
	class USparkNews*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetJson
// [0x00022400]  (iNative[34123])
struct USparkInterface_execGetJson_Params
{
	struct FSparkResult                                RequestResult;                                    		// 0x0000 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UJsonObject*                                 ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetTitleStorageServiceConfiguration
// [0x00020400]  (iNative[34246])
struct USparkInterface_execGetTitleStorageServiceConfiguration_Params
{
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetTitleStorageUrl
// [0x00020400]  (iNative[34247])
struct USparkInterface_execGetTitleStorageUrl_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.CreateGearboxServerData
// [0x12020800] 
struct USparkInterface_eventCreateGearboxServerData_Params
{
	class UGearboxServerData*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetGearboxServerData
// [0x12020800] 
struct USparkInterface_eventGetGearboxServerData_Params
{
	class UGearboxServerData*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.SignOutGearboxAccount
// [0x12020000] 
struct USparkInterface_execSignOutGearboxAccount_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterface.SignInGearboxAccount
// [0x12020000] 
struct USparkInterface_execSignInGearboxAccount_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterface.GetGearboxAccountData
// [0x12020800] 
struct USparkInterface_eventGetGearboxAccountData_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGearboxAccountData*                         ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.IsGearboxAccountAuthenticated
// [0x12020800] 
struct USparkInterface_eventIsGearboxAccountAuthenticated_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.IsGearboxAccountSignedIn
// [0x12020000] 
struct USparkInterface_execIsGearboxAccountSignedIn_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.ClearCachedMessages
// [0x00020400]  (iNative[32748])
struct USparkInterface_execClearCachedMessages_Params
{
};

// Function GearboxFramework.SparkInterface.GetUserMessage
// [0x00020400]  (iNative[34253])
struct USparkInterface_execGetUserMessage_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.GetEmergencyMessage
// [0x00020400]  (iNative[34093])
struct USparkInterface_execGetEmergencyMessage_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.SetUserMessage
// [0x00020400]  (iNative[35940])
struct USparkInterface_execSetUserMessage_Params
{
	class FString                                      Message;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.SetEmergencyMessage
// [0x00020400]  (iNative[35897])
struct USparkInterface_execSetEmergencyMessage_Params
{
	class FString                                      Message;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.GetPlatformLoginNameFromUser
// [0x12020800] 
struct USparkInterface_eventGetPlatformLoginNameFromUser_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.IncreaseInteractionTries
// [0x12020000] 
struct USparkInterface_execIncreaseInteractionTries_Params
{
};

// Function GearboxFramework.SparkInterface.GetInteractionTries
// [0x12020000] 
struct USparkInterface_execGetInteractionTries_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetInteractionGraceTries
// [0x12020000] 
struct USparkInterface_execGetInteractionGraceTries_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetInteractionPunishmentMinWaitSeconds
// [0x12020000] 
struct USparkInterface_execGetInteractionPunishmentMinWaitSeconds_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetInteractionMinWaitSeconds
// [0x12020000] 
struct USparkInterface_execGetInteractionMinWaitSeconds_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.IsTmsComplete
// [0x00020400]  (iNative[34698])
struct USparkInterface_execIsTmsComplete_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.SetTmsComplete
// [0x12020000] 
struct USparkInterface_execSetTmsComplete_Params
{
};

// Function GearboxFramework.SparkInterface.CreateServerInitProcess
// [0x12020000] 
struct USparkInterface_execCreateServerInitProcess_Params
{
	class USparkInitializationProcess*                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.GetInitProcess
// [0x12020000] 
struct USparkInterface_execGetInitProcess_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USparkInitializationProcess*                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.StartSparkInitialization
// [0x12020000] 
struct USparkInterface_execStartSparkInitialization_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                      		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterface.IsSparkEnabled
// [0x12020800] 
struct USparkInterface_eventIsSparkEnabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.CleanupRequests
// [0x12020000] 
struct USparkInterface_execCleanupRequests_Params
{
};

// Function GearboxFramework.SparkInterface.IssueSparkStringRequestWithAuth
// [0x12420000] 
struct USparkInterface_execIssueSparkStringRequestWithAuth_Params
{
	struct FHttpParameters                             HttpRequestParameters;                            		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      URL;                                              		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RequestData;                                      		// 0x0060 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      AuthToken;                                        		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0080 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0090 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.IssueSparkStringRequest
// [0x12420000] 
struct USparkInterface_execIssueSparkStringRequest_Params
{
	struct FHttpParameters                             HttpRequestParameters;                            		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      URL;                                              		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RequestData;                                      		// 0x0060 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0080 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.IssueSparkRequestWithAuth
// [0x12420000] 
struct USparkInterface_execIssueSparkRequestWithAuth_Params
{
	struct FHttpParameters                             HttpRequestParameters;                            		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      URL;                                              		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              RequestData;                                      		// 0x0060 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      AuthToken;                                        		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0080 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0090 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterface.IssueSparkRequest
// [0x12420000] 
struct USparkInterface_execIssueSparkRequest_Params
{
	struct FHttpParameters                             HttpRequestParameters;                            		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      URL;                                              		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              RequestData;                                      		// 0x0060 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0080 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.DumpServices
// [0x12020000] 
struct USparkInterfaceImpl_execDumpServices_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.GetRapidJson
// [0x00020400]  (iNative[34187])
struct USparkInterfaceImpl_execGetRapidJson_Params
{
	struct FSparkResult                                RequestResult;                                    		// 0x0000 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FPointer                                    Allocator;                                        		// 0x0028 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FPointer                                    ReturnValue;                                      		// 0x0030 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetJson
// [0x00022400]  (iNative[34123])
struct USparkInterfaceImpl_execGetJson_Params
{
	struct FSparkResult                                RequestResult;                                    		// 0x0000 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UJsonObject*                                 ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetDebug
// [0x00420400]  (iNative[34075])
struct USparkInterfaceImpl_execGetDebug_Params
{
	class TArray<class FString>                        out_DebugStrings;                                 		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetNewsService
// [0x12020000] 
struct USparkInterfaceImpl_execGetNewsService_Params
{
	class USparkNews*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetTitleStorageServiceConfiguration
// [0x00020400]  (iNative[34246])
struct USparkInterfaceImpl_execGetTitleStorageServiceConfiguration_Params
{
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetTitleStorageUrl
// [0x00020400]  (iNative[34247])
struct USparkInterfaceImpl_execGetTitleStorageUrl_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.OnSparkInitialized
// [0x12020002] 
struct USparkInterfaceImpl_execOnSparkInitialized_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InitializedResult;                                		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UGearboxData*                                Data;                                             		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterfaceImpl.IsPrimaryPlayer
// [0x12020000] 
struct USparkInterfaceImpl_execIsPrimaryPlayer_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IncreaseInteractionTries
// [0x12020000] 
struct USparkInterfaceImpl_execIncreaseInteractionTries_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionTries
// [0x12020000] 
struct USparkInterfaceImpl_execGetInteractionTries_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionGraceTries
// [0x12020000] 
struct USparkInterfaceImpl_execGetInteractionGraceTries_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionPunishmentMinWaitSeconds
// [0x12020000] 
struct USparkInterfaceImpl_execGetInteractionPunishmentMinWaitSeconds_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetInteractionMinWaitSeconds
// [0x12020000] 
struct USparkInterfaceImpl_execGetInteractionMinWaitSeconds_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.ClearCachedMessages
// [0x00020400]  (iNative[32748])
struct USparkInterfaceImpl_execClearCachedMessages_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.GetUserMessage
// [0x00020400]  (iNative[34253])
struct USparkInterfaceImpl_execGetUserMessage_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetEmergencyMessage
// [0x00020400]  (iNative[34093])
struct USparkInterfaceImpl_execGetEmergencyMessage_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.SetUserMessage
// [0x00020400]  (iNative[35940])
struct USparkInterfaceImpl_execSetUserMessage_Params
{
	class FString                                      Message;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.SetEmergencyMessage
// [0x00020400]  (iNative[35897])
struct USparkInterfaceImpl_execSetEmergencyMessage_Params
{
	class FString                                      Message;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.GetDiscoveryService
// [0x00020400]  (iNative[34089])
struct USparkInterfaceImpl_execGetDiscoveryService_Params
{
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetArchwayService
// [0x00020400]  (iNative[34044])
struct USparkInterfaceImpl_execGetArchwayService_Params
{
	class USparkServiceConfiguration*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IsTmsComplete
// [0x00020400]  (iNative[34698])
struct USparkInterfaceImpl_execIsTmsComplete_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.SetTmsComplete
// [0x12020000] 
struct USparkInterfaceImpl_execSetTmsComplete_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.ClearSparkRestartAuthenticationCompleteDelegate
// [0x12020000] 
struct USparkInterfaceImpl_execClearSparkRestartAuthenticationCompleteDelegate_Params
{
	struct FScriptDelegate                             AuthCompleteDelegate;                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.AddSparkRestartAuthenticationCompleteDelegate
// [0x12020000] 
struct USparkInterfaceImpl_execAddSparkRestartAuthenticationCompleteDelegate_Params
{
	struct FScriptDelegate                             AuthCompleteDelegate;                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.OnRestartSparkInitialized
// [0x12020002] 
struct USparkInterfaceImpl_execOnRestartSparkInitialized_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InitializedResult;                                		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UGearboxData*                                Data;                                             		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterfaceImpl.UpdateRequestsAfterRestart
// [0x00020400]  (iNative[36619])
struct USparkInterfaceImpl_execUpdateRequestsAfterRestart_Params
{
	uint8_t                                            InitializedResult;                                		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UGearboxData*                                Data;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterfaceImpl.RestartSparkInitialization
// [0x12020800] 
struct USparkInterfaceImpl_eventRestartSparkInitialization_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterfaceImpl.RestartServerSparkInitialization
// [0x12020800] 
struct USparkInterfaceImpl_eventRestartServerSparkInitialization_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.StartSparkInitialization
// [0x12020000] 
struct USparkInterfaceImpl_execStartSparkInitialization_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             SparkInitializedDelegate;                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             EntitlementsUpdatedDelegate;                      		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.ResetInitializationStatus
// [0x12020000] 
struct USparkInterfaceImpl_execResetInitializationStatus_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterfaceImpl.RemoveInitProcess
// [0x12040001] 
struct USparkInterfaceImpl_execRemoveInitProcess_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterfaceImpl.CreateInitProcess
// [0x12040001] 
struct USparkInterfaceImpl_execCreateInitProcess_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USparkInitializationProcess*                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.CreateServerInitProcess
// [0x12020000] 
struct USparkInterfaceImpl_execCreateServerInitProcess_Params
{
	class USparkInitializationProcess*                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetServerInitProcess
// [0x12020000] 
struct USparkInterfaceImpl_execGetServerInitProcess_Params
{
	class USparkInitializationProcess*                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetInitProcess
// [0x12020000] 
struct USparkInterfaceImpl_execGetInitProcess_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USparkInitializationProcess*                 ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.SignInGearboxAccount
// [0x12020000] 
struct USparkInterfaceImpl_execSignInGearboxAccount_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterfaceImpl.CreateGearboxAccountData
// [0x12040001] 
struct USparkInterfaceImpl_execCreateGearboxAccountData_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGearboxAccountData*                         ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetGearboxAccountData
// [0x12020800] 
struct USparkInterfaceImpl_eventGetGearboxAccountData_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGearboxAccountData*                         ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.CreateGearboxServerData
// [0x12020800] 
struct USparkInterfaceImpl_eventCreateGearboxServerData_Params
{
	class UGearboxServerData*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetGearboxServerData
// [0x12020800] 
struct USparkInterfaceImpl_eventGetGearboxServerData_Params
{
	class UGearboxServerData*                          ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetAccountIndex
// [0x12440001] 
struct USparkInterfaceImpl_execGetAccountIndex_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Index;                                            		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.SignOutGearboxAccount
// [0x12020000] 
struct USparkInterfaceImpl_execSignOutGearboxAccount_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterfaceImpl.ClearGearboxAccountData
// [0x12040001] 
struct USparkInterfaceImpl_execClearGearboxAccountData_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkInterfaceImpl.IsGearboxAccountSignedIn
// [0x12020000] 
struct USparkInterfaceImpl_execIsGearboxAccountSignedIn_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IsGearboxAccountAuthenticated
// [0x12020800] 
struct USparkInterfaceImpl_eventIsGearboxAccountAuthenticated_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.GetPlatformLoginNameFromUser
// [0x12020800] 
struct USparkInterfaceImpl_eventGetPlatformLoginNameFromUser_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkInterfaceImpl.IsShiftEnabled
// [0x12020800] 
struct USparkInterfaceImpl_eventIsShiftEnabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IsSparkEnabled
// [0x12020800] 
struct USparkInterfaceImpl_eventIsSparkEnabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.WithShift
// [0x00022400]  (iNative[36752])
struct USparkInterfaceImpl_execWithShift_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.WithSpark
// [0x00022400]  (iNative[36753])
struct USparkInterfaceImpl_execWithSpark_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.CleanupRequests
// [0x00020400]  (iNative[32745])
struct USparkInterfaceImpl_execCleanupRequests_Params
{
};

// Function GearboxFramework.SparkInterfaceImpl.IssueSparkStringRequestWithAuth
// [0x00420400]  (iNative[34696])
struct USparkInterfaceImpl_execIssueSparkStringRequestWithAuth_Params
{
	struct FHttpParameters                             HttpRequestParameters;                            		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      URL;                                              		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RequestData;                                      		// 0x0060 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      AuthToken;                                        		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0080 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0090 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IssueSparkStringRequest
// [0x00420400]  (iNative[34695])
struct USparkInterfaceImpl_execIssueSparkStringRequest_Params
{
	struct FHttpParameters                             HttpRequestParameters;                            		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      URL;                                              		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      RequestData;                                      		// 0x0060 (0x0010) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0080 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IssueSparkRequestWithAuth
// [0x00420400]  (iNative[34694])
struct USparkInterfaceImpl_execIssueSparkRequestWithAuth_Params
{
	struct FHttpParameters                             HttpParameters;                                   		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      URL;                                              		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              RequestData;                                      		// 0x0060 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      AuthToken;                                        		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0080 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0090 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkInterfaceImpl.IssueSparkRequest
// [0x00420400]  (iNative[34693])
struct USparkInterfaceImpl_execIssueSparkRequest_Params
{
	struct FHttpParameters                             HttpParameters;                                   		// 0x0000 (0x0050) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      URL;                                              		// 0x0050 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              RequestData;                                      		// 0x0060 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	struct FScriptDelegate                             SparkRequestCompleteDelegate;                     		// 0x0070 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0080 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkNews.HandleNewsRetrievalResponse
// [0x00480402]  (iNative[2567])
struct USparkNews_execHandleNewsRetrievalResponse_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkNews.OnNewsRequestComplete
// [0x00120000] 
struct USparkNews_execOnNewsRequestComplete_Params
{
	uint8_t                                            Result;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkServiceConfiguration.DumpParameters
// [0x12020000] 
struct USparkServiceConfiguration_execDumpParameters_Params
{
};

// Function GearboxFramework.SparkServiceConfiguration.GetParameters
// [0x12020000] 
struct USparkServiceConfiguration_execGetParameters_Params
{
	struct FServiceResult                              ReturnValue;                                      		// 0x0000 (0x0020) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkServiceConfiguration.ReplaceParameters
// [0x12020000] 
struct USparkServiceConfiguration_execReplaceParameters_Params
{
	class USparkServiceConfiguration*                  Service;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkServiceConfiguration.CanIssueRequest
// [0x00020400]  (iNative[32674])
struct USparkServiceConfiguration_execCanIssueRequest_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkServiceConfiguration.ScheduleRetry
// [0x00020400]  (iNative[35821])
struct USparkServiceConfiguration_execScheduleRetry_Params
{
};

// Function GearboxFramework.SparkServiceConfiguration.ResetRetries
// [0x00020400]  (iNative[35731])
struct USparkServiceConfiguration_execResetRetries_Params
{
};

// Function GearboxFramework.SparkServiceConfiguration.GetFloatParameter
// [0x00020400]  (iNative[23720])
struct USparkServiceConfiguration_execGetFloatParameter_Params
{
	class FString                                      KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              DefaultValue;                                     		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              MinimumValue;                                     		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              MaximumValue;                                     		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkServiceConfiguration.GetIntParameter
// [0x00020400]  (iNative[34121])
struct USparkServiceConfiguration_execGetIntParameter_Params
{
	class FString                                      KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            DefaultValue;                                     		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MinimumValue;                                     		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MaximumValue;                                     		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SparkServiceConfiguration.GetStringParameter
// [0x00020400]  (iNative[34233])
struct USparkServiceConfiguration_execGetStringParameter_Params
{
	class FString                                      KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Default;                                          		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkServiceConfiguration.GetParameter
// [0x00020400]  (iNative[34164])
struct USparkServiceConfiguration_execGetParameter_Params
{
	class FString                                      KeyNameToSearchFor;                               		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkServiceConfiguration.LoadService
// [0x00420400]  (iNative[34847])
struct USparkServiceConfiguration_execLoadService_Params
{
	struct FServiceResult                              Service;                                          		// 0x0000 (0x0020) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkServiceConfiguration.LoadOverrides
// [0x00020400]  (iNative[34846])
struct USparkServiceConfiguration_execLoadOverrides_Params
{
};

// Function GearboxFramework.SparkTypes.UTF8toString
// [0x00022400]  (iNative[36652])
struct USparkTypes_execUTF8toString_Params
{
	class TArray<uint8_t>                              inputBytes;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SparkTypes.OnQueueUpdated
// [0x00120000] 
struct USparkTypes_execOnQueueUpdated_Params
{
	class UGearboxAccountData*                         GbxAccount;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkTypes.OnQueueStatusUpdated
// [0x00120000] 
struct USparkTypes_execOnQueueStatusUpdated_Params
{
	class UGearboxAccountData*                         GbxAccount;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkTypes.OnSparkRestartAuthenticationComplete
// [0x00120000] 
struct USparkTypes_execOnSparkRestartAuthenticationComplete_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InitializedResult;                                		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkTypes.OnEntitlementsUpdated
// [0x00120000] 
struct USparkTypes_execOnEntitlementsUpdated_Params
{
	class UGearboxAccountData*                         GbxAccount;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkTypes.OnSparkInitialized
// [0x00120000] 
struct USparkTypes_execOnSparkInitialized_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InitializedResult;                                		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UGearboxData*                                Data;                                             		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SparkTypes.OnSparkRequestComplete
// [0x00520000] 
struct USparkTypes_execOnSparkRequestComplete_Params
{
	struct FSparkResult                                Result;                                           		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SpawnDefinition.IsAllSpawnTypesDebugEnabled
// [0x00022400]  (iNative[34646])
struct USpawnDefinition_execIsAllSpawnTypesDebugEnabled_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnDefinition.ToggleAllSpawnTypesDebug
// [0x00022400]  (iNative[36524])
struct USpawnDefinition_execToggleAllSpawnTypesDebug_Params
{
};

// Function GearboxFramework.SpawnDefinition.GetRandomFactory
// [0x00020400]  (iNative[34186])
struct USpawnDefinition_execGetRandomFactory_Params
{
	class ASpawner*                                    Spawner;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameStage;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class USpawnFactory*                               ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnEncounter.GetDebugSpawnData
// [0x00420400]  (iNative[34077])
struct ASpawnEncounter_execGetDebugSpawnData_Params
{
	int32_t                                            Wave;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumSpawned;                                       		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            NumTotalToSpawn;                                  		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            NumDead;                                          		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpawnEncounter.TriggerKismetAllSpawnedEvent
// [0x12020800] 
struct ASpawnEncounter_eventTriggerKismetAllSpawnedEvent_Params
{
};

// Function GearboxFramework.SpawnEncounter.TriggerKismetDeathEvent
// [0x12020800] 
struct ASpawnEncounter_eventTriggerKismetDeathEvent_Params
{
};

// Function GearboxFramework.SpawnEncounter.OnToggle
// [0x12020102] 
struct ASpawnEncounter_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnEncounter.UpdateSpawnerEnabledStates
// [0x00020400]  (iNative[36621])
struct ASpawnEncounter_execUpdateSpawnerEnabledStates_Params
{
	int32_t                                            nWave;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bUpdateIfOnlyOneWave : 1;                         		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpawnEncounter.UpdateKismetNotifications
// [0x00020400]  (iNative[36618])
struct ASpawnEncounter_execUpdateKismetNotifications_Params
{
};

// Function GearboxFramework.Spawner.GetActiveActor
// [0x00020401]  (iNative[34024])
struct ASpawner_execGetActiveActor_Params
{
	int32_t                                            Idx;                                              		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Spawner.GetNumActiveActors
// [0x00020401]  (iNative[34149])
struct ASpawner_execGetNumActiveActors_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Spawner.GetNumSpawned
// [0x12020000] 
struct ASpawner_execGetNumSpawned_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Spawner.GetNumAlive
// [0x12020000] 
struct ASpawner_execGetNumAlive_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Spawner.GetNumDied
// [0x12020000] 
struct ASpawner_execGetNumDied_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Spawner.DisplayDebug
// [0x12420100] 
struct ASpawner_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.Spawner.Destroyed
// [0x12020800] 
struct ASpawner_eventDestroyed_Params
{
};

// Function GearboxFramework.Spawner.GetRarity
// [0x00020400]  (iNative[34188])
struct ASpawner_execGetRarity_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Spawner.GetGameStage
// [0x00020400]  (iNative[23730])
struct ASpawner_execGetGameStage_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Spawner.GetSpawnerGameStage
// [0x00420400]  (iNative[34215])
struct ASpawner_execGetSpawnerGameStage_Params
{
	int32_t                                            GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Spawner.TriggerKismetAllSpawnedEvent
// [0x12020800] 
struct ASpawner_eventTriggerKismetAllSpawnedEvent_Params
{
};

// Function GearboxFramework.Spawner.ClearSequenceActionLink
// [0x12020800] 
struct ASpawner_eventClearSequenceActionLink_Params
{
};

// Function GearboxFramework.Spawner.SetSequenceActionLink
// [0x12020800] 
struct ASpawner_eventSetSequenceActionLink_Params
{
	class UGearboxSeqAct_SpawnerLink*                  Link;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Spawner.SetEnabledStatus
// [0x00020400]  (iNative[35898])
struct ASpawner_execSetEnabledStatus_Params
{
	uint32_t                                           bEnable : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.Spawner.OnToggle
// [0x12020102] 
struct ASpawner_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Spawner.GetNumLeftToSpawnAndStillAlive
// [0x00420401]  (iNative[34154])
struct ASpawner_execGetNumLeftToSpawnAndStillAlive_Params
{
	int32_t                                            NumLeftToSpawn;                                   		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            NumStillAlive;                                    		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.Spawner.GetNextSpawnTime
// [0x00020400]  (iNative[34146])
struct ASpawner_execGetNextSpawnTime_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.Spawner.RespawnKilledActors
// [0x00020400]  (iNative[35746])
struct ASpawner_execRespawnKilledActors_Params
{
	float                                              PercentageOfKilledActorsToRespawn;                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.Spawner.DoSpawning
// [0x00020400]  (iNative[33306])
struct ASpawner_execDoSpawning_Params
{
	class USpawnMaster*                                SpawnMaster;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AreaSpawner.DisplayDebug
// [0x12420100] 
struct AAreaSpawner_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.AreaSpawner.RespawnKilledActors
// [0x00020400]  (iNative[35746])
struct AAreaSpawner_execRespawnKilledActors_Params
{
	float                                              PercentageOfKilledActorsToRespawn;                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.AreaSpawner.DoSpawning
// [0x00020400]  (iNative[33306])
struct AAreaSpawner_execDoSpawning_Params
{
	class USpawnMaster*                                SpawnMaster;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DenSpawner.GetAIChild
// [0x00020400]  (iNative[34032])
struct ADenSpawner_execGetAIChild_Params
{
	int32_t                                            ChildIdx;                                         		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UIAIInterface*                               ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.GetNumAIChildren
// [0x00020400]  (iNative[34150])
struct ADenSpawner_execGetNumAIChildren_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.InitSequence
// [0x00020400]  (iNative[34561])
struct ADenSpawner_execInitSequence_Params
{
	class UActionSequence*                             NewSequence;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DenSpawner.GetAIDefinition
// [0x00020400]  (iNative[34034])
struct ADenSpawner_execGetAIDefinition_Params
{
	class UAIDefinition*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.SetAIComponent
// [0x00020400]  (iNative[35883])
struct ADenSpawner_execSetAIComponent_Params
{
	class UAIComponent*                                NewAIComp;                                        		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.DenSpawner.GetAIComponent
// [0x00020400]  (iNative[34033])
struct ADenSpawner_execGetAIComponent_Params
{
	class UAIComponent*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.DenSpawner.GetAIParent
// [0x00020400]  (iNative[34038])
struct ADenSpawner_execGetAIParent_Params
{
	class UIAIInterface*                               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.GetAILocation
// [0x00020400]  (iNative[34035])
struct ADenSpawner_execGetAILocation_Params
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.GetAIActor
// [0x00020400]  (iNative[34031])
struct ADenSpawner_execGetAIActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.CanTickAI
// [0x00020400]  (iNative[32687])
struct ADenSpawner_execCanTickAI_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.SetAllegiance
// [0x00020400]  (iNative[28695])
struct ADenSpawner_execSetAllegiance_Params
{
	class UPawnAllegiance*                             NewAllegiance;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DenSpawner.GetAllegiance
// [0x00020400]  (iNative[34040])
struct ADenSpawner_execGetAllegiance_Params
{
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.OnEndDenWarmup
// [0x00020400]  (iNative[35273])
struct ADenSpawner_execOnEndDenWarmup_Params
{
	class UGearboxSeqAct_EndDenWarmup*                 Action;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DenSpawner.NotifyWarmupFinished
// [0x00020402]  (iNative[2444])
struct ADenSpawner_execNotifyWarmupFinished_Params
{
};

// Function GearboxFramework.DenSpawner.GetDenMembers
// [0x00420400]  (iNative[34080])
struct ADenSpawner_execGetDenMembers_Params
{
	class TArray<class AActor*>                        Members;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.DenSpawner.TriggerKismetDeathEvent
// [0x12020800] 
struct ADenSpawner_eventTriggerKismetDeathEvent_Params
{
};

// Function GearboxFramework.DenSpawner.SpawnedCanAttackVehicles
// [0x12020000] 
struct ADenSpawner_execSpawnedCanAttackVehicles_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.GetNumSpawned
// [0x12020000] 
struct ADenSpawner_execGetNumSpawned_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.GetNumAlive
// [0x12020000] 
struct ADenSpawner_execGetNumAlive_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.GetNumDied
// [0x12020000] 
struct ADenSpawner_execGetNumDied_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.DenSpawner.PostRenderFor
// [0x12020900] 
struct ADenSpawner_eventPostRenderFor_Params
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UCanvas*                                     Canvas;                                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CameraPosition;                                   		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CameraDir;                                        		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DenSpawner.DisplayDebug
// [0x12420100] 
struct ADenSpawner_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.DenSpawner.EnableDebugging
// [0x00020400]  (iNative[33540])
struct ADenSpawner_execEnableDebugging_Params
{
	uint32_t                                           bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.DenSpawner.RespawnKilledActors
// [0x00020400]  (iNative[35746])
struct ADenSpawner_execRespawnKilledActors_Params
{
	float                                              PercentageOfKilledActorsToRespawn;                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DenSpawner.DoSpawning
// [0x00020400]  (iNative[33306])
struct ADenSpawner_execDoSpawning_Params
{
	class USpawnMaster*                                SpawnMaster;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.DenSpawner.PostBeginPlay
// [0x12020100] 
struct ADenSpawner_execPostBeginPlay_Params
{
};

// Function GearboxFramework.DenSpawner_Dynamic.Destroyed
// [0x12020800] 
struct ADenSpawner_Dynamic_eventDestroyed_Params
{
};

// Function GearboxFramework.DenSpawner_Dynamic.GetSpawnerGameStage
// [0x00420400]  (iNative[34215])
struct ADenSpawner_Dynamic_execGetSpawnerGameStage_Params
{
	int32_t                                            GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            AwesomeLevel;                                     		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PointSpawner.GetInitialDestination
// [0x12020000] 
struct APointSpawner_execGetInitialDestination_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PointSpawner.GetInitialAction
// [0x12020000] 
struct APointSpawner_execGetInitialAction_Params
{
	EInitialActionType                                 ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.PointSpawner.RespawnKilledActors
// [0x00020400]  (iNative[35746])
struct APointSpawner_execRespawnKilledActors_Params
{
	float                                              PercentageOfKilledActorsToRespawn;                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.PointSpawner.DoSpawning
// [0x00020400]  (iNative[33306])
struct APointSpawner_execDoSpawning_Params
{
	class USpawnMaster*                                SpawnMaster;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnerAspect.DenStatRemoved
// [0x12020800] 
struct USpawnerAspect_eventDenStatRemoved_Params
{
	class APawn*                                       DenPawn;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnerAspect.DenStatAdded
// [0x12020800] 
struct USpawnerAspect_eventDenStatAdded_Params
{
	class APawn*                                       DenPawn;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnerAspect.EnabledStatusChanged
// [0x12020800] 
struct USpawnerAspect_eventEnabledStatusChanged_Params
{
	uint32_t                                           bIsEnabled : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bHasActiveActors : 1;                             		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpawnerAspect.AllActorsRemoved
// [0x12020800] 
struct USpawnerAspect_eventAllActorsRemoved_Params
{
	uint32_t                                           bFinishedSpawning : 1;                            		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpawnerAspect.OnActorDeath
// [0x12020800] 
struct USpawnerAspect_eventOnActorDeath_Params
{
	class AActor*                                      DeadActor;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnerAspect.OnSpawnActor
// [0x12020800] 
struct USpawnerAspect_eventOnSpawnActor_Params
{
	class AActor*                                      SpawnedActor;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnerAspect.Initialize
// [0x12020800] 
struct USpawnerAspect_eventInitialize_Params
{
};

// Function GearboxFramework.SpawnFactory.GetDescriptionOfFactoryOutput
// [0x12020800] 
struct USpawnFactory_eventGetDescriptionOfFactoryOutput_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SpawnFactory.ShouldSaveSpawnedActor
// [0x12022800] 
struct USpawnFactory_eventShouldSaveSpawnedActor_Params
{
	class USpawnMaster*                                Master;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ActorToSave;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactory.DestroySpawnedActor
// [0x12026800] 
struct USpawnFactory_eventDestroySpawnedActor_Params
{
	class USpawnMaster*                                Master;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SpawnerIdx;                                       		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ActorToDestroy;                                   		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USpawnFactory*                               SpawnFactory;                                     		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            CreationFlags;                                    		// 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDontSaveActor : 1;                               		// 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactory.SpawnActor
// [0x12020800] 
struct USpawnFactory_eventSpawnActor_Params
{
	class USpawnMaster*                                Master;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class ASpawner*                                    Spawner;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     SpawnLocationContextObject;                       		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SpawnLocation;                                    		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    SpawnRotation;                                    		// 0x0024 (0x000C) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameStage;                                        		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     SkinSource;                                       		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ReturnValue;                                      		// 0x0040 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactory.GetSpawnVisibilityBounds
// [0x12020800] 
struct USpawnFactory_eventGetSpawnVisibilityBounds_Params
{
	int32_t                                            GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FBoxSphereBounds                            ReturnValue;                                      		// 0x0008 (0x001C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactory.GetActorAllegiance
// [0x00020400]  (iNative[34026])
struct USpawnFactory_execGetActorAllegiance_Params
{
	int32_t                                            GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactory.GetActorSpawnCost
// [0x12020800] 
struct USpawnFactory_eventGetActorSpawnCost_Params
{
	int32_t                                            GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bCanSpawnTest : 1;                                		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactory.OnSpawnActor
// [0x12020800] 
struct USpawnFactory_eventOnSpawnActor_Params
{
	class AActor*                                      aNewActor;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnFactory.SetupMatineeForActor
// [0x12022800] 
struct USpawnFactory_eventSetupMatineeForActor_Params
{
	class AActor*                                      aNewActor;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnFactory.GetSpawnFactory
// [0x00020400]  (iNative[34218])
struct USpawnFactory_execGetSpawnFactory_Params
{
	class ASpawner*                                    Spawner;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameStage;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class USpawnFactory*                               ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactory.GetSpawnProbabilityAtThisGameStage
// [0x00020400]  (iNative[34222])
struct USpawnFactory_execGetSpawnProbabilityAtThisGameStage_Params
{
	int32_t                                            GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactory.IsFactoryWithin
// [0x00020400]  (iNative[34659])
struct USpawnFactory_execIsFactoryWithin_Params
{
	class USpawnFactory*                               TestFactory;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactory.CanSpawn
// [0x00020400]  (iNative[32683])
struct USpawnFactory_execCanSpawn_Params
{
	class ASpawner*                                    TestSpawner;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactoryGeneric.SpawnActor
// [0x12020800] 
struct USpawnFactoryGeneric_eventSpawnActor_Params
{
	class USpawnMaster*                                Master;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class ASpawner*                                    Spawner;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     SpawnLocationContextObject;                       		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SpawnLocation;                                    		// 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    SpawnRotation;                                    		// 0x0024 (0x000C) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameStage;                                        		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     SkinSource;                                       		// 0x0038 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ReturnValue;                                      		// 0x0040 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactoryGeneric.GetSpawnVisibilityBounds
// [0x12020800] 
struct USpawnFactoryGeneric_eventGetSpawnVisibilityBounds_Params
{
	int32_t                                            GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FBoxSphereBounds                            ReturnValue;                                      		// 0x0008 (0x001C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactorySpawnDefinition.GetSpawnFactory
// [0x00020400]  (iNative[34218])
struct USpawnFactorySpawnDefinition_execGetSpawnFactory_Params
{
	class ASpawner*                                    Spawner;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameStage;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class USpawnFactory*                               ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactorySpawnDefinition.GetActorAllegiance
// [0x00020400]  (iNative[34026])
struct USpawnFactorySpawnDefinition_execGetActorAllegiance_Params
{
	int32_t                                            GameStage;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AwesomeLevel;                                     		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UPawnAllegiance*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnFactorySpawnDefinition.IsFactoryWithin
// [0x00020400]  (iNative[34659])
struct USpawnFactorySpawnDefinition_execIsFactoryWithin_Params
{
	class USpawnFactory*                               TestFactory;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.GetActorSpawnedFromSpawner
// [0x00024400]  (iNative[34027])
struct USpawnMaster_execGetActorSpawnedFromSpawner_Params
{
	class ASpawner*                                    Spawner;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ActorIndex;                                       		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.DisplayDebugSpawnerRespawn
// [0x12420000] 
struct USpawnMaster_execDisplayDebugSpawnerRespawn_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpawnMaster.DisplayDebugEncounters
// [0x12420000] 
struct USpawnMaster_execDisplayDebugEncounters_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpawnMaster.DisplayDebug
// [0x12420100] 
struct USpawnMaster_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpawnMaster.DisplaySpawnDebug
// [0x12422000] 
struct USpawnMaster_execDisplaySpawnDebug_Params
{
	class AHUD*                                        HUD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpawnMaster.GetSavedActorDebugInfoForSpawner
// [0x00420400]  (iNative[34197])
struct USpawnMaster_execGetSavedActorDebugInfoForSpawner_Params
{
	int32_t                                            SpawnerIdx;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<class FString>                        SavedActorsDebugInfo;                             		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SpawnMaster.GetNumberOfSavedActorsForSpawner
// [0x00020400]  (iNative[34152])
struct USpawnMaster_execGetNumberOfSavedActorsForSpawner_Params
{
	int32_t                                            SpawnerIdx;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.WillActorsSpawnerBeResetOnLevelLoad
// [0x00020400]  (iNative[36745])
struct USpawnMaster_execWillActorsSpawnerBeResetOnLevelLoad_Params
{
	class AActor*                                      TestActor;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.ResetRespawn
// [0x00020400]  (iNative[35729])
struct USpawnMaster_execResetRespawn_Params
{
};

// Function GearboxFramework.SpawnMaster.GetStreamingLevelForActor
// [0x00022400]  (iNative[34232])
struct USpawnMaster_execGetStreamingLevelForActor_Params
{
	class AActor*                                      ActorInLevel;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class ULevelStreaming*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.HasCapacityToSpawnFromFactories
// [0x00420401]  (iNative[34315])
struct USpawnMaster_execHasCapacityToSpawnFromFactories_Params
{
	class TArray<class USpawnFactory*>                 TheFactories;                                     		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            GameStage;                                        		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.HasCapacityToSpawnFromFactory
// [0x00020401]  (iNative[34316])
struct USpawnMaster_execHasCapacityToSpawnFromFactory_Params
{
	class USpawnFactory*                               TheFactory;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameStage;                                        		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.IsSpawnSystemAtCapacity
// [0x00020401]  (iNative[34691])
struct USpawnMaster_execIsSpawnSystemAtCapacity_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.StatProfileStop
// [0x00020400]  (iNative[36278])
struct USpawnMaster_execStatProfileStop_Params
{
	int32_t                                            nStat;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnMaster.StatProfileStart
// [0x00020400]  (iNative[36277])
struct USpawnMaster_execStatProfileStart_Params
{
	int32_t                                            nStat;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnMaster.GetStatProfileTime
// [0x00020400]  (iNative[34228])
struct USpawnMaster_execGetStatProfileTime_Params
{
	int32_t                                            nStat;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.AddSavedActor
// [0x00020400]  (iNative[31679])
struct USpawnMaster_execAddSavedActor_Params
{
	int32_t                                            SpawnerIdx;                                       		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      TheActor;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USpawnFactory*                               SpawnFactory;                                     		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            CreationFlags;                                    		// 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnMaster.DisconnectEncounter
// [0x00020400]  (iNative[33264])
struct USpawnMaster_execDisconnectEncounter_Params
{
	class ASpawnEncounter*                             Encounter;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnMaster.ConnectEncounter
// [0x00020400]  (iNative[32854])
struct USpawnMaster_execConnectEncounter_Params
{
	class ASpawnEncounter*                             Encounter;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnMaster.DisconnectSpawner
// [0x00020400]  (iNative[33265])
struct USpawnMaster_execDisconnectSpawner_Params
{
	class ASpawner*                                    DeactivatedSpawner;                               		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSaveState : 1;                                   		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.ConnectSpawner
// [0x00020400]  (iNative[32858])
struct USpawnMaster_execConnectSpawner_Params
{
	class ASpawner*                                    ActivatedSpawner;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.GetWorldInfo
// [0x00020400]  (iNative[24043])
struct USpawnMaster_execGetWorldInfo_Params
{
	class AWorldInfo*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.DestroySpawnedActors
// [0x00024400]  (iNative[33193])
struct USpawnMaster_execDestroySpawnedActors_Params
{
	class ASpawner*                                    Spawner;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bDontSaveActors : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpawnMaster.RemoveSpawnedActor
// [0x00024400]  (iNative[35677])
struct USpawnMaster_execRemoveSpawnedActor_Params
{
	class AActor*                                      TheActor;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bKeepBody : 1;                                    		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bActorDied : 1;                                   		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpawnMaster.SetSpawnedActorsReuse
// [0x00020400]  (iNative[35932])
struct USpawnMaster_execSetSpawnedActorsReuse_Params
{
	class AActor*                                      TheActor;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bReuse : 1;                                       		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpawnMaster.AddExternalActor
// [0x00020400]  (iNative[31663])
struct USpawnMaster_execAddExternalActor_Params
{
	class AActor*                                      SpawnedActor;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      FactoryClass;                                     		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpawnMaster.SpawnActorFromSpawner
// [0x00024400]  (iNative[36107])
struct USpawnMaster_execSpawnActorFromSpawner_Params
{
	class USpawnFactory*                               TheFactory;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     SpawnLocationContextObject;                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SpawnLocation;                                    		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    SpawnRotation;                                    		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameStage;                                        		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x002C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SpawnerIdx;                                       		// 0x0030 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SpawnerFlags;                                     		// 0x0034 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bCanSave : 1;                                     		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bForceSpawn : 1;                                  		// 0x003C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     SkinSource;                                       		// 0x0040 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      ReturnValue;                                      		// 0x0048 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.SpawnActor
// [0x00020400]  (iNative[14871])
struct USpawnMaster_execSpawnActor_Params
{
	class USpawnFactory*                               TheFactory;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     SpawnLocationContextObject;                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SpawnLocation;                                    		// 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    SpawnRotation;                                    		// 0x001C (0x000C) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            GameStage;                                        		// 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Rarity;                                           		// 0x002C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     SkinSource;                                       		// 0x0030 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ReturnValue;                                      		// 0x0038 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.GetSpawnerIndex
// [0x00020400]  (iNative[34216])
struct USpawnMaster_execGetSpawnerIndex_Params
{
	class ASpawner*                                    Spawner;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMaster.GetActorsSpawner
// [0x00020400]  (iNative[34028])
struct USpawnMaster_execGetActorsSpawner_Params
{
	class AActor*                                      SpawnedActor;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class ASpawner*                                    ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpawnMasterAttributeContextResolver.GetAttributeContext
// [0x12020000] 
struct USpawnMasterAttributeContextResolver_execGetAttributeContext_Params
{
	class UAttributeDefinitionBase*                    Attribute;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     AttributeContextSource;                           		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.IsOwnerAlwaysNetRelevant
// [0x00020401]  (iNative[34677])
struct USpecialMoveComponent_execIsOwnerAlwaysNetRelevant_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.CanPlayBehaviorData
// [0x00420401]  (iNative[32679])
struct USpecialMoveComponent_execCanPlayBehaviorData_Params
{
	struct FSMBehavior                                 Data;                                             		// 0x0000 (0x0018) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.RunBehaviors
// [0x00420401]  (iNative[28409])
struct USpecialMoveComponent_execRunBehaviors_Params
{
	class TArray<struct FSMBehavior>                   SMBehaviors;                                      		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.SpecialMoveComponent.GetCurrent
// [0x00020401]  (iNative[34064])
struct USpecialMoveComponent_execGetCurrent_Params
{
	class USpecialMoveDefinition*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetPlayRateScale
// [0x00020401]  (iNative[34181])
struct USpecialMoveComponent_execGetPlayRateScale_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetDuration
// [0x00020401]  (iNative[34091])
struct USpecialMoveComponent_execGetDuration_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetData
// [0x00020401]  (iNative[34074])
struct USpecialMoveComponent_execGetData_Params
{
	class UObject*                                     ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.LocalAnimFinished
// [0x00420401]  (iNative[34848])
struct USpecialMoveComponent_execLocalAnimFinished_Params
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0008 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0040 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMoveComponent.ClearQueue
// [0x00020401]  (iNative[32757])
struct USpecialMoveComponent_execClearQueue_Params
{
};

// Function GearboxFramework.SpecialMoveComponent.StopAnyLocal
// [0x00024401]  (iNative[36299])
struct USpecialMoveComponent_execStopAnyLocal_Params
{
	struct FName                                       SMNodeName;                                       		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class USkeletalMeshComponent*                      MeshComp;                                         		// 0x0010 (0x0008) [0x0000000004000090] (CPF_OptionalParm | CPF_Parm | CPF_EditInline)
};

// Function GearboxFramework.SpecialMoveComponent.StopLocal
// [0x00024401]  (iNative[36305])
struct USpecialMoveComponent_execStopLocal_Params
{
	class USpecialMoveDefinition*                      OldSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpecialMoveComponent.StopAny
// [0x00024401]  (iNative[36298])
struct USpecialMoveComponent_execStopAny_Params
{
	uint32_t                                           bClearQueue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpecialMoveComponent.Stop
// [0x00024401]  (iNative[623])
struct USpecialMoveComponent_execStop_Params
{
	class USpecialMoveDefinition*                      OldSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bClearQueue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpecialMoveComponent.PlayLocal
// [0x00024401]  (iNative[35469])
struct USpecialMoveComponent_execPlayLocal_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayRateScale;                                    		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       CallbackName;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     CallbackObject;                                   		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     Data;                                             		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSendCallbackAtEndOfSequence : 1;                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              OverrideBlendInTime;                              		// 0x002C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.Queue
// [0x00024401]  (iNative[35586])
struct USpecialMoveComponent_execQueue_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayRateScale;                                    		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       CallbackName;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     CallbackObject;                                   		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     Data;                                             		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSendCallbackAtEndOfSequence : 1;                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bStartOfSequence : 1;                             		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpecialMoveComponent.Play
// [0x00024401]  (iNative[765])
struct USpecialMoveComponent_execPlay_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayRateScale;                                    		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       CallbackName;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     CallbackObject;                                   		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     Data;                                             		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSendCallbackAtEndOfSequence : 1;                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bReplicateToServer : 1;                           		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.RemoveFromQueue
// [0x00020401]  (iNative[35670])
struct USpecialMoveComponent_execRemoveFromQueue_Params
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpecialMoveComponent.IsQueued
// [0x00020401]  (iNative[34687])
struct USpecialMoveComponent_execIsQueued_Params
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.IsPlayingClass
// [0x00020401]  (iNative[34684])
struct USpecialMoveComponent_execIsPlayingClass_Params
{
	class UClass*                                      SMClass;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.IsPlayingAny
// [0x00020401]  (iNative[34683])
struct USpecialMoveComponent_execIsPlayingAny_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.IsPlaying
// [0x00020401]  (iNative[34682])
struct USpecialMoveComponent_execIsPlaying_Params
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetAnimRotation
// [0x00020401]  (iNative[34043])
struct USpecialMoveComponent_execGetAnimRotation_Params
{
	class UGearboxAnimDefinition*                      CustomAnimSMD;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetAnimDelta
// [0x00020401]  (iNative[34042])
struct USpecialMoveComponent_execGetAnimDelta_Params
{
	class UGearboxAnimDefinition*                      CustomAnimSMD;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.GetSMNode
// [0x00020401]  (iNative[34211])
struct USpecialMoveComponent_execGetSMNode_Params
{
	class UAnimNodeSpecialMoveBlend*                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveComponent.PlayReplicated
// [0x00020401]  (iNative[35478])
struct USpecialMoveComponent_execPlayReplicated_Params
{
	struct FReplicatedSpecialMoveData                  NewSMData;                                        		// 0x0000 (0x0028) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpecialMoveComponent.GetAnimLength
// [0x00024401]  (iNative[23549])
struct USpecialMoveComponent_execGetAnimLength_Params
{
	class UGearboxAnimDefinition*                      CustomAnimSMD;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIncludeNextSMD : 1;                              		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class USkeletalMeshComponent*                      SMC;                                              		// 0x0010 (0x0008) [0x0000000004000090] (CPF_OptionalParm | CPF_Parm | CPF_EditInline)
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.AllowSkelUpdateThrottling
// [0x00020400]  (iNative[31849])
struct USpecialMoveDefinition_execAllowSkelUpdateThrottling_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.ShouldStopWhenDurationExpires
// [0x00020400]  (iNative[35955])
struct USpecialMoveDefinition_execShouldStopWhenDurationExpires_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.IsPlayingLocally
// [0x12020800] 
struct USpecialMoveDefinition_eventIsPlayingLocally_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.GetSMDToPlay
// [0x00020400]  (iNative[34210])
struct USpecialMoveDefinition_execGetSMDToPlay_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class USpecialMoveDefinition*                      ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.Contains
// [0x00020400]  (iNative[21016])
struct USpecialMoveDefinition_execContains_Params
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USpecialMoveInterface*                       SMI;                                              		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.ClientFinished
// [0x12020800] 
struct USpecialMoveDefinition_eventClientFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMoveDefinition.ServerFinished
// [0x12020800] 
struct USpecialMoveDefinition_eventServerFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMoveDefinition.ClientStarted
// [0x12420800] 
struct USpecialMoveDefinition_eventClientStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.ServerStarted
// [0x12020800] 
struct USpecialMoveDefinition_eventServerStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpecialMoveDefinition.IsLocalAuthority
// [0x00020400]  (iNative[34673])
struct USpecialMoveDefinition_execIsLocalAuthority_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveDefinition.AuthorityCanPlay
// [0x12020800] 
struct USpecialMoveDefinition_eventAuthorityCanPlay_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.StopAnim_FP
// [0x12020000] 
struct UGearboxAnimDefinition_execStopAnim_FP_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.PlayAnim_FP
// [0x12420000] 
struct UGearboxAnimDefinition_execPlayAnim_FP_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.GetSMNode_FP
// [0x12020000] 
struct UGearboxAnimDefinition_execGetSMNode_FP_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UAnimNodeSpecialMoveBlend*                   ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.ShouldStopWhenDurationExpires
// [0x00020400]  (iNative[35955])
struct UGearboxAnimDefinition_execShouldStopWhenDurationExpires_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.GetAnimLength
// [0x00020400]  (iNative[23549])
struct UGearboxAnimDefinition_execGetAnimLength_Params
{
	class USkeletalMeshComponent*                      SMC;                                              		// 0x0000 (0x0008) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.IsPlayingLocally
// [0x12020800] 
struct UGearboxAnimDefinition_eventIsPlayingLocally_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.GetSMNode
// [0x12020000] 
struct UGearboxAnimDefinition_execGetSMNode_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UAnimNodeSpecialMoveBlend*                   ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.PlayAnim
// [0x12420000] 
struct UGearboxAnimDefinition_execPlayAnim_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.AnimFinished
// [0x12420802] 
struct UGearboxAnimDefinition_eventAnimFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UAnimNodeSpecialMoveBlend*                   BlendNode;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0018 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.ClientFinished
// [0x12020800] 
struct UGearboxAnimDefinition_eventClientFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.ClientStarted
// [0x12420800] 
struct UGearboxAnimDefinition_eventClientStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.ServerFinished
// [0x12020800] 
struct UGearboxAnimDefinition_eventServerFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.ServerStarted
// [0x12020800] 
struct UGearboxAnimDefinition_eventServerStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAnimDefinition.AddAnimSet
// [0x12020000] 
struct UGearboxAnimDefinition_execAddAnimSet_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAnimDefinition.AuthorityCanPlay
// [0x12020800] 
struct UGearboxAnimDefinition_eventAuthorityCanPlay_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.GearboxAnimDefinition.OnTimedEvent
// [0x80420401]  (iNative[2540])
struct UGearboxAnimDefinition_execOnTimedEvent_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FName                                       SpecializedEventName;                             		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.GearboxAnimDefinition.OnServerStop
// [0x80420401]  (iNative[2541])
struct UGearboxAnimDefinition_execOnServerStop_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.OnServerStart
// [0x80420401]  (iNative[2542])
struct UGearboxAnimDefinition_execOnServerStart_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.GearboxAnimDefinition.OnStop
// [0x80420401]  (iNative[2543])
struct UGearboxAnimDefinition_execOnStop_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.GearboxAnimDefinition.OnStart
// [0x80420401]  (iNative[2544])
struct UGearboxAnimDefinition_execOnStart_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpecialMove_Cloak.IsCloakAnim
// [0x12020000] 
struct USpecialMove_Cloak_execIsCloakAnim_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_Cloak.ClientFinished
// [0x12020800] 
struct USpecialMove_Cloak_eventClientFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMove_Cloak.ClientStarted
// [0x12420800] 
struct USpecialMove_Cloak_eventClientStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_MoveNode.UpdateCloaked
// [0x12020000] 
struct USpecialMove_MoveNode_execUpdateCloaked_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpecialMove_MoveNode.ServerFinished
// [0x12020800] 
struct USpecialMove_MoveNode_eventServerFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMove_MoveNode.ServerStarted
// [0x12020800] 
struct USpecialMove_MoveNode_eventServerStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpecialMove_NavAnim.ClientFinished
// [0x12020800] 
struct USpecialMove_NavAnim_eventClientFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMove_NavAnim.ClientStarted
// [0x12420800] 
struct USpecialMove_NavAnim_eventClientStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_Perch.PlayEnd
// [0x12020000] 
struct USpecialMove_Perch_execPlayEnd_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class APerch*                                      Perch;                                            		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_Perch.PlayIdle
// [0x12020000] 
struct USpecialMove_Perch_execPlayIdle_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class APerch*                                      Perch;                                            		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_Perch.SetRootMotionSpaceOverride
// [0x12020000] 
struct USpecialMove_Perch_execSetRootMotionSpaceOverride_Params
{
	uint32_t                                           bUse : 1;                                         		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class USpecialMoveInterface*                       SMI;                                              		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class APerch*                                      Perch;                                            		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpecialMove_Perch.PlayStart
// [0x12020000] 
struct USpecialMove_Perch_execPlayStart_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class APerch*                                      Perch;                                            		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_Perch.PlayNext
// [0x12020000] 
struct USpecialMove_Perch_execPlayNext_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_Perch.AnimFinished
// [0x12420802] 
struct USpecialMove_Perch_eventAnimFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UAnimNodeSpecialMoveBlend*                   BlendNode;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0018 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMove_Perch.PlayAnim
// [0x12420000] 
struct USpecialMove_Perch_execPlayAnim_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_Perch.ClientFinished
// [0x12020800] 
struct USpecialMove_Perch_eventClientFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMove_Perch.ClientStarted
// [0x12420800] 
struct USpecialMove_Perch_eventClientStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_Perch.SetEndingCondition
// [0x00020401]  (iNative[35899])
struct USpecialMove_Perch_execSetEndingCondition_Params
{
	uint8_t                                            NewEndingCondition;                               		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpecialMove_Perch.OnEnd
// [0x80420401]  (iNative[2508])
struct USpecialMove_Perch_execOnEnd_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpecialMove_Perch.OnIdle
// [0x80420401]  (iNative[2509])
struct USpecialMove_Perch_execOnIdle_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpecialMove_PhysicsJump.PlayLand
// [0x12020000] 
struct USpecialMove_PhysicsJump_execPlayLand_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_PhysicsJump.PlayIdle
// [0x12020000] 
struct USpecialMove_PhysicsJump_execPlayIdle_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	float                                              AirTime;                                          		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_PhysicsJump.GetIdleLength
// [0x12020000] 
struct USpecialMove_PhysicsJump_execGetIdleLength_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_PhysicsJump.AnimFinished
// [0x12420802] 
struct USpecialMove_PhysicsJump_eventAnimFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UAnimNodeSpecialMoveBlend*                   BlendNode;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0018 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMove_PhysicsJump.ClientFinished
// [0x12020800] 
struct USpecialMove_PhysicsJump_eventClientFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMove_PhysicsJump.ClientStarted
// [0x12420800] 
struct USpecialMove_PhysicsJump_eventClientStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_PhysicsJump.OnStartLand
// [0x80420401]  (iNative[2510])
struct USpecialMove_PhysicsJump_execOnStartLand_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpecialMove_PhysicsJump.OnStartIdle
// [0x80420401]  (iNative[2511])
struct USpecialMove_PhysicsJump_execOnStartIdle_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.SpecialMove_LeapAttack.AnimFinished
// [0x12420802] 
struct USpecialMove_LeapAttack_eventAnimFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UAnimNodeSpecialMoveBlend*                   BlendNode;                                        		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0018 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0050 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMove_LeapAttack.ClientFinished
// [0x12020800] 
struct USpecialMove_LeapAttack_eventClientFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMove_LeapAttack.ClientStarted
// [0x12420800] 
struct USpecialMove_LeapAttack_eventClientStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_LeapAttack.PerformLand
// [0x00020401]  (iNative[35427])
struct USpecialMove_LeapAttack_execPerformLand_Params
{
	class AGearboxPawn*                                GBXPawn;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.SpecialMove_LeapAttack.PerformIdle
// [0x00020401]  (iNative[35426])
struct USpecialMove_LeapAttack_execPerformIdle_Params
{
	class AGearboxPawn*                                GBXPawn;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMove_Spawn.ClientFinished
// [0x12020800] 
struct USpecialMove_Spawn_eventClientFinished_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInterrupted : 1;                                 		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GearboxFramework.SpecialMove_Spawn.ClientStarted
// [0x12420800] 
struct USpecialMove_Spawn_eventClientStarted_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FSpecialMoveData                            SMData;                                           		// 0x0010 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0048 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveExpressionList.Contains
// [0x00020400]  (iNative[21016])
struct USpecialMoveExpressionList_execContains_Params
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USpecialMoveInterface*                       SMI;                                              		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveExpressionList.GetSMDToPlay
// [0x00020400]  (iNative[34210])
struct USpecialMoveExpressionList_execGetSMDToPlay_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class USpecialMoveDefinition*                      ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveRandom.Contains
// [0x00020400]  (iNative[21016])
struct USpecialMoveRandom_execContains_Params
{
	class USpecialMoveDefinition*                      SMD;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class USpecialMoveInterface*                       SMI;                                              		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveRandom.GetSMDToPlay
// [0x00020400]  (iNative[34210])
struct USpecialMoveRandom_execGetSMDToPlay_Params
{
	class USpecialMoveInterface*                       SMI;                                              		// 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class USpecialMoveDefinition*                      ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveExpressionEvaluator.Evaluate
// [0x00020400]  (iNative[22809])
struct USpecialMoveExpressionEvaluator_execEvaluate_Params
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveInterface.SetReplicatedSMData
// [0x00424500]  (iNative[35926])
struct USpecialMoveInterface_execSetReplicatedSMData_Params
{
	struct FSpecialMoveData                            NewSMData;                                        		// 0x0000 (0x0038) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0038 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_StopAny
// [0xFFFF0000122248C0] 
struct USpecialMoveInterface_eventServerSpecialMove_StopAny_Params
{
	uint32_t                                           bClearQueue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Stop
// [0xFFFF0000122248C0] 
struct USpecialMoveInterface_eventServerSpecialMove_Stop_Params
{
	class USpecialMoveDefinition*                      OldSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bClearQueue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bInterrupted : 1;                                 		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Queue
// [0xFFFF0000122248C0] 
struct USpecialMoveInterface_eventServerSpecialMove_Queue_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayRateScale;                                    		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       CallbackName;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     CallbackObject;                                   		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     Data;                                             		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSendCallbackAtEndOfSequence : 1;                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bStartOfSequence : 1;                             		// 0x002C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Play
// [0xFFFF0000122248C0] 
struct USpecialMoveInterface_eventServerSpecialMove_Play_Params
{
	class USpecialMoveDefinition*                      NewSMD;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayRateScale;                                    		// 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FName                                       CallbackName;                                     		// 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     CallbackObject;                                   		// 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     Data;                                             		// 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bSendCallbackAtEndOfSequence : 1;                 		// 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.SpecialMoveInterface.GetDefaultRootMotionRotationMode
// [0x00020500]  (iNative[23677])
struct USpecialMoveInterface_execGetDefaultRootMotionRotationMode_Params
{
	ERootMotionRotationMode                            ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveInterface.GetDefaultRootMotionMode
// [0x00020500]  (iNative[23676])
struct USpecialMoveInterface_execGetDefaultRootMotionMode_Params
{
	ERootMotionMode                                    ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.SpecialMoveInterface.GetSkelMesh
// [0x00020500]  (iNative[34208])
struct USpecialMoveInterface_execGetSkelMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.SpecialMoveInterface.GetSMComponent
// [0x00020500]  (iNative[34209])
struct USpecialMoveInterface_execGetSMComponent_Params
{
	class USpecialMoveComponent*                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function GearboxFramework.SpecialMoveInterface.GetActor
// [0x00020500]  (iNative[34025])
struct USpecialMoveInterface_execGetActor_Params
{
	class AActor*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.StanceComponent.SetDefaultStance
// [0x00024401]  (iNative[35893])
struct UStanceComponent_execSetDefaultStance_Params
{
	struct FName                                       StanceName;                                       		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.StanceComponent.IsInDefaultStance
// [0x00020401]  (iNative[34667])
struct UStanceComponent_execIsInDefaultStance_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.StanceComponent.IsInStance
// [0x00020401]  (iNative[34670])
struct UStanceComponent_execIsInStance_Params
{
	class UStanceDefinition*                           TestStance;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.StanceComponent.GetLastStance
// [0x00020401]  (iNative[34125])
struct UStanceComponent_execGetLastStance_Params
{
	class UStanceDefinition*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.StanceComponent.GetStance
// [0x00020401]  (iNative[34225])
struct UStanceComponent_execGetStance_Params
{
	class UStanceDefinition*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.StanceComponent.ClearStance
// [0x00024401]  (iNative[32762])
struct UStanceComponent_execClearStance_Params
{
	uint8_t                                            System;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UStanceDefinition*                           StanceToClear;                                    		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GearboxFramework.StanceComponent.SetReplicatedStance
// [0x00020401]  (iNative[35927])
struct UStanceComponent_execSetReplicatedStance_Params
{
	class UStanceDefinition*                           NewStance;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.StanceComponent.SetStance
// [0x00020401]  (iNative[35934])
struct UStanceComponent_execSetStance_Params
{
	uint8_t                                            System;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UStanceDefinition*                           NewStance;                                        		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GearboxFramework.StanceDefinition.TranslateDefaultStanceEnum
// [0x00022400]  (iNative[36562])
struct UStanceDefinition_execTranslateDefaultStanceEnum_Params
{
	uint8_t                                            StanceEnum;                                       		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.StanceDefinition.OnExitStance
// [0x80420401]  (iNative[2512])
struct UStanceDefinition_execOnExitStance_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.StanceDefinition.OnEnterStance
// [0x80420401]  (iNative[2513])
struct UStanceDefinition_execOnEnterStance_Params
{
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                   		// 0x0000 (0x0004) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.StanceExpressionEvaluator.Evaluate
// [0x00020400]  (iNative[22809])
struct UStanceExpressionEvaluator_execEvaluate_Params
{
	class UObject*                                     ContextSource;                                    		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.UtilityAxis.GetValue
// [0x00420400]  (iNative[24017])
struct UUtilityAxis_execGetValue_Params
{
	struct FUtilityContextData                         ContextData;                                      		// 0x0000 (0x0018) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.UtilityAxis.GetDescription
// [0x00020400]  (iNative[34082])
struct UUtilityAxis_execGetDescription_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.UtilityAxis_Attribute.GetValue
// [0x00420400]  (iNative[24017])
struct UUtilityAxis_Attribute_execGetValue_Params
{
	struct FUtilityContextData                         ContextData;                                      		// 0x0000 (0x0018) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.UtilityAxis_Attribute.GetDescription
// [0x00020400]  (iNative[34082])
struct UUtilityAxis_Attribute_execGetDescription_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.UtilityAxis_Condition.GetValue
// [0x00420400]  (iNative[24017])
struct UUtilityAxis_Condition_execGetValue_Params
{
	struct FUtilityContextData                         ContextData;                                      		// 0x0000 (0x0018) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.UtilityAxis_Condition.GetDescription
// [0x00020400]  (iNative[34082])
struct UUtilityAxis_Condition_execGetDescription_Params
{
	class FString                                      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GearboxFramework.ViewBlockerComponent.Debug
// [0x00022400]  (iNative[876])
struct UViewBlockerComponent_execDebug_Params
{
};

// Function GearboxFramework.ViewBlockerComponent.StaticGetModifier
// [0x00422400]  (iNative[36273])
struct UViewBlockerComponent_execStaticGetModifier_Params
{
	struct FVector                                     EyeLoc;                                           		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector                                     TargetLoc;                                        		// 0x000C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ViewBlockerComponent.GetModifier
// [0x00420401]  (iNative[34132])
struct UViewBlockerComponent_execGetModifier_Params
{
	struct FVector                                     EyeLoc;                                           		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FVector                                     TargetLoc;                                        		// 0x000C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ViewBlockerComponent.SetBlockPercent
// [0x00420401]  (iNative[35885])
struct UViewBlockerComponent_execSetBlockPercent_Params
{
	struct FAIRange                                    NewBlockPErcent;                                  		// 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GearboxFramework.ViewBlockerComponent.SetRadius
// [0x00020401]  (iNative[35923])
struct UViewBlockerComponent_execSetRadius_Params
{
	float                                              NewRadius;                                        		// 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function GearboxFramework.ViewConeComponent.StaticGetRate
// [0x00422400]  (iNative[36274])
struct UViewConeComponent_execStaticGetRate_Params
{
	class AActor*                                      AIOwner;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TargetLoc;                                        		// 0x0008 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            Awareness;                                        		// 0x0014 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ViewConeComponent.GetRate
// [0x00420401]  (iNative[34189])
struct UViewConeComponent_execGetRate_Params
{
	struct FVector                                     TargetLoc;                                        		// 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            Awareness;                                        		// 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.ViewConeComponent.Valid
// [0x00020401]  (iNative[30533])
struct UViewConeComponent_execValid_Params
{
	uint8_t                                            Awareness;                                        		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GearboxFramework.WireTerminal.Destroyed
// [0x12020800] 
struct AWireTerminal_eventDestroyed_Params
{
};

// Function GearboxFramework.WireTerminal.NotifyModifiedTerminal
// [0x00020400]  (iNative[35183])
struct AWireTerminal_execNotifyModifiedTerminal_Params
{
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
