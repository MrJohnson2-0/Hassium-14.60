#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_DangerGrape.GA_Athena_DangerGrape_C
// (None)

class UClass* UGA_Athena_DangerGrape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_DangerGrape_C");

	return Clss;
}


// GA_Athena_DangerGrape_C GA_Athena_DangerGrape.Default__GA_Athena_DangerGrape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_DangerGrape_C* UGA_Athena_DangerGrape_C::GetDefaultObj()
{
	static class UGA_Athena_DangerGrape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_DangerGrape_C*>(UGA_Athena_DangerGrape_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_DangerGrape.GA_Athena_DangerGrape_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_DangerGrape_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_DangerGrape_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_DangerGrape.GA_Athena_DangerGrape_C.ExecuteUbergraph_GA_Athena_DangerGrape
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_Athena_DangerGrape_C::ExecuteUbergraph_GA_Athena_DangerGrape(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_DangerGrape_C", "ExecuteUbergraph_GA_Athena_DangerGrape");

	Params::UGA_Athena_DangerGrape_C_ExecuteUbergraph_GA_Athena_DangerGrape_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


