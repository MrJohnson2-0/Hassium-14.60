#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ValkyrieContentService.ValkyrieContentServiceListInfoMeta
struct FValkyrieContentServiceListInfoMeta
{
public:
	class FString                                Title;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ValkyrieContentService.ValkyrieContentServiceListInfo
struct FValkyrieContentServiceListInfo
{
public:
	class FString                                ContentID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Created;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FValkyrieContentServiceListInfoMeta   Meta;                                              // 0x18(0x20)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ValkyrieContentService.ValkyrieContentServiceListResults
struct FValkyrieContentServiceListResults
{
public:
	int32                                        Limit;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_541D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FValkyrieContentServiceListInfo> Results;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


