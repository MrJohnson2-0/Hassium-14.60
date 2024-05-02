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

// 0x10 (0x10 - 0x0)
// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehiclePlayerExit
struct AFortAthenaMutator_Nitrogen_OnNitrogenVehiclePlayerExit_Params
{
public:
	class AFortPlayerControllerAthena*           PlayerController;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortAthenaVehicle*                    Vehicle;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehicleDriverChanged
struct AFortAthenaMutator_Nitrogen_OnNitrogenVehicleDriverChanged_Params
{
public:
	class AFortPlayerControllerAthena*           NewController;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortAthenaVehicle*                    Vehicle;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehicleDestroyed
struct AFortAthenaMutator_Nitrogen_OnNitrogenVehicleDestroyed_Params
{
public:
	class AActor*                                VehicleDestroyed;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandlePlayerTeleportComplete
struct AFortAthenaMutator_Nitrogen_HandlePlayerTeleportComplete_Params
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToSquadStartAtIndex
struct UFortCheatManager_Nitrogen_TeleportToSquadStartAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortSquadStartSearchParamData        SearchParam;                                       // 0x8(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                TeleportReasonString;                              // 0xA8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToNitrogenSpawnActor
struct UFortCheatManager_Nitrogen_TeleportToNitrogenSpawnActor_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToNitrogenRespawnActor
struct UFortCheatManager_Nitrogen_TeleportToNitrogenRespawnActor_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NitrogenRuntime.FortCheatManager_Nitrogen.SpawnNitrogenFare
struct UFortCheatManager_Nitrogen_SpawnNitrogenFare_Params
{
public:
	float                                        PickUpDistance;                                    // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropOffDistance;                                   // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NitrogenRuntime.FortCheatManager_Nitrogen.SetNitrogenScore
struct UFortCheatManager_Nitrogen_SetNitrogenScore_Params
{
public:
	int32                                        Score;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ScoreReason;                                       // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function NitrogenRuntime.NitrogenFare.PickUpPointOverlapped
struct ANitrogenFare_PickUpPointOverlapped_Params
{
public:
	class AAthenaTraversePoint*                  TraversePoint;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NitrogenRuntime.NitrogenFare.PickUpPointExited
struct ANitrogenFare_PickUpPointExited_Params
{
public:
	class AAthenaTraversePoint*                  TraversePoint;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NitrogenRuntime.NitrogenFare.OnVehicleEndPlay
struct ANitrogenFare_OnVehicleEndPlay_Params
{
public:
	class AActor*                                DestroyedVehicle;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function NitrogenRuntime.NitrogenFare.OnVehicleDriverChanged
struct ANitrogenFare_OnVehicleDriverChanged_Params
{
public:
	class AFortPlayerControllerAthena*           NewDriver;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortAthenaVehicle*                    Vehicle;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NitrogenRuntime.NitrogenFare.OnVehicleDestroyed
struct ANitrogenFare_OnVehicleDestroyed_Params
{
public:
	class AFortDagwoodVehicle*                   DestroyedVehicle;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenRuntime.NitrogenFare.GetRewardValue
struct ANitrogenFare_GetRewardValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NitrogenRuntime.NitrogenFare.DropOffPointOverlapped
struct ANitrogenFare_DropOffPointOverlapped_Params
{
public:
	class AAthenaTraversePoint*                  TraversePoint;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NitrogenRuntime.NitrogenFare.DropOffPointExited
struct ANitrogenFare_DropOffPointExited_Params
{
public:
	class AAthenaTraversePoint*                  TraversePoint;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenRuntime.NitrogenFareValueIndicator.OnFareIndicatorValueChanged
struct ANitrogenFareValueIndicator_OnFareIndicatorValueChanged_Params
{
public:
	uint8                                        NewIndicatorValue;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NitrogenRuntime.NitrogenPassengerPawnComponent.ClientHandleFinishedCharacterCustomization
struct UNitrogenPassengerPawnComponent_ClientHandleFinishedCharacterCustomization_Params
{
public:
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function NitrogenRuntime.NitrogenPickup.OnNitrogenPickupOverlapped
struct ANitrogenPickup_OnNitrogenPickupOverlapped_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_162F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function NitrogenRuntime.NitrogenPlayerComponent.OnNitrogenGamePhaseChanged
struct UNitrogenPlayerComponent_OnNitrogenGamePhaseChanged_Params
{
public:
	enum class ENitrogenGamePhase                NewGamePhase;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NitrogenRuntime.NitrogenPlayerComponent.HandleVehicleDestroyedBuildingActor
struct UNitrogenPlayerComponent_HandleVehicleDestroyedBuildingActor_Params
{
public:
	class AFortAthenaVehicle*                    Vehicle;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABuildingActor*                        BuildingActor;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenRuntime.NitrogenPlayerComponent.GetDistanceFromDropOff
struct UNitrogenPlayerComponent_GetDistanceFromDropOff_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenRuntime.NitrogenPlayerComponent.GetDistanceFromClosestPassenger
struct UNitrogenPlayerComponent_GetDistanceFromClosestPassenger_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function NitrogenRuntime.NitrogenPlayerComponent.ClientHandleLoadingScreenStateChanged
struct UNitrogenPlayerComponent_ClientHandleLoadingScreenStateChanged_Params
{
public:
	class AFortPlayerControllerAthena*           PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableLoadScreen;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1641[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HUDReasonText;                                     // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function NitrogenRuntime.NitrogenTraversePoint.OnEndOverlap
struct ANitrogenTraversePoint_OnEndOverlap_Params
{
public:
	class AActor*                                OverlappedActor;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenRuntime.NitrogenTraversePoint.OnClientVisibiltyUpdated
struct ANitrogenTraversePoint_OnClientVisibiltyUpdated_Params
{
public:
	bool                                         bNewHidden;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenRuntime.NitrogenTraversePoint.OnClientInteracted
struct ANitrogenTraversePoint_OnClientInteracted_Params
{
public:
	bool                                         bOwnedByClient;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenRuntime.NitrogenVehicleComponent.TimelineBoostFXUpdate_JetSparksCounts
struct UNitrogenVehicleComponent_TimelineBoostFXUpdate_JetSparksCounts_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NitrogenRuntime.NitrogenVehicleComponent.TimelineBoostFXUpdate_JetFlamesHeight
struct UNitrogenVehicleComponent_TimelineBoostFXUpdate_JetFlamesHeight_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenRuntime.NitrogenVehicleComponent.SetBoostFXActive
struct UNitrogenVehicleComponent_SetBoostFXActive_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function NitrogenRuntime.NitrogenVehicleComponent.IsVehicleUnderCleanupWaterDepth
struct UNitrogenVehicleComponent_IsVehicleUnderCleanupWaterDepth_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function NitrogenRuntime.NitrogenVehicleComponent.HandleVehicleOnHit
struct UNitrogenVehicleComponent_HandleVehicleOnHit_Params
{
public:
	class UPrimitiveComponent*                   HitComponent;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x24(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}
}


