#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CustomInteractionButton.CustomInteractionButton_C
// (None)

class UClass* UCustomInteractionButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomInteractionButton_C");

	return Clss;
}


// CustomInteractionButton_C CustomInteractionButton.Default__CustomInteractionButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomInteractionButton_C* UCustomInteractionButton_C::GetDefaultObj()
{
	static class UCustomInteractionButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomInteractionButton_C*>(UCustomInteractionButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomInteractionButton.CustomInteractionButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCustomInteractionButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomInteractionButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomInteractionButton.CustomInteractionButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCustomInteractionButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomInteractionButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomInteractionButton.CustomInteractionButton_C.ExecuteUbergraph_CustomInteractionButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomInteractionButton_C::ExecuteUbergraph_CustomInteractionButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomInteractionButton_C", "ExecuteUbergraph_CustomInteractionButton");

	Params::UCustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


