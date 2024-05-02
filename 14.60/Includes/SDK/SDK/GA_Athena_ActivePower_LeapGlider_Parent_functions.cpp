#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C
// (None)

class UClass* UGA_Athena_ActivePower_LeapGlider_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_ActivePower_LeapGlider_Parent_C");

	return Clss;
}


// GA_Athena_ActivePower_LeapGlider_Parent_C GA_Athena_ActivePower_LeapGlider_Parent.Default__GA_Athena_ActivePower_LeapGlider_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_ActivePower_LeapGlider_Parent_C* UGA_Athena_ActivePower_LeapGlider_Parent_C::GetDefaultObj()
{
	static class UGA_Athena_ActivePower_LeapGlider_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_ActivePower_LeapGlider_Parent_C*>(UGA_Athena_ActivePower_LeapGlider_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.InitAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEmitterCameraLensEffectBase*CallFunc_SpawnCameraLensEffect_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_LeapGlider_Parent_C::InitAbility(bool CallFunc_IsValidClass_ReturnValue, class AEmitterCameraLensEffectBase* CallFunc_SpawnCameraLensEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "InitAbility");

	Params::UGA_Athena_ActivePower_LeapGlider_Parent_C_InitAbility_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_SpawnCameraLensEffect_ReturnValue = CallFunc_SpawnCameraLensEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.OnSync_5B9655A74696A7C0515A278467F52358
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::OnSync_5B9655A74696A7C0515A278467F52358()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "OnSync_5B9655A74696A7C0515A278467F52358");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.Added_9CF55B3043720DD4EE05809F2B45DD91
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::Added_9CF55B3043720DD4EE05809F2B45DD91()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "Added_9CF55B3043720DD4EE05809F2B45DD91");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.OnSync_48D3266A4217EF7058D7FCA507015CB5
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::OnSync_48D3266A4217EF7058D7FCA507015CB5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "OnSync_48D3266A4217EF7058D7FCA507015CB5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.EventReceived_46002FDB48565B7FA88DA089C488CA73
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_ActivePower_LeapGlider_Parent_C::EventReceived_46002FDB48565B7FA88DA089C488CA73(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "EventReceived_46002FDB48565B7FA88DA089C488CA73");

	Params::UGA_Athena_ActivePower_LeapGlider_Parent_C_EventReceived_46002FDB48565B7FA88DA089C488CA73_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.OnSync_3ADE1BE041AF08C4CB1C9FA374F2E496
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::OnSync_3ADE1BE041AF08C4CB1C9FA374F2E496()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "OnSync_3ADE1BE041AF08C4CB1C9FA374F2E496");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.OnSync_68C1AC134C9324B6EC0F089B02953286
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::OnSync_68C1AC134C9324B6EC0F089B02953286()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "OnSync_68C1AC134C9324B6EC0F089B02953286");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.CleanupAbility
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::CleanupAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "CleanupAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.CastMontageBlendOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::CastMontageBlendOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "CastMontageBlendOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.CastMontageNotifyEndAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::CastMontageNotifyEndAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "CastMontageNotifyEndAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.CastMontageCancelledOrInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::CastMontageCancelledOrInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "CastMontageCancelledOrInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.PowerCommitFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::PowerCommitFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "PowerCommitFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.CastMontageNotifyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_LeapGlider_Parent_C::CastMontageNotifyStart(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "CastMontageNotifyStart");

	Params::UGA_Athena_ActivePower_LeapGlider_Parent_C_CastMontageNotifyStart_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.MovementModeChangeFailSafe
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PreviousCustomMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_LeapGlider_Parent_C::MovementModeChangeFailSafe(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "MovementModeChangeFailSafe");

	Params::UGA_Athena_ActivePower_LeapGlider_Parent_C_MovementModeChangeFailSafe_Params Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.GenericFailSafe
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::GenericFailSafe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "GenericFailSafe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.OnLand
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGA_Athena_ActivePower_LeapGlider_Parent_C::OnLand(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "OnLand");

	Params::UGA_Athena_ActivePower_LeapGlider_Parent_C_OnLand_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ActivePower_LeapGlider_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "K2_OnEndAbility");

	Params::UGA_Athena_ActivePower_LeapGlider_Parent_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.BoardDroppedMidGlide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*              ItemDropped                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_LeapGlider_Parent_C::BoardDroppedMidGlide(class UFortWorldItem* ItemDropped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "BoardDroppedMidGlide");

	Params::UGA_Athena_ActivePower_LeapGlider_Parent_C_BoardDroppedMidGlide_Params Parms{};

	Parms.ItemDropped = ItemDropped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.WeaponUnequipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::WeaponUnequipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "WeaponUnequipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.HandleItemEquip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_LeapGlider_Parent_C::HandleItemEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "HandleItemEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_LeapGlider_Parent.GA_Athena_ActivePower_LeapGlider_Parent_C.ExecuteUbergraph_GA_Athena_ActivePower_LeapGlider_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_NetworkSyncPoint*CallFunc_WaitNetSync_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_CustomEvent_Payload                                       (None)
// struct FGameplayEventData          Temp_struct_Variable                                             (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_NetworkSyncPoint*CallFunc_WaitNetSync_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAbilityTask_NetworkSyncPoint*CallFunc_WaitNetSync_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Event_NotifyTag                                           (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_PrevMovementMode                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_PreviousCustomMode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortWorldItem*              K2Node_CustomEvent_ItemDropped                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class UAbilityTask_NetworkSyncPoint*CallFunc_WaitNetSync_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_SetDuration_ReturnValue                                 (None)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_LeapGlider_Parent_C::ExecuteUbergraph_GA_Athena_ActivePower_LeapGlider_Parent(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FGameplayTag& K2Node_Event_NotifyTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_K2_CommitAbility_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool K2Node_Event_bWasCancelled, class UFortWorldItem* K2Node_CustomEvent_ItemDropped, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_5, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_LeapGlider_Parent_C", "ExecuteUbergraph_GA_Athena_ActivePower_LeapGlider_Parent");

	Params::UGA_Athena_ActivePower_LeapGlider_Parent_C_ExecuteUbergraph_GA_Athena_ActivePower_LeapGlider_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_WaitNetSync_ReturnValue = CallFunc_WaitNetSync_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_WaitNetSync_ReturnValue_1 = CallFunc_WaitNetSync_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_WaitNetSync_ReturnValue_2 = CallFunc_WaitNetSync_ReturnValue_2;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_NotifyTag = K2Node_Event_NotifyTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_PrevMovementMode = K2Node_CustomEvent_PrevMovementMode;
	Parms.K2Node_CustomEvent_PreviousCustomMode = K2Node_CustomEvent_PreviousCustomMode;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_CustomEvent_ItemDropped = K2Node_CustomEvent_ItemDropped;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_WaitNetSync_ReturnValue_3 = CallFunc_WaitNetSync_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput = CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_SetDuration_ReturnValue = CallFunc_SetDuration_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


