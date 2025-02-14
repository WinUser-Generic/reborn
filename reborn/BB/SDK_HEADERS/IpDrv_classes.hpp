/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: IpDrv_classes.hpp
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

#define CONST_PacketReadBufferSize                              1
#define CONST_DataCacheSize                                     2

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum IpDrv.InternetLink.EReceiveMode
enum class EReceiveMode : uint8_t
{
	RMODE_Manual                                       = 0,
	RMODE_Event                                        = 1,
	RMODE_END                                          = 2
};

// Enum IpDrv.InternetLink.ELineMode
enum class ELineMode : uint8_t
{
	LMODE_auto                                         = 0,
	LMODE_DOS                                          = 1,
	LMODE_UNIX                                         = 2,
	LMODE_MAC                                          = 3,
	LMODE_END                                          = 4
};

// Enum IpDrv.InternetLink.ELinkMode
enum class ELinkMode : uint8_t
{
	MODE_Text                                          = 0,
	MODE_Line                                          = 1,
	MODE_Binary                                        = 2,
	MODE_END                                           = 3
};

// Enum IpDrv.PartyBeacon.EPartyReservationCancellationReason
enum class EPartyReservationCancellationReason : uint8_t
{
	PRC_Cancelled                                      = 0,
	PRC_ConnectionError                                = 1,
	PRC_Kicked                                         = 2,
	PRC_Invite                                         = 3,
	PRC_TitleScreen                                    = 4,
	PRC_Quit                                           = 5,
	PRC_SparkError                                     = 6,
	PRC_END                                            = 7
};

// Enum IpDrv.PartyBeacon.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	PRR_GeneralError                                   = 0,
	PRR_PartyLimitReached                              = 1,
	PRR_IncorrectPlayerCount                           = 2,
	PRR_RequestTimedOut                                = 3,
	PRR_ReservationDuplicate                           = 4,
	PRR_ReservationNotFound                            = 5,
	PRR_ReservationAccepted                            = 6,
	PRR_ReservationDenied_General                      = 7,
	PRR_ReservationDenied_InMatchmaking                = 8,
	PRR_ReservationDenied_InPrivateMatch               = 9,
	PRR_ReservationDenied_InGame                       = 10,
	PRR_BuildMismatch                                  = 11,
	PRR_SparkEnvMismatch                               = 12,
	PRR_RevealStageHostHigher                          = 13,
	PRR_RevealStageHostLower                           = 14,
	PRR_MatchmakingVersionIdMismatch                   = 15,
	PRR_END                                            = 16
};

// Enum IpDrv.PartyBeacon.EReservationPacketType
enum class EReservationPacketType : uint8_t
{
	RPT_UnknownPacketType                              = 0,
	RPT_VoicePacketType                                = 1,
	RPT_ClientReservationRequest                       = 2,
	RPT_ClientReservationUpdateRequest                 = 3,
	RPT_ClientCancellationRequest                      = 4,
	RPT_HostReservationResponse                        = 5,
	RPT_HostReservationCountUpdate                     = 6,
	RPT_HostJoinSessionRequest                         = 7,
	RPT_HostIsReady                                    = 8,
	RPT_HostHasCancelled                               = 9,
	RPT_HostKickedParty                                = 10,
	RPT_Heartbeat                                      = 11,
	RPT_HostSkillRatingUpdateRequest                   = 12,
	RPT_ClientSkillRatingUpdateResponse                = 13,
	RPT_ClientPrivilegeUpdateRequest                   = 14,
	RPT_END                                            = 15
};

// Enum IpDrv.PartyBeacon.EVoicePacketType
enum class EVoicePacketType : uint8_t
{
	VPT_Unknown                                        = 0,
	VPT_Heartbeat                                      = 1,
	VPT_Data                                           = 2,
	VPT_END                                            = 3
};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
enum class EPartyBeaconClientRequest : uint8_t
{
	PBClientRequest_NewReservation                     = 0,
	PBClientRequest_ExpectedReservationConfirmation    = 1,
	PBClientRequest_END                                = 2
};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
enum class EPartyBeaconClientState : uint8_t
{
	PBCS_None                                          = 0,
	PBCS_Resolving                                     = 1,
	PBCS_Connecting                                    = 2,
	PBCS_Connected                                     = 3,
	PBCS_ConnectionFailed                              = 4,
	PBCS_AwaitingResponse                              = 5,
	PBCS_Closed                                        = 6,
	PBCS_END                                           = 7
};

// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
enum class EPartyBeaconHostState : uint8_t
{
	PBHS_AllowReservations                             = 0,
	PBHS_DenyReservations                              = 1,
	PBHS_END                                           = 2
};

// Enum IpDrv.PersistentBeaconManager.EHeartbeatTimeoutType
enum class EHeartbeatTimeoutType : uint8_t
{
	HTT_Default                                        = 0,
	HTT_ServerConnect                                  = 1,
	HTT_Gameplay                                       = 2,
	HTT_END                                            = 3
};

// Enum IpDrv.TcpLink.ELinkState
enum class ELinkState : uint8_t
{
	STATE_Initialized                                  = 0,
	STATE_Ready                                        = 1,
	STATE_Listening                                    = 2,
	STATE_Connecting                                   = 3,
	STATE_Connected                                    = 4,
	STATE_ListenClosePending                           = 5,
	STATE_ConnectClosePending                          = 6,
	STATE_ListenClosing                                = 7,
	STATE_ConnectClosing                               = 8,
	STATE_END                                          = 9
};

// Enum IpDrv.WebRequest.ERequestType
enum class ERequestType : uint8_t
{
	Request_GET                                        = 0,
	Request_POST                                       = 1,
	Request_END                                        = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.ClientBeaconAddressResolver
// 0x0010 (0x0058 - 0x0068)
class UClientBeaconAddressResolver : public UObject
{
public:
	int32_t                                            BeaconPort;                                    // 0x0058 (0x0004) [0x0000000000000000]               
	struct FName                                       BeaconName;                                    // 0x005C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		}

		return uClassPointer;
	};

};

// Class IpDrv.HTTPDownload
// 0x0100 (0x0AA0 - 0x0BA0)
class UHTTPDownload : public UDownload
{
public:
	class FString                                      ProxyServerHost;                               // 0x0AA0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            ProxyServerPort;                               // 0x0AB0 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxRedirection;                                // 0x0AB4 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ConnectionTimeout;                             // 0x0AB8 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                           UnknownData00[0xE4];                           // 0x0ABC (0x00E4) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HTTPDownload");
		}

		return uClassPointer;
	};

};

// Class IpDrv.InternetLink
// 0x0030 (0x0240 - 0x0270)
class AInternetLink : public AInfo
{
public:
	ELinkMode                                          LinkMode;                                      // 0x0240 (0x0001) [0x0000000000000000]               
	ELineMode                                          InLineMode;                                    // 0x0241 (0x0001) [0x0000000000000000]               
	ELineMode                                          OutLineMode;                                   // 0x0242 (0x0001) [0x0000000000000000]               
	EReceiveMode                                       ReceiveMode;                                   // 0x0243 (0x0001) [0x0000000000000000]               
	struct FPointer                                    Socket;                                        // 0x0248 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Port;                                          // 0x0250 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    RemoteSocket;                                  // 0x0258 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    PrivateResolveInfo;                            // 0x0260 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            DataPending;                                   // 0x0268 (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.InternetLink");
		}

		return uClassPointer;
	};

	void eventResolveFailed();
	void eventResolved(const struct FIpAddr& Addr);
	void GetLocalIP(struct FIpAddr& Arg);
	bool StringToIpAddr(const class FString& Str, struct FIpAddr& Addr);
	class FString IpAddrToString(const struct FIpAddr& Arg);
	int32_t GetLastError();
	void Resolve(const class FString& Domain);
	bool ParseURL(const class FString& URL, class FString& Addr, int32_t& PortNum, class FString& LevelName, class FString& EntryName);
	bool IsDataPending();
};

// Class IpDrv.TcpLink
// 0x0048 (0x0270 - 0x02B8)
class ATcpLink : public AInternetLink
{
public:
	ELinkState                                         LinkState;                                     // 0x0270 (0x0001) [0x0000000000000000]               
	struct FIpAddr                                     RemoteAddr;                                    // 0x0278 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	class UClass*                                      AcceptClass;                                   // 0x0290 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              SendFIFO;                                      // 0x0298 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      RecvBuf;                                       // 0x02A8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpLink");
		}

		return uClassPointer;
	};

	void eventReceivedBinary(int32_t Count, uint8_t B);
	void eventReceivedLine(const class FString& Line);
	void eventReceivedText(const class FString& Text);
	void eventClosed();
	void eventOpened();
	void eventAccepted();
	int32_t ReadBinary(int32_t Count, uint8_t& B);
	int32_t ReadText(class FString& Str);
	int32_t SendBinary(int32_t Count, uint8_t B);
	int32_t SendText(const class FString& Str);
	bool IsConnected();
	bool Close();
	bool Open(const struct FIpAddr& Addr);
	bool Listen();
	int32_t BindPort(int32_t optionalPortNum, bool optionalBUseNextAvailable);
};

// Class IpDrv.WebConnection
// 0x0048 (0x02B8 - 0x0300)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                     // 0x02B8 (0x0008) [0x0000000000000000]               
	class FString                                      ReceivedData;                                  // 0x02C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebRequest*                                 Request;                                       // 0x02D0 (0x0008) [0x0000000000000000]               
	class UWebResponse*                                Response;                                      // 0x02D8 (0x0008) [0x0000000000000000]               
	class UWebApplication*                             Application;                                   // 0x02E0 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDelayCleanup : 1;                             // 0x02E8 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            RawBytesExpecting;                             // 0x02EC (0x0004) [0x0000000000000000]               
	int32_t                                            MaxValueLength;                                // 0x02F0 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxLineLength;                                 // 0x02F4 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ConnID;                                        // 0x02F8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebConnection");
		}

		return uClassPointer;
	};

	bool IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost(const class FString& S);
	void ProcessGet(const class FString& S);
	void ProcessHead(const class FString& S);
	void ReceivedLine(const class FString& S);
	void eventReceivedText(const class FString& Text);
	void eventTimer();
	void eventClosed();
	void eventAccepted();
};

// Class IpDrv.WebServer
// 0x01D0 (0x02B8 - 0x0488)
class AWebServer : public ATcpLink
{
public:
	class FString                                      ServerName;                                    // 0x02B8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Applications[0xA];                             // 0x02C8 (0x00A0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ApplicationPaths[0xA];                         // 0x0368 (0x00A0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           bEnabled : 1;                                  // 0x0408 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	int32_t                                            ListenPort;                                    // 0x040C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxConnections;                                // 0x0410 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DefaultApplication;                            // 0x0414 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ExpirationSeconds;                             // 0x0418 (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      ServerURL;                                     // 0x0420 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebApplication*                             ApplicationObjects[0xA];                       // 0x0430 (0x0050) [0x0000000000000000]               
	int32_t                                            ConnectionCount;                               // 0x0480 (0x0004) [0x0000000000000000]               
	int32_t                                            ConnID;                                        // 0x0484 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebServer");
		}

		return uClassPointer;
	};

	class UWebApplication* GetApplication(const class FString& Uri, class FString& SubURI);
	void eventLostChild(class AActor* C);
	void eventGainedChild(class AActor* C);
	void eventDestroyed();
	void PostBeginPlay();
};

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0018 (0x01D0 - 0x01E8)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                   // 0x01D0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            MaxLocalTalkers;                               // 0x01D8 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxRemoteTalkers;                              // 0x01DC (0x0004) [0x0000000000004000] (CPF_Config)  
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                             // 0x01E0 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		}

		return uClassPointer;
	};

	void GetRegisteredPlayers(const struct FName& SessionName, class TArray<struct FUniqueNetId>& OutRegisteredPlayers);
	bool IsPlayerInSession(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	class FString eventGetPlayerNicknameFromUserId(const struct FPlatformUserId& UserId);
};

// Class IpDrv.OnlineGameInterfaceImpl
// 0x01B8 (0x0058 - 0x0210)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineGameInterface;                  // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0060 (0x0008) [0x0000000000000000]               
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UOnlineGameSearch*                           GameSearch;                                    // 0x0070 (0x0008) [0x0000000000000002] (CPF_Const)   
	EOnlineGameState                                   CurrentGameState;                              // 0x0078 (0x0001) [0x0000000000000002] (CPF_Const)   
	ELanBeaconState                                    LanBeaconState;                                // 0x0079 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            LanNonce[0x8];                                 // 0x007A (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FScriptDelegate>               CreateOnlineGameCompleteDelegates;             // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UpdateOnlineGameCompleteDelegates;             // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DestroyOnlineGameCompleteDelegates;            // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               JoinOnlineGameCompleteDelegates;               // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               StartOnlineGameCompleteDelegates;              // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               EndOnlineGameCompleteDelegates;                // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FindOnlineGamesCompleteDelegates;              // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               GameInviteProcessingStartedDelegates;          // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LanAnnouncePort;                               // 0x0108 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	int32_t                                            LanGameUniqueId;                               // 0x010C (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	int32_t                                            LanPacketPlatformMask;                         // 0x0110 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	float                                              LanQueryTimeLeft;                              // 0x0114 (0x0004) [0x0000000000000000]               
	float                                              LanQueryTimeout;                               // 0x0118 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    LanBeacon;                                     // 0x0120 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    SessionInfo;                                   // 0x0128 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;         // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;        // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;        // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;       // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;   // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;          // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;          // 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;        // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;         // 0x01B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;           // 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;              // 0x01D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteProcessingStarted__Delegate;     // 0x01E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                // 0x01F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnResolveSessionComplete__Delegate;          // 0x0200 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		}

		return uClassPointer;
	};

	void OnResolveSessionComplete(bool bWasSuccessful, const struct FOnlineGameSearchResult& Result);
	void OnQosStatusChanged(int32_t NumComplete, int32_t NumTotal);
	void OnGameInviteProcessingStarted();
	void OnGameInviteAccepted(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result, struct FOnlineGameSearchResult& InviteResult);
	void OnEndOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result);
	void OnStartOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	void OnJoinOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	void OnDestroyOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result);
	void OnUpdateOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result);
	void OnCreateOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result);
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
};

// Class IpDrv.PartyBeacon
// 0x0878 (0x0058 - 0x08D0)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_FVoiceProvider;                        // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint8_t                                            BeaconId;                                      // 0x0068 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            DataCache[0x800];                              // 0x0069 (0x0800) [0x0000000000000000]               
	int32_t                                            MatchmakingVersionId;                          // 0x086C (0x0004) [0x0000000000000000]               
	int32_t                                            PartyBeaconPort;                               // 0x0870 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            PartyBeaconVoicePort;                          // 0x0874 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            SocketSendBufferSize;                          // 0x0878 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            SocketReceiveBufferSize;                       // 0x087C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            VoicePriority;                                 // 0x0880 (0x0004) [0x0000000000000000]               
	uint32_t                                           bForceAllowVoice : 1;                          // 0x0884 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsInTick : 1;                                 // 0x0884 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWantsDeferredDestroy : 1;                     // 0x0884 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bShouldTick : 1;                               // 0x0884 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FPointer                                    Socket;                                        // 0x0888 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    VoiceSocket;                                   // 0x0890 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            CacheIndex;                                    // 0x0898 (0x0004) [0x0000000000000000]               
	float                                              HeartbeatTimeout;                              // 0x089C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElapsedHeartbeatTime;                          // 0x08A0 (0x0004) [0x0000000000000000]               
	struct FName                                       BeaconName;                                    // 0x08A4 (0x0008) [0x0000000000000000]               
	class FString                                      VoiceProviderType;                             // 0x08B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                 // 0x08C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeacon");
		}

		return uClassPointer;
	};

	void OnDestroyComplete();
};

// Class IpDrv.PartyBeaconClient
// 0x0148 (0x08D0 - 0x0A18)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FPointer                                    VfTable_FVoiceConnection;                      // 0x08D0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPartyBeaconHostData                        HostData;                                      // 0x08D8 (0x0018) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FPartyReservation                           LocalParty;                                    // 0x08F0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPartyReservation>             PendingPartyReservations;                      // 0x0938 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	EPartyBeaconClientState                            ClientBeaconState;                             // 0x0948 (0x0001) [0x0000000000000000]               
	EPartyBeaconClientRequest                          ClientBeaconRequestType;                       // 0x0949 (0x0001) [0x0000000000000000]               
	float                                              ReservationRequestTimeout;                     // 0x094C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ReservationRequestElapsedTime;                 // 0x0950 (0x0004) [0x0000000000000000]               
	class FString                                      ResolverClassName;                             // 0x0958 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ResolverClass;                                 // 0x0968 (0x0008) [0x0000000000000000]               
	class UClientBeaconAddressResolver*                Resolver;                                      // 0x0970 (0x0008) [0x0000000000000000]               
	struct FPointer                                    ResolveInfo;                                   // 0x0978 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    VoiceResolveInfo;                              // 0x0980 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    HostVoiceAddr;                                 // 0x0988 (0x0008) [0x0000000000001000] (CPF_Native)  
	int32_t                                            MinPort;                                       // 0x0990 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxPort;                                       // 0x0994 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            InitiatorPort;                                 // 0x0998 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            VoiceInitiatorPort;                            // 0x099C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              VoiceHeartbeatTime;                            // 0x09A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              HeartbeatTime;                                 // 0x09A4 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;      // 0x09A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;         // 0x09B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinSessionRequestReceived__Delegate;      // 0x09C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                     // 0x09D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                // 0x09E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostKickedParty__Delegate;                 // 0x09F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostSkillRatingUpdateRequestReceived__Delegate;// 0x0A08 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeaconClient");
		}

		return uClassPointer;
	};

	void OnHostSkillRatingUpdateRequestReceived(const class FString& SkillVersion);
	void OnHostKickedParty();
	void OnHostHasCancelled(EPartyReservationCancellationReason Reason);
	void OnHostIsReady();
	void OnJoinSessionRequestReceived(const struct FName& SessionName, class UClass* SearchClass, const struct FPlatformSessionData& PlatformSpecificInfo);
	void OnReservationCountUpdated(int32_t ReservationRemaining);
	void OnReservationRequestComplete(EPartyReservationResult ReservationResult);
};

// Class IpDrv.PartyBeaconHost
// 0x0080 (0x08D0 - 0x0950)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	class TArray<struct FPointer>                      Clients;                                       // 0x08D0 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            NumTeams;                                      // 0x08E0 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumPlayersPerTeam;                             // 0x08E4 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumReservations;                               // 0x08E8 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumConsumedReservations;                       // 0x08EC (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FPartyReservation>             Reservations;                                  // 0x08F0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FName                                       OnlineSessionName;                             // 0x0900 (0x0008) [0x0000000000000000]               
	int32_t                                            ConnectionBacklog;                             // 0x0908 (0x0004) [0x0000000000004000] (CPF_Config)  
	EPartyBeaconHostState                              BeaconState;                                   // 0x090C (0x0001) [0x0000000000000002] (CPF_Const)   
	struct FScriptDelegate                             __OnReservationChange__Delegate;               // 0x0910 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                // 0x0920 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;      // 0x0930 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSkillRatingUpdated__Delegate;              // 0x0940 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeaconHost");
		}

		return uClassPointer;
	};

	void OnSkillRatingUpdated(const struct FUniqueNetId& PlayerID, const struct FReservationSkillRating& SkillRating);
	void OnClientCancellationReceived(const struct FUniqueNetId& PlayerID, EPartyReservationCancellationReason Reason);
	void OnReservationsFull();
	void OnReservationChange();
};

// Class IpDrv.PersistentBeaconManager
// 0x0058 (0x0058 - 0x00B0)
class UPersistentBeaconManager : public UObject
{
public:
	class FString                                      HostBeaconClassName;                           // 0x0058 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ClientBeaconClassName;                         // 0x0068 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              ConnectTimeout;                                // 0x0078 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              GameplayTimeout;                               // 0x007C (0x0004) [0x0000000000004000] (CPF_Config)  
	class UClass*                                      HostBeaconClass;                               // 0x0080 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UClass*                                      ClientBeaconClass;                             // 0x0088 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<class UPartyBeaconHost*>              PersistentHostBeaconList;                      // 0x0090 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class UPartyBeaconClient*>            PersistentClientBeaconList;                    // 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PersistentBeaconManager");
		}

		return uClassPointer;
	};

};

// Class IpDrv.TcpipConnection
// 0x00A0 (0x6080 - 0x6120)
class UTcpipConnection : public UNetConnection
{
public:
	uint8_t                                           UnknownData00[0xA0];                           // 0x6080 (0x00A0) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpipConnection");
		}

		return uClassPointer;
	};

};

// Class IpDrv.TcpNetDriver
// 0x00A0 (0x0228 - 0x02C8)
class UTcpNetDriver : public UNetDriver
{
public:
	uint32_t                                           AllowPlayerPortUnreach : 1;                    // 0x0228 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           LogPortUnreach : 1;                            // 0x022C (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           ShouldCapPacketProcessing : 1;                 // 0x0230 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	float                                              PacketProcessingMaxSeconds;                    // 0x0234 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                           UnknownData00[0x90];                           // 0x0238 (0x0090) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpNetDriver");
		}

		return uClassPointer;
	};

};

// Class IpDrv.UPnPDiscoveryServer
// 0x0040 (0x0058 - 0x0098)
class UUPnPDiscoveryServer : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0058 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<struct FDiscoveryResult>              Results;                                       // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              DiscoveryTime;                                 // 0x0070 (0x0004) [0x0000000000000000]               
	struct FPointer                                    Socket;                                        // 0x0078 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	EOnlineEnumerationReadState                        ReadState;                                     // 0x0080 (0x0001) [0x0000000000000000]               
	struct FScriptDelegate                             __OnDiscoveryComplete__Delegate;               // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.UPnPDiscoveryServer");
		}

		return uClassPointer;
	};

	void OnDescriptionRequestComplete(struct FSparkResult& RequestResult);
	void OnDiscoveryComplete(bool bWasSuccessful);
};

// Class IpDrv.WebApplication
// 0x0020 (0x0058 - 0x0078)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                     // 0x0058 (0x0008) [0x0000000000000000]               
	class AWebServer*                                  WebServer;                                     // 0x0060 (0x0008) [0x0000000000000000]               
	class FString                                      Path;                                          // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebApplication");
		}

		return uClassPointer;
	};

	void PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void CleanupApp();
	void Cleanup();
	void Init();
};

// Class IpDrv.HelloWeb
// 0x0000 (0x0078 - 0x0078)
class UHelloWeb : public UWebApplication
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HelloWeb");
		}

		return uClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};

// Class IpDrv.ImageServer
// 0x0000 (0x0078 - 0x0078)
class UImageServer : public UWebApplication
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ImageServer");
		}

		return uClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
};

// Class IpDrv.WebRequest
// 0x0100 (0x0058 - 0x0158)
class UWebRequest : public UObject
{
public:
	class FString                                      RemoteAddr;                                    // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Uri;                                           // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UserName;                                      // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Password;                                      // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ContentLength;                                 // 0x0098 (0x0004) [0x0000000000000000]               
	class FString                                      ContentType;                                   // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	ERequestType                                       RequestType;                                   // 0x00B0 (0x0001) [0x0000000000000000]               
	struct FMap_Mirror                                 HeaderMap;                                     // 0x00B8 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FMap_Mirror                                 VariableMap;                                   // 0x0108 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebRequest");
		}

		return uClassPointer;
	};

	int32_t GetHexDigit(const class FString& D);
	void DecodeFormData(const class FString& Data);
	void ProcessHeaderString(const class FString& S);
	void Dump();
	void GetVariables(class TArray<class FString>& varNames);
	class FString GetVariableNumber(const class FString& VariableName, int32_t Number, const class FString& optionalDefaultValue);
	int32_t GetVariableCount(const class FString& VariableName);
	class FString GetVariable(const class FString& VariableName, const class FString& optionalDefaultValue);
	void AddVariable(const class FString& VariableName, const class FString& Value);
	void GetHeaders(class TArray<class FString>& Headers);
	class FString GetHeader(const class FString& HeaderName, const class FString& optionalDefaultValue);
	void AddHeader(const class FString& HeaderName, const class FString& Value);
	class FString EncodeBase64(const class FString& Decoded);
	class FString DecodeBase64(const class FString& Encoded);
};

// Class IpDrv.WebResponse
// 0x0090 (0x0058 - 0x00E8)
class UWebResponse : public UObject
{
public:
	class TArray<class FString>                        Headers;                                       // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 ReplacementMap;                                // 0x0068 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	class FString                                      IncludePath;                                   // 0x00B8 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      CharSet;                                       // 0x00C8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class AWebConnection*                              Connection;                                    // 0x00D8 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSentText : 1;                                 // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSentResponse : 1;                             // 0x00E0 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebResponse");
		}

		return uClassPointer;
	};

	bool SentResponse();
	bool SentText();
	void Redirect(const class FString& URL);
	void SendStandardHeaders(const class FString& optionalContentType, bool optionalBCache);
	void HTTPError(int32_t ErrorNum, const class FString& optionalData);
	void SendHeaders();
	void AddHeader(const class FString& Header, bool optionalBReplace);
	void HTTPHeader(const class FString& Header);
	void HTTPResponse(const class FString& Header);
	void FailAuthentication(const class FString& Realm);
	bool SendCachedFile(const class FString& Filename, const class FString& optionalContentType);
	void eventSendBinary(int32_t Count, uint8_t B);
	void eventSendText(const class FString& Text, bool optionalBNoCRLF);
	void Dump();
	class FString GetHTTPExpiration(int32_t optionalOffsetSeconds);
	class FString LoadParsedUHTM(const class FString& Filename);
	bool IncludeBinaryFile(const class FString& Filename);
	bool IncludeUHTM(const class FString& Filename);
	void ClearSubst();
	void Subst(const class FString& Variable, const class FString& Value, bool optionalBClear);
	bool FileExists(const class FString& Filename);
};

// Class IpDrv.MeshBeacon
// 0x0000 (0x0058 - 0x0058)
class UMeshBeacon : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeacon");
		}

		return uClassPointer;
	};

};

// Class IpDrv.MeshBeaconClient
// 0x0000 (0x0058 - 0x0058)
class UMeshBeaconClient : public UMeshBeacon
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeaconClient");
		}

		return uClassPointer;
	};

};

// Class IpDrv.MeshBeaconHost
// 0x0000 (0x0058 - 0x0058)
class UMeshBeaconHost : public UMeshBeacon
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeaconHost");
		}

		return uClassPointer;
	};

};

// Class IpDrv.OnlinePlaylistManager
// 0x0000 (0x0058 - 0x0058)
class UOnlinePlaylistManager : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePlaylistManager");
		}

		return uClassPointer;
	};

};

// Class IpDrv.OnlinePlaylistProvider
// 0x0000 (0x00C8 - 0x00C8)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePlaylistProvider");
		}

		return uClassPointer;
	};

};

// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0000 (0x00B8 - 0x00B8)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.UIDataStore_OnlinePlaylists");
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
