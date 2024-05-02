#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_BattlePassScreen.BP_Frontend_EventLevel_NavObject_BattlePassScreen_C
// (Actor)

class UClass* ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_BattlePassScreen_C");

	return Clss;
}


// BP_Frontend_EventLevel_NavObject_BattlePassScreen_C BP_Frontend_EventLevel_NavObject_BattlePassScreen.Default__BP_Frontend_EventLevel_NavObject_BattlePassScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C* ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C::GetDefaultObj()
{
	static class ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C*>(ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_EventLevel_NavObject_BattlePassScreen.BP_Frontend_EventLevel_NavObject_BattlePassScreen_C.SetBattlePassVisualState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsPurchased                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C::SetBattlePassVisualState(bool bIsPurchased, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassScreen_C", "SetBattlePassVisualState");

	Params::ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C_SetBattlePassVisualState_Params Parms{};

	Parms.bIsPurchased = bIsPurchased;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassScreen.BP_Frontend_EventLevel_NavObject_BattlePassScreen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassScreen_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassScreen.BP_Frontend_EventLevel_NavObject_BattlePassScreen_C.UpdateVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C::UpdateVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassScreen_C", "UpdateVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassScreen.BP_Frontend_EventLevel_NavObject_BattlePassScreen_C.OnInitializeForPlayer
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C::OnInitializeForPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassScreen_C", "OnInitializeForPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_BattlePassScreen.BP_Frontend_EventLevel_NavObject_BattlePassScreen_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasPurchasedSeasonBook_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassScreen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasPurchasedSeasonBook_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_BattlePassScreen_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassScreen");

	Params::ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasPurchasedSeasonBook_ReturnValue = CallFunc_HasPurchasedSeasonBook_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


