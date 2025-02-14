/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_parameters.hpp
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

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGameLicenseTypeChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnGameLicenseTypeChange_Params
{
	uint8_t                                            GameLicenseType;                                  		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadGameLicenseTypeComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadGameLicenseTypeComplete_Params
{
	uint8_t                                            Result;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            GameLicenseType;                                  		// 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowInviteUIComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnShowInviteUIComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGameInstallationStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnGameInstallationStatusChange_Params
{
	uint32_t                                           bIsComplete : 1;                                  		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemResume
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnSystemResume_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnServiceStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnServiceStatusChange_Params
{
	uint32_t                                           bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentPurchased
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnContentPurchased_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPatchCheckComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnPatchCheckComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bPatchAvailable : 1;                              		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FQWord                                      PlatformError;                                    		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConsumeEntitlementComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnConsumeEntitlementComplete_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      EntitlementId;                                    		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadEntitlementsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadEntitlementsComplete_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostAddress
// [0x00420400]  (iNative[23742])
struct UOnlineSubsystemSteamworks_execGetHostAddress_Params
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0014) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class FString                                      HostAddress;                                      		// 0x0018 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlatformUserId
// [0x00420400]  (iNative[23863])
struct UOnlineSubsystemSteamworks_execGetPlatformUserId_Params
{
	struct FUniqueNetId                                UID;                                              		// 0x0000 (0x0014) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FPlatformUserId                             UserId;                                           		// 0x0014 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420400]  (iNative[24010])
struct UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0014) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCheckMarketplaceContentList
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnCheckMarketplaceContentList_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bMarketplaceContentListAvailable : 1;             		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadMarketplaceContentListComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadMarketplaceContentListComplete_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadContentComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnContentChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSteamworksSessionState
// [0x00020400]  (iNative[37117])
struct UOnlineSubsystemSteamworks_execDumpSteamworksSessionState_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSessionState
// [0x12020000] 
struct UOnlineSubsystemSteamworks_execDumpSessionState_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAvatarAwardComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnUnlockAvatarAwardComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSessionId
// [0x00420400]  (iNative[23921])
struct UOnlineSubsystemSteamworks_execGetSessionId_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      SessionId;                                        		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x00020400]  (iNative[5500])
struct UOnlineSubsystemSteamworks_execResetStats_Params
{
	uint32_t                                           bResetAchievements : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateFilesOnRemoteStorage
// [0x00020400]  (iNative[37120])
struct UOnlineSubsystemSteamworks_execEnumerateFilesOnRemoteStorage_Params
{
	class TArray<class FString>                        ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteFileFromRemoteStorage
// [0x00020400]  (iNative[37115])
struct UOnlineSubsystemSteamworks_execDeleteFileFromRemoteStorageW_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBytesFromRemoteStorage
// [0x00420400]  (iNative[37193])
struct UOnlineSubsystemSteamworks_execReadBytesFromRemoteStorage_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              Data;                                             		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStringFromRemoteStorage
// [0x00420400]  (iNative[37200])
struct UOnlineSubsystemSteamworks_execReadStringFromRemoteStorage_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Data;                                             		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteBytesToRemoteStorage
// [0x00020400]  (iNative[37228])
struct UOnlineSubsystemSteamworks_execWriteBytesToRemoteStorage_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              Data;                                             		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteStringToRemoteStorage
// [0x00020400]  (iNative[37229])
struct UOnlineSubsystemSteamworks_execWriteStringToRemoteStorage_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Data;                                             		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerDisplayDataComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerDisplayDataComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class TArray<struct FOnlinePlayerDisplayData>      DisplayDataList;                                  		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileImageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadProfileImageComplete_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class UTexture2D*                                  ProfileImage;                                     		// 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetPlatformTicketComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnGetPlatformTicketComplete_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Ticket;                                           		// 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowMembershipMarketplaceUIComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnShowMembershipMarketplaceUIComplete_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Feature;                                          		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Level;                                            		// 0x0009 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      InviterName;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSentGameInvite
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnSentGameInvite_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bWasCancelled : 1;                                		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      KeyboardResults;                                  		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnControllerChange_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsConnected : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnExternalUIChange_Params
{
	uint32_t                                           bIsOpening : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params
{
	uint32_t                                           bIsConnected : 1;                                 		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromUserId
// [0x12020800] 
struct UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromUserId_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsTalking : 1;                                   		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumFriendsRead;                                   		// 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DelayIntervalInSeconds;                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PreviousStatus;                                   		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            NewStatus;                                        		// 0x0009 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PreviousId;                                       		// 0x000C (0x0014) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewId;                                            		// 0x0020 (0x0014) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnOnlinePrivilegeChanged
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnOnlinePrivilegeChanged_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Feature;                                          		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            PrivilegeLevel;                                   		// 0x0009 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlinePrivilegesComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadOnlinePrivilegesComplete_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerDisplayDataChanged
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnPlayerDisplayDataChanged_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      DisplayName;                                      		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShowPlatformUserUIComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnShowPlatformUserUIComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FPlatformUserId                             ResultId;                                         		// 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendsChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnMutingChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.CancelTransactionRequestComplete
// [0x00420402]  (iNative[2571])
struct UOnlineTransactionInterfaceSteamworks_execCancelTransactionRequestComplete_Params
{
	struct FSparkResult                                RequestResult;                                    		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.FinalizeTransactionJobRequestComplete
// [0x00420402]  (iNative[2572])
struct UOnlineTransactionInterfaceSteamworks_execFinalizeTransactionJobRequestComplete_Params
{
	struct FSparkResult                                RequestResult;                                    		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.FinalizeTransactionRequestComplete
// [0x00420402]  (iNative[2573])
struct UOnlineTransactionInterfaceSteamworks_execFinalizeTransactionRequestComplete_Params
{
	struct FSparkResult                                RequestResult;                                    		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.InitializeTransactionJobRequestComplete
// [0x00420402]  (iNative[2574])
struct UOnlineTransactionInterfaceSteamworks_execInitializeTransactionJobRequestComplete_Params
{
	struct FSparkResult                                RequestResult;                                    		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.InitializeTransactionRequestComplete
// [0x00420402]  (iNative[2575])
struct UOnlineTransactionInterfaceSteamworks_execInitializeTransactionRequestComplete_Params
{
	struct FSparkResult                                RequestResult;                                    		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionCancellation
// [0x00120000] 
struct UOnlineTransactionInterfaceSteamworks_execOnTransactionCancellation_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FQWord                                      OrderId;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bCancelled : 1;                                   		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionFinalization
// [0x00120000] 
struct UOnlineTransactionInterfaceSteamworks_execOnTransactionFinalization_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FQWord                                      OrderId;                                          		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bFinalized : 1;                                   		// 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionAuthorization
// [0x00120000] 
struct UOnlineTransactionInterfaceSteamworks_execOnTransactionAuthorization_Params
{
	struct FQWord                                      OrderId;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAuthorized : 1;                                  		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.OnTransactionInitialization
// [0x00120000] 
struct UOnlineTransactionInterfaceSteamworks_execOnTransactionInitialization_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ItemId;                                           		// 0x0008 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bInitialized : 1;                                 		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      ErrorCode;                                        		// 0x0020 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
