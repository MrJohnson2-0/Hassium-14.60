#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C
// (None)

class UClass* UMiscellaneousModeItemDetailsHostPanel_Store_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MiscellaneousModeItemDetailsHostPanel_Store_C");

	return Clss;
}


// MiscellaneousModeItemDetailsHostPanel_Store_C MiscellaneousModeItemDetailsHostPanel_Store.Default__MiscellaneousModeItemDetailsHostPanel_Store_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMiscellaneousModeItemDetailsHostPanel_Store_C* UMiscellaneousModeItemDetailsHostPanel_Store_C::GetDefaultObj()
{
	static class UMiscellaneousModeItemDetailsHostPanel_Store_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMiscellaneousModeItemDetailsHostPanel_Store_C*>(UMiscellaneousModeItemDetailsHostPanel_Store_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMiscellaneousModeItemDetailsHostPanel_Store_C::HandleHasItemMarkedForMulchingChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiscellaneousModeItemDetailsHostPanel_Store_C", "HandleHasItemMarkedForMulchingChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C.ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiscellaneousModeItemDetailsHostPanel_Store_C::ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MiscellaneousModeItemDetailsHostPanel_Store_C", "ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store");

	Params::UMiscellaneousModeItemDetailsHostPanel_Store_C_ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


