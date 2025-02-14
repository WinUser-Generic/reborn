/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.cpp
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

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGameLicenseTypeChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EGameLicenseType               GameLicenseType                (CPF_Parm)

void UOnlineSubsystemSteamworks::OnGameLicenseTypeChange(EGameLicenseType GameLicenseType)
{
	static UFunction* uFnOnGameLicenseTypeChange = nullptr;

	if (!uFnOnGameLicenseTypeChange)
	{
		uFnOnGameLicenseTypeChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGameLicenseTypeChange");
	}

	UOnlineSubsystemSteamworks_execOnGameLicenseTypeChange_Params OnGameLicenseTypeChange_Params;
	memset(&OnGameLicenseTypeChange_Params, 0, sizeof(OnGameLicenseTypeChange_Params));
	memcpy_s(&OnGameLicenseTypeChange_Params.GameLicenseType, sizeof(OnGameLicenseTypeChange_Params.GameLicenseType), &GameLicenseType, sizeof(GameLicenseType));

	this->ProcessEvent(uFnOnGameLicenseTypeChange, &OnGameLicenseTypeChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadGameLicenseTypeComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EOnlineSubsystemResult         Result                         (CPF_Parm)
// EGameLicenseType               GameLicenseType                (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadGameLicenseTypeComplete(EOnlineSubsystemResult Result, EGameLicenseType GameLicenseType)
{
	static UFunction* uFnOnReadGameLicenseTypeComplete = nullptr;

	if (!uFnOnReadGameLicenseTypeComplete)
	{
		uFnOnReadGameLicenseTypeComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadGameLicenseTypeComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadGameLicenseTypeComplete_Params OnReadGameLicenseTypeComplete_Params;
	memset(&OnReadGameLicenseTypeComplete_Params, 0, sizeof(OnReadGameLicenseTypeComplete_Params));
	memcpy_s(&OnReadGameLicenseTypeComplete_Params.Result, sizeof(OnReadGameLicenseTypeComplete_Params.Result), &Result, sizeof(Result));
	memcpy_s(&OnReadGameLicenseTypeComplete_Params.GameLicenseType, sizeof(OnReadGameLicenseTypeComplete_Params.GameLicenseType), &GameLicenseType, sizeof(GameLicenseType));

	this->ProcessEvent(uFnOnReadGameLicenseTypeComplete, &OnReadGameLicenseTypeComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowInviteUIComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnShowInviteUIComplete()
{
	static UFunction* uFnOnShowInviteUIComplete = nullptr;

	if (!uFnOnShowInviteUIComplete)
	{
		uFnOnShowInviteUIComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowInviteUIComplete");
	}

	UOnlineSubsystemSteamworks_execOnShowInviteUIComplete_Params OnShowInviteUIComplete_Params;
	memset(&OnShowInviteUIComplete_Params, 0, sizeof(OnShowInviteUIComplete_Params));

	this->ProcessEvent(uFnOnShowInviteUIComplete, &OnShowInviteUIComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGameInstallationStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsComplete                    (CPF_Parm)

void UOnlineSubsystemSteamworks::OnGameInstallationStatusChange(bool bIsComplete)
{
	static UFunction* uFnOnGameInstallationStatusChange = nullptr;

	if (!uFnOnGameInstallationStatusChange)
	{
		uFnOnGameInstallationStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGameInstallationStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnGameInstallationStatusChange_Params OnGameInstallationStatusChange_Params;
	memset(&OnGameInstallationStatusChange_Params, 0, sizeof(OnGameInstallationStatusChange_Params));
	OnGameInstallationStatusChange_Params.bIsComplete = bIsComplete;

	this->ProcessEvent(uFnOnGameInstallationStatusChange, &OnGameInstallationStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemResume
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnSystemResume()
{
	static UFunction* uFnOnSystemResume = nullptr;

	if (!uFnOnSystemResume)
	{
		uFnOnSystemResume = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemResume");
	}

	UOnlineSubsystemSteamworks_execOnSystemResume_Params OnSystemResume_Params;
	memset(&OnSystemResume_Params, 0, sizeof(OnSystemResume_Params));

	this->ProcessEvent(uFnOnSystemResume, &OnSystemResume_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnServiceStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnServiceStatusChange(bool bIsConnected)
{
	static UFunction* uFnOnServiceStatusChange = nullptr;

	if (!uFnOnServiceStatusChange)
	{
		uFnOnServiceStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnServiceStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnServiceStatusChange_Params OnServiceStatusChange_Params;
	memset(&OnServiceStatusChange_Params, 0, sizeof(OnServiceStatusChange_Params));
	OnServiceStatusChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnServiceStatusChange, &OnServiceStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentPurchased
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)

void UOnlineSubsystemSteamworks::OnContentPurchased(const struct FPlatformUserId& UserId)
{
	static UFunction* uFnOnContentPurchased = nullptr;

	if (!uFnOnContentPurchased)
	{
		uFnOnContentPurchased = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentPurchased");
	}

	UOnlineSubsystemSteamworks_execOnContentPurchased_Params OnContentPurchased_Params;
	memset(&OnContentPurchased_Params, 0, sizeof(OnContentPurchased_Params));
	memcpy_s(&OnContentPurchased_Params.UserId, sizeof(OnContentPurchased_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnOnContentPurchased, &OnContentPurchased_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPatchCheckComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// bool                           bPatchAvailable                (CPF_Parm)
// const struct FQWord&           PlatformError                  (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPatchCheckComplete(bool bWasSuccessful, bool bPatchAvailable, const struct FQWord& PlatformError)
{
	static UFunction* uFnOnPatchCheckComplete = nullptr;

	if (!uFnOnPatchCheckComplete)
	{
		uFnOnPatchCheckComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPatchCheckComplete");
	}

	UOnlineSubsystemSteamworks_execOnPatchCheckComplete_Params OnPatchCheckComplete_Params;
	memset(&OnPatchCheckComplete_Params, 0, sizeof(OnPatchCheckComplete_Params));
	OnPatchCheckComplete_Params.bWasSuccessful = bWasSuccessful;
	OnPatchCheckComplete_Params.bPatchAvailable = bPatchAvailable;
	memcpy_s(&OnPatchCheckComplete_Params.PlatformError, sizeof(OnPatchCheckComplete_Params.PlatformError), &PlatformError, sizeof(PlatformError));

	this->ProcessEvent(uFnOnPatchCheckComplete, &OnPatchCheckComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConsumeEntitlementComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)
// const class FString&           EntitlementId                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnConsumeEntitlementComplete(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result, const class FString& EntitlementId)
{
	static UFunction* uFnOnConsumeEntitlementComplete = nullptr;

	if (!uFnOnConsumeEntitlementComplete)
	{
		uFnOnConsumeEntitlementComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConsumeEntitlementComplete");
	}

	UOnlineSubsystemSteamworks_execOnConsumeEntitlementComplete_Params OnConsumeEntitlementComplete_Params;
	memset(&OnConsumeEntitlementComplete_Params, 0, sizeof(OnConsumeEntitlementComplete_Params));
	memcpy_s(&OnConsumeEntitlementComplete_Params.UserId, sizeof(OnConsumeEntitlementComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnConsumeEntitlementComplete_Params.Result, sizeof(OnConsumeEntitlementComplete_Params.Result), &Result, sizeof(Result));
	memcpy_s(&OnConsumeEntitlementComplete_Params.EntitlementId, sizeof(OnConsumeEntitlementComplete_Params.EntitlementId), &EntitlementId, sizeof(EntitlementId));

	this->ProcessEvent(uFnOnConsumeEntitlementComplete, &OnConsumeEntitlementComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadEntitlementsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadEntitlementsComplete(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result)
{
	static UFunction* uFnOnReadEntitlementsComplete = nullptr;

	if (!uFnOnReadEntitlementsComplete)
	{
		uFnOnReadEntitlementsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadEntitlementsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadEntitlementsComplete_Params OnReadEntitlementsComplete_Params;
	memset(&OnReadEntitlementsComplete_Params, 0, sizeof(OnReadEntitlementsComplete_Params));
	memcpy_s(&OnReadEntitlementsComplete_Params.UserId, sizeof(OnReadEntitlementsComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnReadEntitlementsComplete_Params.Result, sizeof(OnReadEntitlementsComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnReadEntitlementsComplete, &OnReadEntitlementsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostAddress
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[23742])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FUniqueNetId&     NetId                          (CPF_Const | CPF_Parm)
// class FString                  HostAddress                    (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetHostAddress(const struct FUniqueNetId& NetId, class FString& HostAddress)
{
	static UFunction* uFnGetHostAddress = nullptr;

	if (!uFnGetHostAddress)
	{
		uFnGetHostAddress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostAddress");
	}

	UOnlineSubsystemSteamworks_execGetHostAddress_Params GetHostAddress_Params;
	memset(&GetHostAddress_Params, 0, sizeof(GetHostAddress_Params));
	memcpy_s(&GetHostAddress_Params.NetId, sizeof(GetHostAddress_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&GetHostAddress_Params.HostAddress, sizeof(GetHostAddress_Params.HostAddress), &HostAddress, sizeof(HostAddress));

	uFnGetHostAddress->iNative = 0;
	uFnGetHostAddress->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetHostAddress, &GetHostAddress_Params, nullptr);
	uFnGetHostAddress->FunctionFlags |= 0x400;
	uFnGetHostAddress->iNative = 23742;

	memcpy_s(&HostAddress, sizeof(HostAddress), &GetHostAddress_Params.HostAddress, sizeof(GetHostAddress_Params.HostAddress));

	return GetHostAddress_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlatformUserId
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[23863])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FUniqueNetId&     UID                            (CPF_Const | CPF_Parm)
// struct FPlatformUserId         UserId                         (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::GetPlatformUserId(const struct FUniqueNetId& UID, struct FPlatformUserId& UserId)
{
	static UFunction* uFnGetPlatformUserId = nullptr;

	if (!uFnGetPlatformUserId)
	{
		uFnGetPlatformUserId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlatformUserId");
	}

	UOnlineSubsystemSteamworks_execGetPlatformUserId_Params GetPlatformUserId_Params;
	memset(&GetPlatformUserId_Params, 0, sizeof(GetPlatformUserId_Params));
	memcpy_s(&GetPlatformUserId_Params.UID, sizeof(GetPlatformUserId_Params.UID), &UID, sizeof(UID));
	memcpy_s(&GetPlatformUserId_Params.UserId, sizeof(GetPlatformUserId_Params.UserId), &UserId, sizeof(UserId));

	uFnGetPlatformUserId->iNative = 0;
	uFnGetPlatformUserId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetPlatformUserId, &GetPlatformUserId_Params, nullptr);
	uFnGetPlatformUserId->FunctionFlags |= 0x400;
	uFnGetPlatformUserId->iNative = 23863;

	memcpy_s(&UserId, sizeof(UserId), &GetPlatformUserId_Params.UserId, sizeof(GetPlatformUserId_Params.UserId));

	return GetPlatformUserId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[24010])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(const struct FPlatformUserId& UserId, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnGetUniquePlayerId = nullptr;

	if (!uFnGetUniquePlayerId)
	{
		uFnGetUniquePlayerId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId");
	}

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params GetUniquePlayerId_Params;
	memset(&GetUniquePlayerId_Params, 0, sizeof(GetUniquePlayerId_Params));
	memcpy_s(&GetUniquePlayerId_Params.UserId, sizeof(GetUniquePlayerId_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnGetUniquePlayerId->iNative = 0;
	uFnGetUniquePlayerId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetUniquePlayerId, &GetUniquePlayerId_Params, nullptr);
	uFnGetUniquePlayerId->FunctionFlags |= 0x400;
	uFnGetUniquePlayerId->iNative = 24010;

	memcpy_s(&PlayerID, sizeof(PlayerID), &GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID));

	return GetUniquePlayerId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCheckMarketplaceContentList
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)
// bool                           bMarketplaceContentListAvailable (CPF_Parm)

void UOnlineSubsystemSteamworks::OnCheckMarketplaceContentList(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result, bool bMarketplaceContentListAvailable)
{
	static UFunction* uFnOnCheckMarketplaceContentList = nullptr;

	if (!uFnOnCheckMarketplaceContentList)
	{
		uFnOnCheckMarketplaceContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCheckMarketplaceContentList");
	}

	UOnlineSubsystemSteamworks_execOnCheckMarketplaceContentList_Params OnCheckMarketplaceContentList_Params;
	memset(&OnCheckMarketplaceContentList_Params, 0, sizeof(OnCheckMarketplaceContentList_Params));
	memcpy_s(&OnCheckMarketplaceContentList_Params.UserId, sizeof(OnCheckMarketplaceContentList_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnCheckMarketplaceContentList_Params.Result, sizeof(OnCheckMarketplaceContentList_Params.Result), &Result, sizeof(Result));
	OnCheckMarketplaceContentList_Params.bMarketplaceContentListAvailable = bMarketplaceContentListAvailable;

	this->ProcessEvent(uFnOnCheckMarketplaceContentList, &OnCheckMarketplaceContentList_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadMarketplaceContentListComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadMarketplaceContentListComplete(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result)
{
	static UFunction* uFnOnReadMarketplaceContentListComplete = nullptr;

	if (!uFnOnReadMarketplaceContentListComplete)
	{
		uFnOnReadMarketplaceContentListComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadMarketplaceContentListComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadMarketplaceContentListComplete_Params OnReadMarketplaceContentListComplete_Params;
	memset(&OnReadMarketplaceContentListComplete_Params, 0, sizeof(OnReadMarketplaceContentListComplete_Params));
	memcpy_s(&OnReadMarketplaceContentListComplete_Params.UserId, sizeof(OnReadMarketplaceContentListComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnReadMarketplaceContentListComplete_Params.Result, sizeof(OnReadMarketplaceContentListComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnReadMarketplaceContentListComplete, &OnReadMarketplaceContentListComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadContentComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadContentComplete = nullptr;

	if (!uFnOnReadContentComplete)
	{
		uFnOnReadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadContentComplete_Params OnReadContentComplete_Params;
	memset(&OnReadContentComplete_Params, 0, sizeof(OnReadContentComplete_Params));
	OnReadContentComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadContentComplete, &OnReadContentComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnContentChange()
{
	static UFunction* uFnOnContentChange = nullptr;

	if (!uFnOnContentChange)
	{
		uFnOnContentChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange");
	}

	UOnlineSubsystemSteamworks_execOnContentChange_Params OnContentChange_Params;
	memset(&OnContentChange_Params, 0, sizeof(OnContentChange_Params));

	this->ProcessEvent(uFnOnContentChange, &OnContentChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSteamworksSessionState
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[37117])
// Parameter Info:

void UOnlineSubsystemSteamworks::DumpSteamworksSessionState()
{
	static UFunction* uFnDumpSteamworksSessionState = nullptr;

	if (!uFnDumpSteamworksSessionState)
	{
		uFnDumpSteamworksSessionState = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSteamworksSessionState");
	}

	UOnlineSubsystemSteamworks_execDumpSteamworksSessionState_Params DumpSteamworksSessionState_Params;
	memset(&DumpSteamworksSessionState_Params, 0, sizeof(DumpSteamworksSessionState_Params));

	uFnDumpSteamworksSessionState->iNative = 0;
	uFnDumpSteamworksSessionState->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDumpSteamworksSessionState, &DumpSteamworksSessionState_Params, nullptr);
	uFnDumpSteamworksSessionState->FunctionFlags |= 0x400;
	uFnDumpSteamworksSessionState->iNative = 37117;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSessionState
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::DumpSessionState()
{
	static UFunction* uFnDumpSessionState = nullptr;

	if (!uFnDumpSessionState)
	{
		uFnDumpSessionState = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSessionState");
	}

	UOnlineSubsystemSteamworks_execDumpSessionState_Params DumpSessionState_Params;
	memset(&DumpSessionState_Params, 0, sizeof(DumpSessionState_Params));

	this->ProcessEvent(uFnDumpSessionState, &DumpSessionState_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAvatarAwardComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnlockAvatarAwardComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnUnlockAvatarAwardComplete = nullptr;

	if (!uFnOnUnlockAvatarAwardComplete)
	{
		uFnOnUnlockAvatarAwardComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAvatarAwardComplete");
	}

	UOnlineSubsystemSteamworks_execOnUnlockAvatarAwardComplete_Params OnUnlockAvatarAwardComplete_Params;
	memset(&OnUnlockAvatarAwardComplete_Params, 0, sizeof(OnUnlockAvatarAwardComplete_Params));
	OnUnlockAvatarAwardComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnlockAvatarAwardComplete, &OnUnlockAvatarAwardComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSessionId
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[23921])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FName&            SessionName                    (CPF_Parm)
// class FString                  SessionId                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetSessionId(const struct FName& SessionName, class FString& SessionId)
{
	static UFunction* uFnGetSessionId = nullptr;

	if (!uFnGetSessionId)
	{
		uFnGetSessionId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSessionId");
	}

	UOnlineSubsystemSteamworks_execGetSessionId_Params GetSessionId_Params;
	memset(&GetSessionId_Params, 0, sizeof(GetSessionId_Params));
	memcpy_s(&GetSessionId_Params.SessionName, sizeof(GetSessionId_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&GetSessionId_Params.SessionId, sizeof(GetSessionId_Params.SessionId), &SessionId, sizeof(SessionId));

	uFnGetSessionId->iNative = 0;
	uFnGetSessionId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetSessionId, &GetSessionId_Params, nullptr);
	uFnGetSessionId->FunctionFlags |= 0x400;
	uFnGetSessionId->iNative = 23921;

	memcpy_s(&SessionId, sizeof(SessionId), &GetSessionId_Params.SessionId, sizeof(GetSessionId_Params.SessionId));

	return GetSessionId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[5500])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// bool                           bResetAchievements             (CPF_Parm)

bool UOnlineSubsystemSteamworks::ResetStats(bool bResetAchievements)
{
	static UFunction* uFnResetStats = nullptr;

	if (!uFnResetStats)
	{
		uFnResetStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats");
	}

	UOnlineSubsystemSteamworks_execResetStats_Params ResetStats_Params;
	memset(&ResetStats_Params, 0, sizeof(ResetStats_Params));
	ResetStats_Params.bResetAchievements = bResetAchievements;

	uFnResetStats->iNative = 0;
	uFnResetStats->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResetStats, &ResetStats_Params, nullptr);
	uFnResetStats->FunctionFlags |= 0x400;
	uFnResetStats->iNative = 5500;

	return ResetStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateFilesOnRemoteStorage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[37120])
// Parameter Info:
// class TArray<class FString>    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class TArray<class FString> UOnlineSubsystemSteamworks::EnumerateFilesOnRemoteStorage()
{
	static UFunction* uFnEnumerateFilesOnRemoteStorage = nullptr;

	if (!uFnEnumerateFilesOnRemoteStorage)
	{
		uFnEnumerateFilesOnRemoteStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateFilesOnRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execEnumerateFilesOnRemoteStorage_Params EnumerateFilesOnRemoteStorage_Params;
	memset(&EnumerateFilesOnRemoteStorage_Params, 0, sizeof(EnumerateFilesOnRemoteStorage_Params));

	uFnEnumerateFilesOnRemoteStorage->iNative = 0;
	uFnEnumerateFilesOnRemoteStorage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnumerateFilesOnRemoteStorage, &EnumerateFilesOnRemoteStorage_Params, nullptr);
	uFnEnumerateFilesOnRemoteStorage->FunctionFlags |= 0x400;
	uFnEnumerateFilesOnRemoteStorage->iNative = 37120;

	return EnumerateFilesOnRemoteStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteFileFromRemoteStorage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[37115])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::DeleteFileFromRemoteStorageW(const class FString& Filename)
{
	static UFunction* uFnDeleteFileFromRemoteStorageW = nullptr;

	if (!uFnDeleteFileFromRemoteStorageW)
	{
		uFnDeleteFileFromRemoteStorageW = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteFileFromRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execDeleteFileFromRemoteStorageW_Params DeleteFileFromRemoteStorageW_Params;
	memset(&DeleteFileFromRemoteStorageW_Params, 0, sizeof(DeleteFileFromRemoteStorageW_Params));
	memcpy_s(&DeleteFileFromRemoteStorageW_Params.Filename, sizeof(DeleteFileFromRemoteStorageW_Params.Filename), &Filename, sizeof(Filename));

	uFnDeleteFileFromRemoteStorageW->iNative = 0;
	uFnDeleteFileFromRemoteStorageW->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDeleteFileFromRemoteStorageW, &DeleteFileFromRemoteStorageW_Params, nullptr);
	uFnDeleteFileFromRemoteStorageW->FunctionFlags |= 0x400;
	uFnDeleteFileFromRemoteStorageW->iNative = 37115;

	return DeleteFileFromRemoteStorageW_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBytesFromRemoteStorage
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[37193])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          Data                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadBytesFromRemoteStorage(const class FString& Filename, class TArray<uint8_t>& Data)
{
	static UFunction* uFnReadBytesFromRemoteStorage = nullptr;

	if (!uFnReadBytesFromRemoteStorage)
	{
		uFnReadBytesFromRemoteStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBytesFromRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execReadBytesFromRemoteStorage_Params ReadBytesFromRemoteStorage_Params;
	memset(&ReadBytesFromRemoteStorage_Params, 0, sizeof(ReadBytesFromRemoteStorage_Params));
	memcpy_s(&ReadBytesFromRemoteStorage_Params.Filename, sizeof(ReadBytesFromRemoteStorage_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&ReadBytesFromRemoteStorage_Params.Data, sizeof(ReadBytesFromRemoteStorage_Params.Data), &Data, sizeof(Data));

	uFnReadBytesFromRemoteStorage->iNative = 0;
	uFnReadBytesFromRemoteStorage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadBytesFromRemoteStorage, &ReadBytesFromRemoteStorage_Params, nullptr);
	uFnReadBytesFromRemoteStorage->FunctionFlags |= 0x400;
	uFnReadBytesFromRemoteStorage->iNative = 37193;

	memcpy_s(&Data, sizeof(Data), &ReadBytesFromRemoteStorage_Params.Data, sizeof(ReadBytesFromRemoteStorage_Params.Data));

	return ReadBytesFromRemoteStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStringFromRemoteStorage
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[37200])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Data                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadStringFromRemoteStorage(const class FString& Filename, class FString& Data)
{
	static UFunction* uFnReadStringFromRemoteStorage = nullptr;

	if (!uFnReadStringFromRemoteStorage)
	{
		uFnReadStringFromRemoteStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStringFromRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execReadStringFromRemoteStorage_Params ReadStringFromRemoteStorage_Params;
	memset(&ReadStringFromRemoteStorage_Params, 0, sizeof(ReadStringFromRemoteStorage_Params));
	memcpy_s(&ReadStringFromRemoteStorage_Params.Filename, sizeof(ReadStringFromRemoteStorage_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&ReadStringFromRemoteStorage_Params.Data, sizeof(ReadStringFromRemoteStorage_Params.Data), &Data, sizeof(Data));

	uFnReadStringFromRemoteStorage->iNative = 0;
	uFnReadStringFromRemoteStorage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadStringFromRemoteStorage, &ReadStringFromRemoteStorage_Params, nullptr);
	uFnReadStringFromRemoteStorage->FunctionFlags |= 0x400;
	uFnReadStringFromRemoteStorage->iNative = 37200;

	memcpy_s(&Data, sizeof(Data), &ReadStringFromRemoteStorage_Params.Data, sizeof(ReadStringFromRemoteStorage_Params.Data));

	return ReadStringFromRemoteStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteBytesToRemoteStorage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[37228])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Filename                       (CPF_Parm | CPF_NeedCtorLink)
// const class TArray<uint8_t>&   Data                           (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteBytesToRemoteStorage(const class FString& Filename, const class TArray<uint8_t>& Data)
{
	static UFunction* uFnWriteBytesToRemoteStorage = nullptr;

	if (!uFnWriteBytesToRemoteStorage)
	{
		uFnWriteBytesToRemoteStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteBytesToRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execWriteBytesToRemoteStorage_Params WriteBytesToRemoteStorage_Params;
	memset(&WriteBytesToRemoteStorage_Params, 0, sizeof(WriteBytesToRemoteStorage_Params));
	memcpy_s(&WriteBytesToRemoteStorage_Params.Filename, sizeof(WriteBytesToRemoteStorage_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteBytesToRemoteStorage_Params.Data, sizeof(WriteBytesToRemoteStorage_Params.Data), &Data, sizeof(Data));

	uFnWriteBytesToRemoteStorage->iNative = 0;
	uFnWriteBytesToRemoteStorage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteBytesToRemoteStorage, &WriteBytesToRemoteStorage_Params, nullptr);
	uFnWriteBytesToRemoteStorage->FunctionFlags |= 0x400;
	uFnWriteBytesToRemoteStorage->iNative = 37228;

	return WriteBytesToRemoteStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteStringToRemoteStorage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[37229])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Filename                       (CPF_Parm | CPF_NeedCtorLink)
// const class FString&           Data                           (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteStringToRemoteStorage(const class FString& Filename, const class FString& Data)
{
	static UFunction* uFnWriteStringToRemoteStorage = nullptr;

	if (!uFnWriteStringToRemoteStorage)
	{
		uFnWriteStringToRemoteStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteStringToRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execWriteStringToRemoteStorage_Params WriteStringToRemoteStorage_Params;
	memset(&WriteStringToRemoteStorage_Params, 0, sizeof(WriteStringToRemoteStorage_Params));
	memcpy_s(&WriteStringToRemoteStorage_Params.Filename, sizeof(WriteStringToRemoteStorage_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteStringToRemoteStorage_Params.Data, sizeof(WriteStringToRemoteStorage_Params.Data), &Data, sizeof(Data));

	uFnWriteStringToRemoteStorage->iNative = 0;
	uFnWriteStringToRemoteStorage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteStringToRemoteStorage, &WriteStringToRemoteStorage_Params, nullptr);
	uFnWriteStringToRemoteStorage->FunctionFlags |= 0x400;
	uFnWriteStringToRemoteStorage->iNative = 37229;

	return WriteStringToRemoteStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerDisplayDataComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// const class TArray<struct FOnlinePlayerDisplayData>& DisplayDataList                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadPlayerDisplayDataComplete(bool bWasSuccessful, const class TArray<struct FOnlinePlayerDisplayData>& DisplayDataList)
{
	static UFunction* uFnOnReadPlayerDisplayDataComplete = nullptr;

	if (!uFnOnReadPlayerDisplayDataComplete)
	{
		uFnOnReadPlayerDisplayDataComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerDisplayDataComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerDisplayDataComplete_Params OnReadPlayerDisplayDataComplete_Params;
	memset(&OnReadPlayerDisplayDataComplete_Params, 0, sizeof(OnReadPlayerDisplayDataComplete_Params));
	OnReadPlayerDisplayDataComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadPlayerDisplayDataComplete_Params.DisplayDataList, sizeof(OnReadPlayerDisplayDataComplete_Params.DisplayDataList), &DisplayDataList, sizeof(DisplayDataList));

	this->ProcessEvent(uFnOnReadPlayerDisplayDataComplete, &OnReadPlayerDisplayDataComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileImageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FUniqueNetId&     PlayerID                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)
// class UTexture2D*              ProfileImage                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadProfileImageComplete(const struct FUniqueNetId& PlayerID, bool bWasSuccessful, class UTexture2D* ProfileImage)
{
	static UFunction* uFnOnReadProfileImageComplete = nullptr;

	if (!uFnOnReadProfileImageComplete)
	{
		uFnOnReadProfileImageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileImageComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadProfileImageComplete_Params OnReadProfileImageComplete_Params;
	memset(&OnReadProfileImageComplete_Params, 0, sizeof(OnReadProfileImageComplete_Params));
	memcpy_s(&OnReadProfileImageComplete_Params.PlayerID, sizeof(OnReadProfileImageComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnReadProfileImageComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadProfileImageComplete_Params.ProfileImage, sizeof(OnReadProfileImageComplete_Params.ProfileImage), &ProfileImage, sizeof(ProfileImage));

	this->ProcessEvent(uFnOnReadProfileImageComplete, &OnReadProfileImageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetPlatformTicketComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)
// const class FString&           Ticket                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnGetPlatformTicketComplete(const struct FPlatformUserId& UserId, bool bWasSuccessful, const class FString& Ticket)
{
	static UFunction* uFnOnGetPlatformTicketComplete = nullptr;

	if (!uFnOnGetPlatformTicketComplete)
	{
		uFnOnGetPlatformTicketComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetPlatformTicketComplete");
	}

	UOnlineSubsystemSteamworks_execOnGetPlatformTicketComplete_Params OnGetPlatformTicketComplete_Params;
	memset(&OnGetPlatformTicketComplete_Params, 0, sizeof(OnGetPlatformTicketComplete_Params));
	memcpy_s(&OnGetPlatformTicketComplete_Params.UserId, sizeof(OnGetPlatformTicketComplete_Params.UserId), &UserId, sizeof(UserId));
	OnGetPlatformTicketComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnGetPlatformTicketComplete_Params.Ticket, sizeof(OnGetPlatformTicketComplete_Params.Ticket), &Ticket, sizeof(Ticket));

	this->ProcessEvent(uFnOnGetPlatformTicketComplete, &OnGetPlatformTicketComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete()
{
	static UFunction* uFnOnReadAchievementsComplete = nullptr;

	if (!uFnOnReadAchievementsComplete)
	{
		uFnOnReadAchievementsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params OnReadAchievementsComplete_Params;
	memset(&OnReadAchievementsComplete_Params, 0, sizeof(OnReadAchievementsComplete_Params));

	this->ProcessEvent(uFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowMembershipMarketplaceUIComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// EOnlineFeature                 Feature                        (CPF_Parm)
// EFeaturePrivilegeLevel         Level                          (CPF_Parm)

void UOnlineSubsystemSteamworks::OnShowMembershipMarketplaceUIComplete(const struct FPlatformUserId& UserId, EOnlineFeature Feature, EFeaturePrivilegeLevel Level)
{
	static UFunction* uFnOnShowMembershipMarketplaceUIComplete = nullptr;

	if (!uFnOnShowMembershipMarketplaceUIComplete)
	{
		uFnOnShowMembershipMarketplaceUIComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowMembershipMarketplaceUIComplete");
	}

	UOnlineSubsystemSteamworks_execOnShowMembershipMarketplaceUIComplete_Params OnShowMembershipMarketplaceUIComplete_Params;
	memset(&OnShowMembershipMarketplaceUIComplete_Params, 0, sizeof(OnShowMembershipMarketplaceUIComplete_Params));
	memcpy_s(&OnShowMembershipMarketplaceUIComplete_Params.UserId, sizeof(OnShowMembershipMarketplaceUIComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnShowMembershipMarketplaceUIComplete_Params.Feature, sizeof(OnShowMembershipMarketplaceUIComplete_Params.Feature), &Feature, sizeof(Feature));
	memcpy_s(&OnShowMembershipMarketplaceUIComplete_Params.Level, sizeof(OnShowMembershipMarketplaceUIComplete_Params.Level), &Level, sizeof(Level));

	this->ProcessEvent(uFnOnShowMembershipMarketplaceUIComplete, &OnShowMembershipMarketplaceUIComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// const class FString&           InviterName                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReceivedGameInvite(const struct FPlatformUserId& UserId, const class FString& InviterName)
{
	static UFunction* uFnOnReceivedGameInvite = nullptr;

	if (!uFnOnReceivedGameInvite)
	{
		uFnOnReceivedGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite");
	}

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params OnReceivedGameInvite_Params;
	memset(&OnReceivedGameInvite_Params, 0, sizeof(OnReceivedGameInvite_Params));
	memcpy_s(&OnReceivedGameInvite_Params.UserId, sizeof(OnReceivedGameInvite_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnReceivedGameInvite_Params.InviterName, sizeof(OnReceivedGameInvite_Params.InviterName), &InviterName, sizeof(InviterName));

	this->ProcessEvent(uFnOnReceivedGameInvite, &OnReceivedGameInvite_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSentGameInvite
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)

void UOnlineSubsystemSteamworks::OnSentGameInvite(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result)
{
	static UFunction* uFnOnSentGameInvite = nullptr;

	if (!uFnOnSentGameInvite)
	{
		uFnOnSentGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSentGameInvite");
	}

	UOnlineSubsystemSteamworks_execOnSentGameInvite_Params OnSentGameInvite_Params;
	memset(&OnSentGameInvite_Params, 0, sizeof(OnSentGameInvite_Params));
	memcpy_s(&OnSentGameInvite_Params.UserId, sizeof(OnSentGameInvite_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnSentGameInvite_Params.Result, sizeof(OnSentGameInvite_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnSentGameInvite, &OnSentGameInvite_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// bool                           bWasCancelled                  (CPF_Parm)
// const class FString&           KeyboardResults                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(bool bWasSuccessful, bool bWasCancelled, const class FString& KeyboardResults)
{
	static UFunction* uFnOnKeyboardInputComplete = nullptr;

	if (!uFnOnKeyboardInputComplete)
	{
		uFnOnKeyboardInputComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete");
	}

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params OnKeyboardInputComplete_Params;
	memset(&OnKeyboardInputComplete_Params, 0, sizeof(OnKeyboardInputComplete_Params));
	OnKeyboardInputComplete_Params.bWasSuccessful = bWasSuccessful;
	OnKeyboardInputComplete_Params.bWasCancelled = bWasCancelled;
	memcpy_s(&OnKeyboardInputComplete_Params.KeyboardResults, sizeof(OnKeyboardInputComplete_Params.KeyboardResults), &KeyboardResults, sizeof(KeyboardResults));

	this->ProcessEvent(uFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// bool                           bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerChange(const struct FPlatformUserId& UserId, bool bIsConnected)
{
	static UFunction* uFnOnControllerChange = nullptr;

	if (!uFnOnControllerChange)
	{
		uFnOnControllerChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange");
	}

	UOnlineSubsystemSteamworks_execOnControllerChange_Params OnControllerChange_Params;
	memset(&OnControllerChange_Params, 0, sizeof(OnControllerChange_Params));
	memcpy_s(&OnControllerChange_Params.UserId, sizeof(OnControllerChange_Params.UserId), &UserId, sizeof(UserId));
	OnControllerChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChange, &OnControllerChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsOpening                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnExternalUIChange(bool bIsOpening)
{
	static UFunction* uFnOnExternalUIChange = nullptr;

	if (!uFnOnExternalUIChange)
	{
		uFnOnExternalUIChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange");
	}

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Params OnExternalUIChange_Params;
	memset(&OnExternalUIChange_Params, 0, sizeof(OnExternalUIChange_Params));
	OnExternalUIChange_Params.bIsOpening = bIsOpening;

	this->ProcessEvent(uFnOnExternalUIChange, &OnExternalUIChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLinkStatusChange(bool bIsConnected)
{
	static UFunction* uFnOnLinkStatusChange = nullptr;

	if (!uFnOnLinkStatusChange)
	{
		uFnOnLinkStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params OnLinkStatusChange_Params;
	memset(&OnLinkStatusChange_Params, 0, sizeof(OnLinkStatusChange_Params));
	OnLinkStatusChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnLinkStatusChange, &OnLinkStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromUserId
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// const struct FPlatformUserId&  UserId                         (CPF_Parm)

class FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromUserId(const struct FPlatformUserId& UserId)
{
	static UFunction* uFnGetPlayerNicknameFromUserId = nullptr;

	if (!uFnGetPlayerNicknameFromUserId)
	{
		uFnGetPlayerNicknameFromUserId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromUserId");
	}

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromUserId_Params GetPlayerNicknameFromUserId_Params;
	memset(&GetPlayerNicknameFromUserId_Params, 0, sizeof(GetPlayerNicknameFromUserId_Params));
	memcpy_s(&GetPlayerNicknameFromUserId_Params.UserId, sizeof(GetPlayerNicknameFromUserId_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnGetPlayerNicknameFromUserId, &GetPlayerNicknameFromUserId_Params, nullptr);

	return GetPlayerNicknameFromUserId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FUniqueNetId&     Player                         (CPF_Parm)
// bool                           bIsTalking                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking)
{
	static UFunction* uFnOnPlayerTalkingStateChange = nullptr;

	if (!uFnOnPlayerTalkingStateChange)
	{
		uFnOnPlayerTalkingStateChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange");
	}

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params OnPlayerTalkingStateChange_Params;
	memset(&OnPlayerTalkingStateChange_Params, 0, sizeof(OnPlayerTalkingStateChange_Params));
	memcpy_s(&OnPlayerTalkingStateChange_Params.Player, sizeof(OnPlayerTalkingStateChange_Params.Player), &Player, sizeof(Player));
	OnPlayerTalkingStateChange_Params.bIsTalking = bIsTalking;

	this->ProcessEvent(uFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)
// int32_t                        NumFriendsRead                 (CPF_Parm)
// float                          DelayIntervalInSeconds         (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result, int32_t NumFriendsRead, float DelayIntervalInSeconds)
{
	static UFunction* uFnOnReadFriendsComplete = nullptr;

	if (!uFnOnReadFriendsComplete)
	{
		uFnOnReadFriendsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params OnReadFriendsComplete_Params;
	memset(&OnReadFriendsComplete_Params, 0, sizeof(OnReadFriendsComplete_Params));
	memcpy_s(&OnReadFriendsComplete_Params.UserId, sizeof(OnReadFriendsComplete_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnReadFriendsComplete_Params.Result, sizeof(OnReadFriendsComplete_Params.Result), &Result, sizeof(Result));
	memcpy_s(&OnReadFriendsComplete_Params.NumFriendsRead, sizeof(OnReadFriendsComplete_Params.NumFriendsRead), &NumFriendsRead, sizeof(NumFriendsRead));
	memcpy_s(&OnReadFriendsComplete_Params.DelayIntervalInSeconds, sizeof(OnReadFriendsComplete_Params.DelayIntervalInSeconds), &DelayIntervalInSeconds, sizeof(DelayIntervalInSeconds));

	this->ProcessEvent(uFnOnReadFriendsComplete, &OnReadFriendsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(const struct FPlatformUserId& UserId, bool bWasSuccessful)
{
	static UFunction* uFnOnWritePlayerStorageComplete = nullptr;

	if (!uFnOnWritePlayerStorageComplete)
	{
		uFnOnWritePlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete");
	}

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params OnWritePlayerStorageComplete_Params;
	memset(&OnWritePlayerStorageComplete_Params, 0, sizeof(OnWritePlayerStorageComplete_Params));
	memcpy_s(&OnWritePlayerStorageComplete_Params.UserId, sizeof(OnWritePlayerStorageComplete_Params.UserId), &UserId, sizeof(UserId));
	OnWritePlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(const struct FPlatformUserId& UserId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageComplete = nullptr;

	if (!uFnOnReadPlayerStorageComplete)
	{
		uFnOnReadPlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params OnReadPlayerStorageComplete_Params;
	memset(&OnReadPlayerStorageComplete_Params, 0, sizeof(OnReadPlayerStorageComplete_Params));
	memcpy_s(&OnReadPlayerStorageComplete_Params.UserId, sizeof(OnReadPlayerStorageComplete_Params.UserId), &UserId, sizeof(UserId));
	OnReadPlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// ELoginStatus                   PreviousStatus                 (CPF_Parm)
// ELoginStatus                   NewStatus                      (CPF_Parm)
// const struct FUniqueNetId&     PreviousId                     (CPF_Parm)
// const struct FUniqueNetId&     NewId                          (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginStatusChange(const struct FPlatformUserId& UserId, ELoginStatus PreviousStatus, ELoginStatus NewStatus, const struct FUniqueNetId& PreviousId, const struct FUniqueNetId& NewId)
{
	static UFunction* uFnOnLoginStatusChange = nullptr;

	if (!uFnOnLoginStatusChange)
	{
		uFnOnLoginStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params OnLoginStatusChange_Params;
	memset(&OnLoginStatusChange_Params, 0, sizeof(OnLoginStatusChange_Params));
	memcpy_s(&OnLoginStatusChange_Params.UserId, sizeof(OnLoginStatusChange_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnLoginStatusChange_Params.PreviousStatus, sizeof(OnLoginStatusChange_Params.PreviousStatus), &PreviousStatus, sizeof(PreviousStatus));
	memcpy_s(&OnLoginStatusChange_Params.NewStatus, sizeof(OnLoginStatusChange_Params.NewStatus), &NewStatus, sizeof(NewStatus));
	memcpy_s(&OnLoginStatusChange_Params.PreviousId, sizeof(OnLoginStatusChange_Params.PreviousId), &PreviousId, sizeof(PreviousId));
	memcpy_s(&OnLoginStatusChange_Params.NewId, sizeof(OnLoginStatusChange_Params.NewId), &NewId, sizeof(NewId));

	this->ProcessEvent(uFnOnLoginStatusChange, &OnLoginStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnOnlinePrivilegeChanged
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// EOnlineFeature                 Feature                        (CPF_Parm)
// EFeaturePrivilegeLevel         PrivilegeLevel                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnOnlinePrivilegeChanged(const struct FPlatformUserId& UserId, EOnlineFeature Feature, EFeaturePrivilegeLevel PrivilegeLevel)
{
	static UFunction* uFnOnOnlinePrivilegeChanged = nullptr;

	if (!uFnOnOnlinePrivilegeChanged)
	{
		uFnOnOnlinePrivilegeChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnOnlinePrivilegeChanged");
	}

	UOnlineSubsystemSteamworks_execOnOnlinePrivilegeChanged_Params OnOnlinePrivilegeChanged_Params;
	memset(&OnOnlinePrivilegeChanged_Params, 0, sizeof(OnOnlinePrivilegeChanged_Params));
	memcpy_s(&OnOnlinePrivilegeChanged_Params.UserId, sizeof(OnOnlinePrivilegeChanged_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnOnlinePrivilegeChanged_Params.Feature, sizeof(OnOnlinePrivilegeChanged_Params.Feature), &Feature, sizeof(Feature));
	memcpy_s(&OnOnlinePrivilegeChanged_Params.PrivilegeLevel, sizeof(OnOnlinePrivilegeChanged_Params.PrivilegeLevel), &PrivilegeLevel, sizeof(PrivilegeLevel));

	this->ProcessEvent(uFnOnOnlinePrivilegeChanged, &OnOnlinePrivilegeChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlinePrivilegesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadOnlinePrivilegesComplete(const struct FPlatformUserId& UserId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadOnlinePrivilegesComplete = nullptr;

	if (!uFnOnReadOnlinePrivilegesComplete)
	{
		uFnOnReadOnlinePrivilegesComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlinePrivilegesComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadOnlinePrivilegesComplete_Params OnReadOnlinePrivilegesComplete_Params;
	memset(&OnReadOnlinePrivilegesComplete_Params, 0, sizeof(OnReadOnlinePrivilegesComplete_Params));
	memcpy_s(&OnReadOnlinePrivilegesComplete_Params.UserId, sizeof(OnReadOnlinePrivilegesComplete_Params.UserId), &UserId, sizeof(UserId));
	OnReadOnlinePrivilegesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadOnlinePrivilegesComplete, &OnReadOnlinePrivilegesComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerDisplayDataChanged
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// const class FString&           DisplayName                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnPlayerDisplayDataChanged(const struct FPlatformUserId& UserId, const class FString& DisplayName)
{
	static UFunction* uFnOnPlayerDisplayDataChanged = nullptr;

	if (!uFnOnPlayerDisplayDataChanged)
	{
		uFnOnPlayerDisplayDataChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerDisplayDataChanged");
	}

	UOnlineSubsystemSteamworks_execOnPlayerDisplayDataChanged_Params OnPlayerDisplayDataChanged_Params;
	memset(&OnPlayerDisplayDataChanged_Params, 0, sizeof(OnPlayerDisplayDataChanged_Params));
	memcpy_s(&OnPlayerDisplayDataChanged_Params.UserId, sizeof(OnPlayerDisplayDataChanged_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnPlayerDisplayDataChanged_Params.DisplayName, sizeof(OnPlayerDisplayDataChanged_Params.DisplayName), &DisplayName, sizeof(DisplayName));

	this->ProcessEvent(uFnOnPlayerDisplayDataChanged, &OnPlayerDisplayDataChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowPlatformUserUIComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// const struct FPlatformUserId&  ResultId                       (CPF_Parm)

void UOnlineSubsystemSteamworks::OnShowPlatformUserUIComplete(bool bWasSuccessful, const struct FPlatformUserId& ResultId)
{
	static UFunction* uFnOnShowPlatformUserUIComplete = nullptr;

	if (!uFnOnShowPlatformUserUIComplete)
	{
		uFnOnShowPlatformUserUIComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowPlatformUserUIComplete");
	}

	UOnlineSubsystemSteamworks_execOnShowPlatformUserUIComplete_Params OnShowPlatformUserUIComplete_Params;
	memset(&OnShowPlatformUserUIComplete_Params, 0, sizeof(OnShowPlatformUserUIComplete_Params));
	OnShowPlatformUserUIComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnShowPlatformUserUIComplete_Params.ResultId, sizeof(OnShowPlatformUserUIComplete_Params.ResultId), &ResultId, sizeof(ResultId));

	this->ProcessEvent(uFnOnShowPlatformUserUIComplete, &OnShowPlatformUserUIComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static UFunction* uFnOnFriendsChange = nullptr;

	if (!uFnOnFriendsChange)
	{
		uFnOnFriendsChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange");
	}

	UOnlineSubsystemSteamworks_execOnFriendsChange_Params OnFriendsChange_Params;
	memset(&OnFriendsChange_Params, 0, sizeof(OnFriendsChange_Params));

	this->ProcessEvent(uFnOnFriendsChange, &OnFriendsChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static UFunction* uFnOnMutingChange = nullptr;

	if (!uFnOnMutingChange)
	{
		uFnOnMutingChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange");
	}

	UOnlineSubsystemSteamworks_execOnMutingChange_Params OnMutingChange_Params;
	memset(&OnMutingChange_Params, 0, sizeof(OnMutingChange_Params));

	this->ProcessEvent(uFnOnMutingChange, &OnMutingChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.CancelTransactionRequestComplete
// [0x00420402] (FUNC_Defined | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[2571])
// Parameter Info:
// struct FSparkResult            RequestResult                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineTransactionInterfaceSteamworks::CancelTransactionRequestComplete(struct FSparkResult& RequestResult)
{
	static UFunction* uFnCancelTransactionRequestComplete = nullptr;

	if (!uFnCancelTransactionRequestComplete)
	{
		uFnCancelTransactionRequestComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.CancelTransactionRequestComplete");
	}

	UOnlineTransactionInterfaceSteamworks_execCancelTransactionRequestComplete_Params CancelTransactionRequestComplete_Params;
	memset(&CancelTransactionRequestComplete_Params, 0, sizeof(CancelTransactionRequestComplete_Params));
	memcpy_s(&CancelTransactionRequestComplete_Params.RequestResult, sizeof(CancelTransactionRequestComplete_Params.RequestResult), &RequestResult, sizeof(RequestResult));

	uFnCancelTransactionRequestComplete->iNative = 0;
	uFnCancelTransactionRequestComplete->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCancelTransactionRequestComplete, &CancelTransactionRequestComplete_Params, nullptr);
	uFnCancelTransactionRequestComplete->FunctionFlags |= 0x400;
	uFnCancelTransactionRequestComplete->iNative = 2571;

	memcpy_s(&RequestResult, sizeof(RequestResult), &CancelTransactionRequestComplete_Params.RequestResult, sizeof(CancelTransactionRequestComplete_Params.RequestResult));
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.FinalizeTransactionJobRequestComplete
// [0x00420402] (FUNC_Defined | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[2572])
// Parameter Info:
// struct FSparkResult            RequestResult                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineTransactionInterfaceSteamworks::FinalizeTransactionJobRequestComplete(struct FSparkResult& RequestResult)
{
	static UFunction* uFnFinalizeTransactionJobRequestComplete = nullptr;

	if (!uFnFinalizeTransactionJobRequestComplete)
	{
		uFnFinalizeTransactionJobRequestComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.FinalizeTransactionJobRequestComplete");
	}

	UOnlineTransactionInterfaceSteamworks_execFinalizeTransactionJobRequestComplete_Params FinalizeTransactionJobRequestComplete_Params;
	memset(&FinalizeTransactionJobRequestComplete_Params, 0, sizeof(FinalizeTransactionJobRequestComplete_Params));
	memcpy_s(&FinalizeTransactionJobRequestComplete_Params.RequestResult, sizeof(FinalizeTransactionJobRequestComplete_Params.RequestResult), &RequestResult, sizeof(RequestResult));

	uFnFinalizeTransactionJobRequestComplete->iNative = 0;
	uFnFinalizeTransactionJobRequestComplete->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFinalizeTransactionJobRequestComplete, &FinalizeTransactionJobRequestComplete_Params, nullptr);
	uFnFinalizeTransactionJobRequestComplete->FunctionFlags |= 0x400;
	uFnFinalizeTransactionJobRequestComplete->iNative = 2572;

	memcpy_s(&RequestResult, sizeof(RequestResult), &FinalizeTransactionJobRequestComplete_Params.RequestResult, sizeof(FinalizeTransactionJobRequestComplete_Params.RequestResult));
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.FinalizeTransactionRequestComplete
// [0x00420402] (FUNC_Defined | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[2573])
// Parameter Info:
// struct FSparkResult            RequestResult                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineTransactionInterfaceSteamworks::FinalizeTransactionRequestComplete(struct FSparkResult& RequestResult)
{
	static UFunction* uFnFinalizeTransactionRequestComplete = nullptr;

	if (!uFnFinalizeTransactionRequestComplete)
	{
		uFnFinalizeTransactionRequestComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.FinalizeTransactionRequestComplete");
	}

	UOnlineTransactionInterfaceSteamworks_execFinalizeTransactionRequestComplete_Params FinalizeTransactionRequestComplete_Params;
	memset(&FinalizeTransactionRequestComplete_Params, 0, sizeof(FinalizeTransactionRequestComplete_Params));
	memcpy_s(&FinalizeTransactionRequestComplete_Params.RequestResult, sizeof(FinalizeTransactionRequestComplete_Params.RequestResult), &RequestResult, sizeof(RequestResult));

	uFnFinalizeTransactionRequestComplete->iNative = 0;
	uFnFinalizeTransactionRequestComplete->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFinalizeTransactionRequestComplete, &FinalizeTransactionRequestComplete_Params, nullptr);
	uFnFinalizeTransactionRequestComplete->FunctionFlags |= 0x400;
	uFnFinalizeTransactionRequestComplete->iNative = 2573;

	memcpy_s(&RequestResult, sizeof(RequestResult), &FinalizeTransactionRequestComplete_Params.RequestResult, sizeof(FinalizeTransactionRequestComplete_Params.RequestResult));
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.InitializeTransactionJobRequestComplete
// [0x00420402] (FUNC_Defined | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[2574])
// Parameter Info:
// struct FSparkResult            RequestResult                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineTransactionInterfaceSteamworks::InitializeTransactionJobRequestComplete(struct FSparkResult& RequestResult)
{
	static UFunction* uFnInitializeTransactionJobRequestComplete = nullptr;

	if (!uFnInitializeTransactionJobRequestComplete)
	{
		uFnInitializeTransactionJobRequestComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.InitializeTransactionJobRequestComplete");
	}

	UOnlineTransactionInterfaceSteamworks_execInitializeTransactionJobRequestComplete_Params InitializeTransactionJobRequestComplete_Params;
	memset(&InitializeTransactionJobRequestComplete_Params, 0, sizeof(InitializeTransactionJobRequestComplete_Params));
	memcpy_s(&InitializeTransactionJobRequestComplete_Params.RequestResult, sizeof(InitializeTransactionJobRequestComplete_Params.RequestResult), &RequestResult, sizeof(RequestResult));

	uFnInitializeTransactionJobRequestComplete->iNative = 0;
	uFnInitializeTransactionJobRequestComplete->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInitializeTransactionJobRequestComplete, &InitializeTransactionJobRequestComplete_Params, nullptr);
	uFnInitializeTransactionJobRequestComplete->FunctionFlags |= 0x400;
	uFnInitializeTransactionJobRequestComplete->iNative = 2574;

	memcpy_s(&RequestResult, sizeof(RequestResult), &InitializeTransactionJobRequestComplete_Params.RequestResult, sizeof(InitializeTransactionJobRequestComplete_Params.RequestResult));
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.InitializeTransactionRequestComplete
// [0x00420402] (FUNC_Defined | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[2575])
// Parameter Info:
// struct FSparkResult            RequestResult                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineTransactionInterfaceSteamworks::InitializeTransactionRequestComplete(struct FSparkResult& RequestResult)
{
	static UFunction* uFnInitializeTransactionRequestComplete = nullptr;

	if (!uFnInitializeTransactionRequestComplete)
	{
		uFnInitializeTransactionRequestComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.InitializeTransactionRequestComplete");
	}

	UOnlineTransactionInterfaceSteamworks_execInitializeTransactionRequestComplete_Params InitializeTransactionRequestComplete_Params;
	memset(&InitializeTransactionRequestComplete_Params, 0, sizeof(InitializeTransactionRequestComplete_Params));
	memcpy_s(&InitializeTransactionRequestComplete_Params.RequestResult, sizeof(InitializeTransactionRequestComplete_Params.RequestResult), &RequestResult, sizeof(RequestResult));

	uFnInitializeTransactionRequestComplete->iNative = 0;
	uFnInitializeTransactionRequestComplete->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInitializeTransactionRequestComplete, &InitializeTransactionRequestComplete_Params, nullptr);
	uFnInitializeTransactionRequestComplete->FunctionFlags |= 0x400;
	uFnInitializeTransactionRequestComplete->iNative = 2575;

	memcpy_s(&RequestResult, sizeof(RequestResult), &InitializeTransactionRequestComplete_Params.RequestResult, sizeof(InitializeTransactionRequestComplete_Params.RequestResult));
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionCancellation
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// const struct FQWord&           OrderId                        (CPF_Parm)
// bool                           bCancelled                     (CPF_Parm)

void UOnlineTransactionInterfaceSteamworks::OnTransactionCancellation(const struct FPlatformUserId& UserId, const struct FQWord& OrderId, bool bCancelled)
{
	static UFunction* uFnOnTransactionCancellation = nullptr;

	if (!uFnOnTransactionCancellation)
	{
		uFnOnTransactionCancellation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionCancellation");
	}

	UOnlineTransactionInterfaceSteamworks_execOnTransactionCancellation_Params OnTransactionCancellation_Params;
	memset(&OnTransactionCancellation_Params, 0, sizeof(OnTransactionCancellation_Params));
	memcpy_s(&OnTransactionCancellation_Params.UserId, sizeof(OnTransactionCancellation_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnTransactionCancellation_Params.OrderId, sizeof(OnTransactionCancellation_Params.OrderId), &OrderId, sizeof(OrderId));
	OnTransactionCancellation_Params.bCancelled = bCancelled;

	this->ProcessEvent(uFnOnTransactionCancellation, &OnTransactionCancellation_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionFinalization
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// const struct FQWord&           OrderId                        (CPF_Parm)
// bool                           bFinalized                     (CPF_Parm)

void UOnlineTransactionInterfaceSteamworks::OnTransactionFinalization(const struct FPlatformUserId& UserId, const struct FQWord& OrderId, bool bFinalized)
{
	static UFunction* uFnOnTransactionFinalization = nullptr;

	if (!uFnOnTransactionFinalization)
	{
		uFnOnTransactionFinalization = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionFinalization");
	}

	UOnlineTransactionInterfaceSteamworks_execOnTransactionFinalization_Params OnTransactionFinalization_Params;
	memset(&OnTransactionFinalization_Params, 0, sizeof(OnTransactionFinalization_Params));
	memcpy_s(&OnTransactionFinalization_Params.UserId, sizeof(OnTransactionFinalization_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnTransactionFinalization_Params.OrderId, sizeof(OnTransactionFinalization_Params.OrderId), &OrderId, sizeof(OrderId));
	OnTransactionFinalization_Params.bFinalized = bFinalized;

	this->ProcessEvent(uFnOnTransactionFinalization, &OnTransactionFinalization_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionAuthorization
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FQWord&           OrderId                        (CPF_Parm)
// bool                           bAuthorized                    (CPF_Parm)

void UOnlineTransactionInterfaceSteamworks::OnTransactionAuthorization(const struct FQWord& OrderId, bool bAuthorized)
{
	static UFunction* uFnOnTransactionAuthorization = nullptr;

	if (!uFnOnTransactionAuthorization)
	{
		uFnOnTransactionAuthorization = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionAuthorization");
	}

	UOnlineTransactionInterfaceSteamworks_execOnTransactionAuthorization_Params OnTransactionAuthorization_Params;
	memset(&OnTransactionAuthorization_Params, 0, sizeof(OnTransactionAuthorization_Params));
	memcpy_s(&OnTransactionAuthorization_Params.OrderId, sizeof(OnTransactionAuthorization_Params.OrderId), &OrderId, sizeof(OrderId));
	OnTransactionAuthorization_Params.bAuthorized = bAuthorized;

	this->ProcessEvent(uFnOnTransactionAuthorization, &OnTransactionAuthorization_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionInitialization
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// const class FString&           ItemId                         (CPF_Parm | CPF_NeedCtorLink)
// bool                           bInitialized                   (CPF_Parm)
// const class FString&           ErrorCode                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineTransactionInterfaceSteamworks::OnTransactionInitialization(const struct FPlatformUserId& UserId, const class FString& ItemId, bool bInitialized, const class FString& ErrorCode)
{
	static UFunction* uFnOnTransactionInitialization = nullptr;

	if (!uFnOnTransactionInitialization)
	{
		uFnOnTransactionInitialization = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionInitialization");
	}

	UOnlineTransactionInterfaceSteamworks_execOnTransactionInitialization_Params OnTransactionInitialization_Params;
	memset(&OnTransactionInitialization_Params, 0, sizeof(OnTransactionInitialization_Params));
	memcpy_s(&OnTransactionInitialization_Params.UserId, sizeof(OnTransactionInitialization_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnTransactionInitialization_Params.ItemId, sizeof(OnTransactionInitialization_Params.ItemId), &ItemId, sizeof(ItemId));
	OnTransactionInitialization_Params.bInitialized = bInitialized;
	memcpy_s(&OnTransactionInitialization_Params.ErrorCode, sizeof(OnTransactionInitialization_Params.ErrorCode), &ErrorCode, sizeof(ErrorCode));

	this->ProcessEvent(uFnOnTransactionInitialization, &OnTransactionInitialization_Params, nullptr);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
