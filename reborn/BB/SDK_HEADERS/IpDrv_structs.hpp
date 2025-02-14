/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: IpDrv_structs.hpp
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

// ScriptStruct IpDrv.InternetLink.IpAddr
// 0x0014
struct FIpAddr
{
	class TArray<uint8_t>                              Addr;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// 0x0044
struct FPartyReservation
{
	uint8_t                                            TeamNum;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	struct FUniqueNetId                                PartyLeader;                                   // 0x0004 (0x0014) [0x0000000000000000]               
	struct FUniqueNetId                                LobbyHost;                                     // 0x0018 (0x0014) [0x0000000000000000]               
	class TArray<struct FPlayerReservation>            PartyMembers;                                  // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bWaitingOnNewConnection : 1;                   // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWaitingOnJoinSession : 1;                     // 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bTeamHost : 1;                                 // 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bGameHost : 1;                                 // 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct IpDrv.PartyBeacon.ReservationSkillRating
// 0x0008
struct FReservationSkillRating
{
	int32_t                                            SkillVersionHash;                              // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            SkillRating;                                   // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.PartyBeacon.PlayerPrivileges
// 0x0004
struct FPlayerPrivileges
{
	int32_t                                            PrivilegeMask;                                 // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// 0x0024
struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;                                         // 0x0000 (0x0014) [0x0000000000000000]               
	struct FReservationSkillRating                     ReservationSkillRating;                        // 0x0014 (0x0008) [0x0000000000000000]               
	struct FPlayerPrivileges                           Privileges;                                    // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasVoted : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct IpDrv.PartyBeaconClient.PartyBeaconHostData
// 0x0014
struct FPartyBeaconHostData
{
	class FString                                      HostAddress;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            HostPort;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct IpDrv.UPnPDiscoveryServer.UPnPDeviceData
// 0x0060
struct FUPnPDeviceData
{
	class FString                                      DeviceType;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FriendlyName;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Manufacturer;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ModelName;                                     // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ModelNumber;                                   // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UDN;                                           // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct IpDrv.UPnPDiscoveryServer.DiscoveryResult
// 0x0084
struct FDiscoveryResult
{
	class FString                                      Address;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Location;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUPnPDeviceData                             Data;                                          // 0x0020 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            RequestId;                                     // 0x0080 (0x0004) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
