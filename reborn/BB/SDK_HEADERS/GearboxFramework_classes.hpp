/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: GearboxFramework_classes.hpp
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
# Constants
# ========================================================================================= #
*/

#define CONST_SNAPSHOT_MAX                                      5
#define CONST_INTERPOLATEFLOAT_MIN_INTERVAL                     0
#define CONST_METRONOME_MIN_INTERVAL                            0
#define CONST_SecondsToRememberRecentIncomingShots              3
#define CONST_GBXSEARCHFLAG_SingleResult                        1
#define CONST_MaxContainedRules                                 4
#define CONST_MAX_HIT_TARGET_RECORDS                            5
#define CONST_TIME_BETWEEN_IF_RELEVANT                          3
#define CONST_ScreenBaseY                                       4
#define CONST_ScreenBaseX                                       6

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GearboxFramework.ActionSequencePawn.ECustomPathResult
enum class ECustomPathResult : uint8_t
{
	ECustomPath_None                                   = 0,
	ECustomPath_Found                                  = 1,
	ECustomPath_Failed                                 = 2,
	ECustomPath_END                                    = 3
};

// Enum GearboxFramework.GearboxNavigationHandle.EPathFindType
enum class EPathFindType : uint8_t
{
	PATHFIND_None                                      = 0,
	PATHFIND_Normal                                    = 1,
	PATHFIND_Flying                                    = 2,
	PATHFIND_Constrained                               = 3,
	PATHFIND_Custom                                    = 4,
	PATHFIND_END                                       = 5
};

// Enum GearboxFramework.GearboxNavigationHandle.EPathType
enum class EPathType : uint8_t
{
	GBXNAVPATH_Normal                                  = 0,
	GBXNAVPATH_Direct                                  = 1,
	GBXNAVPATH_Flying                                  = 2,
	GBXNAVPATH_None                                    = 3,
	GBXNAVPATH_END                                     = 4
};

// Enum GearboxFramework.CloakDefinition.ECloakStyle
enum class ECloakStyle : uint8_t
{
	CloakStyle_Hide                                    = 0,
	CloakStyle_Visible                                 = 1,
	CloakStyle_VisibleHUD                              = 2,
	CloakStyle_Migrated                                = 3,
	CloakStyle_END                                     = 4
};

// Enum GearboxFramework.CloakDefinition.ECloakAnimStyle
enum class ECloakAnimStyle : uint8_t
{
	CloakAnim_ChangeAtStart                            = 0,
	CloakAnim_ChangeAtEnd                              = 1,
	CloakAnim_END                                      = 2
};

// Enum GearboxFramework.CloakDefinition.ECloakOverride
enum class ECloakOverride : uint8_t
{
	CloakOverride_None                                 = 0,
	CloakOverride_Cloak                                = 1,
	CloakOverride_Uncloak                              = 2,
	CloakOverride_END                                  = 3
};

// Enum GearboxFramework.GearboxGlobals.EMoveStyle
enum class EMoveStyle : uint8_t
{
	MOVE_Strafe                                        = 0,
	MOVE_Forward                                       = 1,
	MOVE_END                                           = 2
};

// Enum GearboxFramework.GearboxGlobals.AwarenessReason
enum class EAwarenessReason : uint8_t
{
	AWAREREASON_SawEnemy                               = 0,
	AWAREREASON_HeardEnemy                             = 1,
	AWAREREASON_HeardWeaponNoise                       = 2,
	AWAREREASON_NotifiedByFireTeam                     = 3,
	AWAREREASON_NotifiedByPlayer                       = 4,
	AWAREREASON_SuppressOrderGiven                     = 5,
	AWAREREASON_AttackedByEnemy                        = 6,
	AWAREREASON_BulletImpactOrWhiz                     = 7,
	AWAREREASON_GrenadeFromEnemy                       = 8,
	AWAREREASON_LevelDesignForceSee                    = 9,
	AWAREREASON_FriendlyKilled                         = 10,
	AWAREREASON_END                                    = 11
};

// Enum GearboxFramework.GearboxGlobals.EGBXPlatform
enum class EGBXPlatform : uint8_t
{
	GBXPlatform_PC                                     = 0,
	GBXPlatform_Durango                                = 1,
	GBXPlatform_Orbis                                  = 2,
	GBXPlatform_END                                    = 3
};

// Enum GearboxFramework.GearboxGlobals.EDifficultyLevel
enum class EDifficultyLevel : uint8_t
{
	DL_Casual                                          = 0,
	DL_Normal                                          = 1,
	DL_Hardcore                                        = 2,
	DL_Insane                                          = 3,
	DL_END                                             = 4
};

// Enum GearboxFramework.GearboxGlobals.EMaterialParamType
enum class EMaterialParamType : uint8_t
{
	MatParmType_None                                   = 0,
	MatParmType_Color                                  = 1,
	MatParmType_Font                                   = 2,
	MatParmType_Scalar                                 = 3,
	MatParmType_Texture                                = 4,
	MatParmType_Vector                                 = 5,
	MatParmType_END                                    = 6
};

// Enum GearboxFramework.GearboxGlobals.ECameraZoomScale
enum class ECameraZoomScale : uint8_t
{
	EZOOM_NoChange                                     = 0,
	EZOOM_UltraClose                                   = 1,
	EZOOM_Close                                        = 2,
	EZOOM_MidRange                                     = 3,
	EZOOM_Wide                                         = 4,
	EZOOM_END                                          = 5
};

// Enum GearboxFramework.GearboxGlobals.ECameraInterpolationMode
enum class ECameraInterpolationMode : uint8_t
{
	IM_Logarithmic                                     = 0,
	IM_Linear                                          = 1,
	IM_SineCurve                                       = 2,
	IM_END                                             = 3
};

// Enum GearboxFramework.StanceDefinition.EDefaultStance
enum class EDefaultStance : uint8_t
{
	STANCE_Patrol                                      = 0,
	STANCE_Run                                         = 1,
	STANCE_Sprint                                      = 2,
	STANCE_Injured                                     = 3,
	STANCE_None                                        = 4,
	STANCE_Crouch                                      = 5,
	STANCE_Fly                                         = 6,
	STANCE_END                                         = 7
};

// Enum GearboxFramework.GBXPathConstraint_Side.ESideConstraint
enum class ESideConstraint : uint8_t
{
	SideConstraint_Left                                = 0,
	SideConstraint_Right                               = 1,
	SideConstraint_Either                              = 2,
	SideConstraint_END                                 = 3
};

// Enum GearboxFramework.GBXPathConstraint_Side.ESideConstraintDir
enum class ESideConstraintDir : uint8_t
{
	SideConstraintDir_SelfToTargetDir                  = 0,
	SideConstraintDir_SelfFaceDir                      = 1,
	SideConstraintDir_TargetFaceDir                    = 2,
	SideConstraintDir_SelfAimDir                       = 3,
	SideConstraintDir_TargetAimDir                     = 4,
	SideConstraintDir_END                              = 5
};

// Enum GearboxFramework.BehaviorHelpers.EDirectionRelativeToParent
enum class EDirectionRelativeToParent : uint8_t
{
	DIRECTION_Default                                  = 0,
	DIRECTION_ParentOrientation                        = 1,
	DIRECTION_InverseParentOrientation                 = 2,
	DIRECTION_ParentVelocity                           = 3,
	DIRECTION_InverseParentVelocity                    = 4,
	DIRECTION_Random                                   = 5,
	DIRECTION_RandomUpwards                            = 6,
	DIRECTION_RandomDownwards                          = 7,
	DIRECTION_RandomOnHorizontalPlane                  = 8,
	DIRECTION_StraightUp                               = 9,
	DIRECTION_StraightDown                             = 10,
	DIRECTION_StraightTowardTarget                     = 11,
	DIRECTION_ParentAimDirection                       = 12,
	DIRECTION_InverseParentAimDirection                = 13,
	DIRECTION_InverseTearOffMomentum                   = 14,
	DIRECTION_ParentAimDirection2D                     = 15,
	DIRECTION_InverseParentAimDirection2D              = 16,
	DIRECTION_ParentAcceleration2D                     = 17,
	DIRECTION_END                                      = 18
};

// Enum GearboxFramework.GBXPathConstraint_LineOfSight.ELineOfSight
enum class ELineOfSight : uint8_t
{
	ELOS_Keep                                          = 0,
	ELOS_Avoid                                         = 1,
	ELOS_Arc                                           = 2,
	ELOS_END                                           = 3
};

// Enum GearboxFramework.AIComponent.AIHoldType
enum class EAIHoldType : uint8_t
{
	AIHoldType_AI                                      = 0,
	AIHoldType_Target                                  = 1,
	AIHoldType_Movement                                = 2,
	AIHoldType_Demigod                                 = 3,
	AIHoldType_God                                     = 4,
	AIHoldType_Dialog                                  = 5,
	AIHoldType_END                                     = 6
};

// Enum GearboxFramework.AIComponent.EAwareness
enum class EAwareness : uint8_t
{
	EAwareness_Oblivious                               = 0,
	EAwareness_Cautious                                = 1,
	EAwareness_Suspicious                              = 2,
	EAwareness_Aware                                   = 3,
	EAwareness_END                                     = 4
};

// Enum GearboxFramework.AIComponent.EAISequenceResultType
enum class EAISequenceResultType : uint8_t
{
	AISeqResult_Reset                                  = 0,
	AISeqResult_Remain                                 = 1,
	AISeqResult_Continue                               = 2,
	AISeqResult_END                                    = 3
};

// Enum GearboxFramework.AIComponent.AIFailReason
enum class EAIFailReason : uint8_t
{
	AIFail_None                                        = 0,
	AIFail_Timer                                       = 1,
	AIFail_Failed                                      = 2,
	AIFail_Action                                      = 3,
	AIFail_Resource                                    = 4,
	AIFail_Conditional                                 = 5,
	AIFail_END                                         = 6
};

// Enum GearboxFramework.AIComponent.AINodeType
enum class EAINodeType : uint8_t
{
	NodeType_Blank                                     = 0,
	NodeType_Action                                    = 1,
	NodeType_Random                                    = 2,
	NodeType_Priority                                  = 3,
	NodeType_Sequential                                = 4,
	NodeType_Utility                                   = 5,
	NodeType_AIDef                                     = 6,
	NodeType_END                                       = 7
};

// Enum GearboxFramework.Action_Perch.EPerchMoveType
enum class EPerchMoveType : uint8_t
{
	EPerchMove_Normal                                  = 0,
	EPerchMove_Teleport                                = 1,
	EPerchMove_Leap                                    = 2,
	EPerchMove_END                                     = 3
};

// Enum GearboxFramework.TerritoryComponent.ETerritoryType
enum class ETerritoryType : uint8_t
{
	ETerritory_None                                    = 0,
	ETerritory_Spawn                                   = 1,
	ETerritory_Patrol                                  = 2,
	ETerritory_Threat                                  = 3,
	ETerritory_Combat                                  = 4,
	ETerritory_END                                     = 5
};

// Enum GearboxFramework.AIActionTagExpressionEvaluator.EAIActionTagQuery
enum class EAIActionTagQuery : uint8_t
{
	AIActionTagQuery_All                               = 0,
	AIActionTagQuery_None                              = 1,
	AIActionTagQuery_Some                              = 2,
	AIActionTagQuery_SomeNot                           = 3,
	AIActionTagQuery_END                               = 4
};

// Enum GearboxFramework.BehaviorProviderDefinition.EBehaviorVariableType
enum class EBehaviorVariableType : uint8_t
{
	BVAR_None                                          = 0,
	BVAR_Bool                                          = 1,
	BVAR_Int                                           = 2,
	BVAR_Float                                         = 3,
	BVAR_Vector                                        = 4,
	BVAR_Object                                        = 5,
	BVAR_AllPlayers                                    = 6,
	BVAR_Attribute                                     = 7,
	BVAR_InstanceData                                  = 8,
	BVAR_Kismet                                        = 9,
	BVAR_DirectionVector                               = 10,
	BVAR_AttachmentLocation                            = 11,
	BVAR_Flag                                          = 12,
	BVAR_SelectRandom                                  = 13,
	BVAR_If                                            = 14,
	BVAR_Switch                                        = 15,
	BVAR_Self                                          = 16,
	BVAR_Accessor                                      = 17,
	BVAR_ObjectList                                    = 18,
	BVAR_Function                                      = 19,
	BVAR_Count                                         = 20,
	BVAR_END                                           = 21
};

// Enum GearboxFramework.AIDebugCamera.EDebugAlignment
enum class EDebugAlignment : uint8_t
{
	DEBUGALIGN_Left                                    = 0,
	DEBUGALIGN_Center                                  = 1,
	DEBUGALIGN_Right                                   = 2,
	DEBUGALIGN_LeftNoWrap                              = 3,
	DEBUGALIGN_LeftColumn2                             = 4,
	DEBUGALIGN_LeftColumn2NoWrap                       = 5,
	DEBUGALIGN_END                                     = 6
};

// Enum GearboxFramework.AIDebugCamera.EDebugItemType
enum class EDebugItemType : uint8_t
{
	DEBUGITEM_String                                   = 0,
	DEBUGITEM_StringSpacer                             = 1,
	DEBUGITEM_ScreenIcon                               = 2,
	DEBUGITEM_WorldString                              = 3,
	DEBUGITEM_Icon                                     = 4,
	DEBUGITEM_Line                                     = 5,
	DEBUGITEM_Box                                      = 6,
	DEBUGITEM_Circle                                   = 7,
	DEBUGITEM_Cone                                     = 8,
	DEBUGITEM_BarGraphScreenTop                        = 9,
	DEBUGITEM_BarGraphScreenTopTitle                   = 10,
	DEBUGITEM_BarGraphScreenCenter                     = 11,
	DEBUGITEM_BarGraphScreenCenterTitle                = 12,
	DEBUGITEM_END                                      = 13
};

// Enum GearboxFramework.ISpawnPoint.EInitialActionType
enum class EInitialActionType : uint8_t
{
	INITIALACTION_MoveToActor                          = 0,
	INITIALACTION_PatrolPath                           = 1,
	INITIALACTION_END                                  = 2
};

// Enum GearboxFramework.RotationComponent.EFacingStyle
enum class EFacingStyle : uint8_t
{
	FacingStyle_Normal                                 = 0,
	FacingStyle_Body                                   = 1,
	FacingStyle_Aim                                    = 2,
	FacingStyle_END                                    = 3
};

// Enum GearboxFramework.RotationComponent.EFacingPolicy
enum class EFacingPolicy : uint8_t
{
	FACE_Unknown                                       = 0,
	FACE_NoChange                                      = 1,
	FACE_Actor                                         = 2,
	FACE_Target                                        = 3,
	FACE_Vector                                        = 4,
	FACE_Direction                                     = 5,
	FACE_Path                                          = 6,
	FACE_END                                           = 7
};

// Enum GearboxFramework.AIDefinition.EOnSpawnOutputs
enum class EOnSpawnOutputs : uint8_t
{
	EOnSpawnOutput_Initialized                         = 0,
	EOnSpawnOutput_PostSpawnStyle                      = 1,
	EOnSpawnOutput_END                                 = 2
};

// Enum GearboxFramework.AIDefinition.ENPCOnUsedOutputs
enum class ENPCOnUsedOutputs : uint8_t
{
	USEDNPC_HasMissions                                = 0,
	USEDNPC_NoMissions                                 = 1,
	USEDNPC_Generic                                    = 2,
	USEDNPC_END                                        = 3
};

// Enum GearboxFramework.AIResourceExpressionEvaluator.AIResourceOption
enum class EAIResourceOption : uint8_t
{
	AIResourceOption_Available                         = 0,
	AIResourceOption_Unavailable                       = 1,
	AIResourceOption_InUse                             = 2,
	AIResourceOption_NotInUse                          = 3,
	AIResourceOption_END                               = 4
};

// Enum GearboxFramework.AllegianceExpressionEvaluator.EAllegianceExpression
enum class EAllegianceExpression : uint8_t
{
	EAllegianceExpression_IsAllegiance                 = 0,
	EAllegianceExpression_IsNotAllegiance              = 1,
	EAllegianceExpression_END                          = 2
};

// Enum GearboxFramework.AnimNodeSpecialMoveBlend.EAnimState
enum class EAnimState : uint8_t
{
	EAnimState_None                                    = 0,
	EAnimState_Playing                                 = 1,
	EAnimState_Finished                                = 2,
	EAnimState_BlendingOut                             = 3,
	EAnimState_END                                     = 4
};

// Enum GearboxFramework.AnimPreviewComponent.EPreviewStyle
enum class EPreviewStyle : uint8_t
{
	EPS_None                                           = 0,
	EPS_Still                                          = 1,
	EPS_Playing                                        = 2,
	EPS_END                                            = 3
};

// Enum GearboxFramework.Behavior_AIHold.AIHoldAction
enum class EAIHoldAction : uint8_t
{
	AIHold_Hold                                        = 0,
	AIHold_Release                                     = 1,
	AIHold_END                                         = 2
};

// Enum GearboxFramework.Behavior_AISetEnabledActions.EAISetActionMode
enum class EAISetActionMode : uint8_t
{
	AISAM_EnableAll                                    = 0,
	AISAM_DisableAll                                   = 1,
	AISAM_Enable                                       = 2,
	AISAM_Disable                                      = 3,
	AISAM_EnableOnly                                   = 4,
	AISAM_DisableOnly                                  = 5,
	AISAM_END                                          = 6
};

// Enum GearboxFramework.Behavior_AttachGFxMovieClip.EAttachGFxMovieClipOutputLinks
enum class EAttachGFxMovieClipOutputLinks : uint8_t
{
	ATTACH_GFxMovieClip_Out                            = 0,
	ATTACH_GFxMovieClip_ClipLoaded                     = 1,
	ATTACH_GFxMovieClip_END                            = 2
};

// Enum GearboxFramework.Behavior_ChangeDialogPools.EChangeDialogPoolsAction
enum class EChangeDialogPoolsAction : uint8_t
{
	CDPA_Activate                                      = 0,
	CDPA_Deactivate                                    = 1,
	CDPA_END                                           = 2
};

// Enum GearboxFramework.ITimerBehavior.EBehaviorTimerEvent
enum class EBehaviorTimerEvent : uint8_t
{
	TIMEREVENT_Timer1Elapsed                           = 0,
	TIMEREVENT_Timer2Elapsed                           = 1,
	TIMEREVENT_Timer3Elapsed                           = 2,
	TIMEREVENT_END                                     = 3
};

// Enum GearboxFramework.ITimerBehavior.EBehaviorTimerID
enum class EBehaviorTimerID : uint8_t
{
	BTIMER                                             = 0,
	BTIMER01                                           = 1,
	BTIMER02                                           = 2,
	BTIMER_END                                         = 3
};

// Enum GearboxFramework.Behavior_ChangeTimer.EBehaviorTimerReaction
enum class EBehaviorTimerReaction : uint8_t
{
	TR_NoChange                                        = 0,
	TR_Start                                           = 1,
	TR_Stop                                            = 2,
	TR_Toggle                                          = 3,
	TR_ResetValue                                      = 4,
	TR_END                                             = 5
};

// Enum GearboxFramework.Behavior_CompareBool.ECompareBoolOutputLinkIds
enum class ECompareBoolOutputLinkIds : uint8_t
{
	BOOLOUTPUT_True                                    = 0,
	BOOLOUTPUT_False                                   = 1,
	BOOLOUTPUT_END                                     = 2
};

// Enum GearboxFramework.Behavior_CompareValues.ECompareValuesOutputLinkIds
enum class ECompareValuesOutputLinkIds : uint8_t
{
	OUTPUT_LessThanOrEqual                             = 0,
	OUTPUT_GreaterThan                                 = 1,
	OUTPUT_Equal                                       = 2,
	OUTPUT_LessThan                                    = 3,
	OUTPUT_GreaterThanOrEqual                          = 4,
	OUTPUT_END                                         = 5
};

// Enum GearboxFramework.Behavior_IsSequenceEnabled.EIsSequenceOutputLinkIds
enum class EIsSequenceOutputLinkIds : uint8_t
{
	SEQOUTPUT_SequenceIsEnabled                        = 0,
	SEQOUTPUT_SequenceIsDisabled                       = 1,
	SEQOUTPUT_END                                      = 2
};

// Enum GearboxFramework.Behavior_LeaderCommand.ELeaderType
enum class ELeaderType : uint8_t
{
	ELeader_Target                                     = 0,
	ELeader_Formation                                  = 1,
	ELeader_END                                        = 2
};

// Enum GearboxFramework.Behavior_LeaderCommand.ELeaderAction
enum class ELeaderAction : uint8_t
{
	ELA_Set                                            = 0,
	ELA_Remove                                         = 1,
	ELA_END                                            = 2
};

// Enum GearboxFramework.Behavior_ModifyTimer.BehaviorTimerFunction
enum class EBehaviorTimerFunction : uint8_t
{
	BETF_None                                          = 0,
	BETF_Start                                         = 1,
	BETF_Pause                                         = 2,
	BETF_Toggle                                        = 3,
	BETF_Resume                                        = 4,
	BETF_Stop                                          = 5,
	BETF_END                                           = 6
};

// Enum GearboxFramework.Behavior_PostAkEvent.EPostAkEventOutputLinks
enum class EPostAkEventOutputLinks : uint8_t
{
	POSTAK_Out                                         = 0,
	POSTAK_Finished                                    = 1,
	POSTAK_END                                         = 2
};

// Enum GearboxFramework.Behavior_SetBeamPoint.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                                      = 0,
	PEB2MT_Target                                      = 1,
	PEB2MT_END                                         = 2
};

// Enum GearboxFramework.BehaviorHelpers.EFireSocketSelectionMethod
enum class EFireSocketSelectionMethod : uint8_t
{
	FSSM_Increment                                     = 0,
	FSSM_Random                                        = 1,
	FSSM_RandomLooping                                 = 2,
	FSSM_END                                           = 3
};

// Enum GearboxFramework.DamageReceiverComponent.EDRNodeType
enum class EDRNodeType : uint8_t
{
	EDRNode_Base                                       = 0,
	EDRNode_HitRegion                                  = 1,
	EDRNode_END                                        = 2
};

// Enum GearboxFramework.Behavior_SetStance.EStanceSetType
enum class EStanceSetType : uint8_t
{
	StanceSet_Set                                      = 0,
	StanceSet_Clear                                    = 1,
	StanceSet_END                                      = 2
};

// Enum GearboxFramework.Behavior_Speak.ESpeakDialogOutputLinks
enum class ESpeakDialogOutputLinks : uint8_t
{
	SPEAK_DIALOG_Out                                   = 0,
	SPEAK_DIALOG_Finished                              = 1,
	SPEAK_DIALOG_Started                               = 2,
	SPEAK_DIALOG_END                                   = 3
};

// Enum GearboxFramework.DialogSystem.EQuietTimeScope
enum class EQuietTimeScope : uint8_t
{
	QTS_Individual                                     = 0,
	QTS_GroupMembersInTheArea                          = 1,
	QTS_END                                            = 2
};

// Enum GearboxFramework.DialogSystem.EListenerFilter
enum class EListenerFilter : uint8_t
{
	LF_Auto                                            = 0,
	LF_Everyone                                        = 1,
	LF_SpeakerTeamOnly                                 = 2,
	LF_TargetTeamOnly                                  = 3,
	LF_END                                             = 4
};

// Enum GearboxFramework.DialogSystem.EDialogInterruptMethod
enum class EDialogInterruptMethod : uint8_t
{
	DIM_InterruptImmediately                           = 0,
	DIM_DuckLowerPriority                              = 1,
	DIM_PlayWithoutInterrupting                        = 2,
	DIM_DelayThenInterruptImmediate                    = 3,
	DIM_DelayThenDuck                                  = 4,
	DIM_DelayThenPlayWithoutInterrupting               = 5,
	DIM_DoNotPlayIfInterrupting                        = 6,
	DIM_END                                            = 7
};

// Enum GearboxFramework.DialogSystem.ECaresAbout
enum class ECaresAbout : uint8_t
{
	DCA_Everyone                                       = 0,
	DCA_GroupAndFriends                                = 1,
	DCA_GroupOnly                                      = 2,
	DCA_Nobody                                         = 3,
	DCA_END                                            = 4
};

// Enum GearboxFramework.DialogSystem.EDialogThreadExecutionStage
enum class EDialogThreadExecutionStage : uint8_t
{
	DTES_Invalid                                       = 0,
	DTES_Queued                                        = 1,
	DTES_Active                                        = 2,
	DTES_END                                           = 3
};

// Enum GearboxFramework.DialogSystem.DialogThreadStatus
enum class EDialogThreadStatus : uint8_t
{
	DTS_Pending                                        = 0,
	DTS_Cancelled                                      = 1,
	DTS_Started                                        = 2,
	DTS_Interrupted                                    = 3,
	DTS_Succeeded                                      = 4,
	DTS_END                                            = 5
};

// Enum GearboxFramework.Behavior_SpecialMove.ETriggerSpecialMoveOutputLinks
enum class ETriggerSpecialMoveOutputLinks : uint8_t
{
	TRIGGER_SPECIALMOVE_Out                            = 0,
	TRIGGER_SPECIALMOVE_Finished                       = 1,
	TRIGGER_SPECIALMOVE_END                            = 2
};

// Enum GearboxFramework.Behavior_StanceTransition.EStanceTransitionOutputLinks
enum class EStanceTransitionOutputLinks : uint8_t
{
	STANCETRANSITION_Out                               = 0,
	STANCETRANSITION_Finished                          = 1,
	STANCETRANSITION_END                               = 2
};

// Enum GearboxFramework.Behavior_ToggleDanger.EToggleDangerOption
enum class EToggleDangerOption : uint8_t
{
	ToggleDanger_Toggle                                = 0,
	ToggleDanger_Enable                                = 1,
	ToggleDanger_Disable                               = 2,
	ToggleDanger_END                                   = 3
};

// Enum GearboxFramework.Behavior_TriggerDialog.ETriggerDialogOutputLinks
enum class ETriggerDialogOutputLinks : uint8_t
{
	TRIGGER_DIALOG_Out                                 = 0,
	TRIGGER_DIALOG_Finished                            = 1,
	TRIGGER_DIALOG_Started                             = 2,
	TRIGGER_DIALOG_END                                 = 3
};

// Enum GearboxFramework.Behavior_UnitTest.EUnitTestState
enum class EUnitTestState : uint8_t
{
	EUnitTestState_Start                               = 0,
	EUnitTestState_Wait                                = 1,
	EUnitTestState_Finished                            = 2,
	EUnitTestState_END                                 = 3
};

// Enum GearboxFramework.Behavior_UnitTest.EUnitTestResult
enum class EUnitTestResult : uint8_t
{
	EUnitTestResult_Pass                               = 0,
	EUnitTestResult_Fail                               = 1,
	EUnitTestResult_END                                = 2
};

// Enum GearboxFramework.BehaviorSequenceEnableByMultipleConditions.EMultiConditionOperator
enum class EMultiConditionOperator : uint8_t
{
	EMCL_OR                                            = 0,
	EMCL_AND                                           = 1,
	EMCL_END                                           = 2
};

// Enum GearboxFramework.CompoundExpressionEvaluator.ECExpressionOperatorType
enum class ECExpressionOperatorType : uint8_t
{
	CEOP_Or                                            = 0,
	CEOP_And                                           = 1,
	CEOP_END                                           = 2
};

// Enum GearboxFramework.GearboxAnimDefinition.ESMDPlayOnType
enum class ESMDPlayOnType : uint8_t
{
	PlayOn_Third                                       = 0,
	PlayOn_First                                       = 1,
	PlayOn_ThirdAndFirst                               = 2,
	PlayOn_END                                         = 3
};

// Enum GearboxFramework.GearboxAnimDefinition.EEndingCondition
enum class EEndingCondition : uint8_t
{
	EC_StopOnLastFrame                                 = 0,
	EC_OnAnimEnd                                       = 1,
	EC_OnBlendOut                                      = 2,
	EC_Loop                                            = 3,
	EC_END                                             = 4
};

// Enum GearboxFramework.PhysicsJumpNode.EPhysicsJumpState
enum class EPhysicsJumpState : uint8_t
{
	JumpState_Launch                                   = 0,
	JumpState_Idle                                     = 1,
	JumpState_Land                                     = 2,
	JumpState_Wait                                     = 3,
	JumpState_END                                      = 4
};

// Enum GearboxFramework.GearboxPawn.EStanceSystem
enum class EStanceSystem : uint8_t
{
	StanceSystem_Default                               = 0,
	StanceSystem_Firing                                = 1,
	StanceSystem_Behavior                              = 2,
	StanceSystem_Action                                = 3,
	StanceSystem_END                                   = 4
};

// Enum GearboxFramework.DamageReceiverDefinition.EDamagePassType
enum class EDamagePassType : uint8_t
{
	EDamagePass_DamageIn                               = 0,
	EDamagePass_DamageTaken                            = 1,
	EDamagePass_DamageNotTaken                         = 2,
	EDamagePass_DamageOnDeath                          = 3,
	EDamagePass_END                                    = 4
};

// Enum GearboxFramework.DamageReceiverDefinition.EDamageEventType
enum class EDamageEventType : uint8_t
{
	EDamageEvent_Health                                = 0,
	EDamageEvent_Damage                                = 1,
	EDamageEvent_DamageOverTime                        = 2,
	EDamageEvent_END                                   = 3
};

// Enum GearboxFramework.DenSpawner.EDenWaveState
enum class EDenWaveState : uint8_t
{
	EDenWaveState_NotStarted                           = 0,
	EDenWaveState_WarmingUp                            = 1,
	EDenWaveState_Spawning                             = 2,
	EDenWaveState_Spawned                              = 3,
	EDenWaveState_END                                  = 4
};

// Enum GearboxFramework.DenSpawner.EDenRadius
enum class EDenRadius : uint8_t
{
	EDenRadius_None                                    = 0,
	EDenRadius_Patrol                                  = 1,
	EDenRadius_Threat                                  = 2,
	EDenRadius_Spawn                                   = 3,
	EDenRadius_END                                     = 4
};

// Enum GearboxFramework.TargetingComponent.EAITargetStackLayer
enum class EAITargetStackLayer : uint8_t
{
	AITSL_Default                                      = 0,
	AITSL_Scripted                                     = 1,
	AITSL_Action                                       = 2,
	AITSL_END                                          = 3
};

// Enum GearboxFramework.IDialogSpeaker.ESpeakInstruction
enum class ESpeakInstruction : uint8_t
{
	SI_None                                            = 0,
	SI_Speak                                           = 1,
	SI_Stop                                            = 2,
	SI_END                                             = 3
};

// Enum GearboxFramework.DialogEventCondition.DialogEventConditionContext
enum class EDialogEventConditionContext : uint8_t
{
	DECC_Self                                          = 0,
	DECC_Subject                                       = 1,
	DECC_Target                                        = 2,
	DECC_Instigator                                    = 3,
	DECC_END                                           = 4
};

// Enum GearboxFramework.DialogResponse_Chance_And_Followup.EDialogFollowupTarget
enum class EDialogFollowupTarget : uint8_t
{
	DFT_Self                                           = 0,
	DFT_Subject                                        = 1,
	DFT_Instigator                                     = 2,
	DFT_Target                                         = 3,
	DFT_RandomNearbyFriend                             = 4,
	DFT_NamedSpeaker                                   = 5,
	DFT_AnyoneButSelf                                  = 6,
	DFT_END                                            = 7
};

// Enum GearboxFramework.FeatureProviderDefinition.EFeatureVersion
enum class EFeatureVersion : uint8_t
{
	EFeatureVersion_First                              = 0,
	EFeatureVersion_AddBody                            = 1,
	EFeatureVersion_AddAI                              = 2,
	EFeatureVersion_AddTargeting                       = 3,
	EFeatureVersion_AddWeaponUse                       = 4,
	EFeatureVersion_END                                = 5
};

// Enum GearboxFramework.FlagExpressionEvaluator.EFlagEvalType
enum class EFlagEvalType : uint8_t
{
	FLAG_IsTrue                                        = 0,
	FLAG_IsFalse                                       = 1,
	FLAG_TrueForXSeconds                               = 2,
	FLAG_FalseForXSeconds                              = 3,
	FLAG_TrueWithinXSeconds                            = 4,
	FLAG_FalseWithinXSeconds                           = 5,
	FLAG_END                                           = 6
};

// Enum GearboxFramework.GBXCameraMode.EPlayerRotationUpdateMethod
enum class EPlayerRotationUpdateMethod : uint8_t
{
	ROTATIONUPDATE_FromCamera                          = 0,
	ROTATIONUPDATE_FromInputDelta                      = 1,
	ROTATIONUPDATE_Fixed                               = 2,
	ROTATIONUPDATE_END                                 = 3
};

// Enum GearboxFramework.GBXInfluenceInfo_Combine.EInfluenceOperation
enum class EInfluenceOperation : uint8_t
{
	EInfluenceOperation_Add                            = 0,
	EInfluenceOperation_Subtract                       = 1,
	EInfluenceOperation_Multiply                       = 2,
	EInfluenceOperation_Divide                         = 3,
	EInfluenceOperation_GreaterAbsolute                = 4,
	EInfluenceOperation_SignedGreaterAbsolute          = 5,
	EInfluenceOperation_END                            = 6
};

// Enum GearboxFramework.GBXInfluenceInfo_LineOfSight.ELineOfSightInfo
enum class ELineOfSightInfo : uint8_t
{
	ELOSI_NoResult                                     = 0,
	ELOSI_NoLineOfSight                                = 1,
	ELOSI_HasLineOfSight                               = 2,
	ELOSI_END                                          = 3
};

// Enum GearboxFramework.GBXPathConstraint_Boundary.EBoundaryType
enum class EBoundaryType : uint8_t
{
	EBoundaryType_Near                                 = 0,
	EBoundaryType_Away                                 = 1,
	EBoundaryType_END                                  = 2
};

// Enum GearboxFramework.GBXPathConstraint_Boundary.EBoundaryDistanceType
enum class EBoundaryDistanceType : uint8_t
{
	EBoundaryDistance_Nodes                            = 0,
	EBoundaryDistance_Units                            = 1,
	EBoundaryDistance_END                              = 2
};

// Enum GearboxFramework.GBXPathConstraint_Danger.EDangerType
enum class EDangerType : uint8_t
{
	EDangerType_Avoid                                  = 0,
	EDangerType_Seek                                   = 1,
	EDangerType_END                                    = 2
};

// Enum GearboxFramework.GBXPathConstraint_Danger.EDangerRadiusType
enum class EDangerRadiusType : uint8_t
{
	EDangerRadius_Nodes                                = 0,
	EDangerRadius_Units                                = 1,
	EDangerRadius_END                                  = 2
};

// Enum GearboxFramework.GBXPathConstraint_Height.EHeightRestriction
enum class EHeightRestriction : uint8_t
{
	HeightRestriction_Within                           = 0,
	HeightRestriction_Above                            = 1,
	HeightRestriction_Below                            = 2,
	HeightRestriction_END                              = 3
};

// Enum GearboxFramework.GBXPathConstraint_Occupancy.EOccupancyType
enum class EOccupancyType : uint8_t
{
	EOccupancyType_Avoid                               = 0,
	EOccupancyType_Seek                                = 1,
	EOccupancyType_END                                 = 2
};

// Enum GearboxFramework.GBXPathConstraint_Occupancy.EOccupancyRadiusType
enum class EOccupancyRadiusType : uint8_t
{
	EOccupancyRadius_Nodes                             = 0,
	EOccupancyRadius_Units                             = 1,
	EOccupancyRadius_END                               = 2
};

// Enum GearboxFramework.GBXPathConstraint_Territory.ETerritoryConstraint
enum class ETerritoryConstraint : uint8_t
{
	ETerritoryConstraint_MyTerritory                   = 0,
	ETerritoryConstraint_TargetTerritory               = 1,
	ETerritoryConstraint_END                           = 2
};

// Enum GearboxFramework.GearboxAccountData.ESignAgreementsResult
enum class ESignAgreementsResult : uint8_t
{
	NO_AGREEMENTS_TO_SIGN                              = 0,
	AGREEMENTS_TO_SIGN_PENDING                         = 1,
	AGREEMENTS_TO_SIGN_DECLINED                        = 2,
	ESignAgreementsResult_END                          = 3
};

// Enum GearboxFramework.GearboxAccountData.EEntitlementConsumedResult
enum class EEntitlementConsumedResult : uint8_t
{
	CONSUME_Success                                    = 0,
	CONSUME_GeneralFailure                             = 1,
	CONSUME_NetworkFailure                             = 2,
	CONSUME_Timeout                                    = 3,
	CONSUME_END                                        = 4
};

// Enum GearboxFramework.GearboxAccountData.EResetPasswordResult
enum class EResetPasswordResult : uint8_t
{
	RESETP_Success                                     = 0,
	RESETP_GeneralFailure                              = 1,
	RESETP_NetworkFailure                              = 2,
	RESETP_Timeout                                     = 3,
	RESETP_NoSuchUser                                  = 4,
	RESETP_END                                         = 5
};

// Enum GearboxFramework.GearboxAccountData.ECodeRedeemedResult
enum class ECodeRedeemedResult : uint8_t
{
	REDEEM_Success                                     = 0,
	REDEEM_Expired                                     = 1,
	REDEEM_NotValid                                    = 2,
	REDEEM_Taken                                       = 3,
	REDEEM_GeneralFailure                              = 4,
	REDEEM_NetworkFailure                              = 5,
	REDEEM_Timeout                                     = 6,
	REDEEM_Duplicate                                   = 7,
	REDEEM_AtItemCapacity                              = 8,
	REDEEM_END                                         = 9
};

// Enum GearboxFramework.GearboxAccountData.ESignInResult
enum class ESignInResult : uint8_t
{
	SIGNIN_Success                                     = 0,
	SIGNIN_PlatformTakenByOther                        = 1,
	SIGNIN_PlatformTakenBySelf                         = 2,
	SIGNIN_LoginFail                                   = 3,
	SIGNIN_NetworkFailure                              = 4,
	SIGNIN_GeneralFailure                              = 5,
	SIGNIN_Timeout                                     = 6,
	SIGNIN_END                                         = 7
};

// Enum GearboxFramework.GearboxAccountData.ESignUpResult
enum class ESignUpResult : uint8_t
{
	SIGNUP_Success                                     = 0,
	SIGNUP_EmailTaken                                  = 1,
	SIGNUP_PlatformTaken                               = 2,
	SIGNUP_GeneralFailure                              = 3,
	SIGNUP_PasswordNotSet                              = 4,
	SIGNUP_PasswordTooShort                            = 5,
	SIGNUP_PasswordTooLong                             = 6,
	SIGNUP_PasswordInvalid                             = 7,
	SIGNUP_EmailNotSet                                 = 8,
	SIGNUP_EmailNotValid                               = 9,
	SIGNUP_NetworkFailure                              = 10,
	SIGNUP_Timeout                                     = 11,
	SIGNUP_END                                         = 12
};

// Enum GearboxFramework.GearboxAccountData.EAgeGateResult
enum class EAgeGateResult : uint8_t
{
	AGE_Valid                                          = 0,
	AGE_InvalidDate                                    = 1,
	AGE_BelowMinimum                                   = 2,
	AGE_END                                            = 3
};

// Enum GearboxFramework.SparkTypes.EHttpError
enum class EHttpError : uint8_t
{
	HE_Success                                         = 0,
	HE_UnknownFailure                                  = 1,
	HE_Timeout                                         = 2,
	HE_BadUrl                                          = 3,
	HE_Connect                                         = 4,
	HE_SendRequest                                     = 5,
	HE_ReceiveResponse                                 = 6,
	HE_ReadResponse                                    = 7,
	HE_WriteData                                       = 8,
	HE_ServerCertificate                               = 9,
	HE_CertPinningFailure                              = 10,
	HE_END                                             = 11
};

// Enum GearboxFramework.SparkTypes.ESparkStepResult
enum class ESparkStepResult : uint8_t
{
	STEP_NotStarted                                    = 0,
	STEP_AwaitingRetry                                 = 1,
	STEP_Success                                       = 2,
	STEP_Fail                                          = 3,
	STEP_InProgress                                    = 4,
	STEP_END                                           = 5
};

// Enum GearboxFramework.SparkTypes.ESparkInitializationStatus
enum class ESparkInitializationStatus : uint8_t
{
	SPARKINIT_GetPlatformTicket                        = 0,
	SPARKINIT_AuthenticateTicket                       = 1,
	SPARKINIT_VerifyAuthentication                     = 2,
	SPARKINIT_ReadDiscovery                            = 3,
	SPARKINIT_Complete                                 = 4,
	SPARKINIT_END                                      = 5
};

// Enum GearboxFramework.SparkTypes.EInitializedResult
enum class EInitializedResult : uint8_t
{
	INITIALIZED_ValidWithAccount                       = 0,
	INITIALIZED_ValidNoAccount                         = 1,
	INITIALIZED_InProgress                             = 2,
	INITIALIZED_ServiceFailure                         = 3,
	INITIALIZED_NotValid                               = 4,
	INITIALIZED_Banned                                 = 5,
	INITIALIZED_DiscoveryFailure                       = 6,
	INITIALIZED_Suspended                              = 7,
	INITIALIZED_END                                    = 8
};

// Enum GearboxFramework.GearboxAIUtility.AIUtilitySuspendStatus
enum class EAIUtilitySuspendStatus : uint8_t
{
	AUSS_Resuming                                      = 0,
	AUSS_Resumed                                       = 1,
	AUSS_Suspending                                    = 2,
	AUSS_Suspended                                     = 3,
	AUSS_END                                           = 4
};

// Enum GearboxFramework.PathingObstacleInfo.EHumanAvoidance
enum class EHumanAvoidance : uint8_t
{
	EHumanAvoidance_NPC                                = 0,
	EHumanAvoidance_Minion                             = 1,
	EHumanAvoidance_Always                             = 2,
	EHumanAvoidance_END                                = 3
};

// Enum GearboxFramework.GearboxEditorNode.NodeType
enum class ENodeType : uint8_t
{
	NT_Event                                           = 0,
	NT_Action                                          = 1,
	NT_Variable                                        = 2,
	NT_END                                             = 3
};

// Enum GearboxFramework.GearboxExpandableListGFxObject.EOnItemClickReacte
enum class EOnItemClickReacte : uint8_t
{
	OICR_OnCategorySelected                            = 0,
	OICR_OnSubCategorySelected                         = 1,
	OICR_OnEntrySelected                               = 2,
	OICR_None                                          = 3,
	OICR_END                                           = 4
};

// Enum GearboxFramework.GFxMovieState.EStateApplyMode
enum class EStateApplyMode : uint8_t
{
	SAM_None                                           = 0,
	SAM_GotoAndStop                                    = 1,
	SAM_GotoAndPlay                                    = 2,
	SAM_ActionScript                                   = 3,
	SAM_END                                            = 4
};

// Enum GearboxFramework.GFxMovieState.EMovieStateMode
enum class EMovieStateMode : uint8_t
{
	MOVIESTATE_Any                                     = 0,
	MOVIESTATE_StateMachine                            = 1,
	MOVIESTATE_Flags                                   = 2,
	MOVIESTATE_Custom                                  = 3,
	MOVIESTATE_END                                     = 4
};

// Enum GearboxFramework.INounAttributeProvider.ENounReplicationStrategy
enum class ENounReplicationStrategy : uint8_t
{
	NOUNREP_NoReplication                              = 0,
	NOUNREP_RepToOwnerOnly                             = 1,
	NOUNREP_RepToEveryone                              = 2,
	NOUNREP_END                                        = 3
};

// Enum GearboxFramework.GearboxNavigationHandle.PathFixMode
enum class EPathFixMode : uint8_t
{
	PathFix_None                                       = 0,
	PathFix_Waiting                                    = 1,
	PathFix_Lerping                                    = 2,
	PathFix_Failed                                     = 3,
	PathFix_END                                        = 4
};

// Enum GearboxFramework.InterpComponent.EInterpMode
enum class EInterpMode : uint8_t
{
	EIM_None                                           = 0,
	EIM_Linear                                         = 1,
	EIM_NonLinear                                      = 2,
	EIM_END                                            = 3
};

// Enum GearboxFramework.GearboxProcess.EGearboxProcessState
enum class EGearboxProcessState : uint8_t
{
	GPS_NotStarted                                     = 0,
	GPS_InProgress                                     = 1,
	GPS_Complete                                       = 2,
	GPS_Failed                                         = 3,
	GPS_END                                            = 4
};

// Enum GearboxFramework.GearboxRenderTextureManager.EThumbnailUpdate
enum class EThumbnailUpdate : uint8_t
{
	Thumbnail_Static                                   = 0,
	Thumbnail_Update                                   = 1,
	Thumbnail_StreamTextures                           = 2,
	Thumbnail_Dynamic                                  = 3,
	Thumbnail_END                                      = 4
};

// Enum GearboxFramework.GearboxSeqAct_TriggerDialog.EDynamicDialogPreviewAvailability
enum class EDynamicDialogPreviewAvailability : uint8_t
{
	DDPA_Unavailable                                   = 0,
	DDPA_InvalidConditions                             = 1,
	DDPA_ValidConditions                               = 2,
	DDPA_END                                           = 3
};

// Enum GearboxFramework.GFxActorMoviePool.EGFxMoviePooling
enum class EGFxMoviePooling : uint8_t
{
	GMP_Pooled                                         = 0,
	GMP_Shared                                         = 1,
	GMP_Instanced                                      = 2,
	GMP_END                                            = 3
};

// Enum GearboxFramework.GFxMovieDrawStyleHUD.EHUDOrientation
enum class EHUDOrientation : uint8_t
{
	HO_Horizontal                                      = 0,
	HO_Vertical                                        = 1,
	HO_END                                             = 2
};

// Enum GearboxFramework.GFxMovieDrawStyleHUD.EHUDCoordType
enum class EHUDCoordType : uint8_t
{
	HCT_Scaled                                         = 0,
	HCT_Fixed                                          = 1,
	HCT_MovieRelative                                  = 2,
	HCT_END                                            = 3
};

// Enum GearboxFramework.GFxMovieDrawStyleHUD.EHUDAnchorPoint
enum class EHUDAnchorPoint : uint8_t
{
	HAP_None                                           = 0,
	HAP_Center                                         = 1,
	HAP_TopLeft                                        = 2,
	HAP_TopRight                                       = 3,
	HAP_BottomLeft                                     = 4,
	HAP_BottomRight                                    = 5,
	HAP_Left                                           = 6,
	HAP_Top                                            = 7,
	HAP_Right                                          = 8,
	HAP_Bottom                                         = 9,
	HAP_Projected                                      = 10,
	HAP_ProjectedScaled                                = 11,
	HAP_END                                            = 12
};

// Enum GearboxFramework.MindTargetInfo.TargetExposure
enum class ETargetExposure : uint8_t
{
	Exposure_None                                      = 0,
	Exposure_Sight                                     = 1,
	Exposure_Weapon                                    = 2,
	Exposure_Full                                      = 3,
	Exposure_END                                       = 4
};

// Enum GearboxFramework.NavAnimNodePreviewComponent.ENavAnimNodePreviewDirection
enum class ENavAnimNodePreviewDirection : uint8_t
{
	ENavAnimNodePreview_Forward                        = 0,
	ENavAnimNodePreview_Reverse                        = 1,
	ENavAnimNodePreview_Both                           = 2,
	ENavAnimNodePreview_END                            = 3
};

// Enum GearboxFramework.Perch.EPerchState
enum class EPerchState : uint8_t
{
	PerchState_None                                    = 0,
	PerchState_Start                                   = 1,
	PerchState_Idle                                    = 2,
	PerchState_End                                     = 3,
	PerchState_END                                     = 4
};

// Enum GearboxFramework.PerchTag.EPerchIdleType
enum class EPerchIdleType : uint8_t
{
	EPerchIdleType_Loop                                = 0,
	EPerchIdleType_Stretch                             = 1,
	EPerchIdleType_END                                 = 2
};

// Enum GearboxFramework.SeqAct_AICombatVolume.ECombatVolumeOption
enum class ECombatVolumeOption : uint8_t
{
	ECVO_Set                                           = 0,
	ECVO_Clear                                         = 1,
	ECVO_END                                           = 2
};

// Enum GearboxFramework.SeqAct_CameraModeSet.ESeqActCameraModeSetInput
enum class ESeqActCameraModeSetInput : uint8_t
{
	ESACMSC_Add                                        = 0,
	ESACMSC_Remove                                     = 1,
	ESACMSC_END                                        = 2
};

// Enum GearboxFramework.SimpleMathValueResolver.EMathValueResolverArg1Option
enum class EMathValueResolverArg1Option : uint8_t
{
	MATHRESOLVEARG1_UsePreviousValue                   = 0,
	MATHRESOLVEARG1_FromAttribute                      = 1,
	MATHRESOLVEARG1_END                                = 2
};

// Enum GearboxFramework.SimpleMathValueResolver.EMathValueResolverOperand
enum class EMathValueResolverOperand : uint8_t
{
	MATHRESOLVEROPERAND_Add                            = 0,
	MATHRESOLVEROPERAND_Sub                            = 1,
	MATHRESOLVEROPERAND_Mul                            = 2,
	MATHRESOLVEROPERAND_Div                            = 3,
	MATHRESOLVEROPERAND_END                            = 4
};

// Enum GearboxFramework.SparkInterface.HttpMethod
enum class EHttpMethod : uint8_t
{
	HM_POST                                            = 0,
	HM_GET                                             = 1,
	HM_PUT                                             = 2,
	HM_DELETE                                          = 3,
	HM_END                                             = 4
};

// Enum GearboxFramework.SparkInterface.HttpMimeType
enum class EHttpMimeType : uint8_t
{
	HMT_Default                                        = 0,
	HMT_TEXT_PLAIN                                     = 1,
	HMT_JSON                                           = 2,
	HMT_PROTOBUF                                       = 3,
	HMT_CUSTOM                                         = 4,
	HMT_END                                            = 5
};

// Enum GearboxFramework.SparkInterfaceImpl.SparkRequestState
enum class ESparkRequestState : uint8_t
{
	SRS_IDLE                                           = 0,
	SRS_AWAITING_RETRY                                 = 1,
	SRS_IN_FLIGHT                                      = 2,
	SRS_AWAITING_AUTHENTICATE                          = 3,
	SRS_START                                          = 4,
	SRS_FAIL                                           = 5,
	SRS_QUEUED                                         = 6,
	SRS_CLEANUP                                        = 7,
	SRS_END                                            = 8
};

// Enum GearboxFramework.SparkNews.ENewsRetrievalResult
enum class ENewsRetrievalResult : uint8_t
{
	NEWSRETRIEVE_Success                               = 0,
	NEWSRETRIEVE_GeneralFailure                        = 1,
	NEWSRETRIEVE_NetworkFailure                        = 2,
	NEWSRETRIEVE_Timeout                               = 3,
	NEWSRETRIEVE_RateLimit                             = 4,
	NEWSRETRIEVE_END                                   = 5
};

// Enum GearboxFramework.SpawnDefinition.ERespawnOptions
enum class ERespawnOptions : uint8_t
{
	RESPAWN_Never                                      = 0,
	RESPAWN_OnTimeDelay                                = 1,
	RESPAWN_OnlyOnLevelLoad                            = 2,
	RESPAWN_END                                        = 3
};

// Enum GearboxFramework.SpawnEncounter.EEncounterConstraintType
enum class EEncounterConstraintType : uint8_t
{
	ENCOUNTERCONSTAINT_All                             = 0,
	ENCOUNTERCONSTAINT_Any                             = 1,
	ENCOUNTERCONSTAINT_NotAll                          = 2,
	ENCOUNTERCONSTAINT_NotAny                          = 3,
	ENCOUNTERCONSTAINT_END                             = 4
};

// Enum GearboxFramework.SpawnMaster.ESpawnStats
enum class ESpawnStats : uint8_t
{
	STATTYPE_SpawnActor                                = 0,
	STATTYPE_PointSearch                               = 1,
	STATTYPE_END                                       = 2
};

// Enum GearboxFramework.SpawnPoint.ESpawnPointConstraint
enum class ESpawnPointConstraint : uint8_t
{
	SpawnPointConstraint_None                          = 0,
	SpawnPointConstraint_Inclusion                     = 1,
	SpawnPointConstraint_Exclusion                     = 2,
	SpawnPointConstraint_InclusionOr                   = 3,
	SpawnPointConstraint_ExclusionOr                   = 4,
	SpawnPointConstraint_END                           = 5
};

// Enum GearboxFramework.SpawnPointTag.EStretchyType
enum class EStretchyType : uint8_t
{
	Stretchy_Linear                                    = 0,
	Stretchy_Parabola                                  = 1,
	Stretchy_END                                       = 2
};

// Enum GearboxFramework.SpecialMove_PhysicsJump.EPhysicsJumpType
enum class EPhysicsJumpType : uint8_t
{
	EPhysicsJumpType_RotateByTime                      = 0,
	EPhysicsJumpType_RotateDuringIdle                  = 1,
	EPhysicsJumpType_RotateDuringLaunch                = 2,
	EPhysicsJumpType_END                               = 3
};

// Enum GearboxFramework.SpecialMoveExpressionEvaluator.ESpecialMoveEvalType
enum class ESpecialMoveEvalType : uint8_t
{
	SpecialMove_IsActive                               = 0,
	SpecialMove_IsNotActive                            = 1,
	SpecialMove_END                                    = 2
};

// Enum GearboxFramework.StanceExpressionEvaluator.EStanceOption
enum class EStanceOption : uint8_t
{
	StanceOption_Active                                = 0,
	StanceOption_NotActive                             = 1,
	StanceOption_END                                   = 2
};

// Enum GearboxFramework.TargetClusterDefinition.ETargetClusterType
enum class ETargetClusterType : uint8_t
{
	ETargetCluster_Front                               = 0,
	ETargetCluster_Surround                            = 1,
	ETargetCluster_END                                 = 2
};

// Enum GearboxFramework.TargetingDefinition.ETargetConditionEvaluation
enum class ETargetConditionEvaluation : uint8_t
{
	EConditionEval_None                                = 0,
	EConditionEval_Passed                              = 1,
	EConditionEval_Failed                              = 2,
	EConditionEval_END                                 = 3
};

// Enum GearboxFramework.TargetingDefinition.ETargetConditionContext
enum class ETargetConditionContext : uint8_t
{
	TargetContext_Self                                 = 0,
	TargetContext_Target                               = 1,
	TargetContext_TargetInfo                           = 2,
	TargetContext_END                                  = 3
};

// Enum GearboxFramework.TargetIterator.ETargetIterator
enum class ETargetIterator : uint8_t
{
	TARGITER_UpdateState                               = 0,
	TARGITER_PriorityCalc                              = 1,
	TARGITER_ForgetTarget                              = 2,
	TARGITER_RemoveTarget                              = 3,
	TARGITER_PostProcess                               = 4,
	TARGITER_END                                       = 5
};

// Enum GearboxFramework.TargetIteratorPrioritizeNearbyTarget.EPrioritizeDistance
enum class EPrioritizeDistance : uint8_t
{
	EPrioritizeDistance_Near                           = 0,
	EPrioritizeDistance_Far                            = 1,
	EPrioritizeDistance_END                            = 2
};

// Enum GearboxFramework.TimeValueResolver.ETimeValueResolverMode
enum class ETimeValueResolverMode : uint8_t
{
	TVRM_CurrentTime                                   = 0,
	TVRM_FrameTime                                     = 1,
	TVRM_ElapsedTime                                   = 2,
	TVRM_END                                           = 3
};

// Enum GearboxFramework.UtilityDefinition.EUtilityType
enum class EUtilityType : uint8_t
{
	EUtilityType_Add                                   = 0,
	EUtilityType_Multiply                              = 1,
	EUtilityType_END                                   = 2
};

// Enum GearboxFramework.UtilityDefinition.EUtilityPreview
enum class EUtilityPreview : uint8_t
{
	EUtilityPreview_None                               = 0,
	EUtilityPreview_Editor                             = 1,
	EUtilityPreview_Runtime                            = 2,
	EUtilityPreview_END                                = 3
};

// Enum GearboxFramework.UtilityDefinition.EUtilityContext
enum class EUtilityContext : uint8_t
{
	EUtilityContext_Self                               = 0,
	EUtilityContext_Entry                              = 1,
	EUtilityContext_Custom                             = 2,
	EUtilityContext_END                                = 3
};

// Enum GearboxFramework.WeaponUsageDefinition.ELeadType
enum class ELeadType : uint8_t
{
	Lead_None                                          = 0,
	Lead_MaxDist                                       = 1,
	Lead_MaxSpeed                                      = 2,
	Lead_END                                           = 3
};

// Enum GearboxFramework.WeaponUseComponent.AIWeaponState
enum class EAIWeaponState : uint8_t
{
	AIWeaponState_Firing                               = 0,
	AIWeaponState_NotFiring                            = 1,
	AIWeaponState_FiringPaused                         = 2,
	AIWeaponState_END                                  = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GearboxFramework.ActionSequence
// 0x0080 (0x0058 - 0x00D8)
class UActionSequence : public UObject
{
public:
	float                                              LatentFloat;                                   // 0x0058 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bInitialized : 1;                              // 0x005C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bIsScriptAction : 1;                           // 0x005C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bActionFailed : 1;                             // 0x005C (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bDoWorkFinished : 1;                           // 0x005C (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bInAtomicSection : 1;                          // 0x005C (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bDoNotLoadBalance : 1;                         // 0x005C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	float                                              ActionUpdateRate;                              // 0x0060 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              IrrelevantUpdateRate;                          // 0x0064 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            AITreeNodeIdx;                                 // 0x0068 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UIAIInterface*                               AI_Object;                                     // 0x0070 (0x0008) [0x0000000000000000] 
	class UIAIInterface*                               AI_Interface;                                  // 0x0078 (0x0008) [0x0000000000000000]               
	class UAIComponent*                                AIComp;                                        // 0x0080 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<struct FName>                         BehaviorOutputs;                               // 0x0088 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FName                                       BehaviorName;                                  // 0x0098 (0x0008) [0x0000000000020002] (CPF_Const | CPF_EditConst)
	class AActor*                                      Target;                                        // 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UMindTargetInfo*                             TargetInfo;                                    // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UMindTargetInfo*                             ParentTargetInfo;                              // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FLatentStateData                            StateData;                                     // 0x00B8 (0x0020) [0x0000000000002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ActionSequence");
		}

		return uClassPointer;
	};

	void TriggerBehavior(const struct FName& OutputName);
	struct FName eventCanRun();
	void eventActivateEvent(const struct FName& EventName);
	void eventUpdate();
	void eventInit();
	void eventStop();
	void eventStart();
	bool Sleep(float Seconds);
	void InterruptLatentAction();
	bool IsAtomic();
	void StopAtomic();
	void StartAtomic();
};

// Class GearboxFramework.ActionSequencePawn
// 0x01C0 (0x00D8 - 0x0298)
class UActionSequencePawn : public UActionSequence
{
public:
	uint32_t                                           bPathing : 1;                                  // 0x00D8 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bCanPathFind : 1;                              // 0x00D8 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bPathingFailed : 1;                            // 0x00D8 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bLatentPathing : 1;                            // 0x00D8 (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bCloakOnlyWaitForAnims : 1;                    // 0x00D8 (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint32_t                                           bShouldFindPathsWhileInactive : 1;             // 0x00D8 (0x0004) [0x0000000000000002] [0x00000020] (CPF_Const)
	uint32_t                                           bShouldFindPathsWhileIrrelevant : 1;           // 0x00D8 (0x0004) [0x0000000000000002] [0x00000040] (CPF_Const)
	uint32_t                                           bDisableCloaking : 1;                          // 0x00D8 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	float                                              TurnReachedAngle;                              // 0x00DC (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FPathRequestData                            PathRequest;                                   // 0x00E0 (0x0170) [0x0000000000400000] (CPF_NeedCtorLink)
	class USpecialMoveDefinition*                      LatentSpecialMove;                             // 0x0250 (0x0008) [0x0000000000000000]               
	class AGearboxMind*                                MyGearboxMind;                                 // 0x0258 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class AGearboxPawn*                                MyGearboxPawn;                                 // 0x0260 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UGearboxNavigationHandle*                    NavHandle;                                     // 0x0268 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class TArray<class UGBXPathConstraint*>            FullPathCostModifiers;                         // 0x0270 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UGBXPathConstraint*>            PathCostModifiers;                             // 0x0280 (0x0010) [0x000000000440000A] (CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UStanceDefinition*                           Stance;                                        // 0x0290 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ActionSequencePawn");
		}

		return uClassPointer;
	};

	bool IsValidTeleportLocation(const struct FVector& TestLoc, bool bCheckStaticCollision);
	bool Teleport(const struct FVector& TeleportLoc, bool bCheckWorldCollision);
	void SetPawnMovementSpeed(EDefaultStance NewPawnMovementSpeed);
	void SetDefaultStanceName(const struct FName& InDefaultStanceName);
	EMoveStyle GetMoveStyle();
	void SetCloakOverride(ECloakOverride InOverride, bool optionalBImmediate);
	bool CheckCloaked(const struct FName& CloakState, bool optionalBOnlyWaitForAnims);
	bool PlaySpecialMove(class USpecialMoveDefinition* SpecialMove, float optionalPlayRateScale, float optionalDuration, const struct FName& optionalCallbackName, class UObject* optionalCallbackObject, class UObject* optionalData);
	bool WaitForPawnToStop();
	void StopMovement();
	void eventFinishedPathFollowing();
	void eventFinishedPathFinding();
	ECustomPathResult eventCreateCustomPath(struct FPathRequestData& Request);
	void PathRequestCustom();
	bool PathToCustom();
	void BuildPathCostModifiers();
	void PathRequestConstrained(bool bSearch, class AActor* optionalGoalActor, const struct FVector& optionalGoalLoc, class TArray<class UGBXPathConstraint*>& Constraints);
	bool PathToConstrained(bool bSearch, class AActor* optionalGoalActor, const struct FVector& optionalGoalLoc, class TArray<class UGBXPathConstraint*>& Constraints);
	void PathRequestLocation(const struct FVector& GoalLoc, float optionalReachTolerance);
	bool PathToLocation(const struct FVector& GoalLoc, float optionalReachTolerance);
	void PathRequestActor(class AActor* GoalActor, float optionalReachTolerance);
	bool PathToActor(class AActor* GoalActor, float optionalReachTolerance);
	void SetPathing(bool bIsPathing);
	void PathRequestClear();
	bool IsPathing();
	bool Path();
	bool LocationReachedPathRequest(const struct FVector& TestLoc, const struct FInfluencePointRef& optionalInfPoint);
	bool ReachedPathRequest();
	bool PathIsValid(struct FPathRequestData& Request);
	void SetPathRequestGoal(class AActor* optionalGoalActor, const struct FVector& optionalGoalLocation, struct FPathRequestData& Request);
	struct FVector GetPathDestination();
	struct FVector GetPathRequestGoal();
	void eventStop();
	void eventStart();
	void eventInit();
};

// Class GearboxFramework.Action_Companion
// 0x00A0 (0x0298 - 0x0338)
class UAction_Companion : public UActionSequencePawn
{
public:
	struct FName                                       CompanionInstanceDataName;                     // 0x0298 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              TooFarDistance;                                // 0x02A0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CloseEnoughDistance;                           // 0x02A4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SprintDistance;                                // 0x02A8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    IdleInitialTime;                               // 0x02AC (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    IdleHangTime;                                  // 0x02B4 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PathFailWaitTime;                              // 0x02BC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxCatchUpTime;                                // 0x02C0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bIgnoreDeadCompanions : 1;                     // 0x02C4 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bHumansOnly : 1;                               // 0x02C4 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bAllowTeleporting : 1;                         // 0x02C4 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bShootTarget : 1;                              // 0x02C4 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bCanShootWhileMoving : 1;                      // 0x02C4 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           bRepositioning : 1;                            // 0x02C4 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	uint32_t                                           bInitialHangOut : 1;                           // 0x02C4 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	class TArray<class UGBXPathConstraint*>            HangOutLimits;                                 // 0x02C8 (0x0010) [0x000000000440000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UGBXPathConstraint*>            TeleportLimits;                                // 0x02D8 (0x0010) [0x000000000440000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UExpressionEvaluator*                        CanShootIf;                                    // 0x02E8 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class AActor*                                      Companion;                                     // 0x02F0 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     HangOutLocation;                               // 0x02F8 (0x000C) [0x0000000000002000] (CPF_Transient)
	class UIInstanceData*                              CompanionInstanceDataStore_Object;             // 0x0308 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIInstanceData*                              CompanionInstanceDataStore_Interface;          // 0x0310 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<class UGBXPathConstraint*>            FullHangOutLimits;                             // 0x0318 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UGBXPathConstraint*>            FullTeleportLimits;                            // 0x0328 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Action_Companion");
		}

		return uClassPointer;
	};

	void GoToTeleportState();
	void CheckState();
};

// Class GearboxFramework.Action_Dodge
// 0x0010 (0x0298 - 0x02A8)
class UAction_Dodge : public UActionSequencePawn
{
public:
	class UDodgeComponent*                             DodgeComponent;                                // 0x0298 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UStanceComponent*                            StanceComponent;                               // 0x02A0 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Action_Dodge");
		}

		return uClassPointer;
	};

	bool IsDodging();
	void eventStart();
	struct FName eventCanRun();
	void eventInit();
};

// Class GearboxFramework.Action_FollowMoveNodes
// 0x0020 (0x0298 - 0x02B8)
class UAction_FollowMoveNodes : public UActionSequencePawn
{
public:
	class UExpressionEvaluator*                        MoveForwardCondition;                          // 0x0298 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	uint32_t                                           bMovingForward : 1;                            // 0x02A0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           ShouldCallFinishedLastNode : 1;                // 0x02A0 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class AGearboxAIMoveNode*                          MoveNode;                                      // 0x02A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AGearboxAIMoveNode*                          LastNode;                                      // 0x02B0 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Action_FollowMoveNodes");
		}

		return uClassPointer;
	};

	void InterruptMoveNode();
	void InterruptPath();
	bool ShouldFaceNodeDirection(class AGearboxAIMoveNode* TestNode);
	void SetMoveNode(class AGearboxAIMoveNode* NewMoveNode);
	struct FName GetFollowNodesCloakName();
	class AGearboxAIMoveNode* GetMoveNode();
	void CheckStateTransition();
	void SetMoveFacingPolicy();
	void SetMoveNodeSpeed();
};

// Class GearboxFramework.Action_Patrol
// 0x0040 (0x02B8 - 0x02F8)
class UAction_Patrol : public UAction_FollowMoveNodes
{
public:
	uint32_t                                           bRequiresPatrolNode : 1;                       // 0x02B8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bTryToHideIfProvoked : 1;                      // 0x02B8 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class UPerchType*                                  PerchType;                                     // 0x02C0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UGBXPathConstraint*>            HideLimits;                                    // 0x02C8 (0x0010) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class APerch*                                      MyPatrolPerch;                                 // 0x02D8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AGearboxAIMoveNode*                          PatrolPerchNode;                               // 0x02E0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AGearboxAIMoveNode*                          LastPatrolNode;                                // 0x02E8 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            TryToHideFailures;                             // 0x02F0 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Action_Patrol");
		}

		return uClassPointer;
	};

	void FindMyPerch();
	float GetPatrolWaitTime();
	struct FName GetFollowNodesCloakName();
	void SetMoveNode(class AGearboxAIMoveNode* NewNode);
	class AGearboxAIMoveNode* GetMoveNode();
	void SetMoveNodeSpeed();
	void SetMoveFacingPolicy();
};

// Class GearboxFramework.Action_Perch
// 0x0060 (0x02B8 - 0x0318)
class UAction_Perch : public UAction_FollowMoveNodes
{
public:
	uint32_t                                           bMustHaveTarget : 1;                           // 0x02B8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bPickClosestPerch : 1;                         // 0x02B8 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseLimits : 1;                                // 0x02B8 (0x0004) [0x0000000000000000] [0x00000004] 
	class UPerchType*                                  PerchType;                                     // 0x02C0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EPerchMoveType                                     MoveType;                                      // 0x02C8 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FTrajectoryData                             Options;                                       // 0x02CC (0x0024) [0x0000000000000001] (CPF_Edit)    
	class USpecialMove_LeapAttack*                     LeapAnim;                                      // 0x02F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UGBXPathConstraint*>            Limits;                                        // 0x02F8 (0x0010) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class APerch*                                      MyPerch;                                       // 0x0308 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AGearboxAIMoveNode*                          MyPerchNode;                                   // 0x0310 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Action_Perch");
		}

		return uClassPointer;
	};

	bool ShouldFaceNodeDirection(class AGearboxAIMoveNode* TestNode);
	void SetMoveFacingPolicy();
	void eventStart();
	struct FName eventCanRun();
};

// Class GearboxFramework.Action_Scripted
// 0x0088 (0x02B8 - 0x0340)
class UAction_Scripted : public UAction_FollowMoveNodes
{
public:
	class USeqAct_AIScripted*                          ScriptedAction;                                // 0x02B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UStanceDefinition*                           ScriptedStance;                                // 0x02C0 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bScriptedCanAttack : 1;                        // 0x02C8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              ActionStartTime;                               // 0x02CC (0x0004) [0x0000000000002000] (CPF_Transient)
	class USpecialMoveDefinition*                      ScriptedSMD;                                   // 0x02D0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      ScriptedLookActor;                             // 0x02D8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AGearboxAIMoveNode*                          ScriptedMoveNode;                              // 0x02E0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UCoverSlotComponent*                         ScriptedCoverSlot;                             // 0x02E8 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	ETerritoryType                                     TerritoryArea;                                 // 0x02F0 (0x0001) [0x0000000000002000] (CPF_Transient)
	class UTerritoryComponent*                         Territory;                                     // 0x02F8 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FAIScriptedActionParams                     ScriptedAIActionParams;                        // 0x0300 (0x0040) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Action_Scripted");
		}

		return uClassPointer;
	};

	void SetMoveNode(class AGearboxAIMoveNode* NewNode);
	class AGearboxAIMoveNode* GetMoveNode();
	void SetMoveNodeSpeed();
	void SetMoveFacingPolicy();
	void ScriptedAnimFinished(bool bInterrupted);
	void ScriptedActionEnded();
	void ScriptedActionStarted();
	void CheckStateTransition();
	struct FName GetDesiredStateName();
	void eventStart();
	struct FName eventCanRun();
};

// Class GearboxFramework.Action_MoveTo
// 0x0040 (0x0298 - 0x02D8)
class UAction_MoveTo : public UActionSequencePawn
{
public:
	float                                              Distance;                                      // 0x0298 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRelativeDirectionData                      Direction;                                     // 0x02A0 (0x0038) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Action_MoveTo");
		}

		return uClassPointer;
	};

	struct FVector GetMoveLocation();
	void eventStart();
};

// Class GearboxFramework.Action_Search
// 0x0038 (0x0298 - 0x02D0)
class UAction_Search : public UActionSequencePawn
{
public:
	float                                              SearchAngle;                                   // 0x0298 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SearchRadius;                                  // 0x029C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CautiousTime;                                  // 0x02A0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              UpdateSearchInfoRate;                          // 0x02A4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            SearchPointIdx;                                // 0x02A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     StartLocation;                                 // 0x02AC (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              LastCautiousTime;                              // 0x02B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastSuspiciousTime;                            // 0x02BC (0x0004) [0x0000000000002000] (CPF_Transient)
	class UMindTargetInfo*                             TargetRec;                                     // 0x02C0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGBXInfluenceInfo_Search*                    SearchInfo;                                    // 0x02C8 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Action_Search");
		}

		return uClassPointer;
	};

	bool SetSearchLocation();
	void FinishedLooking();
	void FinishedSearching();
	void CheckStateTransition();
	void UpdateSearchInfo();
	void eventStop();
	void eventStart();
	void eventActivateEvent(const struct FName& EventName);
	struct FName eventCanRun();
};

// Class GearboxFramework.ActorAttributeContextResolver
// 0x0008 (0x0058 - 0x0060)
class UActorAttributeContextResolver : public UAttributeContextResolver
{
public:
	class UClass*                                      ActorClass;                                    // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ActorAttributeContextResolver");
		}

		return uClassPointer;
	};

	class UObject* GetAttributeContext(class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource);
};

// Class GearboxFramework.ActorFactoryClone
// 0x0018 (0x00C0 - 0x00D8)
class UActorFactoryClone : public UActorFactory
{
public:
	class TArray<class AGearboxPawn*>                  CloneArchetype;                                // 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       NewCloneTag;                                   // 0x00D0 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ActorFactoryClone");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ActorFactorySpawner
// 0x0000 (0x00C0 - 0x00C0)
class UActorFactorySpawner : public UActorFactory
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ActorFactorySpawner");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ActorFactoryDenSpawner
// 0x0000 (0x00C0 - 0x00C0)
class UActorFactoryDenSpawner : public UActorFactorySpawner
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ActorFactoryDenSpawner");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ActorFactoryPointSpawner
// 0x0000 (0x00C0 - 0x00C0)
class UActorFactoryPointSpawner : public UActorFactorySpawner
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ActorFactoryPointSpawner");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ActorFactoryWireTerminal
// 0x0000 (0x00C0 - 0x00C0)
class UActorFactoryWireTerminal : public UActorFactory
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ActorFactoryWireTerminal");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AIActionTag
// 0x0008 (0x0058 - 0x0060)
class UAIActionTag : public UGBXDefinition
{
public:
	uint32_t                                           DisabledByDefault : 1;                         // 0x0058 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIActionTag");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AIActionTagExpressionEvaluator
// 0x0018 (0x0058 - 0x0070)
class UAIActionTagExpressionEvaluator : public UExpressionEvaluator
{
public:
	EAIActionTagQuery                                  Query;                                         // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UAIActionTag*>                  ActionTags;                                    // 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIActionTagExpressionEvaluator");
		}

		return uClassPointer;
	};

};

struct FAITree {
	char UnknownData[0xC0];
};

// Class GearboxFramework.AIComponent
// 0x0268 (0x0090 - 0x02F8)
class UAIComponent : public UActorComponent
{
public:
	uint32_t                                           bIrrelevant : 1;                               // 0x0090 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              UpdateRate;                                    // 0x0094 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              IrrelevantUpdateRate;                          // 0x0098 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UIAIInterface*                               AI_Object;                                     // 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIAIInterface*                               AI_Interface;                                  // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UAIDefinition*                               AIDef;                                         // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AAIDebugTarget*                              DebugTarget;                                   // 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UTargetingComponent*                         TargetingComponent;                            // 0x00C0 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UWeaponUseComponent*                         WeaponUseComponent;                            // 0x00C8 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FAITree                                     Tree;                                          // 0x00D0 (0x00C0) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class UAIDefinition*                               AIDefCopy;                                     // 0x0190 (0x0008) [0x0000000000000000]               
	class AGearboxAIMoveNode*                          ScriptedNode;                                  // 0x0198 (0x0008) [0x0000000000002000] (CPF_Transient)
	class USeqAct_AIScripted*                          ScriptedAction;                                // 0x01A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FAIScriptedActionParams                     ScriptedActionParams;                          // 0x01A8 (0x0040) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUInt64                                     DisabledActionTagMask;                         // 0x01E8 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FName                                       AimLocationName;                               // 0x01F0 (0x0008) [0x0000000000002000] (CPF_Transient)
	EAwareness                                         Awareness;                                     // 0x01F8 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              AwarenessMeter;                                // 0x01FC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              AwarenessUpdateRate;                           // 0x0200 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastAwarenessUpdateTime;                       // 0x0204 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastShareAwarenessUpdateTime;                  // 0x0208 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SightSenseModifier;                            // 0x020C (0x0004) [0x8000000000002000] (CPF_Transient)
	float                                              SightSenseModifierBaseValue;                   // 0x0210 (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            SightSenseModifierModifierStack;               // 0x0218 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	float                                              SoundSenseModifier;                            // 0x0228 (0x0004) [0x8000000000002000] (CPF_Transient)
	float                                              SoundSenseModifierBaseValue;                   // 0x022C (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            SoundSenseModifierModifierStack;               // 0x0230 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FAIHoldData>                   Holds;                                         // 0x0240 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FAIHoldData>                   TargetHolds;                                   // 0x0250 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FAIHoldData>                   MovementHolds;                                 // 0x0260 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FAIHoldData>                   DemigodHolds;                                  // 0x0270 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FAIHoldData>                   GodHolds;                                      // 0x0280 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FAIHoldData>                   DialogHolds;                                   // 0x0290 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              InfluencePointTime;                            // 0x02A0 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              MaxInfluencePointTime;                         // 0x02A4 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FInfluencePointRef                          LastInfluencePoint;                            // 0x02A8 (0x0010) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FInfluencePointRef                          CurrentInfluencePoint;                         // 0x02B8 (0x0010) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class TArray<struct FInvalidPointData>             InvalidInfluencePoints;                        // 0x02C8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class AGBXInfluenceMap*                            CurrentInfluenceMap;                           // 0x02D8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UTerritoryComponent*                         Territory;                                     // 0x02E0 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UAIComponent*                                TargetLeader;                                  // 0x02E8 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UAIComponent*                                FormationLeader;                               // 0x02F0 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIComponent");
		}

		return uClassPointer;
	};

	static float GetAIRangeTime(const struct FAIRange& InRange);
	static void DecrementConstraintDebugIndex();
	static void IncrementConstraintDebugIndex();
	float GetPointScore(bool bRanged, const struct FInfluencePointRef& InfPoint, class AActor* optionalTarget, bool optionalBInitialize, struct FPathRequestData& Request, struct FVector& TestLoc);
	float GetLocationScore(bool bRanged, class AActor* optionalTarget, bool optionalBInitialize, struct FPathRequestData& Request, struct FVector& TestLoc);
	bool WithinValidSpace(const struct FInfluencePointRef& InfPoint, bool bRanged, struct FVector& TestLoc);
	void SetMaxInfluencePointTime(float MaxTime);
	class AGBXInfluenceMap* GetInfluenceMap();
	void UpdateInfluencePoint(float DeltaTime);
	void InvalidateInfluencePoint(float optionalInvalidTime);
	void MarkCurrentInfluencePoint();
	static void CalcBestTrajectoryParams(float LeapGravity, struct FVector& StartLoc, struct FVector& EndLoc, float& OutSpeed, float& OutAngle);
	static void CalcTrajectoryByTime(float LeapTime, float LeapGravity, struct FVector& StartLoc, struct FVector& EndLoc, struct FVector& OutVelocity);
	static void CalcTrajectoryAtActor(class AActor* Source, class AActor* Target, struct FTrajectoryData& Data, float& OutTime, float& OutGravity, struct FVector& OutVelocity);
	static void CalcTrajectory(float LeapSpeed, float LeapAngle, struct FVector& StartLoc, struct FVector& EndLoc, float& OutTime, float& OutGravity, struct FVector& OutVelocity);
	static struct FVector GetTrajectoryOffset(float OffsetTime, float TotalTime, float Gravity, const struct FVector& StartVelocity);
	void LogDemigodHolds();
	void ReleaseDialog(const struct FName& HoldName, class UObject* Tag);
	void HoldDialog(const struct FName& HoldName, class UObject* Tag);
	bool DialogOnHold();
	void ReleaseGod(const struct FName& HoldName, class UObject* Tag);
	void HoldGod(const struct FName& HoldName, class UObject* Tag);
	bool GodOnHold();
	void ReleaseDemigod(const struct FName& HoldName, class UObject* Tag);
	void HoldDemigod(const struct FName& HoldName, class UObject* Tag);
	bool DemigodOnHold();
	void ReleaseMovement(const struct FName& HoldName, class UObject* Tag);
	void HoldMovement(const struct FName& HoldName, class UObject* Tag);
	bool MovementOnHold();
	void ReleaseTarget(const struct FName& HoldName, class UObject* Tag);
	void HoldTarget(const struct FName& HoldName, class UObject* Tag);
	bool TargetOnHold();
	void ReleaseType(EAIHoldType HoldType, const struct FName& HoldName, class UObject* Tag);
	void HoldType(EAIHoldType HoldType, const struct FName& HoldName, class UObject* Tag);
	void Release(const struct FName& HoldName, class UObject* Tag);
	void Hold(const struct FName& HoldName, class UObject* Tag);
	bool OnHold();
	float GetSoundSenseModifier();
	float GetSightSenseModifier();
	float GetAwarenessMeter();
	EAwareness GetAwareness();
	void UpdateAwareness();
	int32_t GetNumValidHumanTargets();
	class UMindTargetInfo* GetTargetRecordFor(class AActor* Target, bool optionalBTryParent);
	class UMindTargetInfo* GetTargetRecord(bool optionalBTryParent);
	bool IsTarget(class AActor* TestTarget);
	int32_t GetNumValidTargets();
	class AActor* GetTarget();
	bool HasTarget();
	void NotifyAttackedBy(class AActor* Attacker);
	void SetScriptedNode(class AGearboxAIMoveNode* InScriptedNode);
	class AGearboxAIMoveNode* GetScriptedNode();
	bool HasScriptedNode();
	void SetScriptedAction(class USeqAct_AIScripted* InScriptedAction);
	void ClearScriptedAction(bool optionalBInterrupted);
	class USeqAct_AIScripted* GetScriptedAction();
	bool HasScriptedAction();
	class UAIComponent* GetParentComponent();
	class UPawnAllegiance* GetAllegiance();
};

// Class GearboxFramework.AIComponentAttributeContextResolver
// 0x0000 (0x0058 - 0x0058)
class UAIComponentAttributeContextResolver : public UAttributeContextResolver
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIComponentAttributeContextResolver");
		}

		return uClassPointer;
	};

	class UObject* GetAttributeContext(class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource);
};

// Class GearboxFramework.AICostExpressionEvaluator
// 0x0030 (0x0058 - 0x0088)
class UAICostExpressionEvaluator : public UExpressionEvaluator
{
public:
	int32_t                                            Multiplier;                                    // 0x0058 (0x0004) [0x0000000000000000]               
	struct FAttributeInitializationData                MultiplierValue;                               // 0x0060 (0x0020) [0x0000000000000001] (CPF_Edit)    
	class USpawnDefinition*                            SpawnDef;                                      // 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AICostExpressionEvaluator");
		}

		return uClassPointer;
	};

	bool Evaluate(class UObject* ContextSource);
};

// Class GearboxFramework.AIDebugCamera
// 0x0068 (0x0058 - 0x00C0)
class UAIDebugCamera : public UObject
{
public:
	class AGearboxMind*                                Mind;                                          // 0x0058 (0x0008) [0x0000000000000000]               
	class TArray<struct FDebugListItem>                DisplayList;                                   // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bSnapshotModeOn : 1;                           // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShowFlags : 1;                                // 0x0070 (0x0004) [0x0000000000044000] [0x00000002] (CPF_Config | CPF_GlobalConfig)
	uint32_t                                           bShowCombat : 1;                               // 0x0070 (0x0004) [0x0000000000044000] [0x00000004] (CPF_Config | CPF_GlobalConfig)
	uint32_t                                           bShowTargetViewCones : 1;                      // 0x0070 (0x0004) [0x0000000000044000] [0x00000008] (CPF_Config | CPF_GlobalConfig)
	uint32_t                                           bShowTimers : 1;                               // 0x0070 (0x0004) [0x0000000000044000] [0x00000010] (CPF_Config | CPF_GlobalConfig)
	uint32_t                                           bShowPaths : 1;                                // 0x0070 (0x0004) [0x0000000000044000] [0x00000020] (CPF_Config | CPF_GlobalConfig)
	uint32_t                                           bShowAwareness : 1;                            // 0x0070 (0x0004) [0x0000000000044000] [0x00000040] (CPF_Config | CPF_GlobalConfig)
	uint32_t                                           bShowLineOfSight : 1;                          // 0x0070 (0x0004) [0x0000000000044000] [0x00000080] (CPF_Config | CPF_GlobalConfig)
	uint32_t                                           bShowAITree : 1;                               // 0x0070 (0x0004) [0x0000000000000000] [0x00000100] 
	int32_t                                            SnapshotNdx;                                   // 0x0074 (0x0004) [0x0000000000000000]               
	class USnapshotRecord*                             CurSnapshot;                                   // 0x0078 (0x0008) [0x0000000000000000]               
	class UPopUpDebugBarGraph*                         PopUpGraphTop;                                 // 0x0080 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPopUpDebugBarGraph*                         PopUpGraphCenter;                              // 0x0088 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FName                                       CurrentInspectedTargetName;                    // 0x0090 (0x0008) [0x0000000000000000]               
	class AActor*                                      CurrentInspectedTarget;                        // 0x0098 (0x0008) [0x0000000000000000]               
	float                                              TopBarGraphStartXPct;                          // 0x00A0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              TopBarGraphStartYPct;                          // 0x00A4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CenterBarGraphStartXPct;                       // 0x00A8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CenterBarGraphStartYPct;                       // 0x00AC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              Column2XOffset;                                // 0x00B0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              Column1LastY;                                  // 0x00B4 (0x0004) [0x0000000000000000]               
	float                                              Column2LastY;                                  // 0x00B8 (0x0004) [0x0000000000000000]               
	int32_t                                            LastColumnDrawnTo;                             // 0x00BC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIDebugCamera");
		}

		return uClassPointer;
	};

	static class AGearboxMind* GetDebugMind();
	void ToggleAITree();
	void ToggleAwareness();
	void TogglePaths();
	void ToggleTargetViewCones();
	void ToggleCombat();
	void ToggleShowTimers();
	void ToggleFlags();
	class UAITracker* GetTracker();
	void SetMind(class AGearboxMind* NewMind);
	void InitDummies(int32_t NewNumDummies);
	bool WantsToDoCameraInspection();
	void SetCurrentInspectedTarget(class AActor* TargetActor);
	void SetPrevSnapshot();
	void SetNextSnapshot();
	void NotifyGameUnPaused();
	void NotifyGamePaused();
	void Display(class AHUD* HUD);
};

// Class GearboxFramework.AIResource
// 0x0020 (0x0058 - 0x0078)
class UAIResource : public UGBXDefinition
{
public:
	class TArray<struct FAIResourceRestriction>        ResourceRestrictions;                          // 0x0058 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bPerTargetResource : 1;                        // 0x0068 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	int32_t                                            MaxUsers;                                      // 0x006C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            MinUsers;                                      // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIResource");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AIResourceExpressionEvaluator
// 0x0010 (0x0058 - 0x0068)
class UAIResourceExpressionEvaluator : public UExpressionEvaluator
{
public:
	EAIResourceOption                                  Option;                                        // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAIResource*                                 Resource;                                      // 0x0060 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIResourceExpressionEvaluator");
		}

		return uClassPointer;
	};

	bool Evaluate(class UObject* ContextSource);
};

// Class GearboxFramework.AISoundDefinition
// 0x0008 (0x0058 - 0x0060)
class UAISoundDefinition : public UGBXDefinition
{
public:
	float                                              Radius;                                        // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Loudness;                                      // 0x005C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AISoundDefinition");
		}

		return uClassPointer;
	};

	void Play(class UITargetable* SourceTargetable, bool optionalBCommunicate);
	float GetLoudness();
	float GetRadius();
};

// Class GearboxFramework.AITracker
// 0x01A0 (0x0058 - 0x01F8)
class UAITracker : public UObject
{
public:
	class USnapshotRecord*                             Snapshots[0x32];                               // 0x0058 (0x0190) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SnapshotSize;                                  // 0x01E8 (0x0004) [0x0000000000000000]               
	int32_t                                            SnapshotIndex;                                 // 0x01EC (0x0004) [0x0000000000000000]               
	class AActor*                                      DebugOwner;                                    // 0x01F0 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AITracker");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AllegianceExpressionEvaluator
// 0x0010 (0x0058 - 0x0068)
class UAllegianceExpressionEvaluator : public UExpressionEvaluator
{
public:
	EAllegianceExpression                              AllegianceCheck;                               // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPawnAllegiance*                             Allegiance;                                    // 0x0060 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AllegianceExpressionEvaluator");
		}

		return uClassPointer;
	};

	bool Evaluate(class UObject* ContextSource);
};

// Class GearboxFramework.AnimNode_CompoundMovement
// 0x0020 (0x01A0 - 0x01C0)
class UAnimNode_CompoundMovement : public UAnimNodeBlendList
{
public:
	struct FVector                                     Dir;                                           // 0x01A0 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       GroupName;                                     // 0x01AC (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                           UnknownData00[0xC];                            // 0x01B4 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimNode_CompoundMovement");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AnimNode_Condition_BlendList
// 0x0020 (0x01A0 - 0x01C0)
class UAnimNode_Condition_BlendList : public UAnimNodeBlendList
{
public:
	float                                              CheckRate;                                     // 0x01A0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UFlagDefinition*                             FlagCondition;                                 // 0x01A8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              LastCheckTime;                                 // 0x01B0 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                           UnknownData00[0xC];                            // 0x01B4 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimNode_Condition_BlendList");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AnimNode_Crossfade
// 0x0010 (0x0150 - 0x0160)
class UAnimNode_Crossfade : public UAnimNodeBlendBase
{
public:
	float                                              Value;                                         // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                           UnknownData00[0xC];                            // 0x0154 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimNode_Crossfade");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AnimNode_SpeedCrossfade
// 0x0020 (0x0160 - 0x0180)
class UAnimNode_SpeedCrossfade : public UAnimNode_Crossfade
{
public:
	class TArray<struct FAnimSpeedCrossfadeChildData>  ChildData;                                     // 0x0160 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bComputeChildData : 1;                         // 0x0170 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              BlendAnimLength;                               // 0x0174 (0x0004) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0x8];                            // 0x0178 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimNode_SpeedCrossfade");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AnimNode_TurnBlend
// 0x0020 (0x0160 - 0x0180)
class UAnimNode_TurnBlend : public UAnimNode_Crossfade
{
public:
	uint32_t                                           bEnabled : 1;                                  // 0x0160 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bComputeChildData : 1;                         // 0x0160 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	class TArray<float>                                ChildData;                                     // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                           UnknownData00[0x8];                            // 0x0178 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimNode_TurnBlend");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AnimNode_DirectionSet
// 0x0020 (0x01A0 - 0x01C0)
class UAnimNode_DirectionSet : public UAnimNodeBlendList
{
public:
	struct FVector                                     Dir;                                           // 0x01A0 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bComputeChildData : 1;                         // 0x01AC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class TArray<struct FAnimDirectionSetChildData>    ChildData;                                     // 0x01B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimNode_DirectionSet");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AnimNode_MasterMovement
// 0x0060 (0x01E0 - 0x0240)
class UAnimNode_MasterMovement : public UAnimNodeBlendBySpeed
{
public:
	float                                              SequenceStartTime;                             // 0x01E0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DirDegreesPerSecond;                           // 0x01E4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bComputeChildData : 1;                         // 0x01E8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class TArray<struct FAnimMovementChildData>        ChildData;                                     // 0x01F0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       GroupName;                                     // 0x0200 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              AccelerationRate;                              // 0x0208 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecelerationRate;                              // 0x020C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinRateScale;                                  // 0x0210 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CurrentSpeed;                                  // 0x0214 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     DesiredDir;                                    // 0x0218 (0x000C) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	struct FVector                                     CurrentDir;                                    // 0x0224 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentHeading;                                // 0x0230 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PreviousHeading;                               // 0x0234 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentTurnRate;                               // 0x0238 (0x0004) [0x0000000000002001] (CPF_Edit | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimNode_MasterMovement");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AnimNode_Stance
// 0x0080 (0x01A0 - 0x0220)
class UAnimNode_Stance : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                     // 0x01A0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<float>                                ReferencesSpeeds;                              // 0x01A8 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UStanceDefinition*>             ChildStanceTypes;                              // 0x01B8 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bCatchUnspecifiedStances : 1;                  // 0x01C8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bApplyRateScale : 1;                           // 0x01C8 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bAutoDetectReferenceSpeeds : 1;                // 0x01C8 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bCached : 1;                                   // 0x01C8 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	class TArray<EDefaultStance>                       DefaultStances;                                // 0x01D0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              Scale;                                         // 0x01E0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DiagScale;                                     // 0x01E4 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UStanceComponent*                            StanceComponent;                               // 0x01E8 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UStanceDefinition*                           CurrentStanceType;                             // 0x01F0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<class USkelControlBase*>              CachedSkelControls;                            // 0x01F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UAnimNode_StanceTransition*>    TransitionNodes;                               // 0x0208 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint8_t                                           UnknownData00[0x8];                            // 0x0218 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimNode_Stance");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AnimNode_StanceTransition
// 0x0050 (0x01A0 - 0x01F0)
class UAnimNode_StanceTransition : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                     // 0x01A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bHoldAI : 1;                                   // 0x01A4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bHoldMovement : 1;                             // 0x01A4 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bPauseQueuing : 1;                             // 0x01A4 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	class TArray<struct FStanceTransitionPair>         Transitions;                                   // 0x01A8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UAIComponent*                                StanceAI;                                      // 0x01B8 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UStanceComponent*                            StanceComponent;                               // 0x01C0 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UStanceDefinition*                           LastStance;                                    // 0x01C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<class UAnimNodeSequence*>             SeqNodes;                                      // 0x01D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<int32_t>                              QueuedTransitions;                             // 0x01E0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimNode_StanceTransition");
		}

		return uClassPointer;
	};

	bool IsTransitionPending(int32_t Transition);
	int32_t CheckQueuedTransitions();
};

// Class GearboxFramework.AnimNodeSpecialMoveBlend
// 0x0040 (0x0190 - 0x01D0)
class UAnimNodeSpecialMoveBlend : public UAnimNodeSlot
{
public:
	EAnimState                                         AnimState;                                     // 0x0190 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              SavedBlendOutTime;                             // 0x0194 (0x0004) [0x0000000000002000] (CPF_Transient)
	class USpecialMoveInterface*                       SMI_Object;                                    // 0x0198 (0x0008) [0x0000000000002000] (CPF_Transient)
	class USpecialMoveInterface*                       SMI_Interface;                                 // 0x01A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FSlotAnimParameters>           AnimParameters;                                // 0x01A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              DynamicPlayRateStartTime;                      // 0x01B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              BaseDynamicPlayRate;                           // 0x01BC (0x0004) [0x0000000000002000] (CPF_Transient)
	class UDynamicPlayRateControlDefinition*           DynamicPlayRateDefinition;                     // 0x01C0 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bForceLocalSpaceBlend : 1;                     // 0x01C8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           IssueNotifiesWhenZeroWeight : 1;               // 0x01C8 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimNodeSpecialMoveBlend");
		}

		return uClassPointer;
	};

	void StopDynamicPlayRate();
	void StartDynamicPlayRate(class UDynamicPlayRateControlDefinition* InDynamicPlayRateDef);
	bool GetCurrentSMData(struct FSpecialMoveData& SMData);
	bool IsPlaying(class UGearboxAnimDefinition* AnimSMD);
	void SetRootMotion(class URootMotionDefinition* RMDef);
	class UGearboxAnimDefinition* GetCurrentAnimDef();
	struct FName GetCurrentAnimName();
	void Finish(bool bInterrupted);
	void Stop(class UGearboxAnimDefinition* AnimSMD, bool bInterrupted);
	float PlayData(const struct FName& optionalAnimNameOverride, float optionalPlayRateScale, float optionalBlendInOverride, float optionalBlendOutOverride, bool optionalBDisableNotifies, float optionalStartTimeOverride, struct FSpecialMoveData& SMData);
	float Play(class UGearboxAnimDefinition* CustomAnimSMD, const struct FName& optionalAnimNameOverride, float optionalPlayRateScale, float optionalBlendInOverride, float optionalBlendOutOverride, bool optionalBDisableNotifies, float optionalStartTimeOverride);
};

// Class GearboxFramework.AnimPreviewComponent
// 0x0010 (0x0980 - 0x0990)
class UAnimPreviewComponent : public USkeletalMeshComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0980 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint8_t                                           UnknownData00[0x8];                            // 0x0988 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AnimPreviewComponent");
		}

		return uClassPointer;
	};

	bool ListObjValidateSpecialMove(class UObject* Other);
};

// Class GearboxFramework.NavAnimNodePreviewComponent
// 0x0010 (0x0990 - 0x09A0)
class UNavAnimNodePreviewComponent : public UAnimPreviewComponent
{
public:
	uint32_t                                           bCycleCharacter : 1;                           // 0x0990 (0x0004) [0x0000000000002001] [0x00000001] (CPF_Edit | CPF_Transient)
	uint32_t                                           bCurrentlyPlayingForward : 1;                  // 0x0990 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	ENavAnimNodePreviewDirection                       Direction;                                     // 0x0994 (0x0001) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	class ANavAnimNode*                                Node;                                          // 0x0998 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.NavAnimNodePreviewComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PerchPreviewComponent
// 0x0020 (0x0990 - 0x09B0)
class UPerchPreviewComponent : public UAnimPreviewComponent
{
public:
	class APerch*                                      Perch;                                         // 0x0990 (0x0008) [0x0000000000002000] (CPF_Transient)
	EPerchState                                        EAnim;                                         // 0x0998 (0x0001) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	int32_t                                            IdleIndex;                                     // 0x099C (0x0004) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	uint32_t                                           bCycleAnim : 1;                                // 0x09A0 (0x0004) [0x0000000000002001] [0x00000001] (CPF_Edit | CPF_Transient)
	uint32_t                                           bCycleIdle : 1;                                // 0x09A0 (0x0004) [0x0000000000002001] [0x00000002] (CPF_Edit | CPF_Transient)
	uint32_t                                           bCycleCharacter : 1;                           // 0x09A0 (0x0004) [0x0000000000002001] [0x00000004] (CPF_Edit | CPF_Transient)
	uint8_t                                           UnknownData00[0xC];                            // 0x09A4 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PerchPreviewComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PhysicsJumpNodePreviewComponent
// 0x0030 (0x0990 - 0x09C0)
class UPhysicsJumpNodePreviewComponent : public UAnimPreviewComponent
{
public:
	class APhysicsJumpNode*                            Node;                                          // 0x0990 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              JumpTime;                                      // 0x0998 (0x0004) [0x0000000000022003] (CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst)
	float                                              JumpGravity;                                   // 0x099C (0x0004) [0x0000000000022003] (CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst)
	struct FVector                                     JumpVelocity;                                  // 0x09A0 (0x000C) [0x0000000000022003] (CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst)
	EPhysicsJumpState                                  EAnim;                                         // 0x09AC (0x0001) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	int32_t                                            ConnectionIndex;                               // 0x09B0 (0x0004) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	uint32_t                                           bCycleAnim : 1;                                // 0x09B4 (0x0004) [0x0000000000002001] [0x00000001] (CPF_Edit | CPF_Transient)
	uint32_t                                           bCycleCharacter : 1;                           // 0x09B4 (0x0004) [0x0000000000002001] [0x00000002] (CPF_Edit | CPF_Transient)
	uint32_t                                           bCycleConnection : 1;                          // 0x09B4 (0x0004) [0x0000000000002001] [0x00000004] (CPF_Edit | CPF_Transient)
	uint8_t                                           UnknownData00[0x8];                            // 0x09B8 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PhysicsJumpNodePreviewComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpawnPointPreviewComponent
// 0x0010 (0x0990 - 0x09A0)
class USpawnPointPreviewComponent : public UAnimPreviewComponent
{
public:
	uint32_t                                           bCycleCharacter : 1;                           // 0x0990 (0x0004) [0x0000000000002001] [0x00000001] (CPF_Edit | CPF_Transient)
	uint8_t                                           UnknownData00[0xC];                            // 0x0994 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnPointPreviewComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AreaSpawnerRenderingComponent
// 0x0000 (0x0360 - 0x0360)
class UAreaSpawnerRenderingComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AreaSpawnerRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AttributeExpressionEvaluator
// 0x0020 (0x0058 - 0x0078)
class UAttributeExpressionEvaluator : public UExpressionEvaluator
{
public:
	struct FAttributeExpressionData                    Expression;                                    // 0x0058 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AttributeExpressionEvaluator");
		}

		return uClassPointer;
	};

	bool Evaluate(class UObject* ContextSource);
};

// Class GearboxFramework.AwarenessDefinition
// 0x0028 (0x0058 - 0x0080)
class UAwarenessDefinition : public UGBXDefinition
{
public:
	float                                              HoldTime;                                      // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecayAcceleration;                             // 0x005C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FullyAwareTime;                                // 0x0060 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Level1_ObliviousThreshold;                     // 0x0064 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	float                                              Level2_CautiousThreshold;                      // 0x0068 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Level3_SuspiciousThreshold;                    // 0x006C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Level4_AwareThreshold;                         // 0x0070 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	float                                              SightSenseModifier;                            // 0x0074 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SoundSenseModifier;                            // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AwarenessDefinition");
		}

		return uClassPointer;
	};

	float CanCommunicate(float LastSenseTime);
	float GetDecayRate(float LastSenseTime);
	EAwareness GetAwareness(float Meter, float LastUpdateTime);
	float GetSoundSenseModifier();
	float GetSightSenseModifier();
};

// Class GearboxFramework.Behavior_AICauseTouchEvents
// 0x0008 (0x0070 - 0x0078)
class UBehavior_AICauseTouchEvents : public UBehaviorBase
{
public:
	uint32_t                                           bCauseTouchEvents : 1;                         // 0x0070 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_AICauseTouchEvents");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_AICloak
// 0x0008 (0x0070 - 0x0078)
class UBehavior_AICloak : public UBehaviorBase
{
public:
	ECloakOverride                                     NewCloakBehavior;                              // 0x0070 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bImmediate : 1;                                // 0x0074 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_AICloak");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_AIGetTarget
// 0x0008 (0x0070 - 0x0078)
class UBehavior_AIGetTarget : public UBehaviorBase
{
public:
	int32_t                                            TargetIndex;                                   // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseBackupTarget : 1;                          // 0x0074 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_AIGetTarget");
		}

		return uClassPointer;
	};

	void PublishBehaviorOutput(class AActor* Target, struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_AIHold
// 0x0010 (0x0070 - 0x0080)
class UBehavior_AIHold : public UBehaviorBase
{
public:
	struct FName                                       Reason;                                        // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	EAIHoldAction                                      Action;                                        // 0x0078 (0x0001) [0x0000000000000001] (CPF_Edit)    
	EAIHoldType                                        Type;                                          // 0x0079 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_AIHold");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_AIPriority
// 0x0020 (0x0070 - 0x0090)
class UBehavior_AIPriority : public UBehaviorBase
{
public:
	float                                              PriorityModifier;                              // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FBehaviorContextData                        Target;                                        // 0x0078 (0x0018) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_AIPriority");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_AIScriptedAction
// 0x0060 (0x0070 - 0x00D0)
class UBehavior_AIScriptedAction : public UBehaviorBase
{
public:
	struct FAIScriptedActionParams                     Params;                                        // 0x0070 (0x0040) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class AActor*                                      ActionTarget;                                  // 0x00B0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UObject*>                       ActionParameters;                              // 0x00B8 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UActionSequence*                             RunningAction;                                 // 0x00C8 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_AIScriptedAction");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_AIScriptTarget
// 0x0020 (0x0070 - 0x0090)
class UBehavior_AIScriptTarget : public UBehaviorBase
{
public:
	uint32_t                                           bRemoveScriptedTarget : 1;                     // 0x0070 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FBehaviorContextData                        Target;                                        // 0x0078 (0x0018) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_AIScriptTarget");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_AISetEnabledActions
// 0x0018 (0x0070 - 0x0088)
class UBehavior_AISetEnabledActions : public UBehaviorBase
{
public:
	EAISetActionMode                                   Mode;                                          // 0x0070 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UAIActionTag*>                  ActionTags;                                    // 0x0078 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_AISetEnabledActions");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_ApplyListenerAudioEffect
// 0x0010 (0x0070 - 0x0080)
class UBehavior_ApplyListenerAudioEffect : public UBehaviorBase
{
public:
	class UAkEffect*                                   Effect;                                        // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              DryPercent;                                    // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ApplyListenerAudioEffect");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_CallFunction
// 0x0008 (0x0070 - 0x0078)
class UBehavior_CallFunction : public UBehaviorBase
{
public:
	struct FName                                       FunctionName;                                  // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_CallFunction");
		}

		return uClassPointer;
	};

	void CallFunction(class AActor* inActor, const struct FName& InFunctionName);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_ChangeAnyBehaviorSequenceState
// 0x0010 (0x0070 - 0x0080)
class UBehavior_ChangeAnyBehaviorSequenceState : public UBehaviorBase
{
public:
	EChangeStatus                                      Action;                                        // 0x0070 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       SequenceName;                                  // 0x0074 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ChangeAnyBehaviorSequenceState");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_ChangeDialogPools
// 0x0010 (0x0070 - 0x0080)
class UBehavior_ChangeDialogPools : public UBehaviorBase
{
public:
	EChangeDialogPoolsAction                           Action;                                        // 0x0070 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UDialogPoolDefinition*                       Pool;                                          // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ChangeDialogPools");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_ChangeFeatureSwitch
// 0x0010 (0x0070 - 0x0080)
class UBehavior_ChangeFeatureSwitch : public UBehaviorBase
{
public:
	struct FName                                       SwitchName;                                    // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            NewValue;                                      // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ChangeFeatureSwitch");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_ChangeLocalBehaviorSequenceState
// 0x0010 (0x0070 - 0x0080)
class UBehavior_ChangeLocalBehaviorSequenceState : public UBehaviorBase
{
public:
	EChangeStatus                                      Action;                                        // 0x0070 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       SequenceName;                                  // 0x0074 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ChangeLocalBehaviorSequenceState");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_ChangeRemoteBehaviorSequenceState
// 0x0050 (0x0070 - 0x00C0)
class UBehavior_ChangeRemoteBehaviorSequenceState : public UBehaviorBase
{
public:
	EChangeStatus                                      Action;                                        // 0x0070 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       SequenceName;                                  // 0x0074 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UObject*                                     SequenceProvider;                              // 0x0080 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FNameBasedObjectPath                        ProviderDefinitionPathName;                    // 0x0088 (0x0034) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ChangeRemoteBehaviorSequenceState");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_ChangeTimer
// 0x0030 (0x0070 - 0x00A0)
class UBehavior_ChangeTimer : public UBehaviorBase
{
public:
	EBehaviorTimerID                                   TimerId;                                       // 0x0070 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EBehaviorTimerReaction                             Reaction;                                      // 0x0071 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bSetNewTimerDelay : 1;                         // 0x0074 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                NewTimerDelayFormula;                          // 0x0078 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              NewTimerDelay;                                 // 0x0098 (0x0004) [0x0000000020000002] (CPF_Const | CPF_Deprecated)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ChangeTimer");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_ClearObjectList
// 0x0000 (0x0070 - 0x0070)
class UBehavior_ClearObjectList : public UBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ClearObjectList");
		}

		return uClassPointer;
	};

	void PublishBehaviorOutput(struct FBehaviorKernelInfo& KernelInfo, class TArray<class UObject*>& List);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_CompareBool
// 0x0008 (0x0070 - 0x0078)
class UBehavior_CompareBool : public UBehaviorBase
{
public:
	uint32_t                                           BoolValue : 1;                                 // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_CompareBool");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_CompareValues
// 0x0058 (0x0070 - 0x00C8)
class UBehavior_CompareValues : public UBehaviorBase
{
public:
	struct FAttributeInitializationData                ValueA;                                        // 0x0070 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FBehaviorContextData                        ContextB;                                      // 0x0090 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                ValueB;                                        // 0x00A8 (0x0020) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_CompareValues");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_CustomEvent
// 0x0008 (0x0070 - 0x0078)
class UBehavior_CustomEvent : public UBehaviorBase
{
public:
	struct FName                                       CustomEventName;                               // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_CustomEvent");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_Delay
// 0x0008 (0x0070 - 0x0078)
class UBehavior_Delay : public UBehaviorBase
{
public:
	float                                              Delay;                                         // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_Delay");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_Gate
// 0x0008 (0x0070 - 0x0078)
class UBehavior_Gate : public UBehaviorBase
{
public:
	int32_t                                            GateCount;                                     // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ActivationCount;                               // 0x0074 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_Gate");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_GetFloatParam
// 0x0000 (0x0080 - 0x0080)
class UBehavior_GetFloatParam : public UParameterBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_GetFloatParam");
		}

		return uClassPointer;
	};

	void PublishBehaviorOutput(float Value, struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_GetObjectParam
// 0x0000 (0x0080 - 0x0080)
class UBehavior_GetObjectParam : public UParameterBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_GetObjectParam");
		}

		return uClassPointer;
	};

	void PublishBehaviorOutput(class UObject* Value, struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_GetVectorParam
// 0x0008 (0x0080 - 0x0088)
class UBehavior_GetVectorParam : public UParameterBehaviorBase
{
public:
	uint32_t                                           bTreatAsVector : 1;                            // 0x0080 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_GetVectorParam");
		}

		return uClassPointer;
	};

	void PublishBehaviorOutput(float R, float G, float B, float A, struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_GFxUIAction
// 0x0010 (0x0070 - 0x0080)
class UBehavior_GFxUIAction : public UBehaviorBase
{
public:
	class UGFxUIAction_Base*                           Action;                                        // 0x0070 (0x0008) [0x000000000642000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_NeedCtorLink | CPF_NoClear | CPF_EditInline)
	uint32_t                                           bRunImmediately : 1;                           // 0x0078 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_GFxUIAction");
		}

		return uClassPointer;
	};

	void AssembleOptionalParameters(class TArray<struct FGFxUIActionParam>& OptParams);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_ApplyLayoutToAllGFxMovieClips
// 0x0000 (0x0080 - 0x0080)
class UBehavior_ApplyLayoutToAllGFxMovieClips : public UBehavior_GFxUIAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ApplyLayoutToAllGFxMovieClips");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_ApplyLayoutToGFxMovieClip
// 0x0000 (0x0080 - 0x0080)
class UBehavior_ApplyLayoutToGFxMovieClip : public UBehavior_GFxUIAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ApplyLayoutToGFxMovieClip");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_AttachGFxMovieClip
// 0x0008 (0x0080 - 0x0088)
class UBehavior_AttachGFxMovieClip : public UBehavior_GFxUIAction
{
public:
	uint32_t                                           bShouldQueueAction : 1;                        // 0x0080 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_AttachGFxMovieClip");
		}

		return uClassPointer;
	};

	void eventPublishBehaviorOutput(class UObject* Result, struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_GFxSetString
// 0x0000 (0x0080 - 0x0080)
class UBehavior_GFxSetString : public UBehavior_GFxUIAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_GFxSetString");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_RemoveAllGFxMovieClips
// 0x0000 (0x0080 - 0x0080)
class UBehavior_RemoveAllGFxMovieClips : public UBehavior_GFxUIAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_RemoveAllGFxMovieClips");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_RemoveGFxMovieClip
// 0x0000 (0x0080 - 0x0080)
class UBehavior_RemoveGFxMovieClip : public UBehavior_GFxUIAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_RemoveGFxMovieClip");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_ToggleVisibilityForGFxTag
// 0x0000 (0x0080 - 0x0080)
class UBehavior_ToggleVisibilityForGFxTag : public UBehavior_GFxUIAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ToggleVisibilityForGFxTag");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_InterpActor
// 0x0018 (0x0070 - 0x0088)
class UBehavior_InterpActor : public UBehaviorBase
{
public:
	struct FVector                                     Destination;                                   // 0x0070 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              InterpTime;                                    // 0x007C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bUpdateVelocity : 1;                           // 0x0080 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_InterpActor");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_InterpolateFloatOverTime
// 0x0010 (0x0070 - 0x0080)
class UBehavior_InterpolateFloatOverTime : public UBehaviorBase
{
public:
	float                                              Duration;                                      // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              UpdateInterval;                                // 0x0074 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              EndingValue;                                   // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              BeginningValue;                                // 0x007C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_InterpolateFloatOverTime");
		}

		return uClassPointer;
	};

	void PublishBehaviorOutput(float Result, struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_IsSequenceEnabled
// 0x0048 (0x0070 - 0x00B8)
class UBehavior_IsSequenceEnabled : public UBehaviorBase
{
public:
	struct FName                                       SequenceName;                                  // 0x0070 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UObject*                                     SequenceProvider;                              // 0x0078 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FNameBasedObjectPath                        ProviderDefinitionPathName;                    // 0x0080 (0x0034) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_IsSequenceEnabled");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_LeaderCommand
// 0x0008 (0x0070 - 0x0078)
class UBehavior_LeaderCommand : public UBehaviorBase
{
public:
	uint32_t                                           bOverride : 1;                                 // 0x0070 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	ELeaderType                                        Type;                                          // 0x0074 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ELeaderAction                                      Action;                                        // 0x0075 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_LeaderCommand");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_Metronome
// 0x0018 (0x0070 - 0x0088)
class UBehavior_Metronome : public UBehaviorBase
{
public:
	uint32_t                                           bUseTickCount : 1;                             // 0x0070 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bUseDuration : 1;                              // 0x0070 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	int32_t                                            MaxTickCount;                                  // 0x0074 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            CurrentTickCount;                              // 0x0078 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Duration;                                      // 0x007C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              TickInterval;                                  // 0x0080 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_Metronome");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_ModifyTimer
// 0x0028 (0x0070 - 0x0098)
class UBehavior_ModifyTimer : public UBehaviorBase
{
public:
	EBehaviorTimerID                                   TimerId;                                       // 0x0070 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EBehaviorTimerFunction                             Operation;                                     // 0x0071 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                NewTimerDelay;                                 // 0x0078 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ModifyTimer");
		}

		return uClassPointer;
	};

	void PublishBehaviorOutput(float TimeRemaining, struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_MultiTargetSearch
// 0x0038 (0x0070 - 0x00A8)
class UBehavior_MultiTargetSearch : public UBehaviorBase
{
public:
	class UGBXTargetSearchDefinition*                  SearchDef;                                     // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class AActor*>                        ExcludedActors;                                // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            OwnedBehaviorEventIndex;                       // 0x0088 (0x0004) [0x0000000000000000]               
	struct FVector                                     SourceLocationOverride;                        // 0x008C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     SourceRotationOverride;                        // 0x0098 (0x000C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_MultiTargetSearch");
		}

		return uClassPointer;
	};

	void eventPublishBehaviorOutput(int32_t TargetCount, class AActor* Target, const struct FVector& TargetLocation, struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_PlayFoleySound
// 0x0028 (0x0070 - 0x0098)
class UBehavior_PlayFoleySound : public UBehaviorBase
{
public:
	class UAkEvent*                                    ConfigureEvent;                                // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Pitch;                                         // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Volume;                                        // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FFoleyParameterDetails                      DetailedSettings;                              // 0x0080 (0x0018) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_PlayFoleySound");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_PostAkEvent
// 0x0020 (0x0070 - 0x0090)
class UBehavior_PostAkEvent : public UBehaviorBase
{
public:
	class UAkEvent*                                    Event;                                         // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bReplicateEvent : 1;                           // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bContinueToPlayAfterOwnerIsDestroyed : 1;      // 0x0078 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bForLocalPlayerOnly : 1;                       // 0x0078 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bForcePlayImmediate : 1;                       // 0x0078 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bPlayFromActor : 1;                            // 0x0078 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bLatentWhenNoConnections : 1;                  // 0x0078 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bStarted : 1;                                  // 0x0078 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	struct FAkPlayingInfo                              PlayingInfo;                                   // 0x0080 (0x0010) [0x0000000000082000] (CPF_Transient | CPF_Component)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_PostAkEvent");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_PostAkEvent_Player
// 0x0008 (0x0090 - 0x0098)
class UBehavior_PostAkEvent_Player : public UBehavior_PostAkEvent
{
public:
	uint32_t                                           bPostOnPawn : 1;                               // 0x0090 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_PostAkEvent_Player");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_PostAkEvent_World
// 0x0010 (0x0090 - 0x00A0)
class UBehavior_PostAkEvent_World : public UBehavior_PostAkEvent
{
public:
	struct FVector                                     Location;                                      // 0x0090 (0x000C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_PostAkEvent_World");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_RandomGate
// 0x0018 (0x0070 - 0x0088)
class UBehavior_RandomGate : public UBehaviorBase
{
public:
	class TArray<float>                                Weights;                                       // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Closed;                                        // 0x0080 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           Reset : 1;                                     // 0x0084 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           ResetWhenComplete : 1;                         // 0x0084 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           ConsiderClosedOutputs : 1;                     // 0x0084 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_RandomGate");
		}

		return uClassPointer;
	};

	void eventApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_RemoveListenerAudioEffect
// 0x0008 (0x0070 - 0x0078)
class UBehavior_RemoveListenerAudioEffect : public UBehaviorBase
{
public:
	class UAkEffect*                                   Effect;                                        // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_RemoveListenerAudioEffect");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_SetBeamPoint
// 0x0038 (0x0070 - 0x00A8)
class UBehavior_SetBeamPoint : public UBehaviorBase
{
public:
	struct FName                                       Emitter;                                       // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	EBeamModifierType                                  BeamPoint;                                     // 0x0078 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FAttachmentLocationData                     Location;                                      // 0x0080 (0x0028) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SetBeamPoint");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_SetDamageReceiverMode
// 0x0018 (0x0070 - 0x0088)
class UBehavior_SetDamageReceiverMode : public UBehaviorBase
{
public:
	struct FName                                       ModeName;                                      // 0x0070 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EDRNodeType                                        NodeType;                                      // 0x0078 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UBaseHitRegionDefinition*                    HitRegion;                                     // 0x0080 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SetDamageReceiverMode");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_SetFlag
// 0x0010 (0x0070 - 0x0080)
class UBehavior_SetFlag : public UBehaviorBase
{
public:
	class TArray<struct FFlagDefinitionInitialization> FlagsToSet;                                    // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SetFlag");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_SetFloatParam
// 0x0008 (0x0080 - 0x0088)
class UBehavior_SetFloatParam : public UParameterBehaviorBase
{
public:
	float                                              Value;                                         // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SetFloatParam");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_SetFoleyParams
// 0x0018 (0x0070 - 0x0088)
class UBehavior_SetFoleyParams : public UBehaviorBase
{
public:
	struct FFoleyParameterDetails                      ModifiedSettings;                              // 0x0070 (0x0018) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SetFoleyParams");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_SetObjectList
// 0x0010 (0x0070 - 0x0080)
class UBehavior_SetObjectList : public UBehaviorBase
{
public:
	class TArray<class UObject*>                       Values;                                        // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SetObjectList");
		}

		return uClassPointer;
	};

	void PublishBehaviorOutput(struct FBehaviorKernelInfo& KernelInfo, class TArray<class UObject*>& List);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_SetObjectParam
// 0x0008 (0x0080 - 0x0088)
class UBehavior_SetObjectParam : public UParameterBehaviorBase
{
public:
	class UObject*                                     Value;                                         // 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SetObjectParam");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_SetStance
// 0x0018 (0x0070 - 0x0088)
class UBehavior_SetStance : public UBehaviorBase
{
public:
	EStanceSetType                                     SetType;                                       // 0x0070 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UStanceDefinition*                           StanceType;                                    // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOnlyClearIfUsingSpecifiedStance : 1;          // 0x0080 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SetStance");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_SetVectorParam
// 0x0018 (0x0080 - 0x0098)
class UBehavior_SetVectorParam : public UParameterBehaviorBase
{
public:
	float                                              RValue;                                        // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              GValue;                                        // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              bValue;                                        // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AValue;                                        // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bKeepR : 1;                                    // 0x0090 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bKeepG : 1;                                    // 0x0090 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bKeepB : 1;                                    // 0x0090 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bKeepA : 1;                                    // 0x0090 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bTreatAsVector : 1;                            // 0x0090 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SetVectorParam");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_ShowVisualSyncCue
// 0x0000 (0x0070 - 0x0070)
class UBehavior_ShowVisualSyncCue : public UBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ShowVisualSyncCue");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_SpawnDecalActor
// 0x0080 (0x0070 - 0x00F0)
class UBehavior_SpawnDecalActor : public UBehaviorBase
{
public:
	class UMaterialInterface*                          Material;                                      // 0x0070 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SizeX;                                         // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SizeY;                                         // 0x007C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              OffsetX;                                       // 0x0080 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              OffsetY;                                       // 0x0084 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PivotOffsetPctX;                               // 0x0088 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PivotOffsetPctY;                               // 0x008C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              NearPlane;                                     // 0x0090 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FarPlane;                                      // 0x0094 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Lifetime;                                      // 0x0098 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FadeTime;                                      // 0x009C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       FadeMaterialParamName;                         // 0x00A0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bAttachToSource : 1;                           // 0x00A8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bReplicate : 1;                                // 0x00A8 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bAbsoluteOrientation : 1;                      // 0x00A8 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bAffectStaticGeometry : 1;                     // 0x00A8 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bAffectDynamicGeometry : 1;                    // 0x00A8 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	struct FName                                       AttachmentName;                                // 0x00AC (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttachmentLocationData                     Location;                                      // 0x00B8 (0x0028) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     Direction;                                     // 0x00E0 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Rotation;                                      // 0x00EC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SpawnDecalActor");
		}

		return uClassPointer;
	};

	void PublishBehaviorOutput(class ADecalActorBase* Decal, struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_Speak
// 0x0080 (0x0070 - 0x00F0)
class UBehavior_Speak : public UBehaviorBase
{
public:
	uint32_t                                           bEnable_SpecifyTargetName : 1;                 // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTriggeredStarted : 1;                         // 0x0070 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UGearboxDialogNameTag*                       TargetNameTag;                                 // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    AkEvent;                                       // 0x0080 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDialogEmoteDefinition*                      Emote;                                         // 0x0088 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDialogEmoteSequence*                        EmoteSequence;                                 // 0x0090 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UDialogParametersDefinition*                 Parameters;                                    // 0x0098 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FDialogParameters                           ParametersOverrides;                           // 0x00A0 (0x0038) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StartDelay;                                    // 0x00D8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDialogResponse_ScriptedSpeak*               Response;                                      // 0x00E0 (0x0008) [0x0000000006400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_NoClear | CPF_EditInline)
	int32_t                                            SequenceID;                                    // 0x00E8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PlayingDialogID;                               // 0x00EC (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_Speak");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_SpecialMove
// 0x0010 (0x0070 - 0x0080)
class UBehavior_SpecialMove : public UBehaviorBase
{
public:
	class USpecialMoveDefinition*                      SpecialMove;                                   // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStopCurrentMove : 1;                          // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bQueueIfCannotPlay : 1;                        // 0x0078 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLocal : 1;                                    // 0x0078 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              Duration;                                      // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SpecialMove");
		}

		return uClassPointer;
	};

	void PlaySpecialMove(class USpecialMoveComponent* SMC, class USpecialMoveDefinition* SMD);
	void TriggerOutput(struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_SpecialMoveStop
// 0x0008 (0x0070 - 0x0078)
class UBehavior_SpecialMoveStop : public UBehaviorBase
{
public:
	class USpecialMoveDefinition*                      SpecificMove;                                  // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SpecialMoveStop");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_StanceTransition
// 0x0010 (0x0070 - 0x0080)
class UBehavior_StanceTransition : public UBehaviorBase
{
public:
	class UStanceDefinition*                           StanceType;                                    // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Transition;                                    // 0x0078 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_StanceTransition");
		}

		return uClassPointer;
	};

	class UAnimNode_StanceTransition* GetTransitionNode(class UObject* ContextObject);
	void StartTransition(class UObject* ContextObject, class UAnimNode_StanceTransition* TransitionNode);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_StartAkAmbientSound
// 0x0010 (0x0070 - 0x0080)
class UBehavior_StartAkAmbientSound : public UBehaviorBase
{
public:
	class UAkEvent*                                    AkEvent;                                       // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AWwiseSoundGroup*                            SoundGroup;                                    // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_StartAkAmbientSound");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_StopAkAmbientSound
// 0x0010 (0x0070 - 0x0080)
class UBehavior_StopAkAmbientSound : public UBehaviorBase
{
public:
	class UAkEvent*                                    AkEvent;                                       // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AWwiseSoundGroup*                            SoundGroup;                                    // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_StopAkAmbientSound");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_StopSound
// 0x0010 (0x0070 - 0x0080)
class UBehavior_StopSound : public UBehaviorBase
{
public:
	class UAkEvent*                                    AkEventToStop;                                 // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeDuration;                                  // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bReplicate : 1;                                // 0x007C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_StopSound");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_StopSpeaking
// 0x0020 (0x0070 - 0x0090)
class UBehavior_StopSpeaking : public UBehaviorBase
{
public:
	uint32_t                                           bEnable_SpecifyTargetName : 1;                 // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	class UGearboxDialogNameTag*                       TargetNameTag;                                 // 0x0078 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            OptionalSequenceID;                            // 0x0080 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDialogEvent*                                OptionalEvent;                                 // 0x0088 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_StopSpeaking");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_TargetSearch
// 0x0030 (0x0070 - 0x00A0)
class UBehavior_TargetSearch : public UBehaviorBase
{
public:
	class UGBXTargetSearchDefinition*                  SearchDef;                                     // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class AActor*>                        ExcludedActors;                                // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     SourceLocationOverride;                        // 0x0088 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     SourceRotationOverride;                        // 0x0094 (0x000C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_TargetSearch");
		}

		return uClassPointer;
	};

	void eventPublishBehaviorOutput(class AActor* TargetActor, const struct FVector& TargetLocation, struct FBehaviorKernelInfo& KernelInfo);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_TimedGate
// 0x0010 (0x0070 - 0x0080)
class UBehavior_TimedGate : public UBehaviorBase
{
public:
	float                                              LastActivateTime;                              // 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           RestartWhenClosed : 1;                         // 0x0074 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              CloseDuration;                                 // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_TimedGate");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_ToggleDanger
// 0x0008 (0x0070 - 0x0078)
class UBehavior_ToggleDanger : public UBehaviorBase
{
public:
	EToggleDangerOption                                Option;                                        // 0x0070 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ToggleDanger");
		}

		return uClassPointer;
	};

	void ApplyToDanger(class UGBXDangerComponent* Danger);
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_TriggerDialog
// 0x0040 (0x0070 - 0x00B0)
class UBehavior_TriggerDialog : public UBehaviorBase
{
public:
	class UDialogEventList*                            List;                                          // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDialogEvent*                                Event;                                         // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     Subject;                                       // 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     Other;                                         // 0x0088 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     Instigator;                                    // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              StartDelay;                                    // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SequenceID;                                    // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PlayingDialogID;                               // 0x00A0 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PlayingSequenceID;                             // 0x00A4 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bTriggeredStarted : 1;                         // 0x00A8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_TriggerDialog");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_TriggerDynamicConversation
// 0x0048 (0x0070 - 0x00B8)
class UBehavior_TriggerDynamicConversation : public UBehaviorBase
{
public:
	class UDialogEventList*                            List;                                          // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDialogEvent*                                Event;                                         // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     Subject;                                       // 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     Other;                                         // 0x0088 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     Instigator;                                    // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              StartDelay;                                    // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bTriggerOnContext : 1;                         // 0x009C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bNearContext : 1;                              // 0x009C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bFriendly : 1;                                 // 0x009C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnemy : 1;                                    // 0x009C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bNotContext : 1;                               // 0x009C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bTriggeredStarted : 1;                         // 0x009C (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	class UGearboxDialogNameTag*                       SpeakerName;                                   // 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SequenceID;                                    // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PlayingDialogID;                               // 0x00AC (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PlayingSequenceID;                             // 0x00B0 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_TriggerDynamicConversation");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_UIBase
// 0x0018 (0x0070 - 0x0088)
class UBehavior_UIBase : public UBehaviorBase
{
public:
	class USwfMovie*                                   MovieTarget;                                   // 0x0070 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FName>                         ObjectTargetChain;                             // 0x0078 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_UIBase");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
	class UGFxObject* GetTargetObject(class UObject* ContextObject);
	class UGFxObject* ResolveTargetObject(class UGFxMoviePlayer* Movie, const class TArray<struct FName>& TargetChain);
	class UGFxMoviePlayer* ResolveTargetMovie(class UObject* ContextObject, class USwfMovie* Movie);
};

// Class GearboxFramework.Behavior_ShowHUDWidget
// 0x0008 (0x0088 - 0x0090)
class UBehavior_ShowHUDWidget : public UBehavior_UIBase
{
public:
	uint32_t                                           bVisible : 1;                                  // 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ShowHUDWidget");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_UnitTest
// 0x0028 (0x0070 - 0x0098)
class UBehavior_UnitTest : public UBehaviorBase
{
public:
	EUnitTestState                                     State;                                         // 0x0070 (0x0001) [0x0000000000000000]               
	EUnitTestResult                                    TestResult;                                    // 0x0071 (0x0001) [0x0000000000000000]               
	class FString                                      TestDisplayText;                               // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      TestDisplayTextOnPass;                         // 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_UnitTest");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_UnitTest_IsDead
// 0x0000 (0x0098 - 0x0098)
class UBehavior_UnitTest_IsDead : public UBehavior_UnitTest
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_UnitTest_IsDead");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_UnitTestEndFail
// 0x0010 (0x0070 - 0x0080)
class UBehavior_UnitTestEndFail : public UBehaviorBase
{
public:
	class FString                                      TestDisplayText;                               // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_UnitTestEndFail");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_UnitTestEndPass
// 0x0010 (0x0070 - 0x0080)
class UBehavior_UnitTestEndPass : public UBehaviorBase
{
public:
	class FString                                      TestDisplayText;                               // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_UnitTestEndPass");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_UnitTestHelper_ChangeMapTransitionURL
// 0x0010 (0x0070 - 0x0080)
class UBehavior_UnitTestHelper_ChangeMapTransitionURL : public UBehaviorBase
{
public:
	class FString                                      URLAppendParameters;                           // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_UnitTestHelper_ChangeMapTransitionURL");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_UnitTestHelper_LookAtTarget
// 0x0028 (0x0070 - 0x0098)
class UBehavior_UnitTestHelper_LookAtTarget : public UBehaviorBase
{
public:
	class AActor*                                      TargetActor;                                   // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FocusBone;                                     // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       FocusSocket;                                   // 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     FocusOffset;                                   // 0x0088 (0x000C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_UnitTestHelper_LookAtTarget");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_UnitTestHelper_RunGameModeGTD
// 0x0000 (0x0070 - 0x0070)
class UBehavior_UnitTestHelper_RunGameModeGTD : public UBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_UnitTestHelper_RunGameModeGTD");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_UnitTestHelper_RunGameTest
// 0x0018 (0x0070 - 0x0088)
class UBehavior_UnitTestHelper_RunGameTest : public UBehaviorBase
{
public:
	struct FPointer                                    VfTable_IIBehaviorConsumer;                    // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UGameTestDefinition*                         GTD;                                           // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCleanup : 1;                                  // 0x0080 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bRunGameTest : 1;                              // 0x0080 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                // 0x0084 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_UnitTestHelper_RunGameTest");
		}

		return uClassPointer;
	};

	struct FBehaviorConsumerHandle GetBehaviorConsumerHandle();
	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.Behavior_UnitTestHelper_WaitForGameTestEvent
// 0x0010 (0x0070 - 0x0080)
class UBehavior_UnitTestHelper_WaitForGameTestEvent : public UBehaviorBase
{
public:
	struct FName                                       GameTestEventName;                             // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              WaitTimeoutSeconds;                            // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_UnitTestHelper_WaitForGameTestEvent");
		}

		return uClassPointer;
	};

	void ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo& KernelInfo);
};

// Class GearboxFramework.BehaviorHelpers
// 0x0020 (0x0058 - 0x0078)
class UBehaviorHelpers : public UObject
{
public:
	struct FScriptDelegate                             __BehaviorSetStrategy__Delegate;               // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __BehaviorStrategy__Delegate;                  // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BehaviorHelpers");
		}

		return uClassPointer;
	};

	static void RunAllBehaviorsForEvent(const struct FName& EventName, const struct FScriptDelegate& SetStrategy, const struct FScriptDelegate& Strategy, class UObject* SelfObject, class UObject* optionalMyInstigatorObject, class UObject* optionalOtherEventParticipantObject, const struct FBehaviorParameters& optionalEventData, uint8_t optionalEnumValue);
	void BehaviorStrategy(const struct FPointer& BehaviorSet, const struct FName& EventName, uint8_t optionalEnumValue, class TArray<class UBehaviorBase*>& BehaviorList);
	void BehaviorSetStrategy(class TArray<struct FPointer>& BehaviorSetList);
	static class UBehaviorProviderDefinition* ResolveBehaviorProviderDefinitionReference(class UBehaviorBase* SourceBehavior, class UObject* ProviderReference, struct FNameBasedObjectPath& PathName);
	static bool IsBehaviorsV2(struct FBehaviorKernelInfo& KernelInfo);
	static bool ShouldContinueExecution(float TimeBetweenSteps, int32_t MaxSteps, struct FBehaviorKernelInfo& KernelInfo, int32_t& NumSteps);
	static struct FName GetNextFireLocationSocket(EFireSocketSelectionMethod FireSocketSelection, const class TArray<struct FName>& FireLocationSocketNames, class TArray<struct FName>& FireLocationSocketsRemaining);
	static bool GetRotationFromAttachmentLocationData(const struct FAttachmentLocationData& AttachmentLocation, struct FRotator& AttachmentLocationRotation);
	static struct FVector GetRelativeDirection(const struct FRelativeDirectionData& DesiredDirection, class UIWorldBody* Source, const struct FVector& DefaultDirection, const struct FName& optionalSpawnSocketName);
};

// Class GearboxFramework.BehaviorKernel
// 0x0108 (0x0058 - 0x0160)
class UBehaviorKernel : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                  // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FChunkedList_Mirror                         ProvidersPendingRemoval;                       // 0x0060 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FChunkedList_Mirror                         ProcessDeathList;                              // 0x0068 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FChunkedList_Mirror                         WaitingThreads;                                // 0x0070 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FStableArray_Mirror                         Processes;                                     // 0x0078 (0x0020) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FChunkedList_Mirror                         TemporaryVariables;                            // 0x0098 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class TArray<struct FProviderRecord>               Providers;                                     // 0x00A0 (0x0010) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	struct FChunkedList_Mirror                         ProvidersIndexFreeList;                        // 0x00B0 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class UWorld*                                      TheWorld;                                      // 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<class UObject*>                       ObjectVariables;                               // 0x00C0 (0x0010) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	struct FChunkedList_Mirror                         ObjectVariablesIndexFreeList;                  // 0x00D0 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FStableArray_Mirror                         DynamicBehaviors;                              // 0x00D8 (0x0020) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            ProvidersListReserveLength;                    // 0x00F8 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ObjectVariablesListReserveLength;              // 0x00FC (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DynamicBehaviorsListReserveLength;             // 0x0100 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            WatchedPID;                                    // 0x0104 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FChunkedList_Mirror                         RecentlyRunBehaviors;                          // 0x0108 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            CurrentDebugPage;                              // 0x0110 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<class FString>                        DebugPages;                                    // 0x0118 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UObject*>                       BehaviorDelayPool;                             // 0x0128 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            PeakProcessListUsageStat;                      // 0x0138 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PeakObjectListUsageStat;                       // 0x013C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PeakDynamicBehaviorListUsageStat;              // 0x0140 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PeakProviderListUsageStat;                     // 0x0144 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumProcessesCreatedStat;                       // 0x0148 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumEventsActivatedStat;                        // 0x014C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumEventsIgnoredStat;                          // 0x0150 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumBehaviorsRunStat;                           // 0x0154 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumThreadsCreatedStat;                         // 0x0158 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            RecursiveDepth;                                // 0x015C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BehaviorKernel");
		}

		return uClassPointer;
	};

	void PrevDebugPage();
	void NextDebugPage();
	void DisplayDebug(class AHUD* HUD);
	static bool IsBehaviorSequenceEnabled(class UBehaviorProviderDefinition* ProviderDefinition, const struct FName& BehaviorSequenceName, struct FBehaviorConsumerHandle& ConsumerHandle);
	static void ActivateBehaviorOutputLink(int32_t OutputLinkId, struct FBehaviorKernelInfo& KernelInfo);
	static void PublishBoolOutputVariable(bool Output, struct FBehaviorKernelInfo& KernelInfo);
	static void PublishObjectOutputVariable(class UObject* Output, struct FBehaviorKernelInfo& KernelInfo);
	static void PublishVectorOutputVariable(struct FBehaviorKernelInfo& KernelInfo, struct FVector& Output);
	static void PublishFloatOutputVariable(float Output, struct FBehaviorKernelInfo& KernelInfo);
	static void PublishIntOutputVariable(int32_t Output, struct FBehaviorKernelInfo& KernelInfo);
	static void BeginNondeterministicProviderRegistration(struct FBehaviorConsumerHandle& ConsumerHandle);
	static void ProcessReplicatedBehaviorEvent(struct FBehaviorConsumerHandle& ConsumerHandle, struct FReplicatedBehaviorEvent& EventData);
	static bool ProcessReplicatedBehaviorConsumerState(struct FBehaviorConsumerHandle& ConsumerHandle, struct FReplicatedBehaviorConsumerState& ReplicatedConsumerState);
	static void ChangeBehaviorSequenceActivationStatus(class UBehaviorProviderDefinition* ProviderDefinition, const struct FName& SequenceName, EChangeStatus ActivationStatusChanage, struct FBehaviorConsumerHandle& ConsumerHandle);
	static void ChangeBehaviorConsumerSuspensionStatus(EChangeStatus SuspensionStatusChanage, struct FBehaviorConsumerHandle& ConsumerHandle);
	static void BroadcastBehaviorEventFromScript(const struct FName& EventName, int32_t optionalEventOutputToActivate, struct FBehaviorConsumerHandle& ConsumerHandle, class TArray<class UBehaviorProviderDefinition*>& ProvidersToBroadcast, class TArray<struct FBehaviorVariableValue>& Parameters);
	static void ActivateBehaviorEventFromScript(class UBehaviorProviderDefinition* ProviderDefinition, const struct FName& EventName, int32_t optionalEventOutputToActivate, struct FBehaviorConsumerHandle& ConsumerHandle, class TArray<struct FBehaviorVariableValue>& Parameters);
	static void RemoveBehaviorProviderFromConsumer(class UBehaviorProviderDefinition* ProviderDefinition, struct FBehaviorConsumerHandle& ConsumerHandle);
	static void InitializeBehaviorProviderForConsumer(class UBehaviorProviderDefinition* ProviderDefinition, struct FBehaviorConsumerHandle& ConsumerHandle);
	static void ForceUnregisterBehaviorConsumer(struct FBehaviorConsumerHandle& ConsumerHandle);
	static struct FBehaviorConsumerHandle RegisterBehaviorConsumer(class UObject* BehaviorConsumer);
};

// Class GearboxFramework.BehaviorProviderDefinition
// 0x0088 (0x0058 - 0x00E0)
class UBehaviorProviderDefinition : public UGBXDefinition
{
public:
	int32_t                                            CurrentVersion;                                // 0x0058 (0x0004) [0x0000000000000000]               
	class TArray<struct FBehaviorSequenceData>         BehaviorSequences;                             // 0x0060 (0x0010) [0x0000000020400002] (CPF_Const | CPF_NeedCtorLink | CPF_Deprecated)
	struct FPointer                                    FlattenedDataBegin;                            // 0x0070 (0x0008) [0x0000000000201000] (CPF_Native)  
	struct FPointer                                    SequenceData;                                  // 0x0078 (0x0008) [0x0000000000201000] (CPF_Native)  
	struct FPointer                                    Events;                                        // 0x0080 (0x0008) [0x0000000000201000] (CPF_Native)  
	struct FPointer                                    OutputLinks;                                   // 0x0088 (0x0008) [0x0000000000201000] (CPF_Native)  
	struct FPointer                                    Behaviors;                                     // 0x0090 (0x0008) [0x0000000000201000] (CPF_Native)  
	struct FPointer                                    VarConnectors;                                 // 0x0098 (0x0008) [0x0000000000201000] (CPF_Native)  
	struct FPointer                                    References;                                    // 0x00A0 (0x0008) [0x0000000000201000] (CPF_Native)  
	struct FArray_Mirror                               Constants;                                     // 0x00A8 (0x0010) [0x0000000000201000] (CPF_Native)  
	struct FArray_Mirror                               Variables;                                     // 0x00B8 (0x0010) [0x0000000000201000] (CPF_Native)  
	struct FPointer                                    Accessors;                                     // 0x00C8 (0x0008) [0x0000000000201000] (CPF_Native)  
	uint8_t                                            NumSequences;                                  // 0x00D0 (0x0001) [0x0000000000202000] (CPF_Transient)
	int32_t                                            NumAccessors;                                  // 0x00D4 (0x0004) [0x0000000000202000] (CPF_Transient)
	int32_t                                            NumBehaviors;                                  // 0x00D8 (0x0004) [0x0000000000202000] (CPF_Transient)
	int32_t                                            NumEvents;                                     // 0x00DC (0x0004) [0x0000000000202000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BehaviorProviderDefinition");
		}

		return uClassPointer;
	};

	static void SetObjectBehaviorVariable(class UObject* Value, struct FBehaviorVariableValue& BehaviorVariable);
	static void SetVectorBehaviorVariable(struct FBehaviorVariableValue& BehaviorVariable, struct FVector& Value);
	static void SetFloatBehaviorVariable(float Value, struct FBehaviorVariableValue& BehaviorVariable);
	static void SetIntBehaviorVariable(int32_t Value, struct FBehaviorVariableValue& BehaviorVariable);
	static void SetBoolBehaviorVariable(bool Value, struct FBehaviorVariableValue& BehaviorVariable);
};

// Class GearboxFramework.AIBehaviorProviderDefinition
// 0x0000 (0x00E0 - 0x00E0)
class UAIBehaviorProviderDefinition : public UBehaviorProviderDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIBehaviorProviderDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.BodyProviderDefinition
// 0x0030 (0x00E0 - 0x0110)
class UBodyProviderDefinition : public UBehaviorProviderDefinition
{
public:
	struct FBodyCompositionData2                       BodyData;                                      // 0x00E0 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BodyProviderDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.BodySlotDefinition
// 0x0010 (0x0110 - 0x0120)
class UBodySlotDefinition : public UBodyProviderDefinition
{
public:
	struct FPointer                                    VfTable_IIBodyProvider;                        // 0x0110 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FName                                       SlotName;                                      // 0x0118 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BodySlotDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DRBehaviorProviderDefinition
// 0x0000 (0x00E0 - 0x00E0)
class UDRBehaviorProviderDefinition : public UBehaviorProviderDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DRBehaviorProviderDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.BehaviorSequenceCustomEnableCondition
// 0x0010 (0x0058 - 0x0068)
class UBehaviorSequenceCustomEnableCondition : public UObject
{
public:
	struct FChunkedList_Mirror                         LinkedBehaviorSequences;                       // 0x0058 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint8_t                                            BehaviorKernelInstanceTagForTransientState;    // 0x0060 (0x0001) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BehaviorSequenceCustomEnableCondition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.BehaviorSequenceEnableByMultipleConditions
// 0x0018 (0x0068 - 0x0080)
class UBehaviorSequenceEnableByMultipleConditions : public UBehaviorSequenceCustomEnableCondition
{
public:
	class TArray<class UBehaviorSequenceCustomEnableCondition*> EnableConditions;                              // 0x0068 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	EMultiConditionOperator                            Operator;                                      // 0x0078 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BehaviorSequenceEnableByMultipleConditions");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.BehaviorTrigger
// 0x0028 (0x0250 - 0x0278)
class ABehaviorTrigger : public ATrigger
{
public:
	struct FName                                       SpecializedEventName;                          // 0x0250 (0x0008) [0x0000000000000000]               
	class UBehaviorProviderDefinition*                 ProviderToUse;                                 // 0x0258 (0x0008) [0x0000000000000000]               
	class TArray<struct FBehaviorTriggerJournalEntry>  Journal;                                       // 0x0260 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bOnlyTouchTargetables : 1;                     // 0x0270 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bApplyOwnerCustomCollisionFilter : 1;          // 0x0270 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BehaviorTrigger");
		}

		return uClassPointer;
	};

	void eventUnTouch(class AActor* Other);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};

// Class GearboxFramework.BestTargetAttributeContextResolver
// 0x0018 (0x0058 - 0x0070)
class UBestTargetAttributeContextResolver : public UAttributeContextResolver
{
public:
	uint32_t                                           bGetTargetInfo : 1;                            // 0x0058 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UTI_Calc*                                    RequiredKnowledge;                             // 0x0060 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	int32_t                                            TargetIndex;                                   // 0x0068 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BestTargetAttributeContextResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.BodyAIMoveNodeDefinition
// 0x0040 (0x0058 - 0x0098)
class UBodyAIMoveNodeDefinition : public UGBXDefinition
{
public:
	struct FPointer                                    VfTable_IIBodyProvider;                        // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIBehaviorProvider;                    // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UBehaviorProviderDefinition*                 BehaviorProviderDefinition;                    // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UBodyProviderDefinition*                     BodyProviderDefinition;                        // 0x0070 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bDynamicLightEnvironment : 1;                  // 0x0078 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bCastShadows : 1;                              // 0x0078 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bDynamic : 1;                                  // 0x0078 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bShadowFromEnvironment : 1;                    // 0x0078 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bAffectedBySmallDynamicLights : 1;             // 0x0078 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	float                                              LightingBoundsScale;                           // 0x007C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            NumVolumeVisibilitySamples;                    // 0x0080 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FLinearColor                                AmbientGlow;                                   // 0x0084 (0x0010) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BodyAIMoveNodeDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PerchBodyDefinition
// 0x0008 (0x0098 - 0x00A0)
class UPerchBodyDefinition : public UBodyAIMoveNodeDefinition
{
public:
	class UObject*                                     PieceProjectileDefinition;                     // 0x0098 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PerchBodyDefinition");
		}

		return uClassPointer;
	};

	void OnFinished(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnEndAnim(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnIdleAnim(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnStartAnim(struct FBehaviorConsumerHandle& ConsumerHandle);
};

// Class GearboxFramework.SpawnPointBodyDefinition
// 0x0000 (0x0098 - 0x0098)
class USpawnPointBodyDefinition : public UBodyAIMoveNodeDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnPointBodyDefinition");
		}

		return uClassPointer;
	};

	void OnSpawned(class UObject* SpawnedActor, struct FBehaviorConsumerHandle& ConsumerHandle);
};

// Class GearboxFramework.BodyKernel
// 0x0010 (0x0058 - 0x0068)
class UBodyKernel : public UObject
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                  // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FChunkedList_Mirror                         AnimThreads;                                   // 0x0060 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BodyKernel");
		}

		return uClassPointer;
	};

	static void UpdateBodyComposition(class UIBodyCompositionInstance* Owner);
};

// Class GearboxFramework.CloakComponent
// 0x0048 (0x0090 - 0x00D8)
class UCloakComponent : public UActorComponent
{
public:
	uint32_t                                           bCloaked : 1;                                  // 0x0090 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bPlayingAnim : 1;                              // 0x0090 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FName                                       CloakState;                                    // 0x0094 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FName                                       PendingCloakState;                             // 0x009C (0x0008) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      CloakActor;                                    // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UICloak*                                     CloakInterface_Object;                         // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UICloak*                                     CloakInterface_Interface;                      // 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UCloakDefinition*                            CloakDefinition;                               // 0x00C0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class USpecialMoveComponent*                       SMComponent;                                   // 0x00C8 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	ECloakOverride                                     Override;                                      // 0x00D0 (0x0001) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.CloakComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.CompoundExpressionEvaluator
// 0x0018 (0x0058 - 0x0070)
class UCompoundExpressionEvaluator : public UExpressionEvaluator
{
public:
	class UExpressionEvaluator*                        Expression1;                                   // 0x0058 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	ECExpressionOperatorType                           Operator;                                      // 0x0060 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UExpressionEvaluator*                        Expression2;                                   // 0x0068 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.CompoundExpressionEvaluator");
		}

		return uClassPointer;
	};

	bool Evaluate(class UObject* ContextSource);
};

// Class GearboxFramework.ConditionalAttributeValueResolver
// 0x0038 (0x0058 - 0x0090)
class UConditionalAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FConditionalInitializationExpressions       ValueExpressions;                              // 0x0058 (0x0038) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ConditionalAttributeValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ConstantAttributeValueResolver
// 0x0008 (0x0058 - 0x0060)
class UConstantAttributeValueResolver : public UAttributeValueResolver
{
public:
	float                                              ConstantValue;                                 // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ConstantAttributeValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ConstraintAttributeValueResolver
// 0x0050 (0x0058 - 0x00A8)
class UConstraintAttributeValueResolver : public UAttributeValueResolver
{
public:
	struct FRange                                      Constraints;                                   // 0x0058 (0x0050) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ConstraintAttributeValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.CoverStanceDefinition
// 0x0058 (0x0058 - 0x00B0)
class UCoverStanceDefinition : public UGBXDefinition
{
public:
	class UCoverTag*                                   Tag;                                           // 0x0058 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAnimSet*                                    AnimSet;                                       // 0x0060 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       AimProfile;                                    // 0x0068 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpecialMove_Cover*                          Enter;                                         // 0x0070 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class USpecialMove_Cover*                          Exit;                                          // 0x0078 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class USpecialMove_Cover*                          Idle;                                          // 0x0080 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class USpecialMove_Cover*                          FireEnter;                                     // 0x0088 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class USpecialMove_Cover*                          FireExit;                                      // 0x0090 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class USpecialMove_Cover*                          FireIdle;                                      // 0x0098 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class USpecialMove_Cover*                          FireIdleExit;                                  // 0x00A0 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	uint32_t                                           bCanExitFromFireIdle : 1;                      // 0x00A8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.CoverStanceDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.CoverUseComponent
// 0x0068 (0x0090 - 0x00F8)
class UCoverUseComponent : public UActorComponent
{
public:
	class UCoverDefinition*                            CoverDef;                                      // 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class AGearboxPawn*                                Pawn;                                          // 0x0098 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAIComponent*                                AIComp;                                        // 0x00A0 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	uint32_t                                           bInTransition : 1;                             // 0x00A8 (0x0004) [0x0000000000002002] [0x00000001] (CPF_Const | CPF_Transient)
	uint32_t                                           bCanUseCover : 1;                              // 0x00A8 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	struct FName                                       CurrentState;                                  // 0x00AC (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FName                                       DesiredState;                                  // 0x00B4 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UCoverSlotComponent*                         CurrentCover;                                  // 0x00C0 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UCoverSlotComponent*                         DesiredCover;                                  // 0x00C8 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UCoverStanceDefinition*                      Stance;                                        // 0x00D0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class USpecialMoveComponent*                       SMComponent;                                   // 0x00D8 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class USpecialMoveDefinition*                      LastAction;                                    // 0x00E0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FVector                                     MantleLerpDelta;                               // 0x00E8 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.CoverUseComponent");
		}

		return uClassPointer;
	};

	bool HasMantlePath();
	void StopMantle();
	void StartMantle(struct FVector& MoveStart, struct FVector& MoveDest);
	void FireTimer();
	void IdleTimer();
	bool CanFire();
	void TransitionFinished();
	void PlayTransition(class USpecialMoveDefinition* Transition);
	void CheckCoverState();
	void FinishCoverState();
	void BeginCoverState();
	void NetUpdate(struct FCoverUseState& InState);
	void GotoCoverState(const struct FName& NewState);
	void SetDesiredCover(class UCoverSlotComponent* InDesiredCover);
	void SetCanUseCover(bool bInCanUse);
	bool CanUseCover();
	struct FRotator GetCoverRotation(class UCoverSlotComponent* Slot);
	struct FVector GetCoverLocation(class UCoverSlotComponent* Slot);
	struct FRotator GetDesiredCoverRotation();
	struct FRotator GetCurrentCoverRotation();
	struct FVector GetDesiredCoverLocation();
	struct FVector GetCurrentCoverLocation();
	class UCoverSlotComponent* GetDesiredCover();
	class UCoverSlotComponent* GetCurrentCover();
	bool HasValidCover();
	bool CanMantle();
	bool IsInCover();
	void ClearCover(bool optionalBClearAnim);
};

// Class GearboxFramework.DamageFilter
// 0x0020 (0x0058 - 0x0078)
class UDamageFilter : public UObject
{
public:
	class UClass*                                      DamageSource;                                  // 0x0058 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDamageTypeDefinition*                       DamageTypeDefinition;                          // 0x0060 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        ConditionSelf;                                 // 0x0068 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UExpressionEvaluator*                        ConditionAttacker;                             // 0x0070 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DamageFilter");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DamageModifier
// 0x0028 (0x0058 - 0x0080)
class UDamageModifier : public UObject
{
public:
	class UDamageFilter*                               Filter;                                        // 0x0058 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	struct FAttributeInitializationData                DamageScale;                                   // 0x0060 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DamageModifier");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DamageReceiverComponent
// 0x0058 (0x0090 - 0x00E8)
class UDamageReceiverComponent : public UActorComponent
{
public:
	class AActor*                                      DRActor;                                       // 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UDamageReceiverDefinition*                   Def;                                           // 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UIBehaviorConsumer*                          BehaviorConsumer_Object;                       // 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)
	class UIBehaviorConsumer*                          BehaviorConsumer_Interface;                    // 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UIInstanceData*                              InstanceDataInterface_Object;                  // 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)
	class UIInstanceData*                              InstanceDataInterface_Interface;               // 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FDamageNodeState>              Nodes;                                         // 0x00C0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FDamageInstanceDataState>      InstanceData;                                  // 0x00D0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bWithinDamageEvent : 1;                        // 0x00E0 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	float                                              TotalBaseInDamage;                             // 0x00E4 (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DamageReceiverComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DefinitionUITestCaseDefinition
// 0x0060 (0x0058 - 0x00B8)
class UDefinitionUITestCaseDefinition : public UGBXDefinition
{
public:
	float                                              ConstantFloat;                                 // 0x0058 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class TArray<float>                                ConstantFloatArray;                            // 0x0060 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	float                                              Float;                                         // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<float>                                FloatArray;                                    // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UGBXDefinition*                              EditConstReferencedDefinition;                 // 0x0088 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class TArray<class UGBXDefinition*>                EditConstArrayOfReferences;                    // 0x0090 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class UGBXDefinition*                              ReferencedDefinition;                          // 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UGBXDefinition*>                ArrayOfReferences;                             // 0x00A8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DefinitionUITestCaseDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DenSpawnerRenderingComponent
// 0x0000 (0x0360 - 0x0360)
class UDenSpawnerRenderingComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DenSpawnerRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogActor
// 0x0058 (0x0240 - 0x0298)
class ADialogActor : public AActor
{
public:
	struct FPointer                                    VfTable_IINamedObject;                         // 0x0240 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIDialogEventListener;                 // 0x0248 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIDialogSpeaker;                       // 0x0250 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class USpriteComponent*                            EditorSprite;                                  // 0x0258 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USelfContainedDialogComponent*               DialogComponent;                               // 0x0260 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FReplicatedSpeakStateData                   ReplicatedSpeakState;                          // 0x0268 (0x0030) [0x0000000100002020] (CPF_Net | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogActor");
		}

		return uClassPointer;
	};

	void eventReplicatedEvent(const struct FName& VarName);
};

// Class GearboxFramework.DialogComponent
// 0x0050 (0x0090 - 0x00E0)
class UDialogComponent : public UActorComponent
{
public:
	struct FCurrentDialogInfo                          CurrentDialog;                                 // 0x0090 (0x0040) [0x0000000000082000] (CPF_Transient | CPF_Component)
	class UDialogEmoteDefinition*                      CurrentEmote;                                  // 0x00D0 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            MostRecentReplicatedSpeakingID;                // 0x00D8 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bRegisteredWithDialogSystem : 1;               // 0x00DC (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bIsReattaching : 1;                            // 0x00DC (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SelfContainedDialogComponent
// 0x0010 (0x00E0 - 0x00F0)
class USelfContainedDialogComponent : public UDialogComponent
{
public:
	class UGearboxDialogNameTag*                       NameTag;                                       // 0x00E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDialogSet*                                  DialogSet;                                     // 0x00E8 (0x0008) [0x000000000440000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SelfContainedDialogComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogEmoteDefinition
// 0x0000 (0x0058 - 0x0058)
class UDialogEmoteDefinition : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogEmoteDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogEmoteSequence
// 0x0010 (0x0058 - 0x0068)
class UDialogEmoteSequence : public UGBXDefinition
{
public:
	class TArray<struct FDialogEmoteSequenceEntry>     Emotes;                                        // 0x0058 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogEmoteSequence");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogEvent
// 0x0008 (0x0058 - 0x0060)
class UDialogEvent : public UGBXDefinition
{
public:
	class UDialogEventList*                            List;                                          // 0x0058 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogEvent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogEventCondition
// 0x0040 (0x0058 - 0x0098)
class UDialogEventCondition : public UGBXDefinition
{
public:
	class TArray<class UGearboxDialogNameTag*>         RequiredSpeakers;                              // 0x0058 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FEventCondition>               Conditions;                                    // 0x0068 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UDialogEventCondition*>         CompositeDialogConditions;                     // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bManuallyOverrideConditionQuality : 1;         // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ManualMatchQuality;                            // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxResponsePlayCount;                          // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogEventCondition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogParametersDefinition
// 0x0040 (0x0058 - 0x0098)
class UDialogParametersDefinition : public UGBXDefinition
{
public:
	class UDialogParametersDefinition*                 Parent;                                        // 0x0058 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FDialogParameters                           Parameters;                                    // 0x0060 (0x0038) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogParametersDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogPoolDefinition
// 0x0018 (0x0058 - 0x0070)
class UDialogPoolDefinition : public UGBXDefinition
{
public:
	struct FPointer                                    VfTable_IIDialogEditorHelper;                  // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<struct FCharacterDialogSet>           DialogSets;                                    // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogPoolDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogPureEchoActor
// 0x0050 (0x0240 - 0x0290)
class ADialogPureEchoActor : public AActor
{
public:
	struct FPointer                                    VfTable_IINamedObject;                         // 0x0240 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIPureEchoSpeaker;                     // 0x0248 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UGearboxDialogNameTag*                       NameTag;                                       // 0x0250 (0x0008) [0x0000000000000021] (CPF_Edit | CPF_Net)
	class UDialogComponent*                            DialogComponent;                               // 0x0258 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FReplicatedSpeakStateData                   ReplicatedSpeakState;                          // 0x0260 (0x0030) [0x0000000100002020] (CPF_Net | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogPureEchoActor");
		}

		return uClassPointer;
	};

	void eventReplicatedEvent(const struct FName& VarName);
};

// Class GearboxFramework.DialogResponse_Basic
// 0x0030 (0x0058 - 0x0088)
class UDialogResponse_Basic : public UGBXDefinition
{
public:
	struct FPointer                                    VfTable_IIDialogResponse;                      // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bOverride_AkEvent : 1;                         // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_Parameters : 1;                      // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_Emote : 1;                           // 0x0060 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_EmoteSequence : 1;                   // 0x0060 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bCountTimesPlayed : 1;                         // 0x0060 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	class UAkEvent*                                    AkEvent;                                       // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDialogParametersDefinition*                 Parameters;                                    // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDialogEmoteDefinition*                      Emote;                                         // 0x0078 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDialogEmoteSequence*                        EmoteSequence;                                 // 0x0080 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogResponse_Basic");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogResponse_Chance
// 0x0018 (0x0088 - 0x00A0)
class UDialogResponse_Chance : public UDialogResponse_Basic
{
public:
	uint32_t                                           bOverride_Chance : 1;                          // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_QuietTime : 1;                       // 0x0088 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_QuietTimeScope : 1;                  // 0x0088 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              Chance;                                        // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FAIRange                                    QuietTime;                                     // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	EQuietTimeScope                                    QuietTimeScope;                                // 0x0098 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogResponse_Chance");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogResponse_Chance_And_Followup
// 0x0020 (0x00A0 - 0x00C0)
class UDialogResponse_Chance_And_Followup : public UDialogResponse_Chance
{
public:
	uint32_t                                           bOverride_FollowupEvent : 1;                   // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_FollowupDelay : 1;                   // 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_Target : 1;                          // 0x00A0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_TargetNameTag : 1;                   // 0x00A0 (0x0004) [0x0000000000000000] [0x00000008] 
	class UDialogEvent*                                FollowupEvent;                                 // 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FollowupDelay;                                 // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	EDialogFollowupTarget                              Target;                                        // 0x00B4 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UGearboxDialogNameTag*                       TargetNameTag;                                 // 0x00B8 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogResponse_Chance_And_Followup");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogResponse_Random
// 0x0010 (0x00C0 - 0x00D0)
class UDialogResponse_Random : public UDialogResponse_Chance_And_Followup
{
public:
	class TArray<struct FRandomDialogLineOption>       DialogLines;                                   // 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogResponse_Random");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogResponse_VariableChance
// 0x0018 (0x00A0 - 0x00B8)
class UDialogResponse_VariableChance : public UDialogResponse_Chance
{
public:
	uint32_t                                           bOverride_ThresholdChances : 1;                // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FThresholdChance>              ThresholdChances;                              // 0x00A8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogResponse_VariableChance");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogResponse_Play_And_Run_Behaviors
// 0x0020 (0x0088 - 0x00A8)
class UDialogResponse_Play_And_Run_Behaviors : public UDialogResponse_Basic
{
public:
	class TArray<class UBehaviorBase*>                 OnPlayBehaviors;                               // 0x0088 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UBehaviorBase*>                 OnFinishedBehaviors;                           // 0x0098 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogResponse_Play_And_Run_Behaviors");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogResponse_ScriptedSpeak
// 0x0040 (0x0088 - 0x00C8)
class UDialogResponse_ScriptedSpeak : public UDialogResponse_Basic
{
public:
	struct FDialogParameters                           ParameterOverrides;                            // 0x0088 (0x0038) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverrideEchoSetting : 1;                      // 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForcedEchoState : 1;                          // 0x00C0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogResponse_ScriptedSpeak");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogSet
// 0x0048 (0x0058 - 0x00A0)
class UDialogSet : public UGBXDefinition
{
public:
	struct FPointer                                    VfTable_IIDialogEditorHelper;                  // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<class UDialogSet*>                    InheritParents;                                // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UIDialogResponse*                            DefaultResponse_Object;                        // 0x0070 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UIDialogResponse*                            DefaultResponse_Interface;                     // 0x0078 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FDialogEventAndResponse>       Responses;                                     // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FDialogEventAndResponse>       CookedCompositeResponses;                      // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogSet");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogEventList
// 0x0018 (0x00A0 - 0x00B8)
class UDialogEventList : public UDialogSet
{
public:
	class UDialogEventList*                            OrganizationalParent;                          // 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UDialogEvent*>                  Events;                                        // 0x00A8 (0x0010) [0x0000000004420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogEventList");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogSystem
// 0x0138 (0x0058 - 0x0190)
class UDialogSystem : public UObject
{
public:
	class TArray<struct FDialogThread>                 DialogThreads;                                 // 0x0058 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FMap_Mirror                                 GroupLoudnessMap;                              // 0x0068 (0x0050) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class TArray<struct FQuietTimeTracker>             ActiveQuietTimes;                              // 0x00B8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FFinishedThreadInfo>           FinishedThreads;                               // 0x00C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FMap_Mirror                                 TrackedPlayCounts;                             // 0x00D8 (0x0050) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class TArray<class UIDialogSpeaker*>               RegisteredSpeakers;                            // 0x0128 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            CurrentPlayingID;                              // 0x0138 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            CurrentDynamicSequenceID;                      // 0x013C (0x0004) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      EchoActor;                                     // 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UObject*                                     EchoEmote;                                     // 0x0148 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<class UIPureEchoSpeaker*>             PureEchoActors;                                // 0x0150 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FArray_Mirror                               RegisteredDialogPools;                         // 0x0160 (0x0010) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class FString                                      PureEchoSpeakerClassPath;                      // 0x0170 (0x0010) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	class UClass*                                      PureEchoSpeakerClass;                          // 0x0180 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bAlwaysSimulatePlayback : 1;                   // 0x0188 (0x0004) [0x0000000000044000] [0x00000001] (CPF_Config | CPF_GlobalConfig)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogSystem");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DialogTalkerGroup
// 0x0020 (0x0058 - 0x0078)
class UDialogTalkerGroup : public UGBXDefinition
{
public:
	class UDialogTalkerGroup*                          ParentGroup;                                   // 0x0058 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UDialogTalkerGroup*>            GroupsCaredAbout;                              // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UDialogParametersDefinition*                 DefaultDialogParameters;                       // 0x0070 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DialogTalkerGroup");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DodgeComponent
// 0x0058 (0x0090 - 0x00E8)
class UDodgeComponent : public UActorComponent
{
public:
	uint32_t                                           bValid : 1;                                    // 0x0090 (0x0004) [0x0000000000002002] [0x00000001] (CPF_Const | CPF_Transient)
	uint32_t                                           bDodging : 1;                                  // 0x0090 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	uint32_t                                           bTimerActive : 1;                              // 0x0090 (0x0004) [0x0000000000002002] [0x00000004] (CPF_Const | CPF_Transient)
	class AActor*                                      DodgeActor;                                    // 0x0098 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class AGearboxPawn*                                DodgePawn;                                     // 0x00A0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAIComponent*                                AIComponent;                                   // 0x00A8 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UDodgeDefinition*                            DodgeDef;                                      // 0x00B0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UStanceComponent*                            StanceComponent;                               // 0x00B8 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class USpecialMoveComponent*                       SMComponent;                                   // 0x00C0 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	float                                              NextDodgeTime;                                 // 0x00C8 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FVector                                     SavedSourceLoc;                                // 0x00CC (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UGearboxAnimDefinition*                      NextLeftAnim;                                  // 0x00D8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UGearboxAnimDefinition*                      NextRightAnim;                                 // 0x00E0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DodgeComponent");
		}

		return uClassPointer;
	};

	bool TryCombatDodge(class AActor* Instigator, struct FVector& SourceLoc);
	void DodgeFromLocationTimer();
	void DodgeAnimFinished();
	void DoMovementDodge();
};

// Class GearboxFramework.DynamicDecalActor
// 0x0010 (0x0248 - 0x0258)
class ADynamicDecalActor : public ADecalActorBase
{
public:
	float                                              DecalFadeTime;                                 // 0x0248 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FName                                       DecalFadeMaterialParamName;                    // 0x024C (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DynamicDecalActor");
		}

		return uClassPointer;
	};

	void SetDecalParameters(class UMaterialInterface* Material, float SizeX, float SizeY, float OffsetX, float OffsetY, float PivotOffsetPctX, float PivotOffsetPctY, float NearPlane, float FarPlane, float TwistRotation, float Lifetime, bool bAffectStaticGeometry, bool bAffectDynamicGeometry, bool bAbsoluteOrientation, const struct FRotator& AbsoluteOrientation, float FadeTime, const struct FName& FadeMaterialParamName);
	void eventPostBeginPlay();
};

// Class GearboxFramework.DynamicReplicatedDecalActor
// 0x0050 (0x0258 - 0x02A8)
class ADynamicReplicatedDecalActor : public ADynamicDecalActor
{
public:
	struct FReplicatedDecalParameterData               ReplicatedDecalParameters;                     // 0x0258 (0x0050) [0x0000000100000020] (CPF_Net)     

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DynamicReplicatedDecalActor");
		}

		return uClassPointer;
	};

	void SetDecalParameters(class UMaterialInterface* Material, float SizeX, float SizeY, float OffsetX, float OffsetY, float PivotOffsetPctX, float PivotOffsetPctY, float NearPlane, float FarPlane, float TwistRotation, float Lifetime, bool bAffectStaticGeometry, bool bAffectDynamicGeometry, bool bAbsoluteOrientation, const struct FRotator& AbsoluteOrientation, float FadeTime, const struct FName& FadeMaterialParamName);
	void eventReplicatedEvent(const struct FName& VarName);
};

// Class GearboxFramework.DynamicPlayRateControlDefinition
// 0x0020 (0x0058 - 0x0078)
class UDynamicPlayRateControlDefinition : public UGBXDefinition
{
public:
	float                                              Duration;                                      // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PlayRateScale;                                 // 0x005C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FInterpCurveFloat                           Curve;                                         // 0x0060 (0x0018) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DynamicPlayRateControlDefinition");
		}

		return uClassPointer;
	};

	float GetPlayRateScale(float Time);
};

// Class GearboxFramework.ExposureUtilityBase
// 0x0010 (0x0058 - 0x0068)
class UExposureUtilityBase : public UObject
{
public:
	uint32_t                                           ExposureEnabled : 1;                           // 0x0058 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	class UExposureUtilityStrategy*                    ExposureStrategy;                              // 0x0060 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ExposureUtilityBase");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ExposureUtilityBasicCaching
// 0x0048 (0x0068 - 0x00B0)
class UExposureUtilityBasicCaching : public UExposureUtilityBase
{
public:
	uint32_t                                           CachingEnabled : 1;                            // 0x0068 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	float                                              MaxCacheTime;                                  // 0x006C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DistanceClose;                                 // 0x0070 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DistanceMed;                                   // 0x0074 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheFreshnessTimeClose;                       // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheFreshnessTimeMed;                         // 0x007C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheFreshnessTimeFar;                         // 0x0080 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheFreshnessTimePlayer;                      // 0x0084 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheTimeFudgeFactorClose;                     // 0x0088 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheTimeFudgeFactorMed;                       // 0x008C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheTimeFudgeFactorFar;                       // 0x0090 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              HasMovedDistThreshold;                         // 0x0094 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              HasMovedDistThresholdPlayer;                   // 0x0098 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FExposureCacheStruct>          CachedExposures;                               // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ExposureUtilityBasicCaching");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ExposureUtilityFixedCost
// 0x0070 (0x00B0 - 0x0120)
class UExposureUtilityFixedCost : public UExposureUtilityBasicCaching
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                  // 0x00B0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	float                                              CloseDistanceSquared;                          // 0x00B8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MedDistanceSquared;                            // 0x00BC (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            MaxLineChecksPerFrame;                         // 0x00C0 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FBucketStruct>                 BucketData;                                    // 0x00C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              MedAccumulatedTime;                            // 0x00D8 (0x0004) [0x0000000000000000]               
	float                                              FarAccumulatedTime;                            // 0x00DC (0x0004) [0x0000000000000000]               
	float                                              SkipUpdateForTime;                             // 0x00E0 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxTimePerFrame;                               // 0x00E4 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            MaxPointData;                                  // 0x00E8 (0x0004) [0x0000000000000000]               
	int32_t                                            PointLineChecks;                               // 0x00EC (0x0004) [0x0000000000000000]               
	int32_t                                            PointMaxLineChecks;                            // 0x00F0 (0x0004) [0x0000000000000000]               
	float                                              PointFreshTime;                                // 0x00F4 (0x0004) [0x0000000000000000]               
	float                                              PointStaleTime;                                // 0x00F8 (0x0004) [0x0000000000000000]               
	float                                              PointMaxErrorSq;                               // 0x00FC (0x0004) [0x0000000000000000]               
	class TArray<struct FPointExposureData>            PointData;                                     // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    Buckets;                                       // 0x0110 (0x0008) [0x0000000000001000] (CPF_Native)  
	uint32_t                                           Initialized : 1;                               // 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ExposureUtilityFixedCost");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ExposureUtilityStrategy
// 0x0000 (0x0058 - 0x0058)
class UExposureUtilityStrategy : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ExposureUtilityStrategy");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.FeatherBoneBlendDefinition
// 0x0010 (0x0058 - 0x0068)
class UFeatherBoneBlendDefinition : public UGBXDefinition
{
public:
	class TArray<struct FFeatherBoneBlendData>         BoneBlends;                                    // 0x0058 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.FeatherBoneBlendDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.FeatureDefinition
// 0x0000 (0x0058 - 0x0058)
class UFeatureDefinition : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.FeatureDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AIDefinition
// 0x0058 (0x0058 - 0x00B0)
class UAIDefinition : public UFeatureDefinition
{
public:
	struct FPointer                                    VfTable_IIBehaviorProvider;                    // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UBehaviorProviderDefinition*                 BehaviorProviderDefinition;                    // 0x0060 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class UAIBehaviorProviderDefinition*               AIBehaviorProviderDefinition;                  // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bHealOnReset : 1;                              // 0x0070 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bMigratedTimers : 1;                           // 0x0070 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	class TArray<struct FAITreeData>                   NodeList;                                      // 0x0078 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UAIActionTag*>                  ActionTags;                                    // 0x0088 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
	float                                              TargetSearchRadius;                            // 0x0098 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UTargetingDefinition*                        TargetingDef;                                  // 0x00A0 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class UAwarenessDefinition*                        AwarenessDef;                                  // 0x00A8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIDefinition");
		}

		return uClassPointer;
	};

	static void TryOnGiveDamage(class UObject* Instigator, class UObject* Receiver, float Damage, float ShieldDamage, float ExcessDamageDone, bool bWasCrit, int32_t DamageTags, class UObject* DamageSource, class UObject* DamageType);
	void OnCommunicated(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnBecomeAware(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnBecomeSuspicious(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnBecomeCautious(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnBecomeOblivious(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnReset(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnHitByVehicle(class AVehicle* Vehicle, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnRanOver(class AVehicle* Vehicle, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnTimerEvent(const struct FName& SpecializedEventName, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnKilledPawn(class UObject* Killed, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnLanded(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnStopFiringWeapon(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnStartFiringWeapon(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnTargetInvalid(class UObject* Target, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnTargetValid(class UObject* Target, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnTargetLost(class UObject* OldTarget, bool bChangedTargets, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnTargetChanged(class UObject* OldTarget, class UObject* NewTarget, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnTargetAcquired(class UObject* NewTarget, bool bChangedTargets, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnSpawned(EOnSpawnOutputs EventOutput, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnTakeHeal(class UObject* Instigator, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnVehicleTakeDamage(class UObject* Instigator, class UObject* HitVehicle, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnGiveDamage(class UObject* Receiver, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, bool bWasCrit, float ExcessDamageDone, int32_t DamageTags, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnTakeDamage(class UObject* Instigator, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, bool bWasCrit, float ExcessDamageDone, int32_t DamageTags, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnUserCouldNotAffordSecondary(ENPCOnUsedOutputs EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnUserCouldNotAfford(ENPCOnUsedOutputs EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnSecondaryUsed(ENPCOnUsedOutputs EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnUsed(ENPCOnUsedOutputs EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle& ConsumerHandle);
};

// Class GearboxFramework.DenAIDefinition
// 0x0000 (0x00B0 - 0x00B0)
class UDenAIDefinition : public UAIDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DenAIDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.CloakDefinition
// 0x0030 (0x0058 - 0x0088)
class UCloakDefinition : public UFeatureDefinition
{
public:
	uint32_t                                           bHideBody : 1;                                 // 0x0058 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bHideHUDInfo : 1;                              // 0x0058 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bDisableCollision : 1;                         // 0x0058 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bCloakDuring_Spawn : 1;                        // 0x0058 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bCloakDuring_SpawnAnim : 1;                    // 0x0058 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           bCloakDuring_AttackAnim : 1;                   // 0x0058 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           bCloakDuring_AttackMove : 1;                   // 0x0058 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           bCloakDuring_Patrol : 1;                       // 0x0058 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           bCloakDuring_Scripted : 1;                     // 0x0058 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           bCloakDuring_CustomMove : 1;                   // 0x0058 (0x0004) [0x0000000000000003] [0x00000200] (CPF_Edit | CPF_Const)
	class TArray<class USpecialMove_Cloak*>            CloakAnims;                                    // 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class USpecialMove_Cloak*>            UncloakAnims;                                  // 0x0070 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	ECloakAnimStyle                                    CloakAnimStyle;                                // 0x0080 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ECloakAnimStyle                                    UncloakAnimStyle;                              // 0x0081 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ECloakStyle                                        CloakStyle;                                    // 0x0082 (0x0001) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.CloakDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.CoverDefinition
// 0x0060 (0x0058 - 0x00B8)
class UCoverDefinition : public UFeatureDefinition
{
public:
	struct FAIRange                                    IdleTime;                                      // 0x0058 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    FireTime;                                      // 0x0060 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MantleLerpStartTime;                           // 0x0068 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MantleLerpStopTime;                            // 0x006C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UGearboxAnimDefinition*                      MantleAnim;                                    // 0x0070 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	float                                              ReachedDistance;                               // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              BodyOffset;                                    // 0x007C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MantleBodyOffset;                              // 0x0080 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UCoverStanceDefinition*>        Stances;                                       // 0x0088 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bMigratedStances : 1;                          // 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	class UCoverStanceDefinition*                      Stance_HighLeft;                               // 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UCoverStanceDefinition*                      Stance_HighRight;                              // 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UCoverStanceDefinition*                      Stance_LowCenter;                              // 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.CoverDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DamageReceiverDefinition
// 0x0038 (0x0058 - 0x0090)
class UDamageReceiverDefinition : public UFeatureDefinition
{
public:
	struct FPointer                                    VfTable_IIBehaviorProvider;                    // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            MaxDebugValues;                                // 0x0060 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            DefaultNodeIdx;                                // 0x0064 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class TArray<struct FDamageNodeData>               Nodes;                                         // 0x0068 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FDamageInstanceData>           InstanceData;                                  // 0x0078 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
	class UDRBehaviorProviderDefinition*               BehaviorProviderDefinition;                    // 0x0088 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DamageReceiverDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DodgeDefinition
// 0x0080 (0x0058 - 0x00D8)
class UDodgeDefinition : public UFeatureDefinition
{
public:
	uint32_t                                           bMigratedDodgeAnims : 1;                       // 0x0058 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bAllowCombatDodges : 1;                        // 0x0058 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bAllowMovementDodges : 1;                      // 0x0058 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	class UGearboxAnimDefinition*                      DodgeAnimLeft;                                 // 0x0060 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UGearboxAnimDefinition*                      DodgeAnimRight;                                // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<class UGearboxAnimDefinition*>        DodgeAnimsLeft;                                // 0x0070 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UGearboxAnimDefinition*>        DodgeAnimsRight;                               // 0x0080 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	float                                              Angle;                                         // 0x0090 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Chance;                                        // 0x0094 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              TargetDistMin;                                 // 0x0098 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RepeatTimeMin;                                 // 0x009C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RepeatTimeMax;                                 // 0x00A0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    DelayTime;                                     // 0x00A4 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    FailDelayTimer;                                // 0x00AC (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    CombatStartTimer;                              // 0x00B4 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UGearboxAnimDefinition*>        MovementDodgeAnims;                            // 0x00C0 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FAIRange                                    MovementDodgeTime;                             // 0x00D0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DodgeDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TargetingDefinition
// 0x0060 (0x0058 - 0x00B8)
class UTargetingDefinition : public UFeatureDefinition
{
public:
	class TArray<struct FTargetSortData>               Sorts;                                         // 0x0058 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FTargetConditionData>          Conditions;                                    // 0x0068 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FTargetBucketData>             TargetBuckets;                                 // 0x0078 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<class UTI_Calc*>                      Knowledge;                                     // 0x0088 (0x0010) [0x000000000440000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	uint32_t                                           bCanTargetFriendlies : 1;                      // 0x0098 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bCanTargetNeutrals : 1;                        // 0x0098 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverrideSearchRadius : 1;                     // 0x0098 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        CanTargetFriendliesIf;                         // 0x00A0 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UExpressionEvaluator*                        CanTargetNeutralsIf;                           // 0x00A8 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	float                                              SearchRadius;                                  // 0x00B0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetingDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.WeaponUsageDefinition
// 0x0070 (0x0058 - 0x00C8)
class UWeaponUsageDefinition : public UFeatureDefinition
{
public:
	ELeadType                                          AimLeadType;                                   // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              AimMaxLeadDistance;                            // 0x005C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              AimPretendBulletSpeed;                         // 0x0060 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bUsePretendBulletSpeed : 1;                    // 0x0064 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bPauseFiringWhenAimOffsetIsIrrelevant : 1;     // 0x0064 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverrideBurstCount : 1;                       // 0x0064 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bOverrideBurstDuration : 1;                    // 0x0064 (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bOverrideBurstDelay : 1;                       // 0x0064 (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint32_t                                           bLimitFiringByHeat : 1;                        // 0x0064 (0x0004) [0x0000000000000002] [0x00000020] (CPF_Const)
	uint32_t                                           bAddSpeedSpread : 1;                           // 0x0064 (0x0004) [0x0000000000000002] [0x00000040] (CPF_Const)
	uint32_t                                           bAddSpreadOverTime : 1;                        // 0x0064 (0x0004) [0x0000000000000002] [0x00000080] (CPF_Const)
	class UStanceDefinition*                           FiringStance;                                  // 0x0068 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SuppressionFireTime;                           // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FireCone;                                      // 0x0074 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        CanFireIf;                                     // 0x0078 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	struct FAIRange                                    BurstCountOverride;                            // 0x0080 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    BurstDurationOverride;                         // 0x0088 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    BurstDelayOverride;                            // 0x0090 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    HeatRange;                                     // 0x0098 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxSpeedSpread;                                // 0x00A0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SpeedSpreadDegreesPerSecond;                   // 0x00A4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SpeedSpreadInterpSpeedUp;                      // 0x00A8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SpeedSpreadInterpSpeedDown;                    // 0x00AC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FInterpCurveFloat                           SpreadOverTimeCurve;                           // 0x00B0 (0x0018) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.WeaponUsageDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.FeatureProviderDefinition
// 0x0028 (0x0058 - 0x0080)
class UFeatureProviderDefinition : public UGBXDefinition
{
public:
	EFeatureVersion                                    Version;                                       // 0x0058 (0x0001) [0x0000000000000000]               
	class TArray<struct FFeatureNodeData>              Nodes;                                         // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FFeatureSwitchData>            Switches;                                      // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.FeatureProviderDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.FlagDefinition
// 0x0028 (0x0058 - 0x0080)
class UFlagDefinition : public UGBXDefinition
{
public:
	class UExpressionEvaluator*                        EvaluationExpression;                          // 0x0058 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	uint32_t                                           bEvaluateContinuously : 1;                     // 0x0060 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class TArray<class UAttributeContextResolver*>     ContextResolverChain;                          // 0x0068 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	class UFlagValueResolver*                          ValueResolver;                                 // 0x0078 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.FlagDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.FlagExpressionEvaluator
// 0x0018 (0x0058 - 0x0070)
class UFlagExpressionEvaluator : public UExpressionEvaluator
{
public:
	class TArray<struct FFlagEvalConditional>          FlagChain;                                     // 0x0058 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	ECExpressionOperatorType                           FlagChainOperator;                             // 0x0068 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.FlagExpressionEvaluator");
		}

		return uClassPointer;
	};

	bool Evaluate(class UObject* ContextSource);
};

// Class GearboxFramework.FlagSingleExpressionEvaluator
// 0x0030 (0x0058 - 0x0088)
class UFlagSingleExpressionEvaluator : public UExpressionEvaluator
{
public:
	struct FFlagEvalConditional                        Condition;                                     // 0x0058 (0x0030) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.FlagSingleExpressionEvaluator");
		}

		return uClassPointer;
	};

	bool Evaluate(class UObject* ContextSource);
};

// Class GearboxFramework.FlagValueResolver
// 0x0000 (0x0058 - 0x0058)
class UFlagValueResolver : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.FlagValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ObjectFunctionFlagValueResolver
// 0x0018 (0x0058 - 0x0070)
class UObjectFunctionFlagValueResolver : public UFlagValueResolver
{
public:
	float                                              CheckRate;                                     // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      FunctionCall;                                  // 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ObjectFunctionFlagValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ObjectPropertyFlagValueResolver
// 0x0008 (0x0058 - 0x0060)
class UObjectPropertyFlagValueResolver : public UFlagValueResolver
{
public:
	struct FName                                       PropertyName;                                  // 0x0058 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ObjectPropertyFlagValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.RuleEngineFlagValueResolver
// 0x0000 (0x0058 - 0x0058)
class URuleEngineFlagValueResolver : public UFlagValueResolver
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.RuleEngineFlagValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.FoleyAccessoryComponent
// 0x0068 (0x0090 - 0x00F8)
class UFoleyAccessoryComponent : public UActorComponent
{
public:
	class UAkEvent*                                    AccessoryFoleyAkEvent;                         // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              AccessoryVolume;                               // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AccessoryPitch;                                // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    LoopStartAkEvent;                              // 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FVector>                       CustomRelativeLocations;                       // 0x00A8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MaxAudibleAttenuationDistanceFraction;         // 0x00B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UAkEvent*>                      AdditionalAkEvents;                            // 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              CullVolumeOffset;                              // 0x00D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FAkPlayingInfo                              FoleyAccessoryLoopPlayingInfo;                 // 0x00D8 (0x0010) [0x0000000000082000] (CPF_Transient | CPF_Component)
	uint32_t                                           bIsReattaching : 1;                            // 0x00E8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bStartedLoop : 1;                              // 0x00E8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class USkeletalMeshComponent*                      AttachedToSkelComponent;                       // 0x00F0 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.FoleyAccessoryComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.FoleyMainComponent
// 0x00B8 (0x0090 - 0x0148)
class UFoleyMainComponent : public UActorComponent
{
public:
	class UAkSwitch*                                   CharacterSizeAkSwitch;                         // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    FootstepAkEvent;                               // 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FootstepVolume;                                // 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FootstepPitch;                                 // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    FoleyMainAkEvent;                              // 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FoleyMainVolume;                               // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FoleyMainPitch;                                // 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    LoopStartAkEvent;                              // 0x00B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FoleyAccessoryMasterVolume;                    // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FoleyAccessoryPitch;                           // 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HighDetailDistance;                            // 0x00C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FExtraFoleyParameter>          ExtraParameters;                               // 0x00D0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              AttentuationScalingFactor;                     // 0x00E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxAudibleAttenuationDistanceFraction;         // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CullVolumeOffset;                              // 0x00E8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FAkPlayingInfo                              FoleyMainLoopPlayingInfo;                      // 0x00F0 (0x0010) [0x0000000000082000] (CPF_Transient | CPF_Component)
	uint32_t                                           bIsReattaching : 1;                            // 0x0100 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bStartedLoop : 1;                              // 0x0100 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FFoleyParameterDetails                      CachedFootstepParameterDetails;                // 0x0104 (0x0018) [0x0000000000002000] (CPF_Transient)
	struct FFoleyParameterDetails                      FoleyParamsModifer;                            // 0x011C (0x0018) [0x0000000000002000] (CPF_Transient)
	struct FName                                       LastFootstepBone;                              // 0x0134 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UAkSwitch*                                   LastMaterialAkSwitch;                          // 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.FoleyMainComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.FormationComponent
// 0x0020 (0x0360 - 0x0380)
class UFormationComponent : public UPrimitiveComponent
{
public:
	struct FName                                       NameTag;                                       // 0x0360 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bShouldCrouch : 1;                             // 0x0368 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UIAIInterface*                               AIOwner_Object;                                // 0x0370 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UIAIInterface*                               AIOwner_Interface;                             // 0x0378 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.FormationComponent");
		}

		return uClassPointer;
	};

	struct FRotator GetFormationRotation();
	struct FVector GetFormationLocation(bool bFlying);
	void SetAIOwner(class UIAIInterface* NewOwner);
	class UIAIInterface* GetAIOwner();
	bool ShouldCrouch();
};

// Class GearboxFramework.GameTestDefinition
// 0x0020 (0x0058 - 0x0078)
class UGameTestDefinition : public UGBXDefinition
{
public:
	struct FPointer                                    VfTable_IIBehaviorProvider;                    // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UBehaviorProviderDefinition*                 BehaviorProviderDefinition;                    // 0x0060 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FSpecializedBehaviorEvent>     SupportedGameTestEvents;                       // 0x0068 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GameTestDefinition");
		}

		return uClassPointer;
	};

	void GameTestEvent(const struct FName& SpecializedEventName, class UObject* Instigator, class UObject* Other, class UObject* TeamDefinition, int32_t Index, float FloatParam, struct FBehaviorConsumerHandle& ConsumerHandle);
	void CleanupTest(struct FBehaviorConsumerHandle& ConsumerHandle);
	void RunTest(struct FBehaviorConsumerHandle& ConsumerHandle);
};

// Class GearboxFramework.GBXActorList
// 0x0010 (0x0058 - 0x0068)
class UGBXActorList : public UObject
{
public:
	class TArray<struct Fs_actorList>                  ActorList;                                     // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXActorList");
		}

		return uClassPointer;
	};

	void RemoveAndDeleteActorsOfClassFromLevel(class UClass* TheClass, class ULevel* Level);
	void RemoveActorsOfClassFromLevel(class UClass* TheClass, class ULevel* Level);
	void RemoveAndDeleteActorsFromLevel(class ULevel* Level);
	void RemoveActorsFromLevel(class ULevel* Level);
	class AActor* FindNextActorByLevel(class ULevel* Level, int32_t& Index);
	class AActor* FindFirstActorByLevel(class ULevel* Level, int32_t& Index);
	class AActor* FindNextActorByClass(class UClass* TheClass, int32_t& Index);
	class AActor* FindFirstActorByClass(class UClass* TheClass, int32_t& Index);
	void RemoveActor(class AActor* Actor);
	void AddActor(class AActor* Actor, class ULevel* Level);
};

// Class GearboxFramework.GBXAutoTestManager
// 0x00A8 (0x0350 - 0x03F8)
class AGBXAutoTestManager : public AAutoTestManager
{
public:
	struct FPointer                                    VfTable_IIBehaviorConsumer;                    // 0x0350 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_FCallbackEventDevice;                  // 0x0358 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                // 0x0360 (0x0004) [0x0000000000000000]               
	class FString                                      GTDPathPrepend;                                // 0x0368 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      CurrentTestName;                               // 0x0378 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      CurrentCharacterName;                          // 0x0388 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      CurrentBotName;                                // 0x0398 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UGameTestDefinition*                         GameTestDefinition;                            // 0x03A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      URLAppendString;                               // 0x03B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           bRunContentUnitTests : 1;                      // 0x03C0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bSpawnBots : 1;                                // 0x03C0 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bGetMapGTDFromGID : 1;                         // 0x03C0 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bLastTestResult : 1;                           // 0x03C0 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	class TArray<struct FName>                         GameTestEventsWaitingFor;                      // 0x03C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class FString>                        PackagesToAlwaysLoad;                          // 0x03D8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class UPackage*>                      AlwaysLoadedPackages;                          // 0x03E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXAutoTestManager");
		}

		return uClassPointer;
	};

	void ShutdownClients();
	void ShutdownTimer();
	void AutoTestTimer();
	struct FBehaviorConsumerHandle GetBehaviorConsumerHandle();
};

// Class GearboxFramework.GBXCameraBehavior
// 0x0010 (0x0058 - 0x0068)
class UGBXCameraBehavior : public UObject
{
public:
	class UGBXCameraInputs*                            Inputs;                                        // 0x0058 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bActive : 1;                                   // 0x0060 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bEnabled : 1;                                  // 0x0060 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUpdatePreViewTarget : 1;                      // 0x0060 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXCameraBehavior");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXCameraMode
// 0x00A8 (0x0058 - 0x0100)
class UGBXCameraMode : public UObject
{
public:
	struct FName                                       ModeName;                                      // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UGBXCameraBehavior*>            Behaviors;                                     // 0x0060 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	float                                              BlendInTime;                                   // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bBlendOut : 1;                                 // 0x0074 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsFirstPerson : 1;                            // 0x0074 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bShowViewmodel : 1;                            // 0x0074 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnablePitchInversionLimit : 1;                // 0x0074 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bEnableAudioPerspectiveOverride : 1;           // 0x0074 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bDoNotPushOutSameMode : 1;                     // 0x0074 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bAllowIntentionalClipping : 1;                 // 0x0074 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bIncludeInDebugRotation : 1;                   // 0x0074 (0x0004) [0x0000000000200001] [0x00000080] (CPF_Edit)
	uint32_t                                           bNeedsCalcDelta : 1;                           // 0x0074 (0x0004) [0x0000000000002000] [0x00000100] (CPF_Transient)
	uint32_t                                           bNeedsCalcViewmodelDelta : 1;                  // 0x0074 (0x0004) [0x0000000000002000] [0x00000200] (CPF_Transient)
	EPlayerRotationUpdateMethod                        PlayerRotationUpdateMethod;                    // 0x0078 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FTPOV                                       Delta;                                         // 0x007C (0x001C) [0x0000000000002000] (CPF_Transient)
	uint8_t                                           UnknownData00[0x8];                            // 0x0098 (0x0008) MISSED OFFSET
	struct FTQPOV                                      ViewmodelDelta;                                // 0x00A0 (0x0030) [0x0000000000002000] (CPF_Transient)
	float                                              BlendTime;                                     // 0x00D0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              BlendTimeRemaining;                            // 0x00D4 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGBXCameraInputs*                            Inputs;                                        // 0x00D8 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     DebugViewTargetFocusOffset;                    // 0x00E0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     DebugCameraLocationOffset;                     // 0x00EC (0x000C) [0x0000000000002000] (CPF_Transient)
	uint8_t                                           UnknownData01[0x8];                            // 0x00F8 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXCameraMode");
		}

		return uClassPointer;
	};

	void PreViewTargetUpdate(float DeltaTime, class UGBXCameraState* CamState, struct FRotator& OutViewRotation);
	void Update(float DeltaTime, class UGBXCameraState* CamState, struct FTViewTarget& ViewTarget, struct FTQPOV& ViewmodelPOV);
	void End(class UGBXCameraState* CamState);
	void Start(class UGBXCameraState* CamState, float optionalBlendTimeOverride, struct FTPOV& PreviousPOV, struct FTQPOV& PreviousViewmodelOffsetPOV);
	void ShutDown();
	void Initialize(class UGBXCameraInputs* CameraInputs);
};

// Class GearboxFramework.GBXCameraModeDefinition
// 0x0008 (0x0058 - 0x0060)
class UGBXCameraModeDefinition : public UGBXDefinition
{
public:
	class UGBXCameraMode*                              Mode;                                          // 0x0058 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXCameraModeDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXCameraModeSet
// 0x0018 (0x0058 - 0x0070)
class UGBXCameraModeSet : public UObject
{
public:
	class UGBXCameraModeSetDefinition*                 Definition;                                    // 0x0058 (0x0008) [0x0000000000022001] (CPF_Edit | CPF_Transient | CPF_EditConst)
	class TArray<class UGBXCameraMode*>                Modes;                                         // 0x0060 (0x0010) [0x0000000004422001] (CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXCameraModeSet");
		}

		return uClassPointer;
	};

	class UGBXCameraMode* GetMode(const struct FName& ModeName);
	void ShutdownModes();
	void InitializeModes(class UGBXCameraInputs* CameraInputs);
	void InitializeFromDefinition(class UGBXCameraModeSetDefinition* Def);
};

// Class GearboxFramework.GBXCameraModeSetDefinition
// 0x0010 (0x0058 - 0x0068)
class UGBXCameraModeSetDefinition : public UGBXDefinition
{
public:
	class TArray<class UGBXCameraModeDefinition*>      Modes;                                         // 0x0058 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXCameraModeSetDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxCamera
// 0x00F0 (0x0500 - 0x05F0)
class AGearboxCamera : public ACamera
{
public:
	class TArray<class UGBXCameraMode*>                ModeStack;                                     // 0x0500 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UGBXCameraInputs*                            CameraInputs;                                  // 0x0510 (0x0008) [0x0000000004402008] (CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline)
	class UGBXCameraState*                             CurrentCameraState;                            // 0x0518 (0x0008) [0x0000000004402008] (CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline)
	class UGBXCameraShakeManager*                      CameraShakeManager;                            // 0x0520 (0x0008) [0x0000000004402008] (CPF_ExportObject | CPF_Transient | CPF_NeedCtorLink | CPF_EditInline)
	uint8_t                                           UnknownData00[0x8];                            // 0x0528 (0x0008) MISSED OFFSET
	struct FTQPOV                                      ViewmodelPOV;                                  // 0x0530 (0x0030) [0x0000000000002000] (CPF_Transient)
	struct FTQPOV                                      ViewmodelOffsetPOV;                            // 0x0560 (0x0030) [0x0000000000002000] (CPF_Transient)
	struct FTPOV                                       CameraAnimDelta;                               // 0x0590 (0x001C) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            ViewTargetVisibilityFlags;                     // 0x05AC (0x0001) [0x0000000000002000] (CPF_Transient)
	class TArray<class UGBXCameraModeSet*>             ModeSets;                                      // 0x05B0 (0x0010) [0x0000000004422001] (CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline)
	struct FRotator                                    LastBasedDeltaRotation;                        // 0x05C0 (0x000C) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FName>                         DebugModeNames;                                // 0x05D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              DebugFocusOffsetStep;                          // 0x05E0 (0x0004) [0x0000000000046000] (CPF_Transient | CPF_Config | CPF_GlobalConfig)
	float                                              DebugOffsetStep;                               // 0x05E4 (0x0004) [0x0000000000046000] (CPF_Transient | CPF_Config | CPF_GlobalConfig)
	uint8_t                                           UnknownData01[0x8];                            // 0x05E8 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxCamera");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	struct FRotator GetDesiredPawnRotation();
	void CycleDebugCameraMode(bool optionalBReverse);
	void GetCameraModeNames(class TArray<struct FName>& OutModeNames);
	void UpdateViewTarget(float DeltaTime, struct FTViewTarget& OutVT);
	void UpdateCameraInputs();
	void ProcessViewRotation(float DeltaTime, struct FRotator& OutViewRotation, struct FRotator& OutDeltaRot);
	void eventUpdateCamera(float DeltaTime);
	void ClearAllCameraShakes();
	void StopCameraShake(class UCameraShake* Shake);
	void PlayCameraShake(class UCameraShake* Shake, float Scale, ECameraAnimPlaySpace optionalPlaySpace, const struct FRotator& optionalUserPlaySpaceRot);
	void RemoveAllEpicCameraShakes();
	void RemoveEpicCameraShake(class UCameraShake* Shake);
	void AddEpicCameraShake(class UCameraShake* NewShake, float Scale, ECameraAnimPlaySpace optionalPlaySpace, const struct FRotator& optionalUserPlaySpaceRot);
	void StopGBXCameraShake();
	void PlayGBXCameraShake(const struct FGearboxViewShakeInfo& Shake);
	void SetViewTarget(class AActor* NewViewTarget, const struct FViewTargetTransitionParams& optionalTransitionParams);
	void ResetCameraRotation(const struct FRotator& NewRot);
	class UGBXCameraMode* GetCurrentMode();
	bool ClearCameraMode();
	bool PopCameraMode(const struct FName& ModeName, float optionalBlendTimeOverride);
	bool PushCameraMode(const struct FName& ModeName, float optionalBlendTimeOverride);
	bool SetCameraMode(const struct FName& ModeName, float optionalBlendTimeOverride, bool optionalBForceResetMode);
	void ClearModeSets();
	bool HasModeSet(class UGBXCameraModeSet* ModeSet);
	bool RemoveModeSetByDefinition(class UGBXCameraModeSetDefinition* ModeSetDefinition);
	bool AddModeSetByDefinition(class UGBXCameraModeSetDefinition* ModeSetDefinition);
	bool RemoveModeSet(class UGBXCameraModeSet* ModeSet);
	bool AddModeSet(class UGBXCameraModeSet* ModeSet);
};

// Class GearboxFramework.GBXCameraShakeManager
// 0x00A0 (0x0058 - 0x00F8)
class UGBXCameraShakeManager : public UObject
{
public:
	float                                              SplitScreenShakeScale;                         // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FGearboxViewShakeInfo                       ActiveGBXViewShake;                            // 0x005C (0x0044) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     GBXShakeOffset;                                // 0x00A0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    GBXShakeRot;                                   // 0x00AC (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              GBXShakeFOV;                                   // 0x00B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              GBXShakeOffsetLength;                          // 0x00BC (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              GBXShakeRotLength;                             // 0x00C0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              GBXShakeFOVLength;                             // 0x00C4 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FCameraShakeInstance>          ActiveEpicShakes;                              // 0x00C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FVector                                     EpicShakeOffset;                               // 0x00D8 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    EpicShakeRot;                                  // 0x00E4 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              EpicShakeFOV;                                  // 0x00F0 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXCameraShakeManager");
		}

		return uClassPointer;
	};

	bool AddEpicCameraShake(class UCameraShake* NewShake, float Scale, ECameraAnimPlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	bool PlayGBXCameraShake(const struct FGearboxViewShakeInfo& NewShake);
	void ApplyShakes(struct FVector& OutLocation, struct FRotator& OutRotation, float& OutFOV);
	void Update(float DeltaTime);
};

// Class GearboxFramework.GBXCameraState
// 0x00B8 (0x0058 - 0x0110)
class UGBXCameraState : public UObject
{
public:
	struct FTPOV                                       POV;                                           // 0x0058 (0x001C) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bShowViewmodel : 1;                            // 0x0074 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bIsTransitioning : 1;                          // 0x0074 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bConstrainAspectRatio : 1;                     // 0x0074 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bResetNonPersistentVariablesOnNextUpdate : 1;  // 0x0074 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bAppliedViewKick : 1;                          // 0x0074 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bIsColliding : 1;                              // 0x0074 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	struct FVector                                     AbsoluteLocationOffset;                        // 0x0078 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     BaseLocationOffset;                            // 0x0084 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    BaseRotationOffset;                            // 0x0090 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              BaseFOVOffset;                                 // 0x009C (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     CameraLocationOffset;                          // 0x00A0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    CameraRotationOffset;                          // 0x00AC (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ViewmodelLocationOffset;                       // 0x00B8 (0x000C) [0x0000000000002000] (CPF_Transient)
	uint8_t                                           UnknownData00[0xC];                            // 0x00C4 (0x000C) MISSED OFFSET
	struct FQuat                                       ViewmodelRotationOffset;                       // 0x00D0 (0x0010) [0x0000000000002000] (CPF_Transient)
	float                                              ViewModelFOV;                                  // 0x00E0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              AspectRatio;                                   // 0x00E4 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FCameraPostProcessModifier>    PPModifiers;                                   // 0x00E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FRotator                                    ClampedLookRotationRemainder;                  // 0x00F8 (0x000C) [0x0000000000002000] (CPF_Transient)
	uint8_t                                           UnknownData01[0xC];                            // 0x0104 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXCameraState");
		}

		return uClassPointer;
	};

	void LimitPitch(float MinDegree, float MaxDegree);
	void ResetNonPersistentVariables();
	float GetViewmodelFOV();
	float GetCameraFOV();
	void GetViewmodelLocationRotation(const struct FVector& DeltaLocation, const struct FRotator& DeltaRotation, struct FVector& Location, struct FQuat& Rotation);
	void GetCameraLocationRotation(struct FVector& Location, struct FRotator& Rotation);
	void GetBaseLocationRotation(struct FVector& Location, struct FRotator& Rotation);
};

// Class GearboxFramework.GBXDangerComponent
// 0x0050 (0x0360 - 0x03B0)
class UGBXDangerComponent : public UPrimitiveComponent
{
public:
	struct FName                                       Type;                                          // 0x0360 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                DamageFormula;                                 // 0x0368 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                RadiusFormula;                                 // 0x0388 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bEnabled : 1;                                  // 0x03A8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXDangerComponent");
		}

		return uClassPointer;
	};

	void SetEnabled(bool bNewEnabled);
};

// Class GearboxFramework.GBXInfluenceInfo_Boundary
// 0x0000 (0x00A8 - 0x00A8)
class UGBXInfluenceInfo_Boundary : public UGBXInfluenceInfo
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXInfluenceInfo_Boundary");
		}

		return uClassPointer;
	};

	void InitPoints(int32_t NumPoints);
};

// Class GearboxFramework.GBXInfluenceInfo_Combine
// 0x0028 (0x00A8 - 0x00D0)
class UGBXInfluenceInfo_Combine : public UGBXInfluenceInfo
{
public:
	class UGBXInfluenceInfo*                           Operand1;                                      // 0x00A8 (0x0008) [0x0000000000000000]               
	class UGBXInfluenceInfo*                           Operand2;                                      // 0x00B0 (0x0008) [0x0000000000000000]               
	uint32_t                                           bOperand1Absolute : 1;                         // 0x00B8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bOperand2Absolute : 1;                         // 0x00B8 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	struct FName                                       Operand1Name;                                  // 0x00BC (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       Operand2Name;                                  // 0x00C4 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EInfluenceOperation                                Operation;                                     // 0x00CC (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXInfluenceInfo_Combine");
		}

		return uClassPointer;
	};

	class UGBXInfluenceInfo* GetOperand2();
	class UGBXInfluenceInfo* GetOperand1();
	float GetValue(int32_t PointIdx);
	void InitPoints(int32_t NumPoints);
};

// Class GearboxFramework.GBXInfluenceInfo_Danger
// 0x0030 (0x00A8 - 0x00D8)
class UGBXInfluenceInfo_Danger : public UGBXInfluenceInfo
{
public:
	class TArray<struct FDangerTypeData>               Types;                                         // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UGBXDangerComponent*>           Dangers;                                       // 0x00B8 (0x0010) [0x0000000004482008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UGBXDangerComponent*>           RegisteredDangers;                             // 0x00C8 (0x0010) [0x0000000004482008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXInfluenceInfo_Danger");
		}

		return uClassPointer;
	};

	bool DangerInUnitRadius(float Units, const struct FName& optionalType, struct FInfluencePointRef& InfPoint);
	bool DangerInNodeRadius(int32_t Nodes, const struct FName& optionalType, struct FInfluencePointRef& InfPoint);
	void UnregisterDanger(class UGBXDangerComponent* OldDanger);
	void RegisterDanger(class UGBXDangerComponent* NewDanger);
	float GetValue(int32_t PointIdx);
	void InitPoints(int32_t NumPoints);
	void Prepare();
	void Update();
};

// Class GearboxFramework.GBXInfluenceInfo_Debug
// 0x0000 (0x00A8 - 0x00A8)
class UGBXInfluenceInfo_Debug : public UGBXInfluenceInfo
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXInfluenceInfo_Debug");
		}

		return uClassPointer;
	};

	void Update();
};

// Class GearboxFramework.GBXInfluenceInfo_GroupLineOfSight
// 0x0020 (0x00A8 - 0x00C8)
class UGBXInfluenceInfo_GroupLineOfSight : public UGBXInfluenceInfo
{
public:
	class UGBXInfluenceInfo_LineOfSight*               LOSInfo;                                       // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FLOSGroup>                     Groups;                                        // 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            DebugGroupIdx;                                 // 0x00C0 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXInfluenceInfo_GroupLineOfSight");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXInfluenceInfo_LineOfSight
// 0x0030 (0x00A8 - 0x00D8)
class UGBXInfluenceInfo_LineOfSight : public UGBXInfluenceInfo
{
public:
	int32_t                                            GridSize;                                      // 0x00A8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            DistanceBits;                                  // 0x00AC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            HalfSize;                                      // 0x00B0 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            BitsPerPoint;                                  // 0x00B4 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            BitsPerLayer;                                  // 0x00B8 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumDistanceBits;                               // 0x00BC (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<int32_t>                              LineOfSightInfo;                               // 0x00C0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            DebugPointIdx;                                 // 0x00D0 (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXInfluenceInfo_LineOfSight");
		}

		return uClassPointer;
	};

	ELineOfSightInfo CheckPoints(int32_t Point1, int32_t Point2);
	void InitPoints(int32_t NumPoints);
};

// Class GearboxFramework.GBXInfluenceInfo_Occupancy
// 0x0010 (0x00A8 - 0x00B8)
class UGBXInfluenceInfo_Occupancy : public UGBXInfluenceInfo
{
public:
	class TArray<class UPathingObstacleInfo*>          OccupancyMap;                                  // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXInfluenceInfo_Occupancy");
		}

		return uClassPointer;
	};

	bool IsUnitRadiusOccupied(float Units, class UPathingObstacleInfo* TestingObstacle, class UExpressionEvaluator* Condition, struct FInfluencePointRef& InfPoint);
	bool IsNodeRadiusOccupied(int32_t Nodes, class UPathingObstacleInfo* TestingObstacle, class UExpressionEvaluator* Condition, struct FInfluencePointRef& InfPoint);
	void SubtractObstacle(class UPathingObstacleInfo* Obstacle);
	void ResetObstacle(class UPathingObstacleInfo* Obstacle);
	void AddObstacle(class UPathingObstacleInfo* Obstacle);
	void InitPoints(int32_t NumPoints);
	void Update();
};

// Class GearboxFramework.GBXInfluenceInfo_Search
// 0x0018 (0x00A8 - 0x00C0)
class UGBXInfluenceInfo_Search : public UGBXInfluenceInfo
{
public:
	float                                              MinSearchScale;                                // 0x00A8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<int32_t>                              ClaimedPoints;                                 // 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXInfluenceInfo_Search");
		}

		return uClassPointer;
	};

	void ClearVisiblePointsInCone(const struct FInfluencePointRef& InfPoint, float ConeDist, float ConeAngle, struct FVector& ConeDir);
	int32_t GetBestPoint(float Radius, struct FVector& Location);
	void UnclaimPoint(int32_t PointIdx);
	void ClaimPoint(int32_t PointIdx);
	bool PointClaimed();
	void CheckClear();
	void Update();
};

// Class GearboxFramework.GBXMapInfo
// 0x0008 (0x0058 - 0x0060)
class UGBXMapInfo : public UMapInfo
{
public:
	class UGameTestDefinition*                         GameTestDefinition;                            // 0x0058 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXMapInfo");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXObjectList
// 0x0010 (0x0058 - 0x0068)
class UGBXObjectList : public UObject
{
public:
	class TArray<class UObject*>                       ObjectList;                                    // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXObjectList");
		}

		return uClassPointer;
	};

	void RemoveObjectsOfClass(class UClass* TheClass);
	class UObject* FindNextObjectByClass(class UClass* TheClass, int32_t& Index);
	class UObject* FindFirstObjectByClass(class UClass* TheClass, int32_t& Index);
	void RemoveObject(class UObject* TheObject);
	void AddObject(class UObject* TheObject);
};

// Class GearboxFramework.GBXPathConstraint
// 0x0070 (0x0058 - 0x00C8)
class UGBXPathConstraint : public UObject
{
public:
	uint32_t                                           bRequired : 1;                                 // 0x0058 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bRequiresTarget : 1;                           // 0x0058 (0x0004) [0x0000000000020003] [0x00000002] (CPF_Edit | CPF_Const | CPF_EditConst)
	uint32_t                                           bValid : 1;                                    // 0x0058 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bCanCheck : 1;                                 // 0x0058 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	float                                              Weight;                                        // 0x005C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class AActor*                                      Target;                                        // 0x0060 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AGearboxMind*                                Mind;                                          // 0x0068 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AGearboxPawn*                                Pawn;                                          // 0x0070 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     StartLoc;                                      // 0x0078 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     TargetLoc;                                     // 0x0084 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     PawnStartLoc;                                  // 0x0090 (0x000C) [0x0000000000002000] (CPF_Transient)
	class AGBXInfluenceMap*                            Map;                                           // 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UMindTargetInfo*                             TargetRec;                                     // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIAIInterface*                               AIInterface_Object;                            // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIAIInterface*                               AIInterface_Interface;                         // 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGearboxNavigationHandle*                    NavHandle;                                     // 0x00C0 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint");
		}

		return uClassPointer;
	};

	float GetPointScore(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
	bool Init(class UIAIInterface* AI, class AActor* InTarget, const struct FVector& InStartLoc);
	bool FirstInit(class UIAIInterface* AI);
	void NewPathInit();
};

// Class GearboxFramework.GBXPathConstraint_Boundary
// 0x0018 (0x00C8 - 0x00E0)
class UGBXPathConstraint_Boundary : public UGBXPathConstraint
{
public:
	EBoundaryType                                      Type;                                          // 0x00C8 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EBoundaryDistanceType                              DistanceType;                                  // 0x00C9 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            Nodes;                                         // 0x00CC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Units;                                         // 0x00D0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              NodeSize;                                      // 0x00D4 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            BoundaryInfoIdx;                               // 0x00D8 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Boundary");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
	bool Init(class UIAIInterface* AI, class AActor* InTarget, const struct FVector& InStartLoc);
};

// Class GearboxFramework.GBXPathConstraint_Danger
// 0x0018 (0x00C8 - 0x00E0)
class UGBXPathConstraint_Danger : public UGBXPathConstraint
{
public:
	struct FName                                       DangerName;                                    // 0x00C8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EDangerType                                        Type;                                          // 0x00D0 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EDangerRadiusType                                  RadiusType;                                    // 0x00D1 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            Nodes;                                         // 0x00D4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Units;                                         // 0x00D8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            DangerInfoIdx;                                 // 0x00DC (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Danger");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
	bool Init(class UIAIInterface* AI, class AActor* InTarget, const struct FVector& InStartLoc);
};

// Class GearboxFramework.GBXPathConstraint_Direct
// 0x0000 (0x00C8 - 0x00C8)
class UGBXPathConstraint_Direct : public UGBXPathConstraint
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Direct");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
};

// Class GearboxFramework.GBXPathConstraint_Distance
// 0x0018 (0x00C8 - 0x00E0)
class UGBXPathConstraint_Distance : public UGBXPathConstraint
{
public:
	struct FAIRange                                    MinDistance;                                   // 0x00C8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    MaxDistance;                                   // 0x00D0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinDistSq;                                     // 0x00D8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              MaxDistSq;                                     // 0x00DC (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Distance");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
	void NewPathInit();
};

// Class GearboxFramework.GBXPathConstraint_Height
// 0x0008 (0x00C8 - 0x00D0)
class UGBXPathConstraint_Height : public UGBXPathConstraint
{
public:
	EHeightRestriction                                 Restriction;                                   // 0x00C8 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Height;                                        // 0x00CC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Height");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
};

// Class GearboxFramework.GBXPathConstraint_LineOfSight
// 0x00A0 (0x00C8 - 0x0168)
class UGBXPathConstraint_LineOfSight : public UGBXPathConstraint
{
public:
	int32_t                                            LOSInfoIdx;                                    // 0x00C8 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ActorGroupIdx;                                 // 0x00CC (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            LOSGroupInfoIdx;                               // 0x00D0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     MyExtent;                                      // 0x00D4 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     TargetExtent;                                  // 0x00E0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FInfluencePointRef                          StartInfPoint;                                 // 0x00F0 (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FInfluencePointRef                          TargetInfPoint;                                // 0x0100 (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FInfluencePointRef                          CurrentInfPoint;                               // 0x0110 (0x0010) [0x0000000000002000] (CPF_Transient)
	class UExposureUtilityBase*                        ExposureUtility;                               // 0x0120 (0x0008) [0x0000000000002000] (CPF_Transient)
	ELineOfSight                                       LineOfSight;                                   // 0x0128 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ValidTime;                                     // 0x012C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bFullLineOfSight : 1;                          // 0x0130 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bLookToSelf : 1;                               // 0x0130 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bModifyArcEndLocWithNavMesh : 1;               // 0x0130 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bUsesDistance : 1;                             // 0x0130 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FTrajectoryData                             ArcOptions;                                    // 0x0134 (0x0024) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     StartOffset;                                   // 0x0158 (0x000C) [0x0000000000000000]               
	int32_t                                            EdgeDistance;                                  // 0x0164 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_LineOfSight");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXPathConstraint_MaxDistance
// 0x0008 (0x00C8 - 0x00D0)
class UGBXPathConstraint_MaxDistance : public UGBXPathConstraint
{
public:
	float                                              MaxDistance;                                   // 0x00C8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_MaxDistance");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
};

// Class GearboxFramework.GBXPathConstraint_Move
// 0x0018 (0x00C8 - 0x00E0)
class UGBXPathConstraint_Move : public UGBXPathConstraint
{
public:
	uint32_t                                           bUseTargetLoc : 1;                             // 0x00C8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAIRange                                    MoveRange;                                     // 0x00CC (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    TimeRange;                                     // 0x00D4 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MoveDistance;                                  // 0x00DC (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Move");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
	bool FirstInit(class UIAIInterface* AI);
};

// Class GearboxFramework.GBXPathConstraint_Occupancy
// 0x0028 (0x00C8 - 0x00F0)
class UGBXPathConstraint_Occupancy : public UGBXPathConstraint
{
public:
	EOccupancyType                                     Type;                                          // 0x00C8 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EOccupancyRadiusType                               RadiusType;                                    // 0x00C9 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            Nodes;                                         // 0x00CC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Units;                                         // 0x00D0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Condition;                                     // 0x00D8 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	int32_t                                            OccupancyInfoIdx;                              // 0x00E0 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UPathingObstacleInfo*                        Obstacle;                                      // 0x00E8 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Occupancy");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
	bool Init(class UIAIInterface* AI, class AActor* InTarget, const struct FVector& InStartLoc);
};

// Class GearboxFramework.GBXPathConstraint_Range
// 0x0018 (0x00C8 - 0x00E0)
class UGBXPathConstraint_Range : public UGBXPathConstraint
{
public:
	uint32_t                                           bCanPath : 1;                                  // 0x00C8 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bRangeIsOffsetByRadius : 1;                    // 0x00C8 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	struct FAIRange                                    Range;                                         // 0x00CC (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              AdjustedMaxSq;                                 // 0x00D4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              AdjustedMinSq;                                 // 0x00D8 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Range");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
	bool Init(class UIAIInterface* AI, class AActor* InTarget, const struct FVector& InStartLoc);
};

// Class GearboxFramework.GBXPathConstraint_Cluster
// 0x0030 (0x00E0 - 0x0110)
class UGBXPathConstraint_Cluster : public UGBXPathConstraint_Range
{
public:
	float                                              ClusterScale;                                  // 0x00E0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UTargetClusterDefinition*                    ClusterDefinition;                             // 0x00E8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MyMinDot;                                      // 0x00F0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     MyDirection;                                   // 0x00F4 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     BaseLocation;                                  // 0x0100 (0x000C) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Cluster");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXPathConstraint_Side
// 0x0028 (0x00C8 - 0x00F0)
class UGBXPathConstraint_Side : public UGBXPathConstraint
{
public:
	uint32_t                                           bUseTargetLoc : 1;                             // 0x00C8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bOnlyAffectsHumans : 1;                        // 0x00C8 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bIsTargetPlayerOwned : 1;                      // 0x00C8 (0x0004) [0x0000000000002002] [0x00000004] (CPF_Const | CPF_Transient)
	ESideConstraint                                    Side;                                          // 0x00CC (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ESideConstraintDir                                 Direction;                                     // 0x00CD (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinAngle;                                      // 0x00D0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxAngle;                                      // 0x00D4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CachedMaxDot;                                  // 0x00D8 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              CachedMinDot;                                  // 0x00DC (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FVector                                     RefFrameDir;                                   // 0x00E0 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Side");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
	bool Init(class UIAIInterface* AI, class AActor* InTarget, const struct FVector& InStartLoc);
	bool FirstInit(class UIAIInterface* AI);
};

// Class GearboxFramework.GBXPathConstraint_Territory
// 0x0018 (0x00C8 - 0x00E0)
class UGBXPathConstraint_Territory : public UGBXPathConstraint
{
public:
	ETerritoryConstraint                               Type;                                          // 0x00C8 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ETerritoryType                                     Area;                                          // 0x00C9 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxPercent;                                    // 0x00CC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinPercent;                                    // 0x00D0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bRadiusOnly : 1;                               // 0x00D4 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class UTerritoryComponent*                         Territory;                                     // 0x00D8 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXPathConstraint_Territory");
		}

		return uClassPointer;
	};

	bool ValidPoint(const struct FInfluencePointRef& InfPoint, struct FVector& TestLoc);
	bool Init(class UIAIInterface* AI, class AActor* InTarget, const struct FVector& InStartLoc);
	bool FirstInit(class UIAIInterface* AI);
};

// Class GearboxFramework.GBXTargetSearchDefinition
// 0x0040 (0x0058 - 0x0098)
class UGBXTargetSearchDefinition : public UGBXDefinition
{
public:
	struct FVector                                     SourceLocOffset;                               // 0x0058 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FRotator                                    SourceRotOffset;                               // 0x0064 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bZeroSourceRotPitch : 1;                       // 0x0070 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseDefaultTarget : 1;                         // 0x0070 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class UGBXTargetSearchFilter_Base*                 DefaultSearchFilter;                           // 0x0078 (0x0008) [0x000000000640000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_NoClear | CPF_EditInline)
	class TArray<class UGBXTargetSearchFilter*>        AdditionalSearchFilters;                       // 0x0080 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	class UGBXTargetSearchLimits*                      SearchLimits;                                  // 0x0090 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXTargetSearchDefinition");
		}

		return uClassPointer;
	};

	float GetHitNormalOffset();
	bool DoMultiSearch(class UIGBXTargetSearch* Source, class AActor* PreferredTarget, class UObject* optionalAdditionalContext, class TArray<class AActor*>& ExcludedActors, class TArray<struct FTargetSearchResult>& SearchResults, struct FVector& SourceLocationOverride, struct FRotator& SourceRotationOverride);
	bool DoSearch(class UIGBXTargetSearch* Source, class AActor* PreferredTarget, class UObject* optionalAdditionalContext, class TArray<class AActor*>& ExcludedActors, struct FTargetSearchResult& SearchResult, struct FVector& SourceLocationOverride, struct FRotator& SourceRotationOverride);
};

// Class GearboxFramework.GBXTargetSearchFilter
// 0x0000 (0x0058 - 0x0058)
class UGBXTargetSearchFilter : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXTargetSearchFilter");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXTargetSearchFilter_Base
// 0x0028 (0x0058 - 0x0080)
class UGBXTargetSearchFilter_Base : public UGBXTargetSearchFilter
{
public:
	uint32_t                                           bTargetWorld : 1;                              // 0x0058 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bTargetEnemies : 1;                            // 0x0058 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bTargetFriendlies : 1;                         // 0x0058 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bTargetNeutral : 1;                            // 0x0058 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bOnlyTargetable : 1;                           // 0x0058 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           bComplexCollision : 1;                         // 0x0058 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           bIgnoreBlockingMeshes : 1;                     // 0x0058 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           bSimulateBullet : 1;                           // 0x0058 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Condition;                                     // 0x0060 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UExpressionEvaluator*                        EnemiesCondition;                              // 0x0068 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UExpressionEvaluator*                        FriendliesCondition;                           // 0x0070 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UExpressionEvaluator*                        NeutralCondition;                              // 0x0078 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXTargetSearchFilter_Base");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXTargetSearchLimits
// 0x0028 (0x0058 - 0x0080)
class UGBXTargetSearchLimits : public UObject
{
public:
	float                                              HitNormalOffset;                               // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bLimitWorldSurfaceSlope : 1;                   // 0x005C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bSnapToGround : 1;                             // 0x005C (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bCheckLOSToGround : 1;                         // 0x005C (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bSnapToLedge : 1;                              // 0x005C (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	float                                              MaxWorldSurfaceSlope;                          // 0x0060 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CheckLOSToGroundOffset;                        // 0x0064 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              LedgeSearchHeight;                             // 0x0068 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinimumLedgeDepth;                             // 0x006C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              LedgeSearchOffset;                             // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DistanceFromLedgeEdge;                         // 0x0074 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              LedgeVerticalScanAngle;                        // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXTargetSearchLimits");
		}

		return uClassPointer;
	};

	static void SetDebuggingLifeTime(float Lifetime);
	static void RestoreDebuggingToDefaults();
	static bool IsDebuggingEnabled();
	static void ToggleDebugging();
};

// Class GearboxFramework.GBXTargetSearchLimits_Cone
// 0x0048 (0x0080 - 0x00C8)
class UGBXTargetSearchLimits_Cone : public UGBXTargetSearchLimits
{
public:
	struct FAttributeInitializationData                AngleFormula;                                  // 0x0080 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                LengthFormula;                                 // 0x00A0 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bCheckLineOfSight : 1;                         // 0x00C0 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bReturnNoTargetLimit : 1;                      // 0x00C0 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXTargetSearchLimits_Cone");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXTargetSearchLimits_Cylinder
// 0x0088 (0x0080 - 0x0108)
class UGBXTargetSearchLimits_Cylinder : public UGBXTargetSearchLimits
{
public:
	struct FAttributeInitializationData                RadiusFormula;                                 // 0x0080 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                TopHeightFormula;                              // 0x00A0 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                BottomHeightFormula;                           // 0x00C0 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ConeAngleFormula;                              // 0x00E0 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bCheckLineOfSight : 1;                         // 0x0100 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bCenterOnSourceActor : 1;                      // 0x0100 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXTargetSearchLimits_Cylinder");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXTargetSearchLimits_Sphere
// 0x0048 (0x0080 - 0x00C8)
class UGBXTargetSearchLimits_Sphere : public UGBXTargetSearchLimits
{
public:
	struct FAttributeInitializationData                RadiusFormula;                                 // 0x0080 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ConeAngleFormula;                              // 0x00A0 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bCheckLineOfSight : 1;                         // 0x00C0 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXTargetSearchLimits_Sphere");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXTargetSearchLimits_Trace
// 0x0050 (0x0080 - 0x00D0)
class UGBXTargetSearchLimits_Trace : public UGBXTargetSearchLimits
{
public:
	struct FAttributeInitializationData                DistanceFormula;                               // 0x0080 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     Extent;                                        // 0x00A0 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bCheckLineOfSight : 1;                         // 0x00AC (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bReturnNoTargetLimit : 1;                      // 0x00AC (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                SnapToGroundDistanceFormula;                   // 0x00B0 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXTargetSearchLimits_Trace");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxAccountEntitlement
// 0x0030 (0x0058 - 0x0088)
class UGearboxAccountEntitlement : public UObject
{
public:
	struct FName                                       Identifier;                                    // 0x0058 (0x0008) [0x0000000000000000]               
	int32_t                                            Id;                                            // 0x0060 (0x0004) [0x0000000000000000]               
	uint32_t                                           bConsumable : 1;                               // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ConsumableAmount;                              // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            Consumed;                                      // 0x006C (0x0004) [0x0000000000000000]               
	class FString                                      Payload;                                       // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LocallyConsumed;                               // 0x0080 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAccountEntitlement");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxAccountOffer
// 0x0038 (0x0058 - 0x0090)
class UGearboxAccountOffer : public UObject
{
public:
	class FString                                      TitleLocalized;                                // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DescriptionLocalized;                          // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Id;                                            // 0x0078 (0x0004) [0x0000000000000000]               
	uint32_t                                           bNotified : 1;                                 // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      DateUnlocked;                                  // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAccountOffer");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxAIMoveNode
// 0x00A0 (0x0240 - 0x02E0)
class AGearboxAIMoveNode : public AActor
{
public:
	struct FPointer                                    VfTable_IIGBXNavMeshSeed;                      // 0x0240 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIGBXNavMeshSpecialMove;               // 0x0248 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIGBXNavMeshBuildEvents;               // 0x0250 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IInterface_NavigationHandle;           // 0x0258 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bEnabled : 1;                                  // 0x0260 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bFuzzyArrival : 1;                             // 0x0260 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bOrientTowardNextNode : 1;                     // 0x0260 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bGroundNode : 1;                               // 0x0260 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bGroundNodeAutoDetect : 1;                     // 0x0260 (0x0004) [0x0000000000004003] [0x00000010] (CPF_Edit | CPF_Const | CPF_Config)
	uint32_t                                           bIntermediateNode : 1;                         // 0x0260 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           bFaceNodeDirection : 1;                        // 0x0260 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           bShowPathPreview : 1;                          // 0x0260 (0x0004) [0x0000000800000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           bOnlyOneNextNodeAllowed : 1;                   // 0x0260 (0x0004) [0x0000000000000002] [0x00000100] (CPF_Const)
	class TArray<struct FNodeData>                     NextNodes;                                     // 0x0268 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class AGearboxAIMoveNode*>            PreviousNodes;                                 // 0x0278 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	float                                              PawnArrivalRadius;                             // 0x0288 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        UserCondition;                                 // 0x0290 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	float                                              GroundDistance;                                // 0x0298 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              GroundNodeAutoDetectDistance;                  // 0x029C (0x0004) [0x0000000000004003] (CPF_Edit | CPF_Const | CPF_Config)
	float                                              HoldTime;                                      // 0x02A0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UBehaviorBase*>                 Behaviors;                                     // 0x02A8 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class USpecialMoveDefinition*>        SpecialMoves;                                  // 0x02B8 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class AActor*                                      CurrentUser;                                   // 0x02C8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UGearboxAIMoveNodeRenderComponent*           MoveNodeRenderComponent;                       // 0x02D0 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USpriteComponent*                            Sprite;                                        // 0x02D8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAIMoveNode");
		}

		return uClassPointer;
	};

	static void GetBrokenNodes(class TArray<class AGearboxAIMoveNode*>& OutNodes);
	bool GetError(class FString& OutError);
	void TimerHoldFinished();
	void SpecialMovesFinished();
	bool DoesPatrolPathExistToPoint(class AGearboxAIMoveNode* PatrolPoint);
	void GetAllLinkedNodes(class TArray<class AGearboxAIMoveNode*>& OutNodes);
	class AGearboxAIMoveNode* GetNextMoveNodeClosestToPoint(const struct FVector& TestPoint);
	class AGearboxAIMoveNode* GetPrevMoveNode(bool optionalBIgnoreEnabled, class AActor* optionalUser);
	class AGearboxAIMoveNode* GetNextMoveNode(bool optionalBIgnoreEnabled, class AActor* optionalUser);
	int32_t RemoveNode(class AGearboxAIMoveNode* OldNode);
	void AddNode(class AGearboxAIMoveNode* NewNode);
	void ClearLinks();
	void OnToggle(class USeqAct_Toggle* Action);
};

// Class GearboxFramework.AIDebugTarget
// 0x0048 (0x02E0 - 0x0328)
class AAIDebugTarget : public AGearboxAIMoveNode
{
public:
	struct FPointer                                    VfTable_IITargetable;                          // 0x02E0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIPathingObstacle;                     // 0x02E8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bInTargetMode : 1;                             // 0x02F0 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	class UAIComponent*                                AIComponent;                                   // 0x02F8 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USpriteComponent*                            GameSprite;                                    // 0x0300 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPawnAllegiance*                             ScriptedAllegiance;                            // 0x0308 (0x0008) [0x0000000000000002] (CPF_Const)   
	class USeqAct_AIScriptedMove*                      ScriptedMoveAction;                            // 0x0310 (0x0008) [0x000000000440000A] (CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class USeqAct_AIScriptedLook*                      ScriptedLookAction;                            // 0x0318 (0x0008) [0x000000000440000A] (CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UPathingObstacleInfo*                        PathObstacleInfo;                              // 0x0320 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIDebugTarget");
		}

		return uClassPointer;
	};

	class UPathingObstacleInfo* GetObstacleInfo(bool optionalBFillInfo);
	void SetObstacleInfo(class UPathingObstacleInfo* Info);
	class AActor* GetObstacleActor();
	float GetAudibility();
	float GetVisibility();
	void SetPatsy(class UITargetable* NewPatsy);
	class UITargetable* GetPatsy();
	bool IsBeingHealed();
	void SetBeingHealed(bool bNewBeingHealed);
	bool IsBoss();
	void Behavior_RegisterTargetable(bool bUnregister);
	bool IsTargetableProxy();
	EAutoAimProfile GetAutoAimProfile();
	float GetMagnetismRange();
	struct FVector GetMagnetismOrigin();
	bool IsAutoAimTarget();
	float GetTargetingModifier();
	bool IsValidHomingTarget();
	bool GetTargetableIsHidden();
	bool CanSnapZoom();
	void GetSnapRegion(struct FTargetSnapRegion& SnapRegion);
	struct FVector GetSnapLocation();
	void GetAuxiliaryTargetableLocations(class TArray<struct FVector>& AuxLocations);
	struct FVector GetTargetableLocation();
	void Behavior_SetCanTarget(EChangeStatus ChangeStatus);
	bool IsTargetable(int32_t optionalTargetFlags);
	int32_t ShowSelfAsTarget(bool bControllersOnly);
	EOpinion GetOpinion(class UObject* Other);
	void SetAllegiance(class UPawnAllegiance* NewAllegiance);
	class UPawnAllegiance* GetDefaultAllegiance();
	class UPawnAllegiance* GetObjectAllegianceW();
	bool IsSameAllegiance(class UObject* anObject);
	bool IsNeutral(class UObject* anObject);
	bool IsFriendly(class UObject* anObject);
	bool IsEnemy(class UObject* anObject);
	bool HideTargetInfoOnHud(class APawn* optionalHUDOwner);
	bool IsChampion();
	bool DoesTargetableTakeDamage();
	bool DisplayParentInfo();
	void SetInfoBarVisibility(bool bVisible);
	void GetHealthInfo(struct FHealthInfo& OutHealthInfo);
	void GetExpInfo(int32_t& ExpLevelValue);
	class AActor* GetTargetableActor();
};

// Class GearboxFramework.BodyAIMoveNode
// 0x00B0 (0x02E0 - 0x0390)
class ABodyAIMoveNode : public AGearboxAIMoveNode
{
public:
	struct FPointer                                    VfTable_IIBodyCompositionInstance;             // 0x02E0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_ISpecialMoveInterface;                 // 0x02E8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIBehaviorConsumer;                    // 0x02F0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIInstanceData;                        // 0x02F8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UBodyAIMoveNodeDefinition*                   BodyDef;                                       // 0x0300 (0x0008) [0x0000000000000000]               
	struct FInstanceData2                              InstanceState;                                 // 0x0308 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class USkeletalMeshComponent*                      SkelMesh;                                      // 0x0318 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FCompressedBodyState2                       ReplicatedInstanceDataState;                   // 0x0320 (0x0010) [0x0000000000002020] (CPF_Net | CPF_Transient)
	class UDynamicLightEnvironmentComponent*           DynamicLightEnvironment;                       // 0x0330 (0x0008) [0x0000000004282008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                // 0x0338 (0x0004) [0x0000000000000000]               
	struct FReplicatedBehaviorEvent                    ReplicatedBehaviorEvent;                       // 0x0340 (0x0010) [0x0000000100000020] (CPF_Net)     
	struct FReplicatedBehaviorConsumerState            ReplicatedBehaviorConsumerState;               // 0x0350 (0x000C) [0x0000000100000020] (CPF_Net)     
	class USpecialMoveComponent*                       SMComponent;                                   // 0x0360 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FReplicatedSpecialMoveData                  ReplicatedSMData;                              // 0x0368 (0x0028) [0x0000000100002020] (CPF_Net | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.BodyAIMoveNode");
		}

		return uClassPointer;
	};

	void eventServerSpecialMove_StopAny(bool optionalBClearQueue, bool optionalBInterrupted);
	void eventServerSpecialMove_Stop(class USpecialMoveDefinition* OldSMD, bool optionalBClearQueue, bool optionalBInterrupted);
	void eventServerSpecialMove_Queue(class USpecialMoveDefinition* NewSMD, float optionalPlayRateScale, float optionalDuration, const struct FName& optionalCallbackName, class UObject* optionalCallbackObject, class UObject* optionalData, bool optionalBSendCallbackAtEndOfSequence, bool optionalBStartOfSequence);
	void eventServerSpecialMove_Play(class USpecialMoveDefinition* NewSMD, float optionalPlayRateScale, float optionalDuration, const struct FName& optionalCallbackName, class UObject* optionalCallbackObject, class UObject* optionalData, bool optionalBSendCallbackAtEndOfSequence);
	void SetReplicatedSMData(bool optionalBInterrupted, struct FSpecialMoveData& NewSMData);
	ERootMotionRotationMode GetDefaultRootMotionRotationMode();
	ERootMotionMode GetDefaultRootMotionMode();
	class USkeletalMeshComponent* GetSkelMesh();
	class USpecialMoveComponent* GetSMComponent();
	class AActor* GetActor();
	void eventReplicatedEvent(const struct FName& VarName);
	struct FBehaviorConsumerHandle GetBehaviorConsumerHandle();
	void RegisterBehaviorConsumer();
	bool GetInstanceDataState(struct FInstanceData2& OutInstanceDataState);
	bool eventRemoveInstanceData(const struct FName& DataName);
	bool eventGetInstanceData(const struct FName& DataName, class TArray<struct FInstanceDataItem2>& InstanceData);
	bool eventSetInstanceData(const struct FInstanceDataItem2& InstanceData, bool optionalBAllowDuplicateNames);
	void CheckStartReplication();
	void InitBody();
};

// Class GearboxFramework.Perch
// 0x00E0 (0x0390 - 0x0470)
class APerch : public ABodyAIMoveNode
{
public:
	class UPerchTag*                                   PerchTag;                                      // 0x0390 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPerchBodyDefinition*                        PerchBody;                                     // 0x0398 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	float                                              UseRadius;                                     // 0x03A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UseHeight;                                     // 0x03A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCanBeSearched : 1;                            // 0x03A8 (0x0004) [0x0000000000020001] [0x00000001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bForceSearchable : 1;                          // 0x03A8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverrideIdleTime : 1;                         // 0x03A8 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverrideCooldownTime : 1;                     // 0x03A8 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverrideIndividualCooldownTime : 1;           // 0x03A8 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bUnreachable : 1;                              // 0x03A8 (0x0004) [0x0000000000002002] [0x00000020] (CPF_Const | CPF_Transient)
	struct FAIRange                                    IdleTimeOverride;                              // 0x03AC (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAIRange                                    CooldownTimeOverride;                          // 0x03B4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAIRange                                    IndividualCooldownTimeOverride;                // 0x03BC (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      ClaimedBy;                                     // 0x03C8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              CooldownTime;                                  // 0x03D0 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	EPerchState                                        CurrentState;                                  // 0x03D4 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FMap_Mirror                                 UserCooldownMap;                               // 0x03D8 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPerchAttachPieceData                       AttachPieceData;                               // 0x0428 (0x0048) [0x0000000100002020] (CPF_Net | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Perch");
		}

		return uClassPointer;
	};

	bool eventGetInstanceData(const struct FName& DataName, class TArray<struct FInstanceDataItem2>& InstanceData);
	void eventReplicatedEvent(const struct FName& VarName);
	static bool MatchActorToPerchPiece(class AActor* User, class AActor* MatchActor);
	static class UObject* GetPieceProjectileFromUser(class AActor* User);
	static bool DetachPieceFromUser(class AActor* User);
	void NotifyAttachDataReplicated();
	void IdleFinished();
	void PerchEnded(class AActor* User);
	void PerchStarted(class AActor* User, float InterpTime);
	void SetDynamicData(class UPerchTag* NewTag, float NewUseRadius, float NewUseHeight);
	void SetPerchState(class AActor* User, EPerchState NewState);
	EPerchState GetPerchState(class AActor* User);
	struct FVector GetUserLocation(class AActor* User);
	void MarkUnreachable();
	class UPerchBodyDefinition* GetBody();
	class UPerchTag* GetTag();
};

// Class GearboxFramework.Perch_Dynamic
// 0x0000 (0x0470 - 0x0470)
class APerch_Dynamic : public APerch
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Perch_Dynamic");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpawnPoint
// 0x0060 (0x0390 - 0x03F0)
class ASpawnPoint : public ABodyAIMoveNode
{
public:
	struct FPointer                                    VfTable_IISpawnPoint;                          // 0x0390 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class USpawnPointTag*                              SpawnPointTag;                                 // 0x0398 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpawnPointBodyDefinition*                   SpawnPointBody;                                // 0x03A0 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	EInitialActionType                                 InitialAction;                                 // 0x03A8 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ESpawnPointConstraint                              ConstraintType;                                // 0x03A9 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bAttachSpawnedToBase : 1;                      // 0x03AC (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bDisableAfterUse : 1;                          // 0x03AC (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bStretchySetManually : 1;                      // 0x03AC (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           TestVisibility : 1;                            // 0x03AC (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           TestFOV : 1;                                   // 0x03AC (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	struct FVector                                     StretchyOffset;                                // 0x03B0 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            InitialDestinationIndex;                       // 0x03BC (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<class USpawnedActorTagDefinition*>    TagsToUseWithConstraint;                       // 0x03C0 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<class UBehaviorBase*>                 OnSpawnCustomizations;                         // 0x03D0 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	float                                              MinSpawnDistance;                              // 0x03E0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class AActor*                                      DynamicStretchyPoint;                          // 0x03E8 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnPoint");
		}

		return uClassPointer;
	};

	struct FRotator GetSpawnRotation();
	struct FVector GetSpawnLocation();
	bool CanSpawnFromFactory(class USpawnFactory* Factory, int32_t GameStage, int32_t AwesomeLevel);
	void ActorSpawned(class AActor* SpawnedActor);
	void RandomizeInitialDestinations();
	class AActor* GetInitialDestination();
	EInitialActionType GetInitialAction();
	void StartStretchy();
	void SpawnEnded(class AActor* User);
	void SpawnStarted(class AActor* User, float StretchyStartTime);
};

// Class GearboxFramework.SpawnPoint_Dynamic
// 0x0010 (0x03F0 - 0x0400)
class ASpawnPoint_Dynamic : public ASpawnPoint
{
public:
	struct FName                                       DynamicPointName;                              // 0x03F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bSaveAsInstanceDataOnBase : 1;                 // 0x03F8 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnPoint_Dynamic");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.NavAnimNode
// 0x0030 (0x02E0 - 0x0310)
class ANavAnimNode : public AGearboxAIMoveNode
{
public:
	uint32_t                                           bStretchySetManually : 1;                      // 0x02E0 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FVector                                     StretchyOffset;                                // 0x02E4 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UNavAnimTag*                                 NavAnimTag;                                    // 0x02F0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UNavAnimConnection*                          CurrentConnection;                             // 0x02F8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UNavAnimConnection*                          ForwardConnection;                             // 0x0300 (0x0008) [0x000000000440000A] (CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UNavAnimConnection*                          ReverseConnection;                             // 0x0308 (0x0008) [0x000000000440000A] (CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.NavAnimNode");
		}

		return uClassPointer;
	};

	void StartStretchy();
	void NavAnimEnded(class AActor* User);
	void NavAnimStarted(class UNavAnimConnection* Connection, class AActor* User, float InterpTime, float StretchyStartTime);
};

// Class GearboxFramework.PhysicsJumpNode
// 0x0040 (0x02E0 - 0x0320)
class APhysicsJumpNode : public AGearboxAIMoveNode
{
public:
	class TArray<class UPhysicsJumpConnection*>        Connections;                                   // 0x02E0 (0x0010) [0x0000000004420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline)
	class UPhysicsJumpTag*                             PhysicsJumpTag;                                // 0x02F0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              JumpRadius;                                    // 0x02F8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bAutoAdjust : 1;                               // 0x02FC (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bOverrideGravity : 1;                          // 0x02FC (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bWaitDelayOverride : 1;                        // 0x02FC (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	float                                              WaitingCostMultiplier;                         // 0x0300 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              GravityOverride;                               // 0x0304 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              WaitDelayOverride;                             // 0x0308 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FPhysicsJumpUserState>         UserQueue;                                     // 0x0310 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PhysicsJumpNode");
		}

		return uClassPointer;
	};

	void CheckWaitingUsers();
	EPhysicsJumpState GetJumpState(class AActor* User);
	bool ShouldPlayLand(class AActor* User);
	void JumpEnded(class AActor* User);
	void PlayLand(class AActor* User);
	float PlayIdle(class AActor* User);
	void PlayLaunch(class UPhysicsJumpConnection* Connection, class AActor* User);
};

// Class GearboxFramework.GearboxAIMoveNodeRenderComponent
// 0x0000 (0x0360 - 0x0360)
class UGearboxAIMoveNodeRenderComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAIMoveNodeRenderComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxAIUtility
// 0x00F8 (0x0058 - 0x0150)
class UGearboxAIUtility : public UObject
{
public:
	EAIUtilitySuspendStatus                            SuspendStatus;                                 // 0x0058 (0x0001) [0x0000000000000000]               
	float                                              NavMeshCheckRate;                              // 0x005C (0x0004) [0x0000000000000000]               
	int32_t                                            PathIndex;                                     // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxPathCost;                                   // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxTimePerFrame;                               // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              AveragePathTime;                               // 0x006C (0x0004) [0x0000000000000000]               
	float                                              AveragePathTimeLimit;                          // 0x0070 (0x0004) [0x0000000000000000]               
	class TArray<struct FPathingEntity>                PathingEntities;                               // 0x0078 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FPathingEntity>                RegisteredPathingEntities;                     // 0x0088 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	uint32_t                                           bAvoidanceDebug : 1;                           // 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAvoidanceActive : 1;                          // 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUseAIRelevance : 1;                           // 0x0098 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bForceAIRelevance : 1;                         // 0x0098 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	struct FAvoidData                                  AvoidData;                                     // 0x00A0 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UPathingObstacleInfo*>          RegisteredObstacles;                           // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LineOfSightIdx;                                // 0x00E0 (0x0004) [0x0000000000000000]               
	class TArray<class UPathingObstacleInfo*>          LineOfSightObstacles;                          // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UAIComponent*>                  AIComponents;                                  // 0x00F8 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UAIComponent*>                  RegisteredAIComponents;                        // 0x0108 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UWeaponUseComponent*>           WeaponComponents;                              // 0x0118 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UTargetingComponent*>           TargetingComponents;                           // 0x0128 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class APerch*>                        Perches;                                       // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            RelevancyCheckIndex;                           // 0x0148 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            AllowUpdateWhilePausedTickCount;               // 0x014C (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAIUtility");
		}

		return uClassPointer;
	};

	void AIUpdateWhilePaused(int32_t optionalTickCount);
	void ShowAIRelevance(class AHUD* HUD, float& out_YL, float& out_YPos);
	void ShowMoveNodeErrors(class AHUD* HUD);
	void ShowPathingEntityErrors(class AHUD* HUD);
	void eventDisplayPathErrors(class AHUD* HUD);
	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	bool IsDebugObstacle(class AActor* Obstacle);
	static bool AIRelevanceActive();
	static void ToggleForceAIToBeIrrelevant();
	static void ToggleAIRelevance();
	struct FGBXNavMeshPolyRef GetNearestNavMeshPoly(class AActor* Obstacle);
	class UPathingObstacleInfo* GetObstacleInfo(class AActor* Obstacle);
	struct FBasedPosition GetNearestNavMeshLoc(class AActor* Obstacle);
	float GetVertDistToNavMesh(class AActor* Obstacle);
	float GetDistToNavMesh(class AActor* Obstacle);
	bool IsAboveNavMesh(class AActor* Obstacle);
	void ClearNavMeshInfo(class AActor* Obstacle);
	void UnregisterAIComponent(class UAIComponent* InAIComp);
	void RegisterAIComponent(class UAIComponent* InAIComp);
	bool IsRegisteredObstacle(class AActor* Obstacle);
	void UnRegisterObstacle(class AActor* Obstacle);
	void RegisterObstacle(class AActor* Obstacle);
};

// Class GearboxFramework.GearboxAkComponent
// 0x00A0 (0x0270 - 0x0310)
class UGearboxAkComponent : public UAkComponent
{
public:
	class UAkEvent*                                    OnAttachEvent;                                 // 0x0270 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UAkEvent*>                      OnAttachEvents;                                // 0x0278 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bStopOnAttachEventsWhenOwnerDestroyed : 1;     // 0x0288 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPlayedOnAttachEvents : 1;                     // 0x0288 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bPlayedOnDetachEvents : 1;                     // 0x0288 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bAudioFirstPerson : 1;                         // 0x0288 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bStopContinuousFoleyUpdate : 1;                // 0x0288 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	class TArray<class UAkEvent*>                      OnDetachEvents;                                // 0x0290 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UAkRtpc*                                     FlightAccelerationRtpc;                        // 0x02A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkRtpc*                                     FlightVelocityRtpc;                            // 0x02A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DistanceRTPCRefCount;                          // 0x02B0 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SpeedRTPCRefCount;                             // 0x02B4 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ApproachSpeedRTPCRefCount;                     // 0x02B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ComponentRelativeVelocityRefCount;             // 0x02BC (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            ElevationRTPCRefCount;                         // 0x02C0 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            AzimuthRTPCRefCount;                           // 0x02C4 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UIAudioParametersProvider*                   OwnerAudioParametersProvider_Object;           // 0x02C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIAudioParametersProvider*                   OwnerAudioParametersProvider_Interface;        // 0x02D0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIAkMixControlProvider*                      OwnerMixControlProvider_Object;                // 0x02D8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIAkMixControlProvider*                      OwnerMixControlProvider_Interface;             // 0x02E0 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     CustomVelocity;                                // 0x02E8 (0x000C) [0x0000000000000000]               
	float                                              PreviousFlightVelocity;                        // 0x02F4 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     PreviousRelativeLocation;                      // 0x02F8 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              RtpcCameraModePerspectiveOverride;             // 0x0304 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              RtpcCharacterRelativeVerticalAirSpeed;         // 0x0308 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAkComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxAnimNodeAimOffset
// 0x0040 (0x01D0 - 0x0210)
class UGearboxAnimNodeAimOffset : public UAnimNodeAimOffset
{
public:
	float                                              YawRange;                                      // 0x01D0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PitchRangeUp;                                  // 0x01D4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PitchRangeDown;                                // 0x01D8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       PivotOverrideSocket;                           // 0x01DC (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bArbitraryOrientation : 1;                     // 0x01E4 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseSliderAimOffset : 1;                       // 0x01E4 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class APawn*                                       PawnOwner;                                     // 0x01E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UStanceComponent*                            StanceComponent;                               // 0x01F0 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector2D                                   SmoothedAim;                                   // 0x01F8 (0x0008) [0x0000000000000000]               
	float                                              SmoothingRate;                                 // 0x0200 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                           UnknownData00[0xC];                            // 0x0204 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAnimNodeAimOffset");
		}

		return uClassPointer;
	};

	bool GetPivotPoint(struct FVector& PivotPoint);
	struct FVector2D CalcAim();
};

// Class GearboxFramework.GearboxBehaviorFunctionLibrary
// 0x0000 (0x0058 - 0x0058)
class UGearboxBehaviorFunctionLibrary : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxBehaviorFunctionLibrary");
		}

		return uClassPointer;
	};

	static struct FVector Direction(const struct FVector& A, const struct FVector& B);
	static struct FVector WorldToLocalVector(const struct FVector& WorldDir, const struct FVector& Forward);
	static class UObject* ObjectListElement(int32_t Index, class TArray<class UObject*>& List);
	static struct FVector GetScale3D(class UObject* A);
	static float GetScale(class UObject* A);
	static class TArray<class UObject*> SortDistance(const struct FVector& Location, class TArray<class UObject*>& A);
	static class UObject* Nearest(const struct FVector& Location, class TArray<class UObject*>& A);
	static class UObject* Farthest(const struct FVector& Location, class TArray<class UObject*>& A);
	static class TArray<class UObject*> NearFilter(const struct FVector& Location, float Distance, class TArray<class UObject*>& A);
	static class TArray<class UObject*> FarFilter(const struct FVector& Location, float Distance, class TArray<class UObject*>& A);
	static class TArray<class UObject*> AllegianceFilter(class UObject* AllegianceInfo, class TArray<class UObject*>& A);
	static class TArray<class UObject*> DamageableFilter(class TArray<class UObject*>& A);
	static class TArray<class UObject*> FriendlyFilter(class UObject* AllegianceInfo, class TArray<class UObject*>& A);
	static class TArray<class UObject*> EnemyFilter(class UObject* AllegianceInfo, class TArray<class UObject*>& A);
	static class TArray<class UObject*> ItemFilter(class TArray<class UObject*>& A);
	static class TArray<class UObject*> ProjectileFilter(class TArray<class UObject*>& A);
	static class TArray<class UObject*> PlayerFilter(class TArray<class UObject*>& A);
	static bool IsPlayer(class UObject* A);
	static bool AllDiff_Vect(class TArray<struct FVector>& A);
	static bool AllSame_Vect(class TArray<struct FVector>& A);
	static bool AllDiff_Float(class TArray<float>& A);
	static bool AllSame_Float(class TArray<float>& A);
	static bool AllDiff_Int(class TArray<int32_t>& A);
	static bool AllSame_Int(class TArray<int32_t>& A);
	static bool AllDiff_Object(class TArray<class UObject*>& A);
	static bool AllSame_Object(class TArray<class UObject*>& A);
	static bool AllDiff_Bool(class TArray<bool>& A);
	static bool AllSame_Bool(class TArray<bool>& A);
	static bool AnyFalse(class TArray<bool>& A);
	static bool AnyTrue(class TArray<bool>& A);
	static bool AllFalse(class TArray<bool>& A);
	static bool AllTrue(class TArray<bool>& A);
	static int32_t BoolToIntGBX(bool A);
	static float IntToFloatGBX(int32_t A);
	static float BoolToFloatGBX(bool A);
	static struct FVector ProductVector(class TArray<struct FVector>& A);
	static int32_t ProductInt(class TArray<int32_t>& A);
	static float ProductFloat(class TArray<float>& A);
	static float SumFloat(class TArray<float>& A);
	static int32_t SumInt(class TArray<int32_t>& A);
	static struct FVector SumVector(class TArray<struct FVector>& A);
	static struct FVector MakeVector3(float X, float Y, float Z);
	static struct FVector MakeVector1(float XYZ);
	static float FltMultiMax(class TArray<float>& Options);
	static float FltMultiMin(class TArray<float>& Options);
	static int32_t IntMultiMax(class TArray<int32_t>& Options);
	static int32_t IntMultiMin(class TArray<int32_t>& Options);
	static float VectorZ(const struct FVector& A);
	static float VectorY(const struct FVector& A);
	static float VectorX(const struct FVector& A);
	static int32_t IntRand(int32_t Min, int32_t Max);
	static int32_t IntAvg(class TArray<int32_t>& A);
	static int32_t IntPow(int32_t Value, int32_t Exponent);
	static bool IWithinRange(int32_t A, int32_t Min, int32_t Max);
	static bool FWithinRange(float A, float Min, float Max);
	static class TArray<class UObject*> FilterSanitize_Object(class TArray<class UObject*>& Objs);
	static class AActor* GetOwner(class AActor* A);
	static class TArray<class AActor*> GetAttachedActors(class AActor* A);
	static void SetBase(class AActor* A, class AActor* Input);
	static class AActor* GetBase(class AActor* A);
	static bool IntNonzero(int32_t A);
	static bool IntZero(int32_t A);
	static bool IsInvalid(class UObject* A);
	static bool IsValid(class UObject* A);
	static bool IsNearby(const struct FVector& A, const struct FVector& B, float Dist);
	static float Distance(const struct FVector& A, const struct FVector& B);
	static float ActorPointDistance(class UObject* A, const struct FVector& B);
	static float ActorDistance(class UObject* A, class UObject* B);
	static bool ActorNearby(class UObject* A, class UObject* B, float Dist);
};

// Class GearboxFramework.GearboxPlayerController
// 0x00E8 (0x0628 - 0x0710)
class AGearboxPlayerController : public APlayerController
{
public:
	struct FPointer                                    VfTable_IIAkEnvironmentalEffectProvider;       // 0x0628 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FGearboxViewShakeInfo                       BaseDamageShake;                               // 0x0630 (0x0044) [0x0000000000000000]               
	class UAIDebugCamera*                              AIDebugCam;                                    // 0x0678 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AGearboxPawn*                                PreviousDebugPawn;                             // 0x0680 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UClass*                                      AIDebugCamClass;                               // 0x0688 (0x0008) [0x0000000000000000]               
	float                                              DamageShakeMagnitudeMultiplier;                // 0x0690 (0x0004) [0x8000000000002000] (CPF_Transient)
	float                                              DamageShakeMagnitudeMultiplierBaseValue;       // 0x0694 (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            DamageShakeMagnitudeMultiplierModifierStack;   // 0x0698 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	float                                              DamageShakeTimeMultiplier;                     // 0x06A8 (0x0004) [0x8000000000002000] (CPF_Transient)
	float                                              DamageShakeTimeMultiplierBaseValue;            // 0x06AC (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            DamageShakeTimeMultiplierModifierStack;        // 0x06B0 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FGuid                                       PlaySessionGuid;                               // 0x06C0 (0x0010) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SessionBundleNumber;                           // 0x06D0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ViewLeadingTranslation;                        // 0x06D4 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FQuat                                       ViewLeadingRotation;                           // 0x06E0 (0x0010) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bIsRegisteredEnvironmentalEffectProvider : 1;  // 0x06F0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FEnvironmentalEffectInfo                    ActiveAudioEffect;                             // 0x06F4 (0x000C) [0x0000002000002020] (CPF_Net | CPF_Transient)
	class TArray<struct FEnvironmentalEffectInfo>      AppliedAudioEffects;                           // 0x0700 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxPlayerController");
		}

		return uClassPointer;
	};

	void LookAt(const struct FVector& LookAtLocation);
	void ShowSparkID();
	bool ShouldCheckRemoteControlCheckbox(uint8_t CheckBoxName, class AHUD* optionalHUD);
	void DisplayDebugSpark(class AHUD* HUD, float& out_YL, float& out_YPos);
	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	void AITree();
	void AIToggleLineOfSight();
	void AIToggleAwareness();
	void AITogglePaths();
	void AIToggleTargetViewCones();
	void AIToggleCombat();
	void AIToggleFlags();
	void AIDebugNextSnapshot();
	void AIDebugPrevSnapshot();
	void ainext();
	void aiprev();
	void AIDebugSetPawn(class AGearboxPawn* NewPawn);
	void AIDebugSetPawnByName(const struct FName& NewPawnName);
	void debugpawn();
	void aisetp(const struct FName& NewPawnName);
	void PawnDied(class APawn* P);
	void NotifyGameUnPaused();
	void NotifyGamePaused();
	struct FPlatformUserId GetMyUserId();
	void eventClientKeepPlayingLoadingMovie();
	void eventSpawnPlayerCamera();
	void eventInitInputSystem();
	void NoTargetAll();
	void NoTarget();
	void Possess(class APawn* aPawn, bool bVehicleTransition);
	void DontTarget(bool bModeFlag);
	void ClientConsoleCommand(const class FString& Command);
	bool IsPlayerAllowingActiveMoment();
	bool IsActiveMomentRunning();
	void UpdateViewLeadingDelta(struct FVector& CameraTranslation, struct FQuat& CameraRotation);
	bool UpdateViewModelTransform(struct FVector& ViewModelLocation, struct FQuat& ViewModelRotation);
	void StopViewShaking();
	void OnCameraShake(class UGearboxSeqAct_CameraShake* ShakeAction);
	void ShakeView(const struct FGearboxViewShakeInfo& NewViewShake);
	void ClientDamageShake(int32_t Damage);
	void ConsoleEcho(const class FString& Text, bool optionalBLogOutput);
	void Initialize();
	void PostBeginPlay();
	void GenerateNewSessionGuid();
	void RemoveAudioEffect(const struct FEnvironmentalEffectInfo& EffectInfo);
	void ApplyAudioEffect(const struct FEnvironmentalEffectInfo& EffectInfo);
};

// Class GearboxFramework.GearboxCheatManager
// 0x0000 (0x0088 - 0x0088)
class UGearboxCheatManager : public UCheatManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxCheatManager");
		}

		return uClassPointer;
	};

	void AIHoldTypes();
	void AIHoldReleaseAll(const struct FName& HoldType, const struct FName& optionalReason);
	void AIHoldAll(const struct FName& HoldType, const struct FName& optionalReason);
	void AIHoldRelease(const struct FName& HoldType, const struct FName& optionalReason);
	void AIHold(const struct FName& HoldType, const struct FName& optionalReason);
	void AIOpenAITree();
	void AIOpenAIDef();
	void AIOpenTargetingDef();
	void AIOpenBalanceDef();
	void AIOpenSpawnDef();
	void AIOpenPawnDef();
	void AISyncAIDef();
	void AISyncTargetingDef();
	void AISyncBalanceDef();
	void AISyncSpawnDef();
	void AISyncPawnDef();
	void AIShowActions();
	void AISetDisabledActions(const class FString& optionalActionTagNames);
	void AISetEnabledActions(const class FString& optionalActionTagNames);
	void AIDisableActions(const class FString& optionalActionTagNames);
	void AIEnableActions(const class FString& optionalActionTagNames);
	void DebugAIBreadCrumbs();
	void DebugAwareness();
	void ToggleAISight();
	void YUNoCover();
	void YUNoPerch(float optionalCheckRadius);
	void ResetFeatureClass(class UClass* FeatureClass);
	void DebugTargetClusters(const struct FName& optionalClusterName);
	void DebugTerritory();
	void PrintGameObjectPools();
	void AIScriptedTarget();
	void AIScriptedLook();
	void AIScriptedMove();
	void AIScriptedClear();
	void SpecialMoveSetTime(float NewTime);
	void AIClearInfluenceMaps();
	void AIUpdateWhilePaused(int32_t optionalTickCount);
	void GbxAnimDebug();
	void AIConstraintClear();
	void AIConstraintCurr();
	void AIConstraintPrev();
	void AIConstraintNext();
	void DebugArcLOS();
	void DebugHumanRotation();
	void DebugAIRotation();
	void DebugForceUncloak();
	void DebugForceCloak();
};

// Class GearboxFramework.GearboxData
// 0x0038 (0x0058 - 0x0090)
class UGearboxData : public UObject
{
public:
	class FString                                      AuthToken;                                     // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ExpiredAuthToken;                              // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bAuthenticated : 1;                            // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bServiceFailure : 1;                           // 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDiscoveryFailure : 1;                         // 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	class TArray<class USparkServiceConfiguration*>    Services;                                      // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxData");
		}

		return uClassPointer;
	};

	bool eventHasValidShiftAccount();
	void ProcessArchwayVerification(struct FArchwayResult& Archway);
	bool CanGetTicket();
	static class FString EscapeJson(const class FString& Input);
	void ReplaceServices(class TArray<struct FServiceResult>& NewServices);
	class USparkServiceConfiguration* eventGetService(const struct FName& ServiceName);
	void Clear();
};

// Class GearboxFramework.GearboxAccountData
// 0x0168 (0x0090 - 0x01F8)
class UGearboxAccountData : public UGearboxData
{
public:
	uint32_t                                           bSignedIn : 1;                                 // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSignInInProgress : 1;                         // 0x0090 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bSignUpInProgress : 1;                         // 0x0090 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bResetPasswordInProgress : 1;                  // 0x0090 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bRedeemCodeInProgress : 1;                     // 0x0090 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bConsumeEntitlementInProgress : 1;             // 0x0090 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	uint32_t                                           bConsumeEntitlementsInProgress : 1;            // 0x0090 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	uint32_t                                           bMarkOffersNotifiedInProgress : 1;             // 0x0090 (0x0004) [0x0000000000002000] [0x00000080] (CPF_Transient)
	uint32_t                                           bQueued : 1;                                   // 0x0090 (0x0004) [0x0000000000002000] [0x00000100] (CPF_Transient)
	uint32_t                                           bQueuedBeforeReauth : 1;                       // 0x0090 (0x0004) [0x0000000000002000] [0x00000200] (CPF_Transient)
	uint32_t                                           bSuspended : 1;                                // 0x0090 (0x0004) [0x0000000000002000] [0x00000400] (CPF_Transient)
	uint32_t                                           bWarning : 1;                                  // 0x0090 (0x0004) [0x0000000000002000] [0x00000800] (CPF_Transient)
	uint32_t                                           bBanned : 1;                                   // 0x0090 (0x0004) [0x0000000000002000] [0x00001000] (CPF_Transient)
	struct FPlatformUserId                             UserId;                                        // 0x0094 (0x0008) [0x0000000000000000]               
	struct FDouble                                     NextEntitlementUpdateTime;                     // 0x00A0 (0x0008) [0x0000000000000000]               
	class TArray<class UGearboxAccountEntitlement*>    Entitlements;                                  // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UGearboxAccountOffer*>          Offers;                                        // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               EntitlementsUpdatedDelegates;                  // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               QueueUpdatedDelegates;                         // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               QueueStatusUpdatedDelegates;                   // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CurrentConsumeCount;                           // 0x00F8 (0x0004) [0x0000000000000000]               
	class UGearboxAccountEntitlement*                  CurrentEntitlement;                            // 0x0100 (0x0008) [0x0000000000000000]               
	class TArray<class UGearboxAccountEntitlement*>    CurrentBulkConsumeEntitlements;                // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              CurrentBulkConsumeCounts;                      // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            QueueStatus;                                   // 0x0128 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SignAgreements;                                // 0x012C (0x0004) [0x0000000000002000] (CPF_Transient)
	ENATType                                           NATType;                                       // 0x0130 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              NextQueueStatusUpdateTime;                     // 0x0134 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DefaultQueueStatusPollTime;                    // 0x0138 (0x0004) [0x0000000000000000]               
	class FString                                      SupportId;                                     // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SuspensionEndDate;                             // 0x0150 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      BanEndDate;                                    // 0x0160 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      UserMessage;                                   // 0x0170 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FRedeemCodeRequest                          PendingRedeemCodeRequest;                      // 0x0180 (0x0028) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSignInGearboxAccount__Delegate;            // 0x01A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSignUpGearboxAccount__Delegate;            // 0x01B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnResetPasswordGearboxAccount__Delegate;     // 0x01C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCodeRedeemed__Delegate;                    // 0x01D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEntitlementConsumed__Delegate;             // 0x01E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAccountData");
		}

		return uClassPointer;
	};

	void HandleQueueStatusResponse(struct FSparkResult& Result);
	bool eventHasValidShiftAccount();
	void ProcessArchwayVerification(struct FArchwayResult& Archway);
	bool GetPlatformTicket(const struct FScriptDelegate& GetPlatformTicketCompleteDelegate);
	bool CanGetTicket();
	void EstablishPlatformId(const struct FPlatformUserId& NewUserId);
	void HandleOffersNotifiedResponse(struct FSparkResult& Result);
	void HandleBulkEntitlementsConsumedResponse(struct FSparkResult& Result);
	void HandleEntitlementConsumedResponse(struct FSparkResult& Result);
	void HandleCodeRedeemedResponse(struct FSparkResult& Result);
	void HandleResetPasswordResponse(struct FSparkResult& Result);
	void HandleSignUpResponse(struct FSparkResult& Result);
	void HandleSignInResponse(struct FSparkResult& Result);
	void MarkOffersNotified();
	bool LocallyConsumeEntitlementWithCount(const struct FName& EntitlementName, int32_t NumToConsume);
	void eventConsumeEntitlementsWithCounts(const class TArray<class UGearboxAccountEntitlement*>& EntitlementsToConsume, const class TArray<int32_t>& Counts, const struct FScriptDelegate& EntitlementConsumedDelegate);
	void ConsumeEntitlementWithCount(const struct FName& EntitlementName, int32_t Count, const struct FScriptDelegate& EntitlementConsumedDelegate);
	void RedeemCode(const class FString& Code, const struct FScriptDelegate& CodeRedeemedDelegate);
	void ResetPasswordGearboxAccount(const class FString& Email, const struct FScriptDelegate& ResetPasswordDelegate);
	void SignUpGearboxAccount(const class FString& Email, const class FString& Password, const class FString& PasswordConfirm, const class FString& AgeString, const struct FScriptDelegate& SignUpDelegate);
	void SignInGearboxAccount(const class FString& Email, const class FString& Password, const struct FScriptDelegate& SignInDelegate);
	void OnEntitlementConsumed(EEntitlementConsumedResult ConsumeResult);
	void OnCodeRedeemed(ECodeRedeemedResult RedeemResult);
	void OnResetPasswordGearboxAccount(EResetPasswordResult ResetResult);
	void OnSignUpGearboxAccount(ESignUpResult SignUpResult);
	void OnSignInGearboxAccount(ESignInResult SignInResult);
	int32_t CountEntitlement(const struct FName& EntitlementName, bool optionalBIgnoreLocallyConsumed);
	void LocalMarkOffersNotified();
	class TArray<class UGearboxAccountOffer*> GetUnnotifiedOffers();
	class UGearboxAccountEntitlement* GetEntitlementWithName(const struct FName& EntitlementName);
	class UGearboxAccountEntitlement* GetEntitlementWithId(int32_t Id);
	bool HasEntitlement(const struct FName& EntitlementName, bool optionalBIgnoreLocallyConsumed);
	void RemoveEntitlement(class UGearboxAccountEntitlement* Entitlement);
	void ReplaceEntitlements(class TArray<struct FEntitlementResult>& NewEntitlements, class TArray<struct FOfferResult>& NewOffers);
	void HandleReloadEntitlementsResponse(struct FSparkResult& Result);
	bool ReloadEntitlements();
	void ResetEntitlementUpdateTimer();
	bool CanReloadEntitlements();
	void TriggerEntitlementsUpdatedDelegates();
	void ClearEntitlementsUpdatedDelegate(const struct FScriptDelegate& EntitlementsUpdatedDelegate);
	void AddEntitlementsUpdatedDelegate(const struct FScriptDelegate& EntitlementsUpdatedDelegate);
	void Clear();
};

// Class GearboxFramework.GearboxServerData
// 0x0000 (0x0090 - 0x0090)
class UGearboxServerData : public UGearboxData
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxServerData");
		}

		return uClassPointer;
	};

	void ProcessArchwayVerification(struct FArchwayResult& Archway);
	bool GetServerTicket(const struct FScriptDelegate& GetServerTicketCompleteDelegate);
	bool CanGetTicket();
};

// Class GearboxFramework.GearboxDialogGlobalsDefinition
// 0x0018 (0x0058 - 0x0070)
class UGearboxDialogGlobalsDefinition : public UGBXDefinition
{
public:
	float                                              NearRadius;                                    // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RegionRadius;                                  // 0x005C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              AcceptableQuietTimeLocationError;              // 0x0060 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MinStartTimeRequiringSeek;                     // 0x0064 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    ConfigurationErrorEvent;                       // 0x0068 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogGlobalsDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogNameTag
// 0x0020 (0x0058 - 0x0078)
class UGearboxDialogNameTag : public UGBXDefinition
{
public:
	class FString                                      DisplayName;                                   // 0x0058 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UGearboxDialogNameTag*                       ParentTag;                                     // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDialogTalkerGroup*                          Group;                                         // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogNameTag");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxEditorNode
// 0x0040 (0x0058 - 0x0098)
class UGearboxEditorNode : public UObject
{
public:
	ENodeType                                          Type;                                          // 0x0058 (0x0001) [0x0000000000000000]               
	class TArray<struct FOutputLink>                   OutputLinks;                                   // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UGearboxEditorNode*>            InputLinks;                                    // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FVariableLink>                 VariableLinks;                                 // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bAllowInputs : 1;                              // 0x0090 (0x0004) [0x0000000800000000] [0x00000001] 
	uint32_t                                           bAllowOutputs : 1;                             // 0x0090 (0x0004) [0x0000000800000000] [0x00000002] 
	uint32_t                                           bAllowVariables : 1;                           // 0x0090 (0x0004) [0x0000000800000000] [0x00000004] 
	uint32_t                                           bAllowMovement : 1;                            // 0x0090 (0x0004) [0x0000000800000000] [0x00000008] 
	uint32_t                                           bAllowMultipleInputs : 1;                      // 0x0090 (0x0004) [0x0000000800000000] [0x00000010] 
	uint32_t                                           bAllowMultipleOutputs : 1;                     // 0x0090 (0x0004) [0x0000000800000000] [0x00000020] 
	uint32_t                                           bAllowMultipleVariables : 1;                   // 0x0090 (0x0004) [0x0000000800000000] [0x00000040] 
	float                                              SliderPosition;                                // 0x0094 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxEditorNode");
		}

		return uClassPointer;
	};

	bool IsChild(class UGearboxEditorNode* TestNode);
};

// Class GearboxFramework.GearboxEngine
// 0x0028 (0x0BB8 - 0x0BE0)
class UGearboxEngine : public UGameEngine
{
public:
	class FString                                      DefaultSparkInterfaceName;                     // 0x0BB8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class USparkInterface*                             SparkInterface_Object;                         // 0x0BC8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class USparkInterface*                             SparkInterface_Interface;                      // 0x0BD0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FDouble                                     LoadMapStart;                                  // 0x0BD8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxEngine");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxExpandableListCategory
// 0x0030 (0x0058 - 0x0088)
class UGearboxExpandableListCategory : public UGBXDefinition
{
public:
	class FString                                      CategoryName;                                  // 0x0058 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      CategoryDescription;                           // 0x0068 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            SortIndex;                                     // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bHideInUI : 1;                                 // 0x007C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FPointer                                    ExpandableListCategoryInfo;                    // 0x0080 (0x0008) [0x0000000000001000] (CPF_Native)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxExpandableListCategory");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxExpandableListGFxObject
// 0x00F8 (0x00D8 - 0x01D0)
class UGearboxExpandableListGFxObject : public UGFxObject
{
public:
	EOnItemClickReacte                                 ItemReacteSelection;                           // 0x00D8 (0x0001) [0x0000000000002000] (CPF_Transient)
	class TArray<class UIExpandableListEntry*>         ListEntries;                                   // 0x00E0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UpdateCategoryDisplayInfoDelegates;            // 0x00F0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UpdateSubCategoryDisplayInfoDelegates;         // 0x0100 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UpdateEntryDisplayInfoDelegates;               // 0x0110 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               CategoryFocusedDelegates;                      // 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               SubCategoryFocusedDelegates;                   // 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               EntryFocusedDelegates;                         // 0x0140 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReacteTriggeredDelegates;                      // 0x0150 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateListCategoryDisplayInfo__Delegate;     // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateListSubCategoryDisplayInfo__Delegate;  // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateListEntryDisplayInfo__Delegate;        // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ExpandableListCategoryFocused__Delegate;     // 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ExpandableListSubCategoryFocused__Delegate;  // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ExpandableListEntryFocused__Delegate;        // 0x01B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ExpandableListReacteSelected__Delegate;      // 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxExpandableListGFxObject");
		}

		return uClassPointer;
	};

	void ExpandableListReacteSelected(const class TArray<class UIExpandableListEntry*>& Entries);
	void ExpandableListEntryFocused(class UIExpandableListEntry* ListItem);
	void ExpandableListSubCategoryFocused(class UGearboxExpandableListSubCategory* SubCategory);
	void ExpandableListCategoryFocused(class UGearboxExpandableListCategory* Category);
	void UpdateListEntryDisplayInfo(class UIExpandableListEntry* ListItem);
	void UpdateListSubCategoryDisplayInfo(class UGearboxExpandableListSubCategory* SubCategory, const class TArray<class UIExpandableListEntry*>& Entries);
	void UpdateListCategoryDisplayInfo(class UGearboxExpandableListCategory* Category, const class TArray<class UIExpandableListEntry*>& Entries);
	void extOnEntryFocused(const class FString& EntryName);
	void extOnEntrySelected(const class FString& EntryName);
	void extOnSubCategoryFocused(int32_t CurItemGroup);
	void extOnSubCategorySelected(int32_t CurItemGroup, int32_t CategoryDisplayIndex);
	void extOnCategoryFocused(int32_t CurItemGroup);
	void extOnCategorySelected(int32_t CurItemGroup, int32_t CategoryDisplayIndex);
	bool HandleInputKeyFromOwner(const struct FPlatformUserId& InUserId, const struct FName& ukey, EInputEvent uevent);
};

// Class GearboxFramework.GearboxExpandableListSubCategory
// 0x0030 (0x0058 - 0x0088)
class UGearboxExpandableListSubCategory : public UGBXDefinition
{
public:
	class FString                                      SubCategoryName;                               // 0x0058 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      SubCategoryDescription;                        // 0x0068 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            SortIndex;                                     // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bHideInUI : 1;                                 // 0x007C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FPointer                                    ExpandableListSubCategoryInfo;                 // 0x0080 (0x0008) [0x0000000000001000] (CPF_Native)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxExpandableListSubCategory");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxGameInfo
// 0x0000 (0x0428 - 0x0428)
class AGearboxGameInfo : public AGameInfo
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxGameInfo");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxGFxMovie
// 0x00D8 (0x0320 - 0x03F8)
class UGearboxGFxMovie : public UGFxMovie
{
public:
	struct FPointer                                    VfTable_IIBehaviorConsumer;                    // 0x0320 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IISoundBehavior;                       // 0x0328 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	float                                              TickRateSeconds;                               // 0x0330 (0x0004) [0x0000000000000000]               
	uint32_t                                           bTickScript : 1;                               // 0x0334 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTickFirstFrame : 1;                           // 0x0334 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bRenderingDisabled : 1;                        // 0x0334 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bSupportsStatePooling : 1;                     // 0x0334 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bBlockingMovie : 1;                            // 0x0334 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bCloseOnDeath : 1;                             // 0x0334 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bHintBarDisabled : 1;                          // 0x0334 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	uint32_t                                           bOldUsingGamepad : 1;                          // 0x0334 (0x0004) [0x0000000000002000] [0x00000080] (CPF_Transient)
	uint32_t                                           bAcceptHintBarInput : 1;                       // 0x0334 (0x0004) [0x0000000000002000] [0x00000100] (CPF_Transient)
	uint32_t                                           bOpened : 1;                                   // 0x0334 (0x0004) [0x0000000000002000] [0x00000200] (CPF_Transient)
	class TArray<class UGFxMovieDrawStyle*>            AllStyles;                                     // 0x0338 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UGFxMovieDefinition*                         MyDefinition;                                  // 0x0348 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxActorMoviePool*                          MyPool;                                        // 0x0350 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<class AGearboxPlayerController*>      PlayerOwners;                                  // 0x0358 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UObject*                                     ContextObject;                                 // 0x0368 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              LastTickTime;                                  // 0x0370 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGearboxGFxMovie*                            PoolParent;                                    // 0x0378 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FMovieStateStruct                           CurrentMovieState;                             // 0x0380 (0x0020) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UGFxMovieState*>                BaseMovieStates;                               // 0x03A0 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UGFxMovieState*>                AllMovieStates;                                // 0x03B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FBehaviorConsumerHandle                     ConsumerHandle;                                // 0x03C0 (0x0004) [0x0000000000000000]               
	class UGearboxHintBarContainerGFxObject*           HintBarContainer;                              // 0x03C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            OldInputType;                                  // 0x03D0 (0x0001) [0x0000000000002000] (CPF_Transient)
	class UGFxObject*                                  RootObject;                                    // 0x03D8 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            LastMouseX;                                    // 0x03E0 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            LastMouseY;                                    // 0x03E4 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __OnClosed__Delegate;                          // 0x03E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxGFxMovie");
		}

		return uClassPointer;
	};

	void extOnEventDispatched(const class FString& Path, class UGFxObject* EventData, int32_t NumArrayEntries);
	void ForceUpdateImages();
	void extOnClipUnloaded(class UGFxObject* Clip);
	void extOnClipLoaded(class UGFxObject* Clip);
	void OnInputTypeChanged(bool bNewUsingGamepad);
	void HandleHintInput(const struct FPlatformUserId& UserId, const struct FName& HintTag);
	void PopulateHintBar();
	bool eventFilterButtonInput(const struct FPlatformUserId& UserId, const struct FName& ButtonName, EInputEvent InputEvent);
	void extUncacheClip(const class FString& ClassName, class UGFxObject* Clip);
	void extCacheClip(const class FString& ClassName, class UGFxObject* Clip);
	class UClass* GetUCClassForASClass(const struct FName& ClassName);
	struct FBehaviorConsumerHandle GetBehaviorConsumerHandle();
	void eventOnSetViewport();
	void extSetLanguageExt(const class FString& ClipPath);
	void OnClosedOnDeath();
	class FString GetStyleDebugString();
	class FString GetStateDebugString(bool optionalBIncludeFlags);
	void InitializeFrom(class UGearboxGFxMovie* SrcMovie);
	bool RemoveStylesDrawnTo(class UPrimitiveComponent* PrimComp, class UIGFxActorMovie* Target);
	bool RemoveStyles(class UIGFxActorMovie* Target);
	void RemoveStyle(class UGFxMovieDrawStyle* Style);
	void AddStyle(class UGFxMovieDrawStyle* Style);
	void ShutdownMoviePlayback();
	void InitMoviePlayback();
	class UTextureRenderTarget2D* GetRenderTexture();
	void eventMovieState_OnChanged(bool bStateWasChanged);
	bool eventMovieState_SetFromMovie(class UGearboxGFxMovie* Movie);
	bool MovieState_Copy(struct FMovieStateStruct& StateDst, struct FMovieStateStruct& StateSrc);
	bool MovieState_Compare(struct FMovieStateStruct& S1, struct FMovieStateStruct& S2);
	void MovieState_Toggle(const struct FName& TheState);
	bool MovieState_Enable(const struct FName& TheState, bool optionalBEnable);
	bool MovieState_IsEnabled(const struct FName& TheState);
	bool MovieState_SupportsState(const struct FName& TheState);
	void MovieState_Init();
	void InitFromDefinition();
	static void MovieState_Apply(class UGearboxGFxMovie* Movie, class UClass* HandlerClass);
	static void MovieState_ApplyState(const struct FName& TheState, class UGearboxGFxMovie* Movie);
	void ApplyState(const class FString& StateName, const class FString& StateAction);
	void SetRenderingEnabled(bool bEnabled);
	void GotoAndStop(const class FString& FrameLabel);
	void GotoAndPlay(const class FString& FrameLabel);
	void TriggerUIEvent(const class FString& EventString);
	void PlaySpecialUISound(const class FString& SoundString);
	void eventPlayUISound(const struct FName& UIEvent);
	void eventSetOtherObject(class UObject* Obj);
	class UObject* GetInstanceContextObject();
	void eventOnTick();
	void eventOnClose();
	bool eventStart(bool optionalStartPaused);
	class FString ColorizeTooltipText(const class FString& S, bool optionalBDisabled);
	class ULocalPlayer* GetLocalPlayer();
	void OnClosed(class UGearboxGFxMovie* Movie);
};

// Class GearboxFramework.GFxMovie_StateParent
// 0x0008 (0x03F8 - 0x0400)
class UGFxMovie_StateParent : public UGearboxGFxMovie
{
public:
	class UClass*                                      StateClass;                                    // 0x03F8 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovie_StateParent");
		}

		return uClassPointer;
	};

	void MovieState_OnChanged(bool bStateWasChanged);
	bool eventStart(bool optionalStartPaused);
};

// Class GearboxFramework.GearboxGFxObjectManager
// 0x0068 (0x0058 - 0x00C0)
class UGearboxGFxObjectManager : public UObject
{
public:
	uint8_t                                           UnknownData00[0x50];                           // 0x0058 (0x0050) UNKNOWN PROPERTY: MapProperty GearboxFramework.GearboxGFxObjectManager.Objects
	class TArray<class UGFxObject*>                    ObjectDuplicates;                              // 0x00A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UGFxMoviePlayer*                             OwnerMovie;                                    // 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxGFxObjectManager");
		}

		return uClassPointer;
	};

	void RegisterRoot(class UGFxObject* Root);
	void ApplyLayoutToAllObjects();
	void RemoveAllObjects();
	void RemoveObject(class UGFxObject* Parent, const struct FName& InstanceName);
	class UGFxObject* GetObjectW(class UGFxObject* Parent, const struct FName& InstanceName);
	class TArray<class UGFxObject*> GetObjectsW(class UGFxMoviePlayer* OuterMovie, const struct FName& optionalTagName);
	void OnChildLoaded(const struct FName& InstanceName, class UGFxObject* Object);
	void Tick(float DeltaTime);
};

// Class GearboxFramework.GearboxGlobals
// 0x00D8 (0x00E8 - 0x01C0)
class UGearboxGlobals : public UGearboxEngineGlobals
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                  // 0x00E8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UGearboxGlobalsDefinition*                   TheGlobalsDefinition;                          // 0x00F0 (0x0008) [0x0000000000000000]               
	class UClass*                                      ExposureUtilityClass;                          // 0x00F8 (0x0008) [0x0000000000000000]               
	class UClass*                                      ExposureUtilityStrategyClass;                  // 0x0100 (0x0008) [0x0000000000000000]               
	class UExposureUtilityBase*                        TheExposureUtility;                            // 0x0108 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGBXActorList*                               TheGBXActorList;                               // 0x0110 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGBXObjectList*                              TheGBXObjectList;                              // 0x0118 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FValidNameRange>               ValidNameList;                                 // 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UGBXActorList*                               TheDynamicTextureActorList;                    // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	class USpawnMaster*                                TheSpawnMaster;                                // 0x0138 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UBehaviorKernel*                             TheBehaviorKernel;                             // 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UBodyKernel*                                 TheBodyKernel;                                 // 0x0148 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UScreenSpaceManager*                         TheScreenSpaceManager;                         // 0x0150 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGFxMovieManager*                            TheGFxManager;                                 // 0x0158 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGearboxRenderTextureManager*                TheRenderTextureManager;                       // 0x0160 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      GlobalInstanceClassName;                       // 0x0168 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            DefaultMaxSpawnCost;                           // 0x0178 (0x0004) [0x0000000000004000] (CPF_Config)  
	class TArray<struct FLevelStateRecord>             StateRecords;                                  // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UDialogSystem*                               TheDialogSystem;                               // 0x0190 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bPauseAI : 1;                                  // 0x0198 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UGearboxAIUtility*                           TheAIUtility;                                  // 0x01A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UClass*                                      AIUtilityClass;                                // 0x01A8 (0x0008) [0x0000000000000000]               
	class UPawnRelevanceUtility*                       TheRelevanceUtility;                           // 0x01B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UClass*                                      TheRelevanceUtilityClass;                      // 0x01B8 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxGlobals");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	class UPawnRelevanceUtility* GetPawnRelevanceUtility();
	static class UBehaviorKernel* GetBehaviorKernel();
	class UDialogSystem* GetDialogSystem();
	float GetSpawnerResetDelay();
	void NotifyActorDied(class AActor* TheActor, bool bKeepBody);
	bool DoesLOSIntersectSpecialOccluder(const struct FVector& FromLoc, const struct FVector& ToLoc, class UPawnAllegiance* AllegianceAffected);
	bool ValidatePlayerName(bool optionalBReplaceCharacters, class FString& InName);
	bool RegisterStateKey(const struct FName& LevelName, const struct FName& ObjectName, const struct FName& AdditionalKey);
	bool DoesStateKeyExist(const struct FName& LevelName, const struct FName& ObjectName, const struct FName& AdditionalKey);
	bool FreeTexture2D(class UTexture2D* Texture);
	class UTexture2D* GetTexture2D();
	class UGearboxRenderTextureManager* GetRenderTextureManager();
	class UGFxMovieManager* GetGFxManager();
	class UScreenSpaceManager* GetScreenSpaceManager();
	void RegDynamicTextureStreaming(class AActor* A, bool optionalBRegister);
	class UGBXActorList* GetDynamicTextureActorList();
	class USpawnMaster* GetSpawnMaster();
	class UGBXObjectList* GetGBXObjectList();
	class UGBXActorList* GetGBXActorList();
	class UExposureUtilityBase* GetExposureUtility();
	class UGearboxGlobalsDefinition* GetGearboxGlobalsDefinition();
	static class UGearboxGlobals* GetGearboxGlobals();
};

// Class GearboxFramework.GearboxGlobalsDefinition
// 0x01E0 (0x0058 - 0x0238)
class UGearboxGlobalsDefinition : public UGBXDefinition
{
public:
	float                                              SpawnerResetDelay;                             // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UGearboxDialogGlobalsDefinition*             Dialog;                                        // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    PauseAkEvent;                                  // 0x0068 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    UnpauseAkEvent;                                // 0x0070 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    ResetStatesAkEvent;                            // 0x0078 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    StartSplitScreenAkEvent;                       // 0x0080 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    CinematicModePauseDialogAkEvent;               // 0x0088 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    CinematicModeResumeDialogAkEvent;              // 0x0090 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkSwitch*                                   DefaultMaterialAkSwitch;                       // 0x0098 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkSwitch*                                   DefaultShieldAkSwitch;                         // 0x00A0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     ImpactDamagePercentOfHealthRtpc;               // 0x00A8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     PerspectiveAkRtpc;                             // 0x00B0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PerspectiveRtpcFirstPersonValue;               // 0x00B8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PerspectiveRtpcThirdPersonValue;               // 0x00BC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     CameraModePerspectiveOverrideAkRtpc;           // 0x00C0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CameraModePerspectiveOverrideEnabledValue;     // 0x00C8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              CameraModePerspectiveOverrideDisabledValue;    // 0x00CC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    ConfigureCrouchDownEvent;                      // 0x00D0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    ConfigureCrouchUpEvent;                        // 0x00D8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     FirstPersonCameraDirectionRelationRtpc;        // 0x00E0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     FoleyFootstepVolumeRtpc;                       // 0x00E8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     FoleyMainVolumeRtpc;                           // 0x00F0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     FoleyAccessoryVolumeRtpc;                      // 0x00F8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     FoleyFootstepPitchRtpc;                        // 0x0100 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     FoleyMainPitchRtpc;                            // 0x0108 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     FoleyAccessoryPitchRtpc;                       // 0x0110 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FoleyFootstepForwardOffset;                    // 0x0118 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     FoleyPerspectiveRtpc;                          // 0x0120 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FoleyPerspectiveRtpcFirstPersonValue;          // 0x0128 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FoleyPerspectiveRtpcFirstPersonAttachmentValue;// 0x012C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FoleyPerspectiveRtpcThirdPersonValue;          // 0x0130 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     CharacterRelativeSpeedRtpc;                    // 0x0138 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     CharacterRelativeVerticalAirSpeedRtpc;         // 0x0140 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     CharacterRelativeWalkingSlopeRtpc;             // 0x0148 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     CharacterRelativeWaterDepthRtpc;               // 0x0150 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     CharacterRelativeSnowDepthRtpc;                // 0x0158 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkSwitch*                                   HighDetailFoleySwitch;                         // 0x0160 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkSwitch*                                   LowDetailFoleySwitch;                          // 0x0168 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     MasterVolumeAkRtpc;                            // 0x0170 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     UserVolumeMusicAkRtpc;                         // 0x0178 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     UserVolumeSfxAkRtpc;                           // 0x0180 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     UserVolumeVOAkRtpc;                            // 0x0188 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     UserVolumePingAkRtpc;                          // 0x0190 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     UserVolumeHdrSfxAkRtpc;                        // 0x0198 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     UserVolumeHdrVOAkRtpc;                         // 0x01A0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     UserVolumeHdrMixRtpc;                          // 0x01A8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     ListenerDistanceAkRtpc;                        // 0x01B0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     ApproachSpeedAkRtpc;                           // 0x01B8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     SpeedAkRtpc;                                   // 0x01C0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     WaterDepthAkRtpc;                              // 0x01C8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     RandomVariationAkRtpc;                         // 0x01D0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     HardSuppressionAkRtpc;                         // 0x01D8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     ComponentRelativeVelocityAkRtpc;               // 0x01E0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     ElevationAkRtpc;                               // 0x01E8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     AzimuthAkRtpc;                                 // 0x01F0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    ConfigurePureEchoTalkerAkEvent;                // 0x01F8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ShowEchoTalkerVolume;                          // 0x0200 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              HideEchoTalkerVolume;                          // 0x0204 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxOcclusionVolumeChangeDB;                    // 0x0208 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkEvent*                                    AkVoiceCommEvent;                              // 0x0210 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAkRtpc*                                     ClothingAverageVelocityAkRtpc;                 // 0x0218 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAISoundDefinition*                          AISound_Footstep;                              // 0x0220 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAISoundDefinition*                          AISound_Land;                                  // 0x0228 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              AISound_LandMinVelocity;                       // 0x0230 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxGlobalsDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxHintBarContainerGFxObject
// 0x0038 (0x00D8 - 0x0110)
class UGearboxHintBarContainerGFxObject : public UGFxObject
{
public:
	class TArray<struct FGearboxGFxMovieHint>          Hints;                                         // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FGearboxGFxMovieHintInput>     HintInputMap;                                  // 0x00E8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UGearboxGFxMovie*                            MyGearboxGFxMovie;                             // 0x00F8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class ULocalPlayer*                                MyLocalPlayer;                                 // 0x0100 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FPlatformUserId                             CurrentUserID;                                 // 0x0108 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxHintBarContainerGFxObject");
		}

		return uClassPointer;
	};

	void extHandleHintInput(int32_t ControllerId, const class FString& HintTag);
};

// Class GearboxFramework.GearboxHUD
// 0x0000 (0x0308 - 0x0308)
class AGearboxHUD : public AHUD
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxHUD");
		}

		return uClassPointer;
	};

	void InspectAIPawn(class AGearboxPawn* AIPawn);
	void InspectAI();
};

// Class GearboxFramework.GearboxMind
// 0x00D8 (0x0330 - 0x0408)
class AGearboxMind : public AAIController
{
public:
	struct FPointer                                    VfTable_IINounAttributeProvider;               // 0x0330 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIFlagProvider;                        // 0x0338 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIAIInterface;                         // 0x0340 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UAITracker*                                  MyTracker;                                     // 0x0348 (0x0008) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UAIComponent*                                AIComponent;                                   // 0x0350 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class AGearboxPawn*                                MyGearboxPawn;                                 // 0x0358 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UTargetingComponent*                         TargetingComponent;                            // 0x0360 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class TArray<struct FNounAttributeState>           NounState;                                     // 0x0368 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     HomeLocation;                                  // 0x0378 (0x000C) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SpawnerIndex;                                  // 0x0384 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bDisabledDueToIrrelevance : 1;                 // 0x0388 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bWantsToWalk : 1;                              // 0x0388 (0x0004) [0x0000000000000000] [0x00000002] 
	class AGearboxAIMoveNode*                          LastPatrolNode;                                // 0x0390 (0x0008) [0x0000000000000000]               
	struct FFlagProviderData                           FlagProviderData;                              // 0x0398 (0x0070) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxMind");
		}

		return uClassPointer;
	};

	class UIAIInterface* GetAIChild(int32_t ChildIdx);
	int32_t GetNumAIChildren();
	void InitSequence(class UActionSequence* NewSequence);
	class UPawnAllegiance* GetAllegiance();
	class UAIDefinition* GetAIDefinition();
	void SetAIComponent(class UAIComponent* NewAIComp);
	class UAIComponent* GetAIComponent();
	class UIAIInterface* GetAIParent();
	struct FVector GetAILocation();
	class AActor* GetAIActor();
	bool CanTickAI();
	bool InGodMode();
	void PawnDied(class APawn* inPawn);
	void Suicide();
	void OnTargetPriority(class UGearboxSeqAct_TargetPriority* inAction);
	void Behavior_SetCanTarget(EChangeStatus ChangeStatus);
	static bool GetNoTargetAllEnemies();
	static void SetNoTargetAllEnemies(bool bNoTarget);
	int32_t ActivateEventRule(const struct FName& RuleEventName);
	void AddHitTargetRecord(class AGearboxPawn* HitByPawn, const struct FVector& NewHitLocation, float flNewDamage);
	void StopMovement();
	void eventPossess(class APawn* inPawn, bool bVehicleTransition);
	void NotifyShotAtBy(class AGearboxPawn* ShootingPawn);
	class ADenSpawner* GetDenSpawner();
	class ASpawner* GetSpawner();
	bool GetCurrentTargetInfo(class UMindTargetInfo*& OutTargetRec);
	bool IsSameAllegianceMind(class AGearboxMind* aMind);
	bool IsSameAllegiance(class UObject* anObject);
	bool IsNeutralMind(class AGearboxMind* aMind);
	bool IsNeutral(class UObject* anObject);
	bool IsFriendlyMind(class AGearboxMind* aMind);
	bool IsFriendly(class UObject* anObject);
	bool IsEnemyMind(class AGearboxMind* aMind);
	bool IsEnemy(class UObject* anObject);
	bool WantsToWalk();
	void SetWantsToWalk(bool bInWantsToWalk);
	void SetFacingPolicy(EFacingPolicy NewFacingPolicy, class AActor* optionalNewFacingActor, const struct FVector& optionalNewFacingVector, EFacingStyle optionalNewFacingStyle);
	class AActor* GetCurrentTarget();
	class UGearboxNavigationHandle* GetNavigationHandle();
};

// Class GearboxFramework.GearboxMindAttributeContextResolver
// 0x0000 (0x0058 - 0x0058)
class UGearboxMindAttributeContextResolver : public UAttributeContextResolver
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxMindAttributeContextResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxNavigationHandle
// 0x02D0 (0x00F0 - 0x03C0)
class UGearboxNavigationHandle : public UNavigationHandle
{
public:
	class AGearboxPawn*                                MyPawn;                                        // 0x00F0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AGearboxMind*                                MyMind;                                        // 0x00F8 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bInitialized : 1;                              // 0x0100 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bFollowingPath : 1;                            // 0x0100 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bSetDirection : 1;                             // 0x0100 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bSpecialMovementFinished : 1;                  // 0x0100 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bAbortPathAfterSpecialMove : 1;                // 0x0100 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bPathFixFailed : 1;                            // 0x0100 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	float                                              LastPathTime;                                  // 0x0104 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrentPathCost;                               // 0x0108 (0x0004) [0x0000000000000000]               
	int32_t                                            DirectPathCost;                                // 0x010C (0x0004) [0x0000000000000000]               
	int32_t                                            FlyingPathCost;                                // 0x0110 (0x0004) [0x0000000000000000]               
	int32_t                                            LocationPathCost;                              // 0x0114 (0x0004) [0x0000000000000000]               
	int32_t                                            ConstrainedPathCost;                           // 0x0118 (0x0004) [0x0000000000000000]               
	struct FBasedPosition                              CurrentGoal;                                   // 0x0120 (0x0038) [0x0000000000002000] (CPF_Transient)
	struct FPathFindData                               CurrentPath;                                   // 0x0158 (0x0080) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FVector                                     DesiredDirection;                              // 0x01D8 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              MaxFormationSpeedModifier;                     // 0x01E4 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UFormationComponent*                         CurrentFormation;                              // 0x01E8 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FGBXNavMeshPolyRef                          Anchor;                                        // 0x01F0 (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FGBXNavMeshPolyRef                          LastValidAnchor;                               // 0x0200 (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FBasedPosition                              LastAnchorPosition;                            // 0x0210 (0x0038) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastAnchorDelta;                               // 0x0248 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              NextPathObjectDistance;                        // 0x0254 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     CurrentGoalStartLoc;                           // 0x0258 (0x000C) [0x0000000000002000] (CPF_Transient)
	EGBXNavMeshSpecialMoveType                         ActiveSpecialNavMeshMove;                      // 0x0264 (0x0001) [0x0000000000002000] (CPF_Transient)
	EPathFixMode                                       FixMode;                                       // 0x0265 (0x0001) [0x0000000000002000] (CPF_Transient)
	class UPerchDefinition*                            PerchDefinition;                               // 0x0268 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UNavAnimDefinition*                          NavAnimDefinition;                             // 0x0270 (0x0008) [0x0000000000002000] (CPF_Transient)
	class USpawnPointDefinition*                       SpawnPointDefinition;                          // 0x0278 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPhysicsJumpDefinition*                      PhysicsJumpDefinition;                         // 0x0280 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              NearPathCheckDist;                             // 0x0288 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NearPathCheckDistMin;                          // 0x028C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NearPathCheckDistMax;                          // 0x0290 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NearPathCheckDistRate;                         // 0x0294 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              FixMaxDist;                                    // 0x0298 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              FixLerpTime;                                   // 0x029C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              FixWaitTime;                                   // 0x02A0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              FixFailTime;                                   // 0x02A4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              FixStartTime;                                  // 0x02A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     FixDirection;                                  // 0x02AC (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     FixStartLocation;                              // 0x02B8 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FBasedPosition                              FixPosition;                                   // 0x02C8 (0x0038) [0x0000000000002000] (CPF_Transient)
	float                                              LastPathFindFailTime;                          // 0x0300 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastPathFindFailEnd;                           // 0x0304 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastPathFindFailStart;                         // 0x0310 (0x000C) [0x0000000000002000] (CPF_Transient)
	class FString                                      LastPathFindFailString;                        // 0x0320 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              GoalVerticalDistFailAmount;                    // 0x0330 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            StuckPathIdx;                                  // 0x0334 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            StuckFixCount;                                 // 0x0338 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastStuckTime;                                 // 0x033C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumConstrainedPoints;                          // 0x0340 (0x0004) [0x0000000000000000]               
	struct FVector                                     ConstrainedBuildLocation;                      // 0x0344 (0x000C) [0x0000000000000000]               
	struct FNavMeshPathParams                          BuildPathParams;                               // 0x0350 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FConstrainedPointData>         ConstrainedPoints;                             // 0x03B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxNavigationHandle");
		}

		return uClassPointer;
	};

	static bool GetNearestPositionOnNavMesh(float Radius, const struct FVector& TestLoc, bool optionalBAnyHeight, struct FBasedPosition& NearestPos, struct FNavMeshPathParams& PolyUsableCheckParams, struct FGBXNavMeshPolyRef& NearestPoly);
	static bool GetNavMeshPolyForPoint(const struct FVector& Point, struct FGBXNavMeshPolyRef& FoundPoly, struct FNavMeshPathParams& PolyUsableCheckParams);
	struct FVector GetPawnLocationOnNavMesh();
	bool InFinalPoly(const struct FVector& TestLoc);
	bool PopulatePathfindingParamCache();
	bool NeedsRegularWalkingPhysics();
	bool IsHardAttached();
	void FixByLerping();
	void SetFixPosition();
	void TryToFixPathing();
	bool CanFixPathing();
	void SetPhysicsJumpDefinition(class UPhysicsJumpDefinition* NewDef);
	class UPhysicsJumpDefinition* GetPhysicsJumpDefinition();
	void SetSpawnPointDefinition(class USpawnPointDefinition* NewDef);
	class USpawnPointDefinition* GetSpawnPointDefinition();
	void SetNavAnimDefinition(class UNavAnimDefinition* NewDef);
	class UNavAnimDefinition* GetNavAnimDefinition();
	void SetPerchDefinition(class UPerchDefinition* NewDef);
	class UPerchDefinition* GetPerchDefinition();
	void UpdateAnchor(bool optionalBCanDoFullSearch);
	void ClearAnchor();
	int32_t GetPathCost(bool optionalBReset);
	void InsertCurrentLocationIntoPath(struct FGBXNavMeshPath& Path);
	bool CreateConstrainedPath(struct FPathRequestData& Request);
	bool CreatePathToLocation(struct FPathRequestData& Request);
	bool CreateDirectPath(EPathType optionalType, struct FPathRequestData& Request);
	bool CanPathFind();
	void SetPawnPhysics();
	void ClearSpecialMovement();
	bool CanMoveTo(struct FVector& GoalLoc);
	bool CanAvoidObstacles();
	bool AbortPath(bool optionalBAllowDelayedAbort);
	bool PathIsValid(struct FPathFindData& Data);
	bool IsFollowingActionPath(class UActionSequencePawn* Action);
	bool SetPath(struct FPathFindData& Data);
	bool IsFollowingPath();
	bool CanMoveToGoal();
	bool CanFollowPath();
};

// Class GearboxFramework.GearboxPawn
// 0x01F8 (0x06B8 - 0x08B0)
class AGearboxPawn : public APawn
{
public:
	struct FPointer                                    VfTable_IICloak;                               // 0x06B8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIPathingObstacle;                     // 0x06C0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIStanceInterface;                     // 0x06C8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIFeatureConsumer;                     // 0x06D0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIFeatureProvider;                     // 0x06D8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_ISpecialMoveInterface;                 // 0x06E0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIDamageReceiver;                      // 0x06E8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bWantsToMove : 1;                              // 0x06F0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDoNavMeshWalkingTrace : 1;                    // 0x06F0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	class USpecialMoveComponent*                       SMComponent;                                   // 0x06F8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FReplicatedSpecialMoveData                  ReplicatedSMData;                              // 0x0700 (0x0028) [0x0000000100000020] (CPF_Net)     
	struct FFlag                                       HasBeenShotAtRecently;                         // 0x0728 (0x0010) [0x0000000000002000] (CPF_Transient)
	struct FAkPlayingInfo                              DyingScream;                                   // 0x0738 (0x0010) [0x0000000000082000] (CPF_Transient | CPF_Component)
	float                                              CustomGravityScaling;                          // 0x0748 (0x0004) [0x8000000000002020] (CPF_Net | CPF_Transient)
	float                                              CustomGravityScalingBaseValue;                 // 0x074C (0x0004) [0x4000000000000022] (CPF_Const | CPF_Net)
	class TArray<class UAttributeModifier*>            CustomGravityScalingModifierStack;             // 0x0750 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UPathingObstacleInfo*                        PathObstacleInfo;                              // 0x0760 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UInterpComponent*                            InterpComponent;                               // 0x0768 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     CoverMantleLerpDelta;                          // 0x0770 (0x000C) [0x0000000000000000]               
	class UCoverSlotComponent*                         CoverSlot;                                     // 0x0780 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UCoverUseComponent*                          CoverComponent;                                // 0x0788 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FCoverUseState                              CoverState;                                    // 0x0790 (0x0020) [0x0000002100002020] (CPF_Net | CPF_Transient)
	struct FName                                       DefaultStanceName;                             // 0x07B0 (0x0008) [0x0000000000000000]               
	class UStanceComponent*                            StanceComponent;                               // 0x07B8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStanceDefinition*                           ReplicatedStance;                              // 0x07C0 (0x0008) [0x0000000100002022] (CPF_Const | CPF_Net | CPF_Transient)
	float                                              Visibility;                                    // 0x07C8 (0x0004) [0x8000000000002000] (CPF_Transient)
	float                                              VisibilityBaseValue;                           // 0x07CC (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            VisibilityModifierStack;                       // 0x07D0 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	float                                              Audibility;                                    // 0x07E0 (0x0004) [0x8000000000002000] (CPF_Transient)
	float                                              AudibilityBaseValue;                           // 0x07E4 (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            AudibilityModifierStack;                       // 0x07E8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	float                                              SpeedAwareness;                                // 0x07F8 (0x0004) [0x8000000000002000] (CPF_Transient)
	float                                              SpeedAwarenessBaseValue;                       // 0x07FC (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            SpeedAwarenessModifierStack;                   // 0x0800 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	float                                              StealthAwareness;                              // 0x0810 (0x0004) [0x8000000000002000] (CPF_Transient)
	float                                              StealthAwarenessBaseValue;                     // 0x0814 (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            StealthAwarenessModifierStack;                 // 0x0818 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	uint8_t                                            bReplicatedCloak;                              // 0x0828 (0x0001) [0x0000000100002020] (CPF_Net | CPF_Transient)
	EPhysicsJumpState                                  LeapAttackState;                               // 0x0829 (0x0001) [0x0000000000002000] (CPF_Transient)
	class UCloakComponent*                             CloakComponent;                                // 0x0830 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class URotationComponent*                          RotationComponent;                             // 0x0838 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ADynamicDecalActor*                          LeapDecalActor;                                // 0x0840 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FLeapAttackData                             ReplicatedLeapAttackData;                      // 0x0848 (0x0020) [0x0000000000002020] (CPF_Net | CPF_Transient)
	class UDodgeComponent*                             DodgeComponent;                                // 0x0868 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FFeatureConsumerState                       FeatureConsumerState;                          // 0x0870 (0x0028) [0x0000000100400020] (CPF_Net | CPF_NeedCtorLink)
	class UFeatureProviderDefinition*                  FeatureProviderDefinition;                     // 0x0898 (0x0008) [0x0000000000000000]               
	class UObject*                                     FeatureConsumerDefinition;                     // 0x08A0 (0x0008) [0x0000000000000000]               
	class UDamageReceiverComponent*                    DamageReceiverComponent;                       // 0x08A8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxPawn");
		}

		return uClassPointer;
	};

	class USkeletalMeshComponent* GetFirstPersonMeshComponent();
	void SetReplicatedCloak(bool bInReplicatedCloak);
	void SetCloakComponent(class UCloakComponent* InComponent);
	class UCloakComponent* GetCloakComponent();
	void SetDefaultStance(const struct FName& optionalStanceName);
	bool ClearStance(EStanceSystem System);
	bool SetStance(EStanceSystem System, class UStanceDefinition* NewStance);
	class UStanceDefinition* GetStance();
	class UStanceComponent* GetStanceComponent();
	void eventLanded(const struct FVector& HitNormal, class AActor* FloorActor);
	void PlayFootStepSound(int32_t FootDown, bool bFirstPerson);
	float GetStealthAwareness();
	float GetSpeedAwareness();
	float GetAudibility();
	float GetVisibility();
	void InterpRelativeRotation(const struct FRotator& NewRelRot, float InterpTime, bool bLinear);
	void InterpRelativeLocation(const struct FVector& NewRelLoc, float InterpTime, bool bLinear);
	void InterpControllerRotation(const struct FRotator& NewRot, float InterpTime, bool bLinear);
	void InterpRotation(const struct FRotator& NewRot, float InterpTime, bool optionalBLinear, bool optionalBYawOnly);
	void InterpLocation(const struct FVector& NewLoc, float InterpTime, bool optionalBLinear, bool optionalBNoZ);
	bool IsInterpolating();
	void AttachObstacleDebugComponent();
	void PossessedBy(class AController* C, bool bVehicleTransition);
	class UPathingObstacleInfo* GetObstacleInfo(bool optionalBFillInfo);
	void SetObstacleInfo(class UPathingObstacleInfo* Info);
	class AActor* GetObstacleActor();
	struct FVector GetPivotPoint(bool optionalBForFiring);
	struct FVector GetAimDirection();
	struct FVector eventGetSpotOthersShouldLookAt();
	void SetReplicatedSMData(bool optionalBInterrupted, struct FSpecialMoveData& NewSMData);
	void eventServerSpecialMove_StopAny(bool optionalBClearQueue, bool optionalBInterrupted);
	void eventServerSpecialMove_Stop(class USpecialMoveDefinition* OldSMD, bool optionalBClearQueue, bool optionalBInterrupted);
	void eventServerSpecialMove_Queue(class USpecialMoveDefinition* NewSMD, float optionalPlayRateScale, float optionalDuration, const struct FName& optionalCallbackName, class UObject* optionalCallbackObject, class UObject* optionalData, bool optionalBSendCallbackAtEndOfSequence, bool optionalBStartOfSequence);
	void eventServerSpecialMove_Play(class USpecialMoveDefinition* NewSMD, float optionalPlayRateScale, float optionalDuration, const struct FName& optionalCallbackName, class UObject* optionalCallbackObject, class UObject* optionalData, bool optionalBSendCallbackAtEndOfSequence);
	ERootMotionRotationMode GetDefaultRootMotionRotationMode();
	ERootMotionMode GetDefaultRootMotionMode();
	class USkeletalMeshComponent* GetSkelMesh();
	class USpecialMoveComponent* GetSMComponent();
	class AActor* GetActor();
	class UGearboxNavigationHandle* GetNavigationHandle();
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void PlayHit(class APawn* SomePawn, const struct FVector& HitLocation, class UClass* DamageType, const struct FVector& Momentum, const struct FTraceHitInfo& HitInfo, class UDamagePipeline* optionalPipeline, bool optionalBFriendlyNoDamage);
	void eventReplicatedEvent(const struct FName& VarName);
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation, class UDamagePipeline* optionalPipeline);
	void eventDestroyed();
	void SetMovementPhysics();
	void eventPostBeginPlay();
	void NotifyShotAtBy(class AGearboxPawn* ShootingPawn);
	bool HaveIBeenShotAtRecently();
};

// Class GearboxFramework.GearboxPlayerReplicationInfo
// 0x0008 (0x0388 - 0x0390)
class AGearboxPlayerReplicationInfo : public APlayerReplicationInfo
{
public:
	EDifficultyLevel                                   Difficulty;                                    // 0x0388 (0x0001) [0x0000000000000020] (CPF_Net)     
	int32_t                                            Dummy;                                         // 0x038C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxPlayerReplicationInfo");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxProcess
// 0x0038 (0x0058 - 0x0090)
class UGearboxProcess : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	EGearboxProcessState                               ProcessState;                                  // 0x0060 (0x0001) [0x0000000000000000]               
	ESparkStepResult                                   CurrentStepResult;                             // 0x0061 (0x0001) [0x0000000000000000]               
	int32_t                                            FirstAttemptDelay;                             // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            BaseRetrySeconds;                              // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetryAttempts;                              // 0x006C (0x0004) [0x0000000000000000]               
	float                                              RetryMultiplier;                               // 0x0070 (0x0004) [0x0000000000000000]               
	int32_t                                            RetryJitter;                                   // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              CurrentRetrySeconds;                           // 0x0078 (0x0004) [0x0000000000000000]               
	int32_t                                            Attempts;                                      // 0x007C (0x0004) [0x0000000000000000]               
	float                                              WaitTime;                                      // 0x0080 (0x0004) [0x0000000000000000]               
	uint32_t                                           bStopped : 1;                                  // 0x0084 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            CurrentStep;                                   // 0x0088 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxProcess");
		}

		return uClassPointer;
	};

	bool IsProcessActive();
	void ProcessFailed();
	void ProcessComplete();
	void StepWaiting();
	void StepFailed();
	void StepSucceeded();
	struct FStepConfiguration GetStepConfiguration();
	void eventPerformStep();
	void StopProcess();
	bool StartProcess();
	void Init();
};

// Class GearboxFramework.SparkInitializationProcess
// 0x0070 (0x0090 - 0x0100)
class USparkInitializationProcess : public UGearboxProcess
{
public:
	class UGearboxData*                                Data;                                          // 0x0090 (0x0008) [0x0000000000000000]               
	struct FPlatformUserId                             UserId;                                        // 0x0098 (0x0008) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               SparkInitializedDelegates;                     // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bWaitingForTicket : 1;                         // 0x00B0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class FString                                      PlatformTicket;                                // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               GetPlatformTicketCompleteDelegates;            // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FSparkFallbackAuthSessionTicketRequestData> AuthSessionTicketRequests;                     // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    SteamCallbackHandler;                          // 0x00E8 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FScriptDelegate                             __OnGetPlatformTicketComplete__Delegate;       // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SparkInitializationProcess");
		}

		return uClassPointer;
	};

	void HandleReadDiscoveryReceived(struct FSparkResult& Result);
	void eventTriggerSparkInitializedDelegates(EInitializedResult InitializeResult);
	bool GetPlatformTicketFallback();
	void ClearGetPlatformTicketCompleteDelegate(const struct FScriptDelegate& GetPlatformTicketCompleteDelegate);
	void AddGetPlatformTicketCompleteDelegate(const struct FScriptDelegate& GetPlatformTicketCompleteDelegate);
	void OnGetPlatformTicketComplete(const struct FPlatformUserId& TicketUserId, bool bWasSuccessful, const class FString& Ticket);
	void ClearSparkInitializedDelegate(const struct FScriptDelegate& SparkInitializedDelegate);
	void AddSparkInitializedDelegate(const struct FScriptDelegate& SparkInitializedDelegate);
	class FString GetStepName();
	struct FStepConfiguration GetStepConfiguration();
	bool IsInitialized();
	bool IsDisabled();
	bool IsInitializing();
	void HandleVerificationReceived(struct FSparkResult& Result);
	void eventVerifyAuthentication();
	void eventAuthenticateTicketString();
	void HandleAuthenticationReceived(struct FSparkResult& Result);
	void GetPlatformTicketComplete(const struct FPlatformUserId& InUserId, bool bWasSuccessful, const class FString& Ticket);
	void GetServerTicketComplete(bool bWasSuccessful, const class FString& Ticket);
	void GetTicketComplete(bool bWasSuccessful, const class FString& Ticket);
	void eventGetPlatformTicket();
	void ProcessFailed();
	void ProcessComplete();
	class FString GetConfigQuery();
	void CompleteInitialization();
	void PerformStep();
	bool StartProcess();
	void eventInitFromServer(const struct FScriptDelegate& SparkInitializedDelegate);
	void InitWithUser(const struct FPlatformUserId& InUserId, const struct FScriptDelegate& SparkInitializedDelegate);
};

// Class GearboxFramework.GearboxRenderTextureManager
// 0x0060 (0x0058 - 0x00B8)
class UGearboxRenderTextureManager : public UObject
{
public:
	class TArray<class UTexture2D*>                    FreeList2D;                                    // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UTextureRenderTarget2D*>        FreeList;                                      // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UTextureRenderTarget2D*>        FreeListDepth;                                 // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              HoldDuration;                                  // 0x0088 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              TimeToNextTick;                                // 0x008C (0x0004) [0x0000000000000000]               
	class TArray<struct FThumbnailRenderData>          Thumbnails;                                    // 0x0090 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FThumbnailLightData>           DefaultLights;                                 // 0x00A0 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	float                                              ThumbnailTextureArea;                          // 0x00B0 (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxRenderTextureManager");
		}

		return uClassPointer;
	};

	void SetThumbnailMesh(class UTexture* Texture, class UMeshComponent* Mesh);
	void FreeContext(const struct FName& Context);
	void FreeThumbnail(class UTexture* Texture);
	class UTexture* GetThumbnail(const struct FName& Context, int32_t TextureSizeX, int32_t TextureSizeY, EThumbnailUpdate UpdateType, int32_t optionalSizeX, int32_t optionalSizeY);
	bool FreeTexture2D(class UTexture2D* Texture);
	class UTexture2D* GetTexture2D();
	bool FreeRenderTextureDepth(class UTextureRenderTarget2D* Texture);
	class UTextureRenderTarget2D* GetRenderTextureDepth(int32_t InSizeX, int32_t InSizeY);
	bool FreeRenderTexture(class UTextureRenderTarget2D* Texture);
	class UTextureRenderTarget2D* GetRenderTexture(int32_t InSizeX, int32_t InSizeY);
};

// Class GearboxFramework.GearboxSeqAct_CameraShake
// 0x0048 (0x00E8 - 0x0130)
class UGearboxSeqAct_CameraShake : public USequenceAction
{
public:
	struct FGearboxViewShakeInfo                       CameraShake;                                   // 0x00E8 (0x0044) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_CameraShake");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_DestroySpawnedActors
// 0x0028 (0x0100 - 0x0128)
class UGearboxSeqAct_DestroySpawnedActors : public USeqAct_Latent
{
public:
	uint32_t                                           SaveDestroyedActors : 1;                       // 0x0100 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           DisableSpawners : 1;                           // 0x0100 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bActorsDestroyed : 1;                          // 0x0100 (0x0004) [0x0000000000000000] [0x00000004] 
	class TArray<class ASpawner*>                      Spawners;                                      // 0x0108 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class ASpawnEncounter*>               Encounters;                                    // 0x0118 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_DestroySpawnedActors");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_EndDenWarmup
// 0x0000 (0x00E8 - 0x00E8)
class UGearboxSeqAct_EndDenWarmup : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_EndDenWarmup");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_ResetSpawner
// 0x0000 (0x00E8 - 0x00E8)
class UGearboxSeqAct_ResetSpawner : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_ResetSpawner");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_SetStretchyPoint
// 0x0008 (0x00E8 - 0x00F0)
class UGearboxSeqAct_SetStretchyPoint : public USequenceAction
{
public:
	class AActor*                                      StretchyPoint;                                 // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_SetStretchyPoint");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_SpawnerLink
// 0x0010 (0x0100 - 0x0110)
class UGearboxSeqAct_SpawnerLink : public USeqAct_Latent
{
public:
	class TArray<class ASpawner*>                      Spawners;                                      // 0x0100 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_SpawnerLink");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_Speak
// 0x0080 (0x0100 - 0x0180)
class UGearboxSeqAct_Speak : public USeqAct_Latent
{
public:
	uint32_t                                           bEnable_SpecifyTargetName : 1;                 // 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTriggeredStarted : 1;                         // 0x0100 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UGearboxDialogNameTag*                       TargetNameTag;                                 // 0x0108 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    AkEvent;                                       // 0x0110 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDialogEmoteDefinition*                      Emote;                                         // 0x0118 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UDialogEmoteSequence*                        EmoteSequence;                                 // 0x0120 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class UDialogParametersDefinition*                 Parameters;                                    // 0x0128 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FDialogParameters                           ParametersOverrides;                           // 0x0130 (0x0038) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StartDelay;                                    // 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDialogResponse_ScriptedSpeak*               Response;                                      // 0x0170 (0x0008) [0x0000000006400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_NoClear | CPF_EditInline)
	int32_t                                            SequenceID;                                    // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PlayingDialogID;                               // 0x017C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_Speak");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_TargetPriority
// 0x0018 (0x00E8 - 0x0100)
class UGearboxSeqAct_TargetPriority : public USequenceAction
{
public:
	class TArray<class AActor*>                        AITargets;                                     // 0x00E8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              PriorityModifier;                              // 0x00F8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_TargetPriority");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_TriggerDialog
// 0x0048 (0x0100 - 0x0148)
class UGearboxSeqAct_TriggerDialog : public USeqAct_Latent
{
public:
	class UDialogEventList*                            List;                                          // 0x0100 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDialogEvent*                                Event;                                         // 0x0108 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     Subject;                                       // 0x0110 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     Target;                                        // 0x0118 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     Instigator;                                    // 0x0120 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              StartDelay;                                    // 0x0128 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bTriggerOnContext : 1;                         // 0x012C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bNearContext : 1;                              // 0x012C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bFriendly : 1;                                 // 0x012C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnemy : 1;                                    // 0x012C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bNotContext : 1;                               // 0x012C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bTriggeredStarted : 1;                         // 0x012C (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	class UGearboxDialogNameTag*                       SpeakerName;                                   // 0x0130 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SequenceID;                                    // 0x0138 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PlayingDialogID;                               // 0x013C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PlayingSequenceID;                             // 0x0140 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_TriggerDialog");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSkeletalMeshComponent
// 0x0010 (0x0980 - 0x0990)
class UGearboxSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	float                                              FOV;                                           // 0x0980 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                           UnknownData00[0xC];                            // 0x0984 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSkeletalMeshComponent");
		}

		return uClassPointer;
	};

	void SetFOV(float NewFOV);
};

// Class GearboxFramework.GearboxStaticMeshComponent
// 0x0010 (0x0410 - 0x0420)
class UGearboxStaticMeshComponent : public UStaticMeshComponent
{
public:
	float                                              FOV;                                           // 0x0410 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                           UnknownData00[0xC];                            // 0x0414 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxStaticMeshComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GestaltSkeletalMeshDefinition
// 0x0050 (0x0058 - 0x00A8)
class UGestaltSkeletalMeshDefinition : public UGBXDefinition
{
public:
	class USkeletalMesh*                               GestaltSkeletalMesh;                           // 0x0058 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	uint32_t                                           bStaticMeshRigidBodyMesh : 1;                  // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class TArray<struct FGestaltInfo>                  GestaltInfos;                                  // 0x0068 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FGestaltAccessoryNameEntry>    GestaltAccessoryNames;                         // 0x0078 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FGestaltSocketRemapEntry>      GestaltSocketMappings;                         // 0x0088 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FGestaltPartBoundsEntry>       GestaltPartBounds;                             // 0x0098 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GestaltSkeletalMeshDefinition");
		}

		return uClassPointer;
	};

	void InitGestaltAccessoryMeshDataFromParts(class USkeletalMesh* MeshToBorrowBonesFrom, class UGestaltPartMatrices* AccessoryMatrices, class USkeletalMeshComponent* TargetComponent, class TArray<struct FGestaltPartPermutation>& PermutationConfiguration);
	void InitGestaltMeshDataFromParts(class USkeletalMeshComponent* TargetComponent, class TArray<struct FName>& PartMeshNames);
};

// Class GearboxFramework.GFxActorMoviePool
// 0x0028 (0x0058 - 0x0080)
class UGFxActorMoviePool : public UObject
{
public:
	class UGFxMovieDefinition*                         MovieDefinition;                               // 0x0058 (0x0008) [0x0000000000000000]               
	class TArray<struct FMovieInstanceArray>           Pools;                                         // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UIGFxActorMovie*>               MovieTargets;                                  // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxActorMoviePool");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float X, float& out_YL, float& out_YPos);
	class FString GetPoolName(int32_t Index);
	class FString PoolStyleString(EGFxMoviePooling Pooling);
	void MovieStateChanged(class UGearboxGFxMovie* Movie);
};

// Class GearboxFramework.GFxMovieDefinition
// 0x00A8 (0x0058 - 0x0100)
class UGFxMovieDefinition : public UGBXDefinition
{
public:
	struct FPointer                                    VfTable_IIBehaviorProvider;                    // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class USwfMovie*                                   SwfMovie;                                      // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      SwfMovieClass;                                 // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGearboxGFxMovie*                            Movie;                                         // 0x0070 (0x0008) [0x0000000020000000]  CPF_Deprecated)
	class UClass*                                      ExternalInterfaceClass;                        // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bTakeFocus : 1;                                // 0x0080 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bStartPaused : 1;                              // 0x0080 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bIsModalGameMenu : 1;                          // 0x0080 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bOverrideWorldLighting : 1;                    // 0x0080 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	float                                              FadeInSeconds;                                 // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutSeconds;                                // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UGFxMovieDrawStyle*                          DrawStyle;                                     // 0x0090 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	int32_t                                            DepthPriority;                                 // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	EGFxMoviePooling                                   PoolType;                                      // 0x009C (0x0001) [0x0000000000000001] (CPF_Edit)    
	EGFxScaleMode                                      ScaleMode;                                     // 0x009D (0x0001) [0x0000000000000001] (CPF_Edit)    
	EGFxAlign                                          AlignMode;                                     // 0x009E (0x0001) [0x0000000000000001] (CPF_Edit)    
	EGFxTimingMode                                     TimingMode;                                    // 0x009F (0x0001) [0x0000000000000001] (CPF_Edit)    
	EGFxRenderTextureMode                              RenderTextureMode;                             // 0x00A0 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       Pool;                                          // 0x00A4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UGFxMovieState*>                CustomStates;                                  // 0x00B0 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<struct FName>                         AutoActivateStates;                            // 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FGFxMenuLink>                  MenuLinks;                                     // 0x00D0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UTextureRenderTarget2D*                      RenderTexture;                                 // 0x00E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UGFxMovieState*>                BaseMovieStates;                               // 0x00E8 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	class UBehaviorProviderDefinition*                 BehaviorProviderDefinition;                    // 0x00F8 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieDefinition");
		}

		return uClassPointer;
	};

	void OnSetViewport(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnClipUnloaded(class UObject* Clip, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnClipLoaded(class UObject* Clip, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnClose(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnStart(struct FBehaviorConsumerHandle& ConsumerHandle);
	class UGFxMovieDefinition* FindMovieLink(const struct FName& MovieName);
	void PostMovieStart(class UGearboxGFxMovie* StartedMovie);
	class UGearboxGFxMovie* SpawnPlayerMovie(class AGearboxPlayerController* Owner, class UIGFxActorMovie* TargetActor, class UObject* optionalContextObject);
	bool SupportsStatePooling();
	EGFxMoviePooling GetPoolStyle();
};

// Class GearboxFramework.GFxMovieDrawStyle
// 0x0018 (0x0058 - 0x0070)
class UGFxMovieDrawStyle : public UObject
{
public:
	class UGearboxGFxMovie*                            Movie;                                         // 0x0058 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIGFxActorMovie*                             TargetActor_Object;                            // 0x0060 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIGFxActorMovie*                             TargetActor_Interface;                         // 0x0068 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieDrawStyle");
		}

		return uClassPointer;
	};

	class FString GetStyleDebugString();
};

// Class GearboxFramework.GFxMovieDrawStyleHUD
// 0x0048 (0x0070 - 0x00B8)
class UGFxMovieDrawStyleHUD : public UGFxMovieDrawStyle
{
public:
	class TArray<struct FHUDAnchorPoint>               AnchorPoints;                                  // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FHUDCoordValue                              MovieDimensions[0x2];                          // 0x0080 (0x0020) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCacheValid : 1;                               // 0x00A0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              MovieScreenPos[0x4];                           // 0x00A4 (0x0010) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieDrawStyleHUD");
		}

		return uClassPointer;
	};

	bool eventRequiresClientInstance();
};

// Class GearboxFramework.GFxMovieDrawStyleRTT
// 0x0008 (0x0070 - 0x0078)
class UGFxMovieDrawStyleRTT : public UGFxMovieDrawStyle
{
public:
	int32_t                                            TextureSize;                                   // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	EGFxRenderTextureMode                              RenderTextureMode;                             // 0x0074 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieDrawStyleRTT");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GFxMovieDrawStyleComponent
// 0x0000 (0x0078 - 0x0078)
class UGFxMovieDrawStyleComponent : public UGFxMovieDrawStyleRTT
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieDrawStyleComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GFxMovieDrawStyleMesh
// 0x0050 (0x0078 - 0x00C8)
class UGFxMovieDrawStyleMesh : public UGFxMovieDrawStyleComponent
{
public:
	class UMeshComponent*                              MeshComponentArchetype;                        // 0x0078 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMesh*                                 UseStaticMesh;                                 // 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               UseSkeletalMesh;                               // 0x0088 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       UseMeshInstanceName;                           // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaterialIndex;                                 // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterial*                                   OverrideMaterial;                              // 0x00A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       TextureParameterName;                          // 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMeshComponent*                              Component;                                     // 0x00B0 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UMaterialInstance*                           Mati;                                          // 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UMaterialInterface*                          OriginalMaterial;                              // 0x00C0 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieDrawStyleMesh");
		}

		return uClassPointer;
	};

	class FString GetStyleDebugString();
	bool eventRequiresClientInstance();
};

// Class GearboxFramework.GFxMovieDrawStyleSprite
// 0x0010 (0x0078 - 0x0088)
class UGFxMovieDrawStyleSprite : public UGFxMovieDrawStyleComponent
{
public:
	int32_t                                            SpriteSize;                                    // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USpriteRTTComponent*                         TheSprite;                                     // 0x0080 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieDrawStyleSprite");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GFxMovieDrawStyleInstanceData
// 0x0040 (0x0078 - 0x00B8)
class UGFxMovieDrawStyleInstanceData : public UGFxMovieDrawStyleRTT
{
public:
	struct FName                                       ComponentIDName;                               // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       MatIndexName;                                  // 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAlwaysInstance : 1;                           // 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UMaterial*                                   MatiSource;                                    // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       TextureParameterName;                          // 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMeshComponent*                              Component;                                     // 0x00A0 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	int32_t                                            MaterialIndex;                                 // 0x00A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UMaterialInstance*                           Mati;                                          // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieDrawStyleInstanceData");
		}

		return uClassPointer;
	};

	bool eventRequiresClientInstance();
};

// Class GearboxFramework.GFxMovieDrawStyleSplitscreen
// 0x0000 (0x0070 - 0x0070)
class UGFxMovieDrawStyleSplitscreen : public UGFxMovieDrawStyle
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieDrawStyleSplitscreen");
		}

		return uClassPointer;
	};

	bool eventRequiresClientInstance();
};

// Class GearboxFramework.GFxMovieManager
// 0x0020 (0x0058 - 0x0078)
class UGFxMovieManager : public UObject
{
public:
	class TArray<class AGearboxPlayerController*>      Subscribers;                                   // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UGFxActorMoviePool*>            MoviePools;                                    // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieManager");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	void ChangeMovieState(class UIGFxActorMovie* TargetActor, const struct FName& State, EChangeStatus Change, class AGearboxPlayerController* optionalPC);
	void Unsubscribe(class AGearboxPlayerController* PC);
	void Subscribe(class AGearboxPlayerController* PC);
	void UnregisterMoviesDrawnTo(class UPrimitiveComponent* PrimComp, class UIGFxActorMovie* TargetActor);
	void UnregisterTarget(class UIGFxActorMovie* TargetActor);
	void UnregisterMovie(class UGFxMovieDefinition* Definition, class UIGFxActorMovie* TargetActor);
	void RegisterMovie(class UGFxMovieDefinition* Definition, class UIGFxActorMovie* TargetActor);
};

// Class GearboxFramework.GFxMovieState
// 0x0028 (0x0058 - 0x0080)
class UGFxMovieState : public UObject
{
public:
	struct FName                                       StateName;                                     // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       DefaultState;                                  // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	EMovieStateMode                                    StateType;                                     // 0x0068 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FMovieStateData>               AllStates;                                     // 0x0070 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieState");
		}

		return uClassPointer;
	};

	class FString GetDebugString(class UGearboxGFxMovie* Movie, bool optionalBIncludeFlags);
	void ApplyMovieState(class UGearboxGFxMovie* Movie, class UClass* HandlerClass);
	int32_t FindMovieState(const struct FName& TheState);
	bool TestState(const struct FName& TheState, struct FMovieStateStruct& MovieState);
	int32_t ToggleState(const struct FName& TheState, struct FMovieStateStruct& MovieState);
	int32_t EnableState(const struct FName& TheState, bool optionalBEnable, struct FMovieStateStruct& MovieState);
};

// Class GearboxFramework.GFxMovieStateCustom
// 0x0010 (0x0080 - 0x0090)
class UGFxMovieStateCustom : public UGFxMovieState
{
public:
	class TArray<struct FMovieStateData>               CustomStates;                                  // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieStateCustom");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GFxMovieStateFlags
// 0x0010 (0x0080 - 0x0090)
class UGFxMovieStateFlags : public UGFxMovieState
{
public:
	class TArray<struct FName>                         CustomFlags;                                   // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieStateFlags");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GFxMovieStatePlayerAware
// 0x0028 (0x0080 - 0x00A8)
class UGFxMovieStatePlayerAware : public UGFxMovieState
{
public:
	float                                              LookAtThreshold;                               // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FMovieStateData>               LookStates;                                    // 0x0088 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	class TArray<struct FMovieRangeStateData>          RangeStates;                                   // 0x0098 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxMovieStatePlayerAware");
		}

		return uClassPointer;
	};

	int32_t EnableState(const struct FName& TheState, bool optionalBEnable, struct FMovieStateStruct& MovieState);
};

// Class GearboxFramework.GFxUIAction_Base
// 0x0018 (0x0058 - 0x0070)
class UGFxUIAction_Base : public UObject
{
public:
	class USwfMovie*                                   MovieTarget;                                   // 0x0058 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FName>                         ObjectTargetChain;                             // 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxUIAction_Base");
		}

		return uClassPointer;
	};

	void RunAction(class UGFxObject* Target, const class TArray<struct FGFxUIActionParam>& optionalOptParams);
};

// Class GearboxFramework.GFxUIAction_ApplyLayout
// 0x0000 (0x0070 - 0x0070)
class UGFxUIAction_ApplyLayout : public UGFxUIAction_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxUIAction_ApplyLayout");
		}

		return uClassPointer;
	};

	void RunAction(class UGFxObject* Target, const class TArray<struct FGFxUIActionParam>& optionalOptParams);
};

// Class GearboxFramework.GFxUIAction_ApplyLayoutToAll
// 0x0000 (0x0070 - 0x0070)
class UGFxUIAction_ApplyLayoutToAll : public UGFxUIAction_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxUIAction_ApplyLayoutToAll");
		}

		return uClassPointer;
	};

	void RunAction(class UGFxObject* Target, const class TArray<struct FGFxUIActionParam>& optionalOptParams);
};

// Class GearboxFramework.GFxUIAction_Attach
// 0x0028 (0x0070 - 0x0098)
class UGFxUIAction_Attach : public UGFxUIAction_Base
{
public:
	class USwfMovie*                                   Clip;                                          // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       InstanceName;                                  // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FName>                         AssociatedGFxTags;                             // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UGFxObject*                                  AttachedClip;                                  // 0x0090 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxUIAction_Attach");
		}

		return uClassPointer;
	};

	void ClearAttachedClip();
	class UGFxObject* GetAttachedClip();
	void RunAction(class UGFxObject* Target, const class TArray<struct FGFxUIActionParam>& optionalOptParams);
};

// Class GearboxFramework.GFxUIAction_Move
// 0x0008 (0x0070 - 0x0078)
class UGFxUIAction_Move : public UGFxUIAction_Base
{
public:
	struct FVector2D                                   Position;                                      // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxUIAction_Move");
		}

		return uClassPointer;
	};

	void RunAction(class UGFxObject* Target, const class TArray<struct FGFxUIActionParam>& optionalOptParams);
};

// Class GearboxFramework.GFxUIAction_Remove
// 0x0000 (0x0070 - 0x0070)
class UGFxUIAction_Remove : public UGFxUIAction_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxUIAction_Remove");
		}

		return uClassPointer;
	};

	void RunAction(class UGFxObject* Target, const class TArray<struct FGFxUIActionParam>& optionalOptParams);
};

// Class GearboxFramework.GFxUIAction_RemoveAll
// 0x0000 (0x0070 - 0x0070)
class UGFxUIAction_RemoveAll : public UGFxUIAction_Base
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxUIAction_RemoveAll");
		}

		return uClassPointer;
	};

	void RunAction(class UGFxObject* Target, const class TArray<struct FGFxUIActionParam>& optionalOptParams);
};

// Class GearboxFramework.GFxUIAction_SetString
// 0x0020 (0x0070 - 0x0090)
class UGFxUIAction_SetString : public UGFxUIAction_Base
{
public:
	class FString                                      PathToTextVariable;                            // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      LocalizedText;                                 // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxUIAction_SetString");
		}

		return uClassPointer;
	};

	void RunAction(class UGFxObject* Target, const class TArray<struct FGFxUIActionParam>& optionalOptParams);
};

// Class GearboxFramework.GFxUIAction_TargetGFxTagBase
// 0x0008 (0x0070 - 0x0078)
class UGFxUIAction_TargetGFxTagBase : public UGFxUIAction_Base
{
public:
	struct FName                                       TargetGFxTag;                                  // 0x0070 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxUIAction_TargetGFxTagBase");
		}

		return uClassPointer;
	};

	void RunAction(class UGFxObject* Target, const class TArray<struct FGFxUIActionParam>& optionalOptParams);
};

// Class GearboxFramework.GFxUIAction_ToggleGFxTagVisibility
// 0x0008 (0x0078 - 0x0080)
class UGFxUIAction_ToggleGFxTagVisibility : public UGFxUIAction_TargetGFxTagBase
{
public:
	EChangeStatus                                      ChangeStatus;                                  // 0x0078 (0x0001) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GFxUIAction_ToggleGFxTagVisibility");
		}

		return uClassPointer;
	};

	void RunAction(class UGFxObject* Target, const class TArray<struct FGFxUIActionParam>& optionalOptParams);
};

// Class GearboxFramework.IAIInterface
// 0x0000 (0x0058 - 0x0058)
class UIAIInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IAIInterface");
		}

		return uClassPointer;
	};

	class UIAIInterface* GetAIChild(int32_t ChildIdx);
	int32_t GetNumAIChildren();
	void InitSequence(class UActionSequence* NewSequence);
	class UPawnAllegiance* GetAllegiance();
	class UAIDefinition* GetAIDefinition();
	void SetAIComponent(class UAIComponent* NewAIComp);
	class UAIComponent* GetAIComponent();
	class UIAIInterface* GetAIParent();
	struct FVector GetAILocation();
	class AActor* GetAIActor();
	bool CanTickAI();
};

// Class GearboxFramework.IBehaviorConsumer
// 0x0000 (0x0058 - 0x0058)
class UIBehaviorConsumer : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IBehaviorConsumer");
		}

		return uClassPointer;
	};

	struct FBehaviorConsumerHandle GetBehaviorConsumerHandle();
};

// Class GearboxFramework.IBehaviorProvider
// 0x0000 (0x0058 - 0x0058)
class UIBehaviorProvider : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IBehaviorProvider");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IBehaviorTriggerOwner
// 0x0000 (0x0058 - 0x0058)
class UIBehaviorTriggerOwner : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IBehaviorTriggerOwner");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IBodyProvider
// 0x0000 (0x0058 - 0x0058)
class UIBodyProvider : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IBodyProvider");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ICloak
// 0x0000 (0x0058 - 0x0058)
class UICloak : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ICloak");
		}

		return uClassPointer;
	};

	void SetReplicatedCloak(bool bInReplicatedCloak);
	void SetCloakComponent(class UCloakComponent* InComponent);
	class UCloakComponent* GetCloakComponent();
};

// Class GearboxFramework.ICustomEvent
// 0x0000 (0x0058 - 0x0058)
class UICustomEvent : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ICustomEvent");
		}

		return uClassPointer;
	};

	void eventRunCustomEvent(const struct FName& EventName, class UObject* optionalEventInstigator, class UObject* optionalOtherEventParticipantObject, const struct FBehaviorParameters& optionalEventData);
};

// Class GearboxFramework.IDamageReceiver
// 0x0000 (0x0058 - 0x0058)
class UIDamageReceiver : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IDamageReceiver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IDialogEditorHelper
// 0x0000 (0x0058 - 0x0058)
class UIDialogEditorHelper : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IDialogEditorHelper");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IDialogEventListener
// 0x0000 (0x0058 - 0x0058)
class UIDialogEventListener : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IDialogEventListener");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IDialogResponse
// 0x0000 (0x0058 - 0x0058)
class UIDialogResponse : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IDialogResponse");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IDialogSpeaker
// 0x0000 (0x0058 - 0x0058)
class UIDialogSpeaker : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IDialogSpeaker");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IPureEchoSpeaker
// 0x0000 (0x0058 - 0x0058)
class UIPureEchoSpeaker : public UIDialogSpeaker
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IPureEchoSpeaker");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IExpandableListEntry
// 0x0000 (0x0058 - 0x0058)
class UIExpandableListEntry : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IExpandableListEntry");
		}

		return uClassPointer;
	};

	void GetCategoryPair(struct FCategoryPair& OutCategoryPair);
	void GetEntryName(class FString& OutEntryName);
};

// Class GearboxFramework.IFeatureConsumer
// 0x0000 (0x0058 - 0x0058)
class UIFeatureConsumer : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IFeatureConsumer");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IFeatureProvider
// 0x0000 (0x0058 - 0x0058)
class UIFeatureProvider : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IFeatureProvider");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IFlagProvider
// 0x0000 (0x0058 - 0x0058)
class UIFlagProvider : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IFlagProvider");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IGbxMessageListener
// 0x0000 (0x0058 - 0x0058)
class UIGbxMessageListener : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IGbxMessageListener");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IGBXTargetSearch
// 0x0000 (0x0058 - 0x0058)
class UIGBXTargetSearch : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IGBXTargetSearch");
		}

		return uClassPointer;
	};

	class AActor* GetTargetSearchDefaultTarget();
	void GetTargetSearchSourceLocationAndRotation(struct FVector& OutLocation, struct FRotator& OutRotation);
	class AActor* GetTargetSearchSourceActor();
};

// Class GearboxFramework.IGFxActorMovie
// 0x0000 (0x0058 - 0x0058)
class UIGFxActorMovie : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IGFxActorMovie");
		}

		return uClassPointer;
	};

	void GFx_NotifyMovieDestroy(class UGearboxGFxMovie* Movie);
	void GFx_NotifyMovieCreate(class UGearboxGFxMovie* Movie);
	class AActor* GFx_GetMovieActor();
};

// Class GearboxFramework.IGFxMovieLocator
// 0x0000 (0x0058 - 0x0058)
class UIGFxMovieLocator : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IGFxMovieLocator");
		}

		return uClassPointer;
	};

	class UGFxMoviePlayer* GetAGFxMovie();
	class UIGFxUIManager* GetAGFxUIManager();
};

// Class GearboxFramework.IGFxObjectManager
// 0x0000 (0x0058 - 0x0058)
class UIGFxObjectManager : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IGFxObjectManager");
		}

		return uClassPointer;
	};

	void extOnClipUnloaded(class UGFxObject* Clip);
	void extOnClipLoaded(class UGFxObject* Clip);
	bool GetIsSpectatorMode();
	class UGFxLayoutDefinition* GetLayoutDefinition();
	class UGearboxGFxObjectManager* GetGFxObjectManager();
};

// Class GearboxFramework.IGFxUIManager
// 0x0000 (0x0058 - 0x0058)
class UIGFxUIManager : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IGFxUIManager");
		}

		return uClassPointer;
	};

	class TArray<class UGFxObject*> ResolveTargetObjectsForAction(class UGFxUIAction_Base* Action, class UGFxMoviePlayer* Movie);
	class UGFxMoviePlayer* ResolveTargetMovie(class USwfMovie* Movie);
	class UGFxMoviePlayer* ResolveTargetMovieForAction(class UGFxUIAction_Base* Action);
	void RunGFxUIAction(struct FQueuedGFxUIAction& Action);
	void RunGFxUIActions();
	void QueueGFxUIAction(class UGFxUIAction_Base* inAction, class UGFxMoviePlayer* optionalKnownTargetMovie, const class TArray<struct FGFxUIActionParam>& optionalOptParams, bool optionalBRunImmediately);
};

// Class GearboxFramework.INounAttributeProvider
// 0x0000 (0x0058 - 0x0058)
class UINounAttributeProvider : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.INounAttributeProvider");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.InterpComponent
// 0x00F0 (0x0090 - 0x0180)
class UInterpComponent : public UActorComponent
{
public:
	uint32_t                                           bKeep : 1;                                     // 0x0090 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bUpdateVelocity : 1;                           // 0x0090 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	uint32_t                                           bInterpYawOnly : 1;                            // 0x0090 (0x0004) [0x0000000000002002] [0x00000004] (CPF_Const | CPF_Transient)
	uint32_t                                           bBallistics : 1;                               // 0x0090 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bMatchRotationToVelocity : 1;                  // 0x0090 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bSetToInitialWhenFinished : 1;                 // 0x0090 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	class APawn*                                       InterpPawn;                                    // 0x0098 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class AActor*                                      InterpActor;                                   // 0x00A0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class AController*                                 InterpController;                              // 0x00A8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpLocTime;                                 // 0x00B0 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FVector                                     InterpLocDiff;                                 // 0x00B4 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	EInterpMode                                        InterpLocMode;                                 // 0x00C0 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	EInterpMode                                        InterpRotMode;                                 // 0x00C1 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	EInterpMode                                        InterpContRotMode;                             // 0x00C2 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	EInterpMode                                        InterpRelRotMode;                              // 0x00C3 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	EInterpMode                                        InterpRelLocMode;                              // 0x00C4 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpLocElapsedTime;                          // 0x00C8 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpRotTime;                                 // 0x00CC (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FRotator                                    InterpRotDiff;                                 // 0x00D0 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpRotElapsedTime;                          // 0x00DC (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpContRotTime;                             // 0x00E0 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FRotator                                    InterpContRotDiff;                             // 0x00E4 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpContRotElapsedTime;                      // 0x00F0 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpRelRotTime;                              // 0x00F4 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FRotator                                    InterpRelRotDiff;                              // 0x00F8 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpRelRotElapsedTime;                       // 0x0104 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint8_t                                           UnknownData00[0x8];                            // 0x0108 (0x0008) MISSED OFFSET
	struct FQuat                                       InterpRelRotStart;                             // 0x0110 (0x0010) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FQuat                                       InterpRelRotGoal;                              // 0x0120 (0x0010) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpRelLocTime;                              // 0x0130 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FVector                                     InterpRelLocDiff;                              // 0x0134 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpRelLocElapsedTime;                       // 0x0140 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              BallisticsGravity;                             // 0x0144 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              BallisticsStartTime;                           // 0x0148 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              BallisticsTotalTime;                           // 0x014C (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     BallisticsStartLoc;                            // 0x0150 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     BallisticsStartVelocity;                       // 0x015C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    InitialRotation;                               // 0x0168 (0x000C) [0x0000000000002000] (CPF_Transient)
	uint8_t                                           UnknownData01[0xC];                            // 0x0174 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.InterpComponent");
		}

		return uClassPointer;
	};

	struct FVector InterpBallisticsByTime(const struct FVector& StartLoc, const struct FVector& EndLoc, float LeapTime, float LeapGravity);
	float InterpBallistics(const struct FVector& StartLoc, const struct FVector& EndLoc, float LeapSpeed, float LeapAngle);
	void InterpRelativeRotation(const struct FRotator& NewRelRot, float InterpTime, bool bLinear);
	void InterpRelativeLocation(const struct FVector& NewRelLoc, float InterpTime, bool bLinear);
	void InterpControllerRotation(const struct FRotator& NewRot, float InterpTime, bool bLinear);
	void InterpDeltaRotation(const struct FRotator& DeltaRot, float InterpTime, bool optionalBLinear, bool optionalBYawOnly);
	void InterpRotation(const struct FRotator& NewRot, float InterpTime, bool optionalBLinear, bool optionalBYawOnly);
	void InterpDeltaLocation(const struct FVector& DeltaLoc, float InterpTime, bool optionalBLinear, bool optionalBNoZ);
	void InterpLocation(const struct FVector& NewLoc, float InterpTime, bool optionalBLinear, bool optionalBNoZ);
	void Stop();
	static class UInterpComponent* Get(class AActor* Actor);
};

// Class GearboxFramework.InterpTrackInstSpeak
// 0x0008 (0x0058 - 0x0060)
class UInterpTrackInstSpeak : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                            // 0x0058 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.InterpTrackInstSpeak");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.InterpTrackSpeak
// 0x0058 (0x00A0 - 0x00F8)
class UInterpTrackSpeak : public UInterpTrack
{
public:
	class TArray<struct FSpeakTrackKey>                SpeakCues;                                     // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UGearboxDialogNameTag*                       TargetNameTag;                                 // 0x00B0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDialogParametersDefinition*                 Parameters;                                    // 0x00B8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FDialogParameters                           ParametersOverrides;                           // 0x00C0 (0x0038) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.InterpTrackSpeak");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.IPathingObstacle
// 0x0000 (0x0058 - 0x0058)
class UIPathingObstacle : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IPathingObstacle");
		}

		return uClassPointer;
	};

	class UPathingObstacleInfo* GetObstacleInfo(bool optionalBFillInfo);
	void SetObstacleInfo(class UPathingObstacleInfo* Info);
	class AActor* GetObstacleActor();
};

// Class GearboxFramework.ISpawnPoint
// 0x0000 (0x0058 - 0x0058)
class UISpawnPoint : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ISpawnPoint");
		}

		return uClassPointer;
	};

	EInitialActionType GetInitialAction();
	class AActor* GetInitialDestination();
};

// Class GearboxFramework.IStanceInterface
// 0x0000 (0x0058 - 0x0058)
class UIStanceInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IStanceInterface");
		}

		return uClassPointer;
	};

	class UStanceComponent* GetStanceComponent();
};

// Class GearboxFramework.IStreamingDataEvent
// 0x0000 (0x0058 - 0x0058)
class UIStreamingDataEvent : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.IStreamingDataEvent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ITimerBehavior
// 0x0000 (0x0058 - 0x0058)
class UITimerBehavior : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ITimerBehavior");
		}

		return uClassPointer;
	};

	bool SetTimerState(EBehaviorTimerID TimerId, const struct FBehaviorTimerState& TimerState);
	bool GetTimerState(EBehaviorTimerID TimerId, struct FBehaviorTimerState& TimerState);
	float GetTimeSeconds();
};

// Class GearboxFramework.LeviathanService
// 0x0008 (0x0058 - 0x0060)
class ULeviathanService : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.LeviathanService");
		}

		return uClassPointer;
	};

	void OnExternalUIChanged(bool bIsOpening);
	static class ULeviathanService* GetLeviathanService();
};

// Class GearboxFramework.MindTargetInfo
// 0x0328 (0x0058 - 0x0380)
class UMindTargetInfo : public UObject
{
public:
	class AActor*                                      Target;                                        // 0x0058 (0x0008) [0x0000000000000000]               
	class AGearboxMind*                                Mind;                                          // 0x0060 (0x0008) [0x0000000000000000]               
	class UAIComponent*                                AIComp;                                        // 0x0068 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UITargetable*                                Targetable_Object;                             // 0x0070 (0x0008) [0x0000000000000000] 
	class UITargetable*                                Targetable_Interface;                          // 0x0078 (0x0008) [0x0000000000000000]               
	class UMindTargetInfo*                             ParentInfo;                                    // 0x0080 (0x0008) [0x0000000000000000]               
	class UTargetingComponent*                         TargetingComp;                                 // 0x0088 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              Priority;                                      // 0x0090 (0x0004) [0x0000000000000000]               
	float                                              OnePriority;                                   // 0x0094 (0x0004) [0x0000000000000000]               
	uint32_t                                           bShouldRemove : 1;                             // 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOneMemberAware : 1;                           // 0x0098 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAwareBecauseOfGroup : 1;                      // 0x0098 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            PriorityBucket;                                // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            LastPriorityBucket;                            // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              BonusPriority;                                 // 0x00A4 (0x0004) [0x0000000000000000]               
	float                                              LastValidTargetTime;                           // 0x00A8 (0x0004) [0x0000000000000000]               
	struct FFlag                                       IsPlayer;                                      // 0x00AC (0x0010) [0x4000000000000000]               
	struct FFlag                                       IsFriendly;                                    // 0x00BC (0x0010) [0x4000000000000000]               
	float                                              TimeAsKnownTarget;                             // 0x00CC (0x0004) [0x4000000000000000]               
	float                                              TimeAsCurrentTarget;                           // 0x00D0 (0x0004) [0x4000000000000000]               
	float                                              TimeSinceCurrentTarget;                        // 0x00D4 (0x0004) [0x4000000000000000]               
	struct FFlag                                       IAmConsciousOfTarget;                          // 0x00D8 (0x0010) [0x4000000000000000]               
	struct FFlag                                       GroupIsConsciousOfTarget;                      // 0x00E8 (0x0010) [0x4000000000000000]               
	class TArray<struct FPriorityDebugStruct>          PriorityDebugRecords;                          // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FHitTargetRecord                            HitTargetHistory[0x5];                         // 0x0108 (0x0064) [0x0000000000000000]               
	class UIAIInterface*                               MovingAI_Object;                               // 0x0170 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIAIInterface*                               MovingAI_Interface;                            // 0x0178 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FMap_Mirror                                 ResourceMap;                                   // 0x0180 (0x0050) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 ClusterMap;                                    // 0x01D0 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	ETargetExposure                                    Exposure;                                      // 0x0220 (0x0001) [0x0000000000000000]               
	ETargetExposure                                    CoverExposure;                                 // 0x0221 (0x0001) [0x0000000000000000]               
	EAwareness                                         Awareness;                                     // 0x0222 (0x0001) [0x0000000000000000]               
	float                                              ExposureChangeTime;                            // 0x0224 (0x0004) [0x0000000000000000]               
	struct FFlag                                       Exposed;                                       // 0x0228 (0x0010) [0x4000000000000000]               
	float                                              TargetExposureToMe;                            // 0x0238 (0x0004) [0x4000000000000000]               
	float                                              MyExposureToTarget;                            // 0x023C (0x0004) [0x4000000000000000]               
	float                                              LastKnownExposureDistanceSquared;              // 0x0240 (0x0004) [0x0000000000000000]               
	class UAwarenessDefinition*                        AwarenessDef;                                  // 0x0248 (0x0008) [0x0000000000000000]               
	float                                              LastSenseTime;                                 // 0x0250 (0x0004) [0x0000000000000000]               
	float                                              LastAwarenessUpdateTime;                       // 0x0254 (0x0004) [0x0000000000000000]               
	struct FFlag                                       Seen;                                          // 0x0258 (0x0010) [0x4000000000000000]               
	struct FFlag                                       Aware;                                         // 0x0268 (0x0010) [0x4000000000000000]               
	struct FFlag                                       Suspicious;                                    // 0x0278 (0x0010) [0x4000000000000000]               
	struct FFlag                                       Cautious;                                      // 0x0288 (0x0010) [0x4000000000000000]               
	struct FFlag                                       Oblivious;                                     // 0x0298 (0x0010) [0x4000000000000000]               
	float                                              AwarenessMeter;                                // 0x02A8 (0x0004) [0x4000000000000000]               
	float                                              AwarenessMeterRate;                            // 0x02AC (0x0004) [0x4000000000000000]               
	float                                              TimeSinceSeen;                                 // 0x02B0 (0x0004) [0x4000000000000000]               
	struct FVector                                     LastKnownVelocity;                             // 0x02B4 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastKnownLocation;                             // 0x02C0 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastKnownLocationOnNavMesh;                    // 0x02CC (0x000C) [0x0000000000000000]               
	struct FVector                                     LastKnownLocationTargetable;                   // 0x02D8 (0x000C) [0x0000000000000000]               
	float                                              LastKnownVertDistToNavMesh;                    // 0x02E4 (0x0004) [0x0000000000000000]               
	struct FGBXNavMeshPolyRef                          LastKnownNavMeshPoly;                          // 0x02E8 (0x0010) [0x0000000000000000]               
	struct FFlag                                       VisitedLastKnownLocation;                      // 0x02F8 (0x0010) [0x4000000000000000]               
	float                                              TimeOfLastAttack;                              // 0x0308 (0x0004) [0x0000000000000000]               
	float                                              TimeSinceAttackedMe;                           // 0x030C (0x0004) [0x4000000000000000]               
	float                                              TimeSinceAttackedGroup;                        // 0x0310 (0x0004) [0x4000000000000000]               
	struct FFlag                                       DirectPathExists;                              // 0x0314 (0x0010) [0x4000000000000000]               
	float                                              Distance;                                      // 0x0324 (0x0004) [0x4000000000000000]               
	float                                              Distance2D;                                    // 0x0328 (0x0004) [0x4000000000000000]               
	float                                              BoundsDistance2D;                              // 0x032C (0x0004) [0x4000000000000000]               
	float                                              DistanceEyeLOS;                                // 0x0330 (0x0004) [0x4000000000000000]               
	float                                              DotToTarget;                                   // 0x0334 (0x0004) [0x4000000000000000]               
	float                                              AngleToTarget;                                 // 0x0338 (0x0004) [0x4000000000000000]               
	float                                              DotFromTarget;                                 // 0x033C (0x0004) [0x4000000000000000]               
	float                                              AngleFromTarget;                               // 0x0340 (0x0004) [0x4000000000000000]               
	float                                              AimDotToTarget;                                // 0x0344 (0x0004) [0x4000000000000000]               
	float                                              AimAngleToTarget;                              // 0x0348 (0x0004) [0x4000000000000000]               
	float                                              DistanceVertical;                              // 0x034C (0x0004) [0x4000000000000000]               
	float                                              LeftDotToTarget;                               // 0x0350 (0x0004) [0x4000000000000000]               
	float                                              LeftAngleToTarget;                             // 0x0354 (0x0004) [0x4000000000000000]               
	float                                              DotTargetFacing;                               // 0x0358 (0x0004) [0x4000000000000000]               
	float                                              AngleTargetFacing;                             // 0x035C (0x0004) [0x4000000000000000]               
	struct FFlag                                       InThreatRadius;                                // 0x0360 (0x0010) [0x4000000000000000]               
	struct FFlag                                       IsDenThreat;                                   // 0x0370 (0x0010) [0x4000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.MindTargetInfo");
		}

		return uClassPointer;
	};

	bool IsTargetingMe();
};

// Class GearboxFramework.MoveNodeDefinition
// 0x0000 (0x0058 - 0x0058)
class UMoveNodeDefinition : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.MoveNodeDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.NavAnimDefinition
// 0x0010 (0x0058 - 0x0068)
class UNavAnimDefinition : public UMoveNodeDefinition
{
public:
	class TArray<struct FNavAnimData>                  NavAnimList;                                   // 0x0058 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.NavAnimDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PerchDefinition
// 0x0010 (0x0058 - 0x0068)
class UPerchDefinition : public UMoveNodeDefinition
{
public:
	class TArray<struct FPerchData>                    PerchList;                                     // 0x0058 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PerchDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PhysicsJumpDefinition
// 0x0010 (0x0058 - 0x0068)
class UPhysicsJumpDefinition : public UMoveNodeDefinition
{
public:
	class TArray<struct FPhysicsJumpData>              PhysicsJumpList;                               // 0x0058 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PhysicsJumpDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpawnPointDefinition
// 0x0010 (0x0058 - 0x0068)
class USpawnPointDefinition : public UMoveNodeDefinition
{
public:
	class TArray<struct FSpawnData>                    SpawnList;                                     // 0x0058 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnPointDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.MoveNodeTag
// 0x0020 (0x0058 - 0x0078)
class UMoveNodeTag : public UGBXDefinition
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                  // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bUpdateData : 1;                               // 0x0060 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bHasError : 1;                                 // 0x0060 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	class FString                                      ErrorString;                                   // 0x0068 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.MoveNodeTag");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.NavAnimTag
// 0x0020 (0x0078 - 0x0098)
class UNavAnimTag : public UMoveNodeTag
{
public:
	uint32_t                                           bTwoWay : 1;                                   // 0x0078 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseStretchy : 1;                              // 0x0078 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	struct FVector                                     Offset;                                        // 0x007C (0x000C) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class TArray<class USpecialMove_NavAnim*>          PreviewAnims;                                  // 0x0088 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.NavAnimTag");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PerchTag
// 0x0040 (0x0078 - 0x00B8)
class UPerchTag : public UMoveNodeTag
{
public:
	class UPerchType*                                  PerchType;                                     // 0x0078 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    IdleTime;                                      // 0x0080 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EPerchIdleType                                     IdleType;                                      // 0x0088 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    CooldownTime;                                  // 0x008C (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bCooldownInfinite : 1;                         // 0x0094 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bIndividualCooldownInfinite : 1;               // 0x0094 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bAlignToPerch : 1;                             // 0x0094 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bRotateToPerch : 1;                            // 0x0094 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bRequiresStart : 1;                            // 0x0094 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           bRequiresIdle : 1;                             // 0x0094 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           bRequiresEnd : 1;                              // 0x0094 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	struct FAIRange                                    IndividualCooldownTime;                        // 0x0098 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        CanUseExpression;                              // 0x00A0 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class TArray<class USpecialMove_Perch*>            PreviewAnims;                                  // 0x00A8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PerchTag");
		}

		return uClassPointer;
	};

	bool RequiresEnd();
	bool RequiresIdle();
	bool RequiresStart();
	bool RotateToPerch();
	bool AlignToPerch();
	EPerchIdleType GetIdleType();
};

// Class GearboxFramework.PhysicsJumpTag
// 0x0018 (0x0078 - 0x0090)
class UPhysicsJumpTag : public UMoveNodeTag
{
public:
	float                                              DefaultGravity;                                // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              WaitDelay;                                     // 0x007C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class USpecialMove_PhysicsJump*>      PreviewAnims;                                  // 0x0080 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PhysicsJumpTag");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpawnPointTag
// 0x0028 (0x0078 - 0x00A0)
class USpawnPointTag : public UMoveNodeTag
{
public:
	uint32_t                                           bUseStretchy : 1;                              // 0x0078 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bRemoveRootBoneScaling : 1;                    // 0x0078 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bAlignToMovement : 1;                          // 0x0078 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	struct FVector                                     Offset;                                        // 0x007C (0x000C) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	EStretchyType                                      StretchyType;                                  // 0x0088 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StretchyGravity;                               // 0x008C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class USpecialMove_Spawn*>            PreviewAnims;                                  // 0x0090 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnPointTag");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.NavAnimConnection
// 0x0000 (0x0058 - 0x0058)
class UNavAnimConnection : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.NavAnimConnection");
		}

		return uClassPointer;
	};

	class ANavAnimNode* GetNode();
};

// Class GearboxFramework.NavAnimNodeEditorComponent
// 0x0000 (0x0360 - 0x0360)
class UNavAnimNodeEditorComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.NavAnimNodeEditorComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.NoContextNeededAttributeContextResolver
// 0x0000 (0x0058 - 0x0058)
class UNoContextNeededAttributeContextResolver : public UAttributeContextResolver
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.NoContextNeededAttributeContextResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.NounAttributeValueResolver
// 0x0028 (0x0058 - 0x0080)
class UNounAttributeValueResolver : public UAttributeValueResolver
{
public:
	ENounReplicationStrategy                           ReplicationStrategy;                           // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                DefaultValue;                                  // 0x0060 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.NounAttributeValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ObjectFunctionAttributeValueResolver
// 0x0010 (0x0058 - 0x0068)
class UObjectFunctionAttributeValueResolver : public UAttributeValueResolver
{
public:
	class FString                                      FunctionCall;                                  // 0x0058 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ObjectFunctionAttributeValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ObjectPropertyContextResolver
// 0x0008 (0x0058 - 0x0060)
class UObjectPropertyContextResolver : public UAttributeContextResolver
{
public:
	struct FName                                       PropertyName;                                  // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ObjectPropertyContextResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PathingObstacleActor
// 0x0020 (0x0240 - 0x0260)
class APathingObstacleActor : public AActor
{
public:
	struct FPointer                                    VfTable_IIPathingObstacle;                     // 0x0240 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bEnabled : 1;                                  // 0x0248 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UPrimitiveComponent*                         CylinderComponent;                             // 0x0250 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPathingObstacleInfo*                        PathingInfo;                                   // 0x0258 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PathingObstacleActor");
		}

		return uClassPointer;
	};

	class UPathingObstacleInfo* GetObstacleInfo(bool optionalBFillInfo);
	void SetObstacleInfo(class UPathingObstacleInfo* Info);
	void OnToggle(class USeqAct_Toggle* ToggleAction);
	class AActor* GetObstacleActor();
};

// Class GearboxFramework.PathingObstacleInfo
// 0x01A0 (0x0058 - 0x01F8)
class UPathingObstacleInfo : public UObject
{
public:
	class AActor*                                      Actor;                                         // 0x0058 (0x0008) [0x0000000000000000]               
	class UIPathingObstacle*                           IPO_Object;                                    // 0x0060 (0x0008) [0x0000000000000000] 
	class UIPathingObstacle*                           IPO_Interface;                                 // 0x0068 (0x0008) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              EnemyRadius;                                   // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              HalfHeight;                                    // 0x0078 (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x007C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0088 (0x000C) [0x0000000000000000]               
	class UPawnAllegiance*                             Allegiance;                                    // 0x0098 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCanAvoid : 1;                                 // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOthersShouldNotAvoid : 1;                     // 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsPathing : 1;                                // 0x00A0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsAvoiding : 1;                               // 0x00A0 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bInFormation : 1;                              // 0x00A0 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              MaxSpeed;                                      // 0x00A4 (0x0004) [0x0000000000000000]               
	struct FVector                                     DesiredVelocity;                               // 0x00A8 (0x000C) [0x0000000000000000]               
	class AGearboxPawn*                                GBXPawn;                                       // 0x00B8 (0x0008) [0x0000000000000000]               
	class UGearboxNavigationHandle*                    NavHandle;                                     // 0x00C0 (0x0008) [0x0000000000000000]               
	float                                              HumanAvoidanceDot;                             // 0x00C8 (0x0004) [0x0000000000000000]               
	EHumanAvoidance                                    HumanAvoidance;                                // 0x00CC (0x0001) [0x0000000000000000]               
	struct FVector2D                                   LastOffset;                                    // 0x00D0 (0x0008) [0x0000000000000000]               
	float                                              LastBlockTime;                                 // 0x00D8 (0x0004) [0x0000000000000000]               
	struct FVector                                     PathGoal;                                      // 0x00DC (0x000C) [0x0000000000000000]               
	struct FVector                                     PathGoalVelocity;                              // 0x00E8 (0x000C) [0x0000000000000000]               
	struct FGBXNavMeshPolyRef                          PathPoly;                                      // 0x00F8 (0x0010) [0x0000000000000000]               
	struct FNavMeshPathParams                          PathParams;                                    // 0x0108 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     OldVelocity;                                   // 0x0168 (0x000C) [0x0000000000000000]               
	struct FVector                                     OccupancyLocation;                             // 0x0174 (0x000C) [0x0000000000000000]               
	class UActionSequencePawn*                         PawnAction;                                    // 0x0180 (0x0008) [0x0000000000000000]               
	struct FNavMeshData                                NavData;                                       // 0x0188 (0x0070) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PathingObstacleInfo");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PathingObstacleRenderComponent
// 0x0000 (0x0360 - 0x0360)
class UPathingObstacleRenderComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PathingObstacleRenderComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PatrolDestination
// 0x0010 (0x0240 - 0x0250)
class APatrolDestination : public AActor
{
public:
	class TArray<class APatrolDestination*>            NextPatrolPoints;                              // 0x0240 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PatrolDestination");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PawnRelevanceUtility
// 0x0000 (0x0058 - 0x0058)
class UPawnRelevanceUtility : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PawnRelevanceUtility");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PawnRelevanceUtilityCaching
// 0x0048 (0x0058 - 0x00A0)
class UPawnRelevanceUtilityCaching : public UPawnRelevanceUtility
{
public:
	uint32_t                                           CachingEnabled : 1;                            // 0x0058 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	float                                              MaxCacheTime;                                  // 0x005C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DistanceClose;                                 // 0x0060 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              DistanceMed;                                   // 0x0064 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheFreshnessTimeClose;                       // 0x0068 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheFreshnessTimeMed;                         // 0x006C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheFreshnessTimeFar;                         // 0x0070 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheFreshnessTimePlayer;                      // 0x0074 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheTimeFudgeFactorClose;                     // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheTimeFudgeFactorMed;                       // 0x007C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CacheTimeFudgeFactorFar;                       // 0x0080 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              HasMovedDistThreshold;                         // 0x0084 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              HasMovedDistThresholdRelevant;                 // 0x0088 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FRelevanceCacheStruct>         CachedRelevance;                               // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PawnRelevanceUtilityCaching");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PawnRelevanceUtilityFixedCost
// 0x0048 (0x00A0 - 0x00E8)
class UPawnRelevanceUtilityFixedCost : public UPawnRelevanceUtilityCaching
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                  // 0x00A0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	float                                              CloseDistanceSquared;                          // 0x00A8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MedDistanceSquared;                            // 0x00AC (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            MaxLineChecksPerFrame;                         // 0x00B0 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FRelevanceBucketStruct>        BucketData;                                    // 0x00B8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              MedAccumulatedTime;                            // 0x00C8 (0x0004) [0x0000000000000000]               
	float                                              FarAccumulatedTime;                            // 0x00CC (0x0004) [0x0000000000000000]               
	int32_t                                            MaxTimePerFrame;                               // 0x00D0 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    Buckets;                                       // 0x00D8 (0x0008) [0x0000000000001000] (CPF_Native)  
	uint32_t                                           Initialized : 1;                               // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PawnRelevanceUtilityFixedCost");
		}

		return uClassPointer;
	};

	void SetMaxLineChecks(int32_t CheckCount);
	void SetBucket(int32_t BucketNum, float BucketDistance, int32_t MaxLineChecks, int32_t MaxIterations);
	void ShowBucketSettings();
	void PrintBuckets();
};

// Class GearboxFramework.PerchEditorComponent
// 0x0000 (0x0360 - 0x0360)
class UPerchEditorComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PerchEditorComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PerchType
// 0x0000 (0x0058 - 0x0058)
class UPerchType : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PerchType");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PhysicsJumpConnection
// 0x0028 (0x0058 - 0x0080)
class UPhysicsJumpConnection : public UObject
{
public:
	float                                              Speed;                                         // 0x0058 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Angle;                                         // 0x005C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Time;                                          // 0x0060 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	float                                              Gravity;                                       // 0x0064 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FVector                                     Velocity;                                      // 0x0068 (0x000C) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class AActor*                                      Destination;                                   // 0x0078 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PhysicsJumpConnection");
		}

		return uClassPointer;
	};

	class APhysicsJumpNode* GetNode();
};

// Class GearboxFramework.PhysicsJumpNodeEditorComponent
// 0x0000 (0x0360 - 0x0360)
class UPhysicsJumpNodeEditorComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PhysicsJumpNodeEditorComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PhysicsStateExpressionEvaluator
// 0x0008 (0x0058 - 0x0060)
class UPhysicsStateExpressionEvaluator : public UExpressionEvaluator
{
public:
	EPhysics                                           PhysicsState;                                  // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bIsInState : 1;                                // 0x005C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PhysicsStateExpressionEvaluator");
		}

		return uClassPointer;
	};

	bool Evaluate(class UObject* ContextSource);
};

// Class GearboxFramework.PointSpawnerRenderingComponent
// 0x0000 (0x0360 - 0x0360)
class UPointSpawnerRenderingComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PointSpawnerRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PopUpDebugBarGraph
// 0x0048 (0x0058 - 0x00A0)
class UPopUpDebugBarGraph : public UObject
{
public:
	class TArray<struct FColumnDataStruct>             Columns;                                       // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      TitleText;                                     // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      BaseLineColor;                                 // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FColor                                      TitleTextColor;                                // 0x007C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ColumnWidth;                                   // 0x0080 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ColumnPadding;                                 // 0x0084 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ColumnMaxHeight;                               // 0x0088 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              TextScale;                                     // 0x008C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              TextPadding;                                   // 0x0090 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              TitleTextScale;                                // 0x0094 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              TitleTextPaddingY;                             // 0x0098 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ColumnValueTextOffsetY;                        // 0x009C (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PopUpDebugBarGraph");
		}

		return uClassPointer;
	};

	void Display(float DeltaSeconds, class UCanvas* Canvas);
	float GetValue(int32_t ColumnNdx);
	void SetValue(int32_t ColumnNdx, float NewValue);
	int32_t AddNewColumn(const struct FColor& ColumnColor, const class FString& HeaderText, float optionalValue);
	void AddTitleText(const class FString& NewTitleText);
};

// Class GearboxFramework.RandomAttributeValueResolver
// 0x0078 (0x0058 - 0x00D0)
class URandomAttributeValueResolver : public UAttributeValueResolver
{
public:
	uint32_t                                           bUseIntegerRandomization : 1;                  // 0x0058 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                LowerBound;                                    // 0x0060 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                UpperBound;                                    // 0x0080 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ValueLifetime;                                 // 0x00A0 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FSavedRandomValue>             SavedRandomValues;                             // 0x00C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.RandomAttributeValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.RegionDefinition
// 0x0000 (0x0058 - 0x0058)
class URegionDefinition : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.RegionDefinition");
		}

		return uClassPointer;
	};

	bool GetDefaultRegionGameStage(int32_t& MinGameStage, int32_t& MaxGameStage, int32_t& AwesomeLevel, int32_t& GameStageIncreaseOverPlayerLevel);
	bool TestRegionGameStage(bool optionalBDefaultGameStage, int32_t& GameStage, int32_t& AwesomeLevel);
	bool GetRegionGameStage(bool optionalBDefaultGameStage, int32_t& GameStage, int32_t& AwesomeLevel);
};

// Class GearboxFramework.RootMotionDefinition
// 0x0008 (0x0058 - 0x0060)
class URootMotionDefinition : public UGBXDefinition
{
public:
	ERootMotionMode                                    RootMotionMode;                                // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ERootBoneAxis                                      RootBoneOption[0x3];                           // 0x0059 (0x0003) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ERootMotionRotationMode                            RootRotationMode;                              // 0x005C (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ERootRotationOption                                RootRotationOption[0x3];                       // 0x005D (0x0003) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.RootMotionDefinition");
		}

		return uClassPointer;
	};

	bool CausesRootMotion();
};

// Class GearboxFramework.RotationComponent
// 0x00E0 (0x0090 - 0x0170)
class URotationComponent : public UActorComponent
{
public:
	uint32_t                                           bInitialized : 1;                              // 0x0090 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bPlayingTurnAnim : 1;                          // 0x0090 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bHuman : 1;                                    // 0x0090 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bForceMovementRotationToAimRotation : 1;       // 0x0090 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bIsLocallySpectatedHuman : 1;                  // 0x0090 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	struct FRotator                                    AimRotation;                                   // 0x0094 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    BodyRotation;                                  // 0x00A0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    PivotAimRotation;                              // 0x00AC (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    LastBodyRotation;                              // 0x00B8 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    AimRotationRate;                               // 0x00C4 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    BodyRotationRate;                              // 0x00D0 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              RotationRateModifier;                          // 0x00DC (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     DesiredAimLocation;                            // 0x00E0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    DesiredAimRotation;                            // 0x00EC (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    DesiredBodyRotation;                           // 0x00F8 (0x000C) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      FacingActor;                                   // 0x0108 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     FacingVector;                                  // 0x0110 (0x000C) [0x0000000000002000] (CPF_Transient)
	EFacingStyle                                       FacingStyle;                                   // 0x011C (0x0001) [0x0000000000002000] (CPF_Transient)
	EFacingPolicy                                      FacingPolicy;                                  // 0x011D (0x0001) [0x0000000000002000] (CPF_Transient)
	int32_t                                            TurnAnimGoalYaw;                               // 0x0120 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TurnAnimStartTime;                             // 0x0124 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TurnAnimStopTime;                              // 0x0128 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UInterpComponent*                            TurnInterpComponent;                           // 0x0130 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class AGearboxPawn*                                GBXPawn;                                       // 0x0138 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UAIComponent*                                AIComponent;                                   // 0x0140 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UStanceComponent*                            StanceComponent;                               // 0x0148 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class USpecialMoveComponent*                       SMComponent;                                   // 0x0150 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UGearboxNavigationHandle*                    NavHandle;                                     // 0x0158 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UGearboxAnimNodeAimOffset*                   AimOffset;                                     // 0x0160 (0x0008) [0x0000000000002000] (CPF_Transient)
	class USkelControl_HeadLook*                       HeadLook;                                      // 0x0168 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.RotationComponent");
		}

		return uClassPointer;
	};

	static bool IsHumanRotationDebugEnabled();
	static void ToggleHumanRotationDebug();
	static bool IsAIRotationDebugEnabled();
	static void ToggleAIRotationDebug();
	static void DrawRotationDebug();
	void TurnAnimFinished();
	void Initialize();
};

// Class GearboxFramework.ScreenSpaceManager
// 0x0068 (0x0058 - 0x00C0)
class UScreenSpaceManager : public UObject
{
public:
	class ULocalPlayer*                                pLocalPlayer;                                  // 0x0058 (0x0008) [0x0000000000000000]               
	int32_t                                            ViewWidth;                                     // 0x0060 (0x0004) [0x0000000000000000]               
	int32_t                                            ViewHeight;                                    // 0x0064 (0x0004) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0x8];                            // 0x0068 (0x0008) MISSED OFFSET
	struct FMatrix                                     ViewProjectionMatrix;                          // 0x0070 (0x0040) [0x0000000000000000]               
	uint32_t                                           bMatricesUpToDate : 1;                         // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                           UnknownData01[0xC];                            // 0x00B4 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ScreenSpaceManager");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqAct_AIScripted
// 0x0018 (0x0100 - 0x0118)
class USeqAct_AIScripted : public USeqAct_Latent
{
public:
	uint32_t                                           bCanAttack : 1;                                // 0x0100 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bFailIfAnyoneFails : 1;                        // 0x0100 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bOneFailed : 1;                                // 0x0100 (0x0004) [0x0000000000002002] [0x00000004] (CPF_Const | CPF_Transient)
	uint32_t                                           bOneSucceeded : 1;                             // 0x0100 (0x0004) [0x0000000000002002] [0x00000008] (CPF_Const | CPF_Transient)
	class UStanceDefinition*                           StanceDefinition;                              // 0x0108 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       ScriptedStateName;                             // 0x0110 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AIScripted");
		}

		return uClassPointer;
	};

	struct FName GetScriptedStateName();
	void Deactivate(class UIAIInterface* AIInterface, bool bInterrupted);
	void Activate(class UIAIInterface* AIInterface);
};

// Class GearboxFramework.SeqAct_AICombatVolume
// 0x0010 (0x0118 - 0x0128)
class USeqAct_AICombatVolume : public USeqAct_AIScripted
{
public:
	class AVolume*                                     CombatVolume;                                  // 0x0118 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ECombatVolumeOption                                Option;                                        // 0x0120 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bCombatVolumeOnlyLimitsRangedAttacks : 1;      // 0x0124 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AICombatVolume");
		}

		return uClassPointer;
	};

	void Activate(class UIAIInterface* AIInterface);
};

// Class GearboxFramework.SeqAct_AIScriptedAbort
// 0x0000 (0x0118 - 0x0118)
class USeqAct_AIScriptedAbort : public USeqAct_AIScripted
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AIScriptedAbort");
		}

		return uClassPointer;
	};

	void Activate(class UIAIInterface* AIInterface);
};

// Class GearboxFramework.SeqAct_AIScriptedAction
// 0x0058 (0x0118 - 0x0170)
class USeqAct_AIScriptedAction : public USeqAct_AIScripted
{
public:
	struct FAIScriptedActionParams                     Params;                                        // 0x0118 (0x0040) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class AActor*                                      ActionTarget;                                  // 0x0158 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UObject*>                       ActionParameters;                              // 0x0160 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AIScriptedAction");
		}

		return uClassPointer;
	};

	void Activate(class UIAIInterface* AIInterface);
};

// Class GearboxFramework.SeqAct_AIScriptedAnim
// 0x0008 (0x0118 - 0x0120)
class USeqAct_AIScriptedAnim : public USeqAct_AIScripted
{
public:
	class USpecialMoveDefinition*                      Anim;                                          // 0x0118 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AIScriptedAnim");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqAct_AIScriptedCover
// 0x0008 (0x0118 - 0x0120)
class USeqAct_AIScriptedCover : public USeqAct_AIScripted
{
public:
	class ACoverLink*                                  Cover;                                         // 0x0118 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AIScriptedCover");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqAct_AIScriptedHold
// 0x0000 (0x0118 - 0x0118)
class USeqAct_AIScriptedHold : public USeqAct_AIScripted
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AIScriptedHold");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqAct_AIScriptedLook
// 0x0010 (0x0118 - 0x0128)
class USeqAct_AIScriptedLook : public USeqAct_AIScripted
{
public:
	class AActor*                                      LookAt;                                        // 0x0118 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EFacingStyle                                       Style;                                         // 0x0120 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AIScriptedLook");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqAct_AIScriptedMove
// 0x0018 (0x0118 - 0x0130)
class USeqAct_AIScriptedMove : public USeqAct_AIScripted
{
public:
	class AActor*                                      LookAt;                                        // 0x0118 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class AGearboxAIMoveNode*                          Destination;                                   // 0x0120 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EInitialActionType                                 Action;                                        // 0x0128 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AIScriptedMove");
		}

		return uClassPointer;
	};

	void Activate(class UIAIInterface* AIInterface);
};

// Class GearboxFramework.SeqAct_AIScriptedProvoke
// 0x0008 (0x0118 - 0x0120)
class USeqAct_AIScriptedProvoke : public USeqAct_AIScripted
{
public:
	class AActor*                                      Provoker;                                      // 0x0118 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AIScriptedProvoke");
		}

		return uClassPointer;
	};

	void Activate(class UIAIInterface* AIInterface);
};

// Class GearboxFramework.SeqAct_AIScriptedTarget
// 0x0008 (0x0118 - 0x0120)
class USeqAct_AIScriptedTarget : public USeqAct_AIScripted
{
public:
	class AActor*                                      ScriptedTarget;                                // 0x0118 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AIScriptedTarget");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqAct_AITerritory
// 0x0018 (0x0118 - 0x0130)
class USeqAct_AITerritory : public USeqAct_AIScripted
{
public:
	class AActor*                                      TerritoryActor;                                // 0x0118 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ETerritoryType                                     MoveToArea;                                    // 0x0120 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bMoveToTerritory : 1;                          // 0x0124 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	class UTerritoryComponent*                         Territory;                                     // 0x0128 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AITerritory");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqAct_AISetEnabledActions
// 0x0018 (0x00E8 - 0x0100)
class USeqAct_AISetEnabledActions : public USequenceAction
{
public:
	EAISetActionMode                                   Mode;                                          // 0x00E8 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UAIActionTag*>                  ActionTags;                                    // 0x00F0 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AISetEnabledActions");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqAct_AllPlayersInVolume
// 0x0018 (0x00E8 - 0x0100)
class USeqAct_AllPlayersInVolume : public USequenceAction
{
public:
	class TArray<class AVolume*>                       Volumes;                                       // 0x00E8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bAllActorsInVolumes : 1;                       // 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCheckForAllPlayers : 1;                       // 0x00F8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_AllPlayersInVolume");
		}

		return uClassPointer;
	};

	bool AllPlayersInVolumes();
	bool PlayerIsInAVolume(class APlayerController* PC);
};

// Class GearboxFramework.SeqAct_CameraModeSet
// 0x0008 (0x00E8 - 0x00F0)
class USeqAct_CameraModeSet : public USequenceAction
{
public:
	class UGBXCameraModeSetDefinition*                 ModeSetDefinition;                             // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqAct_CameraModeSet");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqCond_CompareLocation
// 0x0008 (0x00C8 - 0x00D0)
class USeqCond_CompareLocation : public USequenceCondition
{
public:
	float                                              CheckRadius;                                   // 0x00C8 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqCond_CompareLocation");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqCond_CompareString
// 0x0008 (0x00C8 - 0x00D0)
class USeqCond_CompareString : public USequenceCondition
{
public:
	uint32_t                                           bCaseSensitive : 1;                            // 0x00C8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqCond_CompareString");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqCond_GetLanguage
// 0x0010 (0x00C8 - 0x00D8)
class USeqCond_GetLanguage : public USequenceCondition
{
public:
	class TArray<class FString>                        LangList;                                      // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqCond_GetLanguage");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_AllSpawned
// 0x0000 (0x0118 - 0x0118)
class USeqEvent_AllSpawned : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_AllSpawned");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_ArrivedAtMoveNode
// 0x0000 (0x0118 - 0x0118)
class USeqEvent_ArrivedAtMoveNode : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_ArrivedAtMoveNode");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_DenWave
// 0x0000 (0x0118 - 0x0118)
class USeqEvent_DenWave : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_DenWave");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_EncounterWaveComplete
// 0x0008 (0x0118 - 0x0120)
class USeqEvent_EncounterWaveComplete : public USequenceEvent
{
public:
	int32_t                                            CurrentWave;                                   // 0x0118 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_EncounterWaveComplete");
		}

		return uClassPointer;
	};

	void NotifyWaveComplete(int32_t nWave);
};

// Class GearboxFramework.SeqEvent_JumpAnimIdle
// 0x0000 (0x0118 - 0x0118)
class USeqEvent_JumpAnimIdle : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_JumpAnimIdle");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_JumpAnimStart
// 0x0000 (0x0118 - 0x0118)
class USeqEvent_JumpAnimStart : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_JumpAnimStart");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_JumpAnimStop
// 0x0000 (0x0118 - 0x0118)
class USeqEvent_JumpAnimStop : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_JumpAnimStop");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_LeavingMoveNode
// 0x0000 (0x0118 - 0x0118)
class USeqEvent_LeavingMoveNode : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_LeavingMoveNode");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_Provoked
// 0x0000 (0x0118 - 0x0118)
class USeqEvent_Provoked : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_Provoked");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_SpawnedActor
// 0x0010 (0x0118 - 0x0128)
class USeqEvent_SpawnedActor : public USequenceEvent
{
public:
	class ASpawner*                                    DestSpawner;                                   // 0x0118 (0x0008) [0x0000000000000000]               
	class AActor*                                      SpawnPoint;                                    // 0x0120 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_SpawnedActor");
		}

		return uClassPointer;
	};

	void eventNotifySpawnedActor(class AActor* SpawnedActor, class ASpawner* InDestSpawner, class AActor* InSpawnPoint, class AWorldInfo* InOriginator);
};

// Class GearboxFramework.SeqVar_GameInfo
// 0x0000 (0x00A0 - 0x00A0)
class USeqVar_GameInfo : public USeqVar_Object
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqVar_GameInfo");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ShowDebugHelpers
// 0x0000 (0x0058 - 0x0058)
class UShowDebugHelpers : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ShowDebugHelpers");
		}

		return uClassPointer;
	};

	static void DisplayMultiColumnDebugOutput(class AHUD* HUD, class TArray<struct FDebugEntryData>& DebugInfo, float& out_YL, float& out_YPos);
};

// Class GearboxFramework.SimpleMathValueResolver
// 0x0048 (0x0058 - 0x00A0)
class USimpleMathValueResolver : public UAttributeValueResolver
{
public:
	EMathValueResolverArg1Option                       Arg1Option;                                    // 0x0058 (0x0001) [0x0000000000000001] (CPF_Edit)    
	EMathValueResolverOperand                          Operand;                                       // 0x0059 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                Arg1Attribute;                                 // 0x0060 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                Argument;                                      // 0x0080 (0x0020) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SimpleMathValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SkelControl_HeadLook
// 0x0020 (0x0198 - 0x01B8)
class USkelControl_HeadLook : public USkelControlLookAt
{
public:
	struct FVector                                     AdditionalOffset;                              // 0x0198 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              OutOfRangeBlendTime;                           // 0x01A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOutOfRange : 1;                               // 0x01A8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bInitialized : 1;                              // 0x01A8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class AGearboxPawn*                                GBXPawn;                                       // 0x01B0 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SkelControl_HeadLook");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SnapshotRecord
// 0x0050 (0x0060 - 0x00B0)
class USnapshotRecord : public USnapshotInterface
{
public:
	struct FName                                       MyName;                                        // 0x0060 (0x0008) [0x0000000000000000]               
	class TArray<struct FName>                         Flags;                                         // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     Location;                                      // 0x0078 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0084 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0090 (0x000C) [0x0000000000000000]               
	struct FColor                                      FlagsColor;                                    // 0x009C (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FDebugListItem>                ExtraDebugItems;                               // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SnapshotRecord");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxPawnSnapshotRecord
// 0x0228 (0x00B0 - 0x02D8)
class UGearboxPawnSnapshotRecord : public USnapshotRecord
{
public:
	float                                              PawnIconZOffset;                               // 0x00B0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PawnExposureZOffset;                           // 0x00B4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              CollectionNameOffset;                          // 0x00B8 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FColor                                      LastVisibleConnectionColor;                    // 0x00BC (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FColor                                      RouteColor;                                    // 0x00C0 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FColor                                      OriginalRouteColor;                            // 0x00C4 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FColor                                      DestLineColor;                                 // 0x00C8 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FColor                                      BestCoverColor;                                // 0x00CC (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FColor                                      PotentialCoverColor;                           // 0x00D0 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FColor                                      StandardCoverColor;                            // 0x00D4 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UTexture2D*                                  AIDebugTexture;                                // 0x00D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       MyPawnName;                                    // 0x00E0 (0x0008) [0x0000000000000000]               
	struct FName                                       MyArchetypeName;                               // 0x00E8 (0x0008) [0x0000000000000000]               
	float                                              CurrentHealth;                                 // 0x00F0 (0x0004) [0x0000000000000000]               
	float                                              MaxHealth;                                     // 0x00F4 (0x0004) [0x0000000000000000]               
	float                                              DistanceToBestTarget;                          // 0x00F8 (0x0004) [0x0000000000000000]               
	float                                              BestTargetDistanceEyeLOS;                      // 0x00FC (0x0004) [0x0000000000000000]               
	float                                              BestTargetDistance2D;                          // 0x0100 (0x0004) [0x0000000000000000]               
	float                                              BestTargetBoundsDistance2D;                    // 0x0104 (0x0004) [0x0000000000000000]               
	class AActor*                                      BestTarget;                                    // 0x0108 (0x0008) [0x0000000000000000]               
	class TArray<struct FLocationInfo>                 TargetLocs;                                    // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FBoneAtom>                     Bones;                                         // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FDebugExposure>                Exposure;                                      // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class USkeletalMesh*                               DummyMesh;                                     // 0x0140 (0x0008) [0x0000000000000000]               
	int32_t                                            DummyMesh_LOD;                                 // 0x0148 (0x0004) [0x0000000000000000]               
	struct FSmartVector                                DesiredCoverLocation;                          // 0x014C (0x001C) [0x0000000000000000]               
	struct FSmartVector                                CurrentCoverLocation;                          // 0x0168 (0x001C) [0x0000000000000000]               
	uint8_t                                            FacingPolicy;                                  // 0x0184 (0x0001) [0x0000000000000000]               
	uint8_t                                            MyPhysics;                                     // 0x0185 (0x0001) [0x0000000000000000]               
	uint8_t                                            MyRootMotionMode;                              // 0x0186 (0x0001) [0x0000000000000000]               
	float                                              CoverSearchInnerRadius;                        // 0x0188 (0x0004) [0x0000000000000000]               
	float                                              CoverSearchOuterRadius;                        // 0x018C (0x0004) [0x0000000000000000]               
	float                                              CoverSearchAngle;                              // 0x0190 (0x0004) [0x0000000000000000]               
	struct FSmartVector                                CoverSearchOrigin;                             // 0x0194 (0x001C) [0x0000000000000000]               
	struct FVector                                     CoverSearchDirection;                          // 0x01B0 (0x000C) [0x0000000000000000]               
	class TArray<struct FCoverDebugInfo>               CoverSlotDebugList;                            // 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           CoverSearchWasFinalized : 1;                   // 0x01D0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FIconData                                   ICON_BLUELOCATION;                             // 0x01D4 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_YELLOWLOCATION;                           // 0x01E8 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_QUESTIONMARK;                             // 0x01FC (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_EXCLAMATIONPOINT;                         // 0x0210 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_REDARROW;                                 // 0x0224 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_GREENARROW;                               // 0x0238 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_FAILED_MOVE_DEST;                         // 0x024C (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_GREENCIRCLE;                              // 0x0260 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_PATHPOINT;                                // 0x0274 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_CURRENTCOVER;                             // 0x0288 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_DESIREDCOVER;                             // 0x029C (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FIconData                                   ICON_SCRIPTEDMOVETARGET;                       // 0x02B0 (0x0014) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FTargetDebugDatum>             TargetData;                                    // 0x02C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxPawnSnapshotRecord");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SparkInterface
// 0x0000 (0x0058 - 0x0058)
class USparkInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SparkInterface");
		}

		return uClassPointer;
	};

	void ClearSparkRestartAuthenticationCompleteDelegate(const struct FScriptDelegate& AuthCompleteDelegate);
	void AddSparkRestartAuthenticationCompleteDelegate(const struct FScriptDelegate& AuthCompleteDelegate);
	class USparkServiceConfiguration* GetDiscoveryService();
	class USparkServiceConfiguration* GetArchwayService();
	void GetDebug(class TArray<class FString>& out_DebugStrings);
	class USparkNews* GetNewsService();
	static class UJsonObject* GetJson(const struct FSparkResult& RequestResult);
	class USparkServiceConfiguration* GetTitleStorageServiceConfiguration();
	class FString GetTitleStorageUrl();
	class UGearboxServerData* eventCreateGearboxServerData();
	class UGearboxServerData* eventGetGearboxServerData();
	void SignOutGearboxAccount(const struct FPlatformUserId& UserId);
	void SignInGearboxAccount(const struct FPlatformUserId& UserId);
	class UGearboxAccountData* eventGetGearboxAccountData(const struct FPlatformUserId& UserId);
	bool eventIsGearboxAccountAuthenticated(const struct FPlatformUserId& UserId);
	bool IsGearboxAccountSignedIn(const struct FPlatformUserId& UserId);
	void ClearCachedMessages();
	class FString GetUserMessage();
	class FString GetEmergencyMessage();
	void SetUserMessage(const class FString& Message);
	void SetEmergencyMessage(const class FString& Message);
	class FString eventGetPlatformLoginNameFromUser(const struct FPlatformUserId& UserId);
	void IncreaseInteractionTries();
	int32_t GetInteractionTries();
	int32_t GetInteractionGraceTries();
	int32_t GetInteractionPunishmentMinWaitSeconds();
	int32_t GetInteractionMinWaitSeconds();
	bool IsTmsComplete();
	void SetTmsComplete();
	class USparkInitializationProcess* CreateServerInitProcess();
	class USparkInitializationProcess* GetInitProcess(const struct FPlatformUserId& UserId);
	void StartSparkInitialization(const struct FPlatformUserId& UserId, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& EntitlementsUpdatedDelegate);
	bool eventIsSparkEnabled();
	void CleanupRequests();
	int32_t IssueSparkStringRequestWithAuth(const class FString& URL, const class FString& RequestData, const class FString& AuthToken, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters& HttpRequestParameters);
	int32_t IssueSparkStringRequest(const class FString& URL, const class FString& RequestData, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters& HttpRequestParameters);
	int32_t IssueSparkRequestWithAuth(const class FString& URL, const class FString& AuthToken, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters& HttpRequestParameters, class TArray<uint8_t>& RequestData);
	int32_t IssueSparkRequest(const class FString& URL, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters& HttpRequestParameters, class TArray<uint8_t>& RequestData);
};

// Class GearboxFramework.SparkInterfaceImpl
// 0x0110 (0x0058 - 0x0168)
class USparkInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_ISparkInterface;                       // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<class USparkInitializationProcess*>   Initializations;                               // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class USparkInitializationProcess*>   ActiveInitializations;                         // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UGearboxAccountData*>           Accounts;                                      // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UGearboxServerData*                          ServerData;                                    // 0x0098 (0x0008) [0x0000000000000000]               
	class FString                                      LeviathanServiceClassName;                     // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class ULeviathanService*                           LeviathanSvc;                                  // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           TmsInitComplete : 1;                           // 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      EmergencyMessage;                              // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UserMessage;                                   // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FSparkOutstandingRequest>      Requests;                                      // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class USparkServiceConfiguration*                  ArchwayService;                                // 0x00F0 (0x0008) [0x0000000000000000]               
	class USparkServiceConfiguration*                  DiscoveryService;                              // 0x00F8 (0x0008) [0x0000000000000000]               
	class USparkNews*                                  NewsService;                                   // 0x0100 (0x0008) [0x0000000000000000]               
	int32_t                                            InteractionMinWaitSeconds;                     // 0x0108 (0x0004) [0x0000000000000000]               
	int32_t                                            InteractionGraceTries;                         // 0x010C (0x0004) [0x0000000000000000]               
	int32_t                                            InteractionPunishmentMinWaitSeconds;           // 0x0110 (0x0004) [0x0000000000000000]               
	int32_t                                            InteractionTries;                              // 0x0114 (0x0004) [0x0000000000000000]               
	class USparkServiceConfiguration*                  TitleStorageService;                           // 0x0118 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      TitleStorageUrl;                               // 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            ServerTimeDelta;                               // 0x0130 (0x0004) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               RestartAuthCompleteDelegates;                  // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FLastModifiedCacheEntry>       LastModifiedCache;                             // 0x0148 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class FString                                      ServicePlatform;                               // 0x0158 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SparkInterfaceImpl");
		}

		return uClassPointer;
	};

	void DumpServices();
	struct FPointer GetRapidJson(const struct FSparkResult& RequestResult, const struct FPointer& Allocator);
	static class UJsonObject* GetJson(const struct FSparkResult& RequestResult);
	void GetDebug(class TArray<class FString>& out_DebugStrings);
	class USparkNews* GetNewsService();
	class USparkServiceConfiguration* GetTitleStorageServiceConfiguration();
	class FString GetTitleStorageUrl();
	void OnSparkInitialized(const struct FPlatformUserId& UserId, EInitializedResult InitializedResult, class UGearboxData* Data);
	bool IsPrimaryPlayer(const struct FPlatformUserId& UserId);
	void IncreaseInteractionTries();
	int32_t GetInteractionTries();
	int32_t GetInteractionGraceTries();
	int32_t GetInteractionPunishmentMinWaitSeconds();
	int32_t GetInteractionMinWaitSeconds();
	void ClearCachedMessages();
	class FString GetUserMessage();
	class FString GetEmergencyMessage();
	void SetUserMessage(const class FString& Message);
	void SetEmergencyMessage(const class FString& Message);
	class USparkServiceConfiguration* GetDiscoveryService();
	class USparkServiceConfiguration* GetArchwayService();
	bool IsTmsComplete();
	void SetTmsComplete();
	void ClearSparkRestartAuthenticationCompleteDelegate(const struct FScriptDelegate& AuthCompleteDelegate);
	void AddSparkRestartAuthenticationCompleteDelegate(const struct FScriptDelegate& AuthCompleteDelegate);
	void OnRestartSparkInitialized(const struct FPlatformUserId& UserId, EInitializedResult InitializedResult, class UGearboxData* Data);
	void UpdateRequestsAfterRestart(EInitializedResult InitializedResult, class UGearboxData* Data);
	void eventRestartSparkInitialization(const struct FPlatformUserId& UserId);
	void eventRestartServerSparkInitialization();
	void StartSparkInitialization(const struct FPlatformUserId& UserId, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& EntitlementsUpdatedDelegate);
	void ResetInitializationStatus(const struct FPlatformUserId& UserId);
	void RemoveInitProcess(const struct FPlatformUserId& UserId);
	class USparkInitializationProcess* CreateInitProcess(const struct FPlatformUserId& UserId);
	class USparkInitializationProcess* CreateServerInitProcess();
	class USparkInitializationProcess* GetServerInitProcess();
	class USparkInitializationProcess* GetInitProcess(const struct FPlatformUserId& UserId);
	void SignInGearboxAccount(const struct FPlatformUserId& UserId);
	class UGearboxAccountData* CreateGearboxAccountData(const struct FPlatformUserId& UserId);
	class UGearboxAccountData* eventGetGearboxAccountData(const struct FPlatformUserId& UserId);
	class UGearboxServerData* eventCreateGearboxServerData();
	class UGearboxServerData* eventGetGearboxServerData();
	bool GetAccountIndex(const struct FPlatformUserId& UserId, int32_t& Index);
	void SignOutGearboxAccount(const struct FPlatformUserId& UserId);
	void ClearGearboxAccountData(const struct FPlatformUserId& UserId);
	bool IsGearboxAccountSignedIn(const struct FPlatformUserId& UserId);
	bool eventIsGearboxAccountAuthenticated(const struct FPlatformUserId& UserId);
	class FString eventGetPlatformLoginNameFromUser(const struct FPlatformUserId& UserId);
	bool eventIsShiftEnabled();
	bool eventIsSparkEnabled();
	static bool WithShift();
	static bool WithSpark();
	void CleanupRequests();
	int32_t IssueSparkStringRequestWithAuth(const class FString& URL, const class FString& RequestData, const class FString& AuthToken, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters& HttpRequestParameters);
	int32_t IssueSparkStringRequest(const class FString& URL, const class FString& RequestData, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters& HttpRequestParameters);
	int32_t IssueSparkRequestWithAuth(const class FString& URL, const class FString& AuthToken, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters& HttpParameters, class TArray<uint8_t>& RequestData);
	int32_t IssueSparkRequest(const class FString& URL, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters& HttpParameters, class TArray<uint8_t>& RequestData);
};

// Class GearboxFramework.SparkNews
// 0x0038 (0x0058 - 0x0090)
class USparkNews : public UObject
{
public:
	class TArray<struct FNewsArticle>                  Articles;                                      // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               NewsRequestCompleteDelegates;                  // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastUpdateTime;                                // 0x0078 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             __OnNewsRequestComplete__Delegate;             // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SparkNews");
		}

		return uClassPointer;
	};

	void HandleNewsRetrievalResponse(struct FSparkResult& Result);
	void OnNewsRequestComplete(ENewsRetrievalResult Result);
};

// Class GearboxFramework.SparkServiceConfiguration
// 0x0050 (0x0058 - 0x00A8)
class USparkServiceConfiguration : public UObject
{
public:
	struct FName                                       ServiceName;                                   // 0x0058 (0x0008) [0x0000000000000000]               
	struct FName                                       ConfigurationGroup;                            // 0x0060 (0x0008) [0x0000000000000000]               
	float                                              NextRetryTime;                                 // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            RetryCount;                                    // 0x006C (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        Keys;                                          // 0x0070 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Values;                                        // 0x0080 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            HawkTimeOffset;                                // 0x0090 (0x0004) [0x0000000000000000]               
	class FString                                      OverrideUrl;                                   // 0x0098 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SparkServiceConfiguration");
		}

		return uClassPointer;
	};

	void DumpParameters();
	struct FServiceResult GetParameters();
	void ReplaceParameters(class USparkServiceConfiguration* Service);
	bool CanIssueRequest();
	void ScheduleRetry();
	void ResetRetries();
	float GetFloatParameter(const class FString& KeyName, float DefaultValue, float MinimumValue, float MaximumValue);
	int32_t GetIntParameter(const class FString& KeyName, int32_t DefaultValue, int32_t MinimumValue, int32_t MaximumValue);
	class FString GetStringParameter(const class FString& KeyName, const class FString& Default);
	class FString GetParameter(const class FString& KeyNameToSearchFor);
	void LoadService(struct FServiceResult& Service);
	void LoadOverrides();
};

// Class GearboxFramework.SparkTypes
// 0x0060 (0x0058 - 0x00B8)
class USparkTypes : public UObject
{
public:
	struct FScriptDelegate                             __OnSparkRequestComplete__Delegate;            // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSparkInitialized__Delegate;                // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEntitlementsUpdated__Delegate;             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSparkRestartAuthenticationComplete__Delegate;// 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueueStatusUpdated__Delegate;              // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueueUpdated__Delegate;                    // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SparkTypes");
		}

		return uClassPointer;
	};

	static class FString UTF8toString(const class TArray<uint8_t>& inputBytes);
	void OnQueueUpdated(class UGearboxAccountData* GbxAccount);
	void OnQueueStatusUpdated(class UGearboxAccountData* GbxAccount);
	void OnSparkRestartAuthenticationComplete(const struct FPlatformUserId& UserId, EInitializedResult InitializedResult);
	void OnEntitlementsUpdated(class UGearboxAccountData* GbxAccount);
	void OnSparkInitialized(const struct FPlatformUserId& UserId, EInitializedResult InitializedResult, class UGearboxData* Data);
	void OnSparkRequestComplete(struct FSparkResult& Result);
};

// Class GearboxFramework.SpawnDefinition
// 0x0020 (0x0058 - 0x0078)
class USpawnDefinition : public UGBXDefinition
{
public:
	class TArray<struct FSpawnActorData>               ActorArchetypeList;                            // 0x0058 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UDenAIDefinition*                            AIDef;                                         // 0x0068 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ERespawnOptions                                    RespawnStyle;                                  // 0x0070 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bTotalResetOnLevelLoad : 1;                    // 0x0074 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnDefinition");
		}

		return uClassPointer;
	};

	static bool IsAllSpawnTypesDebugEnabled();
	static void ToggleAllSpawnTypesDebug();
	class USpawnFactory* GetRandomFactory(class ASpawner* Spawner, int32_t GameStage, int32_t Rarity);
};

// Class GearboxFramework.SpawnedActorTagDefinition
// 0x0000 (0x0058 - 0x0058)
class USpawnedActorTagDefinition : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnedActorTagDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpawnEncounter
// 0x0028 (0x0240 - 0x0268)
class ASpawnEncounter : public AInfo
{
public:
	uint32_t                                           IsEnabled : 1;                                 // 0x0240 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAutoEnableSpawners : 1;                       // 0x0240 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bWaitingForNextWave : 1;                       // 0x0240 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bIsWaitingForRespawn : 1;                      // 0x0240 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	class TArray<struct FEncounterWaveData>            Waves;                                         // 0x0248 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	int32_t                                            CurrentWave;                                   // 0x0258 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TimeToStartNextWave;                           // 0x025C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              RespawnDelayStartTime;                         // 0x0260 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnEncounter");
		}

		return uClassPointer;
	};

	void GetDebugSpawnData(int32_t Wave, int32_t& NumSpawned, int32_t& NumTotalToSpawn, int32_t& NumDead);
	void eventTriggerKismetAllSpawnedEvent();
	void eventTriggerKismetDeathEvent();
	void OnToggle(class USeqAct_Toggle* Action);
	void UpdateSpawnerEnabledStates(int32_t nWave, bool bUpdateIfOnlyOneWave);
	void UpdateKismetNotifications();
};

// Class GearboxFramework.SpawnEncounterRenderingComponent
// 0x0000 (0x0360 - 0x0360)
class USpawnEncounterRenderingComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnEncounterRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Spawner
// 0x00A0 (0x0240 - 0x02E0)
class ASpawner : public AInfo
{
public:
	struct FPointer                                    VfTable_IIBodyCompositionInstance;             // 0x0240 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FSpawnerCleanupParameters                   CleanupParams;                                 // 0x0248 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           IsEnabled : 1;                                 // 0x0250 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bNoRespawning : 1;                             // 0x0250 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseRandomSpawns : 1;                          // 0x0250 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bClusterRandomSpawns : 1;                      // 0x0250 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bIsWaitingForRespawn : 1;                      // 0x0250 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	class TArray<class ASpawnPoint*>                   SpawnPoints;                                   // 0x0258 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              ClusterRadius;                                 // 0x0268 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class ULevelStreaming*                             StreamingLevel;                                // 0x0270 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SystemID;                                      // 0x0278 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NextInitialDestinationIdx;                     // 0x027C (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGearboxSeqAct_SpawnerLink*                  SequenceActionLink;                            // 0x0280 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              LastTimeBlockedFromSpawningDueToSpawnLimits;   // 0x0288 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              RespawnDelayStartTime;                         // 0x028C (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<class AActor*>                        ActiveActors;                                  // 0x0290 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class URegionDefinition*                           GameStageRegion;                               // 0x02A0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class USpawnerAspect*                              Aspect;                                        // 0x02A8 (0x0008) [0x000000000440000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	int32_t                                            SpawnIndex;                                    // 0x02B0 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<int32_t>                              SpawnList;                                     // 0x02B8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            InclusiveSpawnIndex;                           // 0x02C8 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<int32_t>                              InclusiveSpawnList;                            // 0x02D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Spawner");
		}

		return uClassPointer;
	};

	class AActor* GetActiveActor(int32_t Idx);
	int32_t GetNumActiveActors();
	float GetNumSpawned();
	float GetNumAlive();
	float GetNumDied();
	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	void eventDestroyed();
	int32_t GetRarity();
	int32_t GetGameStage();
	bool GetSpawnerGameStage(int32_t& GameStage, int32_t& Rarity);
	void eventTriggerKismetAllSpawnedEvent();
	void eventClearSequenceActionLink();
	void eventSetSequenceActionLink(class UGearboxSeqAct_SpawnerLink* Link);
	void SetEnabledStatus(bool bEnable);
	void OnToggle(class USeqAct_Toggle* Action);
	void GetNumLeftToSpawnAndStillAlive(int32_t& NumLeftToSpawn, int32_t& NumStillAlive);
	float GetNextSpawnTime();
	void RespawnKilledActors(float PercentageOfKilledActorsToRespawn);
	void DoSpawning(class USpawnMaster* SpawnMaster);
};

// Class GearboxFramework.AreaSpawner
// 0x0048 (0x02E0 - 0x0328)
class AAreaSpawner : public ASpawner
{
public:
	class TArray<struct FAreaSpawnerOptionData>        SpawnOptions;                                  // 0x02E0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bContinueSpawningAfterPlayerDetected : 1;      // 0x02F0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSpawnVolume : 1;                              // 0x02F0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bSpawnRadius : 1;                              // 0x02F0 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bSpawnLevel : 1;                               // 0x02F0 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bPlayerHasBeenDetected : 1;                    // 0x02F0 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	class TArray<class AVolume*>                       DetectionVolumes;                              // 0x02F8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              DetectionRadius;                               // 0x0308 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SelectedSpawnIdx;                              // 0x030C (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FAreaSpawnerData>              SpawnData;                                     // 0x0310 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            NumPlayersDetected;                            // 0x0320 (0x0004) [0x4000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AreaSpawner");
		}

		return uClassPointer;
	};

	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	void RespawnKilledActors(float PercentageOfKilledActorsToRespawn);
	void DoSpawning(class USpawnMaster* SpawnMaster);
};

// Class GearboxFramework.DenSpawner
// 0x01C0 (0x02E0 - 0x04A0)
class ADenSpawner : public ASpawner
{
public:
	struct FPointer                                    VfTable_IIAIInterface;                         // 0x02E0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FAttributeInitializationData                MaxLiveActorsNormal;                           // 0x02E8 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                MaxLiveActorsThreatened;                       // 0x0308 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                MaxTotalActorsFormula;                         // 0x0328 (0x0020) [0x0000000000000001] (CPF_Edit)    
	class USpawnDefinition*                            SpawnDef;                                      // 0x0348 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class ASpawnEncounter*                             ParentEncounter;                               // 0x0350 (0x0008) [0x0000000000220001] (CPF_Edit | CPF_EditConst)
	int32_t                                            ParentEncounterWave;                           // 0x0358 (0x0004) [0x0000000000220001] (CPF_Edit | CPF_EditConst)
	struct FAttributeInitializationData                RespawnDelay;                                  // 0x0360 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                RespawnDelayAfterDeath;                        // 0x0380 (0x0020) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIsCriticalActor : 1;                          // 0x03A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bWaitForWarmupSignal : 1;                      // 0x03A0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bApplyAspectToChildAI : 1;                     // 0x03A0 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bNeutral : 1;                                  // 0x03A0 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bAlwaysAddPlayers : 1;                         // 0x03A0 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           bMigratedTerritory : 1;                        // 0x03A0 (0x0004) [0x0000000000000002] [0x00000020] (CPF_Const)
	uint32_t                                           bUseSpawnRadius : 1;                           // 0x03A0 (0x0004) [0x0000000000000002] [0x00000040] (CPF_Const)
	uint32_t                                           bSpawnRadiusIsInfinitelyLarge : 1;             // 0x03A0 (0x0004) [0x0000000000000002] [0x00000080] (CPF_Const)
	uint32_t                                           bAlwaysSeeInThreatRadius : 1;                  // 0x03A0 (0x0004) [0x0000000000000002] [0x00000100] (CPF_Const)
	uint32_t                                           bCombatVolumeOnlyLimitsRangedAttacks : 1;      // 0x03A0 (0x0004) [0x0000000000000002] [0x00000200] (CPF_Const)
	uint32_t                                           bPlayerHasBeenDetected : 1;                    // 0x03A0 (0x0004) [0x0000000000002000] [0x00000400] (CPF_Transient)
	uint32_t                                           bKeepLeader : 1;                               // 0x03A0 (0x0004) [0x0000000000002000] [0x00000800] (CPF_Transient)
	class TArray<class UBehaviorBase*>                 OnSpawnCustomizations;                         // 0x03A8 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	float                                              WaveCompletePercent;                           // 0x03B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                WaveWarmupTime;                                // 0x03C0 (0x0020) [0x0000000000000001] (CPF_Edit)    
	float                                              RepopulationDelay;                             // 0x03E0 (0x0004) [0x0000000000000000]               
	class USpawnDefinition*                            PopulationDef;                                 // 0x03E8 (0x0008) [0x0000000000000000]               
	int32_t                                            MaxActiveActorsIsNormal;                       // 0x03F0 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxActiveActorsThreatened;                     // 0x03F4 (0x0004) [0x0000000000000000]               
	class TArray<class ADenSpawner*>                   SharedThreatDens;                              // 0x03F8 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UPawnAllegiance*                             OverrideAllegiance;                            // 0x0408 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class ADenSpawner*                                 MasterDen;                                     // 0x0410 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UTerritoryComponent*                         Territory;                                     // 0x0418 (0x0008) [0x000000000408000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<class AVolume*>                       DetectionVolumes;                              // 0x0420 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              DenHeight;                                     // 0x0430 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SpawnRadius;                                   // 0x0434 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              PatrolRadius;                                  // 0x0438 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ThreatRadius;                                  // 0x043C (0x0004) [0x0000000000000002] (CPF_Const)   
	class AVolume*                                     CombatVolume;                                  // 0x0440 (0x0008) [0x0000000000000002] (CPF_Const)   
	EDenRadius                                         CombatRadiusLimit;                             // 0x0448 (0x0001) [0x0000000000000002] (CPF_Const)   
	EDenWaveState                                      WaveState;                                     // 0x0449 (0x0001) [0x0000000000002000] (CPF_Transient)
	int32_t                                            MaxTotalActors;                                // 0x044C (0x0004) [0x0000000000002000] (CPF_Transient)
	class UPawnAllegiance*                             Allegiance;                                    // 0x0450 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FDenSpawnData                               SpawnData;                                     // 0x0458 (0x0028) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            NumDiedInWave;                                 // 0x0480 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NumSpawnedInWave;                              // 0x0484 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      Leader;                                        // 0x0488 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UAIComponent*                                AIComponent;                                   // 0x0490 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDenTargetingComponent*                      TargetingComponent;                            // 0x0498 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DenSpawner");
		}

		return uClassPointer;
	};

	class UIAIInterface* GetAIChild(int32_t ChildIdx);
	int32_t GetNumAIChildren();
	void InitSequence(class UActionSequence* NewSequence);
	class UAIDefinition* GetAIDefinition();
	void SetAIComponent(class UAIComponent* NewAIComp);
	class UAIComponent* GetAIComponent();
	class UIAIInterface* GetAIParent();
	struct FVector GetAILocation();
	class AActor* GetAIActor();
	bool CanTickAI();
	void SetAllegiance(class UPawnAllegiance* NewAllegiance);
	class UPawnAllegiance* GetAllegiance();
	void OnEndDenWarmup(class UGearboxSeqAct_EndDenWarmup* Action);
	void NotifyWarmupFinished();
	void GetDenMembers(class TArray<class AActor*>& Members);
	void eventTriggerKismetDeathEvent();
	float SpawnedCanAttackVehicles();
	float GetNumSpawned();
	float GetNumAlive();
	float GetNumDied();
	void eventPostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	void EnableDebugging(bool bEnabled);
	void RespawnKilledActors(float PercentageOfKilledActorsToRespawn);
	void DoSpawning(class USpawnMaster* SpawnMaster);
	void PostBeginPlay();
};

// Class GearboxFramework.DenSpawner_Dynamic
// 0x0010 (0x04A0 - 0x04B0)
class ADenSpawner_Dynamic : public ADenSpawner
{
public:
	struct FName                                       DynamicPointName;                              // 0x04A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              DynamicPointRadius;                            // 0x04A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bGetGameStageFromOwner : 1;                    // 0x04AC (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DenSpawner_Dynamic");
		}

		return uClassPointer;
	};

	void eventDestroyed();
	bool GetSpawnerGameStage(int32_t& GameStage, int32_t& AwesomeLevel);
};

// Class GearboxFramework.PointSpawner
// 0x0068 (0x02E0 - 0x0348)
class APointSpawner : public ASpawner
{
public:
	struct FPointer                                    VfTable_IISpawnPoint;                          // 0x02E0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIGBXNavMeshObstacle;                  // 0x02E8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class USpawnDefinition*                            SpawnDef;                                      // 0x02F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              SpawnAndCullRadius;                            // 0x02F8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UBehaviorBase*>                 SpawnCustomizations;                           // 0x0300 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	uint32_t                                           SpawnedForMatinee : 1;                         // 0x0310 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsCriticalActor : 1;                          // 0x0310 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bHasSpawned : 1;                               // 0x0310 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bActiveSpawn : 1;                              // 0x0310 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bDetectedPlayer : 1;                           // 0x0310 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	class ASpawnEncounter*                             ParentEncounter;                               // 0x0318 (0x0008) [0x0000000000220001] (CPF_Edit | CPF_EditConst)
	int32_t                                            ParentEncounterWave;                           // 0x0320 (0x0004) [0x0000000000220001] (CPF_Edit | CPF_EditConst)
	class USpawnDefinition*                            PopulationDef;                                 // 0x0328 (0x0008) [0x0000000000000000]               
	EInitialActionType                                 InitialAction;                                 // 0x0330 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EObstacleCollisionType                             PathBlockStyle;                                // 0x0331 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<class AActor*>                        InitialActionDestinations;                     // 0x0338 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PointSpawner");
		}

		return uClassPointer;
	};

	class AActor* GetInitialDestination();
	EInitialActionType GetInitialAction();
	void RespawnKilledActors(float PercentageOfKilledActorsToRespawn);
	void DoSpawning(class USpawnMaster* SpawnMaster);
};

// Class GearboxFramework.SpawnerAspect
// 0x0000 (0x0058 - 0x0058)
class USpawnerAspect : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnerAspect");
		}

		return uClassPointer;
	};

	void eventDenStatRemoved(class APawn* DenPawn);
	void eventDenStatAdded(class APawn* DenPawn);
	void eventEnabledStatusChanged(bool bIsEnabled, bool bHasActiveActors);
	void eventAllActorsRemoved(bool bFinishedSpawning);
	void eventOnActorDeath(class AActor* DeadActor);
	void eventOnSpawnActor(class AActor* SpawnedActor);
	void eventInitialize();
};

// Class GearboxFramework.SpawnerAttributeContextResolver
// 0x0000 (0x0058 - 0x0058)
class USpawnerAttributeContextResolver : public UAttributeContextResolver
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnerAttributeContextResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpawnerRenderingComponent
// 0x0000 (0x0360 - 0x0360)
class USpawnerRenderingComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnerRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpawnFactory
// 0x0020 (0x0058 - 0x0078)
class USpawnFactory : public UObject
{
public:
	class TArray<class UBehaviorBase*>                 OnActorSpawn;                                  // 0x0058 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
	struct FDestructionParameters                      DestructionParams;                             // 0x0068 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bIsCriticalActor : 1;                          // 0x006C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseSavedLocationWhenRestored : 1;             // 0x006C (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           UseCostOverride : 1;                           // 0x006C (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	int32_t                                            SpawnCostOverride;                             // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnFactory");
		}

		return uClassPointer;
	};

	class FString eventGetDescriptionOfFactoryOutput();
	static bool eventShouldSaveSpawnedActor(class USpawnMaster* Master, class AActor* ActorToSave);
	static bool eventDestroySpawnedActor(class USpawnMaster* Master, int32_t SpawnerIdx, class AActor* ActorToDestroy, class USpawnFactory* SpawnFactory, int32_t CreationFlags, bool optionalBDontSaveActor);
	class AActor* eventSpawnActor(class USpawnMaster* Master, class ASpawner* Spawner, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int32_t GameStage, int32_t Rarity, class UObject* SkinSource);
	struct FBoxSphereBounds eventGetSpawnVisibilityBounds(int32_t GameStage, int32_t Rarity);
	class UPawnAllegiance* GetActorAllegiance(int32_t GameStage, int32_t Rarity);
	int32_t eventGetActorSpawnCost(int32_t GameStage, int32_t Rarity, bool bCanSpawnTest);
	void eventOnSpawnActor(class AActor* aNewActor);
	static void eventSetupMatineeForActor(class AActor* aNewActor);
	class USpawnFactory* GetSpawnFactory(class ASpawner* Spawner, int32_t GameStage, int32_t Rarity);
	float GetSpawnProbabilityAtThisGameStage(int32_t GameStage, int32_t Rarity);
	bool IsFactoryWithin(class USpawnFactory* TestFactory);
	bool CanSpawn(class ASpawner* TestSpawner);
};

// Class GearboxFramework.SpawnFactoryGeneric
// 0x0008 (0x0078 - 0x0080)
class USpawnFactoryGeneric : public USpawnFactory
{
public:
	class AActor*                                      ActorArchetype;                                // 0x0078 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnFactoryGeneric");
		}

		return uClassPointer;
	};

	class AActor* eventSpawnActor(class USpawnMaster* Master, class ASpawner* Spawner, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int32_t GameStage, int32_t Rarity, class UObject* SkinSource);
	struct FBoxSphereBounds eventGetSpawnVisibilityBounds(int32_t GameStage, int32_t Rarity);
};

// Class GearboxFramework.SpawnFactorySpawnDefinition
// 0x0018 (0x0078 - 0x0090)
class USpawnFactorySpawnDefinition : public USpawnFactory
{
public:
	class USpawnDefinition*                            SpawnDef;                                      // 0x0078 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Condition;                                     // 0x0080 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class USpawnDefinition*                            PopulationDef;                                 // 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnFactorySpawnDefinition");
		}

		return uClassPointer;
	};

	class USpawnFactory* GetSpawnFactory(class ASpawner* Spawner, int32_t GameStage, int32_t Rarity);
	class UPawnAllegiance* GetActorAllegiance(int32_t GameStage, int32_t AwesomeLevel);
	bool IsFactoryWithin(class USpawnFactory* TestFactory);
};

// Class GearboxFramework.SpawnMaster
// 0x0060 (0x0058 - 0x00B8)
class USpawnMaster : public UObject
{
public:
	class TArray<struct FSpawnerTracker>               SpawnerList;                                   // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ActiveActorCost;                               // 0x0068 (0x0004) [0x4000000000000000]               
	int32_t                                            MaxActorCost;                                  // 0x006C (0x0004) [0x4000000000000000]               
	float                                              MasterThinkRate;                               // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              MasterTestForDestroyRate;                      // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              IfIrrelevantDestroyTimeout;                    // 0x0078 (0x0004) [0x0000000000000000]               
	class TArray<struct FSpawnMasterStat>              SpawnMasterStats;                              // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FEncounterTracker>             EncounterList;                                 // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SecondsElapsed;                                // 0x00A0 (0x0004) [0x0000000000000000]               
	float                                              NextSpawnerTickTime;                           // 0x00A4 (0x0004) [0x0000000000000000]               
	float                                              NextDestroyTestTickTime;                       // 0x00A8 (0x0004) [0x0000000000000000]               
	float                                              SpawnerResetDelay;                             // 0x00AC (0x0004) [0x4000000000000000]               
	uint32_t                                           bCanResetSpawners : 1;                         // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasActorsReadyToDeleteIfSpaceIsNeeded : 1;    // 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bShutdownAIWhenIrrelevant : 1;                 // 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnMaster");
		}

		return uClassPointer;
	};

	class AActor* GetActorSpawnedFromSpawner(class ASpawner* Spawner, int32_t optionalActorIndex);
	void DisplayDebugSpawnerRespawn(class AHUD* HUD, float& out_YL, float& out_YPos);
	void DisplayDebugEncounters(class AHUD* HUD, float& out_YL, float& out_YPos);
	void DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	static void DisplaySpawnDebug(class AHUD* HUD, float& out_YL, float& out_YPos);
	void GetSavedActorDebugInfoForSpawner(int32_t SpawnerIdx, class TArray<class FString>& SavedActorsDebugInfo);
	int32_t GetNumberOfSavedActorsForSpawner(int32_t SpawnerIdx);
	bool WillActorsSpawnerBeResetOnLevelLoad(class AActor* TestActor);
	void ResetRespawn();
	static class ULevelStreaming* GetStreamingLevelForActor(class AActor* ActorInLevel);
	bool HasCapacityToSpawnFromFactories(int32_t GameStage, int32_t Rarity, class TArray<class USpawnFactory*>& TheFactories);
	bool HasCapacityToSpawnFromFactory(class USpawnFactory* TheFactory, int32_t GameStage, int32_t Rarity);
	bool IsSpawnSystemAtCapacity();
	void StatProfileStop(int32_t nStat);
	void StatProfileStart(int32_t nStat);
	float GetStatProfileTime(int32_t nStat);
	void AddSavedActor(int32_t SpawnerIdx, class AActor* TheActor, class USpawnFactory* SpawnFactory, int32_t CreationFlags);
	void DisconnectEncounter(class ASpawnEncounter* Encounter);
	void ConnectEncounter(class ASpawnEncounter* Encounter);
	bool DisconnectSpawner(class ASpawner* DeactivatedSpawner, bool bSaveState);
	bool ConnectSpawner(class ASpawner* ActivatedSpawner);
	class AWorldInfo* GetWorldInfo();
	void DestroySpawnedActors(class ASpawner* Spawner, bool optionalBDontSaveActors);
	void RemoveSpawnedActor(class AActor* TheActor, bool bKeepBody, bool optionalBActorDied);
	void SetSpawnedActorsReuse(class AActor* TheActor, bool bReuse);
	void AddExternalActor(class AActor* SpawnedActor, class UClass* FactoryClass);
	class AActor* SpawnActorFromSpawner(class USpawnFactory* TheFactory, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int32_t GameStage, int32_t Rarity, int32_t SpawnerIdx, int32_t SpawnerFlags, bool optionalBCanSave, bool optionalBForceSpawn, class UObject* optionalSkinSource);
	class AActor* SpawnActor(class USpawnFactory* TheFactory, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int32_t GameStage, int32_t Rarity, class UObject* SkinSource);
	int32_t GetSpawnerIndex(class ASpawner* Spawner);
	class ASpawner* GetActorsSpawner(class AActor* SpawnedActor);
};

// Class GearboxFramework.SpawnMasterAttributeContextResolver
// 0x0000 (0x0058 - 0x0058)
class USpawnMasterAttributeContextResolver : public UAttributeContextResolver
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnMasterAttributeContextResolver");
		}

		return uClassPointer;
	};

	class UObject* GetAttributeContext(class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource);
};

// Class GearboxFramework.SpawnPointEditorComponent
// 0x0000 (0x0360 - 0x0360)
class USpawnPointEditorComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpawnPointEditorComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpecialMoveComponent
// 0x0070 (0x0090 - 0x0100)
class USpecialMoveComponent : public UActorComponent
{
public:
	uint32_t                                           bLocalPlay : 1;                                // 0x0090 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bSMDReplicatedToServer : 1;                    // 0x0090 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	float                                              StartTime;                                     // 0x0094 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastEndTime;                                   // 0x0098 (0x0004) [0x0000000000002000] (CPF_Transient)
	class USpecialMoveInterface*                       SMI_Object;                                    // 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class USpecialMoveInterface*                       SMI_Interface;                                 // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FSpecialMoveData                            CurrentSMData;                                 // 0x00B0 (0x0038) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FSpecialMoveData>              SMDQueue;                                      // 0x00E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UAnimNodeSpecialMoveBlend*                   SMBlendNode;                                   // 0x00F8 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMoveComponent");
		}

		return uClassPointer;
	};

	bool IsOwnerAlwaysNetRelevant();
	bool CanPlayBehaviorData(struct FSMBehavior& Data);
	void RunBehaviors(class TArray<struct FSMBehavior>& SMBehaviors);
	class USpecialMoveDefinition* GetCurrent();
	float GetPlayRateScale();
	float GetDuration();
	class UObject* GetData();
	void LocalAnimFinished(class USpecialMoveDefinition* SMD, bool bInterrupted, struct FSpecialMoveData& SMData);
	void ClearQueue();
	void StopAnyLocal(const struct FName& optionalSMNodeName, bool optionalBInterrupted, class USkeletalMeshComponent* optionalMeshComp);
	void StopLocal(class USpecialMoveDefinition* OldSMD, bool optionalBInterrupted);
	void StopAny(bool optionalBClearQueue, bool optionalBInterrupted);
	void Stop(class USpecialMoveDefinition* OldSMD, bool optionalBClearQueue, bool optionalBInterrupted);
	float PlayLocal(class USpecialMoveDefinition* NewSMD, float optionalPlayRateScale, float optionalDuration, const struct FName& optionalCallbackName, class UObject* optionalCallbackObject, class UObject* optionalData, bool optionalBSendCallbackAtEndOfSequence, float optionalOverrideBlendInTime);
	void Queue(class USpecialMoveDefinition* NewSMD, float optionalPlayRateScale, float optionalDuration, const struct FName& optionalCallbackName, class UObject* optionalCallbackObject, class UObject* optionalData, bool optionalBSendCallbackAtEndOfSequence, bool optionalBStartOfSequence);
	float Play(class USpecialMoveDefinition* NewSMD, float optionalPlayRateScale, float optionalDuration, const struct FName& optionalCallbackName, class UObject* optionalCallbackObject, class UObject* optionalData, bool optionalBSendCallbackAtEndOfSequence, bool optionalBReplicateToServer);
	void RemoveFromQueue(class USpecialMoveDefinition* SMD);
	bool IsQueued(class USpecialMoveDefinition* SMD);
	bool IsPlayingClass(class UClass* SMClass);
	bool IsPlayingAny();
	bool IsPlaying(class USpecialMoveDefinition* SMD);
	struct FRotator GetAnimRotation(class UGearboxAnimDefinition* CustomAnimSMD);
	struct FVector GetAnimDelta(class UGearboxAnimDefinition* CustomAnimSMD);
	class UAnimNodeSpecialMoveBlend* GetSMNode();
	void PlayReplicated(const struct FReplicatedSpecialMoveData& NewSMData);
	float GetAnimLength(class UGearboxAnimDefinition* CustomAnimSMD, bool optionalBIncludeNextSMD, class USkeletalMeshComponent* optionalSMC);
};

// Class GearboxFramework.SpecialMoveDefinition
// 0x0018 (0x0058 - 0x0070)
class USpecialMoveDefinition : public UGBXDefinition
{
public:
	class USpecialMoveDefinition*                      NextSpecialMove;                               // 0x0058 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UExpressionEvaluator*                        StopExpression;                                // 0x0060 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	uint32_t                                           bOwnerAlwaysRelevant : 1;                      // 0x0068 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bClientHasAuthority : 1;                       // 0x0068 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bAllowSkelUpdateThrottling : 1;                // 0x0068 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMoveDefinition");
		}

		return uClassPointer;
	};

	bool AllowSkelUpdateThrottling();
	bool ShouldStopWhenDurationExpires();
	bool eventIsPlayingLocally(class USpecialMoveInterface* SMI);
	class USpecialMoveDefinition* GetSMDToPlay(class USpecialMoveInterface* SMI);
	bool Contains(class USpecialMoveDefinition* SMD, class USpecialMoveInterface* SMI);
	void eventClientFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	void eventServerFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	float eventClientStarted(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
	void eventServerStarted(class USpecialMoveInterface* SMI);
	bool IsLocalAuthority(class USpecialMoveInterface* SMI);
	bool eventAuthorityCanPlay(class USpecialMoveInterface* SMI);
};

// Class GearboxFramework.GearboxAnimDefinition
// 0x00D0 (0x0070 - 0x0140)
class UGearboxAnimDefinition : public USpecialMoveDefinition
{
public:
	struct FPointer                                    VfTable_IIBehaviorProvider;                    // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	ESMDPlayOnType                                     PlayOn;                                        // 0x0078 (0x0001) [0x0000000000000001] (CPF_Edit)    
	EEndingCondition                                   EndingCondition;                               // 0x0079 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       InstanceDataName;                              // 0x007C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       InstanceDataNameFP;                            // 0x0084 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName;                                      // 0x008C (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              BlendInTime;                                   // 0x0094 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              BlendOutTime;                                  // 0x0098 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PlayRate;                                      // 0x009C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StartTime;                                     // 0x00A0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAnimSet*                                    AnimSet;                                       // 0x00A8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bMirrored : 1;                                 // 0x00B0 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bAdjustLoopingPlayRateByDuration : 1;          // 0x00B0 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           BlendPerBone : 1;                              // 0x00B0 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           DisableAnimSequenceNotifies : 1;               // 0x00B0 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bOnlyPlayNotifiesWhileActive : 1;              // 0x00B0 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bReverseAnimSearchOrder : 1;                   // 0x00B0 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	struct FName                                       AnimNodeName;                                  // 0x00B4 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class URootMotionDefinition*                       RootMotionDef;                                 // 0x00C0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class URootMotionDefinition*                       ClientRootMotionDef;                           // 0x00C8 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UFeatherBoneBlendDefinition*                 BoneBlendDef;                                  // 0x00D0 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FName>                         BoneNames;                                     // 0x00D8 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FSMBehavior>                   StartBehaviors;                                // 0x00E8 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<struct FSMNotify>                     SMNotifies;                                    // 0x00F8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FSMBehavior>                   StopBehaviors;                                 // 0x0108 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<struct FTimedAnimBehaviorEvent>       TimedBehaviorEvents;                           // 0x0118 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UBehaviorProviderDefinition*                 BehaviorProviderDefinition;                    // 0x0128 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class TArray<class USpecialMove_Attachment*>       AttachmentSpecialMoves;                        // 0x0130 (0x0010) [0x000000000440000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAnimDefinition");
		}

		return uClassPointer;
	};

	void StopAnim_FP(class USpecialMoveInterface* SMI, bool bInterrupted);
	float PlayAnim_FP(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
	class UAnimNodeSpecialMoveBlend* GetSMNode_FP(class USpecialMoveInterface* SMI);
	bool ShouldStopWhenDurationExpires();
	float GetAnimLength(class USkeletalMeshComponent* SMC);
	bool eventIsPlayingLocally(class USpecialMoveInterface* SMI);
	class UAnimNodeSpecialMoveBlend* GetSMNode(class USpecialMoveInterface* SMI);
	float PlayAnim(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
	void eventAnimFinished(class USpecialMoveInterface* SMI, class UAnimNodeSpecialMoveBlend* BlendNode, bool bInterrupted, struct FSpecialMoveData& SMData);
	void eventClientFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	float eventClientStarted(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
	void eventServerFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	void eventServerStarted(class USpecialMoveInterface* SMI);
	void AddAnimSet(class USpecialMoveInterface* SMI);
	bool eventAuthorityCanPlay(class USpecialMoveInterface* SMI);
	void OnTimedEvent(const struct FName& SpecializedEventName, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnServerStop(bool bInterrupted, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnServerStart(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnStop(bool bInterrupted, struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnStart(struct FBehaviorConsumerHandle& ConsumerHandle);
};

// Class GearboxFramework.SpecialMove_Attachment
// 0x0000 (0x0140 - 0x0140)
class USpecialMove_Attachment : public UGearboxAnimDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMove_Attachment");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpecialMove_Cloak
// 0x0000 (0x0140 - 0x0140)
class USpecialMove_Cloak : public UGearboxAnimDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMove_Cloak");
		}

		return uClassPointer;
	};

	bool IsCloakAnim(class USpecialMoveInterface* SMI);
	void eventClientFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	float eventClientStarted(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
};

// Class GearboxFramework.SpecialMove_Cover
// 0x0000 (0x0140 - 0x0140)
class USpecialMove_Cover : public UGearboxAnimDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMove_Cover");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpecialMove_MoveNode
// 0x0000 (0x0140 - 0x0140)
class USpecialMove_MoveNode : public UGearboxAnimDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMove_MoveNode");
		}

		return uClassPointer;
	};

	void UpdateCloaked(class USpecialMoveInterface* SMI);
	void eventServerFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	void eventServerStarted(class USpecialMoveInterface* SMI);
};

// Class GearboxFramework.SpecialMove_NavAnim
// 0x0008 (0x0140 - 0x0148)
class USpecialMove_NavAnim : public USpecialMove_MoveNode
{
public:
	struct FAIRange                                    StretchyRange;                                 // 0x0140 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMove_NavAnim");
		}

		return uClassPointer;
	};

	void eventClientFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	float eventClientStarted(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
};

// Class GearboxFramework.SpecialMove_Perch
// 0x0018 (0x0140 - 0x0158)
class USpecialMove_Perch : public USpecialMove_MoveNode
{
public:
	class TArray<struct FName>                         AnimIdles;                                     // 0x0140 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FName                                       AnimEnd;                                       // 0x0150 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMove_Perch");
		}

		return uClassPointer;
	};

	float PlayEnd(class USpecialMoveInterface* SMI, class APerch* Perch);
	float PlayIdle(class USpecialMoveInterface* SMI, class APerch* Perch);
	void SetRootMotionSpaceOverride(bool bUse, class USpecialMoveInterface* SMI, class APerch* Perch);
	float PlayStart(class USpecialMoveInterface* SMI, class APerch* Perch);
	float PlayNext(class USpecialMoveInterface* SMI);
	void eventAnimFinished(class USpecialMoveInterface* SMI, class UAnimNodeSpecialMoveBlend* BlendNode, bool bInterrupted, struct FSpecialMoveData& SMData);
	float PlayAnim(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
	void eventClientFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	float eventClientStarted(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
	void SetEndingCondition(EEndingCondition NewEndingCondition);
	void OnEnd(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnIdle(struct FBehaviorConsumerHandle& ConsumerHandle);
};

// Class GearboxFramework.SpecialMove_PhysicsJump
// 0x0058 (0x0140 - 0x0198)
class USpecialMove_PhysicsJump : public USpecialMove_MoveNode
{
public:
	struct FName                                       AnimIdle;                                      // 0x0140 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       AnimLand;                                      // 0x0148 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EPhysicsJumpType                                   JumpType;                                      // 0x0150 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              JumpRotationTime;                              // 0x0154 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bRotateToTarget : 1;                           // 0x0158 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bDecalAffectStaticGeometry : 1;                // 0x0158 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bDecalAffectDynamicGeometry : 1;               // 0x0158 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	class UMaterialInterface*                          DecalMaterial;                                 // 0x0160 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalSizeX;                                    // 0x0168 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalSizeY;                                    // 0x016C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalOffsetX;                                  // 0x0170 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalOffsetY;                                  // 0x0174 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalPivotOffsetPctX;                          // 0x0178 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalPivotOffsetPctY;                          // 0x017C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalNearPlane;                                // 0x0180 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalFarPlane;                                 // 0x0184 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalLifetime;                                 // 0x0188 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DecalFadeTime;                                 // 0x018C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       DecalFadeMaterialParamName;                    // 0x0190 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMove_PhysicsJump");
		}

		return uClassPointer;
	};

	float PlayLand(class USpecialMoveInterface* SMI);
	float PlayIdle(class USpecialMoveInterface* SMI, float AirTime);
	float GetIdleLength(class USpecialMoveInterface* SMI);
	void eventAnimFinished(class USpecialMoveInterface* SMI, class UAnimNodeSpecialMoveBlend* BlendNode, bool bInterrupted, struct FSpecialMoveData& SMData);
	void eventClientFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	float eventClientStarted(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
	void OnStartLand(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnStartIdle(struct FBehaviorConsumerHandle& ConsumerHandle);
};

// Class GearboxFramework.SpecialMove_LeapAttack
// 0x0000 (0x0198 - 0x0198)
class USpecialMove_LeapAttack : public USpecialMove_PhysicsJump
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMove_LeapAttack");
		}

		return uClassPointer;
	};

	void eventAnimFinished(class USpecialMoveInterface* SMI, class UAnimNodeSpecialMoveBlend* BlendNode, bool bInterrupted, struct FSpecialMoveData& SMData);
	void eventClientFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	float eventClientStarted(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
	void PerformLand(class AGearboxPawn* GBXPawn);
	float PerformIdle(class AGearboxPawn* GBXPawn);
};

// Class GearboxFramework.SpecialMove_Spawn
// 0x0010 (0x0140 - 0x0150)
class USpecialMove_Spawn : public USpecialMove_MoveNode
{
public:
	struct FAIRange                                    StretchyRange;                                 // 0x0140 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UGearboxAnimDefinition*                      PointAnim;                                     // 0x0148 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMove_Spawn");
		}

		return uClassPointer;
	};

	void eventClientFinished(class USpecialMoveInterface* SMI, bool bInterrupted);
	float eventClientStarted(class USpecialMoveInterface* SMI, struct FSpecialMoveData& SMData);
};

// Class GearboxFramework.SpecialMove_Turn
// 0x0000 (0x0140 - 0x0140)
class USpecialMove_Turn : public UGearboxAnimDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMove_Turn");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SpecialMoveExpressionList
// 0x0010 (0x0070 - 0x0080)
class USpecialMoveExpressionList : public USpecialMoveDefinition
{
public:
	class TArray<struct FSMExpressionList>             SpecialMoveList;                               // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMoveExpressionList");
		}

		return uClassPointer;
	};

	bool Contains(class USpecialMoveDefinition* SMD, class USpecialMoveInterface* SMI);
	class USpecialMoveDefinition* GetSMDToPlay(class USpecialMoveInterface* SMI);
};

// Class GearboxFramework.SpecialMoveRandom
// 0x0010 (0x0070 - 0x0080)
class USpecialMoveRandom : public USpecialMoveDefinition
{
public:
	class TArray<struct FSMRandomPair>                 RandomList;                                    // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMoveRandom");
		}

		return uClassPointer;
	};

	bool Contains(class USpecialMoveDefinition* SMD, class USpecialMoveInterface* SMI);
	class USpecialMoveDefinition* GetSMDToPlay(class USpecialMoveInterface* SMI);
};

// Class GearboxFramework.SpecialMoveExpressionEvaluator
// 0x0018 (0x0058 - 0x0070)
class USpecialMoveExpressionEvaluator : public UExpressionEvaluator
{
public:
	class TArray<struct FSpecialMoveEvalConditional>   Chain;                                         // 0x0058 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	ECExpressionOperatorType                           ChainOperator;                                 // 0x0068 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMoveExpressionEvaluator");
		}

		return uClassPointer;
	};

	bool Evaluate(class UObject* ContextSource);
};

// Class GearboxFramework.SpecialMoveInterface
// 0x0000 (0x0058 - 0x0058)
class USpecialMoveInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SpecialMoveInterface");
		}

		return uClassPointer;
	};

	void SetReplicatedSMData(bool optionalBInterrupted, struct FSpecialMoveData& NewSMData);
	void eventServerSpecialMove_StopAny(bool optionalBClearQueue, bool optionalBInterrupted);
	void eventServerSpecialMove_Stop(class USpecialMoveDefinition* OldSMD, bool optionalBClearQueue, bool optionalBInterrupted);
	void eventServerSpecialMove_Queue(class USpecialMoveDefinition* NewSMD, float optionalPlayRateScale, float optionalDuration, const struct FName& optionalCallbackName, class UObject* optionalCallbackObject, class UObject* optionalData, bool optionalBSendCallbackAtEndOfSequence, bool optionalBStartOfSequence);
	void eventServerSpecialMove_Play(class USpecialMoveDefinition* NewSMD, float optionalPlayRateScale, float optionalDuration, const struct FName& optionalCallbackName, class UObject* optionalCallbackObject, class UObject* optionalData, bool optionalBSendCallbackAtEndOfSequence);
	ERootMotionRotationMode GetDefaultRootMotionRotationMode();
	ERootMotionMode GetDefaultRootMotionMode();
	class USkeletalMeshComponent* GetSkelMesh();
	class USpecialMoveComponent* GetSMComponent();
	class AActor* GetActor();
};

// Class GearboxFramework.StanceComponent
// 0x00A8 (0x0090 - 0x0138)
class UStanceComponent : public UActorComponent
{
public:
	class AActor*                                      StanceActor;                                   // 0x0090 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bPlayingTransition : 1;                        // 0x0098 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UGearboxNavigationHandle*                    NavHandle;                                     // 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIStanceInterface*                           StanceInterface_Object;                        // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UIStanceInterface*                           StanceInterface_Interface;                     // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UStanceDefinition*                           LastStance;                                    // 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UStanceDefinition*                           CurrentStance;                                 // 0x00C0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UStanceDefinition*                           StanceSystemTable[0x4];                        // 0x00C8 (0x0020) [0x0000000000002000] (CPF_Transient)
	struct FMap_Mirror                                 DefaultStanceMap;                              // 0x00E8 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.StanceComponent");
		}

		return uClassPointer;
	};

	void SetDefaultStance(const struct FName& optionalStanceName);
	bool IsInDefaultStance();
	bool IsInStance(class UStanceDefinition* TestStance);
	class UStanceDefinition* GetLastStance();
	class UStanceDefinition* GetStance();
	void ClearStance(EStanceSystem System, class UStanceDefinition* optionalStanceToClear);
	void SetReplicatedStance(class UStanceDefinition* NewStance);
	void SetStance(EStanceSystem System, class UStanceDefinition* NewStance);
};

// Class GearboxFramework.StanceDefinition
// 0x0040 (0x0058 - 0x0098)
class UStanceDefinition : public UGBXDefinition
{
public:
	struct FPointer                                    VfTable_IIBehaviorProvider;                    // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bDefaultStance : 1;                            // 0x0060 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bCanUseAimOffsets : 1;                         // 0x0060 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bCanDodge : 1;                                 // 0x0060 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bAllowMovementDodges : 1;                      // 0x0060 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseSpeed : 1;                                 // 0x0060 (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	struct FName                                       DefaultStanceName;                             // 0x0064 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FName                                       AimOffsetName;                                 // 0x006C (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EMoveStyle                                         MovementStyle;                                 // 0x0074 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SpeedScale;                                    // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RotationScale;                                 // 0x007C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ReverseDistance;                               // 0x0080 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ReverseSpeedScale;                             // 0x0084 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Speed;                                         // 0x0088 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UBehaviorProviderDefinition*                 BehaviorProviderDefinition;                    // 0x0090 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.StanceDefinition");
		}

		return uClassPointer;
	};

	static struct FName TranslateDefaultStanceEnum(EDefaultStance StanceEnum);
	void OnExitStance(struct FBehaviorConsumerHandle& ConsumerHandle);
	void OnEnterStance(struct FBehaviorConsumerHandle& ConsumerHandle);
};

// Class GearboxFramework.StanceExpressionEvaluator
// 0x0010 (0x0058 - 0x0068)
class UStanceExpressionEvaluator : public UExpressionEvaluator
{
public:
	class UStanceDefinition*                           Stance;                                        // 0x0058 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	EStanceOption                                      Option;                                        // 0x0060 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.StanceExpressionEvaluator");
		}

		return uClassPointer;
	};

	bool Evaluate(class UObject* ContextSource);
};

// Class GearboxFramework.TargetClusterDefinition
// 0x0018 (0x0058 - 0x0070)
class UTargetClusterDefinition : public UGBXDefinition
{
public:
	ETargetClusterType                                 Type;                                          // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FrontScale;                                    // 0x005C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              TargetClusterDistance;                         // 0x0060 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    FriendlyRange;                                 // 0x0064 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bInvolveActiveMembersOnly : 1;                 // 0x006C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetClusterDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TargetingComponent
// 0x0128 (0x0090 - 0x01B8)
class UTargetingComponent : public UActorComponent
{
public:
	class UIAIInterface*                               AI_Object;                                     // 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)
	class UIAIInterface*                               AI_Interface;                                  // 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAIComponent*                                AIComponent;                                   // 0x00A0 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UTargetingComponent*                         Parent;                                        // 0x00A8 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UTargetingDefinition*                        TargetingDef;                                  // 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class AActor*                                      CurrentTarget;                                 // 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UMindTargetInfo*                             CurrentTargetInfo;                             // 0x00C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FAITargetStackLayerData                     TargetStack[0x3];                              // 0x00C8 (0x0048) [0x0000000000000002] (CPF_Const)   
	EAITargetStackLayer                                CurrentTargetStackLayer;                       // 0x0110 (0x0001) [0x0000000000000002] (CPF_Const)   
	class TArray<class UTI_Calc*>                      Knowledge;                                     // 0x0118 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UMindTargetInfo*>               TargetInfo;                                    // 0x0128 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            NumUpdates;                                    // 0x0138 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LastUpdateTime;                                // 0x013C (0x0004) [0x0000000000000002] (CPF_Const)   
	class UClass*                                      MindTargetInfoClass;                           // 0x0140 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bUpdating : 1;                                 // 0x0148 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bClearDeferred : 1;                            // 0x0148 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	float                                              ClusterWeightScale;                            // 0x014C (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FClusterGroupData>             ClusterGroups;                                 // 0x0150 (0x0010) [0x0000000000480002] (CPF_Const | CPF_Component | CPF_NeedCtorLink)
	class UTargetClusterDefinition*                    CurrentClusterDef;                             // 0x0160 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FMap_Mirror                                 ClusterMap;                                    // 0x0168 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetingComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DenTargetingComponent
// 0x0010 (0x01B8 - 0x01C8)
class UDenTargetingComponent : public UTargetingComponent
{
public:
	class ADenSpawner*                                 Den;                                           // 0x01B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bIsThreatened : 1;                             // 0x01C0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DenTargetingComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TargetIterator
// 0x0018 (0x0058 - 0x0070)
class UTargetIterator : public UObject
{
public:
	ETargetIterator                                    IteratorType;                                  // 0x0058 (0x0001) [0x0000000000000002] (CPF_Const)   
	class FString                                      BarGraphShortName;                             // 0x0060 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetIterator");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorCalculateExposure
// 0x0000 (0x0070 - 0x0070)
class UTargetIteratorCalculateExposure : public UTargetIterator
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetIteratorCalculateExposure");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizeTargetsIAmExposedTo
// 0x0000 (0x0070 - 0x0070)
class UTargetIteratorPrioritizeTargetsIAmExposedTo : public UTargetIterator
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetIteratorPrioritizeTargetsIAmExposedTo");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TI_Calc
// 0x0000 (0x0070 - 0x0070)
class UTI_Calc : public UTargetIterator
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TI_Calc");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TI_CalcAttackTime
// 0x0000 (0x0070 - 0x0070)
class UTI_CalcAttackTime : public UTI_Calc
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TI_CalcAttackTime");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TI_CalcAwareness
// 0x0000 (0x0070 - 0x0070)
class UTI_CalcAwareness : public UTI_Calc
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TI_CalcAwareness");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TI_CalcDirectPath
// 0x0008 (0x0070 - 0x0078)
class UTI_CalcDirectPath : public UTI_Calc
{
public:
	float                                              MaxDistance;                                   // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TI_CalcDirectPath");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TI_Prioritize
// 0x0008 (0x0070 - 0x0078)
class UTI_Prioritize : public UTargetIterator
{
public:
	float                                              Weight;                                        // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TI_Prioritize");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizeExposedTargets
// 0x0000 (0x0078 - 0x0078)
class UTargetIteratorPrioritizeExposedTargets : public UTI_Prioritize
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetIteratorPrioritizeExposedTargets");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizeHumanTargets
// 0x0000 (0x0078 - 0x0078)
class UTargetIteratorPrioritizeHumanTargets : public UTI_Prioritize
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetIteratorPrioritizeHumanTargets");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizeNearbyTarget
// 0x0008 (0x0078 - 0x0080)
class UTargetIteratorPrioritizeNearbyTarget : public UTI_Prioritize
{
public:
	EPrioritizeDistance                                Type;                                          // 0x0078 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              MaxDistance;                                   // 0x007C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetIteratorPrioritizeNearbyTarget");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TargetIteratorPrioritizePreviousTarget
// 0x0000 (0x0078 - 0x0078)
class UTargetIteratorPrioritizePreviousTarget : public UTI_Prioritize
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetIteratorPrioritizePreviousTarget");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TI_PrioritizeBonus
// 0x0000 (0x0078 - 0x0078)
class UTI_PrioritizeBonus : public UTI_Prioritize
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TI_PrioritizeBonus");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TI_PrioritizeConditional
// 0x0010 (0x0078 - 0x0088)
class UTI_PrioritizeConditional : public UTI_Prioritize
{
public:
	class UExpressionEvaluator*                        Condition;                                     // 0x0078 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	ETargetConditionContext                            Context;                                       // 0x0080 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TI_PrioritizeConditional");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TI_PrioritizeValue
// 0x0030 (0x0078 - 0x00A8)
class UTI_PrioritizeValue : public UTI_Prioritize
{
public:
	struct FAIRange                                    Range;                                         // 0x0078 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Value;                                         // 0x0080 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	ETargetConditionContext                            Context;                                       // 0x00A0 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TI_PrioritizeValue");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TargetSortDefinition
// 0x0010 (0x0058 - 0x0068)
class UTargetSortDefinition : public UGBXDefinition
{
public:
	class TArray<class UTI_Prioritize*>                SortCriteria;                                  // 0x0058 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TargetSortDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Territory
// 0x0008 (0x0240 - 0x0248)
class ATerritory : public AInfo
{
public:
	class UTerritoryComponent*                         Territory;                                     // 0x0240 (0x0008) [0x000000000408000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Territory");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TerritoryComponent
// 0x00B0 (0x0360 - 0x0410)
class UTerritoryComponent : public UPrimitiveComponent
{
public:
	uint32_t                                           bAlwaysSeeInThreatRadius : 1;                  // 0x0360 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bCombatLimitsRangedOnly : 1;                   // 0x0360 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bViewTerritory : 1;                            // 0x0360 (0x0004) [0x0000000000006003] [0x00000004] (CPF_Edit | CPF_Const | CPF_Transient | CPF_Config)
	uint32_t                                           bViewTerritorySolid : 1;                       // 0x0360 (0x0004) [0x0000000000006003] [0x00000008] (CPF_Edit | CPF_Const | CPF_Transient | CPF_Config)
	ETerritoryType                                     CombatProxy;                                   // 0x0364 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FTerritoryData                              CombatTerritory;                               // 0x0368 (0x0028) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FTerritoryData                              PatrolTerritory;                               // 0x0390 (0x0028) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FTerritoryData                              SpawnTerritory;                                // 0x03B8 (0x0028) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FTerritoryData                              ThreatTerritory;                               // 0x03E0 (0x0028) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint8_t                                           UnknownData00[0x8];                            // 0x0408 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TerritoryComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TimeValueResolver
// 0x0048 (0x0058 - 0x00A0)
class UTimeValueResolver : public UAttributeValueResolver
{
public:
	ETimeValueResolverMode                             TimeMode;                                      // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bNormalizeTime : 1;                            // 0x005C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                StartTime;                                     // 0x0060 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                TotalTime;                                     // 0x0080 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TimeValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.TurnDefinition
// 0x0078 (0x0058 - 0x00D0)
class UTurnDefinition : public UGBXDefinition
{
public:
	struct FTurnData                                   Idle;                                          // 0x0058 (0x0038) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FTurnData                                   Moving;                                        // 0x0090 (0x0038) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              TurnCancelTime;                                // 0x00C8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.TurnDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.UtilityAxis
// 0x0000 (0x0058 - 0x0058)
class UUtilityAxis : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.UtilityAxis");
		}

		return uClassPointer;
	};

	float GetValue(struct FUtilityContextData& ContextData);
	class FString GetDescription();
};

// Class GearboxFramework.UtilityAxis_Attribute
// 0x0028 (0x0058 - 0x0080)
class UUtilityAxis_Attribute : public UUtilityAxis
{
public:
	EUtilityContext                                    Context;                                       // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Value;                                         // 0x0060 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.UtilityAxis_Attribute");
		}

		return uClassPointer;
	};

	float GetValue(struct FUtilityContextData& ContextData);
	class FString GetDescription();
};

// Class GearboxFramework.UtilityAxis_Condition
// 0x0010 (0x0058 - 0x0068)
class UUtilityAxis_Condition : public UUtilityAxis
{
public:
	EUtilityContext                                    Context;                                       // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Condition;                                     // 0x0060 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.UtilityAxis_Condition");
		}

		return uClassPointer;
	};

	float GetValue(struct FUtilityContextData& ContextData);
	class FString GetDescription();
};

// Class GearboxFramework.UtilityDefinition
// 0x0038 (0x0058 - 0x0090)
class UUtilityDefinition : public UGBXDefinition
{
public:
	EUtilityType                                       Type;                                          // 0x0058 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FUtilityEntryData>             Entries;                                       // 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FUtilityAxisData>              Axes;                                          // 0x0070 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FUtilityConditionData>         Conditions;                                    // 0x0080 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.UtilityDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ViewBlockerComponent
// 0x0020 (0x0360 - 0x0380)
class UViewBlockerComponent : public UPrimitiveComponent
{
public:
	float                                              Radius;                                        // 0x0360 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    BlockPercent;                                  // 0x0364 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UViewBlockerComponent*                       NextBlocker;                                   // 0x0370 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	uint8_t                                           UnknownData00[0x8];                            // 0x0378 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ViewBlockerComponent");
		}

		return uClassPointer;
	};

	static void Debug();
	static float StaticGetModifier(struct FVector& EyeLoc, struct FVector& TargetLoc);
	float GetModifier(struct FVector& EyeLoc, struct FVector& TargetLoc);
	void SetBlockPercent(struct FAIRange& NewBlockPErcent);
	void SetRadius(float NewRadius);
};

// Class GearboxFramework.ViewConeComponent
// 0x0030 (0x0360 - 0x0390)
class UViewConeComponent : public UPrimitiveComponent
{
public:
	float                                              Range;                                         // 0x0360 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              Angle;                                         // 0x0364 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAIRange                                    Rate;                                          // 0x0368 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FColor                                      DebugColor;                                    // 0x0370 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bLimitUse : 1;                                 // 0x0374 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	class TArray<EAwareness>                           ValidAwareness;                                // 0x0378 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	uint8_t                                           UnknownData00[0x8];                            // 0x0388 (0x0008) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ViewConeComponent");
		}

		return uClassPointer;
	};

	static float StaticGetRate(class AActor* AIOwner, EAwareness Awareness, struct FVector& TargetLoc);
	float GetRate(EAwareness Awareness, struct FVector& TargetLoc);
	bool Valid(EAwareness Awareness);
};

// Class GearboxFramework.WeaponUseComponent
// 0x00B8 (0x0090 - 0x0148)
class UWeaponUseComponent : public UActorComponent
{
public:
	class AGearboxPawn*                                Pawn;                                          // 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class AGearboxMind*                                Mind;                                          // 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAIComponent*                                AIComp;                                        // 0x00A0 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AWeapon*                                     Weapon;                                        // 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UWeaponUsageDefinition*                      Def;                                           // 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class AWorldInfo*                                  WorldInfo;                                     // 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	EAIWeaponState                                     State;                                         // 0x00C0 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bHitHeatLimit : 1;                             // 0x00C4 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	float                                              UsedBurstTime;                                 // 0x00C8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              FireStartTime;                                 // 0x00CC (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              NextAvailableFireTime;                         // 0x00D0 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              SpeedSpread;                                   // 0x00D4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              BurstDuration;                                 // 0x00D8 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              BurstDurationValue;                            // 0x00DC (0x0004) [0x8000000000002002] (CPF_Const | CPF_Transient)
	float                                              BurstDurationValueBaseValue;                   // 0x00E0 (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            BurstDurationValueModifierStack;               // 0x00E8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	float                                              BurstDurationVariance;                         // 0x00F8 (0x0004) [0x8000000000002002] (CPF_Const | CPF_Transient)
	float                                              BurstDurationVarianceBaseValue;                // 0x00FC (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            BurstDurationVarianceModifierStack;            // 0x0100 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	float                                              BurstCount;                                    // 0x0110 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              BurstCountValue;                               // 0x0114 (0x0004) [0x8000000000002002] (CPF_Const | CPF_Transient)
	float                                              BurstCountValueBaseValue;                      // 0x0118 (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            BurstCountValueModifierStack;                  // 0x0120 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	float                                              BurstCountVariance;                            // 0x0130 (0x0004) [0x8000000000002002] (CPF_Const | CPF_Transient)
	float                                              BurstCountVarianceBaseValue;                   // 0x0134 (0x0004) [0x4000000000000002] (CPF_Const)   
	class TArray<class UAttributeModifier*>            BurstCountVarianceModifierStack;               // 0x0138 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.WeaponUseComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.WeaponUseComponentAttributeContextResolver
// 0x0000 (0x0058 - 0x0058)
class UWeaponUseComponentAttributeContextResolver : public UAttributeContextResolver
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.WeaponUseComponentAttributeContextResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.WireManager
// 0x0008 (0x0240 - 0x0248)
class AWireManager : public AActor
{
public:
	class UMaterialInterface*                          DefaultMaterial;                               // 0x0240 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.WireManager");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.WireTerminal
// 0x0028 (0x0248 - 0x0270)
class AWireTerminal : public AStaticMeshActor
{
public:
	class AWireTerminal*                               NextTerminal;                                  // 0x0248 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FWireLinkage>                  Linkages;                                      // 0x0250 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UMaterialInterface*                          WireMaterial;                                  // 0x0260 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bTerminalDirty : 1;                            // 0x0268 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.WireTerminal");
		}

		return uClassPointer;
	};

	void eventDestroyed();
	void NotifyModifiedTerminal();
};

// Class GearboxFramework.WiringActor
// 0x0000 (0x0248 - 0x0248)
class AWiringActor : public AStaticMeshActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.WiringActor");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.ActionResource
// 0x0000 (0x0058 - 0x0058)
class UActionResource : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.ActionResource");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AIFactoryBase
// 0x0000 (0x0058 - 0x0058)
class UAIFactoryBase : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AIFactoryBase");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AwarenessZoneCollectionDefinition
// 0x0000 (0x0058 - 0x0058)
class UAwarenessZoneCollectionDefinition : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AwarenessZoneCollectionDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.AwarenessZoneDefinition
// 0x0000 (0x0058 - 0x0058)
class UAwarenessZoneDefinition : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.AwarenessZoneDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_AITargeting
// 0x0000 (0x0070 - 0x0070)
class UBehavior_AITargeting : public UBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_AITargeting");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_ChangeDialogName
// 0x0000 (0x0070 - 0x0070)
class UBehavior_ChangeDialogName : public UBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ChangeDialogName");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_SendGbxMessage
// 0x0000 (0x0070 - 0x0070)
class UBehavior_SendGbxMessage : public UBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_SendGbxMessage");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_StopDialog
// 0x0000 (0x0070 - 0x0070)
class UBehavior_StopDialog : public UBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_StopDialog");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_ToggleDialog
// 0x0000 (0x0070 - 0x0070)
class UBehavior_ToggleDialog : public UBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_ToggleDialog");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.Behavior_TriggerDialogEvent
// 0x0000 (0x0070 - 0x0070)
class UBehavior_TriggerDialogEvent : public UBehaviorBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.Behavior_TriggerDialogEvent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.CharacterClassMessageDefinition
// 0x0000 (0x0058 - 0x0058)
class UCharacterClassMessageDefinition : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.CharacterClassMessageDefinition");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.DenAIComponent
// 0x0000 (0x02F8 - 0x02F8)
class UDenAIComponent : public UAIComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.DenAIComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GBXInfluenceInfo_InfluencePolygon
// 0x0000 (0x00D0 - 0x00D0)
class UGBXInfluenceInfo_InfluencePolygon : public UGBXInfluenceInfo_Combine
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GBXInfluenceInfo_InfluencePolygon");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxAccountActions
// 0x0000 (0x0058 - 0x0058)
class UGearboxAccountActions : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAccountActions");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxAIController
// 0x0000 (0x0330 - 0x0330)
class AGearboxAIController : public AAIController
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAIController");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxAIFactory
// 0x0000 (0x0058 - 0x0058)
class UGearboxAIFactory : public UAIFactoryBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxAIFactory");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogNode
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogNode : public UGearboxEditorNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogNode");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogAction
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogAction : public UGearboxDialogNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogAction");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogAct_Chance
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogAct_Chance : public UGearboxDialogAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogAct_Chance");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogAct_Compare
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogAct_Compare : public UGearboxDialogAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogAct_Compare");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogAct_ObjectParameterSwitch
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogAct_ObjectParameterSwitch : public UGearboxDialogAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogAct_ObjectParameterSwitch");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogNonTemplateAction
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogNonTemplateAction : public UGearboxDialogAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogNonTemplateAction");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogAct_Talk
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogAct_Talk : public UGearboxDialogNonTemplateAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogAct_Talk");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogTemplateAction
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogTemplateAction : public UGearboxDialogAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogTemplateAction");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogAct_Trigger
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogAct_Trigger : public UGearboxDialogTemplateAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogAct_Trigger");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogActor
// 0x0000 (0x0240 - 0x0240)
class AGearboxDialogActor : public AActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogActor");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogComponent
// 0x0000 (0x0090 - 0x0090)
class UGearboxDialogComponent : public UActorComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogEvent
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogEvent : public UGearboxDialogNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogEvent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogEventData
// 0x0000 (0x0058 - 0x0058)
class UGearboxDialogEventData : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogEventData");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogEventTag
// 0x0000 (0x0058 - 0x0058)
class UGearboxDialogEventTag : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogEventTag");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogGroup
// 0x0000 (0x0058 - 0x0058)
class UGearboxDialogGroup : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogGroup");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogManager
// 0x0000 (0x0058 - 0x0058)
class UGearboxDialogManager : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogManager");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogPriority
// 0x0000 (0x0058 - 0x0058)
class UGearboxDialogPriority : public UGBXDefinition
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogPriority");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogTemplateEvent
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogTemplateEvent : public UGearboxDialogEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogTemplateEvent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogTemplateGroup
// 0x0000 (0x0058 - 0x0058)
class UGearboxDialogTemplateGroup : public UGearboxDialogGroup
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogTemplateGroup");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVariable
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogVariable : public UGearboxDialogNode
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogVariable");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVar_Instigator
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogVar_Instigator : public UGearboxDialogVariable
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogVar_Instigator");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVar_LastTalker
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogVar_LastTalker : public UGearboxDialogVariable
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogVar_LastTalker");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVar_NameTag
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogVar_NameTag : public UGearboxDialogVariable
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogVar_NameTag");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVar_Other
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogVar_Other : public UGearboxDialogVariable
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogVar_Other");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxDialogVar_Random
// 0x0000 (0x0098 - 0x0098)
class UGearboxDialogVar_Random : public UGearboxDialogVariable
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxDialogVar_Random");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxPlayerInput
// 0x0000 (0x01E8 - 0x01E8)
class UGearboxPlayerInput : public UPlayerInput
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxPlayerInput");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_PawnClonerLink
// 0x0020 (0x0100 - 0x0120)
class UGearboxSeqAct_PawnClonerLink : public USeqAct_Latent
{
public:
	uint32_t                                           bEnabled : 1;                                  // 0x0100 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsSpawning : 1;                               // 0x0100 (0x0004) [0x0000000000000000] [0x00000002] 
	class TArray<class AActor*>                        ClonePoints;                                   // 0x0108 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            SpawnedCount;                                  // 0x0118 (0x0004) [0x0000000000000000]               
	float                                              RemainingDelay;                                // 0x011C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_PawnClonerLink");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_ToggleDialog
// 0x0000 (0x00E8 - 0x00E8)
class UGearboxSeqAct_ToggleDialog : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_ToggleDialog");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.GearboxSeqAct_TriggerDialogName
// 0x0000 (0x0148 - 0x0148)
class UGearboxSeqAct_TriggerDialogName : public UGearboxSeqAct_TriggerDialog
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.GearboxSeqAct_TriggerDialogName");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.MultipleFlagValueResolver
// 0x0000 (0x0058 - 0x0058)
class UMultipleFlagValueResolver : public UFlagValueResolver
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.MultipleFlagValueResolver");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PopulationOpportunityCloner
// 0x0000 (0x02E0 - 0x02E0)
class APopulationOpportunityCloner : public ASpawner
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PopulationOpportunityCloner");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PopulationOpportunityCombat
// 0x0000 (0x02E0 - 0x02E0)
class APopulationOpportunityCombat : public ASpawner
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PopulationOpportunityCombat");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.PopulationOpportunityCombatRenderingComponent
// 0x0000 (0x0360 - 0x0360)
class UPopulationOpportunityCombatRenderingComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.PopulationOpportunityCombatRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.RES_SpecialMove
// 0x0000 (0x0058 - 0x0058)
class URES_SpecialMove : public UActionResource
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.RES_SpecialMove");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_PopulatedPoint
// 0x0000 (0x0118 - 0x0118)
class USeqEvent_PopulatedPoint : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_PopulatedPoint");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SeqEvent_SinglePopulationDeath
// 0x0000 (0x0118 - 0x0118)
class USeqEvent_SinglePopulationDeath : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SeqEvent_SinglePopulationDeath");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SkeletalMeshActorGBXMatinee
// 0x0000 (0x02A8 - 0x02A8)
class ASkeletalMeshActorGBXMatinee : public ASkeletalMeshActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SkeletalMeshActorGBXMatinee");
		}

		return uClassPointer;
	};

};

// Class GearboxFramework.SparkServiceConfigurationAuthenticate
// 0x0000 (0x00A8 - 0x00A8)
class USparkServiceConfigurationAuthenticate : public USparkServiceConfiguration
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GearboxFramework.SparkServiceConfigurationAuthenticate");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
