#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Marshaller_Glider_Preset.Marshaller_Glider_Preset_C
// (None)

class UClass* UMarshaller_Glider_Preset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Marshaller_Glider_Preset_C");

	return Clss;
}


// Marshaller_Glider_Preset_C Marshaller_Glider_Preset.Default__Marshaller_Glider_Preset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMarshaller_Glider_Preset_C* UMarshaller_Glider_Preset_C::GetDefaultObj()
{
	static class UMarshaller_Glider_Preset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMarshaller_Glider_Preset_C*>(UMarshaller_Glider_Preset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Marshaller_Glider_Preset.Marshaller_Glider_Preset_C.ExecuteUbergraph_Marshaller_Glider_Preset
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMarshaller_Glider_Preset_C::ExecuteUbergraph_Marshaller_Glider_Preset(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Marshaller_Glider_Preset_C", "ExecuteUbergraph_Marshaller_Glider_Preset");

	Params::UMarshaller_Glider_Preset_C_ExecuteUbergraph_Marshaller_Glider_Preset_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


