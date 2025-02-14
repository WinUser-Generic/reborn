/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.hpp
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

// Enum OnlineSubsystemSteamworks.QoSHandlerSteamworks.EQoSMessage
enum class EQoSMessage : uint8_t
{
	EQM_Challenge                                      = 0,
	EQM_ChallengeResponse                              = 1,
	EQM_Ping                                           = 2,
	EQM_PingResponse                                   = 3,
	EQM_END                                            = 4
};

// Enum OnlineSubsystemSteamworks.QoSHandlerSteamworks.EQoSState
enum class EQoSState : uint8_t
{
	EQS_Challenge                                      = 0,
	EQS_WaitChallenge                                  = 1,
	EQS_Ping                                           = 2,
	EQS_WaitPing                                       = 3,
	EQS_Complete                                       = 4,
	EQS_Error                                          = 5,
	EQS_END                                            = 6
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.ClientBeaconAddressResolverSteamworks
// 0x0000 (0x0068 - 0x0068)
class UClientBeaconAddressResolverSteamworks : public UClientBeaconAddressResolver
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.ClientBeaconAddressResolverSteamworks");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0060 (0x0210 - 0x0270)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	class TArray<struct FScriptDelegate>               GameInviteAcceptedDelegates;                   // 0x0210 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineGameSearch*                           InviteGameSearch;                              // 0x0220 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FScriptDelegate>               RegisterPlayerCompleteDelegates;               // 0x0228 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UnregisterPlayerCompleteDelegates;             // 0x0238 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FFilterKeyToSteamKeyMapping>   FilterKeyToSteamKeyMap;                        // 0x0248 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UOnlineGameSearch*                           ResolveSessionSearch;                          // 0x0258 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FScriptDelegate>               ResolveSessionCompleteDelegates;               // 0x0260 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x05A0 (0x01E8 - 0x0788)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    VfTable_IOnlinePlayerInterface;                // 0x01E8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IOnlinePlayerInterfaceEx;              // 0x01F0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IOnlineVoiceInterface;                 // 0x01F8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IOnlineSystemInterface;                // 0x0200 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IOnlineContentInterface;               // 0x0208 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IOnlineGameInstallationInterface;      // 0x0210 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    CallbackBridge;                                // 0x0218 (0x0008) [0x0000000000001000] (CPF_Native)  
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                 // 0x0220 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UOnlineTransactionInterfaceSteamworks*       CachedTransactionInt;                          // 0x0228 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      LocalProfileName;                              // 0x0230 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      LoggedInPlayerName;                            // 0x0240 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                              // 0x0250 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FPlatformUserId                             LoggedInUserId;                                // 0x0264 (0x0008) [0x0000000000000002] (CPF_Const)   
	ELoginStatus                                       LoggedInStatus;                                // 0x026C (0x0001) [0x0000000000000002] (CPF_Const)   
	ENetworkNotificationPosition                       CurrentNotificationPosition;                   // 0x026D (0x0001) [0x0000000000004000] (CPF_Config)  
	EOnlineEnumerationReadState                        FriendsListReadState;                          // 0x026E (0x0001) [0x0000000000000000]               
	EOnlineEnumerationReadState                        UserStatsReadState;                            // 0x026F (0x0001) [0x0000000000000000]               
	EOnlineEnumerationReadState                        GameLicenseTypeReadState;                      // 0x0270 (0x0001) [0x0000000000000000]               
	EGameLicenseType                                   CachedGameLicenseType;                         // 0x0271 (0x0001) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               ReadFriendsDelegates;                          // 0x0278 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FriendsChangeDelegates;                        // 0x0288 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               MutingChangeDelegates;                         // 0x0298 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadOnlinePrivilegesCompleteDelegates;         // 0x02A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LoginStatusChangeDelegates;                    // 0x02B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               TalkingDelegates;                              // 0x02C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ControllerChangeDelegates;                     // 0x02D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LinkStatusDelegates;                           // 0x02E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               GameInstallationStatusDelegates;               // 0x02F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               AchievementReadDelegates;                      // 0x0308 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ContentChangeDelegates;                        // 0x0318 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLocalTalker                                CurrentLocalTalker;                            // 0x0328 (0x001C) [0x0000000000000000]               
	class TArray<struct FRemoteTalker>                 RemoteTalkers;                                 // 0x0348 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               GetPlatformTicketCompleteDelegates;            // 0x0358 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               KeyboardInputDelegates;                        // 0x0368 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              PlayerStorageCache;                            // 0x0378 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               SentGameInviteDelegates;                       // 0x0388 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReceivedGameInviteDelegates;                   // 0x0398 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               CheckMarketplaceContentListDelegates;          // 0x03A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadGameLicenseTypeCompleteDelegates;          // 0x03B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               GameLicenseTypeChangeDelegates;                // 0x03C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineSubsystemSteamworksOnlineStatusMapping> StatusMappings;                                // 0x03D8 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FOnlineSubsystemSteamworksOnlineStatusPropertyMapping> StatusPropertyMappings;                        // 0x03E8 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FOnlineSubsystemSteamworksOnlineStatusContextMapping> StatusContextMappings;                         // 0x03F8 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      DefaultStatus;                                 // 0x0408 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      GameInviteMessage;                             // 0x0418 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FControllerConnectionState                  ControllerStates[0x4];                         // 0x0428 (0x0020) [0x0000000000000000]               
	uint32_t                                           bLastHasConnection : 1;                        // 0x0448 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasSteamworksAccount : 1;                     // 0x0448 (0x0004) [0x0000000000004002] [0x00000002] (CPF_Const | CPF_Config)
	uint32_t                                           bExternalUIActive : 1;                         // 0x0448 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPushToTalkActive : 1;                         // 0x0448 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	float                                              ConnectionPresenceTimeInterval;                // 0x044C (0x0004) [0x0000000000000000]               
	float                                              ConnectionPresenceElapsedTime;                 // 0x0450 (0x0004) [0x0000000000000000]               
	class FString                                      EncryptedProductKey;                           // 0x0458 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadProfileImageCompleteDelegates;             // 0x0468 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ExternalUIChangeDelegates;                     // 0x0478 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMarketplaceListCache                       DLCListCache;                                  // 0x0488 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMarketplaceOfferData>         MarketplaceOffers;                             // 0x04B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UQoSHandlerSteamworks*                       QoSHandler;                                    // 0x04C0 (0x0008) [0x0000000000000000]               
	class TArray<struct FAuthSessionTicketRequestData> AuthSessionTicketRequests;                     // 0x04C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineFriend>                 CachedFriendsList;                             // 0x04D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               PatchCheckCompleteDelegates;                   // 0x04E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               PlayerDisplayDataChangedDelegates;             // 0x04F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadPlayerDisplayDataCompleteDelegates;        // 0x0508 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ShowInviteUICompleteDelegates;                 // 0x0518 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  PendingAvatarRequests;                         // 0x0528 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                    // 0x0538 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                   // 0x0548 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnShowPlatformUserUIComplete__Delegate;      // 0x0558 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerDisplayDataChanged__Delegate;        // 0x0568 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlinePrivilegesComplete__Delegate;    // 0x0578 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnOnlinePrivilegeChanged__Delegate;          // 0x0588 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;               // 0x0598 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;       // 0x05A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;      // 0x05B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;             // 0x05C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;        // 0x05D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                // 0x05E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                // 0x05F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                // 0x0608 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;           // 0x0618 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSentGameInvite__Delegate;                  // 0x0628 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;              // 0x0638 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnShowMembershipMarketplaceUIComplete__Delegate;// 0x0648 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;        // 0x0658 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetPlatformTicketComplete__Delegate;       // 0x0668 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileImageComplete__Delegate;        // 0x0678 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerDisplayDataComplete__Delegate;   // 0x0688 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAvatarAwardComplete__Delegate;       // 0x0698 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnContentChange__Delegate;                   // 0x06A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadContentComplete__Delegate;             // 0x06B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadMarketplaceContentListComplete__Delegate;// 0x06C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCheckMarketplaceContentList__Delegate;     // 0x06D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadEntitlementsComplete__Delegate;        // 0x06E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConsumeEntitlementComplete__Delegate;      // 0x06F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPatchCheckComplete__Delegate;              // 0x0708 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnContentPurchased__Delegate;                // 0x0718 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServiceStatusChange__Delegate;             // 0x0728 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSystemResume__Delegate;                    // 0x0738 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInstallationStatusChange__Delegate;    // 0x0748 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnShowInviteUIComplete__Delegate;            // 0x0758 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadGameLicenseTypeComplete__Delegate;     // 0x0768 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameLicenseTypeChange__Delegate;           // 0x0778 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		}

		return uClassPointer;
	};

	void OnGameLicenseTypeChange(EGameLicenseType GameLicenseType);
	void OnReadGameLicenseTypeComplete(EOnlineSubsystemResult Result, EGameLicenseType GameLicenseType);
	void OnShowInviteUIComplete();
	void OnGameInstallationStatusChange(bool bIsComplete);
	void OnSystemResume();
	void OnServiceStatusChange(bool bIsConnected);
	void OnContentPurchased(const struct FPlatformUserId& UserId);
	void OnPatchCheckComplete(bool bWasSuccessful, bool bPatchAvailable, const struct FQWord& PlatformError);
	void OnConsumeEntitlementComplete(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result, const class FString& EntitlementId);
	void OnReadEntitlementsComplete(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result);
	bool GetHostAddress(const struct FUniqueNetId& NetId, class FString& HostAddress);
	bool GetPlatformUserId(const struct FUniqueNetId& UID, struct FPlatformUserId& UserId);
	bool GetUniquePlayerId(const struct FPlatformUserId& UserId, struct FUniqueNetId& PlayerID);
	void OnCheckMarketplaceContentList(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result, bool bMarketplaceContentListAvailable);
	void OnReadMarketplaceContentListComplete(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result);
	void OnReadContentComplete(bool bWasSuccessful);
	void OnContentChange();
	void DumpSteamworksSessionState();
	void DumpSessionState();
	void OnUnlockAvatarAwardComplete(bool bWasSuccessful);
	bool GetSessionId(const struct FName& SessionName, class FString& SessionId);
	bool ResetStats(bool bResetAchievements);
	class TArray<class FString> EnumerateFilesOnRemoteStorage();
	bool DeleteFileFromRemoteStorageW(const class FString& Filename);
	bool ReadBytesFromRemoteStorage(const class FString& Filename, class TArray<uint8_t>& Data);
	bool ReadStringFromRemoteStorage(const class FString& Filename, class FString& Data);
	bool WriteBytesToRemoteStorage(const class FString& Filename, const class TArray<uint8_t>& Data);
	bool WriteStringToRemoteStorage(const class FString& Filename, const class FString& Data);
	void OnReadPlayerDisplayDataComplete(bool bWasSuccessful, const class TArray<struct FOnlinePlayerDisplayData>& DisplayDataList);
	void OnReadProfileImageComplete(const struct FUniqueNetId& PlayerID, bool bWasSuccessful, class UTexture2D* ProfileImage);
	void OnGetPlatformTicketComplete(const struct FPlatformUserId& UserId, bool bWasSuccessful, const class FString& Ticket);
	void OnReadAchievementsComplete();
	void OnShowMembershipMarketplaceUIComplete(const struct FPlatformUserId& UserId, EOnlineFeature Feature, EFeaturePrivilegeLevel Level);
	void OnReceivedGameInvite(const struct FPlatformUserId& UserId, const class FString& InviterName);
	void OnSentGameInvite(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result);
	void OnKeyboardInputComplete(bool bWasSuccessful, bool bWasCancelled, const class FString& KeyboardResults);
	void OnControllerChange(const struct FPlatformUserId& UserId, bool bIsConnected);
	void OnExternalUIChange(bool bIsOpening);
	void OnLinkStatusChange(bool bIsConnected);
	class FString eventGetPlayerNicknameFromUserId(const struct FPlatformUserId& UserId);
	void OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking);
	void OnReadFriendsComplete(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result, int32_t NumFriendsRead, float DelayIntervalInSeconds);
	void OnWritePlayerStorageComplete(const struct FPlatformUserId& UserId, bool bWasSuccessful);
	void OnReadPlayerStorageComplete(const struct FPlatformUserId& UserId, bool bWasSuccessful);
	void OnLoginStatusChange(const struct FPlatformUserId& UserId, ELoginStatus PreviousStatus, ELoginStatus NewStatus, const struct FUniqueNetId& PreviousId, const struct FUniqueNetId& NewId);
	void OnOnlinePrivilegeChanged(const struct FPlatformUserId& UserId, EOnlineFeature Feature, EFeaturePrivilegeLevel PrivilegeLevel);
	void OnReadOnlinePrivilegesComplete(const struct FPlatformUserId& UserId, bool bWasSuccessful);
	void OnPlayerDisplayDataChanged(const struct FPlatformUserId& UserId, const class FString& DisplayName);
	void OnShowPlatformUserUIComplete(bool bWasSuccessful, const struct FPlatformUserId& ResultId);
	void OnFriendsChange();
	void OnMutingChange();
};

// Class OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks
// 0x00E0 (0x0058 - 0x0138)
class UOnlineTransactionInterfaceSteamworks : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineTransactionInterface;           // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<struct FInitializeTransactionRequest> PendingInitializeTransactionRequests;          // 0x0060 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FFinalizeTransactionRequest>   PendingFinalizeTransactionRequests;            // 0x0070 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            TransactionTimeout;                            // 0x0080 (0x0004) [0x0000000000000000]               
	class TArray<struct FInitializeTransactionData>    CachedInitializeTransactionData;               // 0x0088 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FFinalizeTransactionData>      CachedFinalizeTransactionData;                 // 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FCancelTransactionData>        CachedCancelTransactionData;                   // 0x00A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               OnTransactionInitializationCompleteDelegates;  // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               OnTransactionAuthorizationCompleteDelegates;   // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               OnTransactionFinalizationCompleteDelegates;    // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               OnTransactionCancellationCompleteDelegates;    // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTransactionInitialization__Delegate;       // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTransactionAuthorization__Delegate;        // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTransactionFinalization__Delegate;         // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTransactionCancellation__Delegate;         // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks");
		}

		return uClassPointer;
	};

	void CancelTransactionRequestComplete(struct FSparkResult& RequestResult);
	void FinalizeTransactionJobRequestComplete(struct FSparkResult& RequestResult);
	void FinalizeTransactionRequestComplete(struct FSparkResult& RequestResult);
	void InitializeTransactionJobRequestComplete(struct FSparkResult& RequestResult);
	void InitializeTransactionRequestComplete(struct FSparkResult& RequestResult);
	void OnTransactionCancellation(const struct FPlatformUserId& UserId, const struct FQWord& OrderId, bool bCancelled);
	void OnTransactionFinalization(const struct FPlatformUserId& UserId, const struct FQWord& OrderId, bool bFinalized);
	void OnTransactionAuthorization(const struct FQWord& OrderId, bool bAuthorized);
	void OnTransactionInitialization(const struct FPlatformUserId& UserId, const class FString& ItemId, bool bInitialized, const class FString& ErrorCode);
};

// Class OnlineSubsystemSteamworks.QoSHandlerSteamworks
// 0x00D8 (0x0058 - 0x0130)
class UQoSHandlerSteamworks : public UObject
{
public:
	int32_t                                            MaxQoSRequest;                                 // 0x0058 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxQoSListen;                                  // 0x005C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            NumPingProbes;                                 // 0x0060 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            PingProbeSize;                                 // 0x0064 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              PingTimeout;                                   // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ChallengeTimeout;                              // 0x006C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ListenTimeout;                                 // 0x0070 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint32_t                                           bEnabled : 1;                                  // 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    QoSSocket;                                     // 0x0078 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FMap_Mirror                                 ListenEntries;                                 // 0x0080 (0x0050) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FMap_Mirror                                 RequestEntries;                                // 0x00D0 (0x0050) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class TArray<struct FPendingEntry>                 PendingRequests;                               // 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.QoSHandlerSteamworks");
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
