#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_LowTower_HeldObject_Chaplin.B_LowTower_HeldObject_Chaplin_C
// (Actor)

class UClass* AB_LowTower_HeldObject_Chaplin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_LowTower_HeldObject_Chaplin_C");

	return Clss;
}


// B_LowTower_HeldObject_Chaplin_C B_LowTower_HeldObject_Chaplin.Default__B_LowTower_HeldObject_Chaplin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_LowTower_HeldObject_Chaplin_C* AB_LowTower_HeldObject_Chaplin_C::GetDefaultObj()
{
	static class AB_LowTower_HeldObject_Chaplin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_LowTower_HeldObject_Chaplin_C*>(AB_LowTower_HeldObject_Chaplin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_LowTower_HeldObject_Chaplin.B_LowTower_HeldObject_Chaplin_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_LowTower_HeldObject_Chaplin_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_LowTower_HeldObject_Chaplin_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_LowTower_HeldObject_Chaplin.B_LowTower_HeldObject_Chaplin_C.GameplayCue.Abilities.LowTower.Chaplin.PrimaryShoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AB_LowTower_HeldObject_Chaplin_C::GameplayCue_Abilities_LowTower_Chaplin_PrimaryShoot(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_LowTower_HeldObject_Chaplin_C", "GameplayCue.Abilities.LowTower.Chaplin.PrimaryShoot");

	Params::AB_LowTower_HeldObject_Chaplin_C_GameplayCue_Abilities_LowTower_Chaplin_PrimaryShoot_Params Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_LowTower_HeldObject_Chaplin.B_LowTower_HeldObject_Chaplin_C.ExecuteUbergraph_B_LowTower_HeldObject_Chaplin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)

void AB_LowTower_HeldObject_Chaplin_C::ExecuteUbergraph_B_LowTower_HeldObject_Chaplin(int32 EntryPoint, bool Temp_bool_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_LowTower_HeldObject_Chaplin_C", "ExecuteUbergraph_B_LowTower_HeldObject_Chaplin");

	Params::AB_LowTower_HeldObject_Chaplin_C_ExecuteUbergraph_B_LowTower_HeldObject_Chaplin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue = CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;

	UObject::ProcessEvent(Func, &Parms);

}

}


