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

// 0x50 (0x58 - 0x8)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldCategory
struct FFortAthenaLivingWorldCategory : public FTableRowBase
{
public:
	TSoftObjectPtr<class UDataTable>             EventTable;                                        // 0x8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxCount;                                          // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x34(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 RequirePlaylistTags;                               // 0x38(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0xC0 (0xC8 - 0x8)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEvent
struct FFortAthenaLivingWorldEvent : public FTableRowBase
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEventData> EventData;                                         // 0x8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        IsEnabled;                                         // 0x30(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxCount;                                          // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxSpawnedCount;                                   // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Weight;                                            // 0x70(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                MinRespawnTime;                                    // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxRespawnTime;                                    // 0x88(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOnlyInSafeZone;                                   // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAthenaGamePhaseStep              ActivationGamePhaseStep;                           // 0x99(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16C8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ActivationSafeZoneIndex;                           // 0x9C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ActivationMinDelay;                                // 0xA0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ActivationMaxDelay;                                // 0xA4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 RequirePlaylistTags;                               // 0xA8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
struct FFortAthenaLivingWorldEventDataActorSpawnDescription
{
public:
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortAthenaAISpawnerData> SpawnerData;                                       // 0x28(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     SpawnerDataTagQuery;                               // 0x50(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bUseProviderTagOverrides;                          // 0x98(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     ProviderFiltersTagQueryOverride;                   // 0xA0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
struct FFortAthenaLivingWorldPointProviderFilterRules
{
public:
	uint8                                        Pad_16CB[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


