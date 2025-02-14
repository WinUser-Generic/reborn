/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: Engine_structs.hpp
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

// ScriptStruct Engine.Actor.ResourcePoolReference
// 0x0018
struct FResourcePoolReference
{
	class AResourcePoolManager*                        PoolManager;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            PoolIndexInManager;                            // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            PoolGUID;                                      // 0x0009 (0x0001) [0x0000000000000000]               
	class UResourcePool*                               Data;                                          // 0x0010 (0x0008) [0x1000000000000000]               
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x0018
struct FPhysEffectInfo
{
	float                                              Threshold;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ReFireDelay;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             Effect;                                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UImpactDefinition*                           ImpactDefinition;                              // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0039
struct FRigidBodyState
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FQuat                                       Quaternion;                                    // 0x0010 (0x0010) [0x0000000000000000]               
	struct FVector                                     LinVel;                                        // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     AngVel;                                        // 0x002C (0x000C) [0x0000000000000000]               
	uint8_t                                            bNewData;                                      // 0x0038 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	int32_t                                            NumChannels;                                   // 0x0008 (0x0004) [0x0000000000100000]               
};

// ScriptStruct Engine.Actor.TimerData
// 0x0020
struct FTimerData
{
	uint32_t                                           bLoop : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPaused : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FName                                       FuncName;                                      // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              Rate;                                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Count;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TimerTimeDilation;                             // 0x0014 (0x0004) [0x0000000000000000]               
	class UObject*                                     TimerObj;                                      // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x0028
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	class UPhysicalMaterial*                           PhysMaterial;                                  // 0x0008 (0x0008) [0x0000000000100000]               
	int32_t                                            Item;                                          // 0x0010 (0x0004) [0x0000000000100000]               
	int32_t                                            LevelIndex;                                    // 0x0014 (0x0004) [0x0000000000100000]               
	struct FName                                       BoneName;                                      // 0x0018 (0x0008) [0x0000000000100000]               
	class UPrimitiveComponent*                         HitComponent;                                  // 0x0020 (0x0008) [0x0000000004180008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x006C
struct FImpactInfo
{
	class AActor*                                      HitActor;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	struct FVector                                     HitLocation;                                   // 0x0008 (0x000C) [0x0000000000100000]               
	struct FVector                                     HitNormal;                                     // 0x0014 (0x000C) [0x0000000000100000]               
	struct FVector                                     RayDir;                                        // 0x0020 (0x000C) [0x0000000000100000]               
	struct FVector                                     StartTrace;                                    // 0x002C (0x000C) [0x0000000000100000]               
	struct FTraceHitInfo                               HitInfo;                                       // 0x0038 (0x0028) [0x0000000000180000] (CPF_Component)
	struct FVector                                     EndTrace;                                      // 0x0060 (0x000C) [0x0000000000100000]               
};

// ScriptStruct Engine.Actor.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	class TArray<float>                                ChannelWeights;                                // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x0048
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                               // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     ContactNormal;                                 // 0x000C (0x000C) [0x0000000000000000]               
	float                                              ContactPenetration;                            // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     ContactVelocity[0x2];                          // 0x001C (0x0018) [0x0000000000000000]               
	class UPhysicalMaterial*                           PhysMaterial[0x2];                             // 0x0038 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	class TArray<struct FRigidBodyContactInfo>         ContactInfos;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     TotalNormalForceVector;                        // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     TotalFrictionForceVector;                      // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.ActorReference
// 0x0018
struct FActorReference
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       Guid;                                          // 0x0008 (0x0010) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.Actor.NavReference
// 0x0018
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       Guid;                                          // 0x0008 (0x0010) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.Actor.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Position;                                      // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     CachedBaseLocation;                            // 0x0014 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CachedBaseRotation;                            // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     CachedTransPosition;                           // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.SkeletalThrottleData
// 0x0011
struct FSkeletalThrottleData
{
	uint32_t                                           bThrottled : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bForceUpdate : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LastCheck;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MissedTime;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              LastAddedTime;                                 // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0010 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.AkEvent.AkPlayingInfo
// 0x000C
struct FAkPlayingInfo
{
	class UAkComponent*                                SourceComponent;                               // 0x0000 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	int32_t                                            AkPlayingId;                                   // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.PawnAllegiance.OpinionData
// 0x0010
struct FOpinionData
{
	uint8_t                                            Opinion;                                       // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UPawnAllegiance*                             Allegiance;                                    // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0020
struct FKeyValuePair
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x0038
struct FPlayerResponseLine
{
	int32_t                                            PlayerNum;                                     // 0x0000 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            PlayerID;                                      // 0x0004 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      PlayerName;                                    // 0x0008 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Ping;                                          // 0x0018 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            Score;                                         // 0x001C (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            StatsID;                                       // 0x0020 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class TArray<struct FKeyValuePair>                 PlayerInfo;                                    // 0x0028 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0080
struct FServerResponseLine
{
	int32_t                                            ServerID;                                      // 0x0000 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      IP;                                            // 0x0008 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0018 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            QueryPort;                                     // 0x001C (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      ServerName;                                    // 0x0020 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0030 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      GameType;                                      // 0x0040 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            CurrentPlayers;                                // 0x0050 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            MaxPlayers;                                    // 0x0054 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            Ping;                                          // 0x0058 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class TArray<struct FKeyValuePair>                 ServerInfo;                                    // 0x0060 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FPlayerResponseLine>           PlayerInfo;                                    // 0x0070 (0x0010) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.UniqueNetId
// 0x0014
struct FUniqueNetId
{
	uint8_t                                            RawId[0x10];                                   // 0x0000 (0x0010) [0x0000000000000000]               
	uint32_t                                           bHasValue : 1;                                 // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlineTitleFileHeader
// 0x0040
struct FOnlineTitleFileHeader
{
	int32_t                                            FileVersion;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      BuildTimestamp;                                // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      BuildAuthor;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      BuildMachineName;                              // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ChangeListNum;                                 // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            RevisionNum;                                   // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.FeedEntity
// 0x0028
struct FFeedEntity
{
	class FString                                      Meta;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Type;                                          // 0x0010 (0x0001) [0x0000000000000000]               
	class FString                                      AspectRatio;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.FeedStoryRequestData
// 0x0104
struct FFeedStoryRequestData
{
	class FString                                      Caption;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FFeedEntity>                   Targets;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StoryComment;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CaptionTemplate;                               // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCaptionComponent>             CaptionComponents;                             // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StoryId;                                       // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StoryType;                                     // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Subtype;                                       // 0x0070 (0x0004) [0x0000000000000000]               
	struct FFeedEntity                                 Source;                                        // 0x0078 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SmallImageUrl;                                 // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      SmallImageAspectRatio;                         // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LargeImageUrl;                                 // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Date;                                          // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Relevancy;                                     // 0x00E0 (0x0004) [0x0000000000000000]               
	int32_t                                            CommentCount;                                  // 0x00E4 (0x0004) [0x0000000000000000]               
	int32_t                                            LikeCount;                                     // 0x00E8 (0x0004) [0x0000000000000000]               
	class FString                                      TitleId;                                       // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bLiked : 1;                                    // 0x0100 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReshareable : 1;                              // 0x0100 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.OnlineSubsystem.CaptionComponent
// 0x0020
struct FCaptionComponent
{
	class FString                                      Key;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.FeedCaption
// 0x0020
struct FFeedCaption
{
	class FString                                      LanguageCode;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      CaptionString;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x0014
struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0014) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.OnlineEntitlement
// 0x0018
struct FOnlineEntitlement
{
	class FString                                      EntitlementId;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bConsumable : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ConsumableBalance;                             // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x0018
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0014) [0x0000000000000000]               
	uint32_t                                           bIsFriend : 1;                                 // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineSubsystem.PlatformSessionData
// 0x0084
struct FPlatformSessionData
{
	uint8_t                                            RawData[0x80];                                 // 0x0000 (0x0080) [0x0000000000000000]               
	uint32_t                                           bHasValue : 1;                                 // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineSubsystem.PlatformUserId
// 0x0008
struct FPlatformUserId
{
	uint8_t                                            RawId[0x4];                                    // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasValue : 1;                                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x0058
struct FOnlineFriend
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FQWord                                      SessionId;                                     // 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      SessionInfo;                                   // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      NickName;                                      // 0x0030 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      PresenceInfo;                                  // 0x0040 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            FriendState;                                   // 0x0050 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsOnline : 1;                                 // 0x0054 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bIsPlaying : 1;                                // 0x0054 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bIsPlayingThisGame : 1;                        // 0x0054 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bIsJoinable : 1;                               // 0x0054 (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bHaveInvited : 1;                              // 0x0054 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bHasInvitedYou : 1;                            // 0x0054 (0x0004) [0x0000000000000002] [0x00000020] (CPF_Const)
	uint32_t                                           bHaveRequested : 1;                            // 0x0054 (0x0004) [0x0000000000000002] [0x00000040] (CPF_Const)
	uint32_t                                           bHasRequestedYou : 1;                          // 0x0054 (0x0004) [0x0000000000000002] [0x00000080] (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.AppIdLicenseInfo
// 0x0014
struct FAppIdLicenseInfo
{
	class FString                                      AppID;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LicenseMask;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.TOCInfo
// 0x0030
struct FTOCInfo
{
	class FString                                      TOC;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RootPath;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Path;                                          // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x00A0
struct FOnlineContent
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsCorrupt : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            LicenseMask;                                   // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      FriendlyName;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Filename;                                      // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ContentPath;                                   // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ContentPackages;                               // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ContentFiles;                                  // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FAppIdLicenseInfo>             CachedAppIdInfo;                               // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FTOCInfo                                    TOCInfo;                                       // 0x0070 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContentNameInfo
// 0x0024
struct FOnlineContentNameInfo
{
	class FString                                      ContentName;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            EngineVersion;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	struct FGuid                                       CookedVersionID;                               // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.NamedOnlineContent
// 0x0029 (0x00A0 - 0x00C9)
struct FNamedOnlineContent : FOnlineContent
{
	struct FOnlineContentNameInfo                      NameInfo;                                      // 0x00A0 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            NamedContentType;                              // 0x00C8 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.CompatibilityOnlineContent
// 0x00E8
struct FCompatibilityOnlineContent
{
	int32_t                                            VersionNumber;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	struct FNamedOnlineContent                         Container;                                     // 0x0008 (0x00D0) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FNamedOnlineContent>           Content;                                       // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.MarketplaceContent
// 0x0040
struct FMarketplaceContent
{
	class FString                                      OfferId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      OfferName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      OfferDescription;                              // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      PriceText;                                     // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x001C
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0014) [0x0000000000000000]               
	int32_t                                            TeamID;                                        // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFlag
// 0x0010
struct FOnlineFlag
{
	uint8_t                                            Value;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            Raised;                                        // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            Lowered;                                       // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            Padding;                                       // 0x0003 (0x0001) [0x0000000000000000]               
	float                                              RaisedTime;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              LoweredTime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x001C
struct FLocalTalker
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHasVoice : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasNetworkedVoice : 1;                        // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWasTalking : 1;                               // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsTalking : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIsRegistered : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000010] 
	struct FOnlineFlag                                 TalkingFlag;                                   // 0x000C (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x0018
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                      // 0x0000 (0x0014) [0x0000000000000000]               
	uint32_t                                           bIsRegistered : 1;                             // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x0040
struct FNamedSession
{
	struct FName                                       SessionName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPlatformUserId                             OwningUserId;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	struct FPointer                                    SessionInfo;                                   // 0x0010 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class TArray<struct FOnlineRegistrant>             Registrants;                                   // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  PlayersMet;                                    // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x004C
struct FAchievementDetails
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      AchievementName;                               // 0x0008 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      HowTo;                                         // 0x0028 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class USurface*                                    Image;                                         // 0x0038 (0x0008) [0x0000000000000000]               
	uint8_t                                            MonthEarned;                                   // 0x0040 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            DayEarned;                                     // 0x0041 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            YearEarned;                                    // 0x0042 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            DayOfWeekEarned;                               // 0x0043 (0x0001) [0x0000000000000002] (CPF_Const)   
	int32_t                                            GamerPoints;                                   // 0x0044 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsSecret : 1;                                 // 0x0048 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bWasAchievedOnline : 1;                        // 0x0048 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bWasAchievedOffline : 1;                       // 0x0048 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// 0x0034
struct FOnlinePartyMember
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0014) [0x0000000000000002] (CPF_Const)   
	class FString                                      NickName;                                      // 0x0018 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FPlatformUserId                             UserId;                                        // 0x0028 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsLocal : 1;                                  // 0x0030 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bIsPlayingThisGame : 1;                        // 0x0030 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.FeedAction
// 0x0048
struct FFeedAction
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Uri;                                           // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StartArguments;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FFeedCaption>                  ButtonCaptions;                                // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ImageUrl;                                      // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.FeedStoryData
// 0x0058
struct FFeedStoryData
{
	class TArray<struct FFeedCaption>                  Captions;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FFeedCaption>                  CondensedCaptions;                             // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      StoryComment;                                  // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FFeedAction>                   Actions;                                       // 0x0030 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Subtype;                                       // 0x0040 (0x0004) [0x0000000000000000]               
	class TArray<struct FFeedEntity>                   Targets;                                       // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerDisplayData
// 0x0038
struct FOnlinePlayerDisplayData
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0014) [0x0000000000000000]               
	class FString                                      DisplayName;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ProfileImageURL;                               // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct FRBCollisionChannelContainer
{
	uint32_t                                           Default : 1;                                   // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           Nothing : 1;                                   // 0x0000 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           Pawn : 1;                                      // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           Vehicle : 1;                                   // 0x0000 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           Water : 1;                                     // 0x0000 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           GameplayPhysics : 1;                           // 0x0000 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           EffectPhysics : 1;                             // 0x0000 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           Untitled1 : 1;                                 // 0x0000 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           Untitled2 : 1;                                 // 0x0000 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           TossedItems : 1;                               // 0x0000 (0x0004) [0x0000000000000003] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           TossedItemsPlayerVehicle : 1;                  // 0x0000 (0x0004) [0x0000000000000003] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           Cloth : 1;                                     // 0x0000 (0x0004) [0x0000000000000003] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           FluidDrain : 1;                                // 0x0000 (0x0004) [0x0000000000000003] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           SoftBody : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           FracturedMeshPart : 1;                         // 0x0000 (0x0004) [0x0000000000000003] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           BlockingVolume : 1;                            // 0x0000 (0x0004) [0x0000000000000003] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           DeadPawn : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           Clothing : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           ClothingCollision : 1;                         // 0x0000 (0x0004) [0x0000000000000003] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           TossedItemsEnemyVehicle : 1;                   // 0x0000 (0x0004) [0x0000000000000003] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           PlayerVehicle : 1;                             // 0x0000 (0x0004) [0x0000000000000003] [0x00100000] (CPF_Edit | CPF_Const)
	uint32_t                                           EnemyVehicle : 1;                              // 0x0000 (0x0004) [0x0000000000000003] [0x00200000] (CPF_Edit | CPF_Const)
	uint32_t                                           PlayerVehicleEnemyVehicle : 1;                 // 0x0000 (0x0004) [0x0000000000000003] [0x00400000] (CPF_Edit | CPF_Const)
	uint32_t                                           TossedItemsPlayerVehicleEnemyVehicle : 1;      // 0x0000 (0x0004) [0x0000000000000003] [0x00800000] (CPF_Edit | CPF_Const)
	uint32_t                                           WillowPickup : 1;                              // 0x0000 (0x0004) [0x0000000000000003] [0x01000000] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.PrimitiveComponent.OctreeArray_Mirror
// 0x0050
struct FOctreeArray_Mirror
{
	struct FPointer                                    InlineData[0x8];                               // 0x0000 (0x0040) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    Data;                                          // 0x0040 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ArrayNum;                                      // 0x0048 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            ArrayMax;                                      // 0x004C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	uint32_t                                           bOpaque : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTranslucent : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDistortion : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOneLayerDistortionRelevance : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bLit : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bUsesSceneColor : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0004
struct FLightingChannelContainer
{
	uint32_t                                           bInitialized : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           BSP : 1;                                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           Static : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           Dynamic : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           CompositeDynamic : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           Skybox : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           Unnamed : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           Unnamed01 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           Unnamed02 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           Unnamed03 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           Unnamed04 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           Unnamed05 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           Cinematic : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           Cinematic01 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           Cinematic02 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	uint32_t                                           Cinematic03 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	uint32_t                                           Cinematic04 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	uint32_t                                           Cinematic05 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
	uint32_t                                           Cinematic06 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00040000] (CPF_Edit)
	uint32_t                                           Cinematic07 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00080000] (CPF_Edit)
	uint32_t                                           Cinematic08 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00100000] (CPF_Edit)
	uint32_t                                           Cinematic09 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00200000] (CPF_Edit)
	uint32_t                                           Gameplay : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00400000] (CPF_Edit)
	uint32_t                                           Gameplay01 : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00800000] (CPF_Edit)
	uint32_t                                           Gameplay02 : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x01000000] (CPF_Edit)
	uint32_t                                           Gameplay03 : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x02000000] (CPF_Edit)
	uint32_t                                           Crowd : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x04000000] (CPF_Edit)
	uint32_t                                           PhysX : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x08000000] (CPF_Edit)
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0010
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Destination;                                   // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.IInstanceData.InstanceDataCore2
// 0x003C
struct FInstanceDataCore2
{
	struct FVector                                     Vector;                                        // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class UObject* Object;                                        // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject* InteractIcon;                                  // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject* SecondaryInteractIcon;                         // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       Name;                                          // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Int;                                           // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Type;                                          // 0x0034 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            CollisionType;                                 // 0x0035 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bDeleteByOwner : 1;                            // 0x0038 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsUsable : 1;                                 // 0x0038 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bIsSecondaryUsable : 1;                        // 0x0038 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bIsSwitchChild : 1;                            // 0x0038 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct Engine.IInstanceData.InstanceDataItem2
// 0x005D
struct FInstanceDataItem2
{
	struct FInstanceDataCore2                          Core;                                          // 0x0000 (0x0040) [0x0000000000000001] (CPF_Edit)    
	class FString                                      String;                                        // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FPointer                                    SourceBodyComposition;                         // 0x0050 (0x0008) [0x0000000000001000] (CPF_Native)  
	int32_t                                            BodyCompositionIndex;                          // 0x0058 (0x0004) [0x0000000000000000]               
	uint8_t                                            ParentSlotUID;                                 // 0x005C (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.IInstanceData.InstanceDataSet
// 0x0010
struct FInstanceDataSet
{
	class TArray<struct FInstanceDataUnion>            Data;                                          // 0x0000 (0x0010) [0x0000000020480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink | CPF_Deprecated)
};

// ScriptStruct Engine.IInstanceData.ComponentData
// 0x0030
struct FComponentData
{
	class UActorComponent* Component;                                     // 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint8_t                                            CollisionType;                                 // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAttachToMesh : 1;                             // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsUsable : 1;                                 // 0x000C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bIsSecondaryUsable : 1;                        // 0x000C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	struct FName                                       MeshSocketName;                                // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UBaseHitRegionDefinition* HitRegionDefinition;                           // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UEngineInteractionIconDefinition* InteractIcon;                                  // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UEngineInteractionIconDefinition* SecondaryInteractIcon;                         // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.IInstanceData.InstanceDataUnion
// 0x0074
struct FInstanceDataUnion
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Type;                                          // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Replication;                                   // 0x0009 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MaxSwitchValue;                                // 0x000A (0x0001) [0x0000000000000000]               
	uint8_t                                            BitsRequiredForMaxSwitchValue;                 // 0x000B (0x0001) [0x0000000000000000]               
	uint32_t                                           Bool : 1;                                      // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           DeleteByOwner : 1;                             // 0x000C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	int32_t                                            Int;                                           // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              Float;                                         // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Vector;                                        // 0x0018 (0x000C) [0x0000000000000000]               
	class UObject*                                     Object;                                        // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FComponentData                              ComponentData;                                 // 0x0030 (0x0030) [0x0000000000080001] (CPF_Edit | CPF_Component)
	class FString                                      String;                                        // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            BodyCompositionIndex;                          // 0x0070 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0058
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     SrcActorOffset;                                // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     SrcActorDesiredOffset;                         // 0x0014 (0x000C) [0x0000000000000000]               
	class FString                                      DebugText;                                     // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeRemaining;                                 // 0x0030 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Duration;                                      // 0x0034 (0x0004) [0x0000000000000000]               
	struct FColor                                      TextColor;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAbsoluteLocation : 1;                         // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bKeepAttachedToActor : 1;                      // 0x003C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FVector                                     OrigActorLocation;                             // 0x0040 (0x000C) [0x0000000000000000]               
	class UFont*                                       Font;                                          // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0035
struct FClientAdjustment
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            newPhysics;                                    // 0x0004 (0x0001) [0x0000000000000000]               
	struct FVector                                     NewLoc;                                        // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     NewVel;                                        // 0x0014 (0x000C) [0x0000000000000000]               
	class AActor*                                      NewBase;                                       // 0x0020 (0x0008) [0x0000000000000000]               
	struct FVector                                     NewFloor;                                      // 0x0028 (0x000C) [0x0000000000000000]               
	uint8_t                                            bAckGoodMove;                                  // 0x0034 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.CinematicModeOptions
// 0x0006
struct FCinematicModeOptions
{
	uint32_t                                           bCinematicMode : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHidePlayer : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAffectsHUD : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bAffectsMovement : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bAffectsTurning : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bAffectsButtons : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bAffectsGodMode : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bAffectsNoTarget : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bAllowCinematicSplitScreen : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bAffectsAudio : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bKismetSetCinematicMode : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bHideOutlines : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bAffectsSkills : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bHideScreenParticles : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	uint8_t                                            ApplicationMode;                               // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            ModeToken;                                     // 0x0005 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.AkEvent.AudioListener
// 0x0004
struct FAudioListener
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerController.InputMatchRequest
// 0x0048
struct FInputMatchRequest
{
	class TArray<struct FInputEntry>                   Inputs;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      MatchActor;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	struct FName                                       MatchFuncName;                                 // 0x0018 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             MatchDelegate;                                 // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       FailedFuncName;                                // 0x0030 (0x0008) [0x0000000000000000]               
	struct FName                                       RequestName;                                   // 0x0038 (0x0008) [0x0000000000000000]               
	int32_t                                            MatchIdx;                                      // 0x0040 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastMatchTime;                                 // 0x0044 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              Value;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeDelta;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x000C (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.VelocityObstacleStat
// 0x0020
struct FVelocityObstacleStat
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            Priority;                                      // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.LightMapRef
// 0x0008
struct FLightMapRef
{
	struct FPointer                                    Reference;                                     // 0x0000 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x0024
struct FLocalizedSubtitle
{
	class FString                                      LanguageExt;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FSubtitleCue>                  Subtitles;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bMature : 1;                                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bManualWordWrap : 1;                           // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSingleLine : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineBaseTypes.SubtitleCue
// 0x0014
struct FSubtitleCue
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              Time;                                          // 0x0010 (0x0004) [0x0000000000008003] (CPF_Edit | CPF_Const | CPF_Localized)
};

// ScriptStruct Engine.EngineBaseTypes.RenderingPerformanceOverrides
// 0x0004
struct FRenderingPerformanceOverrides
{
	uint32_t                                           bAllowAmbientOcclusion : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowLightShafts : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

struct FBox {
	char UnknownData[0x1c];
};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// 0x00A4
struct FDominantShadowInfo
{
	struct FMatrix                                     WorldToLight;                                  // 0x0000 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     LightToWorld;                                  // 0x0040 (0x0040) [0x0000000000000000]               
	struct FBox                                        LightSpaceImportanceBounds;                    // 0x0080 (0x001C) [0x0000000000000000]               
	int32_t                                            ShadowMapSizeX;                                // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            ShadowMapSizeY;                                // 0x00A0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IndirectLightingSaturation;                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ShadowExponent;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x0004 (0x000C - 0x0010)
struct FLightmassPointLightSettings : FLightmassLightSettings
{
	float                                              LightSourceRadius;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x0004 (0x000C - 0x0010)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings
{
	float                                              LightSourceAngle;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x001C
struct FLightmassPrimitiveSettings
{
	uint32_t                                           bUseTwoSidedLighting : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bShadowIndirectOnly : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseEmissiveForStaticLighting : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bUseVertexNormalForHemisphereGather : 1;       // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bGenerateVolumeLightingSamples : 1;            // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	float                                              EmissiveLightFalloffExponent;                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EmissiveLightExplicitInfluenceRadius;          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EmissiveBoost;                                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FullyOccludedSamplesFraction;                  // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x0014
struct FLightmassDebugOptions
{
	uint32_t                                           bDebugMode : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bStatsEnabled : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bGatherBSPSurfacesAcrossComponents : 1;        // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              CoplanarTolerance;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseImmediateImport : 1;                       // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bImmediateProcessMappings : 1;                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bSortMappings : 1;                             // 0x0008 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bDumpBinaryFiles : 1;                          // 0x0008 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bDebugMaterials : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bOnlyCalcDebugTexelMappings : 1;               // 0x0008 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bUseRandomColors : 1;                          // 0x0008 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bColorBordersGreen : 1;                        // 0x0008 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bColorByExecutionTime : 1;                     // 0x0008 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	float                                              ExecutionTimeDivisor;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bInitialized : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	uint32_t                                           bDistributionEnabled : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceContentExport : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bInitialized : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// 0x0024
struct FRootMotionCurve
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveVector                          Curve;                                         // 0x0008 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MaxCurveTime;                                  // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x000C
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MaterialIndex;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.PostProcessMaterialRef
// 0x0008
struct FPostProcessMaterialRef
{
	class UMaterialEffect*                             Effect;                                        // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// 0x0028
struct FMaterialReferenceList
{
	class UMaterialInterface*                          TargetMaterial;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FPrimitiveMaterialRef>         AffectedMaterialRefs;                          // 0x0008 (0x0010) [0x0000020000480000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FPostProcessMaterialRef>       AffectedPPChainMaterialRefs;                   // 0x0018 (0x0010) [0x0000020000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BlendFunction;                                 // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendExp;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLockOutgoing : 1;                             // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x0038
struct FTViewTarget
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AController*                                 Controller;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FTPOV                                       POV;                                           // 0x0010 (0x001C) [0x0000000000000001] (CPF_Edit)    
	float                                              AspectRatio;                                   // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class APlayerReplicationInfo*                      PRI;                                           // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PostProcessVolume.LUTBlender
// 0x0024
struct FLUTBlender
{
	class TArray<class UTexture*>                      LUTTextures;                                   // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                LUTWeights;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasChanged : 1;                               // 0x0020 (0x0004) [0x0000000000003002] [0x00000001] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.PostProcessVolume.PostProcessSettings
// 0x0118
struct FPostProcessSettings
{
	uint32_t                                           bOverride_EnableBloom : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_EnableDOF : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_EnableMotionBlur : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_EnableSceneEffect : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverride_AllowAmbientOcclusion : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bOverride_OverrideRimShaderColor : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bOverride_Bloom_Scale : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bOverride_Bloom_Threshold : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bOverride_Bloom_Tint : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bOverride_Bloom_ScreenBlendThreshold : 1;      // 0x0000 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bOverride_Bloom_InterpolationDuration : 1;     // 0x0000 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bOverride_DOF_FalloffExponent : 1;             // 0x0000 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bOverride_DOF_BlurKernelSize : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bOverride_DOF_BlurBloomKernelSize : 1;         // 0x0000 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bOverride_DOF_MaxNearBlurAmount : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bOverride_DOF_MinBlurAmount : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bOverride_DOF_MaxFarBlurAmount : 1;            // 0x0000 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bOverride_DOF_FocusType : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bOverride_DOF_FocusInnerRadius : 1;            // 0x0000 (0x0004) [0x0000000000000000] [0x00040000] 
	uint32_t                                           bOverride_DOF_FocusDistance : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bOverride_DOF_FocusPosition : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00100000] 
	uint32_t                                           bOverride_DOF_TunnelVisionScale : 1;           // 0x0000 (0x0004) [0x0000000000000000] [0x00200000] 
	uint32_t                                           bOverride_DOF_TunnelVisionYOffset : 1;         // 0x0000 (0x0004) [0x0000000000000000] [0x00400000] 
	uint32_t                                           bOverride_DOF_InterpolationDuration : 1;       // 0x0000 (0x0004) [0x0000000000000000] [0x00800000] 
	uint32_t                                           bOverride_MotionBlur_MaxVelocity : 1;          // 0x0000 (0x0004) [0x0000000000000000] [0x01000000] 
	uint32_t                                           bOverride_MotionBlur_Amount : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x02000000] 
	uint32_t                                           bOverride_MotionBlur_FullMotionBlur : 1;       // 0x0000 (0x0004) [0x0000000000000000] [0x04000000] 
	uint32_t                                           bOverride_MotionBlur_CameraRotationThreshold : 1;// 0x0000 (0x0004) [0x0000000000000000] [0x08000000] 
	uint32_t                                           bOverride_MotionBlur_CameraTranslationThreshold : 1;// 0x0000 (0x0004) [0x0000000000000000] [0x10000000] 
	uint32_t                                           bOverride_MotionBlur_InterpolationDuration : 1;// 0x0000 (0x0004) [0x0000000000000000] [0x20000000] 
	uint32_t                                           bOverride_Scene_Desaturation : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x40000000] 
	uint32_t                                           bOverride_Scene_Colorize : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x80000000] 
	uint32_t                                           bOverride_Scene_TonemapperScale : 1;           // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride_Scene_ImageGrainScale : 1;           // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverride_Scene_HighLights : 1;                // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverride_Scene_MidTones : 1;                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverride_Scene_Shadows : 1;                   // 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bOverride_Scene_InterpolationDuration : 1;     // 0x0004 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bOverride_Scene_ColorGradingLUT : 1;           // 0x0004 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bOverride_RimShader_Color : 1;                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bOverride_RimShader_InterpolationDuration : 1; // 0x0004 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bOverride_WorldSilhouette_Color : 1;           // 0x0004 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bOverride_WorldSilhouette_Distance : 1;        // 0x0004 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bOverride_WorldSilhouette_Ramp : 1;            // 0x0004 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bOverride_WorldSilhouette_MaxBrightness : 1;   // 0x0004 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bOverride_WorldSilhouette_MinBrightness : 1;   // 0x0004 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bOverride_WorldSilhouette_Desaturation : 1;    // 0x0004 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bOverride_WorldSilhouette_Brightness : 1;      // 0x0004 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bOverride_WorldSilhouette_InterpolationDuration : 1;// 0x0004 (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bEnableBloom : 1;                              // 0x0004 (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
	uint32_t                                           bEnableDOF : 1;                                // 0x0004 (0x0004) [0x0000000000000001] [0x00040000] (CPF_Edit)
	uint32_t                                           bTwoLayerSimpleDepthOfField : 1;               // 0x0004 (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bEnableMotionBlur : 1;                         // 0x0004 (0x0004) [0x0000000000000001] [0x00100000] (CPF_Edit)
	uint32_t                                           bEnableSceneEffect : 1;                        // 0x0004 (0x0004) [0x0000000000000001] [0x00200000] (CPF_Edit)
	uint32_t                                           bAllowAmbientOcclusion : 1;                    // 0x0004 (0x0004) [0x0000000000000001] [0x00400000] (CPF_Edit)
	uint32_t                                           bOverrideRimShaderColor : 1;                   // 0x0004 (0x0004) [0x0000000000000001] [0x00800000] (CPF_Edit)
	float                                              Bloom_Scale;                                   // 0x0008 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Bloom_Threshold;                               // 0x000C (0x0004) [0x0000000200000001] (CPF_Edit)    
	struct FColor                                      Bloom_Tint;                                    // 0x0010 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Bloom_ScreenBlendThreshold;                    // 0x0014 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Bloom_InterpolationDuration;                   // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DOF_BlurBloomKernelSize;                       // 0x001C (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_FalloffExponent;                           // 0x0020 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_BlurKernelSize;                            // 0x0024 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_MaxNearBlurAmount;                         // 0x0028 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_MinBlurAmount;                             // 0x002C (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_MaxFarBlurAmount;                          // 0x0030 (0x0004) [0x0000000200000001] (CPF_Edit)    
	uint8_t                                            DOF_FocusType;                                 // 0x0034 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              DOF_FocusInnerRadius;                          // 0x0038 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_FocusDistance;                             // 0x003C (0x0004) [0x0000000200000001] (CPF_Edit)    
	struct FVector                                     DOF_FocusPosition;                             // 0x0040 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              DOF_TunnelVisionScale;                         // 0x004C (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_TunnelVisionYOffset;                       // 0x0050 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              DOF_InterpolationDuration;                     // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MotionBlur_MaxVelocity;                        // 0x0058 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              MotionBlur_Amount;                             // 0x005C (0x0004) [0x0000000200000001] (CPF_Edit)    
	uint32_t                                           MotionBlur_FullMotionBlur : 1;                 // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              MotionBlur_CameraRotationThreshold;            // 0x0064 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              MotionBlur_CameraTranslationThreshold;         // 0x0068 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              MotionBlur_InterpolationDuration;              // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Scene_Desaturation;                            // 0x0070 (0x0004) [0x0000000200000001] (CPF_Edit)    
	struct FVector                                     Scene_Colorize;                                // 0x0074 (0x000C) [0x0000000200000001] (CPF_Edit)    
	float                                              Scene_TonemapperScale;                         // 0x0080 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              Scene_ImageGrainScale;                         // 0x0084 (0x0004) [0x0000000200000001] (CPF_Edit)    
	struct FVector                                     Scene_HighLights;                              // 0x0088 (0x000C) [0x0000000200000001] (CPF_Edit)    
	struct FVector                                     Scene_MidTones;                                // 0x0094 (0x000C) [0x0000000200000001] (CPF_Edit)    
	struct FVector                                     Scene_Shadows;                                 // 0x00A0 (0x000C) [0x0000000200000001] (CPF_Edit)    
	float                                              Scene_InterpolationDuration;                   // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                RimShader_Color;                               // 0x00B0 (0x0010) [0x0000000000000001] (CPF_Edit)    
	float                                              RimShader_InterpolationDuration;               // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    ColorGrading_LookupTable;                      // 0x00C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLUTBlender                                 ColorGradingLUT;                               // 0x00D0 (0x0028) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FColor                                      WorldSilhouette_Color;                         // 0x00F8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              WorldSilhouette_Distance;                      // 0x00FC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              WorldSilhouette_Ramp;                          // 0x0100 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              WorldSilhouette_MaxBrightness;                 // 0x0104 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              WorldSilhouette_MinBrightness;                 // 0x0108 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              WorldSilhouette_Desaturation;                  // 0x010C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              WorldSilhouette_Brightness;                    // 0x0110 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              WorldSilhouette_InterpolationDuration;         // 0x0114 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FTPOV                                       POV;                                           // 0x0004 (0x001C) [0x0000000000000000]               
};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// 0x0040
struct FKismetDrawTextInfo
{
	class FString                                      MessageText;                                   // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      AppendedText;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UFont*                                       MessageFont;                                   // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   MessageFontScale;                              // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   MessageOffset;                                 // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      MessageColor;                                  // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MessageEndTime;                                // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0020
struct FConsoleMessage
{
	class FString                                      Text;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      TextColor;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              MessageLife;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class APlayerReplicationInfo*                      PRI;                                           // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x0024
struct FSeqEventLink
{
	class TArray<class USequenceEvent*>                LinkedEvents;                                  // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHidden : 1;                                   // 0x0020 (0x0004) [0x0000000800000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x0020 (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bClampedMax : 1;                               // 0x0020 (0x0004) [0x0000000800000000] [0x00000004] 
	uint32_t                                           bClampedMin : 1;                               // 0x0020 (0x0004) [0x0000000800000000] [0x00000008] 
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x0050
struct FSeqVarLink
{
	class UClass*                                      ExpectedType;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<class USequenceVariable*>             LinkedVariables;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       LinkVar;                                       // 0x0028 (0x0008) [0x0000000000000000]               
	struct FName                                       PropertyName;                                  // 0x0030 (0x0008) [0x0000000000000000]               
	uint32_t                                           bWriteable : 1;                                // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSequenceNeverReadsOnlyWritesToThisVar : 1;    // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bModifiesLinkedObject : 1;                     // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bHidden : 1;                                   // 0x0038 (0x0004) [0x0000000800000000] [0x00000008] 
	uint32_t                                           bClampedMax : 1;                               // 0x0038 (0x0004) [0x0000000800000000] [0x00000010] 
	uint32_t                                           bClampedMin : 1;                               // 0x0038 (0x0004) [0x0000000800000000] [0x00000020] 
	uint32_t                                           bMoving : 1;                                   // 0x0038 (0x0004) [0x0000000800002000] [0x00000040] (CPF_Transient)
	uint32_t                                           bAllowAnyType : 1;                             // 0x0038 (0x0004) [0x0000000000000000] [0x00000080] 
	int32_t                                            MinVars;                                       // 0x003C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxVars;                                       // 0x0040 (0x0004) [0x0000000000000000]               
	class UProperty*                                   CachedProperty;                                // 0x0048 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x0034
struct FSeqOpOutputLink
{
	class TArray<struct FSeqOpOutputInputLink>         Links;                                         // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasImpulse : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisabled : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDisabledPIE : 1;                              // 0x0020 (0x0004) [0x0000000800000000] [0x00000004] 
	uint32_t                                           bClampedMax : 1;                               // 0x0020 (0x0004) [0x0000000800000000] [0x00000008] 
	uint32_t                                           bClampedMin : 1;                               // 0x0020 (0x0004) [0x0000000800000000] [0x00000010] 
	uint32_t                                           bHidden : 1;                                   // 0x0020 (0x0004) [0x0000000800000000] [0x00000020] 
	uint32_t                                           bIsActivated : 1;                              // 0x0020 (0x0004) [0x0000000C01002000] [0x00000040] (CPF_Transient)
	uint32_t                                           bMoving : 1;                                   // 0x0020 (0x0004) [0x0000000800002000] [0x00000080] (CPF_Transient)
	class USequenceOp*                                 LinkedOp;                                      // 0x0028 (0x0008) [0x0000000000000000]               
	float                                              ActivateDelay;                                 // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x000C
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            InputLinkIdx;                                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x0028
struct FSeqOpInputLink
{
	class FString                                      LinkDesc;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            QueuedActivations;                             // 0x0010 (0x0004) [0x0000000000000000]               
	class USequenceOp*                                 LinkedOp;                                      // 0x0018 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x0020 (0x0004) [0x0000000800000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x0020 (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bClampedMax : 1;                               // 0x0020 (0x0004) [0x0000000800000000] [0x00000004] 
	uint32_t                                           bClampedMin : 1;                               // 0x0020 (0x0004) [0x0000000800000000] [0x00000008] 
	uint32_t                                           bDisabled : 1;                                 // 0x0020 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bDisabledPIE : 1;                              // 0x0020 (0x0004) [0x0000000800000000] [0x00000020] 
	uint32_t                                           bHasImpulse : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000040] 
	float                                              ActivateDelay;                                 // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Camera.CameraShakeInstance
// 0x00A0
struct FCameraShakeInstance
{
	class UCameraShake*                                SourceShake;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       SourceShakeName;                               // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              OscillatorTimeRemaining;                       // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlendingIn : 1;                               // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendInTime;                            // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bBlendingOut : 1;                              // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              CurrentBlendOutTime;                           // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     LocSinOffset;                                  // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     RotSinOffset;                                  // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              FOVSinOffset;                                  // 0x003C (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0040 (0x0004) [0x0000000000000000]               
	class UCameraAnimInst*                             AnimInst;                                      // 0x0048 (0x0008) [0x0000000000000000]               
	uint8_t                                            PlaySpace;                                     // 0x0050 (0x0001) [0x0000000000000000]               
	uint8_t                                           UnknownData00[0xF];                               		// 0x0051 (0x000F) MISSED OFFSET
	struct FMatrix                                     UserPlaySpaceMatrix;                           // 0x0060 (0x0040) [0x0000000000000000]               
};

// ScriptStruct Engine.Pylon.NavMeshPathSize
// 0x0010
struct FNavMeshPathSize
{
	float                                              Size;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Height;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      PolyColor;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      ObstacleColor;                                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AkBank.AkBankLoadRef
// 0x0008
struct FAkBankLoadRef
{
	struct FWeakUPtr_Mirror                            AkBankWeakPointer;                             // 0x0000 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.AkComponent.SoundSourcePosition
// 0x0018
struct FSoundSourcePosition
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    Orientation;                                   // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AkComponent.AkPlaybackTrackerList
// 0x0014
struct FAkPlaybackTrackerList
{
	struct FPointer                                    Head;                                          // 0x0000 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    Tail;                                          // 0x0008 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            Num;                                           // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AkComponent.AkOcclusionLevels
// 0x0080
struct FAkOcclusionLevels
{
	float                                              CurrentObstruction[0x8];                       // 0x0000 (0x0020) [0x0000000000002000] (CPF_Transient)
	float                                              TargetObstruction[0x8];                        // 0x0020 (0x0020) [0x0000000000002000] (CPF_Transient)
	float                                              CurrentOcclusion[0x8];                         // 0x0040 (0x0020) [0x0000000000002000] (CPF_Transient)
	float                                              TargetOcclusion[0x8];                          // 0x0060 (0x0020) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AkComponent.AkComponentDebugTracking
// 0x00A0
struct FAkComponentDebugTracking
{
	struct FMap_Mirror                                 KnownRTPCs;                                    // 0x0000 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FMap_Mirror                                 KnownSwitches;                                 // 0x0050 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.AkDialogueEvent.DialogueArgument
// 0x0001
struct FDialogueArgument
{
	uint8_t                                            Source;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	class TArray<uint8_t>                              ByteStream;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Mins[0x3];                                     // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              Ranges[0x3];                                   // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimSequence.DeltaTrackInfo
// 0x0048
struct FDeltaTrackInfo
{
	struct FQuat                                       RotKey[0x2];                                   // 0x0000 (0x0020) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FVector                                     PosKey[0x2];                                   // 0x0020 (0x0018) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            RotKeyIndex[0x2];                              // 0x0038 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            PosKeyIndex[0x2];                              // 0x0040 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<float>                                CurveWeights;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0020
struct FRotationTrack
{
	class TArray<struct FQuat>                         RotKeys;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	class TArray<struct FVector>                       PosKeys;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// 0x0018
struct FSkelControlModifier
{
	struct FName                                       SkelControlName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FTimeModifier>                 Modifiers;                                     // 0x0008 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.AnimSequence.TimeModifier
// 0x0008
struct FTimeModifier
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetStrength;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x0014
struct FAnimNotifyEvent
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAnimNotify*                                 Notify;                                        // 0x0008 (0x0008) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              Duration;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0020
struct FRawAnimSequenceTrack
{
	class TArray<struct FVector>                       PosKeys;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FQuat>                         RotKeys;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNode.CurveKey
// 0x000C
struct FCurveKey
{
	struct FName                                       CurveName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNode.AnimDataGroup
// 0x0020
struct FAnimDataGroup
{
	class TArray<class UAnimNode*>                     Nodes;                                         // 0x0000 (0x0010) [0x0000000000602002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UAnimNode*                                   MasterNode;                                    // 0x0010 (0x0008) [0x0000000000202002] (CPF_Const | CPF_Transient)
	struct FName                                       GroupName;                                     // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.AnimNodeBlendBase.BoneSet
// 0x0030
struct FBoneSet
{
	class TArray<struct FBoneRule>                     Rules;                                         // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBoneInfo>                     RequiredBoneIndices;                           // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FBoneInfo>                     RestoreBoneIndices;                            // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeBlendBase.BoneBlock
// 0x0011
struct FBoneBlock
{
	class TArray<struct FName>                         BoneNames;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            Lineage;                                       // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeBlendBase.BoneRule
// 0x0019
struct FBoneRule
{
	struct FBoneBlock                                  Block;                                         // 0x0000 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            Rule;                                          // 0x0018 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeBlendBase.BoneInfo
// 0x0008
struct FBoneInfo
{
	int32_t                                            BoneIndex;                                     // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            ParentIndex;                                   // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x0020
struct FAnimBlendChild
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAnimNode*                                   Anim;                                          // 0x0008 (0x0008) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              Weight;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              BlendWeight;                                   // 0x0014 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint32_t                                           bMirrorSkeleton : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsAdditive : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AdditiveWeightScale;                           // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.PerBoneMaskInfo
// 0x0054
struct FPerBoneMaskInfo
{
	class TArray<struct FBranchInfo>                   BranchList;                                    // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              DesiredWeight;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTimeToGo;                                 // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FWeightRule>                   WeightRuleList;                                // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bWeightBasedOnNodeRules : 1;                   // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDisableForNonLocalHumanPlayers : 1;           // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bPendingBlend : 1;                             // 0x0028 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	class TArray<float>                                PerBoneWeights;                                // 0x0030 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<uint8_t>                              TransformReqBone;                              // 0x0040 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            TransformReqBoneIndex;                         // 0x0050 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.BranchInfo
// 0x000C
struct FBranchInfo
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PerBoneWeightIncrease;                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightNodeRule
// 0x0020
struct FWeightNodeRule
{
	struct FName                                       NodeName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAnimNodeBlendBase* CachedNode;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	class UAnimNodeSlot* CachedSlotNode;                                // 0x0010 (0x0008) [0x0000000000000000]               
	uint8_t                                            WeightCheck;                                   // 0x0018 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ChildIndex;                                    // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightRule
// 0x0040
struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;                                     // 0x0000 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FWeightNodeRule                             SecondNode;                                    // 0x0020 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                    // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Translation;                                   // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0130
struct FAimComponent
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                           UnknownData00[0x8];                               		// 0x0008 (0x0008) MISSED OFFSET
	struct FAimTransform                               LU;                                            // 0x0010 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               LC;                                            // 0x0030 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               LD;                                            // 0x0050 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               CU;                                            // 0x0070 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               CC;                                            // 0x0090 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               CD;                                            // 0x00B0 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               RU;                                            // 0x00D0 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               RC;                                            // 0x00F0 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               RD;                                            // 0x0110 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x0084
struct FAimOffsetProfile
{
	struct FName                                       ProfileName;                                   // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector2D                                   HorizontalRange;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   VerticalRange;                                 // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FAimComponent>                 AimComponents;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FBoneAtom>                     AimTransformsCache;                            // 0x0028 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           bDirtyAimTransformsCache : 1;                  // 0x0038 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FName                                       AnimName_LU;                                   // 0x003C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_LC;                                   // 0x0044 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_LD;                                   // 0x004C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_CU;                                   // 0x0054 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_CC;                                   // 0x005C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_CD;                                   // 0x0064 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_RU;                                   // 0x006C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_RC;                                   // 0x0074 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AnimName_RD;                                   // 0x007C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeBlendList.AnimBlendListChildTransitionInfo
// 0x0010
struct FAnimBlendListChildTransitionInfo
{
	class TArray<struct FAnimBlendListTransition>      Transitions;                                   // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeBlendList.AnimBlendListTransition
// 0x0010
struct FAnimBlendListTransition
{
	int32_t                                            TransitionChildIndex;                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DestinationChildIndex;                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TransitionTime;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bResetTransitionChildren : 1;                  // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.AnimNodeBlendList.BlendListChildData
// 0x0010
struct FBlendListChildData
{
	class TArray<class UAnimNodeSequence*>             SequenceNodes;                                 // 0x0000 (0x0010) [0x0000000000600002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0038
struct FChildBoneBlendInfo
{
	class TArray<float>                                TargetPerBoneWeight;                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       InitTargetStartBone;                           // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              InitPerBoneIncrease;                           // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       OldStartBone;                                  // 0x001C (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              OldBoneIncrease;                               // 0x0024 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<uint8_t>                              TargetRequiredBones;                           // 0x0028 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0020
struct FRandomAnimInfo
{
	float                                              Chance;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LoopCountMin;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LoopCountMax;                                  // 0x0005 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   PlayRateRange;                                 // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStillFrame : 1;                               // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            LoopCount;                                     // 0x0018 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              LastPosition;                                  // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0014
struct FAnimInfo
{
	struct FName                                       AnimSeqName;                                   // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAnimSequence* AnimSeq;                                       // 0x0008 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            AnimLinkupIndex;                               // 0x0010 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x0024
struct FAnimBlendInfo
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAnimInfo                                   AnimInfo;                                      // 0x0008 (0x0018) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSlot.AnimationPlaySequenceData
// 0x0020
struct FAnimationPlaySequenceData
{
	struct FName                                       AnimName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Rate;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              BlendInTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BlendOutTime;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLooping : 1;                                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverride : 1;                                 // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              StartTime;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              EndTime;                                       // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNodeSlot.AnimationDelegateBase
// 0x0010
struct FAnimationDelegateBase
{
	struct FPointer                                    Context;                                       // 0x0000 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    Callback;                                      // 0x0008 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSlot.AnimNodeSlot_OnAnimationEndedArgs
// 0x0030
struct FAnimNodeSlot_OnAnimationEndedArgs
{
	uint8_t                                            Result;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	class UAnimNodeSlot*                               Node;                                          // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FAnimationPlaySequenceData                  PlaySequenceData;                              // 0x0010 (0x0020) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x0028
struct FSynchGroup
{
	class TArray<class UAnimNodeSequence*>             SeqNodes;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAnimNodeSequence*                           MasterNode;                                    // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FName                                       GroupName;                                     // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFireSlaveNotifies : 1;                        // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              RateScale;                                     // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.MeshComponent.OutlineInfoStruct
// 0x0018
struct FOutlineInfoStruct
{
	uint8_t                                            OutlineStyle;                                  // 0x0000 (0x0001) [0x0000000000000000]               
	struct FLinearColor                                OutlineColor;                                  // 0x0004 (0x0010) [0x0000000000000000]               
	float                                              OutlineIntensity;                              // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// 0x001C
struct FSkelMeshComponentLODInfo
{
	class TArray<uint32_t>                             HiddenMaterials;                               // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bNeedsInstanceWeightUpdate : 1;                // 0x0010 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bAlwaysUseInstanceWeights : 1;                 // 0x0010 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint8_t                                            InstanceWeightUsage;                           // 0x0014 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            InstanceWeightIdx;                             // 0x0018 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x0034
struct FAttachment
{
	class UActorComponent*                             Component;                                     // 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FName                                       BoneName;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RelativeLocation;                              // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    RelativeRotation;                              // 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RelativeScale;                                 // 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshComponent.ActiveMorph
// 0x000C
struct FActiveMorph
{
	class UMorphTarget*                                Target;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x0010
struct FBonePair
{
	struct FName                                       Bones[0x2];                                    // 0x0000 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshComponent.GestaltDataContainer
// 0x005C
struct FGestaltDataContainer
{
	class USkeletalMesh*                               SkeletalMesh;                                  // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class TArray<struct FGestaltLODModel>              LODModelData;                                  // 0x0008 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FSocketRemapEntry>             SocketMappings;                                // 0x0018 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class TArray<struct FGestaltAccessoryEntry>        GestaltAccessoryList;                          // 0x0028 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class UGestaltPartMatrices*                        GestaltPartMatricesContainer;                  // 0x0038 (0x0008) [0x0000000000022001] (CPF_Edit | CPF_Transient | CPF_EditConst)
	struct FBoxSphereBounds                            ReferencePoseBounds;                           // 0x0040 (0x001C) [0x0000000000022001] (CPF_Edit | CPF_Transient | CPF_EditConst)
};

// ScriptStruct Engine.SkeletalMeshComponent.GestaltLODModel
// 0x0010
struct FGestaltLODModel
{
	class TArray<struct FGestaltLODModelFragment>      GestaltFragments;                              // 0x0000 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMeshComponent.GestaltLODModelFragment
// 0x000C
struct FGestaltLODModelFragment
{
	int32_t                                            MaterialIndex;                                 // 0x0000 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	int32_t                                            FirstIndex;                                    // 0x0004 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	int32_t                                            NumPrimitives;                                 // 0x0008 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct Engine.SkeletalMeshComponent.SocketRemapEntry
// 0x0010
struct FSocketRemapEntry
{
	struct FName                                       OriginalSocketName;                            // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FName                                       MangledSocketName;                             // 0x0008 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct Engine.SkeletalMeshComponent.GestaltAccessoryEntry
// 0x000C
struct FGestaltAccessoryEntry
{
	int32_t                                            TransformIndex;                                // 0x0000 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	int32_t                                            OriginalBoneIndex;                             // 0x0004 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	int32_t                                            GPUBoneIndex;                                  // 0x0008 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct Engine.IFoleySystemBehavior.FoleyParameterDetails
// 0x0018
struct FFoleyParameterDetails
{
	float                                              FootstepPitch;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FootstepVolume;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FoleyMainPitch;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FoleyMainVolume;                               // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FoleyAccessoryPitch;                           // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FoleyAccessoryVolume;                          // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// 0x0014
struct FScalarParameterInterpStruct
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ParameterValue;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InterpTime;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WarmupTime;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ITargetable.HealthInfo
// 0x0008
struct FHealthInfo
{
	float                                              Current;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Max;                                           // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ITargetable.InfoBarData
// 0x0010
struct FInfoBarData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              Amount;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              MaxAmount;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFullyArmored : 1;                             // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ITargetable.TargetSnapRegion
// 0x0014
struct FTargetSnapRegion
{
	struct FVector                                     RootLocation;                                  // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Radius;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Region;                                        // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.DamageTypeDefinition.RecentDamageTracker
// 0x000C
struct FRecentDamageTracker
{
	float                                              TotalDamage;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              HealthDamage;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              ShieldDamage;                                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Pawn.BalanceDefSpawnedActorState
// 0x0010
struct FBalanceDefSpawnedActorState
{
	class UBaseBalanceDefinition*                      BalanceDefinition;                             // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            GradeIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bGradeCustomizationsApplied : 1;               // 0x000C (0x0004) [0x1000000000000000] [0x00000001] 
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// 0x0018
struct FTrailSocketSamplePoint
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// 0x004C
struct FTrailSamplePoint
{
	float                                              RelativeTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     FirstEdgeSample;                               // 0x0004 (0x0018) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     ControlPointSample;                            // 0x001C (0x0018) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     SecondEdgeSample;                              // 0x0034 (0x0018) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	class TArray<int32_t>                              BoneToTrackTable;                              // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x0010
struct FSkelControlListHead
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ControlHead;                                   // 0x0008 (0x0008) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0030
struct FAnimGroup
{
	class TArray<class UAnimNodeSequence*>             SeqNodes;                                      // 0x0000 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UAnimNodeSequence*                           SynchMaster;                                   // 0x0010 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAnimNodeSequence*                           NotifyMaster;                                  // 0x0018 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FName                                       GroupName;                                     // 0x0020 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RateScale;                                     // 0x0028 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SynchPctPosition;                              // 0x002C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// 0x0030
struct FPreviewSkelMeshStruct
{
	struct FName                                       DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UMorphTargetSet*>               PreviewMorphSets;                              // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class USkeletalMesh*>                 PreviewChildMeshes;                            // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// 0x0020
struct FPreviewSocketStruct
{
	struct FName                                       DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SocketName;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 PreviewStaticMesh;                             // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// 0x0018
struct FPreviewAnimSetsStruct
{
	struct FName                                       DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UAnimSet*>                      PreviewAnimSets;                               // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ApexClothingAsset.ClothingLodInfo
// 0x0010
struct FClothingLodInfo
{
	class TArray<int32_t>                              LODMaterialMap;                                // 0x0000 (0x0010) [0x0000000000500043] (CPF_Edit | CPF_Const | CPF_EditConstArray | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ApexDestructibleActor.SpawnFractureEmitterParameters
// 0x001C
struct FSpawnFractureEmitterParameters
{
	struct FVector                                     SpawnLocation;                                 // 0x0000 (0x000C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FVector                                     SpawnDirection;                                // 0x000C (0x000C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            Depth;                                         // 0x0018 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
};


// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDamageParameters
// 0x0014
struct FNxDestructibleDamageParameters
{
	float                                              DamageThreshold;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DamageSpread;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ImpactDamage;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ImpactResistance;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DefaultImpactDamageDepth;                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDebrisParameters
// 0x002C
struct FNxDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisLifetimeMax;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisMaxSeparationMin;                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisMaxSeparationMax;                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FBox                                        ValidBounds;                                   // 0x0010 (0x001C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleAdvancedParameters
// 0x0018
struct FNxDestructibleAdvancedParameters
{
	float                                              DamageCap;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ImpactVelocityThreshold;                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxChunkSpeed;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MassScaleExponent;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MassScale;                                     // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FractureImpulseScale;                          // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParametersFlag
// 0x0004
struct FNxDestructibleParametersFlag
{
	uint32_t                                           ACCUMULATE_DAMAGE : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           ASSET_DEFINED_SUPPORT : 1;                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           WORLD_SUPPORT : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           DEBRIS_TIMEOUT : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           DEBRIS_MAX_SEPARATION : 1;                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           CRUMBLE_SMALLEST_CHUNKS : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           ACCURATE_RAYCASTS : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           USE_VALID_BOUNDS : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           FORM_EXTENDED_STRUCTURES : 1;                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleDepthParameters
// 0x0005
struct FNxDestructibleDepthParameters
{
	uint32_t                                           TAKE_IMPACT_DAMAGE : 1;                        // 0x0000 (0x0004) [0x0000000020000000] [0x00000001]  CPF_Deprecated)
	uint32_t                                           IGNORE_POSE_UPDATES : 1;                       // 0x0000 (0x0004) [0x0000000020000000] [0x00000002]  CPF_Deprecated)
	uint32_t                                           IGNORE_RAYCAST_CALLBACKS : 1;                  // 0x0000 (0x0004) [0x0000000020000000] [0x00000004]  CPF_Deprecated)
	uint32_t                                           IGNORE_CONTACT_CALLBACKS : 1;                  // 0x0000 (0x0004) [0x0000000020000000] [0x00000008]  CPF_Deprecated)
	uint32_t                                           USER_FLAG : 1;                                 // 0x0000 (0x0004) [0x0000000020000000] [0x00000010]  CPF_Deprecated)
	uint32_t                                           USER_FLAG01 : 1;                               // 0x0000 (0x0004) [0x0000000020000000] [0x00000020]  CPF_Deprecated)
	uint32_t                                           USER_FLAG02 : 1;                               // 0x0000 (0x0004) [0x0000000020000000] [0x00000040]  CPF_Deprecated)
	uint32_t                                           USER_FLAG03 : 1;                               // 0x0000 (0x0004) [0x0000000020000000] [0x00000080]  CPF_Deprecated)
	uint8_t                                            ImpactDamageOverride;                          // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleAsset.NxDestructibleParameters
// 0x00F0
struct FNxDestructibleParameters
{
	struct FNxDestructibleDamageParameters             DamageParameters;                              // 0x0000 (0x0014) [0x0000000000000001] (CPF_Edit)    
	struct FNxDestructibleDebrisParameters             DebrisParameters;                              // 0x0014 (0x002C) [0x0000000000000001] (CPF_Edit)    
	struct FNxDestructibleAdvancedParameters           AdvancedParameters;                            // 0x0040 (0x0018) [0x0000000000000001] (CPF_Edit)    
	float                                              DamageThreshold;                               // 0x0058 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DamageToRadius;                                // 0x005C (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DamageCap;                                     // 0x0060 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              ForceToDamage;                                 // 0x0064 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              ImpactVelocityThreshold;                       // 0x0068 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              MaterialStrength;                              // 0x006C (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DamageToPercentDeformation;                    // 0x0070 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DeformationPercentLimit;                       // 0x0074 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	uint32_t                                           bFormExtendedStructures : 1;                   // 0x0078 (0x0004) [0x0000000020000000] [0x00000001]  CPF_Deprecated)
	int32_t                                            SupportDepth;                                  // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MinimumFractureDepth;                          // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DebrisDepth;                                   // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EssentialDepth;                                // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DebrisLifetimeMin;                             // 0x008C (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DebrisLifetimeMax;                             // 0x0090 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DebrisMaxSeparationMin;                        // 0x0094 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              DebrisMaxSeparationMax;                        // 0x0098 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	struct FBox                                        ValidBounds;                                   // 0x009C (0x001C) [0x0000000020000000]  CPF_Deprecated)
	float                                              MaxChunkSpeed;                                 // 0x00B8 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              MassScaleExponent;                             // 0x00BC (0x0004) [0x0000000020000000]  CPF_Deprecated)
	struct FNxDestructibleParametersFlag               Flags;                                         // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              GrbVolumeLimit;                                // 0x00C4 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              GrbParticleSpacing;                            // 0x00C8 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              FractureImpulseScale;                          // 0x00CC (0x0004) [0x0000000020000000]  CPF_Deprecated)
	class TArray<struct FNxDestructibleDepthParameters> DepthParameters;                               // 0x00D0 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	int32_t                                            DynamicChunksDominanceGroup;                   // 0x00E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           UseDynamicChunksGroupsMask : 1;                // 0x00E4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            DynamicChunksChannel;                          // 0x00E8 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FRBCollisionChannelContainer                DynamicChunksCollideWithChannels;              // 0x00EC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamageParameters
// 0x0010
struct FDamageParameters
{
	uint8_t                                            OverrideMode;                                  // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              BaseDamage;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Momentum;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ApexDestructibleDamageParameters.DamagePair
// 0x0018
struct FDamagePair
{
	struct FName                                       DamageCauserName;                              // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FDamageParameters                           Params;                                        // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AttributeDefinitionBase.AttributePriorityData
// 0x000C
struct FAttributePriorityData
{
	class UAttributeDefinition*                        Attribute;                                     // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              PriorityIncrease;                              // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.AttributeEffect.AppliedAttributeEffect
// 0x0018
struct FAppliedAttributeEffect
{
	class UObject*                                     Context;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	class UAttributeDefinition*                        Attribute;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	class UAttributeModifier*                          Modifier;                                      // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.AttributeInitializationDefinition.AttributeInitializationData
// 0x001C
struct FAttributeInitializationData
{
	float                                              BaseValueConstant;                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAttributeDefinition* BaseValueAttribute;                            // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAttributeInitializationDefinition* InitializationDefinition;                      // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              BaseValueScaleConstant;                        // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AttributeEffect.AttributeEffectData
// 0x0030
struct FAttributeEffectData
{
	class UAttributeDefinition*                        AttributeToModify;                             // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            ModifierType;                                  // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                BaseModifierValue;                             // 0x0010 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.AttributeExpression.AttributeExpressionData
// 0x001C
struct FAttributeExpressionData
{
	class UAttributeDefinition*                        AttributeOperand1;                             // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            ComparisonOperator;                            // 0x0008 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            Operand2Usage;                                 // 0x0009 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAttributeDefinition*                        AttributeOperand2;                             // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ConstantOperand2;                              // 0x0018 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.AttributeExpression.ConditionalSoundData
// 0x0018
struct FConditionalSoundData
{
	class UAkEvent*                                    Event;                                         // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<struct FAttributeExpressionData>      Expressions;                                   // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AttributeInitializationDefinition.ConditionalInitializationExpressions
// 0x0038
struct FConditionalInitializationExpressions
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	class TArray<struct FConditionalValueExpression>   ConditionalExpressionList;                     // 0x0008 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FAttributeInitializationData                DefaultBaseValue;                              // 0x0018 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.AttributeInitializationDefinition.ConditionalValueExpression
// 0x0038
struct FConditionalValueExpression
{
	struct FAttributeInitializationData                BaseValueIfTrue;                               // 0x0000 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UExpressionEvaluator*                        Condition;                                     // 0x0020 (0x0008) [0x0000000004000003] (CPF_Edit | CPF_Const | CPF_EditInline)
	class TArray<struct FAttributeExpressionData>      Expressions;                                   // 0x0028 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AttributeInitializationDefinition.Range
// 0x0050
struct FRange
{
	uint32_t                                           bEnableMinValueRestriction : 1;                // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                MinValue;                                      // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bEnableMaxValueRestriction : 1;                // 0x0028 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                MaxValue;                                      // 0x0030 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.AttributeInitializationDefinition.BalanceFormula
// 0x0088
struct FBalanceFormula
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Multiplier;                                    // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Level;                                         // 0x0028 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Power;                                         // 0x0048 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Offset;                                        // 0x0068 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.AttributeInitializationDefinition.Variance
// 0x0048
struct FVariance
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bUseIntegerRandomization : 1;                  // 0x0000 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                LowerBound;                                    // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                UpperBound;                                    // 0x0028 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.AttributeInitializationDefinition.CoefficientFormula
// 0x0088
struct FCoefficientFormula
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Modifier1;                                     // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Coefficient1;                                  // 0x0028 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Modifier2;                                     // 0x0048 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                Coefficient2;                                  // 0x0068 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.AttributeInitializationDefinition.AttributeBaseValueData
// 0x0028
struct FAttributeBaseValueData
{
	class UAttributeDefinition*                        Attribute;                                     // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                BaseValue;                                     // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.BaseBalanceDefinition.GameStageRangeData
// 0x0008
struct FGameStageRangeData
{
	int32_t                                            MinGameStage;                                  // 0x0000 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            MaxGameStage;                                  // 0x0004 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.BaseBalanceDefinition.GameStageGradeWeightData
// 0x0048
struct FGameStageGradeWeightData
{
	struct FGameStageRangeData                         GameStageRequirement;                          // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                MinSpawnProbabilityModifier;                   // 0x0008 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                MaxSpawnProbabilityModifier;                   // 0x0028 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.BehaviorBase.BehaviorContextData
// 0x0012
struct FBehaviorContextData
{
	struct FName                                       InstancedDataContextName;                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UObject*                                     ContextObject;                                 // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            BehaviorContext;                               // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            bSupportsDefaultOutputLink;                    // 0x0011 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.BehaviorBase.BehaviorKernelInfo
// 0x0020
struct FBehaviorKernelInfo
{
	struct FPointer                                    StateForThreadRunningThisBehavior;             // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              WorldTime;                                     // 0x0008 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ExecutionTime;                                 // 0x000C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              WorldDeltaTime;                                // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              ExecutionDelayError;                           // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              NextExecutionDelayTime;                        // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasLinkedOutputs : 1;                         // 0x001C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bIsInitialRunOfThisBehavior : 1;               // 0x001C (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
};

// ScriptStruct Engine.BehaviorBase.BehaviorParameterUnion
// 0x0090
struct FBehaviorParameterUnion
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     VectorData;                                    // 0x0008 (0x000C) [0x0000000000000000]               
	class AActor*                                      ActorData;                                     // 0x0018 (0x0008) [0x0000000000000000]               
	struct FImpactInfo                                 ImpactInfoData;                                // 0x0020 (0x0070) [0x0000000000080000] (CPF_Component)
};

// ScriptStruct Engine.BehaviorBase.BehaviorParameters
// 0x0010
struct FBehaviorParameters
{
	class TArray<struct FBehaviorParameterUnion>       Parameters;                                    // 0x0000 (0x0010) [0x0000000000580000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.BehaviorBase.BehaviorOutputLinkDescriptionData
// 0x0004
struct FBehaviorOutputLinkDescriptionData
{
	int32_t                                            LinkId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ICounterBehavior.CounterEventReactionData
// 0x0018
struct FCounterEventReactionData
{
	uint8_t                                            EventType;                                     // 0x0000 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UBehaviorBase*>                 Behaviors;                                     // 0x0008 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.ICounterBehavior.BehaviorCounterState
// 0x0008
struct FBehaviorCounterState
{
	int32_t                                            CurrentValue;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Target;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ICounterBehavior.CounterBehaviorUserState
// 0x0010
struct FCounterBehaviorUserState
{
	struct FBehaviorCounterState                       Counters[0x2];                                 // 0x0000 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.Behavior_RandomlyRunBehaviors.IndependentSelectionData
// 0x0030
struct FIndependentSelectionData
{
	struct FAttributeInitializationData                Probability;                                   // 0x0000 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class TArray<class UBehaviorBase*>                 Behaviors;                                     // 0x0020 (0x0010) [0x0000000004400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.IMaterialBehavior.TextureMaterialParameter
// 0x0010
struct FTextureMaterialParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    Value;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.IMaterialBehavior.ScalarMaterialParameter
// 0x0030
struct FScalarMaterialParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                ValueFromAttribute;                            // 0x0010 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.IMaterialBehavior.VectorMaterialParameter
// 0x0038
struct FVectorMaterialParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                Value;                                         // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                VectorScale;                                   // 0x0018 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Behavior_SetParticleSystemParameters.MaterialParticleSystemParameter
// 0x0010
struct FMaterialParticleSystemParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Value;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Behavior_SetParticleSystemParameters.ScalarParticleSystemParameter
// 0x0028
struct FScalarParticleSystemParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                Value;                                         // 0x0008 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Behavior_SetParticleSystemParameters.VectorParticleSystemParameter
// 0x0038
struct FVectorParticleSystemParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Value;                                         // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FAttributeInitializationData                VectorScale;                                   // 0x0018 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Behavior_SetParticleSystemParameters.ColorParticleSystemParameter
// 0x000C
struct FColorParticleSystemParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      Value;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Behavior_SetParticleSystemParameters.ActorParticleSystemParameter
// 0x0020
struct FActorParticleSystemParameter
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FBehaviorContextData                        Context;                                       // 0x0008 (0x0018) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x0028
struct FStaticMeshComponentLODInfo
{
	class TArray<class UShadowMap2D*>                  ShadowMaps;                                    // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UShadowMap2D*                                DominantShadowMap;                             // 0x0010 (0x0008) [0x0000000000000000]               
	struct FPointer                                    LightMap;                                      // 0x0018 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    OverrideVertexColors;                          // 0x0020 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.StaticMeshComponent.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FPackedNormal                               Normal;                                        // 0x000C (0x0004) [0x0000000000000000]               
	struct FColor                                      Color;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x000C
struct FGeomSelection
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectionIndex;                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x0064
struct FKAggregateGeom
{
	class TArray<struct FKSphereElem>                  SphereElems;                                   // 0x0000 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	class TArray<struct FKBoxElem>                     BoxElems;                                      // 0x0010 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	class TArray<struct FKSphylElem>                   SphylElems;                                    // 0x0020 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	class TArray<struct FKConvexElem>                  ConvexElems;                                   // 0x0030 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	class TArray<struct FKConvexElem>                  BoxMirrorConvexElems;                          // 0x0040 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	class TArray<struct FKConvexGeomRenderInfo>        RenderInfos;                                   // 0x0050 (0x0010) [0x0000000401201000] (CPF_Native)  
	uint32_t                                           bSkipCloseAndParallelChecks : 1;               // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x004C
struct FKSphereElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Radius;                                        // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x0044 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x0044 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              HitDetectionScale;                             // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x0054
struct FKBoxElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              X;                                             // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Y;                                             // 0x0044 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Z;                                             // 0x0048 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x004C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x004C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              HitDetectionScale;                             // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x0050
struct FKSphylElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Radius;                                        // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Length;                                        // 0x0044 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x0048 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              HitDetectionScale;                             // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x00C4
struct FKConvexElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class TArray<struct FVector>                       VertexData;                                    // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPlane>                        PermutedVertexData;                            // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              FaceTriData;                                   // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       EdgeDirections;                                // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       FaceNormalDirections;                          // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPlane>                        FacePlaneData;                                 // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBox                                        ElemBox;                                       // 0x00A0 (0x001C) [0x0000000000000000]               
	float                                              HitDetectionScale;                             // 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNoRBCollision : 1;                            // 0x00C0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KConvexGeomRenderInfo
// 0x0018
struct FKConvexGeomRenderInfo
{
	struct FPointer                                    VertexBuffer;                                  // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    IndexBuffer;                                   // 0x0008 (0x0008) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    CollisionVertexFactory;                        // 0x0010 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.BrushComponent.KCachedConvexDataElement
// 0x001C
struct FKCachedConvexDataElement
{
	class TArray<uint8_t>                              ConvexElementData;                             // 0x0000 (0x0010) [0x0000000000101000] (CPF_Native)  
	struct FPointer                                    ConvexMesh;                                    // 0x0010 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            ConvexMeshDataSize;                            // 0x0018 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.CameraShake.FOscillator
// 0x0009
struct FFOscillator
{
	float                                              Amplitude;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Frequency;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InitialOffset;                                 // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CameraShake.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                         // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Yaw;                                           // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Roll;                                          // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CameraShake.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                             // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Y;                                             // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFOscillator                                Z;                                             // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Canvas.CanvasUVTri
// 0x0030
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V0_UV;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V1_Pos;                                        // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V1_UV;                                         // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V2_Pos;                                        // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V2_UV;                                         // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              U;                                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              V;                                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UL;                                            // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VL;                                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	uint32_t                                           bEnableGlow : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                GlowColor;                                     // 0x0004 (0x0010) [0x0000000000000000]               
	struct FVector2D                                   GlowOuterRadius;                               // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   GlowInnerRadius;                               // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	uint32_t                                           bClipText : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableShadow : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDepthFieldGlowInfo                         GlowInfo;                                      // 0x0004 (0x0024) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x0030
struct FTextSizingParameters
{
	float                                              DrawX;                                         // 0x0000 (0x0004) [0x0000000000100000]               
	float                                              DrawY;                                         // 0x0004 (0x0004) [0x0000000000100000]               
	float                                              DrawXL;                                        // 0x0008 (0x0004) [0x0000000000100000]               
	float                                              DrawYL;                                        // 0x000C (0x0004) [0x0000000000100000]               
	struct FVector2D                                   Scaling;                                       // 0x0010 (0x0008) [0x0000000000100000]               
	class UFont*                                       DrawFont;                                      // 0x0018 (0x0008) [0x0000000000100000]               
	struct FVector2D                                   SpacingAdjust;                                 // 0x0020 (0x0008) [0x0000000000100000]               
	float                                              ViewportHeight;                                // 0x0028 (0x0004) [0x0000000000100000]               
	uint32_t                                           bNeverSplitWords : 1;                          // 0x002C (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	class FString                                      Value;                                         // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FVector2D                                   LineExtent;                                    // 0x0010 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.Texture.TextureGroupContainer
// 0x0008
struct FTextureGroupContainer
{
	uint32_t                                           TEXTUREGROUP_Default : 1;                      // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_World : 1;                        // 0x0000 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldNormalMap : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldSpecular : 1;                // 0x0000 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldMasks : 1;                   // 0x0000 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Character : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_CharacterNormalMap : 1;           // 0x0000 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_CharacterSpecular : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_CharacterMasks : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_NPC : 1;                          // 0x0000 (0x0004) [0x0000000000000003] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_NPCNormalMap : 1;                 // 0x0000 (0x0004) [0x0000000000000003] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_NPCSpecular : 1;                  // 0x0000 (0x0004) [0x0000000000000003] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_NPCMasks : 1;                     // 0x0000 (0x0004) [0x0000000000000003] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Weapon : 1;                       // 0x0000 (0x0004) [0x0000000000000003] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WeaponNormalMap : 1;              // 0x0000 (0x0004) [0x0000000000000003] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WeaponSpecular : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WeaponMasks : 1;                  // 0x0000 (0x0004) [0x0000000000000003] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Vehicle : 1;                      // 0x0000 (0x0004) [0x0000000000000003] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_VehicleNormalMap : 1;             // 0x0000 (0x0004) [0x0000000000000003] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_VehicleSpecular : 1;              // 0x0000 (0x0004) [0x0000000000000003] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_VehicleMasks : 1;                 // 0x0000 (0x0004) [0x0000000000000003] [0x00100000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Cinematic : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x00200000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Effects : 1;                      // 0x0000 (0x0004) [0x0000000000000003] [0x00400000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_EffectsCharacter : 1;             // 0x0000 (0x0004) [0x0000000000000003] [0x00800000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_EffectsEnvironment : 1;           // 0x0000 (0x0004) [0x0000000000000003] [0x01000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Skybox : 1;                       // 0x0000 (0x0004) [0x0000000000000003] [0x02000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_UI : 1;                           // 0x0000 (0x0004) [0x0000000000000003] [0x04000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Lightmap : 1;                     // 0x0000 (0x0004) [0x0000000000000003] [0x08000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_RenderTarget : 1;                 // 0x0000 (0x0004) [0x0000000000000003] [0x10000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Shadowmap : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x20000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ColorLookupTable : 1;             // 0x0000 (0x0004) [0x0000000000000003] [0x40000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Terrain_Heightmap : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x80000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Terrain_Weightmap : 1;            // 0x0004 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Editor : 1;                       // 0x0004 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_HeroWorld : 1;                    // 0x0004 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_HeroCharacter : 1;                // 0x0004 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_HeroNPC : 1;                      // 0x0004 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_HeroWeapon : 1;                   // 0x0004 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_HeroVehicle : 1;                  // 0x0004 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_HeroEffects : 1;                  // 0x0004 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Cubemap : 1;                      // 0x0004 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.CharacterClassDefinition.DamageTypeResistance
// 0x0040
struct FDamageTypeResistance
{
	struct FAttributeInitializationData                ResistanceToImpact;                            // 0x0000 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                ResistanceToStatusEffect;                      // 0x0020 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinValue;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxValue;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NudgeValue;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIntRange : 1;                                 // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              V;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UL;                                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VL;                                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.UIRoot.UIProviderScriptFieldValue
// 0x005C
struct FUIProviderScriptFieldValue
{
	struct FName                                       PropertyTag;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            PropertyType;                                  // 0x0008 (0x0001) [0x0000000000000000]               
	class FString                                      StringValue;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class USurface* ImageValue;                                    // 0x0020 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              ArrayValue;                                    // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUIRangeData                                RangeValue;                                    // 0x0038 (0x0014) [0x0000000000000000]               
	struct FTextureCoordinates                         AtlasCoordinates;                              // 0x004C (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.UIRoot.UIProviderFieldValue
// 0x000C (0x005C - 0x0068)
struct FUIProviderFieldValue : FUIProviderScriptFieldValue
{
	struct FPointer                                    CustomStringNode;                              // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};


// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x0030
struct FInputKeyAction
{
	struct FName                                       InputKeyName;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InputKeyState;                                 // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FSeqOpOutputInputLink>         TriggeredOps;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class USequenceOp*>                   ActionsToExecute;                              // 0x0020 (0x0010) [0x0000000020400000] (CPF_NeedCtorLink | CPF_Deprecated)
};

// ScriptStruct Engine.UIRoot.UIDataStoreBinding
// 0x0048
struct FUIDataStoreBinding
{
	class UUIDataStoreSubscriber*                      Subscriber_Object;                             // 0x0000 (0x0010) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UUIDataStoreSubscriber*                      Subscriber_Interface;                          // 0x0000 (0x0010) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint8_t                                            RequiredFieldType;                             // 0x0010 (0x0001) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class FString                                      MarkupString;                                  // 0x0018 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	int32_t                                            BindingIndex;                                  // 0x0028 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FName                                       DataStoreName;                                 // 0x002C (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FName                                       DataStoreField;                                // 0x0034 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UUIDataStore*                                ResolvedDataStore;                             // 0x0040 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
	struct FName                                       InputKeyName;                                  // 0x0008 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
	uint8_t                                            EventType;                                     // 0x0010 (0x0001) [0x0000000000102002] (CPF_Const | CPF_Transient)
	float                                              InputDelta;                                    // 0x0014 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	float                                              DeltaTime;                                     // 0x0018 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	uint32_t                                           bAltPressed : 1;                               // 0x001C (0x0004) [0x0000000000102002] [0x00000001] (CPF_Const | CPF_Transient)
	uint32_t                                           bCtrlPressed : 1;                              // 0x001C (0x0004) [0x0000000000102002] [0x00000002] (CPF_Const | CPF_Transient)
	uint32_t                                           bShiftPressed : 1;                             // 0x001C (0x0004) [0x0000000000102002] [0x00000004] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008 (0x0020 - 0x0028)
struct FSubscribedInputEventParameters : FInputEventParameters
{
	struct FName                                       InputAliasName;                                // 0x0020 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	struct FName                                       AxisInputKey;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       AdjacentAxisInputKey;                          // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEmulateButtonPress : 1;                       // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FName                                       InputKeyToEmulate[0x2];                        // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	struct FName                                       InputKeyName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            ModifierKeyFlags;                              // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int32_t                                            IndexChar;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              AutoCompleteListIndices;                       // 0x0008 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FPointer>                      ChildNodes;                                    // 0x0018 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Console.AutoCompleteCommand
// 0x0020
struct FAutoCompleteCommand
{
	class FString                                      Command;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Desc;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.ConstantBuffer.ConstantBufferVariableDefinition
// 0x001C
struct FConstantBufferVariableDefinition
{
	uint8_t                                            VarType;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	struct FName                                       VarName;                                       // 0x0004 (0x0008) [0x0000000000000000]               
	struct FGuid                                       VarGuid;                                       // 0x000C (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x0008
struct FLightmassMaterialInterfaceSettings
{
	float                                              DistanceFieldPenumbraScale;                    // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCastShadowAsMasked : 1;                       // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bOverrideCastShadowAsMasked : 1;               // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverrideEmissiveBoost : 1;                    // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverrideDiffuseBoost : 1;                     // 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverrideSpecularBoost : 1;                    // 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bOverrideExportResolutionScale : 1;            // 0x0004 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bOverrideDistanceFieldPenumbraScale : 1;       // 0x0004 (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct Engine.Material.ExpressionInputBase
// 0x0034
struct FExpressionInputBase
{
	class UMaterialExpression* Expression;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            OutputIndex;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      InputName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x002C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.MaterialInput
// 0x0014 (0x0034 - 0x0048)
struct FMaterialInput : FExpressionInputBase
{
	uint8_t                                            InputType;                                     // 0x0038 (0x0001) [0x0000000001022002] (CPF_Const | CPF_Transient | CPF_EditConst)
	struct FName                                       AttrName;                                      // 0x003C (0x0008) [0x0000000001022002] (CPF_Const | CPF_Transient | CPF_EditConst)
	uint32_t                                           AttrSwizzleScalar : 1;                         // 0x0044 (0x0004) [0x0000000001022002] [0x00000001] (CPF_Const | CPF_Transient | CPF_EditConst)
};

// ScriptStruct Engine.Material.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                       // 0x0000 (0x0010) [0x0000000000000000]               
	class UMaterialFunction*                           Function;                                      // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverMeshComponent.CoverMeshes
// 0x0068
struct FCoverMeshes
{
	class UStaticMesh*                                 Base;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanLeft;                                      // 0x0008 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanRight;                                     // 0x0010 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanLeftPref;                                  // 0x0018 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 LeanRightPref;                                 // 0x0020 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 Climb;                                         // 0x0028 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 Mantle;                                        // 0x0030 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SlipLeft;                                      // 0x0038 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SlipRight;                                     // 0x0040 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SwatLeft;                                      // 0x0048 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 SwatRight;                                     // 0x0050 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 PopUp;                                         // 0x0058 (0x0008) [0x0000000000000000]               
	class UStaticMesh*                                 PlayerOnly;                                    // 0x0060 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.CoverSlotComponent.CoverSightData
// 0x0018
struct FCoverSightData
{
	int32_t                                            XIndex;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            YIndex;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              SightInfo;                                     // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CullDistance;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.GBXPipeline.EventSummary
// 0x00B8
struct FEventSummary
{
	int32_t                                            SummaryID;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            SummaryCount;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            TimeStamp;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCriticalHit : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHeadshot : 1;                                 // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bMeleeDamage : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bThrownMeleeDamage : 1;                        // 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	class FString                                      AttackingPlayerName;                           // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DefendingPlayerName;                           // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UClass*                                      AttackingActorClass;                           // 0x0030 (0x0008) [0x0000000000000000]               
	class UClass*                                      AttackingControllerClass;                      // 0x0038 (0x0008) [0x0000000000000000]               
	class UClass*                                      DefendingActorClass;                           // 0x0040 (0x0008) [0x0000000000000000]               
	class UClass*                                      DefendingControllerClass;                      // 0x0048 (0x0008) [0x0000000000000000]               
	class FString                                      AttackingActorName;                            // 0x0050 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AttackingControllerName;                       // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DefendingActorName;                            // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DefendingControllerName;                       // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DamageSourceName;                              // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      DamageTypeDefinitionName;                      // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              InitialValue;                                  // 0x00B0 (0x0004) [0x0000000000000000]               
	float                                              FinalValue;                                    // 0x00B4 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.CurrencyPipeline.CurrencyEventSummary
// 0x002C (0x00B8 - 0x00E4)
struct FCurrencyEventSummary : FEventSummary
{
	float                                              CurrencyForKiller;                             // 0x00B8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bScaleRewardByNumTeammates : 1;                // 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            DeathShouldRewardCreditsToTeam;                // 0x00C0 (0x0001) [0x0000000000000000]               
	int32_t                                            NumberOfSharingTeamMembers;                    // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              CurrencyForTeamMembers;                        // 0x00C8 (0x0004) [0x0000000000000000]               
	int32_t                                            NumberOfAssistants;                            // 0x00CC (0x0004) [0x0000000000000000]               
	float                                              AssistPoolFraction;                            // 0x00D0 (0x0004) [0x0000000000000000]               
	float                                              CurrencyForAssist;                             // 0x00D4 (0x0004) [0x0000000000000000]               
	float                                              CurrencyForKillStreak;                         // 0x00D8 (0x0004) [0x0000000000000000]               
	float                                              CurrencyForBounty;                             // 0x00DC (0x0004) [0x0000000000000000]               
	float                                              FirstBloodBonusCurrency;                       // 0x00E0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              KeyOut;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           TangentsValid : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TangentIn;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              TangentOut;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            IntepMode;                                     // 0x0014 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.DamageAdjuster.DamageInfo
// 0x0030
struct FDamageInfo
{
	class AController*                                 Instigator;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     HitLocation;                                   // 0x0008 (0x000C) [0x0000000000000000]               
	class UClass*                                      DamageType;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	class UDamageTypeDefinition*                       DamageTypeDefinition;                          // 0x0020 (0x0008) [0x0000000000000000]               
	class UImpactDefinition*                           ImpactDefinition;                              // 0x0028 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.DamagePipeline.ReflectionInfo
// 0x0018
struct FReflectionInfo
{
	uint8_t                                            ReflectionType;                                // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              ReflectedDamageScale;                          // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              ReflectedDamageToReflector;                    // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bReflectTowardAttacker : 1;                    // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ReflectedInaccuracyModifier;                   // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bReflectProjectiles : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.DamagePipeline.DamageEventSummary
// 0x0164 (0x00B8 - 0x021C)
struct FDamageEventSummary : FEventSummary
{
	float                                              PreviousHealth;                                // 0x00B8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasMaxShield : 1;                             // 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWasMaxHealth : 1;                             // 0x00BC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWasAlreadyDead : 1;                           // 0x00BC (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              ExtraDamageDealtDueToAmplify;                  // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              DamageSourceReduction;                         // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              DamageInstigatorModifier;                      // 0x00C8 (0x0004) [0x0000000000000000]               
	float                                              DamageReceiverModifier;                        // 0x00CC (0x0004) [0x0000000000000000]               
	float                                              AmplifyReceivedModifier;                       // 0x00D0 (0x0004) [0x0000000000000000]               
	float                                              InjuredMeleeModifier;                          // 0x00D4 (0x0004) [0x0000000000000000]               
	float                                              BulletMinHealthModifier;                       // 0x00D8 (0x0004) [0x0000000000000000]               
	float                                              InjuredBonusDamageScale;                       // 0x00DC (0x0004) [0x0000000000000000]               
	float                                              DamageAfterDamageSource;                       // 0x00E0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasFromFront : 1;                             // 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWasFromSide : 1;                              // 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWasFromBehind : 1;                            // 0x00E4 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              DamageAfterAttackDirection;                    // 0x00E8 (0x0004) [0x0000000000000000]               
	float                                              DamageAfterEnemyAwareness;                     // 0x00EC (0x0004) [0x0000000000000000]               
	float                                              TotalAttackerDamageModifier;                   // 0x00F0 (0x0004) [0x0000000000000000]               
	float                                              TotalDefenderDamageModifier;                   // 0x00F4 (0x0004) [0x0000000000000000]               
	float                                              DamageAfterConditionalDamageModifiers;         // 0x00F8 (0x0004) [0x0000000000000000]               
	struct FReflectionInfo                             ReflectionData;                                // 0x00FC (0x0018) [0x0000000000000000]               
	float                                              ProjectileReflectionReduction;                 // 0x0114 (0x0004) [0x0000000000000000]               
	float                                              DamageAfterReflections;                        // 0x0118 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasFirstBulletInClip : 1;                     // 0x011C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWasLastBulletInClip : 1;                      // 0x011C (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              DamageAfterShotInClip;                         // 0x0120 (0x0004) [0x0000000000000000]               
	float                                              ArmorReduction;                                // 0x0124 (0x0004) [0x0000000000000000]               
	float                                              ElementalResistanceReduction;                  // 0x0128 (0x0004) [0x0000000000000000]               
	float                                              StartingArmorOrResistance;                     // 0x012C (0x0004) [0x0000000000000000]               
	float                                              PercentageArmorOrResistancePenetration;        // 0x0130 (0x0004) [0x0000000000000000]               
	float                                              PercentageArmorOrResistanceReduction;          // 0x0134 (0x0004) [0x0000000000000000]               
	float                                              FlatArmorOrResistancePenetration;              // 0x0138 (0x0004) [0x0000000000000000]               
	float                                              FlatArmorOrResistanceReduction;                // 0x013C (0x0004) [0x0000000000000000]               
	float                                              FinalArmorOrResistance;                        // 0x0140 (0x0004) [0x0000000000000000]               
	float                                              DamageAfterDamageType;                         // 0x0144 (0x0004) [0x0000000000000000]               
	float                                              AttackerDamageModifier;                        // 0x0148 (0x0004) [0x0000000000000000]               
	float                                              DefenderDamageModifier;                        // 0x014C (0x0004) [0x0000000000000000]               
	float                                              DamageAfterDamageTypeModifiers;                // 0x0150 (0x0004) [0x0000000000000000]               
	float                                              DamageSeverityPercent;                         // 0x0154 (0x0004) [0x0000000000000000]               
	float                                              DamageDealtToShields;                          // 0x0158 (0x0004) [0x0000000000000000]               
	float                                              DamageDealtToBaseShields;                      // 0x015C (0x0004) [0x0000000000000000]               
	float                                              DamageDealtToOverShields;                      // 0x0160 (0x0004) [0x0000000000000000]               
	float                                              AttackerShieldPenetrationPercentage;           // 0x0164 (0x0004) [0x0000000000000000]               
	float                                              DamageSourceShieldPenetrationPercentage;       // 0x0168 (0x0004) [0x0000000000000000]               
	float                                              DefenderShieldPenetrationReductionPercentage;  // 0x016C (0x0004) [0x0000000000000000]               
	float                                              TotalShieldPenetrationPercentage;              // 0x0170 (0x0004) [0x0000000000000000]               
	float                                              TotalShieldDamagePenetrated;                   // 0x0174 (0x0004) [0x0000000000000000]               
	float                                              DamageAfterShield;                             // 0x0178 (0x0004) [0x0000000000000000]               
	class UBaseHitRegionDefinition*                    HitRegion;                                     // 0x0180 (0x0008) [0x0000000000000000]               
	float                                              HitRegionReduction;                            // 0x0188 (0x0004) [0x0000000000000000]               
	float                                              HitRegionDamageModifier;                       // 0x018C (0x0004) [0x0000000000000000]               
	float                                              CriticalModifier;                              // 0x0190 (0x0004) [0x0000000000000000]               
	float                                              DamageAfterHitRegion;                          // 0x0194 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHitRegionBypassesShields : 1;                 // 0x0198 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DamageSurfaceReduction;                        // 0x019C (0x0004) [0x0000000000000000]               
	float                                              BodySurfaceTypeScale;                          // 0x01A0 (0x0004) [0x0000000000000000]               
	float                                              ShieldSurfaceTypeScale;                        // 0x01A4 (0x0004) [0x0000000000000000]               
	float                                              CharacterDamageTypeScale;                      // 0x01A8 (0x0004) [0x0000000000000000]               
	float                                              DamageAfterSurface;                            // 0x01AC (0x0004) [0x0000000000000000]               
	float                                              HitRegionCapReduction;                         // 0x01B0 (0x0004) [0x0000000000000000]               
	float                                              DamageAfterHitRegionCap;                       // 0x01B4 (0x0004) [0x0000000000000000]               
	float                                              DamageReceiverReduction;                       // 0x01B8 (0x0004) [0x0000000000000000]               
	float                                              DamageAfterReceiverReduction;                  // 0x01BC (0x0004) [0x0000000000000000]               
	uint32_t                                           bCountered : 1;                                // 0x01C0 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              DamageAfterBlocking;                           // 0x01C4 (0x0004) [0x0000000000000000]               
	float                                              DamageMitigatedByBlocking;                     // 0x01C8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bPlayerDeathAversionAttempted : 1;             // 0x01CC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPlayerDeathAversionSuccessful : 1;            // 0x01CC (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              LifestealPercentageFromInstigator;             // 0x01D0 (0x0004) [0x0000000000000000]               
	float                                              LifestealPercentageFromDamageSource;           // 0x01D4 (0x0004) [0x0000000000000000]               
	float                                              LifestealReductionPercentageFromDefender;      // 0x01D8 (0x0004) [0x0000000000000000]               
	float                                              LifestealAmount;                               // 0x01DC (0x0004) [0x0000000000000000]               
	float                                              ShieldstealPercentageFromInstigator;           // 0x01E0 (0x0004) [0x0000000000000000]               
	float                                              ShieldstealPercentageFromDamageSource;         // 0x01E4 (0x0004) [0x0000000000000000]               
	float                                              ShieldstealReductionPercentageFromDefender;    // 0x01E8 (0x0004) [0x0000000000000000]               
	float                                              ShieldstealAmount;                             // 0x01EC (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasInjured : 1;                               // 0x01F0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            DamageTakenSkillEventsTriggered[0x8];          // 0x01F4 (0x0008) [0x0000000000000000]               
	uint8_t                                            DamageDealtSkillEventsTriggered[0x8];          // 0x01FC (0x0008) [0x0000000000000000]               
	uint32_t                                           bWasOneShotKill : 1;                           // 0x0204 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHitStatIncremented : 1;                       // 0x0204 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AIDamageScaleReduction;                        // 0x0208 (0x0004) [0x0000000000000000]               
	float                                              InstigatorDamageTypeReduction;                 // 0x020C (0x0004) [0x0000000000000000]               
	float                                              ExpLevelDifferenceReduction;                   // 0x0210 (0x0004) [0x0000000000000000]               
	float                                              RecipientDamageTypeReduction;                  // 0x0214 (0x0004) [0x0000000000000000]               
	float                                              IntrinsicArmorReduction;                       // 0x0218 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.DamagePipeline.DamageEventInitializationData
// 0x0038
struct FDamageEventInitializationData
{
	float                                              InitialDamage;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              DamageSeverityPercent;                         // 0x0004 (0x0004) [0x0000000000000000]               
	class AActor*                                      DamagedActor;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class AController*                                 DamageInstigator;                              // 0x0010 (0x0008) [0x0000000000000000]               
	struct FVector                                     DamageLocation;                                // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     DamageMomentum;                                // 0x0024 (0x000C) [0x0000000000000000]               
	class UClass*                                      DamageSource;                                  // 0x0030 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0018
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                   // 0x0000 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
	class TArray<class UUIDataStore*>                  DataStores;                                    // 0x0008 (0x0010) [0x0000000000502002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Input.KeyBind
// 0x001C
struct FKeyBind
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	class FString                                      Command;                                       // 0x0008 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           Control : 1;                                   // 0x0018 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           Shift : 1;                                     // 0x0018 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	uint32_t                                           Alt : 1;                                       // 0x0018 (0x0004) [0x0000000000004000] [0x00000004] (CPF_Config)
	uint32_t                                           LeftTrigger : 1;                               // 0x0018 (0x0004) [0x0000000000004000] [0x00000008] (CPF_Config)
	uint32_t                                           RightTrigger : 1;                              // 0x0018 (0x0004) [0x0000000000004000] [0x00000010] (CPF_Config)
	uint32_t                                           bIgnoreCtrl : 1;                               // 0x0018 (0x0004) [0x0000000000004000] [0x00000020] (CPF_Config)
	uint32_t                                           bIgnoreShift : 1;                              // 0x0018 (0x0004) [0x0000000000004000] [0x00000040] (CPF_Config)
	uint32_t                                           bIgnoreAlt : 1;                                // 0x0018 (0x0004) [0x0000000000004000] [0x00000080] (CPF_Config)
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0010
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FPointer                                    RenderData;                                    // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x000C
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                         // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              LifetimeRemaining;                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PhysicsVolume.PhysicsVolumeCheckpointRecord
// 0x0004
struct FPhysicsVolumeCheckpointRecord
{
	uint32_t                                           bPainCausing : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.DownloadableContentManager.MarketplaceOfferDownloadState
// 0x0004
struct FMarketplaceOfferDownloadState
{
	uint32_t                                           bIsDownloaded : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsInstalled : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.DownloadableContentManager.InstalledContentInfo
// 0x0050
struct FInstalledContentInfo
{
	uint8_t                                            ContentType;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      ContentName;                                   // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ContentPath;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Filename;                                      // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LicenseMask;                                   // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHasSeen : 1;                                  // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FAppIdLicenseInfo>             CachedAppIdInfo;                               // 0x0040 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.DownloadableContentManager.RejectedContentInfo
// 0x0001 (0x0050 - 0x0051)
struct FRejectedContentInfo : FInstalledContentInfo
{
	uint8_t                                            Result;                                        // 0x0050 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.DownloadableContentOfferEnumerator.MarketplaceOffer
// 0x0030
struct FMarketplaceOffer
{
	class FString                                      OfferId;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ContentCategory;                               // 0x0010 (0x0004) [0x0000000000000000]               
	class FString                                      OfferName;                                     // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            LicenseMask;                                   // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUserHasPurchased : 1;                         // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

struct FDlcCompatibilityData {
	char UnknownData[0x10];
};

// ScriptStruct Engine.DownloadableContentManager.DlcCompatibilityDataEx
// 0x0000 (0x0010 - 0x0010)
struct FDlcCompatibilityDataEx : FDlcCompatibilityData
{
};

// ScriptStruct Engine.DownloadableContentManager.DlcContentId
// 0x0008
struct FDlcContentId
{
	int32_t                                            PackageId;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ContentId;                                     // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.DownloadableContentManager.DlcContentInfo
// 0x000C
struct FDlcContentInfo
{
	struct FDlcContentId                               ContentId;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsInstalled : 1;                              // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsLicensed : 1;                               // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.IGBXStaticReplicatedActor.StaticActorReplicationData
// 0x000C
struct FStaticActorReplicationData
{
	class AGBXStaticActorStateReplicator*              StateReplicator;                               // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            ReplicatedActorID;                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.DynamicBlockingVolume.DynamicBlockingVolumeCheckpointRecord
// 0x001C
struct FDynamicBlockingVolumeCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint32_t                                           bCollideActors : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlockActors : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsReplication : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.Emitter.ReplicatedAttachmentData
// 0x0024
struct FReplicatedAttachmentData
{
	class AActor*                                      Base;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       Socket;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	int32_t                                            ComponentBodyID;                               // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            ComponentSlotID;                               // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Emitter.ReplicatedBeamEndpointData
// 0x0038
struct FReplicatedBeamEndpointData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	struct FName                                       Emitter;                                       // 0x0004 (0x0008) [0x0000000000000000]               
	struct FReplicatedAttachmentData                   Attachment;                                    // 0x0010 (0x0028) [0x0000000000000000]               
};

// ScriptStruct Engine.Emitter.EmitterCheckpointRecord
// 0x0004
struct FEmitterCheckpointRecord
{
	uint32_t                                           bIsActive : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0048
struct FParticleSysParam
{
	struct FName                                       Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ParamType;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              Scalar;                                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Scalar_Low;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Vector;                                        // 0x0014 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Vector_Low;                                    // 0x0020 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      Color;                                         // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      Actor;                                         // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                      // 0x0038 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       Socket;                                        // 0x0040 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// 0x0050
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 EmitterInstanceMBInfoMap;                      // 0x0000 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x0004
struct FParticleSystemLOD
{
	uint32_t                                           bLit : 1;                                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	class TArray<uint8_t>                              SoloEnableSetting;                             // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventBuffers
// 0x0060
struct FParticleEventBuffers
{
	class TArray<struct FParticleEventSpawnData>       SpawnEvents;                                   // 0x0000 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FParticleEventDeathData>       DeathEvents;                                   // 0x0010 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FParticleEventCollideData>     CollisionEvents;                               // 0x0020 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FParticleEventTraceData>       TraceEvents;                                   // 0x0030 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FParticleEventKismetData>      KismetEvents;                                  // 0x0040 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FParticleEventConstructData>   ConstructEvents;                               // 0x0050 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x0034
struct FParticleEventData
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       EventName;                                     // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              EmitterTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Direction;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000 (0x0034 - 0x0034)
struct FParticleEventSpawnData : FParticleEventData
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x0004 (0x0034 - 0x0038)
struct FParticleEventDeathData : FParticleEventData
{
	float                                              ParticleTime;                                  // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x0020 (0x0034 - 0x0054)
struct FParticleEventCollideData : FParticleEventData
{
	float                                              ParticleTime;                                  // 0x0034 (0x0004) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0038 (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            Item;                                          // 0x0048 (0x0004) [0x0000000000000000]               
	struct FName                                       BoneName;                                      // 0x004C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventTraceData
// 0x0004 (0x0034 - 0x0038)
struct FParticleEventTraceData : FParticleEventData
{
	float                                              ParticleTime;                                  // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x0010 (0x0034 - 0x0044)
struct FParticleEventKismetData : FParticleEventData
{
	uint32_t                                           UsePSysCompLocation : 1;                       // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Normal;                                        // 0x0038 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventConstructData
// 0x0004 (0x0034 - 0x0038)
struct FParticleEventConstructData : FParticleEventData
{
	uint32_t                                           UsePSysCompLocation : 1;                       // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstanceMotionBlurInfo
// 0x0050
struct FParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 ParticleMBInfoMap;                             // 0x0000 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x002C
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                           // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AActor*                                      Base;                                          // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     RelativeLocation;                              // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RelativeRotation;                              // 0x001C (0x000C) [0x0000000000000000]               
	uint32_t                                           bInheritBaseScale : 1;                         // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x0024
struct FStatColorMapping
{
	class FString                                      StatName;                                      // 0x0000 (0x0010) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	class TArray<struct FStatColorMapEntry>            ColorMap;                                      // 0x0010 (0x0010) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	uint32_t                                           DisableBlend : 1;                              // 0x0020 (0x0004) [0x0000000000044000] [0x00000001] (CPF_Config | CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                            // 0x0000 (0x0004) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
	struct FColor                                      Out;                                           // 0x0004 (0x0004) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	class FString                                      Comment;                                       // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int32_t                                            StartU;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            StartV;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            USize;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            VSize;                                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            TextureIndex;                                  // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            VerticalOffset;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x00AC
struct FFontImportOptionsData
{
	class FString                                      FontName;                                      // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Height;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableAntialiasing : 1;                       // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bEnableBold : 1;                               // 0x0014 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bEnableItalic : 1;                             // 0x0014 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnableUnderline : 1;                          // 0x0014 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bAlphaOnly : 1;                                // 0x0014 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint8_t                                            CharacterSet;                                  // 0x0018 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      Chars;                                         // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      UnicodeRange;                                  // 0x0030 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      CharsFilePath;                                 // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      CharsFileWildcard;                             // 0x0050 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bCreatePrintableOnly : 1;                      // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIncludeASCIIRange : 1;                        // 0x0060 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	struct FLinearColor                                ForegroundColor;                               // 0x0064 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableDropShadow : 1;                         // 0x0074 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            TexturePageWidth;                              // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TexturePageMaxHeight;                          // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            XPadding;                                      // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            YPadding;                                      // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxTop;                                  // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxBottom;                               // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxRight;                                // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxLeft;                                 // 0x0094 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableLegacyMode : 1;                         // 0x0098 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            Kerning;                                       // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseDistanceFieldAlpha : 1;                    // 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            DistanceFieldScaleFactor;                      // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistanceFieldScanRadiusScale;                  // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineConstantBuffer.EngineConstantBufferStruct
// 0x0030
struct FEngineConstantBufferStruct
{
	struct FFloat4                                     TestEngineVarFloat4;                           // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FFloat3                                     TestEngineVarFloat3;                           // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FFloat1                                     TestEngineVarFloat1;                           // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FFloat2                                     TestEngineVarFloat2;                           // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TestEngineVarInt;                              // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TestEngineVarBool;                             // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.FullScreenMovieParameterString
// 0x0020
struct FFullScreenMovieParameterString
{
	class FString                                      ParameterName;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.EngineTypes.FullScreenMovieParameterInt
// 0x0014
struct FFullScreenMovieParameterInt
{
	class FString                                      ParameterName;                                 // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Value;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.FullScreenMovieParameters
// 0x0020
struct FFullScreenMovieParameters
{
	class TArray<struct FFullScreenMovieParameterString> StringParameters;                              // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FFullScreenMovieParameterInt>  IntParameters;                                 // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.ExperiencePipeline.ExperienceEventSummary
// 0x0038 (0x00B8 - 0x00F0)
struct FExperienceEventSummary : FEventSummary
{
	uint32_t                                           bKilledActorWasHero : 1;                       // 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            KilledHeroLevel;                               // 0x00BC (0x0004) [0x0000000000000000]               
	int32_t                                            XPNeededToLevel;                               // 0x00C0 (0x0004) [0x0000000000000000]               
	float                                              ExperiencePercentageAwarded;                   // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              ExperienceForKiller;                           // 0x00C8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bScaleRewardByNumTeammates : 1;                // 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            DeathShouldRewardExperienceToTeam;             // 0x00D0 (0x0001) [0x0000000000000000]               
	int32_t                                            NumberOfTeamMembers;                           // 0x00D4 (0x0004) [0x0000000000000000]               
	float                                              ExperienceForTeamMembers;                      // 0x00D8 (0x0004) [0x0000000000000000]               
	int32_t                                            NumberOfAssistants;                            // 0x00DC (0x0004) [0x0000000000000000]               
	float                                              ExperienceForAssist;                           // 0x00E0 (0x0004) [0x0000000000000000]               
	int32_t                                            ExpLevelOfPlayer;                              // 0x00E4 (0x0004) [0x0000000000000000]               
	int32_t                                            ExpLevelOfKilled;                              // 0x00E8 (0x0004) [0x0000000000000000]               
	float                                              LevelDifferenceExpScale;                       // 0x00EC (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.FaceFXAsset.GroupAnimationAndSoundIdentifier
// 0x0030
struct FGroupAnimationAndSoundIdentifier
{
	class FString                                      SoundNodeWaveName;                             // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FaceFXGroupName;                               // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FaceFXAnimName;                                // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.FogVolumeDensityInfo.FogVolumeDensityInfoCheckpointRecord
// 0x0004
struct FFogVolumeDensityInfoCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ForceFeedbackWaveform.PlayingWaveform
// 0x0028
struct FPlayingWaveform
{
	uint32_t                                           bIsLooping : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FWaveformSample>               Samples;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Scale;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              WaveformFalloffStartDistance;                  // 0x001C (0x0004) [0x0000000000000000]               
	float                                              MaxWaveformDistance;                           // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            WaveformRef;                                   // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ForceFeedbackManager.PlayingWaveformData
// 0x0040
struct FPlayingWaveformData
{
	struct FPlayingWaveform                            FFWaveform;                                    // 0x0000 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CurrentSample;                                 // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              ElapsedTime;                                   // 0x002C (0x0004) [0x0000000000000000]               
	float                                              ScaleAllWaveformsBy;                           // 0x0030 (0x0004) [0x0000000000000000]               
	class AActor*                                      WaveformInstigator;                            // 0x0038 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x0008
struct FWaveformSample
{
	uint8_t                                            LeftAmplitude;                                 // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            RightAmplitude;                                // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LeftFunction;                                  // 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            RightFunction;                                 // 0x0003 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bShouldBeLoaded : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShouldBeVisible : 1;                          // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.GameEngine.URL
// 0x005C
struct FURL
{
	class FString                                      Protocol;                                      // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Host;                                          // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0020 (0x0004) [0x0000000000100000]               
	class FString                                      Map;                                           // 0x0028 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Op;                                            // 0x0038 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Portal;                                        // 0x0048 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Valid;                                         // 0x0058 (0x0004) [0x0000000000100000]               
};

// ScriptStruct Engine.GameEngine.AnimTag
// 0x0020
struct FAnimTag
{
	class FString                                      Tag;                                           // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Contains;                                      // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	struct FName                                       NetDriverName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    NetDriver;                                     // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	uint8_t                                            FullyLoadType;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Tag;                                           // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FName>                         PackagesToLoad;                                // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UObject*>                       LoadedObjects;                                 // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// 0x0048
struct FGameTypePrefix
{
	class FString                                      Prefix;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bUsesCommonPackage : 1;                        // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      GameType;                                      // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        AdditionalGameTypes;                           // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ForcedObjects;                                 // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameInfo.GameClassShortName
// 0x0020
struct FGameClassShortName
{
	class FString                                      ShortName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameClassName;                                 // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameReplicationInfo.ReplicatedTimeData
// 0x0010
struct FReplicatedTimeData
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bCounting : 1;                                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              BaseTimeValue;                                 // 0x0008 (0x0004) [0x1000000000000000]               
	uint32_t                                           bCountUp : 1;                                  // 0x000C (0x0004) [0x1000000000000000] [0x00000001] 
	uint32_t                                           bRealtime : 1;                                 // 0x000C (0x0004) [0x1000000000000000] [0x00000002] 
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicStateInfo
// 0x0018
struct FMusicStateInfo
{
	uint8_t                                            State;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	class UAkState*                                    CustomCombatMusicAkState;                      // 0x0008 (0x0008) [0x0000000000000000]               
	class UAkState*                                    CustomAmbientMusicAkState;                     // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GameReplicationInfo.PauserData
// 0x0018
struct FPauserData
{
	struct FScriptDelegate                             Pauser;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class APlayerController*                           PC;                                            // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.MusicTrackDataStructures.MusicTrackStruct
// 0x0028
struct FMusicTrackStruct
{
	uint32_t                                           bAutoPlay : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPersistentAcrossLevels : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              FadeInTime;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInVolumeLevel;                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutTime;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutVolumeLevel;                            // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      MP3Filename;                                   // 0x0018 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// 0x001C
struct FWorldFractureSettings
{
	float                                              ChanceOfPhysicsChunkOverride;                  // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnableChanceOfPhysicsChunkOverride : 1;       // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLimitExplosionChunkSize : 1;                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MaxExplosionChunkSize;                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLimitDamageChunkSize : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDamageChunkSize;                            // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxNumFacturedChunksToSpawnInAFrame;           // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FractureExplosionVelScale;                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.NetViewer
// 0x0028
struct FNetViewer
{
	class APlayerController*                           InViewer;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      Viewer;                                        // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     ViewLocation;                                  // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     ViewDir;                                       // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	uint32_t                                           RigidBody : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           Fluid : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           Cloth : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           SoftBody : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x000C
struct FPhysXSimulationProperties
{
	uint32_t                                           bUseHardware : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bFixedTimeStep : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              TimeStep;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxSubSteps;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x003C
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                  // 0x0000 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                          // 0x000C (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentFluid;                              // 0x0018 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentCloth;                              // 0x0024 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                           // 0x0030 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// 0x0014
struct FApexModuleDestructibleSettings
{
	int32_t                                            MaxChunkIslandCount;                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxShapeCount;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxRrbActorCount;                              // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MaxChunkSeparationLOD;                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverrideMaxChunkSeparationLOD : 1;            // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	uint32_t                                           bDisableLod : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            ParticlesLodMin;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ParticlesLodMax;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PacketsPerPhysXParticleSystemMax;              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bApplyCylindricalPacketCulling : 1;            // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              SpawnLodVsFifoBias;                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                      // 0x0000 (0x0018) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x0024
struct FScreenMessageString
{
	struct FQWord                                      Key;                                           // 0x0000 (0x0008) [0x0000000000102000] (CPF_Transient)
	class FString                                      ScreenMessage;                                 // 0x0008 (0x0010) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	struct FColor                                      DisplayColor;                                  // 0x0018 (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              TimeToDisplay;                                 // 0x001C (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              CurrentTimeDisplayed;                          // 0x0020 (0x0004) [0x0000000000102000] (CPF_Transient)
};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// 0x0048
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            NumIndirectLightingBounces;                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IndirectLightingQuality;                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IndirectLightingSmoothness;                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      EnvironmentColor;                              // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EnvironmentIntensity;                          // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EmissiveBoost;                                 // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              IndirectNormalInfluenceBoost;                  // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseAmbientOcclusion : 1;                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              DirectIlluminationOcclusionFraction;           // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IndirectIlluminationOcclusionFraction;         // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OcclusionExponent;                             // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FullyOccludedSamplesFraction;                  // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxOcclusionDistance;                          // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bVisualizeMaterialDiffuse : 1;                 // 0x0040 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bVisualizeAmbientOcclusion : 1;                // 0x0040 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bBlurLightMaps : 1;                            // 0x0040 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              VolumeLightSamplePlacementScale;               // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.NavigationArea
// 0x000C
struct FNavigationArea
{
	struct FName                                       AreaName;                                      // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FColor                                      AreaColor;                                     // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.WorldInfo.LevelGroup
// 0x0038
struct FLevelGroup
{
	uint32_t                                           bCollapsed : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      GroupColor;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              Levels;                                        // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        LevelGridVolumes;                              // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GroupName;                                     // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0014
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                           // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       PropertyName;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSpecialProperty : 1;                          // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxPercentY;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              RecommendedPercentX;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RecommendedPercentY;                           // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x0010
struct FSplitscreenData
{
	class TArray<struct FPerPlayerSplitscreenData>     PlayerData;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              SizeY;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OriginX;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OriginY;                                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GBXInfluenceInfo.InfluenceHotSpotData
// 0x000C
struct FInfluenceHotSpotData
{
	int32_t                                            PointIdx;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              Value;                                         // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GBXInfluenceMap.GBXInfluencePoint
// 0x0020
struct FGBXInfluencePoint
{
	uint8_t                                            Layer;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            Adjacent[0x4];                                 // 0x0004 (0x0010) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.GBXNavMesh.InfluenceLookupList
// 0x0010
struct FInfluenceLookupList
{
	class TArray<int32_t>                              Points;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshVertex
// 0x0000 (0x000C - 0x000C)
struct FGBXNavMeshVertex : FVector
{
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshPolyLookup
// 0x0040
struct FGBXNavMeshPolyLookup
{
	int32_t                                            XCells;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            YCells;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     Origin;                                        // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     CellSize;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	class TArray<int32_t>                              CellIndices;                                   // 0x0020 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FGBXNavMeshLookupCell>         Cells;                                         // 0x0030 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshLookupCell
// 0x0010
struct FGBXNavMeshLookupCell
{
	struct FArray_Mirror                               IntersectingPolys;                             // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshPolyRef
// 0x000C
struct FGBXNavMeshPolyRef
{
	class AGBXNavMesh*                                 NavMesh;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            PolyIdx;                                       // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GBXInfluenceMap.InfluencePointRef
// 0x0010
struct FInfluencePointRef
{
	int32_t                                            PointIdx;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class AGBXInfluenceMap*                            Map;                                           // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.GBXInfluenceMap.InfluencePointIterator
// 0x0030
struct FInfluencePointIterator
{
	int32_t                                            DataIdx;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     BaseLoc;                                       // 0x0004 (0x000C) [0x0000000000000000]               
	uint32_t                                           bIterateMaps : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class AGBXInfluenceMap*                            Map;                                           // 0x0018 (0x0008) [0x0000000000000000]               
	uint32_t                                           bPolyConstainsPoint : 1;                       // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    PointList;                                     // 0x0028 (0x0008) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.GBXInfluenceMap.InfluencePointAreaIterator
// 0x0054
struct FInfluencePointAreaIterator
{
	int32_t                                            MinX;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            MinY;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxX;                                          // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxY;                                          // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            CurrX;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrY;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrZ;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxZ;                                          // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            BaseX;                                         // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            BaseY;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              UnitRadius;                                    // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            NodeRadius;                                    // 0x002C (0x0004) [0x0000000000000000]               
	uint32_t                                           bIterateMaps : 1;                              // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUseNodeRadius : 1;                            // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            NextPointIdx;                                  // 0x0034 (0x0004) [0x0000000000000000]               
	struct FVector                                     BaseLoc;                                       // 0x0038 (0x000C) [0x0000000000000000]               
	class AGBXInfluenceMap*                            Map;                                           // 0x0048 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSkipRadiusCheck : 1;                          // 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.GBXNavMesh.GBXLineCheckResult
// 0x001C
struct FGBXLineCheckResult
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x000C (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshSpecialMove
// 0x0038
struct FGBXNavMeshSpecialMove
{
	int32_t                                            DestinationPolyIdx;                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            DestinationMeshIdx;                            // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            CrossLevelMoverIdx;                            // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            ActorSpecialMoveId;                            // 0x000C (0x0004) [0x0000000000000000]               
	class UIGBXNavMeshSpecialMove*                     Mover_Object;                                  // 0x0010 (0x0010) [0x0000000000000000] 
	class UIGBXNavMeshSpecialMove*                     Mover_Interface;                               // 0x0010 (0x0010) [0x0000000000000000]               
	struct FVector                                     LocalSpaceSrcLocation;                         // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     LocalSpaceDestLocation;                        // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.GBXNavMesh.GBXNavmeshCrossLevelConnection
// 0x0006
struct FGBXNavmeshCrossLevelConnection
{
	uint8_t                                            EdgeIdx[0x2];                                  // 0x0000 (0x0002) [0x0000000000800002] (CPF_Const | CPF_NoExport)
	uint8_t                                            ConnectedNavmeshIdx[0x2];                      // 0x0002 (0x0002) [0x0000000000800002] (CPF_Const | CPF_NoExport)
	uint8_t                                            PolyIdx[0x2];                                  // 0x0004 (0x0002) [0x0000000000800002] (CPF_Const | CPF_NoExport)
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshPolyData
// 0x002C
struct FGBXNavMeshPolyData
{
	class TArray<struct FGBXNavmeshCrossLevelConnection> CrossLevelConnections;                         // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FGBXNavMeshSpecialMove>        SpecialMoves;                                  // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            Obstacles[0xC];                                // 0x0020 (0x000C) [0x0000000000800002] (CPF_Const | CPF_NoExport)
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshPathSize
// 0x0014
struct FGBXNavMeshPathSize
{
	float                                              Radius;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	struct FColor                                      DrawColor;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	struct FColor                                      ObstacleDrawColor;                             // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            StartIndex;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GBXNavMesh.GBXNavMeshObstacleData
// 0x000C
struct FGBXNavMeshObstacleData
{
	class UGBXCrossLevelReferenceContainer*            Obstacle;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            MinAffectedPathSize;                           // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GBXNavMesh.GBXConnectedNavMesh
// 0x000C
struct FGBXConnectedNavMesh
{
	class AGBXNavMesh*                                 Mesh;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            MeshID;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GearboxCollisionGrid.CollisionVolumeList
// 0x0010
struct FCollisionVolumeList
{
	class TArray<int32_t>                              Volumes;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GearboxCollisionGrid.CollisionGridVolumeAxis
// 0x0014
struct FCollisionGridVolumeAxis
{
	struct FVector                                     Normal;                                        // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              Min;                                           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Max;                                           // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GearboxCollisionGrid.CollisionGridVolume
// 0x0044
struct FCollisionGridVolume
{
	class AVolume*                                     Volume;                                        // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FCollisionGridVolumeAxis                    Axes[0x3];                                     // 0x0008 (0x003C) [0x0000000000000000]               
};

// ScriptStruct Engine.GearboxEngineGlobals.PlayerOwnedComponent
// 0x0010
struct FPlayerOwnedComponent
{
	class AActor*                                      PlayerOwner;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class UActorComponent*                             Component;                                     // 0x0008 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.GestaltPartMatrices.GestaltAccessoryMeshEntry
// 0x0018
struct FGestaltAccessoryMeshEntry
{
	struct FName                                       MeshName;                                      // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class TArray<struct FGestaltAccessoryGroupEntry>   GestaltAccessoryGroupList;                     // 0x0008 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
};

// ScriptStruct Engine.GestaltPartMatrices.GestaltAccessoryGroupEntry
// 0x0018
struct FGestaltAccessoryGroupEntry
{
	struct FName                                       GroupName;                                     // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class TArray<struct FGestaltAccessoryPartEntry>    GestaltAccessoryPartList;                      // 0x0008 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
};

// ScriptStruct Engine.GestaltPartMatrices.GestaltAccessoryPartEntry
// 0x0014
struct FGestaltAccessoryPartEntry
{
	struct FName                                       PartName;                                      // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	struct FName                                       BoneName;                                      // 0x0008 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	int32_t                                            MatrixIndex;                                   // 0x0010 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct Engine.GestaltPartMatricesCollectionDefinition.GPMCollection
// 0x0008
struct FGPMCollection
{
	class UGestaltPartMatrices*                        CollectionData;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.HeadTrackingComponent.ActorToLookAt
// 0x001C
struct FActorToLookAt
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Rating;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              EnteredTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	float                                              LastKnownDistance;                             // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              StartTimeBeingLookedAt;                        // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           CurrentlyBeingLookedAt : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.IBodyCompositionInstance.ReplicatedBodyItem
// 0x0004
struct FReplicatedBodyItem
{
	uint8_t                                            BodyIndex;                                     // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            SlotIndex;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            Unused;                                        // 0x0002 (0x0001) [0x0000000000000000]               
	uint8_t                                            Unused01;                                      // 0x0003 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.IGBXNavMeshSpecialMove.GBXNavMeshSpecialMoveConnection
// 0x0040
struct FGBXNavMeshSpecialMoveConnection
{
	struct FGBXNavMeshPolyRef                          SrcPoly;                                       // 0x0000 (0x0010) [0x0000000000000000]               
	struct FVector                                     SrcLocation;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	struct FGBXNavMeshPolyRef                          DestPoly;                                      // 0x0020 (0x0010) [0x0000000000000000]               
	struct FVector                                     DestLocation;                                  // 0x0030 (0x000C) [0x0000000000000000]               
	int32_t                                            MoveId;                                        // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.IInstanceData.InstanceData2
// 0x0010
struct FInstanceData2
{
	class TArray<struct FInstanceDataItem2>            Data;                                          // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.StaticMeshActor.PreCombinedStaticMeshActor
// 0x0048
struct FPreCombinedStaticMeshActor
{
	class UStaticMesh*                                 Mesh;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     PrePivot;                                      // 0x0020 (0x000C) [0x0000000000000000]               
	float                                              DrawScale;                                     // 0x002C (0x0004) [0x0000000000000000]               
	struct FVector                                     DrawScale3D;                                   // 0x0030 (0x000C) [0x0000000000000000]               
	struct FVector                                     ComponentScale3D;                              // 0x003C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpActor.InterpActorCheckpointRecord
// 0x0020
struct FInterpActorCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint8_t                                            CollisionType;                                 // 0x0018 (0x0001) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsShutdown : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsPositionReplication : 1;                 // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	class FString                                      TabName;                                       // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCurveEdEntry>                 Curves;                                        // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ViewStartInput;                                // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ViewEndInput;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              ViewStartOutput;                               // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              ViewEndOutput;                                 // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FColor                                      CurveColor;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class FString                                      CurveName;                                     // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            bHideCurve;                                    // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            bColorCurve;                                   // 0x0024 (0x0004) [0x0000000000000000]               
	int32_t                                            bFloatingPointColorCurve;                      // 0x0028 (0x0004) [0x0000000000000000]               
	int32_t                                            bClamp;                                        // 0x002C (0x0004) [0x0000000000000000]               
	float                                              ClampLow;                                      // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              ClampHigh;                                     // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpData.AnimSetBakeAndPruneStatus
// 0x0014
struct FAnimSetBakeAndPruneStatus
{
	class FString                                      AnimSetName;                                   // 0x0000 (0x0010) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	uint32_t                                           bReferencedButUnused : 1;                      // 0x0010 (0x0004) [0x0000000000020001] [0x00000001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bSkipBakeAndPrune : 1;                         // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                         // 0x0000 (0x0008) [0x0000000000000000]               
	class UInterpTrack*                                Track;                                         // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            KeyIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              UnsnappedPosition;                             // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x0024
struct FSubTrackGroup
{
	class FString                                      GroupName;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              TrackIndices;                                  // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsCollapsed : 1;                              // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsSelected : 1;                               // 0x0020 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x001C
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SubTrackName;                                  // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            GroupIndex;                                    // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       AnimSeqName;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              AnimStartOffset;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AnimEndOffset;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AnimPlayRate;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLooping : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReverse : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           Value : 1;                                     // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackComment.CommentTrackKey
// 0x0018
struct FCommentTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      Comment;                                       // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0010
struct FDirectorTrackCut
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TransitionTime;                                // 0x0004 (0x0004) [0x0000000000000000]               
	struct FName                                       TargetCamGroup;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       EventName;                                     // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x0028
struct FFaceFXTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      FaceFXGroupName;                               // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FaceFXSeqName;                                 // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// 0x0008
struct FFaceFXSoundCueKey
{
	class UAkEvent*                                    FaceFXAkEvent;                                 // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.InterpTrackHeadTracking.HeadTrackingKey
// 0x0005
struct FHeadTrackingKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// 0x0020
struct FFloatMaterialParamMICData
{
	class TArray<class UMaterialInstance*>             MICs;                                          // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<float>                                MICResetFloats;                                // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            ToggleAction;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// 0x0020
struct FVectorMaterialParamMICData
{
	class TArray<class UMaterialInstance*>             MICs;                                          // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FVector>                       MICResetVectors;                               // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0006
struct FVisibilityTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ActiveCondition;                               // 0x0005 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	class TArray<struct FInterpLookupPoint>            Points;                                        // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ClipIDNumber;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackTeleport.TeleportKeyData
// 0x001C
struct FTeleportKeyData
{
	float                                              KeyTime;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     LocationKey;                                   // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RotationKey;                                   // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.LandscapeComponent.WeightmapLayerAllocationInfo
// 0x000A
struct FWeightmapLayerAllocationInfo
{
	struct FName                                       LayerName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            WeightmapTextureIndex;                         // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            WeightmapTextureChannel;                       // 0x0009 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x01C8
struct FLensFlareElement
{
	struct FName                                       ElementName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              RayDistance;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIsEnabled : 1;                                // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIsSoloing : 1;                                // 0x000C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseSourceDistance : 1;                        // 0x000C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bNormalizeRadialDistance : 1;                  // 0x000C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bModulateColorBySource : 1;                    // 0x000C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	struct FVector                                     Size;                                          // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UMaterialInterface*>            LFMaterials;                                   // 0x0020 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       LFMaterialIndex;                               // 0x0030 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Scaling;                                       // 0x0058 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      AxisScaling;                                   // 0x0080 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Rotation;                                      // 0x00A8 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	uint32_t                                           bOrientTowardsSource : 1;                      // 0x00D0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FRawDistributionVector                      Color;                                         // 0x00D8 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Alpha;                                         // 0x0100 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      Offset;                                        // 0x0128 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Scale;                                 // 0x0150 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Color;                                 // 0x0178 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       DistMap_Alpha;                                 // 0x01A0 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0018
struct FLensFlareElementCurvePair
{
	class FString                                      CurveName;                                     // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                   // 0x0010 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// 0x0010
struct FLensFlareElementMaterials
{
	class TArray<class UMaterialInterface*>            ElementMaterials;                              // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{
};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// 0x000C
struct FLevelGridCellCoordinate
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Z;                                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LevelStreamingVolume.LevelStreamingVolumeCheckpointRecord
// 0x0004
struct FLevelStreamingVolumeCheckpointRecord
{
	uint32_t                                           bDisabled : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.LocalPlayer.CurrentPostProcessVolumeInfo
// 0x0128
struct FCurrentPostProcessVolumeInfo
{
	struct FPostProcessSettings                        LastSettings;                                  // 0x0000 (0x0118) [0x0000000000400000] (CPF_NeedCtorLink)
	class APostProcessVolume*                          LastVolumeUsed;                                // 0x0118 (0x0008) [0x0000000000000000]               
	float                                              BlendStartTime;                                // 0x0120 (0x0004) [0x0000000000000000]               
	float                                              LastBlendTime;                                 // 0x0124 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LocalPlayer.WorldLightingOverride
// 0x0018
struct FWorldLightingOverride
{
	float                                              FadeInTime;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              FadeOutTime;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              RemainingFadeTime;                             // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           RemovalRequested : 1;                          // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	class UObject*                                     pMovie;                                        // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.LocalPlayer.PostProcessSettingsOverride
// 0x0130
struct FPostProcessSettingsOverride
{
	struct FPostProcessSettings                        Settings;                                      // 0x0000 (0x0118) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bBlendingIn : 1;                               // 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlendingOut : 1;                              // 0x0118 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              CurrentBlendInTime;                            // 0x011C (0x0004) [0x0000000000000000]               
	float                                              CurrentBlendOutTime;                           // 0x0120 (0x0004) [0x0000000000000000]               
	float                                              BlendInDuration;                               // 0x0124 (0x0004) [0x0000000000000000]               
	float                                              BlendOutDuration;                              // 0x0128 (0x0004) [0x0000000000000000]               
	float                                              BlendStartTime;                                // 0x012C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LODObject.LODProxyMeshData
// 0x0030
struct FLODProxyMeshData
{
	class UStaticMesh*                                 Mesh;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DiffuseSize;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            OnScreenSize;                                  // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     ProxyOffset;                                   // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class AStaticMeshActor*                            Actor;                                         // 0x0020 (0x0008) [0x0000000000002001] (CPF_Edit | CPF_Transient)
	class UStaticMeshComponent*                        Component;                                     // 0x0028 (0x0008) [0x0000000004082009] (CPF_Edit | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.ManufacturerDefinition.ManufacturerGradeData
// 0x0010
struct FManufacturerGradeData
{
	class FString                                      DisplayName;                                   // 0x0000 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ManufacturerDefinition.ManufacturerCustomGradeWeightData
// 0x0009
struct FManufacturerCustomGradeWeightData
{
	class UManufacturerDefinition*                     Manufacturer;                                  // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            DefaultWeightIndex;                            // 0x0008 (0x0001) [0x0000000000020002] (CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.MaterialExpression.ExpressionOutput
// 0x0024
struct FExpressionOutput
{
	class FString                                      OutputName;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Mask;                                          // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x0004 (0x0034 - 0x0038)
struct FExpressionInput : FExpressionInputBase
{
};

// ScriptStruct Engine.MaterialExpressionCustom.CustomInput
// 0x0048
struct FCustomInput
{
	class FString                                      InputName;                                     // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FExpressionInput                            Input;                                         // 0x0010 (0x0038) [0x0000020000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionOutput
// 0x0040
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                              // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FGuid                                       ExpressionOutputId;                            // 0x0008 (0x0010) [0x0000000000000000]               
	struct FExpressionOutput                           Output;                                        // 0x0018 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialExpressionMaterialFunctionCall.FunctionExpressionInput
// 0x0050
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                               // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FGuid                                       ExpressionInputId;                             // 0x0008 (0x0010) [0x0000000000000000]               
	struct FExpressionInput                            Input;                                         // 0x0018 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstance.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                ParameterValue;                                // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0018 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstance.Float4ParameterValue
// 0x002D
struct FFloat4ParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FFloat4                                     ParameterValue;                                // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0018 (0x0010) [0x0000000000000000]               
	int32_t                                            ParameterIndex;                                // 0x0028 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            ParameterCount;                                // 0x002C (0x0001) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.MaterialInstance.IntParameterValue
// 0x0021
struct FIntParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ParameterValue;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x000C (0x0010) [0x0000000000000000]               
	int32_t                                            ParameterIndex;                                // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            ParameterCount;                                // 0x0020 (0x0001) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.MaterialInstance.BoolParameterValue
// 0x0021
struct FBoolParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           ParameterValue : 1;                            // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FGuid                                       ExpressionGUID;                                // 0x000C (0x0010) [0x0000000000000000]               
	int32_t                                            ParameterIndex;                                // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            ParameterCount;                                // 0x0020 (0x0001) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.MaterialInstance.FontParameterValue
// 0x0024
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UFont*                                       FontValue;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FontPage;                                      // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstance.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ParameterValue;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x000C (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstance.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    ParameterValue;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstance.SamplerParameterValue
// 0x0020
struct FSamplerParameterValue
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USampler*                                    ParameterValue;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MorphNodeWeightBase.MorphNodeConn
// 0x001C
struct FMorphNodeConn
{
	class TArray<class UMorphNodeBase*>                ChildNodes;                                    // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       ConnName;                                      // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MorphNodeWeightByBoneAngle.BoneAngleMorph
// 0x0008
struct FBoneAngleMorph
{
	float                                              Angle;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetWeight;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// 0x005C
struct FNavMeshPathParams
{
	struct FPointer                                    Interface;                                     // 0x0000 (0x0008) [0x0000000000001000] (CPF_Native)  
	class UNavigationHandle*                           NavHandle;                                     // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bCanMantle : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCanPhysicsJump : 1;                           // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              PhysicsJumpCostMultiplier;                     // 0x0014 (0x0004) [0x0000000000000000]               
	struct FVector                                     SearchExtent;                                  // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              SearchLaneMultiplier;                          // 0x0024 (0x0004) [0x0000000000000000]               
	struct FVector                                     SearchStart;                                   // 0x0028 (0x000C) [0x0000000000000000]               
	float                                              MinWalkableZ;                                  // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              MaxHoverDistance;                              // 0x0038 (0x0004) [0x0000000000000000]               
	class TArray<class UObject*>                       ObstaclesToIgnore;                             // 0x0040 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              LookAheadDistance;                             // 0x0050 (0x0004) [0x0000000000000000]               
	float                                              CornerCutDistance;                             // 0x0054 (0x0004) [0x0000000000000000]               
	float                                              LookInterpRate;                                // 0x0058 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchResult
// 0x0010
struct FOnlineGameSearchResult
{
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    PlatformData;                                  // 0x0008 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x0030
struct FLocalizedStringSettingMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      ColumnHeaderText;                              // 0x0010 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<struct FStringIdToStringMapping>      ValueMappings;                                 // 0x0020 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Name;                                          // 0x0004 (0x0008) [0x0000000000008002] (CPF_Const | CPF_Localized)
	uint32_t                                           bIsWildcard : 1;                               // 0x000C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct Engine.OnlineGameSearch.OverrideSkill
// 0x0038
struct FOverrideSkill
{
	int32_t                                            LeaderboardId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FUniqueNetId>                  Players;                                       // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FDouble>                       Mus;                                           // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FDouble>                       Sigmas;                                        // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchQuery
// 0x0020
struct FOnlineGameSearchQuery
{
	class TArray<struct FOnlineGameSearchORClause>     OrClauses;                                     // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineGameSearchSortClause>   SortClauses;                                   // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchORClause
// 0x0010
struct FOnlineGameSearchORClause
{
	class TArray<struct FOnlineGameSearchParameter>    OrParams;                                      // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchParameter
// 0x0012
struct FOnlineGameSearchParameter
{
	int32_t                                            EntryId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CompareValueId;                                // 0x0004 (0x0004) [0x0000000000000000]               
	struct FName                                       ObjectPropertyName;                            // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            EntryType;                                     // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            ComparisonType;                                // 0x0011 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineGameSearch.OnlineGameSearchSortClause
// 0x000E
struct FOnlineGameSearchSortClause
{
	int32_t                                            EntryId;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	struct FName                                       ObjectPropertyName;                            // 0x0004 (0x0008) [0x0000000000000000]               
	uint8_t                                            EntryType;                                     // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            SortType;                                      // 0x000D (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineGameSearch.NamedObjectProperty
// 0x0018
struct FNamedObjectProperty
{
	struct FName                                       ObjectPropertyName;                            // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      ObjectPropertyValue;                           // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x0054
struct FSettingsPropertyPropertyMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      ColumnHeaderText;                              // 0x0010 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint8_t                                            MappingType;                                   // 0x0020 (0x0001) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FIdToStringMapping>            ValueMappings;                                 // 0x0028 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FSettingsData>                 PredefinedValues;                              // 0x0038 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              MinVal;                                        // 0x0048 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxVal;                                        // 0x004C (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              RangeIncrement;                                // 0x0050 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x0018
struct FIdToStringMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      Name;                                          // 0x0008 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.SettingsData
// 0x0010
struct FSettingsData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Value1;                                        // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    Value2;                                        // 0x0008 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.OnlineGameSettings.LocKey
// 0x0030
struct FLocKey
{
	class FString                                      File;                                          // 0x0000 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Section;                                       // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Key;                                           // 0x0020 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataProvider.UIDataProviderField
// 0x0020
struct FUIDataProviderField
{
	struct FName                                       FieldTag;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	uint8_t                                            FieldType;                                     // 0x0008 (0x0001) [0x0000000000100000]               
	class TArray<class UUIDataProvider*>               FieldProviders;                                // 0x0010 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x0048
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FSettingsData                               Rank;                                          // 0x0018 (0x0010) [0x0000000000000002] (CPF_Const)   
	class FString                                      NickName;                                      // 0x0028 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FOnlineStatsColumn>            Columns;                                       // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0018
struct FOnlineStatsColumn
{
	int32_t                                            ColumnNo;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               StatValue;                                     // 0x0008 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x0020
struct FColumnMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      ColumnName;                                    // 0x0010 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x0038
struct FParticleBurst
{
	int32_t                                            Count;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CountLow;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRawDistributionFloat                       CountDistribution;                             // 0x0010 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	class FString                                      CurveName;                                     // 0x0000 (0x0010) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                   // 0x0010 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.ParticleModule.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bGetSeedFromInstance : 1;                      // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bInstanceSeedIsIndex : 1;                      // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bResetSeedOnEmitterLooping : 1;                // 0x0008 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	class TArray<int32_t>                              RandomSeeds;                                   // 0x0010 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x0038
struct FParticleEvent_GenerateInfo
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Frequency;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LowFreq;                                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ParticleFrequency;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           FirstTimeOnly : 1;                             // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           LastTimeOnly : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              MinimumImpactVelocity;                         // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           UseReflectedImpactVector : 1;                  // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FName                                       CustomName;                                    // 0x001C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;              // 0x0028 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.ParticleModuleEventReceiverEnabler.ParticleEventReceiverEnabler_Info
// 0x0010
struct FParticleEventReceiverEnabler_Info
{
	uint8_t                                            Action;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            TargetType;                                    // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       TargetName;                                    // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           ForceKill : 1;                                 // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleLightBase.ParticleModuleLightConfig
// 0x002B
struct FParticleModuleLightConfig
{
	uint32_t                                           bCastDynamicShadows : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FLightingChannelContainer                   LightingChannels;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bRenderLightShafts : 1;                        // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              OcclusionDepthRange;                           // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BloomScale;                                    // 0x0010 (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              BloomThreshold;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BloomScreenBlendThreshold;                     // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      BloomTint;                                     // 0x001C (0x0004) [0x0000000200000001] (CPF_Edit)    
	float                                              RadialBlurPercent;                             // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OcclusionMaskDarkness;                         // 0x0024 (0x0004) [0x0000000200000001] (CPF_Edit)    
	uint8_t                                            GameDepthPriorityGroup;                        // 0x0028 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            GameRenderPhase;                               // 0x0029 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ViewSeeType;                                   // 0x002A (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleLocationStaticMesh.MeshVoxelInfo
// 0x004C
struct FMeshVoxelInfo
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Z;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            HitCount;                                      // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     Ratios;                                        // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Origin;                                        // 0x001C (0x000C) [0x0000000000000000]               
	class TArray<int32_t>                              PlaneFrequencies;                              // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              Data;                                          // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsValid : 1;                                  // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	uint32_t                                           bProcessDuringSpawn : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bProcessDuringUpdate : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseEmitterTime : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0040
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                     // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bUseEmitterTime : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSpawnTimeOnly : 1;                            // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                            ValueMethod;                                   // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bScaleVelocityByParamValue : 1;                // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FRawDistributionFloat                       ParamValue;                                    // 0x0018 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetPercentage;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WeightForSpawnLod;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpawnLodRateVsLifeBias;                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RelativeFadeoutTime;                           // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PersistentSequenceData.PersistentData
// 0x0008
struct FPersistentData
{
	struct FPointer                                    VfTable;                                       // 0x0000 (0x0008) [0x0000000000803002] (CPF_Const | CPF_Native | CPF_Transient | CPF_NoExport)
};

// ScriptStruct Engine.PersistentSequenceData.PersistentSeqAct_InterpData
// 0x0004 (0x0008 - 0x000C)
struct FPersistentSeqAct_InterpData : FPersistentData
{
	float                                              Position;                                      // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PersistentSequenceData.PersistentSequenceEventData
// 0x0004 (0x0008 - 0x000C)
struct FPersistentSequenceEventData : FPersistentData
{
	int32_t                                            TriggerCount;                                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PipelineHistoryManager.SummaryCount
// 0x000C
struct FSummaryCount
{
	int32_t                                            DamageSummaryCount;                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CurrencySummaryCount;                          // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            ExperienceSummaryCount;                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerReplicationInfo.AutomatedTestingDatum
// 0x0008
struct FAutomatedTestingDatum
{
	int32_t                                            NumberOfMatchesPlayed;                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            NumMapListCyclesDone;                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PointLightToggleable.PointLightToggleableCheckpointRecord
// 0x0004
struct FPointLightToggleableCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// 0x002C
struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;                                // 0x0000 (0x0008) [0x0000000000000000]               
	class AActor*                                      InOriginator;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	class AActor*                                      InInstigator;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              ActivateIndices;                               // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bPushTop : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0018
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class USequenceOp*                                 Op;                                            // 0x0008 (0x0008) [0x0000000000000000]               
	int32_t                                            InputIdx;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              RemainingDelay;                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ProxyMeshLODTemplates.ProxyMeshLODTemplateEntry
// 0x0018
struct FProxyMeshLODTemplateEntry
{
	struct FName                                       TemplateName;                                  // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	class TArray<struct FProxyMeshLODTemplate>         LODs;                                          // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.ProxyMeshLODTemplates.ProxyMeshLODTemplate
// 0x0018
struct FProxyMeshLODTemplate
{
	int32_t                                            OnScreenSize;                                  // 0x0000 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            TextureSize;                                   // 0x0004 (0x0004) [0x0000000000004000] (CPF_Config)  
	class TArray<uint8_t>                              TexturesToCombine;                             // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x0008
struct FLinearDOFSetup
{
	uint8_t                                            bLimited;                                      // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              LimitSize;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ResourcePoolManager.ResourcePoolIdentityState
// 0x0009
struct FResourcePoolIdentityState
{
	class UResourcePoolDefinition*                     PoolDefinition;                                // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            PoolGUID;                                      // 0x0008 (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.ResourcePoolManager.ResourcePoolValueState
// 0x000C
struct FResourcePoolValueState
{
	float                                              CurrentValue;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              NetRateOfChange;                               // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            FlashCount;                                    // 0x0008 (0x0004) [0x1000000000000000]               
};

// ScriptStruct Engine.ResourcePoolManager.RarelyChangedPoolState
// 0x0014
struct FRarelyChangedPoolState
{
	float                                              ConsumptionRate;                               // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              ActiveRegenerationRate;                        // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OnIdleRegenerationRate;                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OnIdleRegenerationDelay;                       // 0x000C (0x0004) [0x0000000000000000]               
	float                                              PassiveRegenerationRate;                       // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SaveDataManager.UserSaveDataUnity
// 0x007B
struct FUserSaveDataUnity
{
	struct FPlatformUserId                             UserId;                                        // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              LastReadSaveData;                              // 0x0008 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        LastReadSaveList;                              // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadSaveDataCompleteDelegates;                 // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteSaveDataCompleteDelegates;                // 0x0038 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DeleteSaveDataCompleteDelegates;               // 0x0048 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ListSaveDataCompleteDelegates;                 // 0x0058 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               CheckSaveDataExistsCompleteDelegates;          // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            CurrentOperation;                              // 0x0078 (0x0001) [0x0000000000000000]               
	uint8_t                                            CurrentState;                                  // 0x0079 (0x0001) [0x0000000000000000]               
	uint8_t                                            Result;                                        // 0x007A (0x0001) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x0010
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                         // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       LevelName;                                     // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	struct FName                                       ClassName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            bFallThru;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x000C
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFallThru : 1;                                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDefaultValue : 1;                             // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.SkelControlBase.SkelControlChild
// 0x0020
struct FSkelControlChild
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneIndex;                                     // 0x0008 (0x0001) [0x0000000000000000]               
	struct FName                                       Name;                                          // 0x000C (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            Control;                                       // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMesh.SoftBodyTetraLink
// 0x0010
struct FSoftBodyTetraLink
{
	int32_t                                            Index;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     Bary;                                          // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x002C
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LODHysteresis;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<int32_t>                              LODMaterialMap;                                // 0x0008 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	class TArray<uint32_t>                             bEnableShadowCasting;                          // 0x0018 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	uint32_t                                           bDisableCompressions : 1;                      // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x0011
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SourceBoneName;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneFlipAxis;                                  // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.SoftBodySpecialBoneInfo
// 0x0020
struct FSoftBodySpecialBoneInfo
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneType;                                      // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<int32_t>                              AttachedVertexIndices;                         // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.Sphere
// 0x0010
struct FSphere
{
	struct FVector                                     Center;                                        // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              Radius;                                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.ClothSpecialBoneInfo
// 0x0020
struct FClothSpecialBoneInfo
{
	struct FName                                       BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneType;                                      // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<int32_t>                              AttachedVertexIndices;                         // 0x0010 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int32_t                                            SourceIndex;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneFlipAxis;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingAssetInfo
// 0x0018
struct FApexClothingAssetInfo
{
	class TArray<struct FApexClothingLodInfo>          ClothingLodInfo;                               // 0x0000 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
	struct FName                                       ClothingAssetName;                             // 0x0010 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMesh.ApexClothingLodInfo
// 0x0010
struct FApexClothingLodInfo
{
	class TArray<int32_t>                              ClothingSectionInfo;                           // 0x0000 (0x0010) [0x0000000000400041] (CPF_Edit | CPF_EditConstArray | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// 0x0010
struct FSkelMeshActorControlTarget
{
	struct FName                                       ControlName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      TargetActor;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshActor.SkeletalMeshActorCheckpointRecord
// 0x001C
struct FSkeletalMeshActorCheckpointRecord
{
	uint32_t                                           bReplicated : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHidden : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSavedPosition : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshActorBasedOnExtremeContent.SkelMaterialSetterDatum
// 0x0010
struct FSkelMaterialSetterDatum
{
	int32_t                                            MaterialIndex;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          TheMaterial;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SplineActor.SplineConnection
// 0x0010
struct FSplineConnection
{
	class USplineComponent*                            SplineComponent;                               // 0x0000 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ASplineActor*                                ConnectTo;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     StartTangent;                                  // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector2D                                   StartScale;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              StartRoll;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   StartOffset;                                   // 0x0024 (0x0008) [0x0000000000000000]               
	struct FVector                                     EndPos;                                        // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     EndTangent;                                    // 0x0038 (0x000C) [0x0000000000000000]               
	struct FVector2D                                   EndScale;                                      // 0x0044 (0x0008) [0x0000000000000000]               
	float                                              EndRoll;                                       // 0x004C (0x0004) [0x0000000000000000]               
	struct FVector2D                                   EndOffset;                                     // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.SpotLightToggleable.SpotLightToggleableCheckpointRecord
// 0x0004
struct FSpotLightToggleableCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.StaticMeshActorBasedOnExtremeContent.SMMaterialSetterDatum
// 0x0010
struct FSMMaterialSetterDatum
{
	int32_t                                            MaterialIndex;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          TheMaterial;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.StaticMeshLODTemplates.StaticMeshLODTemplateEntry
// 0x0020
struct FStaticMeshLODTemplateEntry
{
	struct FName                                       TemplateName;                                  // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxPolyCount;                                  // 0x0008 (0x0004) [0x0000000000004000] (CPF_Config)  
	class TArray<struct FStaticMeshLODTemplate>        LODs;                                          // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SVehicle.VehicleState
// 0x004C
struct FVehicleState
{
	struct FRigidBodyState                             RBState;                                       // 0x0000 (0x0040) [0x0000000000000000]               
	uint8_t                                            ServerBrake;                                   // 0x0040 (0x0001) [0x0000000000000000]               
	uint8_t                                            ServerGas;                                     // 0x0041 (0x0001) [0x0000000000000000]               
	uint8_t                                            ServerSteering;                                // 0x0042 (0x0001) [0x0000000000000000]               
	uint8_t                                            ServerRise;                                    // 0x0043 (0x0001) [0x0000000000000000]               
	uint32_t                                           bServerHandbrake : 1;                          // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ServerView;                                    // 0x0048 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.TargetableList.SearchState
// 0x0028
struct FSearchState
{
	class UITargetable*                                Subject_Object;                                // 0x0000 (0x0010) [0x0000000000000000] 
	class UITargetable*                                Subject_Interface;                             // 0x0000 (0x0010) [0x0000000000000000]               
	uint8_t                                            Type;                                          // 0x0010 (0x0001) [0x0000000000000000]               
	int32_t                                            ListIndex;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	class TArray<class UITargetable*>                  CurrentList;                                   // 0x0018 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Terrain.CachedTerrainMaterialArray
// 0x0010
struct FCachedTerrainMaterialArray
{
	class TArray<struct FPointer>                      CachedMaterials;                               // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.Terrain.TerrainMaterialResource
// 0x0000
struct FTerrainMaterialResource
{
};

// ScriptStruct Engine.Terrain.TerrainHeight
// 0x0000
struct FTerrainHeight
{
};

// ScriptStruct Engine.Terrain.TerrainInfoData
// 0x0000
struct FTerrainInfoData
{
};

// ScriptStruct Engine.Terrain.TerrainWeightedMaterial
// 0x0000
struct ATerrain_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Terrain.TerrainLayer
// 0x0028
struct FTerrainLayer
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UTerrainLayerSetup*                          Setup;                                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            AlphaMapIndex;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           Highlighted : 1;                               // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           WireframeHighlighted : 1;                      // 0x001C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           Hidden : 1;                                    // 0x001C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	struct FColor                                      HighlightColor;                                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      WireframeColor;                                // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Terrain.AlphaMap
// 0x0000
struct FAlphaMap
{
};

// ScriptStruct Engine.Terrain.TerrainDecorationInstance
// 0x0018
struct FTerrainDecorationInstance
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              X;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Y;                                             // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            Yaw;                                           // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.TerrainDecoration
// 0x0030
struct FTerrainDecoration
{
	class UPrimitiveComponentFactory*                  Factory;                                       // 0x0000 (0x0008) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	float                                              MinScale;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxScale;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Density;                                       // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SlopeRotationBlend;                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            RandSeed;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FTerrainDecorationInstance>    Instances;                                     // 0x0020 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Terrain.TerrainDecoLayer
// 0x0024
struct FTerrainDecoLayer
{
	class FString                                      Name;                                          // 0x0000 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FTerrainDecoration>            Decorations;                                   // 0x0010 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	int32_t                                            AlphaMapIndex;                                 // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Terrain.SelectedTerrainVertex
// 0x000C
struct FSelectedTerrainVertex
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Weight;                                        // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.TerrainComponent.TerrainBVTree
// 0x0010
struct FTerrainBVTree
{
	class TArray<int32_t>                              Nodes;                                         // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.TerrainComponent.TerrainkDOPTree
// 0x0020
struct FTerrainkDOPTree
{
	class TArray<int32_t>                              Nodes;                                         // 0x0000 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	class TArray<int32_t>                              Triangles;                                     // 0x0010 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.TerrainLayerSetup.FilterLimit
// 0x0010
struct FFilterLimit
{
	uint32_t                                           Enabled : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              Base;                                          // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NoiseScale;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NoiseAmount;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.TerrainLayerSetup.TerrainFilteredMaterial
// 0x0058
struct FTerrainFilteredMaterial
{
	uint32_t                                           UseNoise : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              NoiseScale;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NoisePercent;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FFilterLimit                                MinHeight;                                     // 0x000C (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FFilterLimit                                MaxHeight;                                     // 0x001C (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FFilterLimit                                MinSlope;                                      // 0x002C (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FFilterLimit                                MaxSlope;                                      // 0x003C (0x0010) [0x0000000000000001] (CPF_Edit)    
	float                                              Alpha;                                         // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UTerrainMaterial*                            Material;                                      // 0x0050 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.TerrainMaterial.TerrainFoliageMesh
// 0x0040
struct FTerrainFoliageMesh
{
	class UStaticMesh*                                 StaticMesh;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Density;                                       // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDrawRadius;                                 // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinTransitionRadius;                           // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinScale;                                      // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxScale;                                      // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinUniformScale;                               // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxUniformScale;                               // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinThinningRadius;                             // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Seed;                                          // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SwayScale;                                     // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AlphaMapThreshold;                             // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SlopeRotationBlend;                            // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.TerrainWeightMapTexture.TerrainWeightedMaterial
// 0x0000
struct UTerrainWeightMapTexture_FTerrainWeightedMaterial
{
};

// ScriptStruct Engine.Trigger.TriggerCheckpointRecord
// 0x0004
struct FTriggerCheckpointRecord
{
	uint32_t                                           bCollideActors : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x0010
struct FLevelStreamingData
{
	uint32_t                                           bShouldBeLoaded : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bShouldBeVisible : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bShouldBlockOnLoad : 1;                        // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	class ULevelStreaming*                             Level;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x0020
struct FUIMenuInputMap
{
	struct FName                                       FieldName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	struct FName                                       Set;                                           // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      MappedText;                                    // 0x0010 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                              // 0x0000 (0x0008) [0x0000000000100000]               
	struct FDouble                                     NextRepeatTime;                                // 0x0008 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0018 (0x0010 - 0x0028)
struct FUIAxisEmulationData : FUIKeyRepeatData
{
	uint32_t                                           bEnabled : 1;                                  // 0x0010 (0x0004) [0x0000000000100000] [0x00000001] 
	struct FName                                       AltCurrentRepeatAxis;                          // 0x0014 (0x0008) [0x0000000000100000]               
	struct FDouble                                     AltAxisNextRepeatTime;                         // 0x0020 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationLastKey
// 0x0010
struct FUIAxisEmulationLastKey
{
	struct FName                                       CurrentKey;                                    // 0x0000 (0x0008) [0x0000000000100000]               
	struct FName                                       AltKey;                                        // 0x0008 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.WillowInventory.AttributeSlotData
// 0x007C
struct FAttributeSlotData
{
	struct FName                                       SlotName;                                      // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bExternalSlot : 1;                             // 0x0008 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bRunEffectsAsSkill : 1;                        // 0x0008 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bActivated : 1;                                // 0x0008 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bIncludeAlliesAsTarget : 1;                    // 0x0008 (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bIncludeInModifierText : 1;                    // 0x0008 (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint32_t                                           bEnforceMinimumGrade : 1;                      // 0x0008 (0x0004) [0x0000000000000002] [0x00000020] (CPF_Const)
	uint32_t                                           bEnforceMaximumGrade : 1;                      // 0x0008 (0x0004) [0x0000000000000002] [0x00000040] (CPF_Const)
	int32_t                                            MinimumGrade;                                  // 0x000C (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            MaximumGrade;                                  // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FName                                       TargetInstanceDataName;                        // 0x0014 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            EffectGrade;                                   // 0x001C (0x0004) [0x0000000000000002] (CPF_Const)   
	class UAttributeDefinition*                        AttributeToModify;                             // 0x0020 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAttributeDefinition*                        ConstraintAttribute;                           // 0x0028 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            ModifierType;                                  // 0x0030 (0x0001) [0x0000000000000002] (CPF_Const)   
	struct FAttributeInitializationData                BaseModifierValue;                             // 0x0038 (0x0020) [0x0000000000000002] (CPF_Const)   
	struct FAttributeInitializationData                PerGradeUpgrade;                               // 0x0058 (0x0020) [0x0000000000000002] (CPF_Const)   
	float                                              ComputedModifierValue;                         // 0x0078 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.WillowInventory.InventorySerialNumber
// 0x0004
struct FInventorySerialNumber
{
	int32_t                                            placeholder;                                   // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.WillowInventoryDefinition.UIStatData
// 0x0040
struct FUIStatData
{
	uint32_t                                           bDisplayAsModifierOnly : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint8_t                                            AttributeStyle;                                // 0x0004 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            SupplementalAttributeStyle;                    // 0x0005 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            StatCombinationMethod;                         // 0x0006 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAttributeDefinition*                        Attribute;                                     // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAttributeDefinition*                        ConstraintAttribute;                           // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeExpressionData                    SupplementalAttributeExpression;               // 0x0018 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAttributeDefinition*                        SupplementalAttributeToAppend;                 // 0x0038 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.WillowInventoryDefinition.AttributeSlotEffectData
// 0x007C
struct FAttributeSlotEffectData
{
	struct FName                                       SlotName;                                      // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bExternalSlot : 1;                             // 0x0008 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bRunEffectsAsSkill : 1;                        // 0x0008 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	class UAttributeDefinition*                        AttributeToModify;                             // 0x0010 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UAttributeDefinition*                        ConstraintAttribute;                           // 0x0018 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint8_t                                            ModifierType;                                  // 0x0020 (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                BaseModifierValue;                             // 0x0028 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FAttributeInitializationData                PerGradeUpgrade;                               // 0x0048 (0x0020) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bIncludeInFunStats : 1;                        // 0x0068 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bIncludeAlliesAsTarget : 1;                    // 0x0068 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bEnforceMinimumGrade : 1;                      // 0x0068 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bEnforceMaximumGrade : 1;                      // 0x0068 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	int32_t                                            MinimumGrade;                                  // 0x006C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            MaximumGrade;                                  // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       TargetInstanceDataName;                        // 0x0074 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.WillowInventoryDefinition.AttributeSlotUpgradeData
// 0x0010
struct FAttributeSlotUpgradeData
{
	struct FName                                       SlotName;                                      // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            GradeIncrease;                                 // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bActivateSlot : 1;                             // 0x000C (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.WorldSoundManager.WorldEventSource
// 0x0040
struct FWorldEventSource
{
	class AActor*                                      SourceActor;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class UAkEvent*                                    AkEvent;                                       // 0x0008 (0x0008) [0x0000000000000000]               
	class AActor*                                      GroupActor;                                    // 0x0010 (0x0008) [0x0000000000000000]               
	class TArray<class UAkComponent*>                  AkComponents;                                  // 0x0018 (0x0010) [0x0000000004480008] (CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class AActor*>                        Sources;                                       // 0x0028 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastUpdateTime;                                // 0x0038 (0x0004) [0x0000000000000000]               
	uint32_t                                           bNeedsUpdate : 1;                              // 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x0018
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableShadowCasting : 1;                      // 0x0008 (0x0004) [0x0000000000001001] [0x00000001] (CPF_Edit | CPF_Native)
	uint32_t                                           bEnableCollision : 1;                          // 0x0010 (0x0004) [0x0000000000001001] [0x00000001] (CPF_Edit | CPF_Native)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x0018
struct FStaticMeshLODInfo
{
	class TArray<struct FStaticMeshLODElement>         Elements;                                      // 0x0000 (0x0010) [0x0000000000001041] (CPF_Edit | CPF_EditConstArray | CPF_Native)
	int32_t                                            LODPixelSize;                                  // 0x0010 (0x0004) [0x0000000000001001] (CPF_Edit | CPF_Native)
	int32_t                                            LODUpOffset;                                   // 0x0014 (0x0004) [0x0000000000001001] (CPF_Edit | CPF_Native)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
