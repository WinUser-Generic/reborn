/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: GFxUI_parameters.hpp
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

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x12020800] 
struct UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x12020800] 
struct UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x12020800] 
struct UGFxAction_Invoke_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x12020800] 
struct UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x12020800] 
struct UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x12020800] 
struct UGFxFSCmdHandler_eventFSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxEvent_FSCommand*                         Event;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Cmd;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Arg;                                              		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00]  (iNative[14789])
struct UGFxFSCmdHandler_Kismet_eventFSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxEvent_FSCommand*                         Event;                                            		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Cmd;                                              		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Arg;                                              		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020400]  (iNative[31334])
struct UGFxInteraction_execCloseAllMoviePlayers_Params
{
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020400]  (iNative[26552])
struct UGFxInteraction_execNotifySplitscreenLayoutChanged_Params
{
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400]  (iNative[26548])
struct UGFxInteraction_execNotifyPlayerRemoved_Params
{
	int32_t                                            PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class ULocalPlayer*                                RemovedPlayer;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400]  (iNative[26547])
struct UGFxInteraction_execNotifyPlayerAdded_Params
{
	int32_t                                            PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class ULocalPlayer*                                AddedPlayer;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400]  (iNative[14522])
struct UGFxInteraction_execNotifyGameSessionEnded_Params
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400]  (iNative[31372])
struct UGFxInteraction_execGetFocusMovie_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxMoviePlayer*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxLayoutDefinition.PositionClip
// [0x00020401]  (iNative[31449])
struct UGFxLayoutDefinition_execPositionClip_Params
{
	struct FName                                       InstanceName;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Clip;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bSpectatorMode : 1;                               		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.GetAllOwnedObjects
// [0x00020400]  (iNative[31357])
struct UGFxMoviePlayer_execGetAllOwnedObjects_Params
{
	class TArray<class UGFxObject*>                    ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ResolveProxy
// [0x00020401]  (iNative[31471])
struct UGFxMoviePlayer_execResolveProxy_Params
{
	struct FName                                       RealInstanceName;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  RealGFxObject;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetAllProxyObjects
// [0x00020401]  (iNative[31358])
struct UGFxMoviePlayer_execGetAllProxyObjects_Params
{
	class TArray<class UGFxObject*>                    ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ClearAllProxyObjects
// [0x00020401]  (iNative[31328])
struct UGFxMoviePlayer_execClearAllProxyObjects_Params
{
};

// Function GFxUI.GFxMoviePlayer.UnregisterProxyObject
// [0x00020401]  (iNative[31538])
struct UGFxMoviePlayer_execUnregisterProxyObject_Params
{
	struct FName                                       ProxyObjectName;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.RegisterProxyObject
// [0x00020401]  (iNative[31464])
struct UGFxMoviePlayer_execRegisterProxyObject_Params
{
	struct FName                                       ProxyObjectName;                                  		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  ProxyObject;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.extObjFunc
// [0x12020003] 
struct UGFxMoviePlayer_execextObjFunc_Params
{
	class UGFxObject*                                  Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      func;                                             		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.extUncacheClip
// [0x12020002] 
struct UGFxMoviePlayer_execextUncacheClip_Params
{
	class FString                                      ClassName;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Clip;                                             		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.extCacheClip
// [0x12020002] 
struct UGFxMoviePlayer_execextCacheClip_Params
{
	class FString                                      ClassName;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Clip;                                             		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.GetRoot
// [0x00020401]  (iNative[31381])
struct UGFxMoviePlayer_execGetRoot_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetUCClassForASClass
// [0x00020400]  (iNative[31382])
struct UGFxMoviePlayer_execGetUCClassForASClass_Params
{
	struct FName                                       ClassName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.UncacheGFxObject
// [0x00020401]  (iNative[31535])
struct UGFxMoviePlayer_execUncacheGFxObject_Params
{
	class UGFxObject*                                  anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.CacheGFxObject
// [0x00020401]  (iNative[31325])
struct UGFxMoviePlayer_execCacheGFxObject_Params
{
	class UGFxObject*                                  anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.UnregisterGFxObject
// [0x00020401]  (iNative[31537])
struct UGFxMoviePlayer_execUnregisterGFxObject_Params
{
	class UGFxObject*                                  anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.RegisterGFxObject
// [0x00020401]  (iNative[31463])
struct UGFxMoviePlayer_execRegisterGFxObject_Params
{
	class UGFxObject*                                  anObject;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.HookSaveScreenshot
// [0x00020401]  (iNative[31405])
struct UGFxMoviePlayer_execHookSaveScreenshot_Params
{
};

// Function GFxUI.GFxMoviePlayer.UpdateRenderTexture
// [0x00020401]  (iNative[31539])
struct UGFxMoviePlayer_execUpdateRenderTexture_Params
{
	class UTextureRenderTarget2D*                      NewRenderTexture;                                 		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.OnInputAxis
// [0x00120000] 
struct UGFxMoviePlayer_execOnInputAxis_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ukey;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Delta;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.OnInputKey
// [0x00120000] 
struct UGFxMoviePlayer_execOnInputKey_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ukey;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            uevent;                                           		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.InputKey
// [0x00020402]  (iNative[2216])
struct UGFxMoviePlayer_execInputKey_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ukey;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            uevent;                                           		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020401]  (iNative[31540])
struct UGFxMoviePlayer_execUpdateSplitscreenLayout_Params
{
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x12020000] 
struct UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Params
{
	uint32_t                                           bRemoveEffect : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x12020000] 
struct UGFxMoviePlayer_execApplyPriorityBlurEffect_Params
{
	uint32_t                                           bRemoveEffect : 1;                                		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x12020800] 
struct UGFxMoviePlayer_eventApplyPriorityEffect_Params
{
	uint32_t                                           bRequestedBlurState : 1;                          		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bRequestedHiddenState : 1;                        		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x12020800] 
struct UGFxMoviePlayer_eventOnFocusLost_Params
{
	int32_t                                            LocalPlayerIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x12020800] 
struct UGFxMoviePlayer_eventOnFocusGained_Params
{
	int32_t                                            LocalPlayerIndex;                                 		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetLP
// [0x00020401]  (iNative[31497])
struct UGFxMoviePlayer_execSetLP_Params
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020401]  (iNative[31379])
struct UGFxMoviePlayer_execGetPC_Params
{
	class APlayerController*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020401]  (iNative[31376])
struct UGFxMoviePlayer_execGetLP_Params
{
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.Init
// [0x12024000] 
struct UGFxMoviePlayer_execInit_Params
{
	class ULocalPlayer*                                LocPlay;                                          		// 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401]  (iNative[31510])
struct UGFxMoviePlayer_execSetWidgetPathBinding_Params
{
	class UGFxObject*                                  WidgetToBind;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Path;                                             		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x12020800] 
struct UGFxMoviePlayer_eventPostWidgetInit_Params
{
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x12020800] 
struct UGFxMoviePlayer_eventWidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x12020800] 
struct UGFxMoviePlayer_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020400]  (iNative[31359])
struct UGFxMoviePlayer_execGetAVMVersion_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FilterAxisInput
// [0x12020800] 
struct UGFxMoviePlayer_eventFilterAxisInput_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       Key;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Delta;                                            		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        		// 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x12020800] 
struct UGFxMoviePlayer_eventFilterButtonInput_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       ButtonName;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            InputEvent;                                       		// 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401]  (iNative[23198])
struct UGFxMoviePlayer_execFlushPlayerInput_Params
{
	uint32_t                                           capturekeysonly : 1;                              		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401]  (iNative[31330])
struct UGFxMoviePlayer_execClearFocusIgnoreKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401]  (iNative[31247])
struct UGFxMoviePlayer_execAddFocusIgnoreKey_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401]  (iNative[31329])
struct UGFxMoviePlayer_execClearCaptureKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401]  (iNative[31245])
struct UGFxMoviePlayer_execAddCaptureKey_Params
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401]  (iNative[31499])
struct UGFxMoviePlayer_execSetMovieCanReceiveInput_Params
{
	uint32_t                                           bCanReceiveInput : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401]  (iNative[31498])
struct UGFxMoviePlayer_execSetMovieCanReceiveFocus_Params
{
	uint32_t                                           bCanReceiveFocus : 1;                             		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetSceneDPG
// [0x00020401]  (iNative[31504])
struct UGFxMoviePlayer_execSetSceneDPG_Params
{
	uint8_t                                            NewDPG;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401]  (iNative[31501])
struct UGFxMoviePlayer_execSetPerspective3D_Params
{
	struct FMatrix                                     matPersp;                                         		// 0x0000 (0x0040) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401]  (iNative[31506])
struct UGFxMoviePlayer_execSetView3D_Params
{
	struct FMatrix                                     matView;                                          		// 0x0000 (0x0040) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401]  (iNative[31383])
struct UGFxMoviePlayer_execGetVisibleFrameRect_Params
{
	float                                              x0;                                               		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              y0;                                               		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              X1;                                               		// 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              Y1;                                               		// 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401]  (iNative[31478])
struct UGFxMoviePlayer_execSetAlignment_Params
{
	uint8_t                                            A;                                                		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401]  (iNative[31508])
struct UGFxMoviePlayer_execSetViewScaleMode_Params
{
	uint8_t                                            SM;                                               		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.OnSetViewport
// [0x12020800] 
struct UGFxMoviePlayer_eventOnSetViewport_Params
{
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401]  (iNative[31507])
struct UGFxMoviePlayer_execSetViewport_Params
{
	int32_t                                            X;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Y;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Width;                                            		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Height;                                           		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401]  (iNative[31373])
struct UGFxMoviePlayer_execGetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020400]  (iNative[31502])
struct UGFxMoviePlayer_execSetPriority_Params
{
	uint8_t                                            NewPriority;                                      		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x12020000] 
struct UGFxMoviePlayer_execSetExternalInterface_Params
{
	class UObject*                                     H;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020400]  (iNative[31505])
struct UGFxMoviePlayer_execSetTimingMode_Params
{
	uint8_t                                            Mode;                                             		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x12020000] 
struct UGFxMoviePlayer_execSetMovieInfo_Params
{
	class USwfMovie*                                   Data;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x12020801] 
struct UGFxMoviePlayer_eventConditionalClearPause_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x12020800] 
struct UGFxMoviePlayer_eventOnCleanup_Params
{
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x12020800] 
struct UGFxMoviePlayer_eventOnClose_Params
{
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401]  (iNative[31333])
struct UGFxMoviePlayer_execClose_Params
{
	uint32_t                                           Unload : 1;                                       		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024400]  (iNative[28915])
struct UGFxMoviePlayer_execSetPause_Params
{
	uint32_t                                           bPausePlayback : 1;                               		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] 
struct UGFxMoviePlayer_execOnPostAdvance_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020400]  (iNative[31450])
struct UGFxMoviePlayer_execPostAdvance_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401]  (iNative[17129])
struct UGFxMoviePlayer_execAdvance_Params
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00]  (iNative[14797])
struct UGFxMoviePlayer_eventStart_Params
{
	uint32_t                                           StartPaused : 1;                                  		// 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.IsDisplayObjectActive
// [0x00020401]  (iNative[31409])
struct UGFxObject_execIsDisplayObjectActive_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x12020800] 
struct UGFxObject_eventWidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x12020800] 
struct UGFxObject_eventWidgetInitialized_Params
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FName                                       WidgetPath;                                       		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.Tick
// [0x00020400]  (iNative[317])
struct UGFxObject_execTick_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GetParent
// [0x00020401]  (iNative[31378])
struct UGFxObject_execGetParent_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetRoot
// [0x00020401]  (iNative[31381])
struct UGFxObject_execGetRoot_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.LoadMovie
// [0x00020401]  (iNative[31419])
struct UGFxObject_execLoadMovie_Params
{
	class USwfMovie*                                   Movie;                                            		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GetNextHighestDepth
// [0x00020401]  (iNative[31377])
struct UGFxObject_execGetNextHighestDepth_Params
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.RemoveMovieClip
// [0x00020401]  (iNative[31467])
struct UGFxObject_execRemoveMovieClip_Params
{
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401]  (iNative[31486])
struct UGFxObject_execSetElementColorTransform_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASColorTransform                           cxform;                                           		// 0x0004 (0x0020) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401]  (iNative[31492])
struct UGFxObject_execSetElementPosition_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401]  (iNative[31493])
struct UGFxObject_execSetElementVisible_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           Visible : 1;                                      		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401]  (iNative[31488])
struct UGFxObject_execSetElementDisplayMatrix_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FMatrix                                     M;                                                		// 0x0010 (0x0040) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401]  (iNative[31487])
struct UGFxObject_execSetElementDisplayInfo_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASDisplayInfo                              D;                                                		// 0x0004 (0x002C) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401]  (iNative[31367])
struct UGFxObject_execGetElementDisplayMatrix_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FMatrix                                     ReturnValue;                                      		// 0x0010 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401]  (iNative[31366])
struct UGFxObject_execGetElementDisplayInfo_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASDisplayInfo                              ReturnValue;                                      		// 0x0004 (0x002C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401]  (iNative[31490])
struct UGFxObject_execSetElementInt_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            i;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401]  (iNative[31489])
struct UGFxObject_execSetElementFloat_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              F;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401]  (iNative[31485])
struct UGFxObject_execSetElementBool_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           B : 1;                                            		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401]  (iNative[31491])
struct UGFxObject_execSetElementObject_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  val;                                              		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401]  (iNative[31484])
struct UGFxObject_execSetElement_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASValue                                    Arg;                                              		// 0x0008 (0x0020) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401]  (iNative[31369])
struct UGFxObject_execGetElementInt_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401]  (iNative[31368])
struct UGFxObject_execGetElementFloat_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401]  (iNative[31365])
struct UGFxObject_execGetElementBool_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401]  (iNative[31370])
struct UGFxObject_execGetElementObject_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      Type;                                             		// 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401]  (iNative[31364])
struct UGFxObject_execGetElement_Params
{
	int32_t                                            Index;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASValue                                    ReturnValue;                                      		// 0x0008 (0x0020) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.HandleFadeInOrOut
// [0x00020401]  (iNative[31392])
struct UGFxObject_execHandleFadeInOrOut_Params
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.IsVisible
// [0x00020401]  (iNative[31411])
struct UGFxObject_execIsVisible_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.SetVisible
// [0x00024401]  (iNative[31509])
struct UGFxObject_execSetVisible_Params
{
	uint32_t                                           Visible : 1;                                      		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              FadeTimeSeconds;                                  		// 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401]  (iNative[31483])
struct UGFxObject_execSetDisplayMatrix3D_Params
{
	struct FMatrix                                     M;                                                		// 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401]  (iNative[31482])
struct UGFxObject_execSetDisplayMatrix_Params
{
	struct FMatrix                                     M;                                                		// 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401]  (iNative[31480])
struct UGFxObject_execSetColorTransform_Params
{
	struct FASColorTransform                           cxform;                                           		// 0x0000 (0x0020) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401]  (iNative[28929])
struct UGFxObject_execSetPosition_Params
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00420401]  (iNative[31481])
struct UGFxObject_execSetDisplayInfo_Params
{
	struct FASDisplayInfo                              D;                                                		// 0x0000 (0x002C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401]  (iNative[31363])
struct UGFxObject_execGetDisplayMatrix3D_Params
{
	struct FMatrix                                     ReturnValue;                                      		// 0x0000 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401]  (iNative[31362])
struct UGFxObject_execGetDisplayMatrix_Params
{
	struct FMatrix                                     ReturnValue;                                      		// 0x0000 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401]  (iNative[31360])
struct UGFxObject_execGetColorTransform_Params
{
	struct FASColorTransform                           ReturnValue;                                      		// 0x0000 (0x0020) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401]  (iNative[23876])
struct UGFxObject_execGetPosition_Params
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00420401]  (iNative[31361])
struct UGFxObject_execGetDisplayInfo_Params
{
	struct FASDisplayInfo                              D;                                                		// 0x0000 (0x002C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetResolvedObject
// [0x00020401]  (iNative[31380])
struct UGFxObject_execGetResolvedObject_Params
{
	class UGFxObject*                                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.SetResolvedObject
// [0x00020401]  (iNative[31503])
struct UGFxObject_execSetResolvedObject_Params
{
	class UGFxObject*                                  TheResolvedObject;                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GetInstanceName
// [0x00020401]  (iNative[31375])
struct UGFxObject_execGetInstanceName_Params
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.SetInstanceName
// [0x00020401]  (iNative[31495])
struct UGFxObject_execSetInstanceName_Params
{
	struct FName                                       NewProxyName;                                     		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetAsProxy
// [0x00020401]  (iNative[31479])
struct UGFxObject_execSetAsProxy_Params
{
	struct FName                                       ProxyName;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FName>                         ProxyGFxTags;                                     		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.IsProxy
// [0x00020401]  (iNative[31410])
struct UGFxObject_execIsProxy_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetGFxTags
// [0x00020401]  (iNative[31374])
struct UGFxObject_execGetGFxTags_Params
{
	class TArray<struct FName>                         ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ClearGFxTags
// [0x00020401]  (iNative[31331])
struct UGFxObject_execClearGFxTags_Params
{
};

// Function GFxUI.GFxObject.FindGFxTag
// [0x00020401]  (iNative[31345])
struct UGFxObject_execFindGFxTag_Params
{
	struct FName                                       TagToFind;                                        		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.RemoveGFxTag
// [0x00020401]  (iNative[31466])
struct UGFxObject_execRemoveGFxTag_Params
{
	struct FName                                       TagToRemove;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.AddGFxTags
// [0x00020401]  (iNative[31249])
struct UGFxObject_execAddGFxTags_Params
{
	class TArray<struct FName>                         TagsToAdd;                                        		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.AddGFxTag
// [0x00020401]  (iNative[31248])
struct UGFxObject_execAddGFxTag_Params
{
	struct FName                                       TagToAdd;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x12040001] 
struct UGFxClikWidget_execASRemoveAllEventListeners_Params
{
	class FString                                      Event;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
// [0x12044001] 
struct UGFxClikWidget_execAS3AddEventListener_Params
{
	class FString                                      Type;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  O;                                                		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           useCapture : 1;                                   		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            listenerPriority;                                 		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           useWeakReference : 1;                             		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x12040001] 
struct UGFxClikWidget_execASAddEventListener_Params
{
	class FString                                      Type;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  O;                                                		// 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      func;                                             		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x12040001] 
struct UGFxClikWidget_execSetListener_Params
{
	class UGFxObject*                                  O;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      member;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             listener;                                         		// 0x0018 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x12040001] 
struct UGFxClikWidget_execGetEventStringFromTypename_Params
{
	struct FName                                       Typename;                                         		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x12020000] 
struct UGFxClikWidget_execRemoveAllEventListeners_Params
{
	class FString                                      Event;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x12024000] 
struct UGFxClikWidget_execAddEventListener_Params
{
	struct FName                                       Type;                                             		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             listener;                                         		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           useCapture : 1;                                   		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            listenerPriority;                                 		// 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           useWeakReference : 1;                             		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120000] 
struct UGFxClikWidget_execEventListener_Params
{
	struct FEventData                                  Data;                                             		// 0x0000 (0x0028) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
