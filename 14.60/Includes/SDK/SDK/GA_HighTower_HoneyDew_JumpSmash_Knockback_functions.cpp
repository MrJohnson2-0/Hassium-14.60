#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_HoneyDew_JumpSmash_Knockback.GA_HighTower_HoneyDew_JumpSmash_Knockback_C
// (None)

class UClass* UGA_HighTower_HoneyDew_JumpSmash_Knockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_HoneyDew_JumpSmash_Knockback_C");

	return Clss;
}


// GA_HighTower_HoneyDew_JumpSmash_Knockback_C GA_HighTower_HoneyDew_JumpSmash_Knockback.Default__GA_HighTower_HoneyDew_JumpSmash_Knockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_HoneyDew_JumpSmash_Knockback_C* UGA_HighTower_HoneyDew_JumpSmash_Knockback_C::GetDefaultObj()
{
	static class UGA_HighTower_HoneyDew_JumpSmash_Knockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_HoneyDew_JumpSmash_Knockback_C*>(UGA_HighTower_HoneyDew_JumpSmash_Knockback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HighTower_HoneyDew_JumpSmash_Knockback.GA_HighTower_HoneyDew_JumpSmash_Knockback_C.LaunchFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HighTower_HoneyDew_JumpSmash_Knockback_C::LaunchFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_Knockback_C", "LaunchFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_HoneyDew_JumpSmash_Knockback.GA_HighTower_HoneyDew_JumpSmash_Knockback_C.ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_Knockback
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_HoneyDew_JumpSmash_Knockback_C::ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_Knockback(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_Knockback_C", "ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_Knockback");

	Params::UGA_HighTower_HoneyDew_JumpSmash_Knockback_C_ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_Knockback_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


