#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function EOSPixelStreaming.EOSPixelStreamerDelegates.GetPixelStreamerDelegates
struct UEOSPixelStreamerDelegates_GetPixelStreamerDelegates_Params
{
public:
	class UEOSPixelStreamerDelegates*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EOSPixelStreaming.EOSPixelStreamerInputComponent.SendPixelStreamingResponse
struct UEOSPixelStreamerInputComponent_SendPixelStreamingResponse_Params
{
public:
	class FString                                Descriptor;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction EOSPixelStreaming.EOSPixelStreamerInputComponent.OnInput__DelegateSignature
struct UEOSPixelStreamerInputComponent_OnInput__DelegateSignature_Params
{
public:
	class FString                                Descriptor;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function EOSPixelStreaming.EOSPixelStreamerInputComponent.GetJsonStringValue
struct UEOSPixelStreamerInputComponent_GetJsonStringValue_Params
{
public:
	class FString                                Descriptor;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E10[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function EOSPixelStreaming.EOSPixelStreamerInputComponent.AddJsonStringValue
struct UEOSPixelStreamerInputComponent_AddJsonStringValue_Params
{
public:
	class FString                                Descriptor;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FieldName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringValue;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewDescriptor;                                     // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x40(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E11[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


