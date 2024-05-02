#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C
// (None)

class UClass* UGA_Athena_ActivePower_StandardActivation_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_ActivePower_StandardActivation_Parent_C");

	return Clss;
}


// GA_Athena_ActivePower_StandardActivation_Parent_C GA_Athena_ActivePower_StandardActivation_Parent.Default__GA_Athena_ActivePower_StandardActivation_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_ActivePower_StandardActivation_Parent_C* UGA_Athena_ActivePower_StandardActivation_Parent_C::GetDefaultObj()
{
	static class UGA_Athena_ActivePower_StandardActivation_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_ActivePower_StandardActivation_Parent_C*>(UGA_Athena_ActivePower_StandardActivation_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.RemoveSpecifiedEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1           (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_StandardActivation_Parent_C::RemoveSpecifiedEffects(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FGameplayTag& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "RemoveSpecifiedEffects");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_RemoveSpecifiedEffects_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1 = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.InitAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::InitAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "InitAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.ClearReleaseCameraMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::ClearReleaseCameraMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "ClearReleaseCameraMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.Set Valid Camera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ActivePower_StandardActivation_Parent_C::Set_Valid_Camera(class UClass* InputPin, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "Set Valid Camera");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_Set_Valid_Camera_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.InputHeldLoopGCParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)

struct FGameplayCueParameters UGA_Athena_ActivePower_StandardActivation_Parent_C::InputHeldLoopGCParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "InputHeldLoopGCParams");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_InputHeldLoopGCParams_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.MaxChargeGCParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)

struct FGameplayCueParameters UGA_Athena_ActivePower_StandardActivation_Parent_C::MaxChargeGCParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "MaxChargeGCParams");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_MaxChargeGCParams_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.CalculateCharge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ChargeTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_StandardActivation_Parent_C::CalculateCharge(float ChargeTime, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_GetFloatValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "CalculateCharge");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_CalculateCharge_Params Parms{};

	Parms.ChargeTime = ChargeTime;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.CalculateReleaseTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReleaseTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_StandardActivation_Parent_C::CalculateReleaseTime(float ReleaseTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "CalculateReleaseTime");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_CalculateReleaseTime_Params Parms{};

	Parms.ReleaseTime = ReleaseTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.OnRelease_018C747C4949783488106FB2DE06764D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeHeld                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_StandardActivation_Parent_C::OnRelease_018C747C4949783488106FB2DE06764D(float TimeHeld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "OnRelease_018C747C4949783488106FB2DE06764D");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_OnRelease_018C747C4949783488106FB2DE06764D_Params Parms{};

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.Added_E9914498452A35619843A98F9F1B9632
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::Added_E9914498452A35619843A98F9F1B9632()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "Added_E9914498452A35619843A98F9F1B9632");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.Added_801F31CD4D620EDDB68D17B410BDB787
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::Added_801F31CD4D620EDDB68D17B410BDB787()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "Added_801F31CD4D620EDDB68D17B410BDB787");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.Added_07BC1D794BE0002195A38CB4134458E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::Added_07BC1D794BE0002195A38CB4134458E6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "Added_07BC1D794BE0002195A38CB4134458E6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.OnAbilityActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::OnAbilityActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "OnAbilityActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ActivePower_StandardActivation_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "K2_OnEndAbility");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.PlayerEnterWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             FortPlayerPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_StandardActivation_Parent_C::PlayerEnterWater(class AFortPlayerPawn* FortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "PlayerEnterWater");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_PlayerEnterWater_Params Parms{};

	Parms.FortPlayerPawn = FortPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.SetWaterBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::SetWaterBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "SetWaterBinding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.ReachedMaxCharge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::ReachedMaxCharge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "ReachedMaxCharge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.InitActivateOnRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::InitActivateOnRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "InitActivateOnRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.ResetActivationReleaseDoOnce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::ResetActivationReleaseDoOnce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "ResetActivationReleaseDoOnce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HoldTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_StandardActivation_Parent_C::Released(float HoldTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "Released");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_Released_Params Parms{};

	Parms.HoldTime = HoldTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.SetupCancelBinds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::SetupCancelBinds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "SetupCancelBinds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.TurnOffHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_StandardActivation_Parent_C::TurnOffHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "TurnOffHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_StandardActivation_Parent.GA_Athena_ActivePower_StandardActivation_Parent_C.ExecuteUbergraph_GA_Athena_ActivePower_StandardActivation_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPlayerPawn*             K2Node_CustomEvent_FortPlayerPawn                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGameplayCueParameters      CallFunc_MaxChargeGCParams_ReturnValue                           (ContainsInstancedReference)
// struct FGameplayCueParameters      CallFunc_InputHeldLoopGCParams_ReturnValue                       (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FGameplayTagContainer       CallFunc_BP_GetCooldownTags_ReturnValue                          (None)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortGetPlayerPawnExecutionsCallFunc_GetAvatarAsValidFortPlayerPawn_OutExec                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCooldownTagsActive_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_HoldTime                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitInputRelease*CallFunc_WaitInputRelease_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortGetPlayerPawnExecutionsCallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeHeld                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)

void UGA_Athena_ActivePower_StandardActivation_Parent_C::ExecuteUbergraph_GA_Athena_ActivePower_StandardActivation_Parent(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* K2Node_CustomEvent_FortPlayerPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayCueParameters& CallFunc_MaxChargeGCParams_ReturnValue, const struct FGameplayCueParameters& CallFunc_InputHeldLoopGCParams_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTagContainer& CallFunc_BP_GetCooldownTags_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, enum class EFortGetPlayerPawnExecutions CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec, class AFortPlayerPawn* CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsCooldownTagsActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_CustomEvent_HoldTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float Temp_float_Variable, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, enum class EFortGetPlayerPawnExecutions CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1, class AFortPlayerPawn* CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1, float K2Node_CustomEvent_TimeHeld, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_StandardActivation_Parent_C", "ExecuteUbergraph_GA_Athena_ActivePower_StandardActivation_Parent");

	Params::UGA_Athena_ActivePower_StandardActivation_Parent_C_ExecuteUbergraph_GA_Athena_ActivePower_StandardActivation_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_FortPlayerPawn = K2Node_CustomEvent_FortPlayerPawn;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MaxChargeGCParams_ReturnValue = CallFunc_MaxChargeGCParams_ReturnValue;
	Parms.CallFunc_InputHeldLoopGCParams_ReturnValue = CallFunc_InputHeldLoopGCParams_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_BP_GetCooldownTags_ReturnValue = CallFunc_BP_GetCooldownTags_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec = CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn = CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsCooldownTagsActive_ReturnValue = CallFunc_IsCooldownTagsActive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_HoldTime = K2Node_CustomEvent_HoldTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_WaitInputRelease_ReturnValue = CallFunc_WaitInputRelease_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_1 = CallFunc_WaitGameplayTagAdd_ReturnValue_1;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue_2 = CallFunc_WaitGameplayTagAdd_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1 = CallFunc_GetAvatarAsValidFortPlayerPawn_OutExec_1;
	Parms.CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1 = CallFunc_GetAvatarAsValidFortPlayerPawn_OutFortPlayerPawn_1;
	Parms.K2Node_CustomEvent_TimeHeld = K2Node_CustomEvent_TimeHeld;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


