#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xC8 - 0xB0)
// Class ArgonRuntime.ArgonPlayerComponent
class UArgonPlayerComponent : public UFortControllerComponent
{
public:
	float                                        EntireSquadDiedServerTimeForRespawn;               // 0xB0(0x4)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotatePawnToCamera;                               // 0xB4(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_0[0x3];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMontageItemDefinitionBase*        CachedFinishedRaceEmote;                           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_Argon*              ArgonMutator;                                      // 0xC0(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UArgonPlayerComponent* GetDefaultObj();

	void PlayFinishedRaceEmote();
	void OnRep_RotatePawnToCamera();
	void OnRep_EntireSquadDiedServerTimeForRespawn();
	void OnRep_ArgonMutator();
	void OnRacePhaseChanged(enum class EArgonRacePhase NewRacePhase);
};

// 0x28 (0x248 - 0x220)
// Class ArgonRuntime.ArgonStartingPlatform
class AArgonStartingPlatform : public AActor
{
public:
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x220(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsEnabled;                                        // 0x240(0x1)(Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1[0x7];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AArgonStartingPlatform* GetDefaultObj();

	void OnRep_IsEnabled();
};

// 0x20 (0xD0 - 0xB0)
// Class ArgonRuntime.ArgonTicketComponent
class UArgonTicketComponent : public UActorComponent
{
public:
	class AFortAthenaMutator_Argon*              ArgonMutator;                                      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIsNearToPlayerChanged;                           // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2[0x8];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UArgonTicketComponent* GetDefaultObj();

	bool IsNearToPlayer();
};

// 0x10 (0x910 - 0x900)
// Class ArgonRuntime.ArgonTraversePoint
class AArgonTraversePoint : public AAthenaLTMTraversePoint
{
public:
	class AFortPlayerMarkerBase*                 MarkerActor;                                       // 0x900(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AFortPlayerMarkerBase>     MarkerClass;                                       // 0x908(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AArgonTraversePoint* GetDefaultObj();

	void OnNewState_Hidden_Server_BP();
	void OnNewState_Active_Server_BP();
	void ClientSpawnMarkerActor(struct FTransform& Transform);
};

// 0x18 (0x238 - 0x220)
// Class ArgonRuntime.ArgonVehicleSpawner
class AArgonVehicleSpawner : public AActor
{
public:
	TArray<struct FPrimaryAssetId>               OverrideVehicleAssetIds;                           // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpawnActorCollisionHandlingMethod SpawnVehicleCollisionHandlingMethod;               // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3[0x7];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AArgonVehicleSpawner* GetDefaultObj();

};

// 0xE78 (0x11F8 - 0x380)
// Class ArgonRuntime.FortAthenaMutator_Argon
class AFortAthenaMutator_Argon : public AFortAthenaMutator_GameModeBase
{
public:
	uint8                                        Pad_1B[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        MinInitialVehicleFuelPercent;                      // 0x388(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxInitialVehicleFuelPercent;                      // 0x3A8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnArgonPlayerFinished;                             // 0x3C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnArgonPlayerReachedEndWithoutEnoughTickets;       // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnArgonRacePhaseChanged;                           // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnArgonEndTraversePointSet;                        // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTeamTicketCountChanged;                          // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSupplyDropClusterSpawned;                        // 0x430(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_20[0x20];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FArgonRoute>                   Routes;                                            // 0x460(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortSquadStartSearchParamData        StartPOISquadStartSearchParam;                     // 0x470(0xA0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bUseOverridingSpawnTransforms;                     // 0x510(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTransform>                    OverridingSpawnTransforms;                         // 0x530(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  TeleportingPlayersText;                            // 0x540(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PreCountdownTextDuration;                          // 0x558(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FArgonVehicleOption>           VehicleOptionsList;                                // 0x578(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EndRaceAfterNumFinishers;                          // 0x588(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           EndLocationCompassBrush;                           // 0x5A8(0x88)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           EndLocationLockedCompassBrush;                     // 0x630(0x88)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        EndLocationCompassBrush_YOffset;                   // 0x6B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndLocationCompassBrush_MinScale;                  // 0x6BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndLocationCompassBrush_MaxScale;                  // 0x6C0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndLocationCompassBrush_DistanceForMinScale;       // 0x6C4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndLocationCompassBrush_DistanceForMaxScale;       // 0x6C8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           EndLocationMapBrush;                               // 0x6D0(0x88)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           EndLocationLockedMapBrush;                         // 0x758(0x88)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             EndLocationMapBrushScale;                          // 0x7E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          RacePositionStatGameplayTag;                       // 0x7E8(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortWorldItemDefinition*              TicketItemDefinition;                              // 0x7F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumTicketsNeededToCompleteRace;                    // 0x7F8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int32                                        NumEnemiesTrackedOnProgressBarUI;                  // 0x818(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumSquadmatesTrackedOnProgressBarUI;               // 0x81C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EntireSquadDeadRespawnViewPitch;                   // 0x820(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        EntireSquadDeadRespawnTime;                        // 0x840(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class AActor>                    EntireSquadDeadRespawnActorClass;                  // 0x860(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        RespawnOffsetDistance;                             // 0x868(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinRespawnHeightAboveGround;                       // 0x888(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FArgonSupplyDropPointData             SupplyDropPointData;                               // 0x8A8(0x228)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bAreDropsAlwaysTriggeredByFirstPlacePlayer;        // 0xAD0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCurveFloat*                           SupplyDropPercentCurve;                            // 0xAF0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxConsecutiveDropsOnSameSideOfPath;               // 0xAF8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinPathDropOffset;                                 // 0xB18(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxPathDropOffset;                                 // 0xB38(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinDropTriggerSpacing;                             // 0xB58(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxDropTriggerSpacing;                             // 0xB78(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinDropDistFromRaceEnd;                            // 0xB98(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FirstDropTriggerDist;                              // 0xBB8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumRepopulationsPerRacePathDrop;                   // 0xBD8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DelayBeforeRepopulatingRacePathDrops;              // 0xBF8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumDropsAroundEnd;                                 // 0xC18(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DelayBetweenEndPointDrops;                         // 0xC38(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinEndDropRadius;                                  // 0xC58(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxEndDropRadius;                                  // 0xC78(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumRepopulationsPerEndPointDrop;                   // 0xC98(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        DelayBeforeRepopulatingEndPointDrops;              // 0xCB8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector                               StartingPoint;                                     // 0xCD8(0xC)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27[0x2C];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMontageItemDefinitionBase*        StartingLineEmote;                                 // 0xD10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxStartingLineEmoteDelay;                         // 0xD18(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MinStartingLineEmotePlayRate;                      // 0xD38(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxStartingLineEmotePlayRate;                      // 0xD58(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        bPlayStartingLineEmoteBeforeCountdown;             // 0xD78(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UFortMontageItemDefinitionBase*        FinishedRaceEmote;                                 // 0xD98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        FinishedRaceEmoteTime;                             // 0xDA0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UNiagaraSystem*                        SquadmateVictoryVFXTemplate;                       // 0xDC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                       FinishedPlayerDespawnVFXTemplate;                  // 0xDC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        MaxFloorCheckDist;                                 // 0xDD0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumNearbyTicketsToShowOnCompass;                   // 0xDF0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        NumNearbyTicketsToShowInWorld;                     // 0xE10(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           TicketCompassBrush;                                // 0xE30(0x88)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        TicketCompassBrush_YOffset;                        // 0xEB8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TicketCompassBrush_Scale;                          // 0xEBC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                        SortClientTicketComponentsTime;                    // 0xEC0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           AcquiredAllTicketsMapBrush;                        // 0xEE0(0x88)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TicketSpecialActorCategories;                      // 0xF68(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class FName>               AnalyticsAttributeNameToStatNameMap;               // 0xF88(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortGameplayAbility_JumpBoostPack> JumpBoostPackAbilityClass;                         // 0xFD8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FArgonRaceStateInfo                   CurrentRaceState;                                  // 0xFE0(0x18)(Net, RepNotify, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F[0x28];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortSquadStart*>               SquadStarts;                                       // 0x1020(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FArgonPlayerInfo>              RacingPlayersByPlace;                              // 0x1030(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FArgonTeamProgressBarInfo>     LeaderProgressInfos;                               // 0x1040(0x10)(Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FArgonTeamTicketCount>         TeamTicketCounts;                                  // 0x1050(0x10)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_30[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AAthenaHoldingArea*                    SquadStartHoldingArea;                             // 0x1070(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AArgonTraversePoint*                   EndTraversePoint;                                  // 0x1078(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;                                   // 0x1080(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_GameStartCountdown* GameStartCountdownMutator;                         // 0x1088(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_RespawnAndSpectateSelect* RespawnAndSpectateSelectMutator;                   // 0x1090(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<uint8, class AActor*>                   EntireSquadDeadRespawnActors;                      // 0x1098(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_31[0x11];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        NumSupplyDropClustersSpawned;                      // 0x10F9(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_32[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RaceStartTime;                                     // 0x10FC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AFortPlayerPawn>> FinishedPlayerPawns;                               // 0x1100(0x10)(Net, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33[0xE8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortAthenaMutator_Argon* GetDefaultObj();

	void SortClientTicketComponents();
	void OnRep_TeamTicketCounts();
	void OnRep_RacingPlayersByPlace();
	void OnRep_NumSupplyDropClustersSpawned();
	void OnRep_EndTraversePoint();
	void OnRep_CurrentRaceState();
	void OnEndTraversePointTouched(class AAthenaTraversePoint* PointActor, class AFortPlayerStateAthena* TouchingPlayer);
	bool IsUsingRespawnAndSpectateSelectMutator();
	bool HasTeamFinishedRace(uint8 Team);
	bool HasPlayerFinishedRace(class AFortPlayerStateAthena* PlayerState);
	void HandlePlayerTeleportComplete(class AFortPlayerStateAthena* PlayerState);
	void HandleGroupTeleportComplete();
	void HandleGameStartCountdownEnd();
	class UFortWorldItemDefinition* GetTicketItemDefinition();
	float GetRandomStartingLineEmotePlayRate();
	float GetRaceTimeElapsed();
	void GetProgressBarUIInfo(float* OutMyPercent, TArray<float>* OutSquadmatePcts, uint8* OutNumSquadTickets, TArray<struct FArgonTeamProgressBarInfo>* OutEnemyProgressInfos);
	int32 GetPlayerTeamPlacement(class AFortPlayerStateAthena* Player);
	int32 GetNumberOfTicketsTeamHasAcquired(uint8 Team);
	int32 GetNumberOfTicketsNeededToFinishRace();
	class AArgonTraversePoint* GetEndTraversePoint();
	bool DidPlayerCrossFinishLine(class AFortPlayerStateAthena* PlayerState);
};

// 0x0 (0x38 - 0x38)
// Class ArgonRuntime.FortCheatManager_Argon
class UFortCheatManager_Argon : public UFortCheatManager_Coupled
{
public:

	static class UClass* StaticClass();
	static class UFortCheatManager_Argon* GetDefaultObj();

	void ArgonTeleportToEndPoint();
};

}


