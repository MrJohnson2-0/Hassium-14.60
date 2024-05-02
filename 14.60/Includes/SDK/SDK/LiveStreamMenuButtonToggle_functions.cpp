#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C
// (None)

class UClass* ULiveStreamMenuButtonToggle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiveStreamMenuButtonToggle_C");

	return Clss;
}


// LiveStreamMenuButtonToggle_C LiveStreamMenuButtonToggle.Default__LiveStreamMenuButtonToggle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiveStreamMenuButtonToggle_C* ULiveStreamMenuButtonToggle_C::GetDefaultObj()
{
	static class ULiveStreamMenuButtonToggle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiveStreamMenuButtonToggle_C*>(ULiveStreamMenuButtonToggle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.RefreshButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsLiveStreamEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULiveStreamMenuButtonToggle_C::RefreshButton(bool IsLiveStreamEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "RefreshButton");

	Params::ULiveStreamMenuButtonToggle_C_RefreshButton_Params Parms{};

	Parms.IsLiveStreamEnabled = IsLiveStreamEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULiveStreamMenuButtonToggle_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULiveStreamMenuButtonToggle_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULiveStreamMenuButtonToggle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.ExecuteUbergraph_LiveStreamMenuButtonToggle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               K2Node_Event_IsLiveStreamEnabled                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULiveStreamMenuButtonToggle_C::ExecuteUbergraph_LiveStreamMenuButtonToggle(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool K2Node_Event_IsLiveStreamEnabled, class FText K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LiveStreamMenuButtonToggle_C", "ExecuteUbergraph_LiveStreamMenuButtonToggle");

	Params::ULiveStreamMenuButtonToggle_C_ExecuteUbergraph_LiveStreamMenuButtonToggle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Event_IsLiveStreamEnabled = K2Node_Event_IsLiveStreamEnabled;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


