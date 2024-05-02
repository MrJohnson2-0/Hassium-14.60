#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SidekickOverlay.SidekickOverlay_C
// (None)

class UClass* USidekickOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidekickOverlay_C");

	return Clss;
}


// SidekickOverlay_C SidekickOverlay.Default__SidekickOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USidekickOverlay_C* USidekickOverlay_C::GetDefaultObj()
{
	static class USidekickOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USidekickOverlay_C*>(USidekickOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SidekickOverlay.SidekickOverlay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USidekickOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickOverlay_C", "Tick");

	Params::USidekickOverlay_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidekickOverlay.SidekickOverlay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USidekickOverlay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickOverlay_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SidekickOverlay.SidekickOverlay_C.ExecuteUbergraph_SidekickOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenSource_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenSource_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenSource_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenSource_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void USidekickOverlay_C::ExecuteUbergraph_SidekickOverlay(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_OpenSource_ReturnValue_1, bool CallFunc_OpenSource_ReturnValue_2, bool CallFunc_OpenSource_ReturnValue_3, bool CallFunc_OpenSource_ReturnValue_4, bool CallFunc_OpenSource_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidekickOverlay_C", "ExecuteUbergraph_SidekickOverlay");

	Params::USidekickOverlay_C_ExecuteUbergraph_SidekickOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_OpenSource_ReturnValue_1 = CallFunc_OpenSource_ReturnValue_1;
	Parms.CallFunc_OpenSource_ReturnValue_2 = CallFunc_OpenSource_ReturnValue_2;
	Parms.CallFunc_OpenSource_ReturnValue_3 = CallFunc_OpenSource_ReturnValue_3;
	Parms.CallFunc_OpenSource_ReturnValue_4 = CallFunc_OpenSource_ReturnValue_4;
	Parms.CallFunc_OpenSource_ReturnValue_5 = CallFunc_OpenSource_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


