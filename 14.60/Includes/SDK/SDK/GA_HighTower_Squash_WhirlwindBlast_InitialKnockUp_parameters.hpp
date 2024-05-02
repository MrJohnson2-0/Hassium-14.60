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
// Function GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp.GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C.K2_OnEndAbility
struct UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp.GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C.ExecuteUbergraph_GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp
struct UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C_ExecuteUbergraph_GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


