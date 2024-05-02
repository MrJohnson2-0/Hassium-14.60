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

// 0x1 (0x1 - 0x0)
// Function LowTowerRuntime.FortHardyComponent_Telemetry.SetExtractionReason
struct UFortHardyComponent_Telemetry_SetExtractionReason_Params
{
public:
	enum class EHardyExtractionReason            Reason;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LowTowerRuntime.FortLaurelAnimInstance.SetLaurelInformation
struct UFortLaurelAnimInstance_SetLaurelInformation_Params
{
public:
	bool                                         bInHasItemInInventory;                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInPawnIsDestroyingBuildingForNav;                 // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInHasPawnGoal;                                    // 0x2(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                InGoalActor;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LowTowerRuntime.FortLaurelAnimInstance.SetAnimInstanceInformation
struct UFortLaurelAnimInstance_SetAnimInstanceInformation_Params
{
public:
	bool                                         bInIsActive;                                       // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LowTowerRuntime.FortLaurelComponent_Telemetry.SetLaurelType
struct UFortLaurelComponent_Telemetry_SetLaurelType_Params
{
public:
	enum class ELaurelType                       Type;                                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LowTowerRuntime.FortLaurelComponent_Telemetry.SetExtractionReason
struct UFortLaurelComponent_Telemetry_SetExtractionReason_Params
{
public:
	enum class ELaurelExtractionReason           Reason;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LowTowerRuntime.FortLaurelComponent_Telemetry.OnDropAllItems
struct UFortLaurelComponent_Telemetry_OnDropAllItems_Params
{
public:
	enum class ELaurelDropItemReason             DropItemReason;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


