#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0xB8 - 0x30)
// Class LagerRuntime.FortAthenaLivingWorldConfigData
class UFortAthenaLivingWorldConfigData : public UDataAsset
{
public:
	TSoftObjectPtr<class UDataTable>             CategoryTable;                                     // 0x30(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxActorCount;                                     // 0x58(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MaxEventSpawnPerTick;                              // 0x78(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        MinimumEventGenerationInterval;                    // 0x98(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldConfigData* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class LagerRuntime.FortAthenaLivingWorldEventData
class UFortAthenaLivingWorldEventData : public UDataAsset
{
public:
	int32                                        TimeOfDayFilters;                                  // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WaterLevelIndexMin;                                // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WaterLevelIndexMax;                                // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     ProviderFiltersTagQuery;                           // 0x40(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions;                                 // 0x88(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldEventData* GetDefaultObj();

};

// 0x300 (0x3B0 - 0xB0)
// Class LagerRuntime.FortAthenaLivingWorldManager
class UFortAthenaLivingWorldManager : public UGameStateComponent
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldConfigData> LagerConfig;                                       // 0xB0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        LagerEnabled;                                      // 0xD8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        PointProviders;                                    // 0xF8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           SpecialActorMinimapIconBrush;                      // 0x108(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector2D                             SpecialActorMinimapIconScale;                      // 0x190(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           SpecialActorCompassIconBrush;                      // 0x198(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector2D                             SpecialActorCompassIconScale;                      // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaAISpawnerData>> LoadedSpawnerDataClass;                            // 0x228(0x10)(ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                  CachedGameState;                                   // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16B4[0xF8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        RuntimePointProviderList;                          // 0x338(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSet<class AActor*>                          RuntimePointProviderOwners;                        // 0x348(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16B5[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAthenaLivingWorldManager* GetDefaultObj();

	void OnSpawnedActorDestroy(class AActor* DestroyedActor);
	void OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider);
	void LivingWorldManagerToggleVerboseLogging();
	void LivingWorldManagerToggleGenerateEvents();
	void LivingWorldManagerToggleActorMinimap();
	void LivingWorldManagerRegisterPointProvider(class AActor* PointProvider);
	void LivingWorldManagerProviderDebugActor(int32 ProviderIndex);
	void LivingWorldManagerGenerateEvents();
	void LivingWorldManagerFlush();
};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
class IFortAthenaLivingWorldPointProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortAthenaLivingWorldPointProviderInterface* GetDefaultObj();

	void OnSpawnedActorFailed();
	void OnSpawnedActor(class AActor* SpawnedActor);
	void OnEventRequested();
	bool IsEnabled(struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter);
	bool GetValidLocation(struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter, struct FVector* OutPosition, struct FRotator* OutRotation);
	void GetFiltersTags(struct FGameplayTagContainer* FilterTags);
};

// 0x108 (0x360 - 0x258)
// Class LagerRuntime.FortAthenaLivingWorldVolume
class AFortAthenaLivingWorldVolume : public AVolume
{
public:
	uint8                                        Pad_16C2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x260(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagQuery                     DeactivationTagsQuery;                             // 0x280(0x48)(Edit, NativeAccessSpecifierPrivate)
	float                                        DeactivationTagsRange;                             // 0x2C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQuery*                             EnvironmentQuery;                                  // 0x2D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        WaterLevelIndexMin;                                // 0x2D8(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                        WaterLevelIndexMax;                                // 0x2F8(0x20)(Edit, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                  CachedGameState;                                   // 0x318(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16C4[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaLivingWorldVolume* GetDefaultObj();

	void OnPointProviderRegistered(class AActor* PointProvider);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x40 (0x260 - 0x220)
// Class LagerRuntime.FortAthenaPatrolPathPointProvider
class AFortAthenaPatrolPathPointProvider : public AActor
{
public:
	uint8                                        Pad_16C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 FiltersTags;                                       // 0x228(0x20)(Edit, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AFortAthenaPatrolPath>  PatrolPathWeakPtr;                                 // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                  CachedGameState;                                   // 0x250(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16C6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaPatrolPathPointProvider* GetDefaultObj();

	void OnSpawnedActorDestroyed(class AActor* DestroyedActor);
	void OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
};

// 0x0 (0x28 - 0x28)
// Class LagerRuntime.FortCheatManager_LivingWorldManager
class UFortCheatManager_LivingWorldManager : public UChildCheatManager
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_LivingWorldManager* GetDefaultObj();

	void LivingWorldManagerSpawn(const class FString& EventDataName);
};

}


