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
// Function HydrogenUI.HydrogenWidgetBase.OnMutatorAvailable
struct UHydrogenWidgetBase_OnMutatorAvailable_Params
{
public:
	class AFortGameplayMutator*                  MutatorActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HydrogenUI.HydrogenWidgetBase.MutatorReady
struct UHydrogenWidgetBase_MutatorReady_Params
{
public:
	class AFortAthenaMutator_Hydrogen*           MutatorActor;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HydrogenUI.HydrogenWidgetBase.GetHydrogenMutator
struct UHydrogenWidgetBase_GetHydrogenMutator_Params
{
public:
	class AFortAthenaMutator_Hydrogen*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HydrogenUI.HydrogenWidgetBase.GetCaptureProgressPercent
struct UHydrogenWidgetBase_GetCaptureProgressPercent_Params
{
public:
	class AHydrogenObjectiveActor*               InObjective;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AAE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


