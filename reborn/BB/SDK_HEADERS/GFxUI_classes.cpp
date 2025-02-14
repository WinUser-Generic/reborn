/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: GFxUI_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_CloseMovie::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject");
	}

	UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_GetVariable::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject");
	}

	UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_Invoke::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject");
	}

	UGFxAction_Invoke_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_OpenMovie::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject");
	}

	UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_SetVariable::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject");
	}

	UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
};

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// const class FString&           Cmd                            (CPF_Parm | CPF_NeedCtorLink)
// const class FString&           Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxFSCmdHandler::eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const class FString& Cmd, const class FString& Arg)
{
	static UFunction* uFnFSCommand = nullptr;

	if (!uFnFSCommand)
	{
		uFnFSCommand = UFunction::FindFunction("Function GFxUI.GFxFSCmdHandler.FSCommand");
	}

	UGFxFSCmdHandler_eventFSCommand_Params FSCommand_Params;
	memset(&FSCommand_Params, 0, sizeof(FSCommand_Params));
	memcpy_s(&FSCommand_Params.Movie, sizeof(FSCommand_Params.Movie), &Movie, sizeof(Movie));
	memcpy_s(&FSCommand_Params.Event, sizeof(FSCommand_Params.Event), &Event, sizeof(Event));
	memcpy_s(&FSCommand_Params.Cmd, sizeof(FSCommand_Params.Cmd), &Cmd, sizeof(Cmd));
	memcpy_s(&FSCommand_Params.Arg, sizeof(FSCommand_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnFSCommand, &FSCommand_Params, nullptr);

	return FSCommand_Params.ReturnValue;
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[14789])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// const class FString&           Cmd                            (CPF_Parm | CPF_NeedCtorLink)
// const class FString&           Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxFSCmdHandler_Kismet::eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const class FString& Cmd, const class FString& Arg)
{
	static UFunction* uFnFSCommand = nullptr;

	if (!uFnFSCommand)
	{
		uFnFSCommand = UFunction::FindFunction("Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand");
	}

	UGFxFSCmdHandler_Kismet_eventFSCommand_Params FSCommand_Params;
	memset(&FSCommand_Params, 0, sizeof(FSCommand_Params));
	memcpy_s(&FSCommand_Params.Movie, sizeof(FSCommand_Params.Movie), &Movie, sizeof(Movie));
	memcpy_s(&FSCommand_Params.Event, sizeof(FSCommand_Params.Event), &Event, sizeof(Event));
	memcpy_s(&FSCommand_Params.Cmd, sizeof(FSCommand_Params.Cmd), &Cmd, sizeof(Cmd));
	memcpy_s(&FSCommand_Params.Arg, sizeof(FSCommand_Params.Arg), &Arg, sizeof(Arg));

	uFnFSCommand->iNative = 0;
	uFnFSCommand->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFSCommand, &FSCommand_Params, nullptr);
	uFnFSCommand->FunctionFlags |= 0x400;
	uFnFSCommand->iNative = 14789;

	return FSCommand_Params.ReturnValue;
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31334])
// Parameter Info:

void UGFxInteraction::CloseAllMoviePlayers()
{
	static UFunction* uFnCloseAllMoviePlayers = nullptr;

	if (!uFnCloseAllMoviePlayers)
	{
		uFnCloseAllMoviePlayers = UFunction::FindFunction("Function GFxUI.GFxInteraction.CloseAllMoviePlayers");
	}

	UGFxInteraction_execCloseAllMoviePlayers_Params CloseAllMoviePlayers_Params;
	memset(&CloseAllMoviePlayers_Params, 0, sizeof(CloseAllMoviePlayers_Params));

	uFnCloseAllMoviePlayers->iNative = 0;
	uFnCloseAllMoviePlayers->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCloseAllMoviePlayers, &CloseAllMoviePlayers_Params, nullptr);
	uFnCloseAllMoviePlayers->FunctionFlags |= 0x400;
	uFnCloseAllMoviePlayers->iNative = 31334;
};

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26552])
// Parameter Info:

void UGFxInteraction::NotifySplitscreenLayoutChanged()
{
	static UFunction* uFnNotifySplitscreenLayoutChanged = nullptr;

	if (!uFnNotifySplitscreenLayoutChanged)
	{
		uFnNotifySplitscreenLayoutChanged = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged");
	}

	UGFxInteraction_execNotifySplitscreenLayoutChanged_Params NotifySplitscreenLayoutChanged_Params;
	memset(&NotifySplitscreenLayoutChanged_Params, 0, sizeof(NotifySplitscreenLayoutChanged_Params));

	uFnNotifySplitscreenLayoutChanged->iNative = 0;
	uFnNotifySplitscreenLayoutChanged->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNotifySplitscreenLayoutChanged, &NotifySplitscreenLayoutChanged_Params, nullptr);
	uFnNotifySplitscreenLayoutChanged->FunctionFlags |= 0x400;
	uFnNotifySplitscreenLayoutChanged->iNative = 26552;
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26548])
// Parameter Info:
// int32_t                        PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            RemovedPlayer                  (CPF_Parm)

void UGFxInteraction::NotifyPlayerRemoved(int32_t PlayerIndex, class ULocalPlayer* RemovedPlayer)
{
	static UFunction* uFnNotifyPlayerRemoved = nullptr;

	if (!uFnNotifyPlayerRemoved)
	{
		uFnNotifyPlayerRemoved = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyPlayerRemoved");
	}

	UGFxInteraction_execNotifyPlayerRemoved_Params NotifyPlayerRemoved_Params;
	memset(&NotifyPlayerRemoved_Params, 0, sizeof(NotifyPlayerRemoved_Params));
	memcpy_s(&NotifyPlayerRemoved_Params.PlayerIndex, sizeof(NotifyPlayerRemoved_Params.PlayerIndex), &PlayerIndex, sizeof(PlayerIndex));
	memcpy_s(&NotifyPlayerRemoved_Params.RemovedPlayer, sizeof(NotifyPlayerRemoved_Params.RemovedPlayer), &RemovedPlayer, sizeof(RemovedPlayer));

	uFnNotifyPlayerRemoved->iNative = 0;
	uFnNotifyPlayerRemoved->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNotifyPlayerRemoved, &NotifyPlayerRemoved_Params, nullptr);
	uFnNotifyPlayerRemoved->FunctionFlags |= 0x400;
	uFnNotifyPlayerRemoved->iNative = 26548;
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26547])
// Parameter Info:
// int32_t                        PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            AddedPlayer                    (CPF_Parm)

void UGFxInteraction::NotifyPlayerAdded(int32_t PlayerIndex, class ULocalPlayer* AddedPlayer)
{
	static UFunction* uFnNotifyPlayerAdded = nullptr;

	if (!uFnNotifyPlayerAdded)
	{
		uFnNotifyPlayerAdded = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyPlayerAdded");
	}

	UGFxInteraction_execNotifyPlayerAdded_Params NotifyPlayerAdded_Params;
	memset(&NotifyPlayerAdded_Params, 0, sizeof(NotifyPlayerAdded_Params));
	memcpy_s(&NotifyPlayerAdded_Params.PlayerIndex, sizeof(NotifyPlayerAdded_Params.PlayerIndex), &PlayerIndex, sizeof(PlayerIndex));
	memcpy_s(&NotifyPlayerAdded_Params.AddedPlayer, sizeof(NotifyPlayerAdded_Params.AddedPlayer), &AddedPlayer, sizeof(AddedPlayer));

	uFnNotifyPlayerAdded->iNative = 0;
	uFnNotifyPlayerAdded->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNotifyPlayerAdded, &NotifyPlayerAdded_Params, nullptr);
	uFnNotifyPlayerAdded->FunctionFlags |= 0x400;
	uFnNotifyPlayerAdded->iNative = 26547;
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[14522])
// Parameter Info:

void UGFxInteraction::NotifyGameSessionEnded()
{
	static UFunction* uFnNotifyGameSessionEnded = nullptr;

	if (!uFnNotifyGameSessionEnded)
	{
		uFnNotifyGameSessionEnded = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyGameSessionEnded");
	}

	UGFxInteraction_execNotifyGameSessionEnded_Params NotifyGameSessionEnded_Params;
	memset(&NotifyGameSessionEnded_Params, 0, sizeof(NotifyGameSessionEnded_Params));

	uFnNotifyGameSessionEnded->iNative = 0;
	uFnNotifyGameSessionEnded->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Params, nullptr);
	uFnNotifyGameSessionEnded->FunctionFlags |= 0x400;
	uFnNotifyGameSessionEnded->iNative = 14522;
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31372])
// Parameter Info:
// class UGFxMoviePlayer*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FPlatformUserId&  UserId                         (CPF_Parm)

class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie(const struct FPlatformUserId& UserId)
{
	static UFunction* uFnGetFocusMovie = nullptr;

	if (!uFnGetFocusMovie)
	{
		uFnGetFocusMovie = UFunction::FindFunction("Function GFxUI.GFxInteraction.GetFocusMovie");
	}

	UGFxInteraction_execGetFocusMovie_Params GetFocusMovie_Params;
	memset(&GetFocusMovie_Params, 0, sizeof(GetFocusMovie_Params));
	memcpy_s(&GetFocusMovie_Params.UserId, sizeof(GetFocusMovie_Params.UserId), &UserId, sizeof(UserId));

	uFnGetFocusMovie->iNative = 0;
	uFnGetFocusMovie->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFocusMovie, &GetFocusMovie_Params, nullptr);
	uFnGetFocusMovie->FunctionFlags |= 0x400;
	uFnGetFocusMovie->iNative = 31372;

	return GetFocusMovie_Params.ReturnValue;
};

// Function GFxUI.GFxLayoutDefinition.PositionClip
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31449])
// Parameter Info:
// const struct FName&            InstanceName                   (CPF_Parm)
// class UGFxObject*              Clip                           (CPF_Parm)
// bool                           bSpectatorMode                 (CPF_Parm)

void UGFxLayoutDefinition::PositionClip(const struct FName& InstanceName, class UGFxObject* Clip, bool bSpectatorMode)
{
	static UFunction* uFnPositionClip = nullptr;

	if (!uFnPositionClip)
	{
		uFnPositionClip = UFunction::FindFunction("Function GFxUI.GFxLayoutDefinition.PositionClip");
	}

	UGFxLayoutDefinition_execPositionClip_Params PositionClip_Params;
	memset(&PositionClip_Params, 0, sizeof(PositionClip_Params));
	memcpy_s(&PositionClip_Params.InstanceName, sizeof(PositionClip_Params.InstanceName), &InstanceName, sizeof(InstanceName));
	memcpy_s(&PositionClip_Params.Clip, sizeof(PositionClip_Params.Clip), &Clip, sizeof(Clip));
	PositionClip_Params.bSpectatorMode = bSpectatorMode;

	uFnPositionClip->iNative = 0;
	uFnPositionClip->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPositionClip, &PositionClip_Params, nullptr);
	uFnPositionClip->FunctionFlags |= 0x400;
	uFnPositionClip->iNative = 31449;
};

// Function GFxUI.GFxMoviePlayer.GetAllOwnedObjects
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31357])
// Parameter Info:
// class TArray<class UGFxObject*> ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class TArray<class UGFxObject*> UGFxMoviePlayer::GetAllOwnedObjects()
{
	static UFunction* uFnGetAllOwnedObjects = nullptr;

	if (!uFnGetAllOwnedObjects)
	{
		uFnGetAllOwnedObjects = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetAllOwnedObjects");
	}

	UGFxMoviePlayer_execGetAllOwnedObjects_Params GetAllOwnedObjects_Params;
	memset(&GetAllOwnedObjects_Params, 0, sizeof(GetAllOwnedObjects_Params));

	uFnGetAllOwnedObjects->iNative = 0;
	uFnGetAllOwnedObjects->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetAllOwnedObjects, &GetAllOwnedObjects_Params, nullptr);
	uFnGetAllOwnedObjects->FunctionFlags |= 0x400;
	uFnGetAllOwnedObjects->iNative = 31357;

	return GetAllOwnedObjects_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ResolveProxy
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31471])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FName&            RealInstanceName               (CPF_Parm)
// class UGFxObject*              RealGFxObject                  (CPF_Parm)

bool UGFxMoviePlayer::ResolveProxy(const struct FName& RealInstanceName, class UGFxObject* RealGFxObject)
{
	static UFunction* uFnResolveProxy = nullptr;

	if (!uFnResolveProxy)
	{
		uFnResolveProxy = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ResolveProxy");
	}

	UGFxMoviePlayer_execResolveProxy_Params ResolveProxy_Params;
	memset(&ResolveProxy_Params, 0, sizeof(ResolveProxy_Params));
	memcpy_s(&ResolveProxy_Params.RealInstanceName, sizeof(ResolveProxy_Params.RealInstanceName), &RealInstanceName, sizeof(RealInstanceName));
	memcpy_s(&ResolveProxy_Params.RealGFxObject, sizeof(ResolveProxy_Params.RealGFxObject), &RealGFxObject, sizeof(RealGFxObject));

	uFnResolveProxy->iNative = 0;
	uFnResolveProxy->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResolveProxy, &ResolveProxy_Params, nullptr);
	uFnResolveProxy->FunctionFlags |= 0x400;
	uFnResolveProxy->iNative = 31471;

	return ResolveProxy_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetAllProxyObjects
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31358])
// Parameter Info:
// class TArray<class UGFxObject*> ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class TArray<class UGFxObject*> UGFxMoviePlayer::GetAllProxyObjects()
{
	static UFunction* uFnGetAllProxyObjects = nullptr;

	if (!uFnGetAllProxyObjects)
	{
		uFnGetAllProxyObjects = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetAllProxyObjects");
	}

	UGFxMoviePlayer_execGetAllProxyObjects_Params GetAllProxyObjects_Params;
	memset(&GetAllProxyObjects_Params, 0, sizeof(GetAllProxyObjects_Params));

	uFnGetAllProxyObjects->iNative = 0;
	uFnGetAllProxyObjects->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetAllProxyObjects, &GetAllProxyObjects_Params, nullptr);
	uFnGetAllProxyObjects->FunctionFlags |= 0x400;
	uFnGetAllProxyObjects->iNative = 31358;

	return GetAllProxyObjects_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.ClearAllProxyObjects
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31328])
// Parameter Info:

void UGFxMoviePlayer::ClearAllProxyObjects()
{
	static UFunction* uFnClearAllProxyObjects = nullptr;

	if (!uFnClearAllProxyObjects)
	{
		uFnClearAllProxyObjects = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearAllProxyObjects");
	}

	UGFxMoviePlayer_execClearAllProxyObjects_Params ClearAllProxyObjects_Params;
	memset(&ClearAllProxyObjects_Params, 0, sizeof(ClearAllProxyObjects_Params));

	uFnClearAllProxyObjects->iNative = 0;
	uFnClearAllProxyObjects->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearAllProxyObjects, &ClearAllProxyObjects_Params, nullptr);
	uFnClearAllProxyObjects->FunctionFlags |= 0x400;
	uFnClearAllProxyObjects->iNative = 31328;
};

// Function GFxUI.GFxMoviePlayer.UnregisterProxyObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31538])
// Parameter Info:
// const struct FName&            ProxyObjectName                (CPF_Parm)

void UGFxMoviePlayer::UnregisterProxyObject(const struct FName& ProxyObjectName)
{
	static UFunction* uFnUnregisterProxyObject = nullptr;

	if (!uFnUnregisterProxyObject)
	{
		uFnUnregisterProxyObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.UnregisterProxyObject");
	}

	UGFxMoviePlayer_execUnregisterProxyObject_Params UnregisterProxyObject_Params;
	memset(&UnregisterProxyObject_Params, 0, sizeof(UnregisterProxyObject_Params));
	memcpy_s(&UnregisterProxyObject_Params.ProxyObjectName, sizeof(UnregisterProxyObject_Params.ProxyObjectName), &ProxyObjectName, sizeof(ProxyObjectName));

	uFnUnregisterProxyObject->iNative = 0;
	uFnUnregisterProxyObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterProxyObject, &UnregisterProxyObject_Params, nullptr);
	uFnUnregisterProxyObject->FunctionFlags |= 0x400;
	uFnUnregisterProxyObject->iNative = 31538;
};

// Function GFxUI.GFxMoviePlayer.RegisterProxyObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31464])
// Parameter Info:
// const struct FName&            ProxyObjectName                (CPF_Parm)
// class UGFxObject*              ProxyObject                    (CPF_Parm)

void UGFxMoviePlayer::RegisterProxyObject(const struct FName& ProxyObjectName, class UGFxObject* ProxyObject)
{
	static UFunction* uFnRegisterProxyObject = nullptr;

	if (!uFnRegisterProxyObject)
	{
		uFnRegisterProxyObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.RegisterProxyObject");
	}

	UGFxMoviePlayer_execRegisterProxyObject_Params RegisterProxyObject_Params;
	memset(&RegisterProxyObject_Params, 0, sizeof(RegisterProxyObject_Params));
	memcpy_s(&RegisterProxyObject_Params.ProxyObjectName, sizeof(RegisterProxyObject_Params.ProxyObjectName), &ProxyObjectName, sizeof(ProxyObjectName));
	memcpy_s(&RegisterProxyObject_Params.ProxyObject, sizeof(RegisterProxyObject_Params.ProxyObject), &ProxyObject, sizeof(ProxyObject));

	uFnRegisterProxyObject->iNative = 0;
	uFnRegisterProxyObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterProxyObject, &RegisterProxyObject_Params, nullptr);
	uFnRegisterProxyObject->FunctionFlags |= 0x400;
	uFnRegisterProxyObject->iNative = 31464;
};

// Function GFxUI.GFxMoviePlayer.extObjFunc
// [0x12020003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              Obj                            (CPF_Parm)
// const class FString&           func                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::extObjFunc(class UGFxObject* Obj, const class FString& func)
{
	static UFunction* uFnextObjFunc = nullptr;

	if (!uFnextObjFunc)
	{
		uFnextObjFunc = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.extObjFunc");
	}

	UGFxMoviePlayer_execextObjFunc_Params extObjFunc_Params;
	memset(&extObjFunc_Params, 0, sizeof(extObjFunc_Params));
	memcpy_s(&extObjFunc_Params.Obj, sizeof(extObjFunc_Params.Obj), &Obj, sizeof(Obj));
	memcpy_s(&extObjFunc_Params.func, sizeof(extObjFunc_Params.func), &func, sizeof(func));

	this->ProcessEvent(uFnextObjFunc, &extObjFunc_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.extUncacheClip
// [0x12020002] (FUNC_Defined | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           ClassName                      (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              Clip                           (CPF_Parm)

void UGFxMoviePlayer::extUncacheClip(const class FString& ClassName, class UGFxObject* Clip)
{
	static UFunction* uFnextUncacheClip = nullptr;

	if (!uFnextUncacheClip)
	{
		uFnextUncacheClip = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.extUncacheClip");
	}

	UGFxMoviePlayer_execextUncacheClip_Params extUncacheClip_Params;
	memset(&extUncacheClip_Params, 0, sizeof(extUncacheClip_Params));
	memcpy_s(&extUncacheClip_Params.ClassName, sizeof(extUncacheClip_Params.ClassName), &ClassName, sizeof(ClassName));
	memcpy_s(&extUncacheClip_Params.Clip, sizeof(extUncacheClip_Params.Clip), &Clip, sizeof(Clip));

	this->ProcessEvent(uFnextUncacheClip, &extUncacheClip_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.extCacheClip
// [0x12020002] (FUNC_Defined | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           ClassName                      (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              Clip                           (CPF_Parm)

void UGFxMoviePlayer::extCacheClip(const class FString& ClassName, class UGFxObject* Clip)
{
	static UFunction* uFnextCacheClip = nullptr;

	if (!uFnextCacheClip)
	{
		uFnextCacheClip = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.extCacheClip");
	}

	UGFxMoviePlayer_execextCacheClip_Params extCacheClip_Params;
	memset(&extCacheClip_Params, 0, sizeof(extCacheClip_Params));
	memcpy_s(&extCacheClip_Params.ClassName, sizeof(extCacheClip_Params.ClassName), &ClassName, sizeof(ClassName));
	memcpy_s(&extCacheClip_Params.Clip, sizeof(extCacheClip_Params.Clip), &Clip, sizeof(Clip));

	this->ProcessEvent(uFnextCacheClip, &extCacheClip_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.GetRoot
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31381])
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UGFxMoviePlayer::GetRoot()
{
	static UFunction* uFnGetRoot = nullptr;

	if (!uFnGetRoot)
	{
		uFnGetRoot = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetRoot");
	}

	UGFxMoviePlayer_execGetRoot_Params GetRoot_Params;
	memset(&GetRoot_Params, 0, sizeof(GetRoot_Params));

	uFnGetRoot->iNative = 0;
	uFnGetRoot->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetRoot, &GetRoot_Params, nullptr);
	uFnGetRoot->FunctionFlags |= 0x400;
	uFnGetRoot->iNative = 31381;

	return GetRoot_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetUCClassForASClass
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31382])
// Parameter Info:
// class UClass*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FName&            ClassName                      (CPF_Parm)

class UClass* UGFxMoviePlayer::GetUCClassForASClass(const struct FName& ClassName)
{
	static UFunction* uFnGetUCClassForASClass = nullptr;

	if (!uFnGetUCClassForASClass)
	{
		uFnGetUCClassForASClass = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetUCClassForASClass");
	}

	UGFxMoviePlayer_execGetUCClassForASClass_Params GetUCClassForASClass_Params;
	memset(&GetUCClassForASClass_Params, 0, sizeof(GetUCClassForASClass_Params));
	memcpy_s(&GetUCClassForASClass_Params.ClassName, sizeof(GetUCClassForASClass_Params.ClassName), &ClassName, sizeof(ClassName));

	uFnGetUCClassForASClass->iNative = 0;
	uFnGetUCClassForASClass->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetUCClassForASClass, &GetUCClassForASClass_Params, nullptr);
	uFnGetUCClassForASClass->FunctionFlags |= 0x400;
	uFnGetUCClassForASClass->iNative = 31382;

	return GetUCClassForASClass_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.UncacheGFxObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31535])
// Parameter Info:
// class UGFxObject*              anObject                       (CPF_Parm)

void UGFxMoviePlayer::UncacheGFxObject(class UGFxObject* anObject)
{
	static UFunction* uFnUncacheGFxObject = nullptr;

	if (!uFnUncacheGFxObject)
	{
		uFnUncacheGFxObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.UncacheGFxObject");
	}

	UGFxMoviePlayer_execUncacheGFxObject_Params UncacheGFxObject_Params;
	memset(&UncacheGFxObject_Params, 0, sizeof(UncacheGFxObject_Params));
	memcpy_s(&UncacheGFxObject_Params.anObject, sizeof(UncacheGFxObject_Params.anObject), &anObject, sizeof(anObject));

	uFnUncacheGFxObject->iNative = 0;
	uFnUncacheGFxObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUncacheGFxObject, &UncacheGFxObject_Params, nullptr);
	uFnUncacheGFxObject->FunctionFlags |= 0x400;
	uFnUncacheGFxObject->iNative = 31535;
};

// Function GFxUI.GFxMoviePlayer.CacheGFxObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31325])
// Parameter Info:
// class UGFxObject*              anObject                       (CPF_Parm)

void UGFxMoviePlayer::CacheGFxObject(class UGFxObject* anObject)
{
	static UFunction* uFnCacheGFxObject = nullptr;

	if (!uFnCacheGFxObject)
	{
		uFnCacheGFxObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.CacheGFxObject");
	}

	UGFxMoviePlayer_execCacheGFxObject_Params CacheGFxObject_Params;
	memset(&CacheGFxObject_Params, 0, sizeof(CacheGFxObject_Params));
	memcpy_s(&CacheGFxObject_Params.anObject, sizeof(CacheGFxObject_Params.anObject), &anObject, sizeof(anObject));

	uFnCacheGFxObject->iNative = 0;
	uFnCacheGFxObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCacheGFxObject, &CacheGFxObject_Params, nullptr);
	uFnCacheGFxObject->FunctionFlags |= 0x400;
	uFnCacheGFxObject->iNative = 31325;
};

// Function GFxUI.GFxMoviePlayer.UnregisterGFxObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31537])
// Parameter Info:
// class UGFxObject*              anObject                       (CPF_Parm)

void UGFxMoviePlayer::UnregisterGFxObject(class UGFxObject* anObject)
{
	static UFunction* uFnUnregisterGFxObject = nullptr;

	if (!uFnUnregisterGFxObject)
	{
		uFnUnregisterGFxObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.UnregisterGFxObject");
	}

	UGFxMoviePlayer_execUnregisterGFxObject_Params UnregisterGFxObject_Params;
	memset(&UnregisterGFxObject_Params, 0, sizeof(UnregisterGFxObject_Params));
	memcpy_s(&UnregisterGFxObject_Params.anObject, sizeof(UnregisterGFxObject_Params.anObject), &anObject, sizeof(anObject));

	uFnUnregisterGFxObject->iNative = 0;
	uFnUnregisterGFxObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnregisterGFxObject, &UnregisterGFxObject_Params, nullptr);
	uFnUnregisterGFxObject->FunctionFlags |= 0x400;
	uFnUnregisterGFxObject->iNative = 31537;
};

// Function GFxUI.GFxMoviePlayer.RegisterGFxObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31463])
// Parameter Info:
// class UGFxObject*              anObject                       (CPF_Parm)

void UGFxMoviePlayer::RegisterGFxObject(class UGFxObject* anObject)
{
	static UFunction* uFnRegisterGFxObject = nullptr;

	if (!uFnRegisterGFxObject)
	{
		uFnRegisterGFxObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.RegisterGFxObject");
	}

	UGFxMoviePlayer_execRegisterGFxObject_Params RegisterGFxObject_Params;
	memset(&RegisterGFxObject_Params, 0, sizeof(RegisterGFxObject_Params));
	memcpy_s(&RegisterGFxObject_Params.anObject, sizeof(RegisterGFxObject_Params.anObject), &anObject, sizeof(anObject));

	uFnRegisterGFxObject->iNative = 0;
	uFnRegisterGFxObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRegisterGFxObject, &RegisterGFxObject_Params, nullptr);
	uFnRegisterGFxObject->FunctionFlags |= 0x400;
	uFnRegisterGFxObject->iNative = 31463;
};

// Function GFxUI.GFxMoviePlayer.HookSaveScreenshot
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31405])
// Parameter Info:

void UGFxMoviePlayer::HookSaveScreenshot()
{
	static UFunction* uFnHookSaveScreenshot = nullptr;

	if (!uFnHookSaveScreenshot)
	{
		uFnHookSaveScreenshot = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.HookSaveScreenshot");
	}

	UGFxMoviePlayer_execHookSaveScreenshot_Params HookSaveScreenshot_Params;
	memset(&HookSaveScreenshot_Params, 0, sizeof(HookSaveScreenshot_Params));

	uFnHookSaveScreenshot->iNative = 0;
	uFnHookSaveScreenshot->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHookSaveScreenshot, &HookSaveScreenshot_Params, nullptr);
	uFnHookSaveScreenshot->FunctionFlags |= 0x400;
	uFnHookSaveScreenshot->iNative = 31405;
};

// Function GFxUI.GFxMoviePlayer.UpdateRenderTexture
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31539])
// Parameter Info:
// class UTextureRenderTarget2D*  NewRenderTexture               (CPF_Parm)

void UGFxMoviePlayer::UpdateRenderTexture(class UTextureRenderTarget2D* NewRenderTexture)
{
	static UFunction* uFnUpdateRenderTexture = nullptr;

	if (!uFnUpdateRenderTexture)
	{
		uFnUpdateRenderTexture = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.UpdateRenderTexture");
	}

	UGFxMoviePlayer_execUpdateRenderTexture_Params UpdateRenderTexture_Params;
	memset(&UpdateRenderTexture_Params, 0, sizeof(UpdateRenderTexture_Params));
	memcpy_s(&UpdateRenderTexture_Params.NewRenderTexture, sizeof(UpdateRenderTexture_Params.NewRenderTexture), &NewRenderTexture, sizeof(NewRenderTexture));

	uFnUpdateRenderTexture->iNative = 0;
	uFnUpdateRenderTexture->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateRenderTexture, &UpdateRenderTexture_Params, nullptr);
	uFnUpdateRenderTexture->FunctionFlags |= 0x400;
	uFnUpdateRenderTexture->iNative = 31539;
};

// Function GFxUI.GFxMoviePlayer.OnInputAxis
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// const struct FName&            ukey                           (CPF_Parm)
// float                          Delta                          (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

bool UGFxMoviePlayer::OnInputAxis(const struct FPlatformUserId& UserId, const struct FName& ukey, float Delta, float DeltaTime)
{
	static UFunction* uFnOnInputAxis = nullptr;

	if (!uFnOnInputAxis)
	{
		uFnOnInputAxis = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnInputAxis");
	}

	UGFxMoviePlayer_execOnInputAxis_Params OnInputAxis_Params;
	memset(&OnInputAxis_Params, 0, sizeof(OnInputAxis_Params));
	memcpy_s(&OnInputAxis_Params.UserId, sizeof(OnInputAxis_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnInputAxis_Params.ukey, sizeof(OnInputAxis_Params.ukey), &ukey, sizeof(ukey));
	memcpy_s(&OnInputAxis_Params.Delta, sizeof(OnInputAxis_Params.Delta), &Delta, sizeof(Delta));
	memcpy_s(&OnInputAxis_Params.DeltaTime, sizeof(OnInputAxis_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnInputAxis, &OnInputAxis_Params, nullptr);

	return OnInputAxis_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.OnInputKey
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// const struct FName&            ukey                           (CPF_Parm)
// EInputEvent                    uevent                         (CPF_Parm)

bool UGFxMoviePlayer::OnInputKey(const struct FPlatformUserId& UserId, const struct FName& ukey, EInputEvent uevent)
{
	static UFunction* uFnOnInputKey = nullptr;

	if (!uFnOnInputKey)
	{
		uFnOnInputKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnInputKey");
	}

	UGFxMoviePlayer_execOnInputKey_Params OnInputKey_Params;
	memset(&OnInputKey_Params, 0, sizeof(OnInputKey_Params));
	memcpy_s(&OnInputKey_Params.UserId, sizeof(OnInputKey_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnInputKey_Params.ukey, sizeof(OnInputKey_Params.ukey), &ukey, sizeof(ukey));
	memcpy_s(&OnInputKey_Params.uevent, sizeof(OnInputKey_Params.uevent), &uevent, sizeof(uevent));

	this->ProcessEvent(uFnOnInputKey, &OnInputKey_Params, nullptr);

	return OnInputKey_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.InputKey
// [0x00020402] (FUNC_Defined | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[2216])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// const struct FName&            ukey                           (CPF_Parm)
// EInputEvent                    uevent                         (CPF_Parm)

bool UGFxMoviePlayer::InputKey(const struct FPlatformUserId& UserId, const struct FName& ukey, EInputEvent uevent)
{
	static UFunction* uFnInputKey = nullptr;

	if (!uFnInputKey)
	{
		uFnInputKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.InputKey");
	}

	UGFxMoviePlayer_execInputKey_Params InputKey_Params;
	memset(&InputKey_Params, 0, sizeof(InputKey_Params));
	memcpy_s(&InputKey_Params.UserId, sizeof(InputKey_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&InputKey_Params.ukey, sizeof(InputKey_Params.ukey), &ukey, sizeof(ukey));
	memcpy_s(&InputKey_Params.uevent, sizeof(InputKey_Params.uevent), &uevent, sizeof(uevent));

	uFnInputKey->iNative = 0;
	uFnInputKey->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInputKey, &InputKey_Params, nullptr);
	uFnInputKey->FunctionFlags |= 0x400;
	uFnInputKey->iNative = 2216;

	return InputKey_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31540])
// Parameter Info:

void UGFxMoviePlayer::UpdateSplitscreenLayout()
{
	static UFunction* uFnUpdateSplitscreenLayout = nullptr;

	if (!uFnUpdateSplitscreenLayout)
	{
		uFnUpdateSplitscreenLayout = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout");
	}

	UGFxMoviePlayer_execUpdateSplitscreenLayout_Params UpdateSplitscreenLayout_Params;
	memset(&UpdateSplitscreenLayout_Params, 0, sizeof(UpdateSplitscreenLayout_Params));

	uFnUpdateSplitscreenLayout->iNative = 0;
	uFnUpdateSplitscreenLayout->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUpdateSplitscreenLayout, &UpdateSplitscreenLayout_Params, nullptr);
	uFnUpdateSplitscreenLayout->FunctionFlags |= 0x400;
	uFnUpdateSplitscreenLayout->iNative = 31540;
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect(bool bRemoveEffect)
{
	static UFunction* uFnApplyPriorityVisibilityEffect = nullptr;

	if (!uFnApplyPriorityVisibilityEffect)
	{
		uFnApplyPriorityVisibilityEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect");
	}

	UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Params ApplyPriorityVisibilityEffect_Params;
	memset(&ApplyPriorityVisibilityEffect_Params, 0, sizeof(ApplyPriorityVisibilityEffect_Params));
	ApplyPriorityVisibilityEffect_Params.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent(uFnApplyPriorityVisibilityEffect, &ApplyPriorityVisibilityEffect_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityBlurEffect(bool bRemoveEffect)
{
	static UFunction* uFnApplyPriorityBlurEffect = nullptr;

	if (!uFnApplyPriorityBlurEffect)
	{
		uFnApplyPriorityBlurEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect");
	}

	UGFxMoviePlayer_execApplyPriorityBlurEffect_Params ApplyPriorityBlurEffect_Params;
	memset(&ApplyPriorityBlurEffect_Params, 0, sizeof(ApplyPriorityBlurEffect_Params));
	ApplyPriorityBlurEffect_Params.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent(uFnApplyPriorityBlurEffect, &ApplyPriorityBlurEffect_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           bRequestedBlurState            (CPF_Parm)
// bool                           bRequestedHiddenState          (CPF_Parm)

void UGFxMoviePlayer::eventApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState)
{
	static UFunction* uFnApplyPriorityEffect = nullptr;

	if (!uFnApplyPriorityEffect)
	{
		uFnApplyPriorityEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect");
	}

	UGFxMoviePlayer_eventApplyPriorityEffect_Params ApplyPriorityEffect_Params;
	memset(&ApplyPriorityEffect_Params, 0, sizeof(ApplyPriorityEffect_Params));
	ApplyPriorityEffect_Params.bRequestedBlurState = bRequestedBlurState;
	ApplyPriorityEffect_Params.bRequestedHiddenState = bRequestedHiddenState;

	this->ProcessEvent(uFnApplyPriorityEffect, &ApplyPriorityEffect_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::eventOnFocusLost(int32_t LocalPlayerIndex)
{
	static UFunction* uFnOnFocusLost = nullptr;

	if (!uFnOnFocusLost)
	{
		uFnOnFocusLost = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnFocusLost");
	}

	UGFxMoviePlayer_eventOnFocusLost_Params OnFocusLost_Params;
	memset(&OnFocusLost_Params, 0, sizeof(OnFocusLost_Params));
	memcpy_s(&OnFocusLost_Params.LocalPlayerIndex, sizeof(OnFocusLost_Params.LocalPlayerIndex), &LocalPlayerIndex, sizeof(LocalPlayerIndex));

	this->ProcessEvent(uFnOnFocusLost, &OnFocusLost_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::eventOnFocusGained(int32_t LocalPlayerIndex)
{
	static UFunction* uFnOnFocusGained = nullptr;

	if (!uFnOnFocusGained)
	{
		uFnOnFocusGained = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnFocusGained");
	}

	UGFxMoviePlayer_eventOnFocusGained_Params OnFocusGained_Params;
	memset(&OnFocusGained_Params, 0, sizeof(OnFocusGained_Params));
	memcpy_s(&OnFocusGained_Params.LocalPlayerIndex, sizeof(OnFocusGained_Params.LocalPlayerIndex), &LocalPlayerIndex, sizeof(LocalPlayerIndex));

	this->ProcessEvent(uFnOnFocusGained, &OnFocusGained_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetLP
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31497])
// Parameter Info:
// class ULocalPlayer*            LocPlay                        (CPF_Parm)

void UGFxMoviePlayer::SetLP(class ULocalPlayer* LocPlay)
{
	static UFunction* uFnSetLP = nullptr;

	if (!uFnSetLP)
	{
		uFnSetLP = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetLP");
	}

	UGFxMoviePlayer_execSetLP_Params SetLP_Params;
	memset(&SetLP_Params, 0, sizeof(SetLP_Params));
	memcpy_s(&SetLP_Params.LocPlay, sizeof(SetLP_Params.LocPlay), &LocPlay, sizeof(LocPlay));

	uFnSetLP->iNative = 0;
	uFnSetLP->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetLP, &SetLP_Params, nullptr);
	uFnSetLP->FunctionFlags |= 0x400;
	uFnSetLP->iNative = 31497;
};

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31379])
// Parameter Info:
// class APlayerController*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class APlayerController* UGFxMoviePlayer::GetPC()
{
	static UFunction* uFnGetPC = nullptr;

	if (!uFnGetPC)
	{
		uFnGetPC = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetPC");
	}

	UGFxMoviePlayer_execGetPC_Params GetPC_Params;
	memset(&GetPC_Params, 0, sizeof(GetPC_Params));

	uFnGetPC->iNative = 0;
	uFnGetPC->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetPC, &GetPC_Params, nullptr);
	uFnGetPC->FunctionFlags |= 0x400;
	uFnGetPC->iNative = 31379;

	return GetPC_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31376])
// Parameter Info:
// class ULocalPlayer*            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class ULocalPlayer* UGFxMoviePlayer::GetLP()
{
	static UFunction* uFnGetLP = nullptr;

	if (!uFnGetLP)
	{
		uFnGetLP = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetLP");
	}

	UGFxMoviePlayer_execGetLP_Params GetLP_Params;
	memset(&GetLP_Params, 0, sizeof(GetLP_Params));

	uFnGetLP->iNative = 0;
	uFnGetLP->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLP, &GetLP_Params, nullptr);
	uFnGetLP->FunctionFlags |= 0x400;
	uFnGetLP->iNative = 31376;

	return GetLP_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.Init
// [0x12024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class ULocalPlayer*            LocPlay                        (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Init");
	}

	UGFxMoviePlayer_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));
	memcpy_s(&Init_Params.LocPlay, sizeof(Init_Params.LocPlay), &LocPlay, sizeof(LocPlay));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31510])
// Parameter Info:
// class UGFxObject*              WidgetToBind                   (CPF_Parm)
// const struct FName&            Path                           (CPF_Parm)

void UGFxMoviePlayer::SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path)
{
	static UFunction* uFnSetWidgetPathBinding = nullptr;

	if (!uFnSetWidgetPathBinding)
	{
		uFnSetWidgetPathBinding = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding");
	}

	UGFxMoviePlayer_execSetWidgetPathBinding_Params SetWidgetPathBinding_Params;
	memset(&SetWidgetPathBinding_Params, 0, sizeof(SetWidgetPathBinding_Params));
	memcpy_s(&SetWidgetPathBinding_Params.WidgetToBind, sizeof(SetWidgetPathBinding_Params.WidgetToBind), &WidgetToBind, sizeof(WidgetToBind));
	memcpy_s(&SetWidgetPathBinding_Params.Path, sizeof(SetWidgetPathBinding_Params.Path), &Path, sizeof(Path));

	uFnSetWidgetPathBinding->iNative = 0;
	uFnSetWidgetPathBinding->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetWidgetPathBinding, &SetWidgetPathBinding_Params, nullptr);
	uFnSetWidgetPathBinding->FunctionFlags |= 0x400;
	uFnSetWidgetPathBinding->iNative = 31510;
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventPostWidgetInit()
{
	static UFunction* uFnPostWidgetInit = nullptr;

	if (!uFnPostWidgetInit)
	{
		uFnPostWidgetInit = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PostWidgetInit");
	}

	UGFxMoviePlayer_eventPostWidgetInit_Params PostWidgetInit_Params;
	memset(&PostWidgetInit_Params, 0, sizeof(PostWidgetInit_Params));

	this->ProcessEvent(uFnPostWidgetInit, &PostWidgetInit_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FName&            WidgetName                     (CPF_Parm)
// const struct FName&            WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxMoviePlayer::eventWidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetUnloaded = nullptr;

	if (!uFnWidgetUnloaded)
	{
		uFnWidgetUnloaded = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.WidgetUnloaded");
	}

	UGFxMoviePlayer_eventWidgetUnloaded_Params WidgetUnloaded_Params;
	memset(&WidgetUnloaded_Params, 0, sizeof(WidgetUnloaded_Params));
	memcpy_s(&WidgetUnloaded_Params.WidgetName, sizeof(WidgetUnloaded_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetUnloaded_Params.WidgetPath, sizeof(WidgetUnloaded_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetUnloaded_Params.Widget, sizeof(WidgetUnloaded_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetUnloaded, &WidgetUnloaded_Params, nullptr);

	return WidgetUnloaded_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FName&            WidgetName                     (CPF_Parm)
// const struct FName&            WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxMoviePlayer::eventWidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.WidgetInitialized");
	}

	UGFxMoviePlayer_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31359])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGFxMoviePlayer::GetAVMVersion()
{
	static UFunction* uFnGetAVMVersion = nullptr;

	if (!uFnGetAVMVersion)
	{
		uFnGetAVMVersion = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetAVMVersion");
	}

	UGFxMoviePlayer_execGetAVMVersion_Params GetAVMVersion_Params;
	memset(&GetAVMVersion_Params, 0, sizeof(GetAVMVersion_Params));

	uFnGetAVMVersion->iNative = 0;
	uFnGetAVMVersion->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetAVMVersion, &GetAVMVersion_Params, nullptr);
	uFnGetAVMVersion->FunctionFlags |= 0x400;
	uFnGetAVMVersion->iNative = 31359;

	return GetAVMVersion_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FilterAxisInput
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// const struct FName&            Key                            (CPF_Parm)
// float                          Delta                          (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

bool UGFxMoviePlayer::eventFilterAxisInput(const struct FPlatformUserId& UserId, const struct FName& Key, float Delta, float DeltaTime)
{
	static UFunction* uFnFilterAxisInput = nullptr;

	if (!uFnFilterAxisInput)
	{
		uFnFilterAxisInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FilterAxisInput");
	}

	UGFxMoviePlayer_eventFilterAxisInput_Params FilterAxisInput_Params;
	memset(&FilterAxisInput_Params, 0, sizeof(FilterAxisInput_Params));
	memcpy_s(&FilterAxisInput_Params.UserId, sizeof(FilterAxisInput_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&FilterAxisInput_Params.Key, sizeof(FilterAxisInput_Params.Key), &Key, sizeof(Key));
	memcpy_s(&FilterAxisInput_Params.Delta, sizeof(FilterAxisInput_Params.Delta), &Delta, sizeof(Delta));
	memcpy_s(&FilterAxisInput_Params.DeltaTime, sizeof(FilterAxisInput_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnFilterAxisInput, &FilterAxisInput_Params, nullptr);

	return FilterAxisInput_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// const struct FName&            ButtonName                     (CPF_Parm)
// EInputEvent                    InputEvent                     (CPF_Parm)

bool UGFxMoviePlayer::eventFilterButtonInput(const struct FPlatformUserId& UserId, const struct FName& ButtonName, EInputEvent InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FilterButtonInput");
	}

	UGFxMoviePlayer_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	memcpy_s(&FilterButtonInput_Params.UserId, sizeof(FilterButtonInput_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	memcpy_s(&FilterButtonInput_Params.InputEvent, sizeof(FilterButtonInput_Params.InputEvent), &InputEvent, sizeof(InputEvent));

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[23198])
// Parameter Info:
// bool                           capturekeysonly                (CPF_Parm)

void UGFxMoviePlayer::FlushPlayerInput(bool capturekeysonly)
{
	static UFunction* uFnFlushPlayerInput = nullptr;

	if (!uFnFlushPlayerInput)
	{
		uFnFlushPlayerInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FlushPlayerInput");
	}

	UGFxMoviePlayer_execFlushPlayerInput_Params FlushPlayerInput_Params;
	memset(&FlushPlayerInput_Params, 0, sizeof(FlushPlayerInput_Params));
	FlushPlayerInput_Params.capturekeysonly = capturekeysonly;

	uFnFlushPlayerInput->iNative = 0;
	uFnFlushPlayerInput->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFlushPlayerInput, &FlushPlayerInput_Params, nullptr);
	uFnFlushPlayerInput->FunctionFlags |= 0x400;
	uFnFlushPlayerInput->iNative = 23198;
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31330])
// Parameter Info:

void UGFxMoviePlayer::ClearFocusIgnoreKeys()
{
	static UFunction* uFnClearFocusIgnoreKeys = nullptr;

	if (!uFnClearFocusIgnoreKeys)
	{
		uFnClearFocusIgnoreKeys = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys");
	}

	UGFxMoviePlayer_execClearFocusIgnoreKeys_Params ClearFocusIgnoreKeys_Params;
	memset(&ClearFocusIgnoreKeys_Params, 0, sizeof(ClearFocusIgnoreKeys_Params));

	uFnClearFocusIgnoreKeys->iNative = 0;
	uFnClearFocusIgnoreKeys->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearFocusIgnoreKeys, &ClearFocusIgnoreKeys_Params, nullptr);
	uFnClearFocusIgnoreKeys->FunctionFlags |= 0x400;
	uFnClearFocusIgnoreKeys->iNative = 31330;
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31247])
// Parameter Info:
// const struct FName&            Key                            (CPF_Parm)

void UGFxMoviePlayer::AddFocusIgnoreKey(const struct FName& Key)
{
	static UFunction* uFnAddFocusIgnoreKey = nullptr;

	if (!uFnAddFocusIgnoreKey)
	{
		uFnAddFocusIgnoreKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey");
	}

	UGFxMoviePlayer_execAddFocusIgnoreKey_Params AddFocusIgnoreKey_Params;
	memset(&AddFocusIgnoreKey_Params, 0, sizeof(AddFocusIgnoreKey_Params));
	memcpy_s(&AddFocusIgnoreKey_Params.Key, sizeof(AddFocusIgnoreKey_Params.Key), &Key, sizeof(Key));

	uFnAddFocusIgnoreKey->iNative = 0;
	uFnAddFocusIgnoreKey->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddFocusIgnoreKey, &AddFocusIgnoreKey_Params, nullptr);
	uFnAddFocusIgnoreKey->FunctionFlags |= 0x400;
	uFnAddFocusIgnoreKey->iNative = 31247;
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31329])
// Parameter Info:

void UGFxMoviePlayer::ClearCaptureKeys()
{
	static UFunction* uFnClearCaptureKeys = nullptr;

	if (!uFnClearCaptureKeys)
	{
		uFnClearCaptureKeys = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearCaptureKeys");
	}

	UGFxMoviePlayer_execClearCaptureKeys_Params ClearCaptureKeys_Params;
	memset(&ClearCaptureKeys_Params, 0, sizeof(ClearCaptureKeys_Params));

	uFnClearCaptureKeys->iNative = 0;
	uFnClearCaptureKeys->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearCaptureKeys, &ClearCaptureKeys_Params, nullptr);
	uFnClearCaptureKeys->FunctionFlags |= 0x400;
	uFnClearCaptureKeys->iNative = 31329;
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31245])
// Parameter Info:
// const struct FName&            Key                            (CPF_Parm)

void UGFxMoviePlayer::AddCaptureKey(const struct FName& Key)
{
	static UFunction* uFnAddCaptureKey = nullptr;

	if (!uFnAddCaptureKey)
	{
		uFnAddCaptureKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.AddCaptureKey");
	}

	UGFxMoviePlayer_execAddCaptureKey_Params AddCaptureKey_Params;
	memset(&AddCaptureKey_Params, 0, sizeof(AddCaptureKey_Params));
	memcpy_s(&AddCaptureKey_Params.Key, sizeof(AddCaptureKey_Params.Key), &Key, sizeof(Key));

	uFnAddCaptureKey->iNative = 0;
	uFnAddCaptureKey->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddCaptureKey, &AddCaptureKey_Params, nullptr);
	uFnAddCaptureKey->FunctionFlags |= 0x400;
	uFnAddCaptureKey->iNative = 31245;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31499])
// Parameter Info:
// bool                           bCanReceiveInput               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static UFunction* uFnSetMovieCanReceiveInput = nullptr;

	if (!uFnSetMovieCanReceiveInput)
	{
		uFnSetMovieCanReceiveInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput");
	}

	UGFxMoviePlayer_execSetMovieCanReceiveInput_Params SetMovieCanReceiveInput_Params;
	memset(&SetMovieCanReceiveInput_Params, 0, sizeof(SetMovieCanReceiveInput_Params));
	SetMovieCanReceiveInput_Params.bCanReceiveInput = bCanReceiveInput;

	uFnSetMovieCanReceiveInput->iNative = 0;
	uFnSetMovieCanReceiveInput->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetMovieCanReceiveInput, &SetMovieCanReceiveInput_Params, nullptr);
	uFnSetMovieCanReceiveInput->FunctionFlags |= 0x400;
	uFnSetMovieCanReceiveInput->iNative = 31499;
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31498])
// Parameter Info:
// bool                           bCanReceiveFocus               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static UFunction* uFnSetMovieCanReceiveFocus = nullptr;

	if (!uFnSetMovieCanReceiveFocus)
	{
		uFnSetMovieCanReceiveFocus = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus");
	}

	UGFxMoviePlayer_execSetMovieCanReceiveFocus_Params SetMovieCanReceiveFocus_Params;
	memset(&SetMovieCanReceiveFocus_Params, 0, sizeof(SetMovieCanReceiveFocus_Params));
	SetMovieCanReceiveFocus_Params.bCanReceiveFocus = bCanReceiveFocus;

	uFnSetMovieCanReceiveFocus->iNative = 0;
	uFnSetMovieCanReceiveFocus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetMovieCanReceiveFocus, &SetMovieCanReceiveFocus_Params, nullptr);
	uFnSetMovieCanReceiveFocus->FunctionFlags |= 0x400;
	uFnSetMovieCanReceiveFocus->iNative = 31498;
};

// Function GFxUI.GFxMoviePlayer.SetSceneDPG
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31504])
// Parameter Info:
// ESceneDepthPriorityGroup       NewDPG                         (CPF_Parm)

void UGFxMoviePlayer::SetSceneDPG(ESceneDepthPriorityGroup NewDPG)
{
	static UFunction* uFnSetSceneDPG = nullptr;

	if (!uFnSetSceneDPG)
	{
		uFnSetSceneDPG = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetSceneDPG");
	}

	UGFxMoviePlayer_execSetSceneDPG_Params SetSceneDPG_Params;
	memset(&SetSceneDPG_Params, 0, sizeof(SetSceneDPG_Params));
	memcpy_s(&SetSceneDPG_Params.NewDPG, sizeof(SetSceneDPG_Params.NewDPG), &NewDPG, sizeof(NewDPG));

	uFnSetSceneDPG->iNative = 0;
	uFnSetSceneDPG->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetSceneDPG, &SetSceneDPG_Params, nullptr);
	uFnSetSceneDPG->FunctionFlags |= 0x400;
	uFnSetSceneDPG->iNative = 31504;
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[31501])
// Parameter Info:
// struct FMatrix                 matPersp                       (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::SetPerspective3D(struct FMatrix& matPersp)
{
	static UFunction* uFnSetPerspective3D = nullptr;

	if (!uFnSetPerspective3D)
	{
		uFnSetPerspective3D = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPerspective3D");
	}

	UGFxMoviePlayer_execSetPerspective3D_Params SetPerspective3D_Params;
	memset(&SetPerspective3D_Params, 0, sizeof(SetPerspective3D_Params));
	memcpy_s(&SetPerspective3D_Params.matPersp, sizeof(SetPerspective3D_Params.matPersp), &matPersp, sizeof(matPersp));

	uFnSetPerspective3D->iNative = 0;
	uFnSetPerspective3D->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetPerspective3D, &SetPerspective3D_Params, nullptr);
	uFnSetPerspective3D->FunctionFlags |= 0x400;
	uFnSetPerspective3D->iNative = 31501;

	memcpy_s(&matPersp, sizeof(matPersp), &SetPerspective3D_Params.matPersp, sizeof(SetPerspective3D_Params.matPersp));
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[31506])
// Parameter Info:
// struct FMatrix                 matView                        (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::SetView3D(struct FMatrix& matView)
{
	static UFunction* uFnSetView3D = nullptr;

	if (!uFnSetView3D)
	{
		uFnSetView3D = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetView3D");
	}

	UGFxMoviePlayer_execSetView3D_Params SetView3D_Params;
	memset(&SetView3D_Params, 0, sizeof(SetView3D_Params));
	memcpy_s(&SetView3D_Params.matView, sizeof(SetView3D_Params.matView), &matView, sizeof(matView));

	uFnSetView3D->iNative = 0;
	uFnSetView3D->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetView3D, &SetView3D_Params, nullptr);
	uFnSetView3D->FunctionFlags |= 0x400;
	uFnSetView3D->iNative = 31506;

	memcpy_s(&matView, sizeof(matView), &SetView3D_Params.matView, sizeof(SetView3D_Params.matView));
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[31383])
// Parameter Info:
// float                          x0                             (CPF_Parm | CPF_OutParm)
// float                          y0                             (CPF_Parm | CPF_OutParm)
// float                          X1                             (CPF_Parm | CPF_OutParm)
// float                          Y1                             (CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::GetVisibleFrameRect(float& x0, float& y0, float& X1, float& Y1)
{
	static UFunction* uFnGetVisibleFrameRect = nullptr;

	if (!uFnGetVisibleFrameRect)
	{
		uFnGetVisibleFrameRect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect");
	}

	UGFxMoviePlayer_execGetVisibleFrameRect_Params GetVisibleFrameRect_Params;
	memset(&GetVisibleFrameRect_Params, 0, sizeof(GetVisibleFrameRect_Params));
	memcpy_s(&GetVisibleFrameRect_Params.x0, sizeof(GetVisibleFrameRect_Params.x0), &x0, sizeof(x0));
	memcpy_s(&GetVisibleFrameRect_Params.y0, sizeof(GetVisibleFrameRect_Params.y0), &y0, sizeof(y0));
	memcpy_s(&GetVisibleFrameRect_Params.X1, sizeof(GetVisibleFrameRect_Params.X1), &X1, sizeof(X1));
	memcpy_s(&GetVisibleFrameRect_Params.Y1, sizeof(GetVisibleFrameRect_Params.Y1), &Y1, sizeof(Y1));

	uFnGetVisibleFrameRect->iNative = 0;
	uFnGetVisibleFrameRect->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetVisibleFrameRect, &GetVisibleFrameRect_Params, nullptr);
	uFnGetVisibleFrameRect->FunctionFlags |= 0x400;
	uFnGetVisibleFrameRect->iNative = 31383;

	memcpy_s(&x0, sizeof(x0), &GetVisibleFrameRect_Params.x0, sizeof(GetVisibleFrameRect_Params.x0));
	memcpy_s(&y0, sizeof(y0), &GetVisibleFrameRect_Params.y0, sizeof(GetVisibleFrameRect_Params.y0));
	memcpy_s(&X1, sizeof(X1), &GetVisibleFrameRect_Params.X1, sizeof(GetVisibleFrameRect_Params.X1));
	memcpy_s(&Y1, sizeof(Y1), &GetVisibleFrameRect_Params.Y1, sizeof(GetVisibleFrameRect_Params.Y1));
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31478])
// Parameter Info:
// EGFxAlign                      A                              (CPF_Parm)

void UGFxMoviePlayer::SetAlignment(EGFxAlign A)
{
	static UFunction* uFnSetAlignment = nullptr;

	if (!uFnSetAlignment)
	{
		uFnSetAlignment = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetAlignment");
	}

	UGFxMoviePlayer_execSetAlignment_Params SetAlignment_Params;
	memset(&SetAlignment_Params, 0, sizeof(SetAlignment_Params));
	memcpy_s(&SetAlignment_Params.A, sizeof(SetAlignment_Params.A), &A, sizeof(A));

	uFnSetAlignment->iNative = 0;
	uFnSetAlignment->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetAlignment, &SetAlignment_Params, nullptr);
	uFnSetAlignment->FunctionFlags |= 0x400;
	uFnSetAlignment->iNative = 31478;
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31508])
// Parameter Info:
// EGFxScaleMode                  SM                             (CPF_Parm)

void UGFxMoviePlayer::SetViewScaleMode(EGFxScaleMode SM)
{
	static UFunction* uFnSetViewScaleMode = nullptr;

	if (!uFnSetViewScaleMode)
	{
		uFnSetViewScaleMode = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewScaleMode");
	}

	UGFxMoviePlayer_execSetViewScaleMode_Params SetViewScaleMode_Params;
	memset(&SetViewScaleMode_Params, 0, sizeof(SetViewScaleMode_Params));
	memcpy_s(&SetViewScaleMode_Params.SM, sizeof(SetViewScaleMode_Params.SM), &SM, sizeof(SM));

	uFnSetViewScaleMode->iNative = 0;
	uFnSetViewScaleMode->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetViewScaleMode, &SetViewScaleMode_Params, nullptr);
	uFnSetViewScaleMode->FunctionFlags |= 0x400;
	uFnSetViewScaleMode->iNative = 31508;
};

// Function GFxUI.GFxMoviePlayer.OnSetViewport
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventOnSetViewport()
{
	static UFunction* uFnOnSetViewport = nullptr;

	if (!uFnOnSetViewport)
	{
		uFnOnSetViewport = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnSetViewport");
	}

	UGFxMoviePlayer_eventOnSetViewport_Params OnSetViewport_Params;
	memset(&OnSetViewport_Params, 0, sizeof(OnSetViewport_Params));

	this->ProcessEvent(uFnOnSetViewport, &OnSetViewport_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31507])
// Parameter Info:
// int32_t                        X                              (CPF_Parm)
// int32_t                        Y                              (CPF_Parm)
// int32_t                        Width                          (CPF_Parm)
// int32_t                        Height                         (CPF_Parm)

void UGFxMoviePlayer::SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height)
{
	static UFunction* uFnSetViewport = nullptr;

	if (!uFnSetViewport)
	{
		uFnSetViewport = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewport");
	}

	UGFxMoviePlayer_execSetViewport_Params SetViewport_Params;
	memset(&SetViewport_Params, 0, sizeof(SetViewport_Params));
	memcpy_s(&SetViewport_Params.X, sizeof(SetViewport_Params.X), &X, sizeof(X));
	memcpy_s(&SetViewport_Params.Y, sizeof(SetViewport_Params.Y), &Y, sizeof(Y));
	memcpy_s(&SetViewport_Params.Width, sizeof(SetViewport_Params.Width), &Width, sizeof(Width));
	memcpy_s(&SetViewport_Params.Height, sizeof(SetViewport_Params.Height), &Height, sizeof(Height));

	uFnSetViewport->iNative = 0;
	uFnSetViewport->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetViewport, &SetViewport_Params, nullptr);
	uFnSetViewport->FunctionFlags |= 0x400;
	uFnSetViewport->iNative = 31507;
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31373])
// Parameter Info:
// class UGameViewportClient*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient()
{
	static UFunction* uFnGetGameViewportClient = nullptr;

	if (!uFnGetGameViewportClient)
	{
		uFnGetGameViewportClient = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetGameViewportClient");
	}

	UGFxMoviePlayer_execGetGameViewportClient_Params GetGameViewportClient_Params;
	memset(&GetGameViewportClient_Params, 0, sizeof(GetGameViewportClient_Params));

	uFnGetGameViewportClient->iNative = 0;
	uFnGetGameViewportClient->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetGameViewportClient, &GetGameViewportClient_Params, nullptr);
	uFnGetGameViewportClient->FunctionFlags |= 0x400;
	uFnGetGameViewportClient->iNative = 31373;

	return GetGameViewportClient_Params.ReturnValue;
};

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31502])
// Parameter Info:
// uint8_t                        NewPriority                    (CPF_Parm)

void UGFxMoviePlayer::SetPriority(uint8_t NewPriority)
{
	static UFunction* uFnSetPriority = nullptr;

	if (!uFnSetPriority)
	{
		uFnSetPriority = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPriority");
	}

	UGFxMoviePlayer_execSetPriority_Params SetPriority_Params;
	memset(&SetPriority_Params, 0, sizeof(SetPriority_Params));
	memcpy_s(&SetPriority_Params.NewPriority, sizeof(SetPriority_Params.NewPriority), &NewPriority, sizeof(NewPriority));

	uFnSetPriority->iNative = 0;
	uFnSetPriority->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetPriority, &SetPriority_Params, nullptr);
	uFnSetPriority->FunctionFlags |= 0x400;
	uFnSetPriority->iNative = 31502;
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 H                              (CPF_Parm)

void UGFxMoviePlayer::SetExternalInterface(class UObject* H)
{
	static UFunction* uFnSetExternalInterface = nullptr;

	if (!uFnSetExternalInterface)
	{
		uFnSetExternalInterface = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetExternalInterface");
	}

	UGFxMoviePlayer_execSetExternalInterface_Params SetExternalInterface_Params;
	memset(&SetExternalInterface_Params, 0, sizeof(SetExternalInterface_Params));
	memcpy_s(&SetExternalInterface_Params.H, sizeof(SetExternalInterface_Params.H), &H, sizeof(H));

	this->ProcessEvent(uFnSetExternalInterface, &SetExternalInterface_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31505])
// Parameter Info:
// EGFxTimingMode                 Mode                           (CPF_Parm)

void UGFxMoviePlayer::SetTimingMode(EGFxTimingMode Mode)
{
	static UFunction* uFnSetTimingMode = nullptr;

	if (!uFnSetTimingMode)
	{
		uFnSetTimingMode = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetTimingMode");
	}

	UGFxMoviePlayer_execSetTimingMode_Params SetTimingMode_Params;
	memset(&SetTimingMode_Params, 0, sizeof(SetTimingMode_Params));
	memcpy_s(&SetTimingMode_Params.Mode, sizeof(SetTimingMode_Params.Mode), &Mode, sizeof(Mode));

	uFnSetTimingMode->iNative = 0;
	uFnSetTimingMode->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetTimingMode, &SetTimingMode_Params, nullptr);
	uFnSetTimingMode->FunctionFlags |= 0x400;
	uFnSetTimingMode->iNative = 31505;
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class USwfMovie*               Data                           (CPF_Parm)

void UGFxMoviePlayer::SetMovieInfo(class USwfMovie* Data)
{
	static UFunction* uFnSetMovieInfo = nullptr;

	if (!uFnSetMovieInfo)
	{
		uFnSetMovieInfo = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieInfo");
	}

	UGFxMoviePlayer_execSetMovieInfo_Params SetMovieInfo_Params;
	memset(&SetMovieInfo_Params, 0, sizeof(SetMovieInfo_Params));
	memcpy_s(&SetMovieInfo_Params.Data, sizeof(SetMovieInfo_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnSetMovieInfo, &SetMovieInfo_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x12020801] (FUNC_Final | FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventConditionalClearPause()
{
	static UFunction* uFnConditionalClearPause = nullptr;

	if (!uFnConditionalClearPause)
	{
		uFnConditionalClearPause = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ConditionalClearPause");
	}

	UGFxMoviePlayer_eventConditionalClearPause_Params ConditionalClearPause_Params;
	memset(&ConditionalClearPause_Params, 0, sizeof(ConditionalClearPause_Params));

	this->ProcessEvent(uFnConditionalClearPause, &ConditionalClearPause_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventOnCleanup()
{
	static UFunction* uFnOnCleanup = nullptr;

	if (!uFnOnCleanup)
	{
		uFnOnCleanup = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnCleanup");
	}

	UGFxMoviePlayer_eventOnCleanup_Params OnCleanup_Params;
	memset(&OnCleanup_Params, 0, sizeof(OnCleanup_Params));

	this->ProcessEvent(uFnOnCleanup, &OnCleanup_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventOnClose()
{
	static UFunction* uFnOnClose = nullptr;

	if (!uFnOnClose)
	{
		uFnOnClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnClose");
	}

	UGFxMoviePlayer_eventOnClose_Params OnClose_Params;
	memset(&OnClose_Params, 0, sizeof(OnClose_Params));

	this->ProcessEvent(uFnOnClose, &OnClose_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[31333])
// Parameter Info:
// bool                           Unload                         (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::Close(bool Unload)
{
	static UFunction* uFnClose = nullptr;

	if (!uFnClose)
	{
		uFnClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Close");
	}

	UGFxMoviePlayer_execClose_Params Close_Params;
	memset(&Close_Params, 0, sizeof(Close_Params));
	Close_Params.Unload = Unload;

	uFnClose->iNative = 0;
	uFnClose->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClose, &Close_Params, nullptr);
	uFnClose->FunctionFlags |= 0x400;
	uFnClose->iNative = 31333;
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[28915])
// Parameter Info:
// bool                           bPausePlayback                 (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static UFunction* uFnSetPause = nullptr;

	if (!uFnSetPause)
	{
		uFnSetPause = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPause");
	}

	UGFxMoviePlayer_execSetPause_Params SetPause_Params;
	memset(&SetPause_Params, 0, sizeof(SetPause_Params));
	SetPause_Params.bPausePlayback = bPausePlayback;

	uFnSetPause->iNative = 0;
	uFnSetPause->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetPause, &SetPause_Params, nullptr);
	uFnSetPause->FunctionFlags |= 0x400;
	uFnSetPause->iNative = 28915;
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::OnPostAdvance(float DeltaTime)
{
	static UFunction* uFnOnPostAdvance = nullptr;

	if (!uFnOnPostAdvance)
	{
		uFnOnPostAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnPostAdvance");
	}

	UGFxMoviePlayer_execOnPostAdvance_Params OnPostAdvance_Params;
	memset(&OnPostAdvance_Params, 0, sizeof(OnPostAdvance_Params));
	memcpy_s(&OnPostAdvance_Params.DeltaTime, sizeof(OnPostAdvance_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	this->ProcessEvent(uFnOnPostAdvance, &OnPostAdvance_Params, nullptr);
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31450])
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static UFunction* uFnPostAdvance = nullptr;

	if (!uFnPostAdvance)
	{
		uFnPostAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PostAdvance");
	}

	UGFxMoviePlayer_execPostAdvance_Params PostAdvance_Params;
	memset(&PostAdvance_Params, 0, sizeof(PostAdvance_Params));
	memcpy_s(&PostAdvance_Params.DeltaTime, sizeof(PostAdvance_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	uFnPostAdvance->iNative = 0;
	uFnPostAdvance->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPostAdvance, &PostAdvance_Params, nullptr);
	uFnPostAdvance->FunctionFlags |= 0x400;
	uFnPostAdvance->iNative = 31450;
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[17129])
// Parameter Info:
// float                          Time                           (CPF_Parm)

void UGFxMoviePlayer::Advance(float Time)
{
	static UFunction* uFnAdvance = nullptr;

	if (!uFnAdvance)
	{
		uFnAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Advance");
	}

	UGFxMoviePlayer_execAdvance_Params Advance_Params;
	memset(&Advance_Params, 0, sizeof(Advance_Params));
	memcpy_s(&Advance_Params.Time, sizeof(Advance_Params.Time), &Time, sizeof(Time));

	uFnAdvance->iNative = 0;
	uFnAdvance->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAdvance, &Advance_Params, nullptr);
	uFnAdvance->FunctionFlags |= 0x400;
	uFnAdvance->iNative = 17129;
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[14797])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           StartPaused                    (CPF_OptionalParm | CPF_Parm)

bool UGFxMoviePlayer::eventStart(bool StartPaused)
{
	static UFunction* uFnStart = nullptr;

	if (!uFnStart)
	{
		uFnStart = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Start");
	}

	UGFxMoviePlayer_eventStart_Params Start_Params;
	memset(&Start_Params, 0, sizeof(Start_Params));
	Start_Params.StartPaused = StartPaused;

	uFnStart->iNative = 0;
	uFnStart->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStart, &Start_Params, nullptr);
	uFnStart->FunctionFlags |= 0x400;
	uFnStart->iNative = 14797;

	return Start_Params.ReturnValue;
};

// Function GFxUI.GFxObject.IsDisplayObjectActive
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31409])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxObject::IsDisplayObjectActive()
{
	static UFunction* uFnIsDisplayObjectActive = nullptr;

	if (!uFnIsDisplayObjectActive)
	{
		uFnIsDisplayObjectActive = UFunction::FindFunction("Function GFxUI.GFxObject.IsDisplayObjectActive");
	}

	UGFxObject_execIsDisplayObjectActive_Params IsDisplayObjectActive_Params;
	memset(&IsDisplayObjectActive_Params, 0, sizeof(IsDisplayObjectActive_Params));

	uFnIsDisplayObjectActive->iNative = 0;
	uFnIsDisplayObjectActive->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsDisplayObjectActive, &IsDisplayObjectActive_Params, nullptr);
	uFnIsDisplayObjectActive->FunctionFlags |= 0x400;
	uFnIsDisplayObjectActive->iNative = 31409;

	return IsDisplayObjectActive_Params.ReturnValue;
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FName&            WidgetName                     (CPF_Parm)
// const struct FName&            WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxObject::eventWidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetUnloaded = nullptr;

	if (!uFnWidgetUnloaded)
	{
		uFnWidgetUnloaded = UFunction::FindFunction("Function GFxUI.GFxObject.WidgetUnloaded");
	}

	UGFxObject_eventWidgetUnloaded_Params WidgetUnloaded_Params;
	memset(&WidgetUnloaded_Params, 0, sizeof(WidgetUnloaded_Params));
	memcpy_s(&WidgetUnloaded_Params.WidgetName, sizeof(WidgetUnloaded_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetUnloaded_Params.WidgetPath, sizeof(WidgetUnloaded_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetUnloaded_Params.Widget, sizeof(WidgetUnloaded_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetUnloaded, &WidgetUnloaded_Params, nullptr);

	return WidgetUnloaded_Params.ReturnValue;
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FName&            WidgetName                     (CPF_Parm)
// const struct FName&            WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxObject::eventWidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function GFxUI.GFxObject.WidgetInitialized");
	}

	UGFxObject_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	memcpy_s(&WidgetInitialized_Params.Widget, sizeof(WidgetInitialized_Params.Widget), &Widget, sizeof(Widget));

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
};

// Function GFxUI.GFxObject.Tick
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[317])
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxObject::Tick(float DeltaTime)
{
	static UFunction* uFnTick = nullptr;

	if (!uFnTick)
	{
		uFnTick = UFunction::FindFunction("Function GFxUI.GFxObject.Tick");
	}

	UGFxObject_execTick_Params Tick_Params;
	memset(&Tick_Params, 0, sizeof(Tick_Params));
	memcpy_s(&Tick_Params.DeltaTime, sizeof(Tick_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	uFnTick->iNative = 0;
	uFnTick->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTick, &Tick_Params, nullptr);
	uFnTick->FunctionFlags |= 0x400;
	uFnTick->iNative = 317;
};

// Function GFxUI.GFxObject.GetParent
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31378])
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UGFxObject::GetParent()
{
	static UFunction* uFnGetParent = nullptr;

	if (!uFnGetParent)
	{
		uFnGetParent = UFunction::FindFunction("Function GFxUI.GFxObject.GetParent");
	}

	UGFxObject_execGetParent_Params GetParent_Params;
	memset(&GetParent_Params, 0, sizeof(GetParent_Params));

	uFnGetParent->iNative = 0;
	uFnGetParent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetParent, &GetParent_Params, nullptr);
	uFnGetParent->FunctionFlags |= 0x400;
	uFnGetParent->iNative = 31378;

	return GetParent_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetRoot
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31381])
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UGFxObject::GetRoot()
{
	static UFunction* uFnGetRoot = nullptr;

	if (!uFnGetRoot)
	{
		uFnGetRoot = UFunction::FindFunction("Function GFxUI.GFxObject.GetRoot");
	}

	UGFxObject_execGetRoot_Params GetRoot_Params;
	memset(&GetRoot_Params, 0, sizeof(GetRoot_Params));

	uFnGetRoot->iNative = 0;
	uFnGetRoot->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetRoot, &GetRoot_Params, nullptr);
	uFnGetRoot->FunctionFlags |= 0x400;
	uFnGetRoot->iNative = 31381;

	return GetRoot_Params.ReturnValue;
};

// Function GFxUI.GFxObject.LoadMovie
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31419])
// Parameter Info:
// class USwfMovie*               Movie                          (CPF_Parm)

void UGFxObject::LoadMovie(class USwfMovie* Movie)
{
	static UFunction* uFnLoadMovie = nullptr;

	if (!uFnLoadMovie)
	{
		uFnLoadMovie = UFunction::FindFunction("Function GFxUI.GFxObject.LoadMovie");
	}

	UGFxObject_execLoadMovie_Params LoadMovie_Params;
	memset(&LoadMovie_Params, 0, sizeof(LoadMovie_Params));
	memcpy_s(&LoadMovie_Params.Movie, sizeof(LoadMovie_Params.Movie), &Movie, sizeof(Movie));

	uFnLoadMovie->iNative = 0;
	uFnLoadMovie->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLoadMovie, &LoadMovie_Params, nullptr);
	uFnLoadMovie->FunctionFlags |= 0x400;
	uFnLoadMovie->iNative = 31419;
};

// Function GFxUI.GFxObject.GetNextHighestDepth
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31377])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

float UGFxObject::GetNextHighestDepth()
{
	static UFunction* uFnGetNextHighestDepth = nullptr;

	if (!uFnGetNextHighestDepth)
	{
		uFnGetNextHighestDepth = UFunction::FindFunction("Function GFxUI.GFxObject.GetNextHighestDepth");
	}

	UGFxObject_execGetNextHighestDepth_Params GetNextHighestDepth_Params;
	memset(&GetNextHighestDepth_Params, 0, sizeof(GetNextHighestDepth_Params));

	uFnGetNextHighestDepth->iNative = 0;
	uFnGetNextHighestDepth->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetNextHighestDepth, &GetNextHighestDepth_Params, nullptr);
	uFnGetNextHighestDepth->FunctionFlags |= 0x400;
	uFnGetNextHighestDepth->iNative = 31377;

	return GetNextHighestDepth_Params.ReturnValue;
};

// Function GFxUI.GFxObject.RemoveMovieClip
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31467])
// Parameter Info:

void UGFxObject::RemoveMovieClip()
{
	static UFunction* uFnRemoveMovieClip = nullptr;

	if (!uFnRemoveMovieClip)
	{
		uFnRemoveMovieClip = UFunction::FindFunction("Function GFxUI.GFxObject.RemoveMovieClip");
	}

	UGFxObject_execRemoveMovieClip_Params RemoveMovieClip_Params;
	memset(&RemoveMovieClip_Params, 0, sizeof(RemoveMovieClip_Params));

	uFnRemoveMovieClip->iNative = 0;
	uFnRemoveMovieClip->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveMovieClip, &RemoveMovieClip_Params, nullptr);
	uFnRemoveMovieClip->FunctionFlags |= 0x400;
	uFnRemoveMovieClip->iNative = 31467;
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31486])
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// const struct FASColorTransform& cxform                         (CPF_Parm)

void UGFxObject::SetElementColorTransform(int32_t Index, const struct FASColorTransform& cxform)
{
	static UFunction* uFnSetElementColorTransform = nullptr;

	if (!uFnSetElementColorTransform)
	{
		uFnSetElementColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementColorTransform");
	}

	UGFxObject_execSetElementColorTransform_Params SetElementColorTransform_Params;
	memset(&SetElementColorTransform_Params, 0, sizeof(SetElementColorTransform_Params));
	memcpy_s(&SetElementColorTransform_Params.Index, sizeof(SetElementColorTransform_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementColorTransform_Params.cxform, sizeof(SetElementColorTransform_Params.cxform), &cxform, sizeof(cxform));

	uFnSetElementColorTransform->iNative = 0;
	uFnSetElementColorTransform->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetElementColorTransform, &SetElementColorTransform_Params, nullptr);
	uFnSetElementColorTransform->FunctionFlags |= 0x400;
	uFnSetElementColorTransform->iNative = 31486;
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31492])
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetElementPosition(int32_t Index, float X, float Y)
{
	static UFunction* uFnSetElementPosition = nullptr;

	if (!uFnSetElementPosition)
	{
		uFnSetElementPosition = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementPosition");
	}

	UGFxObject_execSetElementPosition_Params SetElementPosition_Params;
	memset(&SetElementPosition_Params, 0, sizeof(SetElementPosition_Params));
	memcpy_s(&SetElementPosition_Params.Index, sizeof(SetElementPosition_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementPosition_Params.X, sizeof(SetElementPosition_Params.X), &X, sizeof(X));
	memcpy_s(&SetElementPosition_Params.Y, sizeof(SetElementPosition_Params.Y), &Y, sizeof(Y));

	uFnSetElementPosition->iNative = 0;
	uFnSetElementPosition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetElementPosition, &SetElementPosition_Params, nullptr);
	uFnSetElementPosition->FunctionFlags |= 0x400;
	uFnSetElementPosition->iNative = 31492;
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31493])
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// bool                           Visible                        (CPF_Parm)

void UGFxObject::SetElementVisible(int32_t Index, bool Visible)
{
	static UFunction* uFnSetElementVisible = nullptr;

	if (!uFnSetElementVisible)
	{
		uFnSetElementVisible = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementVisible");
	}

	UGFxObject_execSetElementVisible_Params SetElementVisible_Params;
	memset(&SetElementVisible_Params, 0, sizeof(SetElementVisible_Params));
	memcpy_s(&SetElementVisible_Params.Index, sizeof(SetElementVisible_Params.Index), &Index, sizeof(Index));
	SetElementVisible_Params.Visible = Visible;

	uFnSetElementVisible->iNative = 0;
	uFnSetElementVisible->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetElementVisible, &SetElementVisible_Params, nullptr);
	uFnSetElementVisible->FunctionFlags |= 0x400;
	uFnSetElementVisible->iNative = 31493;
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31488])
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// const struct FMatrix&          M                              (CPF_Parm)

void UGFxObject::SetElementDisplayMatrix(int32_t Index, const struct FMatrix& M)
{
	static UFunction* uFnSetElementDisplayMatrix = nullptr;

	if (!uFnSetElementDisplayMatrix)
	{
		uFnSetElementDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementDisplayMatrix");
	}

	UGFxObject_execSetElementDisplayMatrix_Params SetElementDisplayMatrix_Params;
	memset(&SetElementDisplayMatrix_Params, 0, sizeof(SetElementDisplayMatrix_Params));
	memcpy_s(&SetElementDisplayMatrix_Params.Index, sizeof(SetElementDisplayMatrix_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementDisplayMatrix_Params.M, sizeof(SetElementDisplayMatrix_Params.M), &M, sizeof(M));

	uFnSetElementDisplayMatrix->iNative = 0;
	uFnSetElementDisplayMatrix->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetElementDisplayMatrix, &SetElementDisplayMatrix_Params, nullptr);
	uFnSetElementDisplayMatrix->FunctionFlags |= 0x400;
	uFnSetElementDisplayMatrix->iNative = 31488;
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31487])
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// const struct FASDisplayInfo&   D                              (CPF_Parm)

void UGFxObject::SetElementDisplayInfo(int32_t Index, const struct FASDisplayInfo& D)
{
	static UFunction* uFnSetElementDisplayInfo = nullptr;

	if (!uFnSetElementDisplayInfo)
	{
		uFnSetElementDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementDisplayInfo");
	}

	UGFxObject_execSetElementDisplayInfo_Params SetElementDisplayInfo_Params;
	memset(&SetElementDisplayInfo_Params, 0, sizeof(SetElementDisplayInfo_Params));
	memcpy_s(&SetElementDisplayInfo_Params.Index, sizeof(SetElementDisplayInfo_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementDisplayInfo_Params.D, sizeof(SetElementDisplayInfo_Params.D), &D, sizeof(D));

	uFnSetElementDisplayInfo->iNative = 0;
	uFnSetElementDisplayInfo->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetElementDisplayInfo, &SetElementDisplayInfo_Params, nullptr);
	uFnSetElementDisplayInfo->FunctionFlags |= 0x400;
	uFnSetElementDisplayInfo->iNative = 31487;
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31367])
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

struct FMatrix UGFxObject::GetElementDisplayMatrix(int32_t Index)
{
	static UFunction* uFnGetElementDisplayMatrix = nullptr;

	if (!uFnGetElementDisplayMatrix)
	{
		uFnGetElementDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementDisplayMatrix");
	}

	UGFxObject_execGetElementDisplayMatrix_Params GetElementDisplayMatrix_Params;
	memset(&GetElementDisplayMatrix_Params, 0, sizeof(GetElementDisplayMatrix_Params));
	memcpy_s(&GetElementDisplayMatrix_Params.Index, sizeof(GetElementDisplayMatrix_Params.Index), &Index, sizeof(Index));

	uFnGetElementDisplayMatrix->iNative = 0;
	uFnGetElementDisplayMatrix->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetElementDisplayMatrix, &GetElementDisplayMatrix_Params, nullptr);
	uFnGetElementDisplayMatrix->FunctionFlags |= 0x400;
	uFnGetElementDisplayMatrix->iNative = 31367;

	return GetElementDisplayMatrix_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31366])
// Parameter Info:
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

struct FASDisplayInfo UGFxObject::GetElementDisplayInfo(int32_t Index)
{
	static UFunction* uFnGetElementDisplayInfo = nullptr;

	if (!uFnGetElementDisplayInfo)
	{
		uFnGetElementDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementDisplayInfo");
	}

	UGFxObject_execGetElementDisplayInfo_Params GetElementDisplayInfo_Params;
	memset(&GetElementDisplayInfo_Params, 0, sizeof(GetElementDisplayInfo_Params));
	memcpy_s(&GetElementDisplayInfo_Params.Index, sizeof(GetElementDisplayInfo_Params.Index), &Index, sizeof(Index));

	uFnGetElementDisplayInfo->iNative = 0;
	uFnGetElementDisplayInfo->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetElementDisplayInfo, &GetElementDisplayInfo_Params, nullptr);
	uFnGetElementDisplayInfo->FunctionFlags |= 0x400;
	uFnGetElementDisplayInfo->iNative = 31366;

	return GetElementDisplayInfo_Params.ReturnValue;
};

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31490])
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// int32_t                        i                              (CPF_Parm)

void UGFxObject::SetElementInt(int32_t Index, int32_t i)
{
	static UFunction* uFnSetElementInt = nullptr;

	if (!uFnSetElementInt)
	{
		uFnSetElementInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementInt");
	}

	UGFxObject_execSetElementInt_Params SetElementInt_Params;
	memset(&SetElementInt_Params, 0, sizeof(SetElementInt_Params));
	memcpy_s(&SetElementInt_Params.Index, sizeof(SetElementInt_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementInt_Params.i, sizeof(SetElementInt_Params.i), &i, sizeof(i));

	uFnSetElementInt->iNative = 0;
	uFnSetElementInt->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetElementInt, &SetElementInt_Params, nullptr);
	uFnSetElementInt->FunctionFlags |= 0x400;
	uFnSetElementInt->iNative = 31490;
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31489])
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementFloat(int32_t Index, float F)
{
	static UFunction* uFnSetElementFloat = nullptr;

	if (!uFnSetElementFloat)
	{
		uFnSetElementFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementFloat");
	}

	UGFxObject_execSetElementFloat_Params SetElementFloat_Params;
	memset(&SetElementFloat_Params, 0, sizeof(SetElementFloat_Params));
	memcpy_s(&SetElementFloat_Params.Index, sizeof(SetElementFloat_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementFloat_Params.F, sizeof(SetElementFloat_Params.F), &F, sizeof(F));

	uFnSetElementFloat->iNative = 0;
	uFnSetElementFloat->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetElementFloat, &SetElementFloat_Params, nullptr);
	uFnSetElementFloat->FunctionFlags |= 0x400;
	uFnSetElementFloat->iNative = 31489;
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31485])
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// bool                           B                              (CPF_Parm)

void UGFxObject::SetElementBool(int32_t Index, bool B)
{
	static UFunction* uFnSetElementBool = nullptr;

	if (!uFnSetElementBool)
	{
		uFnSetElementBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementBool");
	}

	UGFxObject_execSetElementBool_Params SetElementBool_Params;
	memset(&SetElementBool_Params, 0, sizeof(SetElementBool_Params));
	memcpy_s(&SetElementBool_Params.Index, sizeof(SetElementBool_Params.Index), &Index, sizeof(Index));
	SetElementBool_Params.B = B;

	uFnSetElementBool->iNative = 0;
	uFnSetElementBool->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetElementBool, &SetElementBool_Params, nullptr);
	uFnSetElementBool->FunctionFlags |= 0x400;
	uFnSetElementBool->iNative = 31485;
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31491])
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementObject(int32_t Index, class UGFxObject* val)
{
	static UFunction* uFnSetElementObject = nullptr;

	if (!uFnSetElementObject)
	{
		uFnSetElementObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementObject");
	}

	UGFxObject_execSetElementObject_Params SetElementObject_Params;
	memset(&SetElementObject_Params, 0, sizeof(SetElementObject_Params));
	memcpy_s(&SetElementObject_Params.Index, sizeof(SetElementObject_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElementObject_Params.val, sizeof(SetElementObject_Params.val), &val, sizeof(val));

	uFnSetElementObject->iNative = 0;
	uFnSetElementObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetElementObject, &SetElementObject_Params, nullptr);
	uFnSetElementObject->FunctionFlags |= 0x400;
	uFnSetElementObject->iNative = 31491;
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31484])
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// const struct FASValue&         Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElement(int32_t Index, const struct FASValue& Arg)
{
	static UFunction* uFnSetElement = nullptr;

	if (!uFnSetElement)
	{
		uFnSetElement = UFunction::FindFunction("Function GFxUI.GFxObject.SetElement");
	}

	UGFxObject_execSetElement_Params SetElement_Params;
	memset(&SetElement_Params, 0, sizeof(SetElement_Params));
	memcpy_s(&SetElement_Params.Index, sizeof(SetElement_Params.Index), &Index, sizeof(Index));
	memcpy_s(&SetElement_Params.Arg, sizeof(SetElement_Params.Arg), &Arg, sizeof(Arg));

	uFnSetElement->iNative = 0;
	uFnSetElement->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetElement, &SetElement_Params, nullptr);
	uFnSetElement->FunctionFlags |= 0x400;
	uFnSetElement->iNative = 31484;
};

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31369])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

int32_t UGFxObject::GetElementInt(int32_t Index)
{
	static UFunction* uFnGetElementInt = nullptr;

	if (!uFnGetElementInt)
	{
		uFnGetElementInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementInt");
	}

	UGFxObject_execGetElementInt_Params GetElementInt_Params;
	memset(&GetElementInt_Params, 0, sizeof(GetElementInt_Params));
	memcpy_s(&GetElementInt_Params.Index, sizeof(GetElementInt_Params.Index), &Index, sizeof(Index));

	uFnGetElementInt->iNative = 0;
	uFnGetElementInt->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetElementInt, &GetElementInt_Params, nullptr);
	uFnGetElementInt->FunctionFlags |= 0x400;
	uFnGetElementInt->iNative = 31369;

	return GetElementInt_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31368])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

float UGFxObject::GetElementFloat(int32_t Index)
{
	static UFunction* uFnGetElementFloat = nullptr;

	if (!uFnGetElementFloat)
	{
		uFnGetElementFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementFloat");
	}

	UGFxObject_execGetElementFloat_Params GetElementFloat_Params;
	memset(&GetElementFloat_Params, 0, sizeof(GetElementFloat_Params));
	memcpy_s(&GetElementFloat_Params.Index, sizeof(GetElementFloat_Params.Index), &Index, sizeof(Index));

	uFnGetElementFloat->iNative = 0;
	uFnGetElementFloat->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetElementFloat, &GetElementFloat_Params, nullptr);
	uFnGetElementFloat->FunctionFlags |= 0x400;
	uFnGetElementFloat->iNative = 31368;

	return GetElementFloat_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31365])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

bool UGFxObject::GetElementBool(int32_t Index)
{
	static UFunction* uFnGetElementBool = nullptr;

	if (!uFnGetElementBool)
	{
		uFnGetElementBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementBool");
	}

	UGFxObject_execGetElementBool_Params GetElementBool_Params;
	memset(&GetElementBool_Params, 0, sizeof(GetElementBool_Params));
	memcpy_s(&GetElementBool_Params.Index, sizeof(GetElementBool_Params.Index), &Index, sizeof(Index));

	uFnGetElementBool->iNative = 0;
	uFnGetElementBool->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetElementBool, &GetElementBool_Params, nullptr);
	uFnGetElementBool->FunctionFlags |= 0x400;
	uFnGetElementBool->iNative = 31365;

	return GetElementBool_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[31370])
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetElementObject(int32_t Index, class UClass* Type)
{
	static UFunction* uFnGetElementObject = nullptr;

	if (!uFnGetElementObject)
	{
		uFnGetElementObject = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementObject");
	}

	UGFxObject_execGetElementObject_Params GetElementObject_Params;
	memset(&GetElementObject_Params, 0, sizeof(GetElementObject_Params));
	memcpy_s(&GetElementObject_Params.Index, sizeof(GetElementObject_Params.Index), &Index, sizeof(Index));
	memcpy_s(&GetElementObject_Params.Type, sizeof(GetElementObject_Params.Type), &Type, sizeof(Type));

	uFnGetElementObject->iNative = 0;
	uFnGetElementObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetElementObject, &GetElementObject_Params, nullptr);
	uFnGetElementObject->FunctionFlags |= 0x400;
	uFnGetElementObject->iNative = 31370;

	return GetElementObject_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31364])
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)

struct FASValue UGFxObject::GetElement(int32_t Index)
{
	static UFunction* uFnGetElement = nullptr;

	if (!uFnGetElement)
	{
		uFnGetElement = UFunction::FindFunction("Function GFxUI.GFxObject.GetElement");
	}

	UGFxObject_execGetElement_Params GetElement_Params;
	memset(&GetElement_Params, 0, sizeof(GetElement_Params));
	memcpy_s(&GetElement_Params.Index, sizeof(GetElement_Params.Index), &Index, sizeof(Index));

	uFnGetElement->iNative = 0;
	uFnGetElement->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetElement, &GetElement_Params, nullptr);
	uFnGetElement->FunctionFlags |= 0x400;
	uFnGetElement->iNative = 31364;

	return GetElement_Params.ReturnValue;
};

// Function GFxUI.GFxObject.HandleFadeInOrOut
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31392])
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxObject::HandleFadeInOrOut(float DeltaTime)
{
	static UFunction* uFnHandleFadeInOrOut = nullptr;

	if (!uFnHandleFadeInOrOut)
	{
		uFnHandleFadeInOrOut = UFunction::FindFunction("Function GFxUI.GFxObject.HandleFadeInOrOut");
	}

	UGFxObject_execHandleFadeInOrOut_Params HandleFadeInOrOut_Params;
	memset(&HandleFadeInOrOut_Params, 0, sizeof(HandleFadeInOrOut_Params));
	memcpy_s(&HandleFadeInOrOut_Params.DeltaTime, sizeof(HandleFadeInOrOut_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));

	uFnHandleFadeInOrOut->iNative = 0;
	uFnHandleFadeInOrOut->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHandleFadeInOrOut, &HandleFadeInOrOut_Params, nullptr);
	uFnHandleFadeInOrOut->FunctionFlags |= 0x400;
	uFnHandleFadeInOrOut->iNative = 31392;
};

// Function GFxUI.GFxObject.IsVisible
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31411])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxObject::IsVisible()
{
	static UFunction* uFnIsVisible = nullptr;

	if (!uFnIsVisible)
	{
		uFnIsVisible = UFunction::FindFunction("Function GFxUI.GFxObject.IsVisible");
	}

	UGFxObject_execIsVisible_Params IsVisible_Params;
	memset(&IsVisible_Params, 0, sizeof(IsVisible_Params));

	uFnIsVisible->iNative = 0;
	uFnIsVisible->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsVisible, &IsVisible_Params, nullptr);
	uFnIsVisible->FunctionFlags |= 0x400;
	uFnIsVisible->iNative = 31411;

	return IsVisible_Params.ReturnValue;
};

// Function GFxUI.GFxObject.SetVisible
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[31509])
// Parameter Info:
// bool                           Visible                        (CPF_Parm)
// float                          FadeTimeSeconds                (CPF_OptionalParm | CPF_Parm)

void UGFxObject::SetVisible(bool Visible, float FadeTimeSeconds)
{
	static UFunction* uFnSetVisible = nullptr;

	if (!uFnSetVisible)
	{
		uFnSetVisible = UFunction::FindFunction("Function GFxUI.GFxObject.SetVisible");
	}

	UGFxObject_execSetVisible_Params SetVisible_Params;
	memset(&SetVisible_Params, 0, sizeof(SetVisible_Params));
	SetVisible_Params.Visible = Visible;
	memcpy_s(&SetVisible_Params.FadeTimeSeconds, sizeof(SetVisible_Params.FadeTimeSeconds), &FadeTimeSeconds, sizeof(FadeTimeSeconds));

	uFnSetVisible->iNative = 0;
	uFnSetVisible->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetVisible, &SetVisible_Params, nullptr);
	uFnSetVisible->FunctionFlags |= 0x400;
	uFnSetVisible->iNative = 31509;
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31483])
// Parameter Info:
// const struct FMatrix&          M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix3D(const struct FMatrix& M)
{
	static UFunction* uFnSetDisplayMatrix3D = nullptr;

	if (!uFnSetDisplayMatrix3D)
	{
		uFnSetDisplayMatrix3D = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayMatrix3D");
	}

	UGFxObject_execSetDisplayMatrix3D_Params SetDisplayMatrix3D_Params;
	memset(&SetDisplayMatrix3D_Params, 0, sizeof(SetDisplayMatrix3D_Params));
	memcpy_s(&SetDisplayMatrix3D_Params.M, sizeof(SetDisplayMatrix3D_Params.M), &M, sizeof(M));

	uFnSetDisplayMatrix3D->iNative = 0;
	uFnSetDisplayMatrix3D->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetDisplayMatrix3D, &SetDisplayMatrix3D_Params, nullptr);
	uFnSetDisplayMatrix3D->FunctionFlags |= 0x400;
	uFnSetDisplayMatrix3D->iNative = 31483;
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31482])
// Parameter Info:
// const struct FMatrix&          M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix(const struct FMatrix& M)
{
	static UFunction* uFnSetDisplayMatrix = nullptr;

	if (!uFnSetDisplayMatrix)
	{
		uFnSetDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayMatrix");
	}

	UGFxObject_execSetDisplayMatrix_Params SetDisplayMatrix_Params;
	memset(&SetDisplayMatrix_Params, 0, sizeof(SetDisplayMatrix_Params));
	memcpy_s(&SetDisplayMatrix_Params.M, sizeof(SetDisplayMatrix_Params.M), &M, sizeof(M));

	uFnSetDisplayMatrix->iNative = 0;
	uFnSetDisplayMatrix->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetDisplayMatrix, &SetDisplayMatrix_Params, nullptr);
	uFnSetDisplayMatrix->FunctionFlags |= 0x400;
	uFnSetDisplayMatrix->iNative = 31482;
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31480])
// Parameter Info:
// const struct FASColorTransform& cxform                         (CPF_Parm)

void UGFxObject::SetColorTransform(const struct FASColorTransform& cxform)
{
	static UFunction* uFnSetColorTransform = nullptr;

	if (!uFnSetColorTransform)
	{
		uFnSetColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.SetColorTransform");
	}

	UGFxObject_execSetColorTransform_Params SetColorTransform_Params;
	memset(&SetColorTransform_Params, 0, sizeof(SetColorTransform_Params));
	memcpy_s(&SetColorTransform_Params.cxform, sizeof(SetColorTransform_Params.cxform), &cxform, sizeof(cxform));

	uFnSetColorTransform->iNative = 0;
	uFnSetColorTransform->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetColorTransform, &SetColorTransform_Params, nullptr);
	uFnSetColorTransform->FunctionFlags |= 0x400;
	uFnSetColorTransform->iNative = 31480;
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28929])
// Parameter Info:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetPosition(float X, float Y)
{
	static UFunction* uFnSetPosition = nullptr;

	if (!uFnSetPosition)
	{
		uFnSetPosition = UFunction::FindFunction("Function GFxUI.GFxObject.SetPosition");
	}

	UGFxObject_execSetPosition_Params SetPosition_Params;
	memset(&SetPosition_Params, 0, sizeof(SetPosition_Params));
	memcpy_s(&SetPosition_Params.X, sizeof(SetPosition_Params.X), &X, sizeof(X));
	memcpy_s(&SetPosition_Params.Y, sizeof(SetPosition_Params.Y), &Y, sizeof(Y));

	uFnSetPosition->iNative = 0;
	uFnSetPosition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetPosition, &SetPosition_Params, nullptr);
	uFnSetPosition->FunctionFlags |= 0x400;
	uFnSetPosition->iNative = 28929;
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[31481])
// Parameter Info:
// struct FASDisplayInfo          D                              (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxObject::SetDisplayInfo(struct FASDisplayInfo& D)
{
	static UFunction* uFnSetDisplayInfo = nullptr;

	if (!uFnSetDisplayInfo)
	{
		uFnSetDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayInfo");
	}

	UGFxObject_execSetDisplayInfo_Params SetDisplayInfo_Params;
	memset(&SetDisplayInfo_Params, 0, sizeof(SetDisplayInfo_Params));
	memcpy_s(&SetDisplayInfo_Params.D, sizeof(SetDisplayInfo_Params.D), &D, sizeof(D));

	uFnSetDisplayInfo->iNative = 0;
	uFnSetDisplayInfo->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetDisplayInfo, &SetDisplayInfo_Params, nullptr);
	uFnSetDisplayInfo->FunctionFlags |= 0x400;
	uFnSetDisplayInfo->iNative = 31481;

	memcpy_s(&D, sizeof(D), &SetDisplayInfo_Params.D, sizeof(SetDisplayInfo_Params.D));
};

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31363])
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix3D()
{
	static UFunction* uFnGetDisplayMatrix3D = nullptr;

	if (!uFnGetDisplayMatrix3D)
	{
		uFnGetDisplayMatrix3D = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayMatrix3D");
	}

	UGFxObject_execGetDisplayMatrix3D_Params GetDisplayMatrix3D_Params;
	memset(&GetDisplayMatrix3D_Params, 0, sizeof(GetDisplayMatrix3D_Params));

	uFnGetDisplayMatrix3D->iNative = 0;
	uFnGetDisplayMatrix3D->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetDisplayMatrix3D, &GetDisplayMatrix3D_Params, nullptr);
	uFnGetDisplayMatrix3D->FunctionFlags |= 0x400;
	uFnGetDisplayMatrix3D->iNative = 31363;

	return GetDisplayMatrix3D_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31362])
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix()
{
	static UFunction* uFnGetDisplayMatrix = nullptr;

	if (!uFnGetDisplayMatrix)
	{
		uFnGetDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayMatrix");
	}

	UGFxObject_execGetDisplayMatrix_Params GetDisplayMatrix_Params;
	memset(&GetDisplayMatrix_Params, 0, sizeof(GetDisplayMatrix_Params));

	uFnGetDisplayMatrix->iNative = 0;
	uFnGetDisplayMatrix->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetDisplayMatrix, &GetDisplayMatrix_Params, nullptr);
	uFnGetDisplayMatrix->FunctionFlags |= 0x400;
	uFnGetDisplayMatrix->iNative = 31362;

	return GetDisplayMatrix_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31360])
// Parameter Info:
// struct FASColorTransform       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FASColorTransform UGFxObject::GetColorTransform()
{
	static UFunction* uFnGetColorTransform = nullptr;

	if (!uFnGetColorTransform)
	{
		uFnGetColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.GetColorTransform");
	}

	UGFxObject_execGetColorTransform_Params GetColorTransform_Params;
	memset(&GetColorTransform_Params, 0, sizeof(GetColorTransform_Params));

	uFnGetColorTransform->iNative = 0;
	uFnGetColorTransform->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetColorTransform, &GetColorTransform_Params, nullptr);
	uFnGetColorTransform->FunctionFlags |= 0x400;
	uFnGetColorTransform->iNative = 31360;

	return GetColorTransform_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[23876])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm | CPF_OutParm)
// float                          Y                              (CPF_Parm | CPF_OutParm)

bool UGFxObject::GetPosition(float& X, float& Y)
{
	static UFunction* uFnGetPosition = nullptr;

	if (!uFnGetPosition)
	{
		uFnGetPosition = UFunction::FindFunction("Function GFxUI.GFxObject.GetPosition");
	}

	UGFxObject_execGetPosition_Params GetPosition_Params;
	memset(&GetPosition_Params, 0, sizeof(GetPosition_Params));
	memcpy_s(&GetPosition_Params.X, sizeof(GetPosition_Params.X), &X, sizeof(X));
	memcpy_s(&GetPosition_Params.Y, sizeof(GetPosition_Params.Y), &Y, sizeof(Y));

	uFnGetPosition->iNative = 0;
	uFnGetPosition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetPosition, &GetPosition_Params, nullptr);
	uFnGetPosition->FunctionFlags |= 0x400;
	uFnGetPosition->iNative = 23876;

	memcpy_s(&X, sizeof(X), &GetPosition_Params.X, sizeof(GetPosition_Params.X));
	memcpy_s(&Y, sizeof(Y), &GetPosition_Params.Y, sizeof(GetPosition_Params.Y));

	return GetPosition_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[31361])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FASDisplayInfo          D                              (CPF_Parm | CPF_OutParm)

bool UGFxObject::GetDisplayInfo(struct FASDisplayInfo& D)
{
	static UFunction* uFnGetDisplayInfo = nullptr;

	if (!uFnGetDisplayInfo)
	{
		uFnGetDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayInfo");
	}

	UGFxObject_execGetDisplayInfo_Params GetDisplayInfo_Params;
	memset(&GetDisplayInfo_Params, 0, sizeof(GetDisplayInfo_Params));
	memcpy_s(&GetDisplayInfo_Params.D, sizeof(GetDisplayInfo_Params.D), &D, sizeof(D));

	uFnGetDisplayInfo->iNative = 0;
	uFnGetDisplayInfo->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetDisplayInfo, &GetDisplayInfo_Params, nullptr);
	uFnGetDisplayInfo->FunctionFlags |= 0x400;
	uFnGetDisplayInfo->iNative = 31361;

	memcpy_s(&D, sizeof(D), &GetDisplayInfo_Params.D, sizeof(GetDisplayInfo_Params.D));

	return GetDisplayInfo_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetResolvedObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31380])
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UGFxObject::GetResolvedObject()
{
	static UFunction* uFnGetResolvedObject = nullptr;

	if (!uFnGetResolvedObject)
	{
		uFnGetResolvedObject = UFunction::FindFunction("Function GFxUI.GFxObject.GetResolvedObject");
	}

	UGFxObject_execGetResolvedObject_Params GetResolvedObject_Params;
	memset(&GetResolvedObject_Params, 0, sizeof(GetResolvedObject_Params));

	uFnGetResolvedObject->iNative = 0;
	uFnGetResolvedObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetResolvedObject, &GetResolvedObject_Params, nullptr);
	uFnGetResolvedObject->FunctionFlags |= 0x400;
	uFnGetResolvedObject->iNative = 31380;

	return GetResolvedObject_Params.ReturnValue;
};

// Function GFxUI.GFxObject.SetResolvedObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31503])
// Parameter Info:
// class UGFxObject*              TheResolvedObject              (CPF_Parm)

void UGFxObject::SetResolvedObject(class UGFxObject* TheResolvedObject)
{
	static UFunction* uFnSetResolvedObject = nullptr;

	if (!uFnSetResolvedObject)
	{
		uFnSetResolvedObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetResolvedObject");
	}

	UGFxObject_execSetResolvedObject_Params SetResolvedObject_Params;
	memset(&SetResolvedObject_Params, 0, sizeof(SetResolvedObject_Params));
	memcpy_s(&SetResolvedObject_Params.TheResolvedObject, sizeof(SetResolvedObject_Params.TheResolvedObject), &TheResolvedObject, sizeof(TheResolvedObject));

	uFnSetResolvedObject->iNative = 0;
	uFnSetResolvedObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetResolvedObject, &SetResolvedObject_Params, nullptr);
	uFnSetResolvedObject->FunctionFlags |= 0x400;
	uFnSetResolvedObject->iNative = 31503;
};

// Function GFxUI.GFxObject.GetInstanceName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31375])
// Parameter Info:
// struct FName                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FName UGFxObject::GetInstanceName()
{
	static UFunction* uFnGetInstanceName = nullptr;

	if (!uFnGetInstanceName)
	{
		uFnGetInstanceName = UFunction::FindFunction("Function GFxUI.GFxObject.GetInstanceName");
	}

	UGFxObject_execGetInstanceName_Params GetInstanceName_Params;
	memset(&GetInstanceName_Params, 0, sizeof(GetInstanceName_Params));

	uFnGetInstanceName->iNative = 0;
	uFnGetInstanceName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetInstanceName, &GetInstanceName_Params, nullptr);
	uFnGetInstanceName->FunctionFlags |= 0x400;
	uFnGetInstanceName->iNative = 31375;

	return GetInstanceName_Params.ReturnValue;
};

// Function GFxUI.GFxObject.SetInstanceName
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31495])
// Parameter Info:
// const struct FName&            NewProxyName                   (CPF_Parm)

void UGFxObject::SetInstanceName(const struct FName& NewProxyName)
{
	static UFunction* uFnSetInstanceName = nullptr;

	if (!uFnSetInstanceName)
	{
		uFnSetInstanceName = UFunction::FindFunction("Function GFxUI.GFxObject.SetInstanceName");
	}

	UGFxObject_execSetInstanceName_Params SetInstanceName_Params;
	memset(&SetInstanceName_Params, 0, sizeof(SetInstanceName_Params));
	memcpy_s(&SetInstanceName_Params.NewProxyName, sizeof(SetInstanceName_Params.NewProxyName), &NewProxyName, sizeof(NewProxyName));

	uFnSetInstanceName->iNative = 0;
	uFnSetInstanceName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetInstanceName, &SetInstanceName_Params, nullptr);
	uFnSetInstanceName->FunctionFlags |= 0x400;
	uFnSetInstanceName->iNative = 31495;
};

// Function GFxUI.GFxObject.SetAsProxy
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31479])
// Parameter Info:
// const struct FName&            ProxyName                      (CPF_Parm)
// const class TArray<struct FName>& ProxyGFxTags                   (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetAsProxy(const struct FName& ProxyName, const class TArray<struct FName>& ProxyGFxTags)
{
	static UFunction* uFnSetAsProxy = nullptr;

	if (!uFnSetAsProxy)
	{
		uFnSetAsProxy = UFunction::FindFunction("Function GFxUI.GFxObject.SetAsProxy");
	}

	UGFxObject_execSetAsProxy_Params SetAsProxy_Params;
	memset(&SetAsProxy_Params, 0, sizeof(SetAsProxy_Params));
	memcpy_s(&SetAsProxy_Params.ProxyName, sizeof(SetAsProxy_Params.ProxyName), &ProxyName, sizeof(ProxyName));
	memcpy_s(&SetAsProxy_Params.ProxyGFxTags, sizeof(SetAsProxy_Params.ProxyGFxTags), &ProxyGFxTags, sizeof(ProxyGFxTags));

	uFnSetAsProxy->iNative = 0;
	uFnSetAsProxy->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetAsProxy, &SetAsProxy_Params, nullptr);
	uFnSetAsProxy->FunctionFlags |= 0x400;
	uFnSetAsProxy->iNative = 31479;
};

// Function GFxUI.GFxObject.IsProxy
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31410])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxObject::IsProxy()
{
	static UFunction* uFnIsProxy = nullptr;

	if (!uFnIsProxy)
	{
		uFnIsProxy = UFunction::FindFunction("Function GFxUI.GFxObject.IsProxy");
	}

	UGFxObject_execIsProxy_Params IsProxy_Params;
	memset(&IsProxy_Params, 0, sizeof(IsProxy_Params));

	uFnIsProxy->iNative = 0;
	uFnIsProxy->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsProxy, &IsProxy_Params, nullptr);
	uFnIsProxy->FunctionFlags |= 0x400;
	uFnIsProxy->iNative = 31410;

	return IsProxy_Params.ReturnValue;
};

// Function GFxUI.GFxObject.GetGFxTags
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31374])
// Parameter Info:
// class TArray<struct FName>     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class TArray<struct FName> UGFxObject::GetGFxTags()
{
	static UFunction* uFnGetGFxTags = nullptr;

	if (!uFnGetGFxTags)
	{
		uFnGetGFxTags = UFunction::FindFunction("Function GFxUI.GFxObject.GetGFxTags");
	}

	UGFxObject_execGetGFxTags_Params GetGFxTags_Params;
	memset(&GetGFxTags_Params, 0, sizeof(GetGFxTags_Params));

	uFnGetGFxTags->iNative = 0;
	uFnGetGFxTags->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetGFxTags, &GetGFxTags_Params, nullptr);
	uFnGetGFxTags->FunctionFlags |= 0x400;
	uFnGetGFxTags->iNative = 31374;

	return GetGFxTags_Params.ReturnValue;
};

// Function GFxUI.GFxObject.ClearGFxTags
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31331])
// Parameter Info:

void UGFxObject::ClearGFxTags()
{
	static UFunction* uFnClearGFxTags = nullptr;

	if (!uFnClearGFxTags)
	{
		uFnClearGFxTags = UFunction::FindFunction("Function GFxUI.GFxObject.ClearGFxTags");
	}

	UGFxObject_execClearGFxTags_Params ClearGFxTags_Params;
	memset(&ClearGFxTags_Params, 0, sizeof(ClearGFxTags_Params));

	uFnClearGFxTags->iNative = 0;
	uFnClearGFxTags->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearGFxTags, &ClearGFxTags_Params, nullptr);
	uFnClearGFxTags->FunctionFlags |= 0x400;
	uFnClearGFxTags->iNative = 31331;
};

// Function GFxUI.GFxObject.FindGFxTag
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31345])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FName&            TagToFind                      (CPF_Parm)

int32_t UGFxObject::FindGFxTag(const struct FName& TagToFind)
{
	static UFunction* uFnFindGFxTag = nullptr;

	if (!uFnFindGFxTag)
	{
		uFnFindGFxTag = UFunction::FindFunction("Function GFxUI.GFxObject.FindGFxTag");
	}

	UGFxObject_execFindGFxTag_Params FindGFxTag_Params;
	memset(&FindGFxTag_Params, 0, sizeof(FindGFxTag_Params));
	memcpy_s(&FindGFxTag_Params.TagToFind, sizeof(FindGFxTag_Params.TagToFind), &TagToFind, sizeof(TagToFind));

	uFnFindGFxTag->iNative = 0;
	uFnFindGFxTag->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFindGFxTag, &FindGFxTag_Params, nullptr);
	uFnFindGFxTag->FunctionFlags |= 0x400;
	uFnFindGFxTag->iNative = 31345;

	return FindGFxTag_Params.ReturnValue;
};

// Function GFxUI.GFxObject.RemoveGFxTag
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31466])
// Parameter Info:
// const struct FName&            TagToRemove                    (CPF_Parm)

void UGFxObject::RemoveGFxTag(const struct FName& TagToRemove)
{
	static UFunction* uFnRemoveGFxTag = nullptr;

	if (!uFnRemoveGFxTag)
	{
		uFnRemoveGFxTag = UFunction::FindFunction("Function GFxUI.GFxObject.RemoveGFxTag");
	}

	UGFxObject_execRemoveGFxTag_Params RemoveGFxTag_Params;
	memset(&RemoveGFxTag_Params, 0, sizeof(RemoveGFxTag_Params));
	memcpy_s(&RemoveGFxTag_Params.TagToRemove, sizeof(RemoveGFxTag_Params.TagToRemove), &TagToRemove, sizeof(TagToRemove));

	uFnRemoveGFxTag->iNative = 0;
	uFnRemoveGFxTag->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRemoveGFxTag, &RemoveGFxTag_Params, nullptr);
	uFnRemoveGFxTag->FunctionFlags |= 0x400;
	uFnRemoveGFxTag->iNative = 31466;
};

// Function GFxUI.GFxObject.AddGFxTags
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31249])
// Parameter Info:
// const class TArray<struct FName>& TagsToAdd                      (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::AddGFxTags(const class TArray<struct FName>& TagsToAdd)
{
	static UFunction* uFnAddGFxTags = nullptr;

	if (!uFnAddGFxTags)
	{
		uFnAddGFxTags = UFunction::FindFunction("Function GFxUI.GFxObject.AddGFxTags");
	}

	UGFxObject_execAddGFxTags_Params AddGFxTags_Params;
	memset(&AddGFxTags_Params, 0, sizeof(AddGFxTags_Params));
	memcpy_s(&AddGFxTags_Params.TagsToAdd, sizeof(AddGFxTags_Params.TagsToAdd), &TagsToAdd, sizeof(TagsToAdd));

	uFnAddGFxTags->iNative = 0;
	uFnAddGFxTags->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddGFxTags, &AddGFxTags_Params, nullptr);
	uFnAddGFxTags->FunctionFlags |= 0x400;
	uFnAddGFxTags->iNative = 31249;
};

// Function GFxUI.GFxObject.AddGFxTag
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31248])
// Parameter Info:
// const struct FName&            TagToAdd                       (CPF_Parm)

void UGFxObject::AddGFxTag(const struct FName& TagToAdd)
{
	static UFunction* uFnAddGFxTag = nullptr;

	if (!uFnAddGFxTag)
	{
		uFnAddGFxTag = UFunction::FindFunction("Function GFxUI.GFxObject.AddGFxTag");
	}

	UGFxObject_execAddGFxTag_Params AddGFxTag_Params;
	memset(&AddGFxTag_Params, 0, sizeof(AddGFxTag_Params));
	memcpy_s(&AddGFxTag_Params.TagToAdd, sizeof(AddGFxTag_Params.TagToAdd), &TagToAdd, sizeof(TagToAdd));

	uFnAddGFxTag->iNative = 0;
	uFnAddGFxTag->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddGFxTag, &AddGFxTag_Params, nullptr);
	uFnAddGFxTag->FunctionFlags |= 0x400;
	uFnAddGFxTag->iNative = 31248;
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x12040001] (FUNC_Final | FUNC_Private | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Event                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::ASRemoveAllEventListeners(const class FString& Event)
{
	static UFunction* uFnASRemoveAllEventListeners = nullptr;

	if (!uFnASRemoveAllEventListeners)
	{
		uFnASRemoveAllEventListeners = UFunction::FindFunction("Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners");
	}

	UGFxClikWidget_execASRemoveAllEventListeners_Params ASRemoveAllEventListeners_Params;
	memset(&ASRemoveAllEventListeners_Params, 0, sizeof(ASRemoveAllEventListeners_Params));
	memcpy_s(&ASRemoveAllEventListeners_Params.Event, sizeof(ASRemoveAllEventListeners_Params.Event), &Event, sizeof(Event));

	this->ProcessEvent(uFnASRemoveAllEventListeners, &ASRemoveAllEventListeners_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.AS3AddEventListener
// [0x12044001] (FUNC_Final | FUNC_NoExport | FUNC_OptionalParm | FUNC_Private | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Type                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              O                              (CPF_Parm)
// bool                           useCapture                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        listenerPriority               (CPF_OptionalParm | CPF_Parm)
// bool                           useWeakReference               (CPF_OptionalParm | CPF_Parm)

void UGFxClikWidget::AS3AddEventListener(const class FString& Type, class UGFxObject* O, bool useCapture, int32_t listenerPriority, bool useWeakReference)
{
	static UFunction* uFnAS3AddEventListener = nullptr;

	if (!uFnAS3AddEventListener)
	{
		uFnAS3AddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.AS3AddEventListener");
	}

	UGFxClikWidget_execAS3AddEventListener_Params AS3AddEventListener_Params;
	memset(&AS3AddEventListener_Params, 0, sizeof(AS3AddEventListener_Params));
	memcpy_s(&AS3AddEventListener_Params.Type, sizeof(AS3AddEventListener_Params.Type), &Type, sizeof(Type));
	memcpy_s(&AS3AddEventListener_Params.O, sizeof(AS3AddEventListener_Params.O), &O, sizeof(O));
	AS3AddEventListener_Params.useCapture = useCapture;
	memcpy_s(&AS3AddEventListener_Params.listenerPriority, sizeof(AS3AddEventListener_Params.listenerPriority), &listenerPriority, sizeof(listenerPriority));
	AS3AddEventListener_Params.useWeakReference = useWeakReference;

	this->ProcessEvent(uFnAS3AddEventListener, &AS3AddEventListener_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x12040001] (FUNC_Final | FUNC_Private | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Type                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              O                              (CPF_Parm)
// const class FString&           func                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::ASAddEventListener(const class FString& Type, class UGFxObject* O, const class FString& func)
{
	static UFunction* uFnASAddEventListener = nullptr;

	if (!uFnASAddEventListener)
	{
		uFnASAddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.ASAddEventListener");
	}

	UGFxClikWidget_execASAddEventListener_Params ASAddEventListener_Params;
	memset(&ASAddEventListener_Params, 0, sizeof(ASAddEventListener_Params));
	memcpy_s(&ASAddEventListener_Params.Type, sizeof(ASAddEventListener_Params.Type), &Type, sizeof(Type));
	memcpy_s(&ASAddEventListener_Params.O, sizeof(ASAddEventListener_Params.O), &O, sizeof(O));
	memcpy_s(&ASAddEventListener_Params.func, sizeof(ASAddEventListener_Params.func), &func, sizeof(func));

	this->ProcessEvent(uFnASAddEventListener, &ASAddEventListener_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x12040001] (FUNC_Final | FUNC_Private | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              O                              (CPF_Parm)
// const class FString&           member                         (CPF_Parm | CPF_NeedCtorLink)
// const struct FScriptDelegate&  listener                       (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::SetListener(class UGFxObject* O, const class FString& member, const struct FScriptDelegate& listener)
{
	static UFunction* uFnSetListener = nullptr;

	if (!uFnSetListener)
	{
		uFnSetListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.SetListener");
	}

	UGFxClikWidget_execSetListener_Params SetListener_Params;
	memset(&SetListener_Params, 0, sizeof(SetListener_Params));
	memcpy_s(&SetListener_Params.O, sizeof(SetListener_Params.O), &O, sizeof(O));
	memcpy_s(&SetListener_Params.member, sizeof(SetListener_Params.member), &member, sizeof(member));
	memcpy_s(&SetListener_Params.listener, sizeof(SetListener_Params.listener), &listener, sizeof(listener));

	this->ProcessEvent(uFnSetListener, &SetListener_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x12040001] (FUNC_Final | FUNC_Private | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// const struct FName&            Typename                       (CPF_Parm)

class FString UGFxClikWidget::GetEventStringFromTypename(const struct FName& Typename)
{
	static UFunction* uFnGetEventStringFromTypename = nullptr;

	if (!uFnGetEventStringFromTypename)
	{
		uFnGetEventStringFromTypename = UFunction::FindFunction("Function GFxUI.GFxClikWidget.GetEventStringFromTypename");
	}

	UGFxClikWidget_execGetEventStringFromTypename_Params GetEventStringFromTypename_Params;
	memset(&GetEventStringFromTypename_Params, 0, sizeof(GetEventStringFromTypename_Params));
	memcpy_s(&GetEventStringFromTypename_Params.Typename, sizeof(GetEventStringFromTypename_Params.Typename), &Typename, sizeof(Typename));

	this->ProcessEvent(uFnGetEventStringFromTypename, &GetEventStringFromTypename_Params, nullptr);

	return GetEventStringFromTypename_Params.ReturnValue;
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Event                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::RemoveAllEventListeners(const class FString& Event)
{
	static UFunction* uFnRemoveAllEventListeners = nullptr;

	if (!uFnRemoveAllEventListeners)
	{
		uFnRemoveAllEventListeners = UFunction::FindFunction("Function GFxUI.GFxClikWidget.RemoveAllEventListeners");
	}

	UGFxClikWidget_execRemoveAllEventListeners_Params RemoveAllEventListeners_Params;
	memset(&RemoveAllEventListeners_Params, 0, sizeof(RemoveAllEventListeners_Params));
	memcpy_s(&RemoveAllEventListeners_Params.Event, sizeof(RemoveAllEventListeners_Params.Event), &Event, sizeof(Event));

	this->ProcessEvent(uFnRemoveAllEventListeners, &RemoveAllEventListeners_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x12024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            Type                           (CPF_Parm)
// const struct FScriptDelegate&  listener                       (CPF_Parm | CPF_NeedCtorLink)
// bool                           useCapture                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        listenerPriority               (CPF_OptionalParm | CPF_Parm)
// bool                           useWeakReference               (CPF_OptionalParm | CPF_Parm)

void UGFxClikWidget::AddEventListener(const struct FName& Type, const struct FScriptDelegate& listener, bool useCapture, int32_t listenerPriority, bool useWeakReference)
{
	static UFunction* uFnAddEventListener = nullptr;

	if (!uFnAddEventListener)
	{
		uFnAddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.AddEventListener");
	}

	UGFxClikWidget_execAddEventListener_Params AddEventListener_Params;
	memset(&AddEventListener_Params, 0, sizeof(AddEventListener_Params));
	memcpy_s(&AddEventListener_Params.Type, sizeof(AddEventListener_Params.Type), &Type, sizeof(Type));
	memcpy_s(&AddEventListener_Params.listener, sizeof(AddEventListener_Params.listener), &listener, sizeof(listener));
	AddEventListener_Params.useCapture = useCapture;
	memcpy_s(&AddEventListener_Params.listenerPriority, sizeof(AddEventListener_Params.listenerPriority), &listenerPriority, sizeof(listenerPriority));
	AddEventListener_Params.useWeakReference = useWeakReference;

	this->ProcessEvent(uFnAddEventListener, &AddEventListener_Params, nullptr);
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FEventData&       Data                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::EventListener(const struct FEventData& Data)
{
	static UFunction* uFnEventListener = nullptr;

	if (!uFnEventListener)
	{
		uFnEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.EventListener");
	}

	UGFxClikWidget_execEventListener_Params EventListener_Params;
	memset(&EventListener_Params, 0, sizeof(EventListener_Params));
	memcpy_s(&EventListener_Params.Data, sizeof(EventListener_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnEventListener, &EventListener_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
