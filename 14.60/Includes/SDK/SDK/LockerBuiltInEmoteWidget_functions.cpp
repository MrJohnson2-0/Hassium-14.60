#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C
// (None)

class UClass* ULockerBuiltInEmoteWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LockerBuiltInEmoteWidget_C");

	return Clss;
}


// LockerBuiltInEmoteWidget_C LockerBuiltInEmoteWidget.Default__LockerBuiltInEmoteWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULockerBuiltInEmoteWidget_C* ULockerBuiltInEmoteWidget_C::GetDefaultObj()
{
	static class ULockerBuiltInEmoteWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULockerBuiltInEmoteWidget_C*>(ULockerBuiltInEmoteWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C.OnUpdateLocked
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bLocked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULockerBuiltInEmoteWidget_C::OnUpdateLocked(bool bLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LockerBuiltInEmoteWidget_C", "OnUpdateLocked");

	Params::ULockerBuiltInEmoteWidget_C_OnUpdateLocked_Params Parms{};

	Parms.bLocked = bLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C.ExecuteUbergraph_LockerBuiltInEmoteWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bLocked                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULockerBuiltInEmoteWidget_C::ExecuteUbergraph_LockerBuiltInEmoteWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_bLocked, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LockerBuiltInEmoteWidget_C", "ExecuteUbergraph_LockerBuiltInEmoteWidget");

	Params::ULockerBuiltInEmoteWidget_C_ExecuteUbergraph_LockerBuiltInEmoteWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_bLocked = K2Node_Event_bLocked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


