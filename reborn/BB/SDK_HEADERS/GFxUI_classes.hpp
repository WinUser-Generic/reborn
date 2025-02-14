/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: GFxUI_classes.hpp
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GFxUI.SwfMovie.FlashTextureRescale
enum class EFlashTextureRescale : uint8_t
{
	FlashTextureScale_High                             = 0,
	FlashTextureScale_Low                              = 1,
	FlashTextureScale_NextLow                          = 2,
	FlashTextureScale_Mult4                            = 3,
	FlashTextureScale_None                             = 4,
	FlashTextureScale_END                              = 5
};

// Enum GFxUI.GFxMoviePlayer.ASType
enum class EASType : uint8_t
{
	AS_Undefined                                       = 0,
	AS_Null                                            = 1,
	AS_Number                                          = 2,
	AS_Int                                             = 3,
	AS_String                                          = 4,
	AS_Boolean                                         = 5,
	AS_END                                             = 6
};

// Enum GFxUI.GFxMoviePlayer.GFxRenderTextureMode
enum class EGFxRenderTextureMode : uint8_t
{
	RTM_Opaque                                         = 0,
	RTM_Alpha                                          = 1,
	RTM_AlphaComposite                                 = 2,
	RTM_END                                            = 3
};

// Enum GFxUI.GFxMoviePlayer.GFxTimingMode
enum class EGFxTimingMode : uint8_t
{
	TM_Game                                            = 0,
	TM_Real                                            = 1,
	TM_END                                             = 2
};

// Enum GFxUI.GFxMoviePlayer.GFxAlign
enum class EGFxAlign : uint8_t
{
	Align_Center                                       = 0,
	Align_TopCenter                                    = 1,
	Align_BottomCenter                                 = 2,
	Align_CenterLeft                                   = 3,
	Align_CenterRight                                  = 4,
	Align_TopLeft                                      = 5,
	Align_TopRight                                     = 6,
	Align_BottomLeft                                   = 7,
	Align_BottomRight                                  = 8,
	Align_END                                          = 9
};

// Enum GFxUI.GFxMoviePlayer.GFxScaleMode
enum class EGFxScaleMode : uint8_t
{
	SM_NoScale                                         = 0,
	SM_ShowAll                                         = 1,
	SM_ExactFit                                        = 2,
	SM_NoBorder                                        = 3,
	SM_FitVertical                                     = 4,
	SM_FitHorizontal                                   = 5,
	SM_END                                             = 6
};

// Enum GFxUI.GFxMoviePlayer.EMovieLoadState
enum class EMovieLoadState : uint8_t
{
	MLS_NotLoaded                                      = 0,
	MLS_Loaded                                         = 1,
	MLS_Started                                        = 2,
	MLS_END                                            = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GFxUI.GFxAction_CloseMovie
// 0x0010 (0x00E8 - 0x00F8)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x00E8 (0x0008) [0x0000000000000000]               
	uint32_t                                           bUnload : 1;                                   // 0x00F0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_CloseMovie");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_GetVariable
// 0x0018 (0x00E8 - 0x0100)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x00E8 (0x0008) [0x0000000000000000]               
	class FString                                      Variable;                                      // 0x00F0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_GetVariable");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_Invoke
// 0x0028 (0x00E8 - 0x0110)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x00E8 (0x0008) [0x0000000000000000]               
	class FString                                      MethodName;                                    // 0x00F0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FASValue>                      Arguments;                                     // 0x0100 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_Invoke");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_OpenMovie
// 0x0050 (0x00E8 - 0x0138)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                         // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      MoviePlayerClass;                              // 0x00F0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGFxMoviePlayer*                             MoviePlayer;                                   // 0x00F8 (0x0008) [0x0000000000000000]               
	class UGFxMoviePlayer*                             LegacyMovieObject;                             // 0x0100 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bTakeFocus : 1;                                // 0x0108 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCaptureInput : 1;                             // 0x0108 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bStartPaused : 1;                              // 0x0108 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnableGammaCorrection : 1;                    // 0x0108 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDisplayWithHudOff : 1;                        // 0x0108 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	EGFxRenderTextureMode                              RenderTextureMode;                             // 0x010C (0x0001) [0x0000000000000001] (CPF_Edit)    
	EGFxScaleMode                                      ScaleMode;                                     // 0x010D (0x0001) [0x0000000000000001] (CPF_Edit)    
	EGFxAlign                                          AlignMode;                                     // 0x010E (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UTextureRenderTarget2D*                      RenderTexture;                                 // 0x0110 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FName>                         CaptureKeys;                                   // 0x0118 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FName>                         FocusIgnoreKeys;                               // 0x0128 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_OpenMovie");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0018 (0x00E8 - 0x0100)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x00E8 (0x0008) [0x0000000000000000]               
	class TArray<struct FName>                         CaptureKeys;                                   // 0x00F0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_SetCaptureKeys");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxAction_SetVariable
// 0x0018 (0x00E8 - 0x0100)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                         // 0x00E8 (0x0008) [0x0000000000000000]               
	class FString                                      Variable;                                      // 0x00F0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxAction_SetVariable");
		}

		return uClassPointer;
	};

	bool eventIsValidLevelSequenceObject();
};

// Class GFxUI.GFxEngine
// 0x0018 (0x0058 - 0x0070)
class UGFxEngine : public UObject
{
public:
	class TArray<struct FGCReference>                  GCReferences;                                  // 0x0058 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            RefCount;                                      // 0x0068 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxEngine");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxEvent_FSCommand
// 0x0020 (0x0118 - 0x0138)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                         // 0x0118 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      FSCommand;                                     // 0x0120 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UGFxFSCmdHandler_Kismet*                     Handler;                                       // 0x0130 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxEvent_FSCommand");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x0058 - 0x0058)
class UGFxFSCmdHandler : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxFSCmdHandler");
		}

		return uClassPointer;
	};

	bool eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const class FString& Cmd, const class FString& Arg);
};

// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x0058 - 0x0058)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxFSCmdHandler_Kismet");
		}

		return uClassPointer;
	};

	bool eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const class FString& Cmd, const class FString& Arg);
};

// Class GFxUI.GFxInteraction
// 0x0010 (0x00A8 - 0x00B8)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                  // 0x00A8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bFakeMobileTouches : 1;                        // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxInteraction");
		}

		return uClassPointer;
	};

	void CloseAllMoviePlayers();
	void NotifySplitscreenLayoutChanged();
	void NotifyPlayerRemoved(int32_t PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int32_t PlayerIndex, class ULocalPlayer* AddedPlayer);
	void NotifyGameSessionEnded();
	class UGFxMoviePlayer* GetFocusMovie(const struct FPlatformUserId& UserId);
};

// Class GFxUI.GFxLayoutDefinition
// 0x0010 (0x0058 - 0x0068)
class UGFxLayoutDefinition : public UGBXDefinition
{
public:
	class TArray<struct FGFxLayoutElement>             Elements;                                      // 0x0058 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxLayoutDefinition");
		}

		return uClassPointer;
	};

	void PositionClip(const struct FName& InstanceName, class UGFxObject* Clip, bool bSpectatorMode);
};

// Class GFxUI.GFxMoviePlayer
// 0x02C8 (0x0058 - 0x0320)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                        // 0x0058 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    pCaptureKeys;                                  // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    pFocusIgnoreKeys;                              // 0x0068 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	uint8_t                                           UnknownData00[0x50];                           // 0x0070 (0x0050) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	uint8_t                                           UnknownData01[0x50];                           // 0x00C0 (0x0050) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int32_t                                            NextASUObject;                                 // 0x0110 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class USwfMovie*                                   MovieInfo;                                     // 0x0118 (0x0008) [0x0000000000000000]               
	EMovieLoadState                                    MovieLoadState;                                // 0x0120 (0x0001) [0x0000000000000002] (CPF_Const)   
	ESceneDepthPriorityGroup                           SceneDPG;                                      // 0x0121 (0x0001) [0x0000000000000001] (CPF_Edit)    
	EGFxTimingMode                                     TimingMode;                                    // 0x0122 (0x0001) [0x0000000000000000]               
	EGFxRenderTextureMode                              RenderTextureMode;                             // 0x0123 (0x0001) [0x0000000000000000]               
	uint8_t                                            Priority;                                      // 0x0124 (0x0001) [0x0000000000000000]               
	class UTextureRenderTarget2D*                      RenderTexture;                                 // 0x0128 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LocalPlayerOwnerIndex;                         // 0x0130 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UObject*                                     ExternalInterface;                             // 0x0138 (0x0008) [0x0000000000000000]               
	class TArray<struct FName>                         CaptureKeys;                                   // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FName>                         FocusIgnoreKeys;                               // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bDisplayWithHudOff : 1;                        // 0x0160 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableGammaCorrection : 1;                    // 0x0160 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWidgetsInitializedThisFrame : 1;              // 0x0160 (0x0004) [0x0000000000002002] [0x00000004] (CPF_Const | CPF_Transient)
	uint32_t                                           bLogUnhandedWidgetInitializations : 1;         // 0x0160 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bAllowInput : 1;                               // 0x0160 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAllowFocus : 1;                               // 0x0160 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bAutoPlay : 1;                                 // 0x0160 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bPauseGameWhileActive : 1;                     // 0x0160 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bDisableWorldRendering : 1;                    // 0x0160 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bCloseOnLevelChange : 1;                       // 0x0160 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bOnlyOwnerFocusable : 1;                       // 0x0160 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bForceFullViewport : 1;                        // 0x0160 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bFullscreenMovie : 1;                          // 0x0160 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bDiscardNonOwnerInput : 1;                     // 0x0160 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bCaptureInput : 1;                             // 0x0160 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bCaptureMouseInput : 1;                        // 0x0160 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bAllowDualJoystickInput : 1;                   // 0x0160 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bIgnoreMouseInput : 1;                         // 0x0160 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bAcceptsUnregisteredInput : 1;                 // 0x0160 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bIsSplitscreenLayoutModified : 1;              // 0x0160 (0x0004) [0x0000000000002000] [0x00080000] (CPF_Transient)
	uint32_t                                           bShowHardwareMouseCursor : 1;                  // 0x0160 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bKeepTopMost : 1;                              // 0x0160 (0x0004) [0x0000000000002000] [0x00200000] (CPF_Transient)
	uint32_t                                           bBlurLesserMovies : 1;                         // 0x0160 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bHideLesserMovies : 1;                         // 0x0160 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bIsPriorityBlurred : 1;                        // 0x0160 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bIsPriorityHidden : 1;                         // 0x0160 (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bIgnoreVisibilityEffect : 1;                   // 0x0160 (0x0004) [0x0000000000000000] [0x04000000] 
	uint32_t                                           bIgnoreBlurEffect : 1;                         // 0x0160 (0x0004) [0x0000000000000000] [0x08000000] 
	class TArray<struct FExternalTexture>              ExternalTextures;                              // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FGFxWidgetBinding>             WidgetBindings;                                // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                           UnknownData02[0x50];                           // 0x0188 (0x0050) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	uint8_t                                           UnknownData03[0x50];                           // 0x01D8 (0x0050) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.OwnedGFxObjects
	uint8_t                                           UnknownData04[0x50];                           // 0x0228 (0x0050) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.CachedGFxObjects
	class TArray<class UGFxObject*>                    CachedObjectDuplicates;                        // 0x0278 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                           UnknownData05[0x50];                           // 0x0288 (0x0050) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ProxyGFxObjects
	class UGFxObject*                                  SplitscreenLayoutObject;                       // 0x02D8 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            SplitscreenLayoutYAdjust;                      // 0x02E0 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DepthPriority;                                 // 0x02E4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastKeyInputTime;                              // 0x02E8 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                     // 0x02F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnInputKey__Delegate;                        // 0x0300 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnInputAxis__Delegate;                       // 0x0310 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxMoviePlayer");
		}

		return uClassPointer;
	};

	class TArray<class UGFxObject*> GetAllOwnedObjects();
	bool ResolveProxy(const struct FName& RealInstanceName, class UGFxObject* RealGFxObject);
	class TArray<class UGFxObject*> GetAllProxyObjects();
	void ClearAllProxyObjects();
	void UnregisterProxyObject(const struct FName& ProxyObjectName);
	void RegisterProxyObject(const struct FName& ProxyObjectName, class UGFxObject* ProxyObject);
	void extObjFunc(class UGFxObject* Obj, const class FString& func);
	void extUncacheClip(const class FString& ClassName, class UGFxObject* Clip);
	void extCacheClip(const class FString& ClassName, class UGFxObject* Clip);
	class UGFxObject* GetRoot();
	class UClass* GetUCClassForASClass(const struct FName& ClassName);
	void UncacheGFxObject(class UGFxObject* anObject);
	void CacheGFxObject(class UGFxObject* anObject);
	void UnregisterGFxObject(class UGFxObject* anObject);
	void RegisterGFxObject(class UGFxObject* anObject);
	void HookSaveScreenshot();
	void UpdateRenderTexture(class UTextureRenderTarget2D* NewRenderTexture);
	bool OnInputAxis(const struct FPlatformUserId& UserId, const struct FName& ukey, float Delta, float DeltaTime);
	bool OnInputKey(const struct FPlatformUserId& UserId, const struct FName& ukey, EInputEvent uevent);
	bool InputKey(const struct FPlatformUserId& UserId, const struct FName& ukey, EInputEvent uevent);
	void UpdateSplitscreenLayout();
	void ApplyPriorityVisibilityEffect(bool bRemoveEffect);
	void ApplyPriorityBlurEffect(bool bRemoveEffect);
	void eventApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState);
	void eventOnFocusLost(int32_t LocalPlayerIndex);
	void eventOnFocusGained(int32_t LocalPlayerIndex);
	void SetLP(class ULocalPlayer* LocPlay);
	class APlayerController* GetPC();
	class ULocalPlayer* GetLP();
	void Init(class ULocalPlayer* optionalLocPlay);
	void SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path);
	void eventPostWidgetInit();
	bool eventWidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool eventWidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	int32_t GetAVMVersion();
	bool eventFilterAxisInput(const struct FPlatformUserId& UserId, const struct FName& Key, float Delta, float DeltaTime);
	bool eventFilterButtonInput(const struct FPlatformUserId& UserId, const struct FName& ButtonName, EInputEvent InputEvent);
	void FlushPlayerInput(bool capturekeysonly);
	void ClearFocusIgnoreKeys();
	void AddFocusIgnoreKey(const struct FName& Key);
	void ClearCaptureKeys();
	void AddCaptureKey(const struct FName& Key);
	void SetMovieCanReceiveInput(bool bCanReceiveInput);
	void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
	void SetSceneDPG(ESceneDepthPriorityGroup NewDPG);
	void SetPerspective3D(struct FMatrix& matPersp);
	void SetView3D(struct FMatrix& matView);
	void GetVisibleFrameRect(float& x0, float& y0, float& X1, float& Y1);
	void SetAlignment(EGFxAlign A);
	void SetViewScaleMode(EGFxScaleMode SM);
	void eventOnSetViewport();
	void SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height);
	class UGameViewportClient* GetGameViewportClient();
	void SetPriority(uint8_t NewPriority);
	void SetExternalInterface(class UObject* H);
	void SetTimingMode(EGFxTimingMode Mode);
	void SetMovieInfo(class USwfMovie* Data);
	void eventConditionalClearPause();
	void eventOnCleanup();
	void eventOnClose();
	void Close(bool optionalUnload);
	void SetPause(bool optionalBPausePlayback);
	void OnPostAdvance(float DeltaTime);
	void PostAdvance(float DeltaTime);
	void Advance(float Time);
	bool eventStart(bool optionalStartPaused);
};

// Class GFxUI.GFxMovie
// 0x0000 (0x0320 - 0x0320)
class UGFxMovie : public UGFxMoviePlayer
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxMovie");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxObject
// 0x0080 (0x0058 - 0x00D8)
class UGFxObject : public UObject
{
public:
	int32_t                                            Value[0xC];                                    // 0x0058 (0x0030) [0x0000000000001002] (CPF_Const | CPF_Native)
	class TArray<struct FGFxWidgetBinding>             SubWidgetBindings;                             // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FName>                         GFxTags;                                       // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsProxy : 1;                                  // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       ProxyInstanceName;                             // 0x00AC (0x0008) [0x0000000000000000]               
	class UGFxObject*                                  ResolvedObject;                                // 0x00B8 (0x0008) [0x0000000000000000]               
	float                                              bIsFadingInOrOut;                              // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              FadeTargetAlphaValue;                          // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              FadeAlphaPerSecond;                            // 0x00C8 (0x0004) [0x0000000000000000]               
	float                                              LayoutDefXScale;                               // 0x00CC (0x0004) [0x0000000000000000]               
	float                                              LayoutDefYScale;                               // 0x00D0 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxObject");
		}

		return uClassPointer;
	};

	bool IsDisplayObjectActive();
	bool eventWidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool eventWidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void Tick(float DeltaTime);
	class UGFxObject* GetParent();
	class UGFxObject* GetRoot();
	void LoadMovie(class USwfMovie* Movie);
	float GetNextHighestDepth();
	void RemoveMovieClip();
	void SetElementColorTransform(int32_t Index, const struct FASColorTransform& cxform);
	void SetElementPosition(int32_t Index, float X, float Y);
	void SetElementVisible(int32_t Index, bool Visible);
	void SetElementDisplayMatrix(int32_t Index, const struct FMatrix& M);
	void SetElementDisplayInfo(int32_t Index, const struct FASDisplayInfo& D);
	struct FMatrix GetElementDisplayMatrix(int32_t Index);
	struct FASDisplayInfo GetElementDisplayInfo(int32_t Index);
	void SetElementInt(int32_t Index, int32_t i);
	void SetElementFloat(int32_t Index, float F);
	void SetElementBool(int32_t Index, bool B);
	void SetElementObject(int32_t Index, class UGFxObject* val);
	void SetElement(int32_t Index, const struct FASValue& Arg);
	int32_t GetElementInt(int32_t Index);
	float GetElementFloat(int32_t Index);
	bool GetElementBool(int32_t Index);
	class UGFxObject* GetElementObject(int32_t Index, class UClass* optionalType);
	struct FASValue GetElement(int32_t Index);
	void HandleFadeInOrOut(float DeltaTime);
	bool IsVisible();
	void SetVisible(bool Visible, float optionalFadeTimeSeconds);
	void SetDisplayMatrix3D(const struct FMatrix& M);
	void SetDisplayMatrix(const struct FMatrix& M);
	void SetColorTransform(const struct FASColorTransform& cxform);
	void SetPosition(float X, float Y);
	void SetDisplayInfo(struct FASDisplayInfo& D);
	struct FMatrix GetDisplayMatrix3D();
	struct FMatrix GetDisplayMatrix();
	struct FASColorTransform GetColorTransform();
	bool GetPosition(float& X, float& Y);
	bool GetDisplayInfo(struct FASDisplayInfo& D);
	class UGFxObject* GetResolvedObject();
	void SetResolvedObject(class UGFxObject* TheResolvedObject);
	struct FName GetInstanceName();
	void SetInstanceName(const struct FName& NewProxyName);
	void SetAsProxy(const struct FName& ProxyName, const class TArray<struct FName>& ProxyGFxTags);
	bool IsProxy();
	class TArray<struct FName> GetGFxTags();
	void ClearGFxTags();
	int32_t FindGFxTag(const struct FName& TagToFind);
	void RemoveGFxTag(const struct FName& TagToRemove);
	void AddGFxTags(const class TArray<struct FName>& TagsToAdd);
	void AddGFxTag(const struct FName& TagToAdd);
};

// Class GFxUI.GFxClikWidget
// 0x0010 (0x00D8 - 0x00E8)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                     // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxClikWidget");
		}

		return uClassPointer;
	};

	void ASRemoveAllEventListeners(const class FString& Event);
	void AS3AddEventListener(const class FString& Type, class UGFxObject* O, bool optionalUseCapture, int32_t optionalListenerPriority, bool optionalUseWeakReference);
	void ASAddEventListener(const class FString& Type, class UGFxObject* O, const class FString& func);
	void SetListener(class UGFxObject* O, const class FString& member, const struct FScriptDelegate& listener);
	class FString GetEventStringFromTypename(const struct FName& Typename);
	void RemoveAllEventListeners(const class FString& Event);
	void AddEventListener(const struct FName& Type, const struct FScriptDelegate& listener, bool optionalUseCapture, int32_t optionalListenerPriority, bool optionalUseWeakReference);
	void EventListener(const struct FEventData& Data);
};

// Class GFxUI.GFxRawData
// 0x0040 (0x0058 - 0x0098)
class UGFxRawData : public UObject
{
public:
	class TArray<uint8_t>                              RawData;                                       // 0x0058 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class FString>                        ReferencedSwfs;                                // 0x0068 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<class UObject*>                       References;                                    // 0x0078 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<class UObject*>                       UserReferences;                                // 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxRawData");
		}

		return uClassPointer;
	};

};

// Class GFxUI.SwfMovie
// 0x0028 (0x0098 - 0x00C0)
class USwfMovie : public UGFxRawData
{
public:
	uint32_t                                           bUsesFontlib : 1;                              // 0x0098 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPackTextures : 1;                             // 0x0098 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bForceSquarePacking : 1;                       // 0x0098 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	int32_t                                            PackTextureSize;                               // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	EFlashTextureRescale                               TextureRescale;                                // 0x00A0 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      TextureFormat;                                 // 0x00A8 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	int32_t                                            RTTextures;                                    // 0x00B8 (0x0004) [0x0000000000000000]               
	int32_t                                            RTVideoTextures;                               // 0x00BC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.SwfMovie");
		}

		return uClassPointer;
	};

};

// Class GFxUI.FlashMovie
// 0x0000 (0x00C0 - 0x00C0)
class UFlashMovie : public USwfMovie
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.FlashMovie");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxMovieInfo
// 0x0000 (0x00C0 - 0x00C0)
class UGFxMovieInfo : public USwfMovie
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxMovieInfo");
		}

		return uClassPointer;
	};

};

// Class GFxUI.GFxValue
// 0x0030 (0x0058 - 0x0088)
class UGFxValue : public UObject
{
public:
	int32_t                                            Value[0xC];                                    // 0x0058 (0x0030) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.GFxValue");
		}

		return uClassPointer;
	};

};

// Class GFxUI.ReplacementTexture2D
// 0x0000 (0x0088 - 0x0088)
class UReplacementTexture2D : public UTexture2DDynamic
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GFxUI.ReplacementTexture2D");
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
