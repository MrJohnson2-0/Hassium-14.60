#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCE0 (0x1060 - 0x380)
// Class NitrogenRuntime.FortAthenaMutator_Nitrogen
class AFortAthenaMutator_Nitrogen : public AFortAthenaMutator_GameModeBase
{
public:
	uint8                                        Pad_159A[0x88];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnFareEventWidgetAvailable;                        // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PlayerSpecialActorTag;                             // 0x418(0x8)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PassengerSpecialActorTag;                          // 0x420(0x8)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VehicleSpecialActorTag;                            // 0x428(0x8)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNitrogenPOICombinationMap>    NitrogenPOICombinationList;                        // 0x430(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 MatchStartVehicleCleanupTags;                      // 0x440(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MatchNearEndScoreRatio;                            // 0x460(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UNitrogenPlayerComponent>  NitrogenPlayerComponentClass;                      // 0x480(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNitrogenPlayerGameplayAbilityOption> PlayerGameplayAbilityOptionList;                   // 0x488(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNitrogenPickupItemToDropOnDeath> PickupItemsToDropOnDeath;                          // 0x498(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 VehicleInteractionAbilityTags;                     // 0x4A8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 DisallowedDamageTagsInSameVehicle;                 // 0x4C8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bAllowRedeployGliders;                             // 0x4E8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StormShieldRadiusCalculationMultiplier;            // 0x508(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        StormShieldRadiusOffset;                           // 0x528(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, struct FVector>    OverridePOILocationsByTagMap;                      // 0x548(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FPrimaryAssetId                       NitrogenVehicleAssetId;                            // 0x598(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        VehicleSpawnZOffset;                               // 0x5A8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class ANavArrow>                 NavArrowClass;                                     // 0x5C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumOfExtraVehiclesToMaintain;                      // 0x5D0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           ExplosionDamageMultiplierGE;                       // 0x5F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortSquadStartSearchParamData        SquadStartSearchParam;                             // 0x5F8(0xA0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RemoveLoadingScreenFailsafeTimerDuration;          // 0x698(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFortSquadStartSearchParamData        RespawnPointSearchParam;                           // 0x6B8(0xA0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RespawnPointCooldownDuration;                      // 0x758(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               VehicleOverlapCheckBoxExtent;                      // 0x778(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MinTeleportHeightAboveGround;                      // 0x788(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  TeleportingPlayersText;                            // 0x7A8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class ANitrogenFare>             NitrogenFareClass;                                 // 0x7C0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ANitrogenTraversePoint>    PickUpTraversePointClass;                          // 0x7C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ANitrogenTraversePoint>    DropOffTraversePointClass;                         // 0x7D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bAllowSharedDropOffs;                              // 0x7D8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinimumDistanceBetweenPickupPoints;                // 0x7F8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bUseFarePortraitTextures;                          // 0x818(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumOfTopTeamsToShowOnMap;                          // 0x838(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNitrogenMapPlacementIcon>     PlacementBasedMapIcons;                            // 0x858(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNitrogenMapIcon                      PickUpPointMapIcon;                                // 0x868(0xA8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FNitrogenMapIcon                      DropOffPointMapIcon;                               // 0x910(0xA8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FNitrogenMapIcon                      VehicleMapIcon;                                    // 0x9B8(0xA8)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumOfFaresToShowOnCompass;                         // 0xA60(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumOfVehiclesToShowOnCompass;                      // 0xA80(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFortAthenaCompassIcon                FareCompassIcon;                                   // 0xAA0(0xA0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFortAthenaCompassIcon                DropOffPointCompassIcon;                           // 0xB40(0xA0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FFortAthenaCompassIcon                VehicleCompassIcon;                                // 0xBE0(0xA0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AActor>                    DropOffWidgetActorClass;                           // 0xC80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AActor>                    NearbyVehicleWidgetActorClass;                     // 0xC88(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortSquadStartSearchParamData        PickupCashbagSearchParam;                          // 0xC90(0xA0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        CashbagSelectedPercentage;                         // 0xD30(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<struct FGameplayTag, struct FNitrogenPickupCashbagData> CashbagDataMap;                                    // 0xD50(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PassengerDespawnDelay;                             // 0xDA0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PlayerSpecialActorRepInterval;                     // 0xDC0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTag                          NitrogenVehicleTag;                                // 0xDE0(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENitrogenGamePhase                NitrogenGamePhase;                                 // 0xDEC(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15AF[0x13];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNitrogenTeamData>             SortedTeamDataByScore;                             // 0xE00(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AFortPlayerStateAthena*>        CacheLeadingReplicatedPlayerStates;                // 0xE10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                NitrogenVehicleClass;                              // 0xE20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNitrogenVehicle>              NitrogenVehiclesList;                              // 0xE28(0x10)(Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AFortSquadStart*>               NitrogenSquadStarts;                               // 0xE38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15B1[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;                                   // 0xE70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_GameStartCountdown* GameStartCountdownMutator;                         // 0xE78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_InventoryOverride*  InventoryMutator;                                  // 0xE80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15B2[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, struct FNitrogenPOITraversePoints> UnassignedPickupPointsPerPOIMap;                   // 0xF20(0x50)(NativeAccessSpecifierPrivate)
	TMap<struct FGameplayTag, struct FNitrogenPOITraversePoints> UnassignedPOIBasedDropoffPointsMap;                // 0xF70(0x50)(NativeAccessSpecifierPrivate)
	TArray<class ANitrogenTraversePoint*>        UnassignedDistanceBasedDropoffPointsArray;         // 0xFC0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15B3[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ANavArrow*                             ClientNavArrow;                                    // 0xFE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15B5[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ANitrogenFare*>                 CurrentFares;                                      // 0x1000(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ANitrogenFare*>                 CurrentActiveFares;                                // 0x1010(0x10)(Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15B6[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_Nitrogen* GetDefaultObj();

	void OnRep_SortedTeamDataByScore();
	void OnRep_NitrogenGamePhase();
	void OnRep_CurrentFares();
	void OnNitrogenVehiclePlayerExit(class AFortPlayerControllerAthena* PlayerController, class AFortAthenaVehicle* Vehicle);
	void OnNitrogenVehicleDriverChanged(class AFortPlayerControllerAthena* NewController, class AFortAthenaVehicle* Vehicle);
	void OnNitrogenVehicleDestroyed(class AActor* VehicleDestroyed);
	void HandlePlayerTeleportComplete(class AFortPlayerStateAthena* PlayerState);
	void HandleGroupTeleportComplete();
	void HandleGameStartCountdownEnd();
};

// 0x0 (0x38 - 0x38)
// Class NitrogenRuntime.FortCheatManager_Nitrogen
class UFortCheatManager_Nitrogen : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_Nitrogen* GetDefaultObj();

	void TeleportToSquadStartAtIndex(int32 Index, struct FFortSquadStartSearchParamData& SearchParam, class FString* TeleportReasonString);
	void TeleportToNitrogenSpawnActor(int32 Index);
	void TeleportToNitrogenRespawnActor(int32 Index);
	void SpawnNitrogenFare(float PickUpDistance, float DropOffDistance);
	void SetNitrogenScore(int32 Score, uint8 ScoreReason);
	void SetNitrogenNavDestinationToCurrentLocation();
	void CompleteNitrogenFare();
};

// 0x910 (0xB30 - 0x220)
// Class NitrogenRuntime.NitrogenFare
class ANitrogenFare : public AActor
{
public:
	class AFortPlayerPawnAthena*                 Passenger;                                         // 0x220(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANitrogenTraversePoint*                PickUpPoint;                                       // 0x228(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANitrogenTraversePoint*                DropOffPoint;                                      // 0x230(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DropOffPointLocation;                              // 0x238(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNitrogenBonusStats                   BonusStats;                                        // 0x248(0x738)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FastDeliveryKmph;                                  // 0x980(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E5[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortAthenaAISpawnerData>  PassengerSpawnerDataClass;                         // 0x9D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNitrogenPassengerPawnComponent> NitrogenPassengerPawnComponentClass;               // 0x9D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PassengerSeatIndex;                                // 0x9E0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        PassengerSpawnRetryRate;                           // 0x9E8(0x20)(Edit, DisableEditOnInstance, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	int32                                        RewardValue;                                       // 0xA08(0x4)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FastDeliveryTime;                                  // 0xA0C(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FastDeliveryBonusPoints;                           // 0xA10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1604[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        FastDeliveryMargin;                                // 0xA18(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int32                                        DistanceThresholdIndex;                            // 0xA38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1606[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        PickupTime;                                        // 0xA40(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DropoffTime;                                       // 0xA60(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class EFareGenerationMethod             FareGenerationMethod;                              // 0xA80(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1607[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        bDisablePassengerCollision;                        // 0xA88(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AFortPlayerStateAthena*                AssignedPlayerState;                               // 0xAA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortPlayerStateAthena*                PreviousPlayerState;                               // 0xAB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPassengerPickedUp;                                // 0xAB8(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1609[0x1F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AFortPlayerStateAthena*, struct FTimerHandle> PickupTimerHandles;                                // 0xAD8(0x50)(NativeAccessSpecifierPrivate)
	struct FTimerHandle                          DropOffTimerHandle;                                // 0xB28(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ANitrogenFare* GetDefaultObj();

	void PickUpPointOverlapped(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState);
	void PickUpPointExited(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState);
	void OnVehicleEndPlay(class AActor* DestroyedVehicle, enum class EEndPlayReason EndPlayReason);
	void OnVehicleDriverChanged(class AFortPlayerControllerAthena* NewDriver, class AFortAthenaVehicle* Vehicle);
	void OnVehicleDestroyed(class AFortDagwoodVehicle* DestroyedVehicle);
	void OnRep_PassengerPickedUp();
	int32 GetRewardValue();
	void DropOffPointOverlapped(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState);
	void DropOffPointExited(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState);
};

// 0x28 (0x248 - 0x220)
// Class NitrogenRuntime.NitrogenFareValueIndicator
class ANitrogenFareValueIndicator : public AActor
{
public:
	class UInstancedStaticMeshComponent*         InstancedMeshComp;                                 // 0x220(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNitrogenFareValueMeshTransformInfo> FareValueMeshTransformInfo;                        // 0x228(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        IndicatorValue;                                    // 0x238(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldActorRotateOnTickToFacePlayerCamera;        // 0x239(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_160D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  LocalPlayerCameraManager;                          // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ANitrogenFareValueIndicator* GetDefaultObj();

	void OnRep_IndicatorValue();
	void OnFareIndicatorValueChanged(uint8 NewIndicatorValue);
};

// 0x338 (0x560 - 0x228)
// Class NitrogenRuntime.NitrogenNavArrow
class ANitrogenNavArrow : public ANavArrow
{
public:
	struct FVector                               LocationRelativeToOwner;                           // 0x228(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFollowCamera;                                     // 0x234(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1616[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LocationRelativeToCamera;                          // 0x238(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1618[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        PitchRelativeToCamera;                             // 0x248(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ArrowSizeRelativeToScreen;                         // 0x268(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ArrowPlacementHeightRelativeToScreen;              // 0x288(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               LocationRelativeToDestination;                     // 0x2A8(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bThrowingEnabled;                                  // 0x2B4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_161A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        ApproachRadius;                                    // 0x2B8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DepartRadius;                                      // 0x2D8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCurveFloat*                           ThrowTranslationCurve;                             // 0x2F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           ThrowRotationCurve;                                // 0x300(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PrimaryColorParameterName;                         // 0x308(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveLinearColor*                     ArrowColorCurve;                                   // 0x310(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ColorFadeOuterRadius;                              // 0x318(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ColorFadeInnerRadius;                              // 0x31C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PulseParameterName;                                // 0x320(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           PulseParameterCurve;                               // 0x328(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           PulseSpeedCurve;                                   // 0x330(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PulseAccelOuterRadius;                             // 0x338(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PulseAccelInnerRadius;                             // 0x33C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           ScaleCurve;                                        // 0x340(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  ArrowComponent;                                    // 0x348(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_161F[0x208];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              ArrowDynamicMaterial;                              // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ANitrogenNavArrow* GetDefaultObj();

	void UpdatePulseSpeedForDistance();
	void UpdatePrimaryColorForDistance();
	void ThrowArrowToDestination();
	void RecallArrowToOwner();
};

// 0xE8 (0x198 - 0xB0)
// Class NitrogenRuntime.NitrogenPassengerPawnComponent
class UNitrogenPassengerPawnComponent : public UFortPawnComponent
{
public:
	TMap<enum class ENitrogenPassengerState, class UAnimationAsset*> MalePassengerStateAnimationMap;                    // 0xB0(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<enum class ENitrogenPassengerState, class UAnimationAsset*> FemalePassengerStateAnimationMap;                  // 0x100(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bDestroyFareValueIndicatorOnDisable;               // 0x150(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class ANitrogenFareValueIndicator> FareValueIndicatorClass;                           // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               FareValueIndicatorOffset;                          // 0x178(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1626[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANitrogenFareValueIndicator*           FareValueIndicator;                                // 0x188(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENitrogenPassengerState           PassengerState;                                    // 0x190(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1627[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNitrogenPassengerPawnComponent* GetDefaultObj();

	void OnRep_PassengerState();
	void OnRep_FareValueIndicator();
	void ClientPlayDeathEffects();
	void ClientHandleFinishedCharacterCustomization(class AFortPlayerPawn* PlayerPawn);
};

// 0x18 (0x660 - 0x648)
// Class NitrogenRuntime.NitrogenPickup
class ANitrogenPickup : public AFortGameModePickup
{
public:
	enum class ENitrogenScoreReason              ScoreReason;                                       // 0x648(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1631[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USphereComponent*                      AutoPickupTouchComponent;                          // 0x650(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENitrogenPickupType               NitrogenPickupType;                                // 0x658(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoAllowInteraction;                             // 0x659(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        TeamHidden;                                        // 0x65A(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1632[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANitrogenPickup* GetDefaultObj();

	void OnRep_TeamHidden();
	void OnNitrogenPickupOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x28 (0x248 - 0x220)
// Class NitrogenRuntime.NitrogenFareDataRepActor
class ANitrogenFareDataRepActor : public AActor
{
public:
	struct FNitrogenFareRepData                  FareRepData;                                       // 0x220(0x18)(Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1636[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANitrogenFareDataRepActor* GetDefaultObj();

	void OnRep_FareRepData();
};

// 0x250 (0x300 - 0xB0)
// Class NitrogenRuntime.NitrogenPlayerComponent
class UNitrogenPlayerComponent : public UFortControllerComponent
{
public:
	class AActor*                                CurrentFareWidgetActor;                            // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnClientBeginFare;                                 // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnClientEndFare;                                   // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1642[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AFortAthenaMutator_Nitrogen> CachedMutator;                                     // 0x118(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NearbyVehicleUpdateRate;                           // 0x120(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinimumVehicleAirTimeBeforeStatTracking;           // 0x140(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class USoundMix*                             LoadingScreenSoundSuppressionSoundMix;             // 0x160(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bAllowHighlightNearbyLeadingPlayers;               // 0x168(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bHighlightLeadingPlayers_UseStencilHighlight;      // 0x188(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HighlightLeadingPlayers_UpdateRate;                // 0x1A8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HighlightLeadingPlayers_MinTeamScore;              // 0x1C8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HighlightLeadingPlayers_MaxDistance;               // 0x1E8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HighlightLeadingPlayers_HighlightDuration;         // 0x208(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bHighlightLeadingPlayers_IndicatorClampToScreen;   // 0x228(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        HighlightLeadingPlayers_IndicatorZOffset;          // 0x248(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	enum class EIndicatorStateImage              OverrideIndicatorImage;                            // 0x268(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1644[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  HighlightLeadingPlayers_StencilName;               // 0x26C(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1645[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerPawnAthena*>         CurrentlyHighlightedLeadingPlayers;                // 0x280(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNitrogenFareInteractionData          FareInteractionData;                               // 0x290(0x18)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1646[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABuildingActor*>                DestroyedBuildingActors;                           // 0x2B0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1647[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                NearestVehicleWidget;                              // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortSquadStart*                       CurrentRespawnSquadStart;                          // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1648[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ANitrogenFare*                         PreviousFare;                                      // 0x2F0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ANitrogenFareDataRepActor*             FareDataRepActor;                                  // 0x2F8(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNitrogenPlayerComponent* GetDefaultObj();

	void OnRep_FareInteractionData();
	void OnRep_FareDataRepActor();
	void OnRep_CachedMutator();
	void OnNitrogenGamePhaseChanged(enum class ENitrogenGamePhase NewGamePhase);
	void OnGameStarted();
	void OnExitVehicle();
	void OnEnterVehiclePassenger();
	void OnEnterVehicleDriver();
	void HandleVehicleDestroyedBuildingActor(class AFortAthenaVehicle* Vehicle, class ABuildingActor* BuildingActor);
	float GetDistanceFromDropOff();
	float GetDistanceFromClosestPassenger();
	void ClientHandleLoadingScreenStateChanged(class AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, class FText HUDReasonText);
};

// 0x50 (0x950 - 0x900)
// Class NitrogenRuntime.NitrogenTraversePoint
class ANitrogenTraversePoint : public AAthenaLTMTraversePoint
{
public:
	enum class ENitrogenTraversePointMode        CurrentNitrogenTraversePointMode;                  // 0x900(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_164F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneRoot;                                         // 0x908(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              FareRadiusParticleSystemComponent;                 // 0x910(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCapsuleComponent*                     TriggerCapsule;                                    // 0x918(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HideActorDelay;                                    // 0x920(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1651[0x2C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ANitrogenTraversePoint* GetDefaultObj();

	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnClientVisibiltyUpdated(bool bNewHidden);
	void OnClientInteracted(bool bOwnedByClient);
};

// 0x1A0 (0x250 - 0xB0)
// Class NitrogenRuntime.NitrogenVehicleComponent
class UNitrogenVehicleComponent : public UActorComponent
{
public:
	class UTimelineComponent*                    TimelineBoostFX;                                   // 0xB0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           JetFlamesHeightCurve;                              // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           JetSparksCountsCurve;                              // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimelineBoostFXLength;                             // 0xC8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1657[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        BoostVFXSystem;                                    // 0xD0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BoostAttachSocketName;                             // 0xD8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRotator                              BoostAttachRotation;                               // 0xE0(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1658[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNitrogenVehicleBoostFXVariable       JetFlameRandomMin;                                 // 0xF0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FNitrogenVehicleBoostFXVariable       JetFlameLocationOffsetZ;                           // 0x108(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FNitrogenVehicleBoostFXVariable       JetFlameLocationOffsetX;                           // 0x120(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FString                                JetFlameHeightParamName;                           // 0x138(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetFlameMinHeight;                                 // 0x148(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        JetFlameMaxHeight;                                 // 0x14C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                JetSparksCountsParamName;                          // 0x150(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraComponent*                     SpawnedBoostParticleSystem;                        // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinimumBumpBonusStatVelocityKmh;                   // 0x168(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        CooldownBetweenBumps;                              // 0x188(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_165A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        bCleanupUnreachableVehicleInWater;                 // 0x190(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        VehicleWaterDepthCheckTickDelay;                   // 0x1B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_165B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        VehicleWaterDepthForCleanup;                       // 0x1B8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bCleanupUnreachableVehiclesSilently;               // 0x1D8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        VehicleInWaterCleanupDelay;                        // 0x1F8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AFortAthenaVehicle*                    OwningVehicle;                                     // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_165C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortWaterBodyActor*>           WaterBodies;                                       // 0x228(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_165D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNitrogenVehicleComponent* GetDefaultObj();

	void TimelineBoostFXUpdate_JetSparksCounts(float Value);
	void TimelineBoostFXUpdate_JetFlamesHeight(float Value);
	void SetBoostFXActive(bool bActive);
	bool IsVehicleUnderCleanupWaterDepth();
	void HandleVehicleOnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
};

}


