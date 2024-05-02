#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp.GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C
// (None)

class UClass* UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C");

	return Clss;
}


// GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp.Default__GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C* UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C::GetDefaultObj()
{
	static class UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C*>(UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp.GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp.GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C", "K2_OnEndAbility");

	Params::UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp.GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C.ExecuteUbergraph_GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C::ExecuteUbergraph_GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C", "ExecuteUbergraph_GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp");

	Params::UGA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_C_ExecuteUbergraph_GA_HighTower_Squash_WhirlwindBlast_InitialKnockUp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


