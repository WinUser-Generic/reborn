/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: AkAudio_parameters.hpp
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

// Function AkAudio.WwiseSoundGroup.SetAkSwitchObject
// [0x00020400]  (iNative[28693])
struct AWwiseSoundGroup_execSetAkSwitchObject_Params
{
	class UAkSwitch*                                   Switch;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function AkAudio.WwiseSoundGroup.SetRTPCObjectValue
// [0x00024400]  (iNative[28955])
struct AWwiseSoundGroup_execSetRTPCObjectValue_Params
{
	class UAkRtpc*                                     InRtpc;                                           		// 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              TargetValue;                                      		// 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            RampTimeInMs;                                     		// 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
