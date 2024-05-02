#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENitrogenGamePhase : uint8
{
	None                           = 0,
	TeleportingPlayers             = 1,
	Active                         = 2,
	Finish                         = 3,
	MAX                            = 4,
};

enum class ENitrogenScoreReason : uint8
{
	None                           = 0,
	WorldPickup                    = 1,
	EnemyDeathPickup               = 2,
	FareReward_Base                = 3,
	FareReward_Bonus_FastDelivery  = 4,
	FareReward_Bonus_Bulldozer     = 5,
	FareReward_Bonus_StuntDriving  = 6,
	FareReward_Bonus_SafeDriver    = 7,
	FareReward_Bonus_BumperCars    = 8,
	FareReward_Bonus_OffRoad       = 9,
	FareReward_Bonus_SpeedDemon    = 10,
	ENitrogenScoreReason_MAX       = 11,
};

enum class EFareGenerationMethod : uint8
{
	Distance                       = 0,
	POI                            = 1,
	MAX                            = 2,
};

enum class ENitrogenBonusCondition : uint8
{
	MustMeetGoal                   = 0,
	MustNotExceedThreshold         = 1,
	ENitrogenBonusCondition_MAX    = 2,
};

enum class ENitrogenPassengerState : uint8
{
	None                           = 0,
	HailingCab                     = 1,
	VehicleSeated                  = 2,
	DroppedOff                     = 3,
	ENitrogenPassengerState_MAX    = 4,
};

enum class ENitrogenPickupType : uint8
{
	None                           = 0,
	Cashbag                        = 1,
	MAX                            = 2,
};

enum class ENitrogenTraversePointMode : uint8
{
	Pickup                         = 0,
	DropOff                        = 1,
	ENitrogenTraversePointMode_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xA8 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenMapIcon
struct FNitrogenMapIcon
{
public:
	struct FSlateBrush                           MapIcon;                                           // 0x0(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MapIconScale;                                      // 0x88(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenMapPlacementIcon
struct FNitrogenMapPlacementIcon
{
public:
	struct FNitrogenMapIcon                      PlacementMapIcon;                                  // 0x0(0xA8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FNitrogenMapIcon                      SquadmatePlacementMapIcon;                         // 0xA8(0xA8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinimumTeamScoreToShow;                            // 0x150(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenVehicle
struct FNitrogenVehicle
{
public:
	class AFortAthenaVehicle*                    Vehicle;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerlessStartServerTime;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenPOITraversePoints
struct FNitrogenPOITraversePoints
{
public:
	TArray<class ANitrogenTraversePoint*>        TraversePoints;                                    // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenPickupItemToDropOnDeath
struct FNitrogenPickupItemToDropOnDeath
{
public:
	struct FScalableFloat                        bEnabled;                                          // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UFortWorldItemDefinition*              PickupItemDef;                                     // 0x20(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ANitrogenPickup>           PickupClass;                                       // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TimeBeforeDespawn;                                 // 0x30(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bHidePickupForDyingPlayerTeam;                     // 0x50(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FScalableFloat>                PlacementBasedPickupDropCount;                     // 0x70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        TossDistance;                                      // 0x80(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinTeamScoreRequiredToDrop;                        // 0xA0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenPickupCashbagData
struct FNitrogenPickupCashbagData
{
public:
	enum class EFortRarity                       ItemRarity;                                        // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1662[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        SelectionWeight;                                   // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinValue;                                          // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxValue;                                          // 0x48(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class ANitrogenPickup>           PickupClass;                                       // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortWorldItemDefinition*              PickupItemDef;                                     // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenPOIConnectionData
struct FNitrogenPOIConnectionData
{
public:
	struct FGameplayTag                          POITag;                                            // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        FareValue;                                         // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bEnabled;                                          // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MaxFares;                                          // 0x48(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenFareDistanceValue
struct FNitrogenFareDistanceValue
{
public:
	struct FScalableFloat                        FareValue;                                         // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        MinimumDistance;                                   // 0x20(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        NumFares;                                          // 0x40(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenPOICombinationData
struct FNitrogenPOICombinationData
{
public:
	TArray<struct FNitrogenPOIConnectionData>    POIConnections;                                    // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNitrogenFareDistanceValue>    FareDistanceValues;                                // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenPOICombinationMap
struct FNitrogenPOICombinationMap
{
public:
	struct FScalableFloat                        bEnabled;                                          // 0x0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FNitrogenPOICombinationData> POICombinationMap;                                 // 0x20(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EFareGenerationMethod             FareGenerationMethod;                              // 0x70(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1663[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenTeamData
struct FNitrogenTeamData
{
public:
	uint32                                       UpdateId;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENitrogenScoreReason              ScoreReason;                                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1664[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerState*                          ScoringPlayer;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TeamId;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1665[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TeamPlacement;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamScore;                                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1666[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortTeamInfoAthena*                   TeamInfoAthena;                                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ENitrogenScoreReason, int32> ReasonToScoreMap;                                  // 0x28(0x50)(RepSkip, NativeAccessSpecifierPublic)
	TArray<class AFortPlayerStateAthena*>        TeamPlayerStates;                                  // 0x78(0x10)(ZeroConstructor, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TeamPlayerAccountIds;                              // 0x88(0x10)(ZeroConstructor, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenRespawnData
struct FNitrogenRespawnData
{
public:
	class AFortSquadStart*                       RespawnSquadStart;                                 // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1667[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenSpawnData
struct FNitrogenSpawnData
{
public:
	uint8                                        SquadId;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1668[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AdditionalViewpointLocation;                       // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortSquadStart*                       SpawnSquadStart;                                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenPlayerGameplayAbilityOption
struct FNitrogenPlayerGameplayAbilityOption
{
public:
	TSubclassOf<class UFortGameplayAbility>      GameplayAbility;                                   // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bEnabled;                                          // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenBonusStat
struct FNitrogenBonusStat
{
public:
	struct FScalableFloat                        bEnabled;                                          // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        AwardPoints;                                       // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENitrogenBonusCondition           AwardCondition;                                    // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENitrogenScoreReason              ScoreReason;                                       // 0x25(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1669[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  MustMeetGoal_BonusCompleteDescription;             // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  MustNotExceedThreshold_BonusFailureDescription;    // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortAthenaAISpawnerDataComponent_CosmeticLoadout> CosmeticLoadoutData;                               // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            TipEmojiTexture;                                   // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            FarePortraitTexture;                               // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Goal;                                              // 0xA0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        Threshold;                                         // 0xC0(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class AFortPlayerState*, float>         Values;                                            // 0xE0(0x50)(NativeAccessSpecifierPrivate)
};

// 0x738 (0x738 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenBonusStats
struct FNitrogenBonusStats
{
public:
	struct FNitrogenBonusStat                    VehicleBumpIntoVehicles;                           // 0x0(0x130)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FNitrogenBonusStat                    VehicleBuildingDestruction;                        // 0x130(0x130)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FNitrogenBonusStat                    VehicleDamageTaken;                                // 0x260(0x130)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FNitrogenBonusStat                    VehicleAirTime;                                    // 0x390(0x130)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FNitrogenBonusStat                    VehicleBoostDrivingTime;                           // 0x4C0(0x130)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FNitrogenBonusStat                    VehicleOffRoadTime;                                // 0x5F0(0x130)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_166A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenFareInteractionData
struct FNitrogenFareInteractionData
{
public:
	class ANitrogenFare*                         Fare;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalTime;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentBonusIndex;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDropoff;                                        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenFareValueMeshTransformInfo
struct FNitrogenFareValueMeshTransformInfo
{
public:
	TArray<struct FTransform>                    MeshTransforms;                                    // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenFareRepData
struct FNitrogenFareRepData
{
public:
	class ANitrogenFare*                         CurrentFare;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AwardedPoints;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentBonusIndex;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentBonusValue;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NitrogenRuntime.NitrogenVehicleBoostFXVariable
struct FNitrogenVehicleBoostFXVariable
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


