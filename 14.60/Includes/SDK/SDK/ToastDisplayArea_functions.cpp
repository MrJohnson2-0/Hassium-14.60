#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ToastDisplayArea.ToastDisplayArea_C
// (None)

class UClass* UToastDisplayArea_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToastDisplayArea_C");

	return Clss;
}


// ToastDisplayArea_C ToastDisplayArea.Default__ToastDisplayArea_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToastDisplayArea_C* UToastDisplayArea_C::GetDefaultObj()
{
	static class UToastDisplayArea_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToastDisplayArea_C*>(UToastDisplayArea_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ToastDisplayArea.ToastDisplayArea_C.TestFrontendToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UToastDisplayArea_C::TestFrontendToast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "TestFrontendToast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastDisplayArea_C::ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToastDisplayArea_C", "ExecuteUbergraph_ToastDisplayArea");

	Params::UToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


