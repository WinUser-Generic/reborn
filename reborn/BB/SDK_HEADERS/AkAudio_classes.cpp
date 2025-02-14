/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: AkAudio_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function AkAudio.WwiseSoundGroup.SetAkSwitchObject
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[28693])
// Parameter Info:
// class UAkSwitch*               Switch                         (CPF_Parm)

void AWwiseSoundGroup::SetAkSwitchObject(class UAkSwitch* Switch)
{
	static UFunction* uFnSetAkSwitchObject = nullptr;

	if (!uFnSetAkSwitchObject)
	{
		uFnSetAkSwitchObject = UFunction::FindFunction("Function AkAudio.WwiseSoundGroup.SetAkSwitchObject");
	}

	AWwiseSoundGroup_execSetAkSwitchObject_Params SetAkSwitchObject_Params;
	memset(&SetAkSwitchObject_Params, 0, sizeof(SetAkSwitchObject_Params));
	memcpy_s(&SetAkSwitchObject_Params.Switch, sizeof(SetAkSwitchObject_Params.Switch), &Switch, sizeof(Switch));

	uFnSetAkSwitchObject->iNative = 0;
	uFnSetAkSwitchObject->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetAkSwitchObject, &SetAkSwitchObject_Params, nullptr);
	uFnSetAkSwitchObject->FunctionFlags |= 0x400;
	uFnSetAkSwitchObject->iNative = 28693;
};

// Function AkAudio.WwiseSoundGroup.SetRTPCObjectValue
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[28955])
// Parameter Info:
// class UAkRtpc*                 InRtpc                         (CPF_Parm)
// float                          TargetValue                    (CPF_Parm)
// int32_t                        RampTimeInMs                   (CPF_OptionalParm | CPF_Parm)

void AWwiseSoundGroup::SetRTPCObjectValue(class UAkRtpc* InRtpc, float TargetValue, int32_t RampTimeInMs)
{
	static UFunction* uFnSetRTPCObjectValue = nullptr;

	if (!uFnSetRTPCObjectValue)
	{
		uFnSetRTPCObjectValue = UFunction::FindFunction("Function AkAudio.WwiseSoundGroup.SetRTPCObjectValue");
	}

	AWwiseSoundGroup_execSetRTPCObjectValue_Params SetRTPCObjectValue_Params;
	memset(&SetRTPCObjectValue_Params, 0, sizeof(SetRTPCObjectValue_Params));
	memcpy_s(&SetRTPCObjectValue_Params.InRtpc, sizeof(SetRTPCObjectValue_Params.InRtpc), &InRtpc, sizeof(InRtpc));
	memcpy_s(&SetRTPCObjectValue_Params.TargetValue, sizeof(SetRTPCObjectValue_Params.TargetValue), &TargetValue, sizeof(TargetValue));
	memcpy_s(&SetRTPCObjectValue_Params.RampTimeInMs, sizeof(SetRTPCObjectValue_Params.RampTimeInMs), &RampTimeInMs, sizeof(RampTimeInMs));

	uFnSetRTPCObjectValue->iNative = 0;
	uFnSetRTPCObjectValue->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetRTPCObjectValue, &SetRTPCObjectValue_Params, nullptr);
	uFnSetRTPCObjectValue->FunctionFlags |= 0x400;
	uFnSetRTPCObjectValue->iNative = 28955;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
