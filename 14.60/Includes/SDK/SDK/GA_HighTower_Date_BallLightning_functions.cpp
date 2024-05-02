#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C
// (None)

class UClass* UGA_HighTower_Date_BallLightning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_Date_BallLightning_C");

	return Clss;
}


// GA_HighTower_Date_BallLightning_C GA_HighTower_Date_BallLightning.Default__GA_HighTower_Date_BallLightning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_Date_BallLightning_C* UGA_HighTower_Date_BallLightning_C::GetDefaultObj()
{
	static class UGA_HighTower_Date_BallLightning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_Date_BallLightning_C*>(UGA_HighTower_Date_BallLightning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_K2_CanActivateAbility_RelevantTags                      (None)
// bool                               CallFunc_K2_CanActivateAbility_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_HighTower_Date_BallLightning_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "K2_CanActivateAbility");

	Params::UGA_HighTower_Date_BallLightning_C_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.CallFunc_K2_CanActivateAbility_RelevantTags = CallFunc_K2_CanActivateAbility_RelevantTags;
	Parms.CallFunc_K2_CanActivateAbility_ReturnValue = CallFunc_K2_CanActivateAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.PowerSpawnProjectile
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         ProjectileSpawned                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_PowerSpawnProjectile_ProjectileSpawned                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_Date_BallLightning_C::PowerSpawnProjectile(class AFortProjectileBase** ProjectileSpawned, class AFortProjectileBase* CallFunc_PowerSpawnProjectile_ProjectileSpawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "PowerSpawnProjectile");

	Params::UGA_HighTower_Date_BallLightning_C_PowerSpawnProjectile_Params Parms{};

	Parms.CallFunc_PowerSpawnProjectile_ProjectileSpawned = CallFunc_PowerSpawnProjectile_ProjectileSpawned;

	UObject::ProcessEvent(Func, &Parms);

	if (ProjectileSpawned != nullptr)
		*ProjectileSpawned = Parms.ProjectileSpawned;

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.Check Min Hold Time
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              MinTimeRemaining                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_Date_BallLightning_C::Check_Min_Hold_Time(bool* Success, float* MinTimeRemaining, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "Check Min Hold Time");

	Params::UGA_HighTower_Date_BallLightning_C_Check_Min_Hold_Time_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (MinTimeRemaining != nullptr)
		*MinTimeRemaining = Parms.MinTimeRemaining;

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.InitAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_Date_BallLightning_C::InitAbility(float CallFunc_GetGameTimeInSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "InitAbility");

	Params::UGA_HighTower_Date_BallLightning_C_InitAbility_Params Parms{};

	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.Added_60A0EC084FB8C048E3BA878CCFA25811
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HighTower_Date_BallLightning_C::Added_60A0EC084FB8C048E3BA878CCFA25811()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "Added_60A0EC084FB8C048E3BA878CCFA25811");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.Added_5CB6885747BB3160A88BD2880752E130
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HighTower_Date_BallLightning_C::Added_5CB6885747BB3160A88BD2880752E130()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "Added_5CB6885747BB3160A88BD2880752E130");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.OnSync_CD7C69E84CC97FE216AEA089D8A95231
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HighTower_Date_BallLightning_C::OnSync_CD7C69E84CC97FE216AEA089D8A95231()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "OnSync_CD7C69E84CC97FE216AEA089D8A95231");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HoldTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_Date_BallLightning_C::Released(float HoldTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "Released");

	Params::UGA_HighTower_Date_BallLightning_C_Released_Params Parms{};

	Parms.HoldTime = HoldTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_HighTower_Date_BallLightning_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "K2_OnEndAbility");

	Params::UGA_HighTower_Date_BallLightning_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HighTower_Date_BallLightning_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.MulticastThrow
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HighTower_Date_BallLightning_C::MulticastThrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "MulticastThrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.CastMontageNotifyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_Date_BallLightning_C::CastMontageNotifyStart(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "CastMontageNotifyStart");

	Params::UGA_HighTower_Date_BallLightning_C_CastMontageNotifyStart_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HighTower_Date_BallLightning_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         ProjectileSpawned                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_Date_BallLightning_C::CustomEvent_2(class AFortProjectileBase* ProjectileSpawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "CustomEvent_2");

	Params::UGA_HighTower_Date_BallLightning_C_CustomEvent_2_Params Parms{};

	Parms.ProjectileSpawned = ProjectileSpawned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C.ExecuteUbergraph_GA_HighTower_Date_BallLightning
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_NetworkSyncPoint*CallFunc_WaitNetSync_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HoldTime                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_Min_Hold_Time_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Check_Min_Hold_Time_MinTimeRemaining                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_NotifyTag                                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         K2Node_CustomEvent_ProjectileSpawned                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_Date_BallLightning_C::ExecuteUbergraph_GA_HighTower_Date_BallLightning(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, float K2Node_Event_HoldTime, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_bWasCancelled, bool CallFunc_Check_Min_Hold_Time_Success, float CallFunc_Check_Min_Hold_Time_MinTimeRemaining, const struct FGameplayTag& K2Node_Event_NotifyTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class AFortProjectileBase* K2Node_CustomEvent_ProjectileSpawned, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_Date_BallLightning_C", "ExecuteUbergraph_GA_HighTower_Date_BallLightning");

	Params::UGA_HighTower_Date_BallLightning_C_ExecuteUbergraph_GA_HighTower_Date_BallLightning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_1 = CallFunc_WaitGameplayTagAdd_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_WaitNetSync_ReturnValue = CallFunc_WaitNetSync_ReturnValue;
	Parms.K2Node_Event_HoldTime = K2Node_Event_HoldTime;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_Check_Min_Hold_Time_Success = CallFunc_Check_Min_Hold_Time_Success;
	Parms.CallFunc_Check_Min_Hold_Time_MinTimeRemaining = CallFunc_Check_Min_Hold_Time_MinTimeRemaining;
	Parms.K2Node_Event_NotifyTag = K2Node_Event_NotifyTag;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.K2Node_CustomEvent_ProjectileSpawned = K2Node_CustomEvent_ProjectileSpawned;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


