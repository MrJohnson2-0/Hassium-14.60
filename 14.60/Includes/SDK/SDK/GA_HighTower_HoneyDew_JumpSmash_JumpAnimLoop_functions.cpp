#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C
// (None)

class UClass* UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C");

	return Clss;
}


// GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.Default__GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C* UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::GetDefaultObj()
{
	static class UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C*>(UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnNotifyEnd_93C0045E453E3CB76DE8D1A7203DD472
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::OnNotifyEnd_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "OnNotifyEnd_93C0045E453E3CB76DE8D1A7203DD472");

	Params::UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnNotifyEnd_93C0045E453E3CB76DE8D1A7203DD472_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnNotifyBegin_93C0045E453E3CB76DE8D1A7203DD472
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::OnNotifyBegin_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "OnNotifyBegin_93C0045E453E3CB76DE8D1A7203DD472");

	Params::UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnNotifyBegin_93C0045E453E3CB76DE8D1A7203DD472_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnCancelled_93C0045E453E3CB76DE8D1A7203DD472
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::OnCancelled_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "OnCancelled_93C0045E453E3CB76DE8D1A7203DD472");

	Params::UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnCancelled_93C0045E453E3CB76DE8D1A7203DD472_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnInterrupted_93C0045E453E3CB76DE8D1A7203DD472
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::OnInterrupted_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "OnInterrupted_93C0045E453E3CB76DE8D1A7203DD472");

	Params::UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnInterrupted_93C0045E453E3CB76DE8D1A7203DD472_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnBlendOut_93C0045E453E3CB76DE8D1A7203DD472
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::OnBlendOut_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "OnBlendOut_93C0045E453E3CB76DE8D1A7203DD472");

	Params::UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnBlendOut_93C0045E453E3CB76DE8D1A7203DD472_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnCompleted_93C0045E453E3CB76DE8D1A7203DD472
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::OnCompleted_93C0045E453E3CB76DE8D1A7203DD472(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "OnCompleted_93C0045E453E3CB76DE8D1A7203DD472");

	Params::UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnCompleted_93C0045E453E3CB76DE8D1A7203DD472_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnMovementModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PreviousCustomMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::OnMovementModeChanged(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "OnMovementModeChanged");

	Params::UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnMovementModeChanged_Params Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.StopTheFallLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::StopTheFallLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "StopTheFallLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "K2_OnEndAbility");

	Params::UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_5                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_4                                   (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_3                                   (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_2                                   (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag_1                                   (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_NotifyTag                                     (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_PrevMovementMode                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_PreviousCustomMode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UFortAbilityTask_PlayMontageWaitNotify*CallFunc_PlayMontageAndWaitNotify_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C::ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_5, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_NotifyTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayTag& Temp_struct_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_NotEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UFortAbilityTask_PlayMontageWaitNotify* CallFunc_PlayMontageAndWaitNotify_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C", "ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop");

	Params::UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyTag_5 = K2Node_CustomEvent_NotifyTag_5;
	Parms.K2Node_CustomEvent_NotifyTag_4 = K2Node_CustomEvent_NotifyTag_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyTag_3 = K2Node_CustomEvent_NotifyTag_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyTag_2 = K2Node_CustomEvent_NotifyTag_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyTag_1 = K2Node_CustomEvent_NotifyTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyTag = K2Node_CustomEvent_NotifyTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_PrevMovementMode = K2Node_CustomEvent_PrevMovementMode;
	Parms.K2Node_CustomEvent_PreviousCustomMode = K2Node_CustomEvent_PreviousCustomMode;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_PlayMontageAndWaitNotify_ReturnValue = CallFunc_PlayMontageAndWaitNotify_ReturnValue;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


