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

// 0x28 (0x28 - 0x0)
// ScriptStruct EpicCMS.DownloadCacheEntry
struct FDownloadCacheEntry
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceUrl;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       LastAccessTime;                                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct EpicCMS.DownloadCache
struct FDownloadCache
{
public:
	uint8                                        Pad_4F9B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Version;                                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FString, struct FDownloadCacheEntry> Cache;                                             // 0x8(0x50)(NativeAccessSpecifierPrivate)
};

}


