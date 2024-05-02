#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C
// (Actor)

class UClass* AB_Grenade_Molotov_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Grenade_Molotov_Athena_C");

	return Clss;
}


// B_Grenade_Molotov_Athena_C B_Grenade_Molotov_Athena.Default__B_Grenade_Molotov_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Grenade_Molotov_Athena_C* AB_Grenade_Molotov_Athena_C::GetDefaultObj()
{
	static class AB_Grenade_Molotov_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Grenade_Molotov_Athena_C*>(AB_Grenade_Molotov_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Grenade_Molotov_Athena_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Grenade_Molotov_Athena_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Grenade_Molotov_Athena_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Grenade_Molotov_Athena_C", "K2_OnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.ExecuteUbergraph_B_Grenade_Molotov_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Grenade_Molotov_Athena_C::ExecuteUbergraph_B_Grenade_Molotov_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Grenade_Molotov_Athena_C", "ExecuteUbergraph_B_Grenade_Molotov_Athena");

	Params::AB_Grenade_Molotov_Athena_C_ExecuteUbergraph_B_Grenade_Molotov_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


