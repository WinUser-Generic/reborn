/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_structs.hpp
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

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x0040
struct FFilterKeyToSteamKeyMapping
{
	int32_t                                            KeyId;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            KeyType;                                       // 0x0004 (0x0001) [0x0000000000000000]               
	class FString                                      RawKey;                                        // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SteamKey;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bReverseFilter : 1;                            // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      IgnoreValue;                                   // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int32_t                                            bIsControllerConnected;                        // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            bLastIsControllerConnected;                    // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MarketplaceListCache
// 0x0028
struct FMarketplaceListCache
{
	class TArray<struct FMarketplaceContent>           Content;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ReadState;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               ReadCompleteDelegates;                         // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AuthSessionTicketRequestData
// 0x0020
struct FAuthSessionTicketRequestData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPlatformUserId                             UserId;                                        // 0x0004 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              Ticket;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MarketplaceOfferData
// 0x0020
struct FMarketplaceOfferData
{
	class FString                                      OfferId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SellTextLocKey;                                // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineSubsystemSteamworksOnlineStatusContextMapping
// 0x0014
struct FOnlineSubsystemSteamworksOnlineStatusContextMapping
{
	class FString                                      KeyString;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ContextId;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineSubsystemSteamworksOnlineStatusPropertyMapping
// 0x0018
struct FOnlineSubsystemSteamworksOnlineStatusPropertyMapping
{
	class FString                                      KeyString;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PropertyId;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            EncodeId;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineSubsystemSteamworksOnlineStatusMapping
// 0x0018
struct FOnlineSubsystemSteamworksOnlineStatusMapping
{
	int32_t                                            StatusId;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      StatusString;                                  // 0x0008 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.CancelTransactionData
// 0x0018
struct FCancelTransactionData
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	struct FQWord                                      OrderId;                                       // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.FinalizeTransactionData
// 0x0028
struct FFinalizeTransactionData
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	struct FQWord                                      OrderId;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	class FString                                      URL;                                           // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.InitializeTransactionData
// 0x0030
struct FInitializeTransactionData
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      ItemId;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.FinalizeTransactionRequest
// 0x0048
struct FFinalizeTransactionRequest
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            CachedDataRequestId;                           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              NextRetryTime;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MinWaitMilliseconds;                           // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxWaitMilliseconds;                           // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            NumRetriesRemaining;                           // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetries;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      JobID;                                         // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineTransactionInterfaceSteamworks.InitializeTransactionRequest
// 0x0048
struct FInitializeTransactionRequest
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            RequestId;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            CachedDataRequestId;                           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              NextRetryTime;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MinWaitMilliseconds;                           // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxWaitMilliseconds;                           // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            NumRetriesRemaining;                           // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxRetries;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	class FString                                      JobID;                                         // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URL;                                           // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.PendingEntry
// 0x0018
struct FPendingEntry
{
	struct FQWord                                      RemoteId;                                      // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    CallbackFunc;                                  // 0x0008 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    UserData;                                      // 0x0010 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.ListenEntry
// 0x0018
struct FListenEntry
{
	struct FQWord                                      RemoteId;                                      // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	uint8_t                                            Status;                                        // 0x0008 (0x0001) [0x0000000000000000]               
	struct FDouble                                     ActiveTimestamp;                               // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.QoSResults
// 0x0014
struct FQoSResults
{
	class TArray<struct FDouble>                       PingTimes;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PingInMs;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.RequestEntry
// 0x0050
struct FRequestEntry
{
	struct FQWord                                      RemoteId;                                      // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	int32_t                                            NumProbesSent;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	struct FDouble                                     ChallengeTimestamp;                            // 0x0010 (0x0008) [0x0000000000000000]               
	struct FDouble                                     PingTimestamp;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	uint8_t                                            Status;                                        // 0x0020 (0x0001) [0x0000000000000000]               
	struct FQoSResults                                 Results;                                       // 0x0028 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    CallbackFunc;                                  // 0x0040 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    UserData;                                      // 0x0048 (0x0008) [0x0000000000001000] (CPF_Native)  
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
