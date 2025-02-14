/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: IpDrv_parameters.hpp
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

// Function IpDrv.InternetLink.ResolveFailed
// [0x12020800] 
struct AInternetLink_eventResolveFailed_Params
{
};

// Function IpDrv.InternetLink.Resolved
// [0x12020800] 
struct AInternetLink_eventResolved_Params
{
	struct FIpAddr                                     Addr;                                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420400]  (iNative[36866])
struct AInternetLink_execGetLocalIP_Params
{
	struct FIpAddr                                     Arg;                                              		// 0x0000 (0x0018) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420400]  (iNative[37057])
struct AInternetLink_execStringToIpAddr_Params
{
	class FString                                      Str;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FIpAddr                                     Addr;                                             		// 0x0010 (0x0018) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020400]  (iNative[36891])
struct AInternetLink_execIpAddrToString_Params
{
	struct FIpAddr                                     Arg;                                              		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0018 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020400]  (iNative[36865])
struct AInternetLink_execGetLastError_Params
{
	int32_t                                            ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.Resolve
// [0x00020400]  (iNative[37013])
struct AInternetLink_execResolve_Params
{
	class FString                                      Domain;                                           		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420400]  (iNative[36933])
struct AInternetLink_execParseURL_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      Addr;                                             		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            PortNum;                                          		// 0x0020 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class FString                                      LevelName;                                        		// 0x0028 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      EntryName;                                        		// 0x0038 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0048 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020400]  (iNative[36893])
struct AInternetLink_execIsDataPending_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x12020800] 
struct ATcpLink_eventReceivedBinary_Params
{
	int32_t                                            Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x12020800] 
struct ATcpLink_eventReceivedLine_Params
{
	class FString                                      Line;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TcpLink.ReceivedText
// [0x12020800] 
struct ATcpLink_eventReceivedText_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.TcpLink.Closed
// [0x12020800] 
struct ATcpLink_eventClosed_Params
{
};

// Function IpDrv.TcpLink.Opened
// [0x12020800] 
struct ATcpLink_eventOpened_Params
{
};

// Function IpDrv.TcpLink.Accepted
// [0x12020800] 
struct ATcpLink_eventAccepted_Params
{
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420400]  (iNative[36993])
struct ATcpLink_execReadBinary_Params
{
	int32_t                                            Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.ReadText
// [0x00420400]  (iNative[36995])
struct ATcpLink_execReadText_Params
{
	class FString                                      Str;                                              		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020400]  (iNative[836])
struct ATcpLink_execSendBinary_Params
{
	int32_t                                            Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.SendText
// [0x00020400]  (iNative[835])
struct ATcpLink_execSendText_Params
{
	class FString                                      Str;                                              		// 0x0000 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020400]  (iNative[36892])
struct ATcpLink_execIsConnected_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Close
// [0x00020400]  (iNative[31333])
struct ATcpLink_execClose_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Open
// [0x00020400]  (iNative[2219])
struct ATcpLink_execOpen_Params
{
	struct FIpAddr                                     Addr;                                             		// 0x0000 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.Listen
// [0x00020400]  (iNative[15768])
struct ATcpLink_execListen_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.TcpLink.BindPort
// [0x00024400]  (iNative[36789])
struct ATcpLink_execBindPort_Params
{
	int32_t                                            PortNum;                                          		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bUseNextAvailable : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebConnection.IsHanging
// [0x12020001] 
struct AWebConnection_execIsHanging_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebConnection.Cleanup
// [0x12020000] 
struct AWebConnection_execCleanup_Params
{
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x12020000] 
struct AWebConnection_execCheckRawBytes_Params
{
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x12020000] 
struct AWebConnection_execEndOfHeaders_Params
{
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x12020000] 
struct AWebConnection_execCreateResponseObject_Params
{
};

// Function IpDrv.WebConnection.ProcessPost
// [0x12020000] 
struct AWebConnection_execProcessPost_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ProcessGet
// [0x12020000] 
struct AWebConnection_execProcessGet_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ProcessHead
// [0x12020000] 
struct AWebConnection_execProcessHead_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x12020000] 
struct AWebConnection_execReceivedLine_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedText
// [0x12020800] 
struct AWebConnection_eventReceivedText_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebConnection.Timer
// [0x12020800] 
struct AWebConnection_eventTimer_Params
{
};

// Function IpDrv.WebConnection.Closed
// [0x12020800] 
struct AWebConnection_eventClosed_Params
{
};

// Function IpDrv.WebConnection.Accepted
// [0x12020800] 
struct AWebConnection_eventAccepted_Params
{
};

// Function IpDrv.WebServer.GetApplication
// [0x12420000] 
struct AWebServer_execGetApplication_Params
{
	class FString                                      Uri;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      SubURI;                                           		// 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UWebApplication*                             ReturnValue;                                      		// 0x0020 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebServer.LostChild
// [0x12020800] 
struct AWebServer_eventLostChild_Params
{
	class AActor*                                      C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebServer.GainedChild
// [0x12020800] 
struct AWebServer_eventGainedChild_Params
{
	class AActor*                                      C;                                                		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebServer.Destroyed
// [0x12020800] 
struct AWebServer_eventDestroyed_Params
{
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x12020000] 
struct AWebServer_execPostBeginPlay_Params
{
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x12420000] 
struct UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  OutRegisteredPlayers;                             		// 0x0008 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400]  (iNative[36895])
struct UOnlineSubsystemCommonImpl_execIsPlayerInSession_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0014) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromUserId
// [0x12020800] 
struct UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromUserId_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnResolveSessionComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnResolveSessionComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	struct FOnlineGameSearchResult                     Result;                                           		// 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnQosStatusChanged_Params
{
	int32_t                                            NumComplete;                                      		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumTotal;                                         		// 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteProcessingStarted
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnGameInviteProcessingStarted_Params
{
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Params
{
	struct FPlatformUserId                             UserId;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0008 (0x0010) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	uint8_t                                            Result;                                           		// 0x0018 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0014) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0014) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Result;                                           		// 0x0008 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120000] 
struct UPartyBeacon_execOnDestroyComplete_Params
{
};

// Function IpDrv.PartyBeaconClient.OnHostSkillRatingUpdateRequestReceived
// [0x00120000] 
struct UPartyBeaconClient_execOnHostSkillRatingUpdateRequestReceived_Params
{
	class FString                                      SkillVersion;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.PartyBeaconClient.OnHostKickedParty
// [0x00120000] 
struct UPartyBeaconClient_execOnHostKickedParty_Params
{
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120000] 
struct UPartyBeaconClient_execOnHostHasCancelled_Params
{
	uint8_t                                            Reason;                                           		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120000] 
struct UPartyBeaconClient_execOnHostIsReady_Params
{
};

// Function IpDrv.PartyBeaconClient.OnJoinSessionRequestReceived
// [0x00120000] 
struct UPartyBeaconClient_execOnJoinSessionRequestReceived_Params
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FPlatformSessionData                        PlatformSpecificInfo;                             		// 0x0010 (0x0084) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120000] 
struct UPartyBeaconClient_execOnReservationCountUpdated_Params
{
	int32_t                                            ReservationRemaining;                             		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120000] 
struct UPartyBeaconClient_execOnReservationRequestComplete_Params
{
	uint8_t                                            ReservationResult;                                		// 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.OnSkillRatingUpdated
// [0x00120000] 
struct UPartyBeaconHost_execOnSkillRatingUpdated_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
	struct FReservationSkillRating                     SkillRating;                                      		// 0x0014 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120000] 
struct UPartyBeaconHost_execOnClientCancellationReceived_Params
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0014) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Reason;                                           		// 0x0014 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120000] 
struct UPartyBeaconHost_execOnReservationsFull_Params
{
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120000] 
struct UPartyBeaconHost_execOnReservationChange_Params
{
};

// Function IpDrv.UPnPDiscoveryServer.OnDescriptionRequestComplete
// [0x00420402]  (iNative[2569])
struct UUPnPDiscoveryServer_execOnDescriptionRequestComplete_Params
{
	struct FSparkResult                                RequestResult;                                    		// 0x0000 (0x0028) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.UPnPDiscoveryServer.OnDiscoveryComplete
// [0x00120000] 
struct UUPnPDiscoveryServer_execOnDiscoveryComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function IpDrv.WebApplication.PostQuery
// [0x12020000] 
struct UWebApplication_execPostQuery_Params
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebApplication.Query
// [0x12020000] 
struct UWebApplication_execQuery_Params
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebApplication.PreQuery
// [0x12020000] 
struct UWebApplication_execPreQuery_Params
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebApplication.CleanupApp
// [0x12020000] 
struct UWebApplication_execCleanupApp_Params
{
};

// Function IpDrv.WebApplication.Cleanup
// [0x12020001] 
struct UWebApplication_execCleanup_Params
{
};

// Function IpDrv.WebApplication.Init
// [0x12020000] 
struct UWebApplication_execInit_Params
{
};

// Function IpDrv.HelloWeb.Query
// [0x12020800] 
struct UHelloWeb_eventQuery_Params
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.HelloWeb.Init
// [0x12020000] 
struct UHelloWeb_execInit_Params
{
};

// Function IpDrv.ImageServer.Query
// [0x12020800] 
struct UImageServer_eventQuery_Params
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UWebResponse*                                Response;                                         		// 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x12020000] 
struct UWebRequest_execGetHexDigit_Params
{
	class FString                                      D;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x12020000] 
struct UWebRequest_execDecodeFormData_Params
{
	class FString                                      Data;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x12020000] 
struct UWebRequest_execProcessHeaderString_Params
{
	class FString                                      S;                                                		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.Dump
// [0x00020401]  (iNative[36834])
struct UWebRequest_execDump_Params
{
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401]  (iNative[36871])
struct UWebRequest_execGetVariables_Params
{
	class TArray<class FString>                        varNames;                                         		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401]  (iNative[36870])
struct UWebRequest_execGetVariableNumber_Params
{
	class FString                                      VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Number;                                           		// 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      DefaultValue;                                     		// 0x0018 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0028 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401]  (iNative[36869])
struct UWebRequest_execGetVariableCount_Params
{
	class FString                                      VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401]  (iNative[36868])
struct UWebRequest_execGetVariable_Params
{
	class FString                                      VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DefaultValue;                                     		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401]  (iNative[36776])
struct UWebRequest_execAddVariable_Params
{
	class FString                                      VariableName;                                     		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            		// 0x0010 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401]  (iNative[36862])
struct UWebRequest_execGetHeaders_Params
{
	class TArray<class FString>                        Headers;                                          		// 0x0000 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401]  (iNative[36861])
struct UWebRequest_execGetHeader_Params
{
	class FString                                      HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DefaultValue;                                     		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0020 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401]  (iNative[36774])
struct UWebRequest_execAddHeader_Params
{
	class FString                                      HeaderName;                                       		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            		// 0x0010 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00020401]  (iNative[36840])
struct UWebRequest_execEncodeBase64_Params
{
	class FString                                      Decoded;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00020401]  (iNative[36819])
struct UWebRequest_execDecodeBase64_Params
{
	class FString                                      Encoded;                                          		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SentResponse
// [0x12020000] 
struct UWebResponse_execSentResponse_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.SentText
// [0x12020000] 
struct UWebResponse_execSentText_Params
{
	uint32_t                                           ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.Redirect
// [0x12020000] 
struct UWebResponse_execRedirect_Params
{
	class FString                                      URL;                                              		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x12024000] 
struct UWebResponse_execSendStandardHeaders_Params
{
	class FString                                      ContentType;                                      		// 0x0000 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bCache : 1;                                       		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.HTTPError
// [0x12024000] 
struct UWebResponse_execHTTPError_Params
{
	int32_t                                            ErrorNum;                                         		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Data;                                             		// 0x0008 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendHeaders
// [0x12020000] 
struct UWebResponse_execSendHeaders_Params
{
};

// Function IpDrv.WebResponse.AddHeader
// [0x12024000] 
struct UWebResponse_execAddHeader_Params
{
	class FString                                      Header;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bReplace : 1;                                     		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x12020000] 
struct UWebResponse_execHTTPHeader_Params
{
	class FString                                      Header;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.HTTPResponse
// [0x12020000] 
struct UWebResponse_execHTTPResponse_Params
{
	class FString                                      Header;                                           		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x12020000] 
struct UWebResponse_execFailAuthentication_Params
{
	class FString                                      Realm;                                            		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x12024000] 
struct UWebResponse_execSendCachedFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ContentType;                                      		// 0x0010 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.SendBinary
// [0x12020800] 
struct UWebResponse_eventSendBinary_Params
{
	int32_t                                            Count;                                            		// 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B[0xFF];                                          		// 0x0004 (0x00FF) [0x0000000000000080] (CPF_Parm)    
};

// Function IpDrv.WebResponse.SendText
// [0x12024800] 
struct UWebResponse_eventSendText_Params
{
	class FString                                      Text;                                             		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bNoCRLF : 1;                                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.Dump
// [0x00020401]  (iNative[36834])
struct UWebResponse_execDump_Params
{
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401]  (iNative[36864])
struct UWebResponse_execGetHTTPExpiration_Params
{
	int32_t                                            OffsetSeconds;                                    		// 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401]  (iNative[36908])
struct UWebResponse_execLoadParsedUHTM_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401]  (iNative[36886])
struct UWebResponse_execIncludeBinaryFile_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401]  (iNative[36887])
struct UWebResponse_execIncludeUHTM_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401]  (iNative[36805])
struct UWebResponse_execClearSubst_Params
{
};

// Function IpDrv.WebResponse.Subst
// [0x00024401]  (iNative[37058])
struct UWebResponse_execSubst_Params
{
	class FString                                      Variable;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Value;                                            		// 0x0010 (0x0010) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	uint32_t                                           bClear : 1;                                       		// 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401]  (iNative[36855])
struct UWebResponse_execFileExists_Params
{
	class FString                                      Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
