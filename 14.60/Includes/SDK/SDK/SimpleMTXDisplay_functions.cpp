#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SimpleMTXDisplay.SimpleMTXDisplay_C
// (None)

class UClass* USimpleMTXDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleMTXDisplay_C");

	return Clss;
}


// SimpleMTXDisplay_C SimpleMTXDisplay.Default__SimpleMTXDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleMTXDisplay_C* USimpleMTXDisplay_C::GetDefaultObj()
{
	static class USimpleMTXDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleMTXDisplay_C*>(USimpleMTXDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SimpleMTXDisplay.SimpleMTXDisplay_C.OnUpdateAvailableMTX
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              AvailableBalance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMTXDisplay_C::OnUpdateAvailableMTX(int32 AvailableBalance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleMTXDisplay_C", "OnUpdateAvailableMTX");

	Params::USimpleMTXDisplay_C_OnUpdateAvailableMTX_Params Parms{};

	Parms.AvailableBalance = AvailableBalance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMTXDisplay.SimpleMTXDisplay_C.ExecuteUbergraph_SimpleMTXDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_AvailableBalance                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void USimpleMTXDisplay_C::ExecuteUbergraph_SimpleMTXDisplay(int32 EntryPoint, int32 K2Node_Event_AvailableBalance, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SimpleMTXDisplay_C", "ExecuteUbergraph_SimpleMTXDisplay");

	Params::USimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_AvailableBalance = K2Node_Event_AvailableBalance;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


