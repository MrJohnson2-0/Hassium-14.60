#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HealthWarningScreen.HealthWarningScreen_C
// (None)

class UClass* UHealthWarningScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HealthWarningScreen_C");

	return Clss;
}


// HealthWarningScreen_C HealthWarningScreen.Default__HealthWarningScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHealthWarningScreen_C* UHealthWarningScreen_C::GetDefaultObj()
{
	static class UHealthWarningScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHealthWarningScreen_C*>(UHealthWarningScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HealthWarningScreen.HealthWarningScreen_C.HandleShowTimerComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealthWarningScreen_C::HandleShowTimerComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthWarningScreen_C", "HandleShowTimerComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HealthWarningScreen.HealthWarningScreen_C.ExecuteUbergraph_HealthWarningScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHealthWarningScreen_C::ExecuteUbergraph_HealthWarningScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthWarningScreen_C", "ExecuteUbergraph_HealthWarningScreen");

	Params::UHealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HealthWarningScreen.HealthWarningScreen_C.HealthWarningCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHealthWarningScreen_C::HealthWarningCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HealthWarningScreen_C", "HealthWarningCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


