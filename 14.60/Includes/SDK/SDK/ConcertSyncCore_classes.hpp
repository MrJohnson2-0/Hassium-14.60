#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x60 - 0x28)
// Class ConcertSyncCore.ConcertSyncConfig
class UConcertSyncConfig : public UObject
{
public:
	bool                                         bInteractiveHotReload;                             // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPresenceInPIE;                                // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52AD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SnapshotTransactionsPerSecond;                     // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransactionClassFilter>       IncludeObjectClassFilters;                         // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransactionClassFilter>       ExcludeTransactionClassFilters;                    // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<FFieldPathProperty_>                  AllowedTransientProperties;                        // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConcertSyncConfig* GetDefaultObj();

};

}


