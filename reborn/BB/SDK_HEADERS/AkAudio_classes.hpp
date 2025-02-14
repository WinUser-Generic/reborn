/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: AkAudio_classes.hpp
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

// Enum AkAudio.WwiseSoundGroup.ESoundGroupState
enum class ESoundGroupState : uint8_t
{
	SG_NoChange                                        = 0,
	SG_Enabled                                         = 1,
	SG_Disabled                                        = 2,
	SG_END                                             = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0008 (0x00C0 - 0x00C8)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                  // 0x00C0 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAmbientSound
// 0x0018 (0x0248 - 0x0260)
class AAkAmbientSound : public AKeypoint
{
public:
	class UAkEvent*                                    PlayEvent;                                     // 0x0248 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AWwiseSoundGroup*                            Group;                                         // 0x0250 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIsRegistered : 1;                             // 0x0258 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAmbientSoundRenderingComponent
// 0x0010 (0x0360 - 0x0370)
class UAkAmbientSoundRenderingComponent : public UPrimitiveComponent
{
public:
	uint32_t                                           bShowOnlyIfSelected : 1;                       // 0x0360 (0x0004) [0x0000000000044000] [0x00000001] (CPF_Config | CPF_GlobalConfig)
	uint8_t                                           UnknownData00[0xC];                            // 0x0364 (0x000C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAmbientSoundRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AudioOcclusionZone
// 0x0040 (0x0240 - 0x0280)
class AAudioOcclusionZone : public AActor
{
public:
	struct FIntPoint3D                                 Resolution;                                    // 0x0240 (0x000C) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class TArray<uint8_t>                              Data;                                          // 0x0250 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              ResolutionModifier;                            // 0x0260 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StrengthModifier;                              // 0x0264 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxOcclusion;                                  // 0x0268 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseComplexCollision : 1;                      // 0x026C (0x0004) [0x0000000800000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bOverrideThinningPasses : 1;                   // 0x026C (0x0004) [0x0000000800000000] [0x00000002] 
	uint32_t                                           bDataValid : 1;                                // 0x026C (0x0004) [0x0000000800020003] [0x00000004] (CPF_Edit | CPF_Const | CPF_EditConst)
	uint32_t                                           bNeedToSetWorkerData : 1;                      // 0x026C (0x0004) [0x0000000000002002] [0x00000008] (CPF_Const | CPF_Transient)
	uint32_t                                           bNeedMinorUpdate : 1;                          // 0x026C (0x0004) [0x0000000000002002] [0x00000010] (CPF_Const | CPF_Transient)
	struct FSharedPtr_Mirror                           WorkerData;                                    // 0x0270 (0x0010) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AudioOcclusionZone");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AttachableAudioOcclusionZone
// 0x0000 (0x0280 - 0x0280)
class AAttachableAudioOcclusionZone : public AAudioOcclusionZone
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AttachableAudioOcclusionZone");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AudioOcclusionZoneRenderingComponent
// 0x0000 (0x0360 - 0x0360)
class UAudioOcclusionZoneRenderingComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AudioOcclusionZoneRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.IAkEnvironmentalEffectProvider
// 0x0000 (0x0058 - 0x0058)
class UIAkEnvironmentalEffectProvider : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.IAkEnvironmentalEffectProvider");
		}

		return uClassPointer;
	};

};

// Class AkAudio.IAkMixControlProvider
// 0x0000 (0x0058 - 0x0058)
class UIAkMixControlProvider : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.IAkMixControlProvider");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkEvent
// 0x0010 (0x00A0 - 0x00B0)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	class TArray<struct FAkEventTrackKey>              AkEvents;                                      // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkRTPC
// 0x0008 (0x00C0 - 0x00C8)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	class UAkRtpc*                                     AkRtpc;                                        // 0x00C0 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkEvent
// 0x0018 (0x0058 - 0x0070)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                            // 0x0058 (0x0004) [0x0000000000000000]               
	class TArray<struct FAkEventTrackPlayedEvent>      EventPlayingInfo;                              // 0x0060 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x0058 - 0x0058)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		}

		return uClassPointer;
	};

};

// Class AkAudio.ISpecialOcclusionAccumulator
// 0x0000 (0x0058 - 0x0058)
class UISpecialOcclusionAccumulator : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.ISpecialOcclusionAccumulator");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPostEvent
// 0x0020 (0x0100 - 0x0120)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	class TArray<struct FAkPlayingInfo>                ActivePlayingIds;                              // 0x0100 (0x0010) [0x0000000000482000] (CPF_Transient | CPF_Component | CPF_NeedCtorLink)
	class UAkEvent*                                    Event;                                         // 0x0110 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bPlayOneInstanceFromAllLocations : 1;          // 0x0118 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bTreatAllLocationsAsOneSource : 1;             // 0x0118 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPostTrigger
// 0x0008 (0x00E8 - 0x00F0)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	class UAkTrigger*                                  AkTrigger;                                     // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0010 (0x0100 - 0x0110)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	class UAkRtpc*                                     AkRtpc;                                        // 0x0100 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x0108 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           Running : 1;                                   // 0x010C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetState
// 0x0008 (0x00E8 - 0x00F0)
class USeqAct_AkSetState : public USequenceAction
{
public:
	class UAkState*                                    State;                                         // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0008 (0x00E8 - 0x00F0)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	class UAkSwitch*                                   AkSwitch;                                      // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x00E8 - 0x00E8)
class USeqAct_AkStopAll : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SpecialAudioOcclusionZone
// 0x00A0 (0x0240 - 0x02E0)
class ASpecialAudioOcclusionZone : public AActor
{
public:
	struct FPointer                                    VfTable_IISpecialOcclusionAccumulator;         // 0x0240 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	float                                              LastOcclusionLevel;                            // 0x0248 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FMap_Mirror                                 ActiveOccluders;                               // 0x0250 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FMatrix                                     CachedWorldToLocal;                            // 0x02A0 (0x0040) [0x0000000000002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SpecialAudioOcclusionZone");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SpecialAudioOcclusionZoneCylinder
// 0x0000 (0x02E0 - 0x02E0)
class ASpecialAudioOcclusionZoneCylinder : public ASpecialAudioOcclusionZone
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SpecialAudioOcclusionZoneCylinder");
		}

		return uClassPointer;
	};

};

// Class AkAudio.WwiseMusicManager
// 0x0020 (0x0058 - 0x0078)
class UWwiseMusicManager : public UObject
{
public:
	class UAkComponent*                                MusicComponent;                                // 0x0058 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UAkComponent*                                FadeOutComponent;                              // 0x0060 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UAkComponent*                                WorldlessAudioComponent;                       // 0x0068 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	uint32_t                                           bMuted : 1;                                    // 0x0070 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.WwiseMusicManager");
		}

		return uClassPointer;
	};

};

// Class AkAudio.WwiseSoundGroup
// 0x0070 (0x0248 - 0x02B8)
class AWwiseSoundGroup : public AKeypoint
{
public:
	struct FPointer                                    VfTable_IISpecialOcclusionProvider;            // 0x0248 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IISpecialOcclusionAccumulator;         // 0x0250 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<class AActor*>                        Members;                                       // 0x0258 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FMap_Mirror                                 ActiveOccluders;                               // 0x0268 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.WwiseSoundGroup");
		}

		return uClassPointer;
	};

	void SetAkSwitchObject(class UAkSwitch* Switch);
	void SetRTPCObjectValue(class UAkRtpc* InRtpc, float TargetValue, int32_t optionalRampTimeInMs);
};

// Class AkAudio.WwiseSoundGroupRenderingComponent
// 0x0000 (0x0360 - 0x0360)
class UWwiseSoundGroupRenderingComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.WwiseSoundGroupRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.WwiseSoundVolume
// 0x01C0 (0x0288 - 0x0448)
class AWwiseSoundVolume : public AVolume
{
public:
	struct FPointer                                    VfTable_IIAkEnvironmentalEffectProvider;       // 0x0288 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IISpecialOcclusionProvider;            // 0x0290 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IISpecialOcclusionAccumulator;         // 0x0298 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIAkComponentPositionProvider;         // 0x02A0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class AWwiseSoundVolume*                           ParentVolume;                                  // 0x02A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<class AWwiseSoundVolume*>             SubBrushes;                                    // 0x02B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bPlaySoundsFromAllSubBrushes : 1;              // 0x02C0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAutomaticallySetPlayAndStopDistances : 1;     // 0x02C0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseHardSuppression : 1;                       // 0x02C0 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bConvex : 1;                                   // 0x02C0 (0x0004) [0x0000000000022001] [0x00000008] (CPF_Edit | CPF_Transient | CPF_EditConst)
	uint32_t                                           bActive : 1;                                   // 0x02C0 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	class UAkEvent*                                    akPlayEvent;                                   // 0x02C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              AutoPlayDistance;                              // 0x02D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AutoStopDistance;                              // 0x02D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkRtpc*                                     HardSuppressionRtpc;                           // 0x02D8 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              EnvironmentFadeDistance;                       // 0x02E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AWwiseSoundGroup*                            Group;                                         // 0x02E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkComponent*                                AkComponent;                                   // 0x02F0 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FVector                                     Midpoint;                                      // 0x02F8 (0x000C) [0x0000000000000002] (CPF_Const)   
	float                                              FarthestVertexDistance;                        // 0x0304 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              LastLocationUpdateTime;                        // 0x0308 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DistancePerAdditionalSecondBetweenUpdates;     // 0x030C (0x0004) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
	float                                              LastEnvironmentStrength;                       // 0x0310 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastEnvironmentSuppressionModifier;            // 0x0314 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FMap_Mirror                                 EnvironmentSuppressors;                        // 0x0318 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<struct FEnvironmentalEffectSetting>   EnvironmentalEffects;                          // 0x0368 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class AWwiseSoundVolume*>             SuppressedEnvironments;                        // 0x0378 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FRTPCSetting>                  RTPCs;                                         // 0x0388 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FOccludedVolume>               OccludedVolumes;                               // 0x0398 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              LastOcclusionLevel;                            // 0x03A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FMap_Mirror                                 ActiveOccluders;                               // 0x03B0 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<struct FPlane>                        FacePlanes;                                    // 0x0400 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<struct FVector>                       SoundSourceLocations;                          // 0x0410 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<float>                                CachedListenerDistances;                       // 0x0420 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UAkBank*                                     EffectSoundBank;                               // 0x0430 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              EffectSoundBankLoadDistance;                   // 0x0438 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FAkBankLoadRef                              EffectBankRef;                                 // 0x043C (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.WwiseSoundVolume");
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
