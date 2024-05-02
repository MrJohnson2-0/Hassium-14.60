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

// 0x18 (0x18 - 0x0)
// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged
struct UFortContextualTutorial_VehicleValetLowFuel_HandleVehicleStateChanged_Params
{
public:
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                NewVehicle;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OldVehicle;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SetOnFire
struct AFortDagwoodVehicle_SetOnFire_Params
{
public:
	bool                                         bNewFire;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SetNormalizedAudioRPM
struct AFortDagwoodVehicle_SetNormalizedAudioRPM_Params
{
public:
	float                                        InRPM;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.SetFuel
struct AFortDagwoodVehicle_SetFuel_Params
{
public:
	float                                        NewFuel;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeSpringsInfo
struct AFortDagwoodVehicle_ServerSetRuntimeSpringsInfo_Params
{
public:
	struct FRuntimeSpringsInfo                   SpringsInfo;                                       // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeProperties
struct AFortDagwoodVehicle_ServerSetRuntimeProperties_Params
{
public:
	struct FVehicleRuntimeModifiers              RunTimeProps;                                      // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeGravity
struct AFortDagwoodVehicle_ServerSetRuntimeGravity_Params
{
public:
	float                                        GravMult;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeFuelInfo
struct AFortDagwoodVehicle_ServerSetRuntimeFuelInfo_Params
{
public:
	struct FRuntimeFuelInfo                      FuelInfo;                                          // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeDriveInfo
struct AFortDagwoodVehicle_ServerSetRuntimeDriveInfo_Params
{
public:
	float                                        MaxIncline;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTilt;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeBoostInfo
struct AFortDagwoodVehicle_ServerSetRuntimeBoostInfo_Params
{
public:
	struct FRuntimeBoostInfo                     BoostInfo;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ServerAddRuntimeGearsInfo
struct AFortDagwoodVehicle_ServerAddRuntimeGearsInfo_Params
{
public:
	struct FRuntimeGearInfo                      GearInfo;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade
struct AFortDagwoodVehicle_OnTickAudioFade_Params
{
public:
	float                                        FadeParam;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController
struct AFortDagwoodVehicle_OnTickAudioController_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnSpawnLeakProjectile
struct AFortDagwoodVehicle_OnSpawnLeakProjectile_Params
{
public:
	class AFortProjectileBase*                   SpawnProjectile;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract
struct AFortDagwoodVehicle_OnServerAltInteract_Params
{
public:
	class AFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnRimScrapeDamage
struct AFortDagwoodVehicle_OnRimScrapeDamage_Params
{
public:
	int32                                        TireIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnRep_Tires
struct AFortDagwoodVehicle_OnRep_Tires_Params
{
public:
	TArray<enum class ETireStates>               PrevTireStates;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnPoppedTire
struct AFortDagwoodVehicle_OnPoppedTire_Params
{
public:
	int32                                        TireIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged
struct AFortDagwoodVehicle_OnInoperableChanged_Params
{
public:
	bool                                         bInoperable;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnGainedFuel
struct AFortDagwoodVehicle_OnGainedFuel_Params
{
public:
	float                                        NewPercent;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision
struct AFortDagwoodVehicle_OnDestroyedPropFromCollision_Params
{
public:
	class ABuildingActor*                        BuildingHitActor;                                  // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract
struct AFortDagwoodVehicle_OnClientBeginAltInteract_Params
{
public:
	class AFortPawn*                             Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.NativeOnFuelChanged
struct AFortDagwoodVehicle_NativeOnFuelChanged_Params
{
public:
	float                                        NewFuelPercent;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OldFuelPercent;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity
struct AFortDagwoodVehicle_NativeCalculateAccelRumbleIntensity_Params
{
public:
	float                                        MaxIntensity;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.MakeOperable
struct AFortDagwoodVehicle_MakeOperable_Params
{
public:
	bool                                         bAddGas;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsVehicleAcceleratingWithSpeedThreshold
struct AFortDagwoodVehicle_IsVehicleAcceleratingWithSpeedThreshold_Params
{
public:
	float                                        SpeedThreshold;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsTireSkidding
struct AFortDagwoodVehicle_IsTireSkidding_Params
{
public:
	float                                        MinSpeedForSkid;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngleForSkid;                                      // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedForPeelout;                                   // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedForBraking;                                   // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22BC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsOnRoad
struct AFortDagwoodVehicle_IsOnRoad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape
struct AFortDagwoodVehicle_IsOnLandscape_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsOnDirt
struct AFortDagwoodVehicle_IsOnDirt_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsOffroad
struct AFortDagwoodVehicle_IsOffroad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled
struct AFortDagwoodVehicle_IsNativeBPTickEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.IsInoperable
struct AFortDagwoodVehicle_IsInoperable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetTireSurface
struct AFortDagwoodVehicle_GetTireSurface_Params
{
public:
	enum class ETireLocations                    TireIndex;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETireSurfaces                     ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetTireState
struct AFortDagwoodVehicle_GetTireState_Params
{
public:
	int32                                        TireIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22CA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent
struct AFortDagwoodVehicle_GetTireHealthPercent_Params
{
public:
	enum class ETireLocations                    TireIndex;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetPlayerFacingName
struct AFortDagwoodVehicle_GetPlayerFacingName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetOnFire
struct AFortDagwoodVehicle_GetOnFire_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetNormalizedAudioRPM
struct AFortDagwoodVehicle_GetNormalizedAudioRPM_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetHUDTopSpeed
struct AFortDagwoodVehicle_GetHUDTopSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetFuelCapacity
struct AFortDagwoodVehicle_GetFuelCapacity_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetFuel
struct AFortDagwoodVehicle_GetFuel_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetCurrentRuntimeProperties
struct AFortDagwoodVehicle_GetCurrentRuntimeProperties_Params
{
public:
	struct FVehicleRuntimeModifiers              ReturnValue;                                       // 0x0(0x48)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.GetBumpiness
struct AFortDagwoodVehicle_GetBumpiness_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed
struct AFortDagwoodVehicle_ForwardOrReverseInputPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetRuntime.FortDagwoodVehicle.AreAnyTiresPopped
struct AFortDagwoodVehicle_AreAnyTiresPopped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicleManager.SetVehicleFuel
struct UFortDagwoodVehicleManager_SetVehicleFuel_Params
{
public:
	float                                        NewFuel;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetRuntime.FortDagwoodVehicleManager.ServerSetVehicleFuel
struct UFortDagwoodVehicleManager_ServerSetVehicleFuel_Params
{
public:
	float                                        NewFuel;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated
struct UFortDagwoodVehicleManager_OnVehicleSpawnsUpdated_Params
{
public:
	class UFortVehicleItemDefinition*            VehicleItemDef;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        SpawnedVehicles;                                   // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewVehicleCount;                                   // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2305[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned
struct UFortDagwoodVehicleManager_OnVehicleSpawned_Params
{
public:
	class AFortAthenaVehicle*                    Vehicle;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor
struct UFortDagwoodVehicleManager_CustomHandleActorStreamedInEditor_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native
struct AFortValetAudioController_OnSuspensionCollision_Native_Params
{
public:
	bool                                         OutResult;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutMagnitude;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetRuntime.FortValetAudioController.CacheValetVehicle
struct AFortValetAudioController_CacheValetVehicle_Params
{
public:
	class AFortDagwoodVehicle*                   InVehicle;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


