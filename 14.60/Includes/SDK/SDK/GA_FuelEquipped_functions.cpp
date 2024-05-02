#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_FuelEquipped.GA_FuelEquipped_C
// (None)

class UClass* UGA_FuelEquipped_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_FuelEquipped_C");

	return Clss;
}


// GA_FuelEquipped_C GA_FuelEquipped.Default__GA_FuelEquipped_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_FuelEquipped_C* UGA_FuelEquipped_C::GetDefaultObj()
{
	static class UGA_FuelEquipped_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_FuelEquipped_C*>(UGA_FuelEquipped_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_FuelEquipped.GA_FuelEquipped_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_FuelEquipped_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FuelEquipped_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_FuelEquipped.GA_FuelEquipped_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_FuelEquipped_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FuelEquipped_C", "K2_OnEndAbility");

	Params::UGA_FuelEquipped_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_FuelEquipped.GA_FuelEquipped_C.ExecuteUbergraph_GA_FuelEquipped
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_FuelEquipped_C::ExecuteUbergraph_GA_FuelEquipped(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_FuelEquipped_C", "ExecuteUbergraph_GA_FuelEquipped");

	Params::UGA_FuelEquipped_C_ExecuteUbergraph_GA_FuelEquipped_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


