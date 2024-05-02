#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Flopper_Thermal.GA_Athena_Flopper_Thermal_C
// (None)

class UClass* UGA_Athena_Flopper_Thermal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Flopper_Thermal_C");

	return Clss;
}


// GA_Athena_Flopper_Thermal_C GA_Athena_Flopper_Thermal.Default__GA_Athena_Flopper_Thermal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Flopper_Thermal_C* UGA_Athena_Flopper_Thermal_C::GetDefaultObj()
{
	static class UGA_Athena_Flopper_Thermal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Flopper_Thermal_C*>(UGA_Athena_Flopper_Thermal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Flopper_Thermal.GA_Athena_Flopper_Thermal_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Athena_Flopper_Thermal_C::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Flopper_Thermal_C", "K2_CommitExecute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Flopper_Thermal.GA_Athena_Flopper_Thermal_C.ExecuteUbergraph_GA_Athena_Flopper_Thermal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Flopper_Thermal_C::ExecuteUbergraph_GA_Athena_Flopper_Thermal(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Flopper_Thermal_C", "ExecuteUbergraph_GA_Athena_Flopper_Thermal");

	Params::UGA_Athena_Flopper_Thermal_C_ExecuteUbergraph_GA_Athena_Flopper_Thermal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


