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

// 0x8 (0x8 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.TickHydrogenStormShield
struct AFortAthenaMutator_Hydrogen_TickHydrogenStormShield_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22FC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.SetupSafeZoneRoute
struct AFortAthenaMutator_Hydrogen_SetupSafeZoneRoute_Params
{
public:
	struct FVector                               StartVector;                                       // 0x0(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndVector;                                         // 0xC(0xC)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.SetCapturePointFillAmount
struct AFortAthenaMutator_Hydrogen_SetCapturePointFillAmount_Params
{
public:
	class AHydrogenObjectiveActor*               InCapturePointActor;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InPlayerTeam;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2301[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OwningTeamChange
struct AFortAthenaMutator_Hydrogen_OwningTeamChange_Params
{
public:
	class AHydrogenObjectiveActor*               Objective;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NewTeam;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OldTeam;                                           // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2304[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnGamePhaseStepChanged
struct AFortAthenaMutator_Hydrogen_OnGamePhaseStepChanged_Params
{
public:
	TScriptInterface<class IFortSafeZoneInterface> SafeZoneInterfaceConst;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EAthenaGamePhaseStep              GamePhaseStep;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2306[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.IsInStormShield
struct AFortAthenaMutator_Hydrogen_IsInStormShield_Params
{
public:
	struct FVector                               TestLocation;                                      // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2308[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GiveObjectiveAccolade
struct AFortAthenaMutator_Hydrogen_GiveObjectiveAccolade_Params
{
public:
	class AFortPlayerControllerAthena*           FortController;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetTimeToNextNode
struct AFortAthenaMutator_Hydrogen_GetTimeToNextNode_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetStormSpeed
struct AFortAthenaMutator_Hydrogen_GetStormSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetSortedActivePointIndices
struct AFortAthenaMutator_Hydrogen_GetSortedActivePointIndices_Params
{
public:
	TArray<int32>                                OutSortedIndices;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetOwnedCapturePointCount
struct AFortAthenaMutator_Hydrogen_GetOwnedCapturePointCount_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetNextActorOnPathLocation
struct AFortAthenaMutator_Hydrogen_GetNextActorOnPathLocation_Params
{
public:
	int32                                        InPathIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetAllCapturePoints
struct AFortAthenaMutator_Hydrogen_GetAllCapturePoints_Params
{
public:
	TArray<class AHydrogenObjectiveActor*>       ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetActorOnPathLocation
struct AFortAthenaMutator_Hydrogen_GetActorOnPathLocation_Params
{
public:
	int32                                        InPathIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.EndGame
struct AFortAthenaMutator_Hydrogen_EndGame_Params
{
public:
	uint8                                        Winner;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.CheckVictoryPoints
struct AFortAthenaMutator_Hydrogen_CheckVictoryPoints_Params
{
public:
	float                                        TimePassed;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.bHasWinnerBeenDeclared
struct AFortAthenaMutator_Hydrogen_bHasWinnerBeenDeclared_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.bHasStormStarted
struct AFortAthenaMutator_Hydrogen_bHasStormStarted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.AddBonusVictoryPointsForLockedCapturePoints
struct AFortAthenaMutator_Hydrogen_AddBonusVictoryPointsForLockedCapturePoints_Params
{
public:
	uint8                                        InTeam;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function HydrogenRuntime.HydrogenObjectiveActor.SetUpMaterialInstanceDynamic
struct AHydrogenObjectiveActor_SetUpMaterialInstanceDynamic_Params
{
public:
	struct FSlateBrush                           MapIconBrush;                                      // 0x0(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              DrawBrushMID;                                      // 0x88(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HydrogenRuntime.HydrogenObjectiveActor.SetActive
struct AHydrogenObjectiveActor_SetActive_Params
{
public:
	bool                                         bInIsActive;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HydrogenRuntime.HydrogenObjectiveActor.ProcessOverlap
struct AHydrogenObjectiveActor_ProcessOverlap_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function HydrogenRuntime.HydrogenObjectiveActor.OnTimelineFlashing
struct AHydrogenObjectiveActor_OnTimelineFlashing_Params
{
public:
	float                                        IconOpacity;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function HydrogenRuntime.HydrogenObjectiveActor.OnOverlapBegin
struct AHydrogenObjectiveActor_OnOverlapBegin_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2350[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x8C)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_2351[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HydrogenRuntime.HydrogenObjectiveActor.OnComponentBeginOverlap
struct AHydrogenObjectiveActor_OnComponentBeginOverlap_Params
{
public:
	class AActor*                                OverlappedActor;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HydrogenRuntime.HydrogenObjectiveActor.GetIsActive
struct AHydrogenObjectiveActor_GetIsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


