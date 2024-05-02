#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PurpleMouse_KeepCheckingLOS.GA_PurpleMouse_KeepCheckingLOS_C
// (None)

class UClass* UGA_PurpleMouse_KeepCheckingLOS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PurpleMouse_KeepCheckingLOS_C");

	return Clss;
}


// GA_PurpleMouse_KeepCheckingLOS_C GA_PurpleMouse_KeepCheckingLOS.Default__GA_PurpleMouse_KeepCheckingLOS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PurpleMouse_KeepCheckingLOS_C* UGA_PurpleMouse_KeepCheckingLOS_C::GetDefaultObj()
{
	static class UGA_PurpleMouse_KeepCheckingLOS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PurpleMouse_KeepCheckingLOS_C*>(UGA_PurpleMouse_KeepCheckingLOS_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_PurpleMouse_KeepCheckingLOS.GA_PurpleMouse_KeepCheckingLOS_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_PurpleMouse_KeepCheckingLOS_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PurpleMouse_KeepCheckingLOS_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_PurpleMouse_KeepCheckingLOS.GA_PurpleMouse_KeepCheckingLOS_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_PurpleMouse_KeepCheckingLOS_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PurpleMouse_KeepCheckingLOS_C", "K2_OnEndAbility");

	Params::UGA_PurpleMouse_KeepCheckingLOS_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PurpleMouse_KeepCheckingLOS.GA_PurpleMouse_KeepCheckingLOS_C.CheckLOSAgain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_PurpleMouse_KeepCheckingLOS_C::CheckLOSAgain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PurpleMouse_KeepCheckingLOS_C", "CheckLOSAgain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_PurpleMouse_KeepCheckingLOS.GA_PurpleMouse_KeepCheckingLOS_C.ExecuteUbergraph_GA_PurpleMouse_KeepCheckingLOS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue                   (None)
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_Athena_PurpleMouse_Jumper_C*K2Node_DynamicCast_AsBGA_Athena_Purple_Mouse_Jumper              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_PurpleMouse_KeepCheckingLOS_C::ExecuteUbergraph_GA_PurpleMouse_KeepCheckingLOS(int32 EntryPoint, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, class ABGA_Athena_PurpleMouse_Jumper_C* K2Node_DynamicCast_AsBGA_Athena_Purple_Mouse_Jumper, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PurpleMouse_KeepCheckingLOS_C", "ExecuteUbergraph_GA_PurpleMouse_KeepCheckingLOS");

	Params::UGA_PurpleMouse_KeepCheckingLOS_C_ExecuteUbergraph_GA_PurpleMouse_KeepCheckingLOS_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue = CallFunc_GetGrantedByEffectContext_ReturnValue;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue = CallFunc_EffectContextGetEffectCauser_ReturnValue;
	Parms.K2Node_DynamicCast_AsBGA_Athena_Purple_Mouse_Jumper = K2Node_DynamicCast_AsBGA_Athena_Purple_Mouse_Jumper;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


