#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C
// (Actor)

class UClass* AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C");

	return Clss;
}


// B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.Default__B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C* AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::GetDefaultObj()
{
	static class AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C*>(AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.ScalePlayerThermal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::ScalePlayerThermal__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C", "ScalePlayerThermal__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.ScalePlayerThermal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::ScalePlayerThermal__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C", "ScalePlayerThermal__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::OnSetTargeting(bool bNewIsTargeting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C", "OnSetTargeting");

	Params::AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C_OnSetTargeting_Params Parms{};

	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.PlayScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::PlayScopePP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C", "PlayScopePP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.ReverseScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::ReverseScopePP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C", "ReverseScopePP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.ForceScopeBackImmediatly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::ForceScopeBackImmediatly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C", "ForceScopeBackImmediatly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.ExecuteUbergraph_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsTargeting_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsTargeting_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C::ExecuteUbergraph_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bNewIsTargeting, class APawn* CallFunc_GetInstigator_ReturnValue, bool Temp_bool_IsClosed_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_GetIsTargeting_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_1, bool CallFunc_GetIsTargeting_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C", "ExecuteUbergraph_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena");

	Params::AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C_ExecuteUbergraph_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetInstigator_ReturnValue_1 = CallFunc_GetInstigator_ReturnValue_1;
	Parms.CallFunc_GetIsTargeting_ReturnValue = CallFunc_GetIsTargeting_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue_1 = CallFunc_GetLocalViewingPlayerController_ReturnValue_1;
	Parms.CallFunc_GetIsTargeting_ReturnValue_1 = CallFunc_GetIsTargeting_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


