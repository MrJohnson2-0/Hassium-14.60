#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C
// (None)

class UClass* UAthenaFloatSliderVariantPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaFloatSliderVariantPicker_C");

	return Clss;
}


// AthenaFloatSliderVariantPicker_C AthenaFloatSliderVariantPicker.Default__AthenaFloatSliderVariantPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaFloatSliderVariantPicker_C* UAthenaFloatSliderVariantPicker_C::GetDefaultObj()
{
	static class UAthenaFloatSliderVariantPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaFloatSliderVariantPicker_C*>(UAthenaFloatSliderVariantPicker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.OnUpdateValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NormalizedValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaFloatSliderVariantPicker_C::OnUpdateValue(float NormalizedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaFloatSliderVariantPicker_C", "OnUpdateValue");

	Params::UAthenaFloatSliderVariantPicker_C_OnUpdateValue_Params Parms{};

	Parms.NormalizedValue = NormalizedValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.ExecuteUbergraph_AthenaFloatSliderVariantPicker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NormalizedValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaFloatSliderVariantPicker_C::ExecuteUbergraph_AthenaFloatSliderVariantPicker(int32 EntryPoint, float K2Node_Event_NormalizedValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaFloatSliderVariantPicker_C", "ExecuteUbergraph_AthenaFloatSliderVariantPicker");

	Params::UAthenaFloatSliderVariantPicker_C_ExecuteUbergraph_AthenaFloatSliderVariantPicker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NormalizedValue = K2Node_Event_NormalizedValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


