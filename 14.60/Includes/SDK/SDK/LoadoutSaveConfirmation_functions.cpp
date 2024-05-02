#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoadoutSaveConfirmation.LoadoutSaveConfirmation_C
// (None)

class UClass* ULoadoutSaveConfirmation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadoutSaveConfirmation_C");

	return Clss;
}


// LoadoutSaveConfirmation_C LoadoutSaveConfirmation.Default__LoadoutSaveConfirmation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadoutSaveConfirmation_C* ULoadoutSaveConfirmation_C::GetDefaultObj()
{
	static class ULoadoutSaveConfirmation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadoutSaveConfirmation_C*>(ULoadoutSaveConfirmation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.Toggle Save as New Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanSaveAsNew                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadoutSaveConfirmation_C::Toggle_Save_as_New_Visibility(bool CanSaveAsNew, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class UWidget* K2Node_Select_Default_1, class UWidget* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutSaveConfirmation_C", "Toggle Save as New Visibility");

	Params::ULoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility_Params Parms{};

	Parms.CanSaveAsNew = CanSaveAsNew;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.OnCanSaveAsNew
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanSaveAsNew                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadoutSaveConfirmation_C::OnCanSaveAsNew(bool bCanSaveAsNew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutSaveConfirmation_C", "OnCanSaveAsNew");

	Params::ULoadoutSaveConfirmation_C_OnCanSaveAsNew_Params Parms{};

	Parms.bCanSaveAsNew = bCanSaveAsNew;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.ExecuteUbergraph_LoadoutSaveConfirmation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCanSaveAsNew                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadoutSaveConfirmation_C::ExecuteUbergraph_LoadoutSaveConfirmation(int32 EntryPoint, bool K2Node_Event_bCanSaveAsNew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadoutSaveConfirmation_C", "ExecuteUbergraph_LoadoutSaveConfirmation");

	Params::ULoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bCanSaveAsNew = K2Node_Event_bCanSaveAsNew;

	UObject::ProcessEvent(Func, &Parms);

}

}


