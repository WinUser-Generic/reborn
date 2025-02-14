/*
#############################################################################################
# BattleBorn (1.0.0.0) SDK
# Generated with the CodeRedGenerator v1.0.3
# ========================================================================================= #
# File: IpDrv_classes.cpp
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

// Function IpDrv.InternetLink.ResolveFailed
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void AInternetLink::eventResolveFailed()
{
	static UFunction* uFnResolveFailed = nullptr;

	if (!uFnResolveFailed)
	{
		uFnResolveFailed = UFunction::FindFunction("Function IpDrv.InternetLink.ResolveFailed");
	}

	AInternetLink_eventResolveFailed_Params ResolveFailed_Params;
	memset(&ResolveFailed_Params, 0, sizeof(ResolveFailed_Params));

	this->ProcessEvent(uFnResolveFailed, &ResolveFailed_Params, nullptr);
};

// Function IpDrv.InternetLink.Resolved
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const struct FIpAddr&          Addr                           (CPF_Parm | CPF_NeedCtorLink)

void AInternetLink::eventResolved(const struct FIpAddr& Addr)
{
	static UFunction* uFnResolved = nullptr;

	if (!uFnResolved)
	{
		uFnResolved = UFunction::FindFunction("Function IpDrv.InternetLink.Resolved");
	}

	AInternetLink_eventResolved_Params Resolved_Params;
	memset(&Resolved_Params, 0, sizeof(Resolved_Params));
	memcpy_s(&Resolved_Params.Addr, sizeof(Resolved_Params.Addr), &Addr, sizeof(Addr));

	this->ProcessEvent(uFnResolved, &Resolved_Params, nullptr);
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[36866])
// Parameter Info:
// struct FIpAddr                 Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AInternetLink::GetLocalIP(struct FIpAddr& Arg)
{
	static UFunction* uFnGetLocalIP = nullptr;

	if (!uFnGetLocalIP)
	{
		uFnGetLocalIP = UFunction::FindFunction("Function IpDrv.InternetLink.GetLocalIP");
	}

	AInternetLink_execGetLocalIP_Params GetLocalIP_Params;
	memset(&GetLocalIP_Params, 0, sizeof(GetLocalIP_Params));
	memcpy_s(&GetLocalIP_Params.Arg, sizeof(GetLocalIP_Params.Arg), &Arg, sizeof(Arg));

	uFnGetLocalIP->iNative = 0;
	uFnGetLocalIP->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLocalIP, &GetLocalIP_Params, nullptr);
	uFnGetLocalIP->FunctionFlags |= 0x400;
	uFnGetLocalIP->iNative = 36866;

	memcpy_s(&Arg, sizeof(Arg), &GetLocalIP_Params.Arg, sizeof(GetLocalIP_Params.Arg));
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[37057])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Str                            (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 Addr                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AInternetLink::StringToIpAddr(const class FString& Str, struct FIpAddr& Addr)
{
	static UFunction* uFnStringToIpAddr = nullptr;

	if (!uFnStringToIpAddr)
	{
		uFnStringToIpAddr = UFunction::FindFunction("Function IpDrv.InternetLink.StringToIpAddr");
	}

	AInternetLink_execStringToIpAddr_Params StringToIpAddr_Params;
	memset(&StringToIpAddr_Params, 0, sizeof(StringToIpAddr_Params));
	memcpy_s(&StringToIpAddr_Params.Str, sizeof(StringToIpAddr_Params.Str), &Str, sizeof(Str));
	memcpy_s(&StringToIpAddr_Params.Addr, sizeof(StringToIpAddr_Params.Addr), &Addr, sizeof(Addr));

	uFnStringToIpAddr->iNative = 0;
	uFnStringToIpAddr->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnStringToIpAddr, &StringToIpAddr_Params, nullptr);
	uFnStringToIpAddr->FunctionFlags |= 0x400;
	uFnStringToIpAddr->iNative = 37057;

	memcpy_s(&Addr, sizeof(Addr), &StringToIpAddr_Params.Addr, sizeof(StringToIpAddr_Params.Addr));

	return StringToIpAddr_Params.ReturnValue;
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36891])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// const struct FIpAddr&          Arg                            (CPF_Parm | CPF_NeedCtorLink)

class FString AInternetLink::IpAddrToString(const struct FIpAddr& Arg)
{
	static UFunction* uFnIpAddrToString = nullptr;

	if (!uFnIpAddrToString)
	{
		uFnIpAddrToString = UFunction::FindFunction("Function IpDrv.InternetLink.IpAddrToString");
	}

	AInternetLink_execIpAddrToString_Params IpAddrToString_Params;
	memset(&IpAddrToString_Params, 0, sizeof(IpAddrToString_Params));
	memcpy_s(&IpAddrToString_Params.Arg, sizeof(IpAddrToString_Params.Arg), &Arg, sizeof(Arg));

	uFnIpAddrToString->iNative = 0;
	uFnIpAddrToString->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIpAddrToString, &IpAddrToString_Params, nullptr);
	uFnIpAddrToString->FunctionFlags |= 0x400;
	uFnIpAddrToString->iNative = 36891;

	return IpAddrToString_Params.ReturnValue;
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36865])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t AInternetLink::GetLastError()
{
	static UFunction* uFnGetLastError = nullptr;

	if (!uFnGetLastError)
	{
		uFnGetLastError = UFunction::FindFunction("Function IpDrv.InternetLink.GetLastError");
	}

	AInternetLink_execGetLastError_Params GetLastError_Params;
	memset(&GetLastError_Params, 0, sizeof(GetLastError_Params));

	uFnGetLastError->iNative = 0;
	uFnGetLastError->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLastError, &GetLastError_Params, nullptr);
	uFnGetLastError->FunctionFlags |= 0x400;
	uFnGetLastError->iNative = 36865;

	return GetLastError_Params.ReturnValue;
};

// Function IpDrv.InternetLink.Resolve
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[37013])
// Parameter Info:
// const class FString&           Domain                         (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void AInternetLink::Resolve(const class FString& Domain)
{
	static UFunction* uFnResolve = nullptr;

	if (!uFnResolve)
	{
		uFnResolve = UFunction::FindFunction("Function IpDrv.InternetLink.Resolve");
	}

	AInternetLink_execResolve_Params Resolve_Params;
	memset(&Resolve_Params, 0, sizeof(Resolve_Params));
	memcpy_s(&Resolve_Params.Domain, sizeof(Resolve_Params.Domain), &Domain, sizeof(Domain));

	uFnResolve->iNative = 0;
	uFnResolve->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnResolve, &Resolve_Params, nullptr);
	uFnResolve->FunctionFlags |= 0x400;
	uFnResolve->iNative = 37013;
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[36933])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           URL                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class FString                  Addr                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// int32_t                        PortNum                        (CPF_Parm | CPF_OutParm)
// class FString                  LevelName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class FString                  EntryName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool AInternetLink::ParseURL(const class FString& URL, class FString& Addr, int32_t& PortNum, class FString& LevelName, class FString& EntryName)
{
	static UFunction* uFnParseURL = nullptr;

	if (!uFnParseURL)
	{
		uFnParseURL = UFunction::FindFunction("Function IpDrv.InternetLink.ParseURL");
	}

	AInternetLink_execParseURL_Params ParseURL_Params;
	memset(&ParseURL_Params, 0, sizeof(ParseURL_Params));
	memcpy_s(&ParseURL_Params.URL, sizeof(ParseURL_Params.URL), &URL, sizeof(URL));
	memcpy_s(&ParseURL_Params.Addr, sizeof(ParseURL_Params.Addr), &Addr, sizeof(Addr));
	memcpy_s(&ParseURL_Params.PortNum, sizeof(ParseURL_Params.PortNum), &PortNum, sizeof(PortNum));
	memcpy_s(&ParseURL_Params.LevelName, sizeof(ParseURL_Params.LevelName), &LevelName, sizeof(LevelName));
	memcpy_s(&ParseURL_Params.EntryName, sizeof(ParseURL_Params.EntryName), &EntryName, sizeof(EntryName));

	uFnParseURL->iNative = 0;
	uFnParseURL->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnParseURL, &ParseURL_Params, nullptr);
	uFnParseURL->FunctionFlags |= 0x400;
	uFnParseURL->iNative = 36933;

	memcpy_s(&Addr, sizeof(Addr), &ParseURL_Params.Addr, sizeof(ParseURL_Params.Addr));
	memcpy_s(&PortNum, sizeof(PortNum), &ParseURL_Params.PortNum, sizeof(ParseURL_Params.PortNum));
	memcpy_s(&LevelName, sizeof(LevelName), &ParseURL_Params.LevelName, sizeof(ParseURL_Params.LevelName));
	memcpy_s(&EntryName, sizeof(EntryName), &ParseURL_Params.EntryName, sizeof(ParseURL_Params.EntryName));

	return ParseURL_Params.ReturnValue;
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36893])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AInternetLink::IsDataPending()
{
	static UFunction* uFnIsDataPending = nullptr;

	if (!uFnIsDataPending)
	{
		uFnIsDataPending = UFunction::FindFunction("Function IpDrv.InternetLink.IsDataPending");
	}

	AInternetLink_execIsDataPending_Params IsDataPending_Params;
	memset(&IsDataPending_Params, 0, sizeof(IsDataPending_Params));

	uFnIsDataPending->iNative = 0;
	uFnIsDataPending->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsDataPending, &IsDataPending_Params, nullptr);
	uFnIsDataPending->FunctionFlags |= 0x400;
	uFnIsDataPending->iNative = 36893;

	return IsDataPending_Params.ReturnValue;
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void ATcpLink::eventReceivedBinary(int32_t Count, uint8_t B)
{
	static UFunction* uFnReceivedBinary = nullptr;

	if (!uFnReceivedBinary)
	{
		uFnReceivedBinary = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedBinary");
	}

	ATcpLink_eventReceivedBinary_Params ReceivedBinary_Params;
	memset(&ReceivedBinary_Params, 0, sizeof(ReceivedBinary_Params));
	memcpy_s(&ReceivedBinary_Params.Count, sizeof(ReceivedBinary_Params.Count), &Count, sizeof(Count));
	memcpy_s(&ReceivedBinary_Params.B, sizeof(ReceivedBinary_Params.B), &B, sizeof(B));

	this->ProcessEvent(uFnReceivedBinary, &ReceivedBinary_Params, nullptr);
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Line                           (CPF_Parm | CPF_NeedCtorLink)

void ATcpLink::eventReceivedLine(const class FString& Line)
{
	static UFunction* uFnReceivedLine = nullptr;

	if (!uFnReceivedLine)
	{
		uFnReceivedLine = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedLine");
	}

	ATcpLink_eventReceivedLine_Params ReceivedLine_Params;
	memset(&ReceivedLine_Params, 0, sizeof(ReceivedLine_Params));
	memcpy_s(&ReceivedLine_Params.Line, sizeof(ReceivedLine_Params.Line), &Line, sizeof(Line));

	this->ProcessEvent(uFnReceivedLine, &ReceivedLine_Params, nullptr);
};

// Function IpDrv.TcpLink.ReceivedText
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Text                           (CPF_Parm | CPF_NeedCtorLink)

void ATcpLink::eventReceivedText(const class FString& Text)
{
	static UFunction* uFnReceivedText = nullptr;

	if (!uFnReceivedText)
	{
		uFnReceivedText = UFunction::FindFunction("Function IpDrv.TcpLink.ReceivedText");
	}

	ATcpLink_eventReceivedText_Params ReceivedText_Params;
	memset(&ReceivedText_Params, 0, sizeof(ReceivedText_Params));
	memcpy_s(&ReceivedText_Params.Text, sizeof(ReceivedText_Params.Text), &Text, sizeof(Text));

	this->ProcessEvent(uFnReceivedText, &ReceivedText_Params, nullptr);
};

// Function IpDrv.TcpLink.Closed
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void ATcpLink::eventClosed()
{
	static UFunction* uFnClosed = nullptr;

	if (!uFnClosed)
	{
		uFnClosed = UFunction::FindFunction("Function IpDrv.TcpLink.Closed");
	}

	ATcpLink_eventClosed_Params Closed_Params;
	memset(&Closed_Params, 0, sizeof(Closed_Params));

	this->ProcessEvent(uFnClosed, &Closed_Params, nullptr);
};

// Function IpDrv.TcpLink.Opened
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void ATcpLink::eventOpened()
{
	static UFunction* uFnOpened = nullptr;

	if (!uFnOpened)
	{
		uFnOpened = UFunction::FindFunction("Function IpDrv.TcpLink.Opened");
	}

	ATcpLink_eventOpened_Params Opened_Params;
	memset(&Opened_Params, 0, sizeof(Opened_Params));

	this->ProcessEvent(uFnOpened, &Opened_Params, nullptr);
};

// Function IpDrv.TcpLink.Accepted
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void ATcpLink::eventAccepted()
{
	static UFunction* uFnAccepted = nullptr;

	if (!uFnAccepted)
	{
		uFnAccepted = UFunction::FindFunction("Function IpDrv.TcpLink.Accepted");
	}

	ATcpLink_eventAccepted_Params Accepted_Params;
	memset(&Accepted_Params, 0, sizeof(Accepted_Params));

	this->ProcessEvent(uFnAccepted, &Accepted_Params, nullptr);
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[36993])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm | CPF_OutParm)

int32_t ATcpLink::ReadBinary(int32_t Count, uint8_t& B)
{
	static UFunction* uFnReadBinary = nullptr;

	if (!uFnReadBinary)
	{
		uFnReadBinary = UFunction::FindFunction("Function IpDrv.TcpLink.ReadBinary");
	}

	ATcpLink_execReadBinary_Params ReadBinary_Params;
	memset(&ReadBinary_Params, 0, sizeof(ReadBinary_Params));
	memcpy_s(&ReadBinary_Params.Count, sizeof(ReadBinary_Params.Count), &Count, sizeof(Count));
	memcpy_s(&ReadBinary_Params.B, sizeof(ReadBinary_Params.B), &B, sizeof(B));

	uFnReadBinary->iNative = 0;
	uFnReadBinary->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadBinary, &ReadBinary_Params, nullptr);
	uFnReadBinary->FunctionFlags |= 0x400;
	uFnReadBinary->iNative = 36993;

	memcpy_s(&B, sizeof(B), &ReadBinary_Params.B, sizeof(ReadBinary_Params.B));

	return ReadBinary_Params.ReturnValue;
};

// Function IpDrv.TcpLink.ReadText
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[36995])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Str                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t ATcpLink::ReadText(class FString& Str)
{
	static UFunction* uFnReadText = nullptr;

	if (!uFnReadText)
	{
		uFnReadText = UFunction::FindFunction("Function IpDrv.TcpLink.ReadText");
	}

	ATcpLink_execReadText_Params ReadText_Params;
	memset(&ReadText_Params, 0, sizeof(ReadText_Params));
	memcpy_s(&ReadText_Params.Str, sizeof(ReadText_Params.Str), &Str, sizeof(Str));

	uFnReadText->iNative = 0;
	uFnReadText->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadText, &ReadText_Params, nullptr);
	uFnReadText->FunctionFlags |= 0x400;
	uFnReadText->iNative = 36995;

	memcpy_s(&Str, sizeof(Str), &ReadText_Params.Str, sizeof(ReadText_Params.Str));

	return ReadText_Params.ReturnValue;
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[836])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

int32_t ATcpLink::SendBinary(int32_t Count, uint8_t B)
{
	static UFunction* uFnSendBinary = nullptr;

	if (!uFnSendBinary)
	{
		uFnSendBinary = UFunction::FindFunction("Function IpDrv.TcpLink.SendBinary");
	}

	ATcpLink_execSendBinary_Params SendBinary_Params;
	memset(&SendBinary_Params, 0, sizeof(SendBinary_Params));
	memcpy_s(&SendBinary_Params.Count, sizeof(SendBinary_Params.Count), &Count, sizeof(Count));
	memcpy_s(&SendBinary_Params.B, sizeof(SendBinary_Params.B), &B, sizeof(B));

	uFnSendBinary->iNative = 0;
	uFnSendBinary->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendBinary, &SendBinary_Params, nullptr);
	uFnSendBinary->FunctionFlags |= 0x400;
	uFnSendBinary->iNative = 836;

	return SendBinary_Params.ReturnValue;
};

// Function IpDrv.TcpLink.SendText
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[835])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Str                            (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

int32_t ATcpLink::SendText(const class FString& Str)
{
	static UFunction* uFnSendText = nullptr;

	if (!uFnSendText)
	{
		uFnSendText = UFunction::FindFunction("Function IpDrv.TcpLink.SendText");
	}

	ATcpLink_execSendText_Params SendText_Params;
	memset(&SendText_Params, 0, sizeof(SendText_Params));
	memcpy_s(&SendText_Params.Str, sizeof(SendText_Params.Str), &Str, sizeof(Str));

	uFnSendText->iNative = 0;
	uFnSendText->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSendText, &SendText_Params, nullptr);
	uFnSendText->FunctionFlags |= 0x400;
	uFnSendText->iNative = 835;

	return SendText_Params.ReturnValue;
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36892])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::IsConnected()
{
	static UFunction* uFnIsConnected = nullptr;

	if (!uFnIsConnected)
	{
		uFnIsConnected = UFunction::FindFunction("Function IpDrv.TcpLink.IsConnected");
	}

	ATcpLink_execIsConnected_Params IsConnected_Params;
	memset(&IsConnected_Params, 0, sizeof(IsConnected_Params));

	uFnIsConnected->iNative = 0;
	uFnIsConnected->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsConnected, &IsConnected_Params, nullptr);
	uFnIsConnected->FunctionFlags |= 0x400;
	uFnIsConnected->iNative = 36892;

	return IsConnected_Params.ReturnValue;
};

// Function IpDrv.TcpLink.Close
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[31333])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::Close()
{
	static UFunction* uFnClose = nullptr;

	if (!uFnClose)
	{
		uFnClose = UFunction::FindFunction("Function IpDrv.TcpLink.Close");
	}

	ATcpLink_execClose_Params Close_Params;
	memset(&Close_Params, 0, sizeof(Close_Params));

	uFnClose->iNative = 0;
	uFnClose->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClose, &Close_Params, nullptr);
	uFnClose->FunctionFlags |= 0x400;
	uFnClose->iNative = 31333;

	return Close_Params.ReturnValue;
};

// Function IpDrv.TcpLink.Open
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[2219])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FIpAddr&          Addr                           (CPF_Parm | CPF_NeedCtorLink)

bool ATcpLink::Open(const struct FIpAddr& Addr)
{
	static UFunction* uFnOpen = nullptr;

	if (!uFnOpen)
	{
		uFnOpen = UFunction::FindFunction("Function IpDrv.TcpLink.Open");
	}

	ATcpLink_execOpen_Params Open_Params;
	memset(&Open_Params, 0, sizeof(Open_Params));
	memcpy_s(&Open_Params.Addr, sizeof(Open_Params.Addr), &Addr, sizeof(Addr));

	uFnOpen->iNative = 0;
	uFnOpen->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOpen, &Open_Params, nullptr);
	uFnOpen->FunctionFlags |= 0x400;
	uFnOpen->iNative = 2219;

	return Open_Params.ReturnValue;
};

// Function IpDrv.TcpLink.Listen
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[15768])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool ATcpLink::Listen()
{
	static UFunction* uFnListen = nullptr;

	if (!uFnListen)
	{
		uFnListen = UFunction::FindFunction("Function IpDrv.TcpLink.Listen");
	}

	ATcpLink_execListen_Params Listen_Params;
	memset(&Listen_Params, 0, sizeof(Listen_Params));

	uFnListen->iNative = 0;
	uFnListen->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnListen, &Listen_Params, nullptr);
	uFnListen->FunctionFlags |= 0x400;
	uFnListen->iNative = 15768;

	return Listen_Params.ReturnValue;
};

// Function IpDrv.TcpLink.BindPort
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[36789])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        PortNum                        (CPF_OptionalParm | CPF_Parm)
// bool                           bUseNextAvailable              (CPF_OptionalParm | CPF_Parm)

int32_t ATcpLink::BindPort(int32_t PortNum, bool bUseNextAvailable)
{
	static UFunction* uFnBindPort = nullptr;

	if (!uFnBindPort)
	{
		uFnBindPort = UFunction::FindFunction("Function IpDrv.TcpLink.BindPort");
	}

	ATcpLink_execBindPort_Params BindPort_Params;
	memset(&BindPort_Params, 0, sizeof(BindPort_Params));
	memcpy_s(&BindPort_Params.PortNum, sizeof(BindPort_Params.PortNum), &PortNum, sizeof(PortNum));
	BindPort_Params.bUseNextAvailable = bUseNextAvailable;

	uFnBindPort->iNative = 0;
	uFnBindPort->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnBindPort, &BindPort_Params, nullptr);
	uFnBindPort->FunctionFlags |= 0x400;
	uFnBindPort->iNative = 36789;

	return BindPort_Params.ReturnValue;
};

// Function IpDrv.WebConnection.IsHanging
// [0x12020001] (FUNC_Final | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AWebConnection::IsHanging()
{
	static UFunction* uFnIsHanging = nullptr;

	if (!uFnIsHanging)
	{
		uFnIsHanging = UFunction::FindFunction("Function IpDrv.WebConnection.IsHanging");
	}

	AWebConnection_execIsHanging_Params IsHanging_Params;
	memset(&IsHanging_Params, 0, sizeof(IsHanging_Params));

	this->ProcessEvent(uFnIsHanging, &IsHanging_Params, nullptr);

	return IsHanging_Params.ReturnValue;
};

// Function IpDrv.WebConnection.Cleanup
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::Cleanup()
{
	static UFunction* uFnCleanup = nullptr;

	if (!uFnCleanup)
	{
		uFnCleanup = UFunction::FindFunction("Function IpDrv.WebConnection.Cleanup");
	}

	AWebConnection_execCleanup_Params Cleanup_Params;
	memset(&Cleanup_Params, 0, sizeof(Cleanup_Params));

	this->ProcessEvent(uFnCleanup, &Cleanup_Params, nullptr);
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::CheckRawBytes()
{
	static UFunction* uFnCheckRawBytes = nullptr;

	if (!uFnCheckRawBytes)
	{
		uFnCheckRawBytes = UFunction::FindFunction("Function IpDrv.WebConnection.CheckRawBytes");
	}

	AWebConnection_execCheckRawBytes_Params CheckRawBytes_Params;
	memset(&CheckRawBytes_Params, 0, sizeof(CheckRawBytes_Params));

	this->ProcessEvent(uFnCheckRawBytes, &CheckRawBytes_Params, nullptr);
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::EndOfHeaders()
{
	static UFunction* uFnEndOfHeaders = nullptr;

	if (!uFnEndOfHeaders)
	{
		uFnEndOfHeaders = UFunction::FindFunction("Function IpDrv.WebConnection.EndOfHeaders");
	}

	AWebConnection_execEndOfHeaders_Params EndOfHeaders_Params;
	memset(&EndOfHeaders_Params, 0, sizeof(EndOfHeaders_Params));

	this->ProcessEvent(uFnEndOfHeaders, &EndOfHeaders_Params, nullptr);
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::CreateResponseObject()
{
	static UFunction* uFnCreateResponseObject = nullptr;

	if (!uFnCreateResponseObject)
	{
		uFnCreateResponseObject = UFunction::FindFunction("Function IpDrv.WebConnection.CreateResponseObject");
	}

	AWebConnection_execCreateResponseObject_Params CreateResponseObject_Params;
	memset(&CreateResponseObject_Params, 0, sizeof(CreateResponseObject_Params));

	this->ProcessEvent(uFnCreateResponseObject, &CreateResponseObject_Params, nullptr);
};

// Function IpDrv.WebConnection.ProcessPost
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessPost(const class FString& S)
{
	static UFunction* uFnProcessPost = nullptr;

	if (!uFnProcessPost)
	{
		uFnProcessPost = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessPost");
	}

	AWebConnection_execProcessPost_Params ProcessPost_Params;
	memset(&ProcessPost_Params, 0, sizeof(ProcessPost_Params));
	memcpy_s(&ProcessPost_Params.S, sizeof(ProcessPost_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnProcessPost, &ProcessPost_Params, nullptr);
};

// Function IpDrv.WebConnection.ProcessGet
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessGet(const class FString& S)
{
	static UFunction* uFnProcessGet = nullptr;

	if (!uFnProcessGet)
	{
		uFnProcessGet = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessGet");
	}

	AWebConnection_execProcessGet_Params ProcessGet_Params;
	memset(&ProcessGet_Params, 0, sizeof(ProcessGet_Params));
	memcpy_s(&ProcessGet_Params.S, sizeof(ProcessGet_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnProcessGet, &ProcessGet_Params, nullptr);
};

// Function IpDrv.WebConnection.ProcessHead
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ProcessHead(const class FString& S)
{
	static UFunction* uFnProcessHead = nullptr;

	if (!uFnProcessHead)
	{
		uFnProcessHead = UFunction::FindFunction("Function IpDrv.WebConnection.ProcessHead");
	}

	AWebConnection_execProcessHead_Params ProcessHead_Params;
	memset(&ProcessHead_Params, 0, sizeof(ProcessHead_Params));
	memcpy_s(&ProcessHead_Params.S, sizeof(ProcessHead_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnProcessHead, &ProcessHead_Params, nullptr);
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           S                              (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::ReceivedLine(const class FString& S)
{
	static UFunction* uFnReceivedLine = nullptr;

	if (!uFnReceivedLine)
	{
		uFnReceivedLine = UFunction::FindFunction("Function IpDrv.WebConnection.ReceivedLine");
	}

	AWebConnection_execReceivedLine_Params ReceivedLine_Params;
	memset(&ReceivedLine_Params, 0, sizeof(ReceivedLine_Params));
	memcpy_s(&ReceivedLine_Params.S, sizeof(ReceivedLine_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnReceivedLine, &ReceivedLine_Params, nullptr);
};

// Function IpDrv.WebConnection.ReceivedText
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Text                           (CPF_Parm | CPF_NeedCtorLink)

void AWebConnection::eventReceivedText(const class FString& Text)
{
	static UFunction* uFnReceivedText = nullptr;

	if (!uFnReceivedText)
	{
		uFnReceivedText = UFunction::FindFunction("Function IpDrv.WebConnection.ReceivedText");
	}

	AWebConnection_eventReceivedText_Params ReceivedText_Params;
	memset(&ReceivedText_Params, 0, sizeof(ReceivedText_Params));
	memcpy_s(&ReceivedText_Params.Text, sizeof(ReceivedText_Params.Text), &Text, sizeof(Text));

	this->ProcessEvent(uFnReceivedText, &ReceivedText_Params, nullptr);
};

// Function IpDrv.WebConnection.Timer
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::eventTimer()
{
	static UFunction* uFnTimer = nullptr;

	if (!uFnTimer)
	{
		uFnTimer = UFunction::FindFunction("Function IpDrv.WebConnection.Timer");
	}

	AWebConnection_eventTimer_Params Timer_Params;
	memset(&Timer_Params, 0, sizeof(Timer_Params));

	this->ProcessEvent(uFnTimer, &Timer_Params, nullptr);
};

// Function IpDrv.WebConnection.Closed
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::eventClosed()
{
	static UFunction* uFnClosed = nullptr;

	if (!uFnClosed)
	{
		uFnClosed = UFunction::FindFunction("Function IpDrv.WebConnection.Closed");
	}

	AWebConnection_eventClosed_Params Closed_Params;
	memset(&Closed_Params, 0, sizeof(Closed_Params));

	this->ProcessEvent(uFnClosed, &Closed_Params, nullptr);
};

// Function IpDrv.WebConnection.Accepted
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void AWebConnection::eventAccepted()
{
	static UFunction* uFnAccepted = nullptr;

	if (!uFnAccepted)
	{
		uFnAccepted = UFunction::FindFunction("Function IpDrv.WebConnection.Accepted");
	}

	AWebConnection_eventAccepted_Params Accepted_Params;
	memset(&Accepted_Params, 0, sizeof(Accepted_Params));

	this->ProcessEvent(uFnAccepted, &Accepted_Params, nullptr);
};

// Function IpDrv.WebServer.GetApplication
// [0x12420000] (FUNC_Public | FUNC_HasOutParms | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class UWebApplication*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Uri                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  SubURI                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

class UWebApplication* AWebServer::GetApplication(const class FString& Uri, class FString& SubURI)
{
	static UFunction* uFnGetApplication = nullptr;

	if (!uFnGetApplication)
	{
		uFnGetApplication = UFunction::FindFunction("Function IpDrv.WebServer.GetApplication");
	}

	AWebServer_execGetApplication_Params GetApplication_Params;
	memset(&GetApplication_Params, 0, sizeof(GetApplication_Params));
	memcpy_s(&GetApplication_Params.Uri, sizeof(GetApplication_Params.Uri), &Uri, sizeof(Uri));
	memcpy_s(&GetApplication_Params.SubURI, sizeof(GetApplication_Params.SubURI), &SubURI, sizeof(SubURI));

	this->ProcessEvent(uFnGetApplication, &GetApplication_Params, nullptr);

	memcpy_s(&SubURI, sizeof(SubURI), &GetApplication_Params.SubURI, sizeof(GetApplication_Params.SubURI));

	return GetApplication_Params.ReturnValue;
};

// Function IpDrv.WebServer.LostChild
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  C                              (CPF_Parm)

void AWebServer::eventLostChild(class AActor* C)
{
	static UFunction* uFnLostChild = nullptr;

	if (!uFnLostChild)
	{
		uFnLostChild = UFunction::FindFunction("Function IpDrv.WebServer.LostChild");
	}

	AWebServer_eventLostChild_Params LostChild_Params;
	memset(&LostChild_Params, 0, sizeof(LostChild_Params));
	memcpy_s(&LostChild_Params.C, sizeof(LostChild_Params.C), &C, sizeof(C));

	this->ProcessEvent(uFnLostChild, &LostChild_Params, nullptr);
};

// Function IpDrv.WebServer.GainedChild
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  C                              (CPF_Parm)

void AWebServer::eventGainedChild(class AActor* C)
{
	static UFunction* uFnGainedChild = nullptr;

	if (!uFnGainedChild)
	{
		uFnGainedChild = UFunction::FindFunction("Function IpDrv.WebServer.GainedChild");
	}

	AWebServer_eventGainedChild_Params GainedChild_Params;
	memset(&GainedChild_Params, 0, sizeof(GainedChild_Params));
	memcpy_s(&GainedChild_Params.C, sizeof(GainedChild_Params.C), &C, sizeof(C));

	this->ProcessEvent(uFnGainedChild, &GainedChild_Params, nullptr);
};

// Function IpDrv.WebServer.Destroyed
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void AWebServer::eventDestroyed()
{
	static UFunction* uFnDestroyed = nullptr;

	if (!uFnDestroyed)
	{
		uFnDestroyed = UFunction::FindFunction("Function IpDrv.WebServer.Destroyed");
	}

	AWebServer_eventDestroyed_Params Destroyed_Params;
	memset(&Destroyed_Params, 0, sizeof(Destroyed_Params));

	this->ProcessEvent(uFnDestroyed, &Destroyed_Params, nullptr);
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void AWebServer::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function IpDrv.WebServer.PostBeginPlay");
	}

	AWebServer_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x12420000] (FUNC_Public | FUNC_HasOutParms | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            SessionName                    (CPF_Parm)
// class TArray<struct FUniqueNetId> OutRegisteredPlayers           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers(const struct FName& SessionName, class TArray<struct FUniqueNetId>& OutRegisteredPlayers)
{
	static UFunction* uFnGetRegisteredPlayers = nullptr;

	if (!uFnGetRegisteredPlayers)
	{
		uFnGetRegisteredPlayers = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers");
	}

	UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Params GetRegisteredPlayers_Params;
	memset(&GetRegisteredPlayers_Params, 0, sizeof(GetRegisteredPlayers_Params));
	memcpy_s(&GetRegisteredPlayers_Params.SessionName, sizeof(GetRegisteredPlayers_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&GetRegisteredPlayers_Params.OutRegisteredPlayers, sizeof(GetRegisteredPlayers_Params.OutRegisteredPlayers), &OutRegisteredPlayers, sizeof(OutRegisteredPlayers));

	this->ProcessEvent(uFnGetRegisteredPlayers, &GetRegisteredPlayers_Params, nullptr);

	memcpy_s(&OutRegisteredPlayers, sizeof(OutRegisteredPlayers), &GetRegisteredPlayers_Params.OutRegisteredPlayers, sizeof(GetRegisteredPlayers_Params.OutRegisteredPlayers));
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36895])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const struct FName&            SessionName                    (CPF_Parm)
// const struct FUniqueNetId&     PlayerID                       (CPF_Parm)

bool UOnlineSubsystemCommonImpl::IsPlayerInSession(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsPlayerInSession = nullptr;

	if (!uFnIsPlayerInSession)
	{
		uFnIsPlayerInSession = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession");
	}

	UOnlineSubsystemCommonImpl_execIsPlayerInSession_Params IsPlayerInSession_Params;
	memset(&IsPlayerInSession_Params, 0, sizeof(IsPlayerInSession_Params));
	memcpy_s(&IsPlayerInSession_Params.SessionName, sizeof(IsPlayerInSession_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&IsPlayerInSession_Params.PlayerID, sizeof(IsPlayerInSession_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnIsPlayerInSession->iNative = 0;
	uFnIsPlayerInSession->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPlayerInSession, &IsPlayerInSession_Params, nullptr);
	uFnIsPlayerInSession->FunctionFlags |= 0x400;
	uFnIsPlayerInSession->iNative = 36895;

	return IsPlayerInSession_Params.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromUserId
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// const struct FPlatformUserId&  UserId                         (CPF_Parm)

class FString UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromUserId(const struct FPlatformUserId& UserId)
{
	static UFunction* uFnGetPlayerNicknameFromUserId = nullptr;

	if (!uFnGetPlayerNicknameFromUserId)
	{
		uFnGetPlayerNicknameFromUserId = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromUserId");
	}

	UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromUserId_Params GetPlayerNicknameFromUserId_Params;
	memset(&GetPlayerNicknameFromUserId_Params, 0, sizeof(GetPlayerNicknameFromUserId_Params));
	memcpy_s(&GetPlayerNicknameFromUserId_Params.UserId, sizeof(GetPlayerNicknameFromUserId_Params.UserId), &UserId, sizeof(UserId));

	this->ProcessEvent(uFnGetPlayerNicknameFromUserId, &GetPlayerNicknameFromUserId_Params, nullptr);

	return GetPlayerNicknameFromUserId_Params.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnResolveSessionComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)
// const struct FOnlineGameSearchResult& Result                         (CPF_Parm)

void UOnlineGameInterfaceImpl::OnResolveSessionComplete(bool bWasSuccessful, const struct FOnlineGameSearchResult& Result)
{
	static UFunction* uFnOnResolveSessionComplete = nullptr;

	if (!uFnOnResolveSessionComplete)
	{
		uFnOnResolveSessionComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnResolveSessionComplete");
	}

	UOnlineGameInterfaceImpl_execOnResolveSessionComplete_Params OnResolveSessionComplete_Params;
	memset(&OnResolveSessionComplete_Params, 0, sizeof(OnResolveSessionComplete_Params));
	OnResolveSessionComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnResolveSessionComplete_Params.Result, sizeof(OnResolveSessionComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnResolveSessionComplete, &OnResolveSessionComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        NumComplete                    (CPF_Parm)
// int32_t                        NumTotal                       (CPF_Parm)

void UOnlineGameInterfaceImpl::OnQosStatusChanged(int32_t NumComplete, int32_t NumTotal)
{
	static UFunction* uFnOnQosStatusChanged = nullptr;

	if (!uFnOnQosStatusChanged)
	{
		uFnOnQosStatusChanged = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged");
	}

	UOnlineGameInterfaceImpl_execOnQosStatusChanged_Params OnQosStatusChanged_Params;
	memset(&OnQosStatusChanged_Params, 0, sizeof(OnQosStatusChanged_Params));
	memcpy_s(&OnQosStatusChanged_Params.NumComplete, sizeof(OnQosStatusChanged_Params.NumComplete), &NumComplete, sizeof(NumComplete));
	memcpy_s(&OnQosStatusChanged_Params.NumTotal, sizeof(OnQosStatusChanged_Params.NumTotal), &NumTotal, sizeof(NumTotal));

	this->ProcessEvent(uFnOnQosStatusChanged, &OnQosStatusChanged_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteProcessingStarted
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineGameInterfaceImpl::OnGameInviteProcessingStarted()
{
	static UFunction* uFnOnGameInviteProcessingStarted = nullptr;

	if (!uFnOnGameInviteProcessingStarted)
	{
		uFnOnGameInviteProcessingStarted = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteProcessingStarted");
	}

	UOnlineGameInterfaceImpl_execOnGameInviteProcessingStarted_Params OnGameInviteProcessingStarted_Params;
	memset(&OnGameInviteProcessingStarted_Params, 0, sizeof(OnGameInviteProcessingStarted_Params));

	this->ProcessEvent(uFnOnGameInviteProcessingStarted, &OnGameInviteProcessingStarted_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// const struct FPlatformUserId&  UserId                         (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceImpl::OnGameInviteAccepted(const struct FPlatformUserId& UserId, EOnlineSubsystemResult Result, struct FOnlineGameSearchResult& InviteResult)
{
	static UFunction* uFnOnGameInviteAccepted = nullptr;

	if (!uFnOnGameInviteAccepted)
	{
		uFnOnGameInviteAccepted = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted");
	}

	UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Params OnGameInviteAccepted_Params;
	memset(&OnGameInviteAccepted_Params, 0, sizeof(OnGameInviteAccepted_Params));
	memcpy_s(&OnGameInviteAccepted_Params.UserId, sizeof(OnGameInviteAccepted_Params.UserId), &UserId, sizeof(UserId));
	memcpy_s(&OnGameInviteAccepted_Params.Result, sizeof(OnGameInviteAccepted_Params.Result), &Result, sizeof(Result));
	memcpy_s(&OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult), &InviteResult, sizeof(InviteResult));

	this->ProcessEvent(uFnOnGameInviteAccepted, &OnGameInviteAccepted_Params, nullptr);

	memcpy_s(&InviteResult, sizeof(InviteResult), &OnGameInviteAccepted_Params.InviteResult, sizeof(OnGameInviteAccepted_Params.InviteResult));
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            SessionName                    (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result)
{
	static UFunction* uFnOnEndOnlineGameComplete = nullptr;

	if (!uFnOnEndOnlineGameComplete)
	{
		uFnOnEndOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Params OnEndOnlineGameComplete_Params;
	memset(&OnEndOnlineGameComplete_Params, 0, sizeof(OnEndOnlineGameComplete_Params));
	memcpy_s(&OnEndOnlineGameComplete_Params.SessionName, sizeof(OnEndOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnEndOnlineGameComplete_Params.Result, sizeof(OnEndOnlineGameComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            SessionName                    (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result)
{
	static UFunction* uFnOnStartOnlineGameComplete = nullptr;

	if (!uFnOnStartOnlineGameComplete)
	{
		uFnOnStartOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Params OnStartOnlineGameComplete_Params;
	memset(&OnStartOnlineGameComplete_Params, 0, sizeof(OnStartOnlineGameComplete_Params));
	memcpy_s(&OnStartOnlineGameComplete_Params.SessionName, sizeof(OnStartOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnStartOnlineGameComplete_Params.Result, sizeof(OnStartOnlineGameComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            SessionName                    (CPF_Parm)
// const struct FUniqueNetId&     PlayerID                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnUnregisterPlayerComplete = nullptr;

	if (!uFnOnUnregisterPlayerComplete)
	{
		uFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete");
	}

	UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Params OnUnregisterPlayerComplete_Params;
	memset(&OnUnregisterPlayerComplete_Params, 0, sizeof(OnUnregisterPlayerComplete_Params));
	memcpy_s(&OnUnregisterPlayerComplete_Params.SessionName, sizeof(OnUnregisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnUnregisterPlayerComplete_Params.PlayerID, sizeof(OnUnregisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnUnregisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            SessionName                    (CPF_Parm)
// const struct FUniqueNetId&     PlayerID                       (CPF_Parm)
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static UFunction* uFnOnRegisterPlayerComplete = nullptr;

	if (!uFnOnRegisterPlayerComplete)
	{
		uFnOnRegisterPlayerComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete");
	}

	UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Params OnRegisterPlayerComplete_Params;
	memset(&OnRegisterPlayerComplete_Params, 0, sizeof(OnRegisterPlayerComplete_Params));
	memcpy_s(&OnRegisterPlayerComplete_Params.SessionName, sizeof(OnRegisterPlayerComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnRegisterPlayerComplete_Params.PlayerID, sizeof(OnRegisterPlayerComplete_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	OnRegisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            SessionName                    (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result)
{
	static UFunction* uFnOnJoinOnlineGameComplete = nullptr;

	if (!uFnOnJoinOnlineGameComplete)
	{
		uFnOnJoinOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Params OnJoinOnlineGameComplete_Params;
	memset(&OnJoinOnlineGameComplete_Params, 0, sizeof(OnJoinOnlineGameComplete_Params));
	memcpy_s(&OnJoinOnlineGameComplete_Params.SessionName, sizeof(OnJoinOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnJoinOnlineGameComplete_Params.Result, sizeof(OnJoinOnlineGameComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnCancelFindOnlineGamesComplete = nullptr;

	if (!uFnOnCancelFindOnlineGamesComplete)
	{
		uFnOnCancelFindOnlineGamesComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete");
	}

	UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Params OnCancelFindOnlineGamesComplete_Params;
	memset(&OnCancelFindOnlineGamesComplete_Params, 0, sizeof(OnCancelFindOnlineGamesComplete_Params));
	OnCancelFindOnlineGamesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            SessionName                    (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result)
{
	static UFunction* uFnOnDestroyOnlineGameComplete = nullptr;

	if (!uFnOnDestroyOnlineGameComplete)
	{
		uFnOnDestroyOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Params OnDestroyOnlineGameComplete_Params;
	memset(&OnDestroyOnlineGameComplete_Params, 0, sizeof(OnDestroyOnlineGameComplete_Params));
	memcpy_s(&OnDestroyOnlineGameComplete_Params.SessionName, sizeof(OnDestroyOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnDestroyOnlineGameComplete_Params.Result, sizeof(OnDestroyOnlineGameComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            SessionName                    (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result)
{
	static UFunction* uFnOnUpdateOnlineGameComplete = nullptr;

	if (!uFnOnUpdateOnlineGameComplete)
	{
		uFnOnUpdateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Params OnUpdateOnlineGameComplete_Params;
	memset(&OnUpdateOnlineGameComplete_Params, 0, sizeof(OnUpdateOnlineGameComplete_Params));
	memcpy_s(&OnUpdateOnlineGameComplete_Params.SessionName, sizeof(OnUpdateOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnUpdateOnlineGameComplete_Params.Result, sizeof(OnUpdateOnlineGameComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            SessionName                    (CPF_Parm)
// EOnlineSubsystemResult         Result                         (CPF_Parm)

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete(const struct FName& SessionName, EOnlineSubsystemResult Result)
{
	static UFunction* uFnOnCreateOnlineGameComplete = nullptr;

	if (!uFnOnCreateOnlineGameComplete)
	{
		uFnOnCreateOnlineGameComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete");
	}

	UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Params OnCreateOnlineGameComplete_Params;
	memset(&OnCreateOnlineGameComplete_Params, 0, sizeof(OnCreateOnlineGameComplete_Params));
	memcpy_s(&OnCreateOnlineGameComplete_Params.SessionName, sizeof(OnCreateOnlineGameComplete_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnCreateOnlineGameComplete_Params.Result, sizeof(OnCreateOnlineGameComplete_Params.Result), &Result, sizeof(Result));

	this->ProcessEvent(uFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Params, nullptr);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnFindOnlineGamesComplete = nullptr;

	if (!uFnOnFindOnlineGamesComplete)
	{
		uFnOnFindOnlineGamesComplete = UFunction::FindFunction("Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete");
	}

	UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Params OnFindOnlineGamesComplete_Params;
	memset(&OnFindOnlineGamesComplete_Params, 0, sizeof(OnFindOnlineGamesComplete_Params));
	OnFindOnlineGamesComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Params, nullptr);
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UPartyBeacon::OnDestroyComplete()
{
	static UFunction* uFnOnDestroyComplete = nullptr;

	if (!uFnOnDestroyComplete)
	{
		uFnOnDestroyComplete = UFunction::FindFunction("Function IpDrv.PartyBeacon.OnDestroyComplete");
	}

	UPartyBeacon_execOnDestroyComplete_Params OnDestroyComplete_Params;
	memset(&OnDestroyComplete_Params, 0, sizeof(OnDestroyComplete_Params));

	this->ProcessEvent(uFnOnDestroyComplete, &OnDestroyComplete_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnHostSkillRatingUpdateRequestReceived
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const class FString&           SkillVersion                   (CPF_Parm | CPF_NeedCtorLink)

void UPartyBeaconClient::OnHostSkillRatingUpdateRequestReceived(const class FString& SkillVersion)
{
	static UFunction* uFnOnHostSkillRatingUpdateRequestReceived = nullptr;

	if (!uFnOnHostSkillRatingUpdateRequestReceived)
	{
		uFnOnHostSkillRatingUpdateRequestReceived = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnHostSkillRatingUpdateRequestReceived");
	}

	UPartyBeaconClient_execOnHostSkillRatingUpdateRequestReceived_Params OnHostSkillRatingUpdateRequestReceived_Params;
	memset(&OnHostSkillRatingUpdateRequestReceived_Params, 0, sizeof(OnHostSkillRatingUpdateRequestReceived_Params));
	memcpy_s(&OnHostSkillRatingUpdateRequestReceived_Params.SkillVersion, sizeof(OnHostSkillRatingUpdateRequestReceived_Params.SkillVersion), &SkillVersion, sizeof(SkillVersion));

	this->ProcessEvent(uFnOnHostSkillRatingUpdateRequestReceived, &OnHostSkillRatingUpdateRequestReceived_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnHostKickedParty
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UPartyBeaconClient::OnHostKickedParty()
{
	static UFunction* uFnOnHostKickedParty = nullptr;

	if (!uFnOnHostKickedParty)
	{
		uFnOnHostKickedParty = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnHostKickedParty");
	}

	UPartyBeaconClient_execOnHostKickedParty_Params OnHostKickedParty_Params;
	memset(&OnHostKickedParty_Params, 0, sizeof(OnHostKickedParty_Params));

	this->ProcessEvent(uFnOnHostKickedParty, &OnHostKickedParty_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EPartyReservationCancellationReason Reason                         (CPF_Parm)

void UPartyBeaconClient::OnHostHasCancelled(EPartyReservationCancellationReason Reason)
{
	static UFunction* uFnOnHostHasCancelled = nullptr;

	if (!uFnOnHostHasCancelled)
	{
		uFnOnHostHasCancelled = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnHostHasCancelled");
	}

	UPartyBeaconClient_execOnHostHasCancelled_Params OnHostHasCancelled_Params;
	memset(&OnHostHasCancelled_Params, 0, sizeof(OnHostHasCancelled_Params));
	memcpy_s(&OnHostHasCancelled_Params.Reason, sizeof(OnHostHasCancelled_Params.Reason), &Reason, sizeof(Reason));

	this->ProcessEvent(uFnOnHostHasCancelled, &OnHostHasCancelled_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UPartyBeaconClient::OnHostIsReady()
{
	static UFunction* uFnOnHostIsReady = nullptr;

	if (!uFnOnHostIsReady)
	{
		uFnOnHostIsReady = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnHostIsReady");
	}

	UPartyBeaconClient_execOnHostIsReady_Params OnHostIsReady_Params;
	memset(&OnHostIsReady_Params, 0, sizeof(OnHostIsReady_Params));

	this->ProcessEvent(uFnOnHostIsReady, &OnHostIsReady_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnJoinSessionRequestReceived
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FName&            SessionName                    (CPF_Parm)
// class UClass*                  SearchClass                    (CPF_Parm)
// const struct FPlatformSessionData& PlatformSpecificInfo           (CPF_Parm)

void UPartyBeaconClient::OnJoinSessionRequestReceived(const struct FName& SessionName, class UClass* SearchClass, const struct FPlatformSessionData& PlatformSpecificInfo)
{
	static UFunction* uFnOnJoinSessionRequestReceived = nullptr;

	if (!uFnOnJoinSessionRequestReceived)
	{
		uFnOnJoinSessionRequestReceived = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnJoinSessionRequestReceived");
	}

	UPartyBeaconClient_execOnJoinSessionRequestReceived_Params OnJoinSessionRequestReceived_Params;
	memset(&OnJoinSessionRequestReceived_Params, 0, sizeof(OnJoinSessionRequestReceived_Params));
	memcpy_s(&OnJoinSessionRequestReceived_Params.SessionName, sizeof(OnJoinSessionRequestReceived_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&OnJoinSessionRequestReceived_Params.SearchClass, sizeof(OnJoinSessionRequestReceived_Params.SearchClass), &SearchClass, sizeof(SearchClass));
	memcpy_s(&OnJoinSessionRequestReceived_Params.PlatformSpecificInfo, sizeof(OnJoinSessionRequestReceived_Params.PlatformSpecificInfo), &PlatformSpecificInfo, sizeof(PlatformSpecificInfo));

	this->ProcessEvent(uFnOnJoinSessionRequestReceived, &OnJoinSessionRequestReceived_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReservationRemaining           (CPF_Parm)

void UPartyBeaconClient::OnReservationCountUpdated(int32_t ReservationRemaining)
{
	static UFunction* uFnOnReservationCountUpdated = nullptr;

	if (!uFnOnReservationCountUpdated)
	{
		uFnOnReservationCountUpdated = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnReservationCountUpdated");
	}

	UPartyBeaconClient_execOnReservationCountUpdated_Params OnReservationCountUpdated_Params;
	memset(&OnReservationCountUpdated_Params, 0, sizeof(OnReservationCountUpdated_Params));
	memcpy_s(&OnReservationCountUpdated_Params.ReservationRemaining, sizeof(OnReservationCountUpdated_Params.ReservationRemaining), &ReservationRemaining, sizeof(ReservationRemaining));

	this->ProcessEvent(uFnOnReservationCountUpdated, &OnReservationCountUpdated_Params, nullptr);
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EPartyReservationResult        ReservationResult              (CPF_Parm)

void UPartyBeaconClient::OnReservationRequestComplete(EPartyReservationResult ReservationResult)
{
	static UFunction* uFnOnReservationRequestComplete = nullptr;

	if (!uFnOnReservationRequestComplete)
	{
		uFnOnReservationRequestComplete = UFunction::FindFunction("Function IpDrv.PartyBeaconClient.OnReservationRequestComplete");
	}

	UPartyBeaconClient_execOnReservationRequestComplete_Params OnReservationRequestComplete_Params;
	memset(&OnReservationRequestComplete_Params, 0, sizeof(OnReservationRequestComplete_Params));
	memcpy_s(&OnReservationRequestComplete_Params.ReservationResult, sizeof(OnReservationRequestComplete_Params.ReservationResult), &ReservationResult, sizeof(ReservationResult));

	this->ProcessEvent(uFnOnReservationRequestComplete, &OnReservationRequestComplete_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnSkillRatingUpdated
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FUniqueNetId&     PlayerID                       (CPF_Parm)
// const struct FReservationSkillRating& SkillRating                    (CPF_Parm)

void UPartyBeaconHost::OnSkillRatingUpdated(const struct FUniqueNetId& PlayerID, const struct FReservationSkillRating& SkillRating)
{
	static UFunction* uFnOnSkillRatingUpdated = nullptr;

	if (!uFnOnSkillRatingUpdated)
	{
		uFnOnSkillRatingUpdated = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnSkillRatingUpdated");
	}

	UPartyBeaconHost_execOnSkillRatingUpdated_Params OnSkillRatingUpdated_Params;
	memset(&OnSkillRatingUpdated_Params, 0, sizeof(OnSkillRatingUpdated_Params));
	memcpy_s(&OnSkillRatingUpdated_Params.PlayerID, sizeof(OnSkillRatingUpdated_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&OnSkillRatingUpdated_Params.SkillRating, sizeof(OnSkillRatingUpdated_Params.SkillRating), &SkillRating, sizeof(SkillRating));

	this->ProcessEvent(uFnOnSkillRatingUpdated, &OnSkillRatingUpdated_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// const struct FUniqueNetId&     PlayerID                       (CPF_Parm)
// EPartyReservationCancellationReason Reason                         (CPF_Parm)

void UPartyBeaconHost::OnClientCancellationReceived(const struct FUniqueNetId& PlayerID, EPartyReservationCancellationReason Reason)
{
	static UFunction* uFnOnClientCancellationReceived = nullptr;

	if (!uFnOnClientCancellationReceived)
	{
		uFnOnClientCancellationReceived = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnClientCancellationReceived");
	}

	UPartyBeaconHost_execOnClientCancellationReceived_Params OnClientCancellationReceived_Params;
	memset(&OnClientCancellationReceived_Params, 0, sizeof(OnClientCancellationReceived_Params));
	memcpy_s(&OnClientCancellationReceived_Params.PlayerID, sizeof(OnClientCancellationReceived_Params.PlayerID), &PlayerID, sizeof(PlayerID));
	memcpy_s(&OnClientCancellationReceived_Params.Reason, sizeof(OnClientCancellationReceived_Params.Reason), &Reason, sizeof(Reason));

	this->ProcessEvent(uFnOnClientCancellationReceived, &OnClientCancellationReceived_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UPartyBeaconHost::OnReservationsFull()
{
	static UFunction* uFnOnReservationsFull = nullptr;

	if (!uFnOnReservationsFull)
	{
		uFnOnReservationsFull = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnReservationsFull");
	}

	UPartyBeaconHost_execOnReservationsFull_Params OnReservationsFull_Params;
	memset(&OnReservationsFull_Params, 0, sizeof(OnReservationsFull_Params));

	this->ProcessEvent(uFnOnReservationsFull, &OnReservationsFull_Params, nullptr);
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UPartyBeaconHost::OnReservationChange()
{
	static UFunction* uFnOnReservationChange = nullptr;

	if (!uFnOnReservationChange)
	{
		uFnOnReservationChange = UFunction::FindFunction("Function IpDrv.PartyBeaconHost.OnReservationChange");
	}

	UPartyBeaconHost_execOnReservationChange_Params OnReservationChange_Params;
	memset(&OnReservationChange_Params, 0, sizeof(OnReservationChange_Params));

	this->ProcessEvent(uFnOnReservationChange, &OnReservationChange_Params, nullptr);
};

// Function IpDrv.UPnPDiscoveryServer.OnDescriptionRequestComplete
// [0x00420402] (FUNC_Defined | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[2569])
// Parameter Info:
// struct FSparkResult            RequestResult                  (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UUPnPDiscoveryServer::OnDescriptionRequestComplete(struct FSparkResult& RequestResult)
{
	static UFunction* uFnOnDescriptionRequestComplete = nullptr;

	if (!uFnOnDescriptionRequestComplete)
	{
		uFnOnDescriptionRequestComplete = UFunction::FindFunction("Function IpDrv.UPnPDiscoveryServer.OnDescriptionRequestComplete");
	}

	UUPnPDiscoveryServer_execOnDescriptionRequestComplete_Params OnDescriptionRequestComplete_Params;
	memset(&OnDescriptionRequestComplete_Params, 0, sizeof(OnDescriptionRequestComplete_Params));
	memcpy_s(&OnDescriptionRequestComplete_Params.RequestResult, sizeof(OnDescriptionRequestComplete_Params.RequestResult), &RequestResult, sizeof(RequestResult));

	uFnOnDescriptionRequestComplete->iNative = 0;
	uFnOnDescriptionRequestComplete->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnDescriptionRequestComplete, &OnDescriptionRequestComplete_Params, nullptr);
	uFnOnDescriptionRequestComplete->FunctionFlags |= 0x400;
	uFnOnDescriptionRequestComplete->iNative = 2569;

	memcpy_s(&RequestResult, sizeof(RequestResult), &OnDescriptionRequestComplete_Params.RequestResult, sizeof(OnDescriptionRequestComplete_Params.RequestResult));
};

// Function IpDrv.UPnPDiscoveryServer.OnDiscoveryComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// bool                           bWasSuccessful                 (CPF_Parm)

void UUPnPDiscoveryServer::OnDiscoveryComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnDiscoveryComplete = nullptr;

	if (!uFnOnDiscoveryComplete)
	{
		uFnOnDiscoveryComplete = UFunction::FindFunction("Function IpDrv.UPnPDiscoveryServer.OnDiscoveryComplete");
	}

	UUPnPDiscoveryServer_execOnDiscoveryComplete_Params OnDiscoveryComplete_Params;
	memset(&OnDiscoveryComplete_Params, 0, sizeof(OnDiscoveryComplete_Params));
	OnDiscoveryComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDiscoveryComplete, &OnDiscoveryComplete_Params, nullptr);
};

// Function IpDrv.WebApplication.PostQuery
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UWebApplication::PostQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnPostQuery = nullptr;

	if (!uFnPostQuery)
	{
		uFnPostQuery = UFunction::FindFunction("Function IpDrv.WebApplication.PostQuery");
	}

	UWebApplication_execPostQuery_Params PostQuery_Params;
	memset(&PostQuery_Params, 0, sizeof(PostQuery_Params));
	memcpy_s(&PostQuery_Params.Request, sizeof(PostQuery_Params.Request), &Request, sizeof(Request));
	memcpy_s(&PostQuery_Params.Response, sizeof(PostQuery_Params.Response), &Response, sizeof(Response));

	this->ProcessEvent(uFnPostQuery, &PostQuery_Params, nullptr);
};

// Function IpDrv.WebApplication.Query
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UWebApplication::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnQuery = nullptr;

	if (!uFnQuery)
	{
		uFnQuery = UFunction::FindFunction("Function IpDrv.WebApplication.Query");
	}

	UWebApplication_execQuery_Params Query_Params;
	memset(&Query_Params, 0, sizeof(Query_Params));
	memcpy_s(&Query_Params.Request, sizeof(Query_Params.Request), &Request, sizeof(Request));
	memcpy_s(&Query_Params.Response, sizeof(Query_Params.Response), &Response, sizeof(Response));

	this->ProcessEvent(uFnQuery, &Query_Params, nullptr);
};

// Function IpDrv.WebApplication.PreQuery
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

bool UWebApplication::PreQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnPreQuery = nullptr;

	if (!uFnPreQuery)
	{
		uFnPreQuery = UFunction::FindFunction("Function IpDrv.WebApplication.PreQuery");
	}

	UWebApplication_execPreQuery_Params PreQuery_Params;
	memset(&PreQuery_Params, 0, sizeof(PreQuery_Params));
	memcpy_s(&PreQuery_Params.Request, sizeof(PreQuery_Params.Request), &Request, sizeof(Request));
	memcpy_s(&PreQuery_Params.Response, sizeof(PreQuery_Params.Response), &Response, sizeof(Response));

	this->ProcessEvent(uFnPreQuery, &PreQuery_Params, nullptr);

	return PreQuery_Params.ReturnValue;
};

// Function IpDrv.WebApplication.CleanupApp
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UWebApplication::CleanupApp()
{
	static UFunction* uFnCleanupApp = nullptr;

	if (!uFnCleanupApp)
	{
		uFnCleanupApp = UFunction::FindFunction("Function IpDrv.WebApplication.CleanupApp");
	}

	UWebApplication_execCleanupApp_Params CleanupApp_Params;
	memset(&CleanupApp_Params, 0, sizeof(CleanupApp_Params));

	this->ProcessEvent(uFnCleanupApp, &CleanupApp_Params, nullptr);
};

// Function IpDrv.WebApplication.Cleanup
// [0x12020001] (FUNC_Final | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UWebApplication::Cleanup()
{
	static UFunction* uFnCleanup = nullptr;

	if (!uFnCleanup)
	{
		uFnCleanup = UFunction::FindFunction("Function IpDrv.WebApplication.Cleanup");
	}

	UWebApplication_execCleanup_Params Cleanup_Params;
	memset(&Cleanup_Params, 0, sizeof(Cleanup_Params));

	this->ProcessEvent(uFnCleanup, &Cleanup_Params, nullptr);
};

// Function IpDrv.WebApplication.Init
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UWebApplication::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.WebApplication.Init");
	}

	UWebApplication_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.HelloWeb.Query
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UHelloWeb::eventQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnQuery = nullptr;

	if (!uFnQuery)
	{
		uFnQuery = UFunction::FindFunction("Function IpDrv.HelloWeb.Query");
	}

	UHelloWeb_eventQuery_Params Query_Params;
	memset(&Query_Params, 0, sizeof(Query_Params));
	memcpy_s(&Query_Params.Request, sizeof(Query_Params.Request), &Request, sizeof(Request));
	memcpy_s(&Query_Params.Response, sizeof(Query_Params.Response), &Response, sizeof(Response));

	this->ProcessEvent(uFnQuery, &Query_Params, nullptr);
};

// Function IpDrv.HelloWeb.Init
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UHelloWeb::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function IpDrv.HelloWeb.Init");
	}

	UHelloWeb_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function IpDrv.ImageServer.Query
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// class UWebRequest*             Request                        (CPF_Parm)
// class UWebResponse*            Response                       (CPF_Parm)

void UImageServer::eventQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* uFnQuery = nullptr;

	if (!uFnQuery)
	{
		uFnQuery = UFunction::FindFunction("Function IpDrv.ImageServer.Query");
	}

	UImageServer_eventQuery_Params Query_Params;
	memset(&Query_Params, 0, sizeof(Query_Params));
	memcpy_s(&Query_Params.Request, sizeof(Query_Params.Request), &Request, sizeof(Request));
	memcpy_s(&Query_Params.Response, sizeof(Query_Params.Response), &Response, sizeof(Response));

	this->ProcessEvent(uFnQuery, &Query_Params, nullptr);
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           D                              (CPF_Parm | CPF_NeedCtorLink)

int32_t UWebRequest::GetHexDigit(const class FString& D)
{
	static UFunction* uFnGetHexDigit = nullptr;

	if (!uFnGetHexDigit)
	{
		uFnGetHexDigit = UFunction::FindFunction("Function IpDrv.WebRequest.GetHexDigit");
	}

	UWebRequest_execGetHexDigit_Params GetHexDigit_Params;
	memset(&GetHexDigit_Params, 0, sizeof(GetHexDigit_Params));
	memcpy_s(&GetHexDigit_Params.D, sizeof(GetHexDigit_Params.D), &D, sizeof(D));

	this->ProcessEvent(uFnGetHexDigit, &GetHexDigit_Params, nullptr);

	return GetHexDigit_Params.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Data                           (CPF_Parm | CPF_NeedCtorLink)

void UWebRequest::DecodeFormData(const class FString& Data)
{
	static UFunction* uFnDecodeFormData = nullptr;

	if (!uFnDecodeFormData)
	{
		uFnDecodeFormData = UFunction::FindFunction("Function IpDrv.WebRequest.DecodeFormData");
	}

	UWebRequest_execDecodeFormData_Params DecodeFormData_Params;
	memset(&DecodeFormData_Params, 0, sizeof(DecodeFormData_Params));
	memcpy_s(&DecodeFormData_Params.Data, sizeof(DecodeFormData_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnDecodeFormData, &DecodeFormData_Params, nullptr);
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           S                              (CPF_Parm | CPF_NeedCtorLink)

void UWebRequest::ProcessHeaderString(const class FString& S)
{
	static UFunction* uFnProcessHeaderString = nullptr;

	if (!uFnProcessHeaderString)
	{
		uFnProcessHeaderString = UFunction::FindFunction("Function IpDrv.WebRequest.ProcessHeaderString");
	}

	UWebRequest_execProcessHeaderString_Params ProcessHeaderString_Params;
	memset(&ProcessHeaderString_Params, 0, sizeof(ProcessHeaderString_Params));
	memcpy_s(&ProcessHeaderString_Params.S, sizeof(ProcessHeaderString_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnProcessHeaderString, &ProcessHeaderString_Params, nullptr);
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36834])
// Parameter Info:

void UWebRequest::Dump()
{
	static UFunction* uFnDump = nullptr;

	if (!uFnDump)
	{
		uFnDump = UFunction::FindFunction("Function IpDrv.WebRequest.Dump");
	}

	UWebRequest_execDump_Params Dump_Params;
	memset(&Dump_Params, 0, sizeof(Dump_Params));

	uFnDump->iNative = 0;
	uFnDump->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDump, &Dump_Params, nullptr);
	uFnDump->FunctionFlags |= 0x400;
	uFnDump->iNative = 36834;
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[36871])
// Parameter Info:
// class TArray<class FString>    varNames                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UWebRequest::GetVariables(class TArray<class FString>& varNames)
{
	static UFunction* uFnGetVariables = nullptr;

	if (!uFnGetVariables)
	{
		uFnGetVariables = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariables");
	}

	UWebRequest_execGetVariables_Params GetVariables_Params;
	memset(&GetVariables_Params, 0, sizeof(GetVariables_Params));
	memcpy_s(&GetVariables_Params.varNames, sizeof(GetVariables_Params.varNames), &varNames, sizeof(varNames));

	uFnGetVariables->iNative = 0;
	uFnGetVariables->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetVariables, &GetVariables_Params, nullptr);
	uFnGetVariables->FunctionFlags |= 0x400;
	uFnGetVariables->iNative = 36871;

	memcpy_s(&varNames, sizeof(varNames), &GetVariables_Params.varNames, sizeof(GetVariables_Params.varNames));
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[36870])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// const class FString&           VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Number                         (CPF_Parm)
// const class FString&           DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::GetVariableNumber(const class FString& VariableName, int32_t Number, const class FString& DefaultValue)
{
	static UFunction* uFnGetVariableNumber = nullptr;

	if (!uFnGetVariableNumber)
	{
		uFnGetVariableNumber = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariableNumber");
	}

	UWebRequest_execGetVariableNumber_Params GetVariableNumber_Params;
	memset(&GetVariableNumber_Params, 0, sizeof(GetVariableNumber_Params));
	memcpy_s(&GetVariableNumber_Params.VariableName, sizeof(GetVariableNumber_Params.VariableName), &VariableName, sizeof(VariableName));
	memcpy_s(&GetVariableNumber_Params.Number, sizeof(GetVariableNumber_Params.Number), &Number, sizeof(Number));
	memcpy_s(&GetVariableNumber_Params.DefaultValue, sizeof(GetVariableNumber_Params.DefaultValue), &DefaultValue, sizeof(DefaultValue));

	uFnGetVariableNumber->iNative = 0;
	uFnGetVariableNumber->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetVariableNumber, &GetVariableNumber_Params, nullptr);
	uFnGetVariableNumber->FunctionFlags |= 0x400;
	uFnGetVariableNumber->iNative = 36870;

	return GetVariableNumber_Params.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36869])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           VariableName                   (CPF_Parm | CPF_NeedCtorLink)

int32_t UWebRequest::GetVariableCount(const class FString& VariableName)
{
	static UFunction* uFnGetVariableCount = nullptr;

	if (!uFnGetVariableCount)
	{
		uFnGetVariableCount = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariableCount");
	}

	UWebRequest_execGetVariableCount_Params GetVariableCount_Params;
	memset(&GetVariableCount_Params, 0, sizeof(GetVariableCount_Params));
	memcpy_s(&GetVariableCount_Params.VariableName, sizeof(GetVariableCount_Params.VariableName), &VariableName, sizeof(VariableName));

	uFnGetVariableCount->iNative = 0;
	uFnGetVariableCount->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetVariableCount, &GetVariableCount_Params, nullptr);
	uFnGetVariableCount->FunctionFlags |= 0x400;
	uFnGetVariableCount->iNative = 36869;

	return GetVariableCount_Params.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[36868])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// const class FString&           VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// const class FString&           DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::GetVariable(const class FString& VariableName, const class FString& DefaultValue)
{
	static UFunction* uFnGetVariable = nullptr;

	if (!uFnGetVariable)
	{
		uFnGetVariable = UFunction::FindFunction("Function IpDrv.WebRequest.GetVariable");
	}

	UWebRequest_execGetVariable_Params GetVariable_Params;
	memset(&GetVariable_Params, 0, sizeof(GetVariable_Params));
	memcpy_s(&GetVariable_Params.VariableName, sizeof(GetVariable_Params.VariableName), &VariableName, sizeof(VariableName));
	memcpy_s(&GetVariable_Params.DefaultValue, sizeof(GetVariable_Params.DefaultValue), &DefaultValue, sizeof(DefaultValue));

	uFnGetVariable->iNative = 0;
	uFnGetVariable->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetVariable, &GetVariable_Params, nullptr);
	uFnGetVariable->FunctionFlags |= 0x400;
	uFnGetVariable->iNative = 36868;

	return GetVariable_Params.ReturnValue;
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36776])
// Parameter Info:
// const class FString&           VariableName                   (CPF_Parm | CPF_NeedCtorLink)
// const class FString&           Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UWebRequest::AddVariable(const class FString& VariableName, const class FString& Value)
{
	static UFunction* uFnAddVariable = nullptr;

	if (!uFnAddVariable)
	{
		uFnAddVariable = UFunction::FindFunction("Function IpDrv.WebRequest.AddVariable");
	}

	UWebRequest_execAddVariable_Params AddVariable_Params;
	memset(&AddVariable_Params, 0, sizeof(AddVariable_Params));
	memcpy_s(&AddVariable_Params.VariableName, sizeof(AddVariable_Params.VariableName), &VariableName, sizeof(VariableName));
	memcpy_s(&AddVariable_Params.Value, sizeof(AddVariable_Params.Value), &Value, sizeof(Value));

	uFnAddVariable->iNative = 0;
	uFnAddVariable->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddVariable, &AddVariable_Params, nullptr);
	uFnAddVariable->FunctionFlags |= 0x400;
	uFnAddVariable->iNative = 36776;
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[36862])
// Parameter Info:
// class TArray<class FString>    Headers                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UWebRequest::GetHeaders(class TArray<class FString>& Headers)
{
	static UFunction* uFnGetHeaders = nullptr;

	if (!uFnGetHeaders)
	{
		uFnGetHeaders = UFunction::FindFunction("Function IpDrv.WebRequest.GetHeaders");
	}

	UWebRequest_execGetHeaders_Params GetHeaders_Params;
	memset(&GetHeaders_Params, 0, sizeof(GetHeaders_Params));
	memcpy_s(&GetHeaders_Params.Headers, sizeof(GetHeaders_Params.Headers), &Headers, sizeof(Headers));

	uFnGetHeaders->iNative = 0;
	uFnGetHeaders->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetHeaders, &GetHeaders_Params, nullptr);
	uFnGetHeaders->FunctionFlags |= 0x400;
	uFnGetHeaders->iNative = 36862;

	memcpy_s(&Headers, sizeof(Headers), &GetHeaders_Params.Headers, sizeof(GetHeaders_Params.Headers));
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[36861])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// const class FString&           HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// const class FString&           DefaultValue                   (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::GetHeader(const class FString& HeaderName, const class FString& DefaultValue)
{
	static UFunction* uFnGetHeader = nullptr;

	if (!uFnGetHeader)
	{
		uFnGetHeader = UFunction::FindFunction("Function IpDrv.WebRequest.GetHeader");
	}

	UWebRequest_execGetHeader_Params GetHeader_Params;
	memset(&GetHeader_Params, 0, sizeof(GetHeader_Params));
	memcpy_s(&GetHeader_Params.HeaderName, sizeof(GetHeader_Params.HeaderName), &HeaderName, sizeof(HeaderName));
	memcpy_s(&GetHeader_Params.DefaultValue, sizeof(GetHeader_Params.DefaultValue), &DefaultValue, sizeof(DefaultValue));

	uFnGetHeader->iNative = 0;
	uFnGetHeader->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetHeader, &GetHeader_Params, nullptr);
	uFnGetHeader->FunctionFlags |= 0x400;
	uFnGetHeader->iNative = 36861;

	return GetHeader_Params.ReturnValue;
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36774])
// Parameter Info:
// const class FString&           HeaderName                     (CPF_Parm | CPF_NeedCtorLink)
// const class FString&           Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)

void UWebRequest::AddHeader(const class FString& HeaderName, const class FString& Value)
{
	static UFunction* uFnAddHeader = nullptr;

	if (!uFnAddHeader)
	{
		uFnAddHeader = UFunction::FindFunction("Function IpDrv.WebRequest.AddHeader");
	}

	UWebRequest_execAddHeader_Params AddHeader_Params;
	memset(&AddHeader_Params, 0, sizeof(AddHeader_Params));
	memcpy_s(&AddHeader_Params.HeaderName, sizeof(AddHeader_Params.HeaderName), &HeaderName, sizeof(HeaderName));
	memcpy_s(&AddHeader_Params.Value, sizeof(AddHeader_Params.Value), &Value, sizeof(Value));

	uFnAddHeader->iNative = 0;
	uFnAddHeader->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAddHeader, &AddHeader_Params, nullptr);
	uFnAddHeader->FunctionFlags |= 0x400;
	uFnAddHeader->iNative = 36774;
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36840])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// const class FString&           Decoded                        (CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::EncodeBase64(const class FString& Decoded)
{
	static UFunction* uFnEncodeBase64 = nullptr;

	if (!uFnEncodeBase64)
	{
		uFnEncodeBase64 = UFunction::FindFunction("Function IpDrv.WebRequest.EncodeBase64");
	}

	UWebRequest_execEncodeBase64_Params EncodeBase64_Params;
	memset(&EncodeBase64_Params, 0, sizeof(EncodeBase64_Params));
	memcpy_s(&EncodeBase64_Params.Decoded, sizeof(EncodeBase64_Params.Decoded), &Decoded, sizeof(Decoded));

	uFnEncodeBase64->iNative = 0;
	uFnEncodeBase64->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEncodeBase64, &EncodeBase64_Params, nullptr);
	uFnEncodeBase64->FunctionFlags |= 0x400;
	uFnEncodeBase64->iNative = 36840;

	return EncodeBase64_Params.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36819])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// const class FString&           Encoded                        (CPF_Parm | CPF_NeedCtorLink)

class FString UWebRequest::DecodeBase64(const class FString& Encoded)
{
	static UFunction* uFnDecodeBase64 = nullptr;

	if (!uFnDecodeBase64)
	{
		uFnDecodeBase64 = UFunction::FindFunction("Function IpDrv.WebRequest.DecodeBase64");
	}

	UWebRequest_execDecodeBase64_Params DecodeBase64_Params;
	memset(&DecodeBase64_Params, 0, sizeof(DecodeBase64_Params));
	memcpy_s(&DecodeBase64_Params.Encoded, sizeof(DecodeBase64_Params.Encoded), &Encoded, sizeof(Encoded));

	uFnDecodeBase64->iNative = 0;
	uFnDecodeBase64->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDecodeBase64, &DecodeBase64_Params, nullptr);
	uFnDecodeBase64->FunctionFlags |= 0x400;
	uFnDecodeBase64->iNative = 36819;

	return DecodeBase64_Params.ReturnValue;
};

// Function IpDrv.WebResponse.SentResponse
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UWebResponse::SentResponse()
{
	static UFunction* uFnSentResponse = nullptr;

	if (!uFnSentResponse)
	{
		uFnSentResponse = UFunction::FindFunction("Function IpDrv.WebResponse.SentResponse");
	}

	UWebResponse_execSentResponse_Params SentResponse_Params;
	memset(&SentResponse_Params, 0, sizeof(SentResponse_Params));

	this->ProcessEvent(uFnSentResponse, &SentResponse_Params, nullptr);

	return SentResponse_Params.ReturnValue;
};

// Function IpDrv.WebResponse.SentText
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UWebResponse::SentText()
{
	static UFunction* uFnSentText = nullptr;

	if (!uFnSentText)
	{
		uFnSentText = UFunction::FindFunction("Function IpDrv.WebResponse.SentText");
	}

	UWebResponse_execSentText_Params SentText_Params;
	memset(&SentText_Params, 0, sizeof(SentText_Params));

	this->ProcessEvent(uFnSentText, &SentText_Params, nullptr);

	return SentText_Params.ReturnValue;
};

// Function IpDrv.WebResponse.Redirect
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           URL                            (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::Redirect(const class FString& URL)
{
	static UFunction* uFnRedirect = nullptr;

	if (!uFnRedirect)
	{
		uFnRedirect = UFunction::FindFunction("Function IpDrv.WebResponse.Redirect");
	}

	UWebResponse_execRedirect_Params Redirect_Params;
	memset(&Redirect_Params, 0, sizeof(Redirect_Params));
	memcpy_s(&Redirect_Params.URL, sizeof(Redirect_Params.URL), &URL, sizeof(URL));

	this->ProcessEvent(uFnRedirect, &Redirect_Params, nullptr);
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x12024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           ContentType                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// bool                           bCache                         (CPF_OptionalParm | CPF_Parm)

void UWebResponse::SendStandardHeaders(const class FString& ContentType, bool bCache)
{
	static UFunction* uFnSendStandardHeaders = nullptr;

	if (!uFnSendStandardHeaders)
	{
		uFnSendStandardHeaders = UFunction::FindFunction("Function IpDrv.WebResponse.SendStandardHeaders");
	}

	UWebResponse_execSendStandardHeaders_Params SendStandardHeaders_Params;
	memset(&SendStandardHeaders_Params, 0, sizeof(SendStandardHeaders_Params));
	memcpy_s(&SendStandardHeaders_Params.ContentType, sizeof(SendStandardHeaders_Params.ContentType), &ContentType, sizeof(ContentType));
	SendStandardHeaders_Params.bCache = bCache;

	this->ProcessEvent(uFnSendStandardHeaders, &SendStandardHeaders_Params, nullptr);
};

// Function IpDrv.WebResponse.HTTPError
// [0x12024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ErrorNum                       (CPF_Parm)
// const class FString&           Data                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HTTPError(int32_t ErrorNum, const class FString& Data)
{
	static UFunction* uFnHTTPError = nullptr;

	if (!uFnHTTPError)
	{
		uFnHTTPError = UFunction::FindFunction("Function IpDrv.WebResponse.HTTPError");
	}

	UWebResponse_execHTTPError_Params HTTPError_Params;
	memset(&HTTPError_Params, 0, sizeof(HTTPError_Params));
	memcpy_s(&HTTPError_Params.ErrorNum, sizeof(HTTPError_Params.ErrorNum), &ErrorNum, sizeof(ErrorNum));
	memcpy_s(&HTTPError_Params.Data, sizeof(HTTPError_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnHTTPError, &HTTPError_Params, nullptr);
};

// Function IpDrv.WebResponse.SendHeaders
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:

void UWebResponse::SendHeaders()
{
	static UFunction* uFnSendHeaders = nullptr;

	if (!uFnSendHeaders)
	{
		uFnSendHeaders = UFunction::FindFunction("Function IpDrv.WebResponse.SendHeaders");
	}

	UWebResponse_execSendHeaders_Params SendHeaders_Params;
	memset(&SendHeaders_Params, 0, sizeof(SendHeaders_Params));

	this->ProcessEvent(uFnSendHeaders, &SendHeaders_Params, nullptr);
};

// Function IpDrv.WebResponse.AddHeader
// [0x12024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Header                         (CPF_Parm | CPF_NeedCtorLink)
// bool                           bReplace                       (CPF_OptionalParm | CPF_Parm)

void UWebResponse::AddHeader(const class FString& Header, bool bReplace)
{
	static UFunction* uFnAddHeader = nullptr;

	if (!uFnAddHeader)
	{
		uFnAddHeader = UFunction::FindFunction("Function IpDrv.WebResponse.AddHeader");
	}

	UWebResponse_execAddHeader_Params AddHeader_Params;
	memset(&AddHeader_Params, 0, sizeof(AddHeader_Params));
	memcpy_s(&AddHeader_Params.Header, sizeof(AddHeader_Params.Header), &Header, sizeof(Header));
	AddHeader_Params.bReplace = bReplace;

	this->ProcessEvent(uFnAddHeader, &AddHeader_Params, nullptr);
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Header                         (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HTTPHeader(const class FString& Header)
{
	static UFunction* uFnHTTPHeader = nullptr;

	if (!uFnHTTPHeader)
	{
		uFnHTTPHeader = UFunction::FindFunction("Function IpDrv.WebResponse.HTTPHeader");
	}

	UWebResponse_execHTTPHeader_Params HTTPHeader_Params;
	memset(&HTTPHeader_Params, 0, sizeof(HTTPHeader_Params));
	memcpy_s(&HTTPHeader_Params.Header, sizeof(HTTPHeader_Params.Header), &Header, sizeof(Header));

	this->ProcessEvent(uFnHTTPHeader, &HTTPHeader_Params, nullptr);
};

// Function IpDrv.WebResponse.HTTPResponse
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Header                         (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::HTTPResponse(const class FString& Header)
{
	static UFunction* uFnHTTPResponse = nullptr;

	if (!uFnHTTPResponse)
	{
		uFnHTTPResponse = UFunction::FindFunction("Function IpDrv.WebResponse.HTTPResponse");
	}

	UWebResponse_execHTTPResponse_Params HTTPResponse_Params;
	memset(&HTTPResponse_Params, 0, sizeof(HTTPResponse_Params));
	memcpy_s(&HTTPResponse_Params.Header, sizeof(HTTPResponse_Params.Header), &Header, sizeof(Header));

	this->ProcessEvent(uFnHTTPResponse, &HTTPResponse_Params, nullptr);
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x12020000] (FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Realm                          (CPF_Parm | CPF_NeedCtorLink)

void UWebResponse::FailAuthentication(const class FString& Realm)
{
	static UFunction* uFnFailAuthentication = nullptr;

	if (!uFnFailAuthentication)
	{
		uFnFailAuthentication = UFunction::FindFunction("Function IpDrv.WebResponse.FailAuthentication");
	}

	UWebResponse_execFailAuthentication_Params FailAuthentication_Params;
	memset(&FailAuthentication_Params, 0, sizeof(FailAuthentication_Params));
	memcpy_s(&FailAuthentication_Params.Realm, sizeof(FailAuthentication_Params.Realm), &Realm, sizeof(Realm));

	this->ProcessEvent(uFnFailAuthentication, &FailAuthentication_Params, nullptr);
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x12024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Filename                       (CPF_Parm | CPF_NeedCtorLink)
// const class FString&           ContentType                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::SendCachedFile(const class FString& Filename, const class FString& ContentType)
{
	static UFunction* uFnSendCachedFile = nullptr;

	if (!uFnSendCachedFile)
	{
		uFnSendCachedFile = UFunction::FindFunction("Function IpDrv.WebResponse.SendCachedFile");
	}

	UWebResponse_execSendCachedFile_Params SendCachedFile_Params;
	memset(&SendCachedFile_Params, 0, sizeof(SendCachedFile_Params));
	memcpy_s(&SendCachedFile_Params.Filename, sizeof(SendCachedFile_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&SendCachedFile_Params.ContentType, sizeof(SendCachedFile_Params.ContentType), &ContentType, sizeof(ContentType));

	this->ProcessEvent(uFnSendCachedFile, &SendCachedFile_Params, nullptr);

	return SendCachedFile_Params.ReturnValue;
};

// Function IpDrv.WebResponse.SendBinary
// [0x12020800] (FUNC_Event | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Count                          (CPF_Parm)
// uint8_t                        B                              (CPF_Parm)

void UWebResponse::eventSendBinary(int32_t Count, uint8_t B)
{
	static UFunction* uFnSendBinary = nullptr;

	if (!uFnSendBinary)
	{
		uFnSendBinary = UFunction::FindFunction("Function IpDrv.WebResponse.SendBinary");
	}

	UWebResponse_eventSendBinary_Params SendBinary_Params;
	memset(&SendBinary_Params, 0, sizeof(SendBinary_Params));
	memcpy_s(&SendBinary_Params.Count, sizeof(SendBinary_Params.Count), &Count, sizeof(Count));
	memcpy_s(&SendBinary_Params.B, sizeof(SendBinary_Params.B), &B, sizeof(B));

	this->ProcessEvent(uFnSendBinary, &SendBinary_Params, nullptr);
};

// Function IpDrv.WebResponse.SendText
// [0x12024800] (FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_DLLImport | FUNC_K2Pure | FUNC_AllFlags)
// Parameter Info:
// const class FString&           Text                           (CPF_Parm | CPF_NeedCtorLink)
// bool                           bNoCRLF                        (CPF_OptionalParm | CPF_Parm)

void UWebResponse::eventSendText(const class FString& Text, bool bNoCRLF)
{
	static UFunction* uFnSendText = nullptr;

	if (!uFnSendText)
	{
		uFnSendText = UFunction::FindFunction("Function IpDrv.WebResponse.SendText");
	}

	UWebResponse_eventSendText_Params SendText_Params;
	memset(&SendText_Params, 0, sizeof(SendText_Params));
	memcpy_s(&SendText_Params.Text, sizeof(SendText_Params.Text), &Text, sizeof(Text));
	SendText_Params.bNoCRLF = bNoCRLF;

	this->ProcessEvent(uFnSendText, &SendText_Params, nullptr);
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36834])
// Parameter Info:

void UWebResponse::Dump()
{
	static UFunction* uFnDump = nullptr;

	if (!uFnDump)
	{
		uFnDump = UFunction::FindFunction("Function IpDrv.WebResponse.Dump");
	}

	UWebResponse_execDump_Params Dump_Params;
	memset(&Dump_Params, 0, sizeof(Dump_Params));

	uFnDump->iNative = 0;
	uFnDump->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDump, &Dump_Params, nullptr);
	uFnDump->FunctionFlags |= 0x400;
	uFnDump->iNative = 36834;
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[36864])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        OffsetSeconds                  (CPF_OptionalParm | CPF_Parm)

class FString UWebResponse::GetHTTPExpiration(int32_t OffsetSeconds)
{
	static UFunction* uFnGetHTTPExpiration = nullptr;

	if (!uFnGetHTTPExpiration)
	{
		uFnGetHTTPExpiration = UFunction::FindFunction("Function IpDrv.WebResponse.GetHTTPExpiration");
	}

	UWebResponse_execGetHTTPExpiration_Params GetHTTPExpiration_Params;
	memset(&GetHTTPExpiration_Params, 0, sizeof(GetHTTPExpiration_Params));
	memcpy_s(&GetHTTPExpiration_Params.OffsetSeconds, sizeof(GetHTTPExpiration_Params.OffsetSeconds), &OffsetSeconds, sizeof(OffsetSeconds));

	uFnGetHTTPExpiration->iNative = 0;
	uFnGetHTTPExpiration->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetHTTPExpiration, &GetHTTPExpiration_Params, nullptr);
	uFnGetHTTPExpiration->FunctionFlags |= 0x400;
	uFnGetHTTPExpiration->iNative = 36864;

	return GetHTTPExpiration_Params.ReturnValue;
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36908])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// const class FString&           Filename                       (CPF_Parm | CPF_NeedCtorLink)

class FString UWebResponse::LoadParsedUHTM(const class FString& Filename)
{
	static UFunction* uFnLoadParsedUHTM = nullptr;

	if (!uFnLoadParsedUHTM)
	{
		uFnLoadParsedUHTM = UFunction::FindFunction("Function IpDrv.WebResponse.LoadParsedUHTM");
	}

	UWebResponse_execLoadParsedUHTM_Params LoadParsedUHTM_Params;
	memset(&LoadParsedUHTM_Params, 0, sizeof(LoadParsedUHTM_Params));
	memcpy_s(&LoadParsedUHTM_Params.Filename, sizeof(LoadParsedUHTM_Params.Filename), &Filename, sizeof(Filename));

	uFnLoadParsedUHTM->iNative = 0;
	uFnLoadParsedUHTM->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLoadParsedUHTM, &LoadParsedUHTM_Params, nullptr);
	uFnLoadParsedUHTM->FunctionFlags |= 0x400;
	uFnLoadParsedUHTM->iNative = 36908;

	return LoadParsedUHTM_Params.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36886])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::IncludeBinaryFile(const class FString& Filename)
{
	static UFunction* uFnIncludeBinaryFile = nullptr;

	if (!uFnIncludeBinaryFile)
	{
		uFnIncludeBinaryFile = UFunction::FindFunction("Function IpDrv.WebResponse.IncludeBinaryFile");
	}

	UWebResponse_execIncludeBinaryFile_Params IncludeBinaryFile_Params;
	memset(&IncludeBinaryFile_Params, 0, sizeof(IncludeBinaryFile_Params));
	memcpy_s(&IncludeBinaryFile_Params.Filename, sizeof(IncludeBinaryFile_Params.Filename), &Filename, sizeof(Filename));

	uFnIncludeBinaryFile->iNative = 0;
	uFnIncludeBinaryFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIncludeBinaryFile, &IncludeBinaryFile_Params, nullptr);
	uFnIncludeBinaryFile->FunctionFlags |= 0x400;
	uFnIncludeBinaryFile->iNative = 36886;

	return IncludeBinaryFile_Params.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36887])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::IncludeUHTM(const class FString& Filename)
{
	static UFunction* uFnIncludeUHTM = nullptr;

	if (!uFnIncludeUHTM)
	{
		uFnIncludeUHTM = UFunction::FindFunction("Function IpDrv.WebResponse.IncludeUHTM");
	}

	UWebResponse_execIncludeUHTM_Params IncludeUHTM_Params;
	memset(&IncludeUHTM_Params, 0, sizeof(IncludeUHTM_Params));
	memcpy_s(&IncludeUHTM_Params.Filename, sizeof(IncludeUHTM_Params.Filename), &Filename, sizeof(Filename));

	uFnIncludeUHTM->iNative = 0;
	uFnIncludeUHTM->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIncludeUHTM, &IncludeUHTM_Params, nullptr);
	uFnIncludeUHTM->FunctionFlags |= 0x400;
	uFnIncludeUHTM->iNative = 36887;

	return IncludeUHTM_Params.ReturnValue;
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36805])
// Parameter Info:

void UWebResponse::ClearSubst()
{
	static UFunction* uFnClearSubst = nullptr;

	if (!uFnClearSubst)
	{
		uFnClearSubst = UFunction::FindFunction("Function IpDrv.WebResponse.ClearSubst");
	}

	UWebResponse_execClearSubst_Params ClearSubst_Params;
	memset(&ClearSubst_Params, 0, sizeof(ClearSubst_Params));

	uFnClearSubst->iNative = 0;
	uFnClearSubst->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClearSubst, &ClearSubst_Params, nullptr);
	uFnClearSubst->FunctionFlags |= 0x400;
	uFnClearSubst->iNative = 36805;
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[37058])
// Parameter Info:
// const class FString&           Variable                       (CPF_Parm | CPF_NeedCtorLink)
// const class FString&           Value                          (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// bool                           bClear                         (CPF_OptionalParm | CPF_Parm)

void UWebResponse::Subst(const class FString& Variable, const class FString& Value, bool bClear)
{
	static UFunction* uFnSubst = nullptr;

	if (!uFnSubst)
	{
		uFnSubst = UFunction::FindFunction("Function IpDrv.WebResponse.Subst");
	}

	UWebResponse_execSubst_Params Subst_Params;
	memset(&Subst_Params, 0, sizeof(Subst_Params));
	memcpy_s(&Subst_Params.Variable, sizeof(Subst_Params.Variable), &Variable, sizeof(Variable));
	memcpy_s(&Subst_Params.Value, sizeof(Subst_Params.Value), &Value, sizeof(Value));
	Subst_Params.bClear = bClear;

	uFnSubst->iNative = 0;
	uFnSubst->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSubst, &Subst_Params, nullptr);
	uFnSubst->FunctionFlags |= 0x400;
	uFnSubst->iNative = 37058;
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[36855])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// const class FString&           Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UWebResponse::FileExists(const class FString& Filename)
{
	static UFunction* uFnFileExists = nullptr;

	if (!uFnFileExists)
	{
		uFnFileExists = UFunction::FindFunction("Function IpDrv.WebResponse.FileExists");
	}

	UWebResponse_execFileExists_Params FileExists_Params;
	memset(&FileExists_Params, 0, sizeof(FileExists_Params));
	memcpy_s(&FileExists_Params.Filename, sizeof(FileExists_Params.Filename), &Filename, sizeof(Filename));

	uFnFileExists->iNative = 0;
	uFnFileExists->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFileExists, &FileExists_Params, nullptr);
	uFnFileExists->FunctionFlags |= 0x400;
	uFnFileExists->iNative = 36855;

	return FileExists_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
