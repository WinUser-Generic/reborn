/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: AkAudio_structs.hpp
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

// ScriptStruct AkAudio.AudioOcclusionZone.AudioOcclusionThreadData
// 0x0094
struct FAudioOcclusionThreadData
{
	class TArray<uint8_t>                              Data;                                          // 0x0000 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FSharedPtr_Mirror                           VolumeData;                                    // 0x0010 (0x0010) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FVector                                     CachedVectorResolution;                        // 0x0020 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FVector                                     CachedHalfLocalStepResolution;                 // 0x002C (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              ResolutionModifier;                            // 0x0038 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              ScaleFactor;                                   // 0x003C (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FMatrix                                     CachedWorldToLocal;                            // 0x0040 (0x0040) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FVector                                     CachedZoneScale;                               // 0x0080 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              StrengthModifier;                              // 0x008C (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              MaxOcclusion;                                  // 0x0090 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct AkAudio.IAkEnvironmentalEffectProvider.EnvironmentalEffectInfo
// 0x000C
struct FEnvironmentalEffectInfo
{
	int32_t                                            EffectID;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              AuxBusVolume;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OutputBusVolume;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x0010
struct FAkEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class UAkEvent*                                    Event;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct AkAudio.InterpTrackInstAkEvent.AkEventTrackPlayedEvent
// 0x0018
struct FAkEventTrackPlayedEvent
{
	uint32_t                                           bPlayed : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FAkPlayingInfo                              PlayingInfo;                                   // 0x0008 (0x0010) [0x0000000000080000] (CPF_Component)
};

// ScriptStruct AkAudio.WwiseSoundVolume.OccludedVolume
// 0x0024
struct FOccludedVolume
{
	class AWwiseSoundVolume*                           SoundVolume;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	class UISpecialOcclusionAccumulator*               Target_Object;                                 // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)
	class UISpecialOcclusionAccumulator*               Target_Interface;                              // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxOcclusion;                                  // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeDistance;                                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFadeIn : 1;                                   // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bExternalFade : 1;                             // 0x0020 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct AkAudio.WwiseSoundVolume.RTPCSetting
// 0x0020
struct FRTPCSetting
{
	class AActor*                                      Target;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkRtpc*                                     AkRtpc;                                        // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ValueAtMaxRange;                               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ValueWithinVolume;                             // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeDistance;                                  // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastEvalValue;                                 // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct AkAudio.WwiseSoundVolume.EnvironmentalEffectSetting
// 0x0024
struct FEnvironmentalEffectSetting
{
	class UAkEffect*                                   Effect;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Volume;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              MinDistance;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDistance;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DryVolumeAtMin;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DryVolumeAtMax;                                // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WetVolumeAtMin;                                // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WetVolumeAtMax;                                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
