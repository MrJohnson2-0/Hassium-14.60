#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_Date_ChainLightning_RemoveCoolDown.GA_HighTower_Date_ChainLightning_RemoveCoolDown_C
// (None)

class UClass* UGA_HighTower_Date_ChainLightning_RemoveCoolDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_Date_ChainLightning_RemoveCoolDown_C");

	return Clss;
}


// GA_HighTower_Date_ChainLightning_RemoveCoolDown_C GA_HighTower_Date_ChainLightning_RemoveCoolDown.Default__GA_HighTower_Date_ChainLightning_RemoveCoolDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_Date_ChainLightning_RemoveCoolDown_C* UGA_HighTower_Date_ChainLightning_RemoveCoolDown_C::GetDefaultObj()
{
	static class UGA_HighTower_Date_ChainLightning_RemoveCoolDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_Date_ChainLightning_RemoveCoolDown_C*>(UGA_HighTower_Date_ChainLightning_RemoveCoolDown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HighTower_Date_ChainLightning_RemoveCoolDown.GA_HighTower_Date_ChainLightning_RemoveCoolDown_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HighTower_Date_ChainLightning_RemoveCoolDown_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_ChainLightning_RemoveCoolDown_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_Date_ChainLightning_RemoveCoolDown.GA_HighTower_Date_ChainLightning_RemoveCoolDown_C.ExecuteUbergraph_GA_HighTower_Date_ChainLightning_RemoveCoolDown
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_Date_ChainLightning_RemoveCoolDown_C::ExecuteUbergraph_GA_HighTower_Date_ChainLightning_RemoveCoolDown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_ChainLightning_RemoveCoolDown_C", "ExecuteUbergraph_GA_HighTower_Date_ChainLightning_RemoveCoolDown");

	Params::UGA_HighTower_Date_ChainLightning_RemoveCoolDown_C_ExecuteUbergraph_GA_HighTower_Date_ChainLightning_RemoveCoolDown_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


