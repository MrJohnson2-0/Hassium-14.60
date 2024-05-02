#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C
// (None)

class UClass* UFriendSubscriptionToastWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendSubscriptionToastWidget_C");

	return Clss;
}


// FriendSubscriptionToastWidget_C FriendSubscriptionToastWidget.Default__FriendSubscriptionToastWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFriendSubscriptionToastWidget_C* UFriendSubscriptionToastWidget_C::GetDefaultObj()
{
	static class UFriendSubscriptionToastWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendSubscriptionToastWidget_C*>(UFriendSubscriptionToastWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFriendSubscriptionToastWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendSubscriptionToastWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "PreConstruct");

	Params::UFriendSubscriptionToastWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.Popup Animation Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFriendSubscriptionToastWidget_C::Popup_Animation_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "Popup Animation Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendSubscriptionToastWidget_C::OnPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "OnPlayOpenAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.OnPlayCloseAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFriendSubscriptionToastWidget_C::OnPlayCloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "OnPlayCloseAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.ExecuteUbergraph_FriendSubscriptionToastWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFriendSubscriptionToastWidget_C::ExecuteUbergraph_FriendSubscriptionToastWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendSubscriptionToastWidget_C", "ExecuteUbergraph_FriendSubscriptionToastWidget");

	Params::UFriendSubscriptionToastWidget_C_ExecuteUbergraph_FriendSubscriptionToastWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


