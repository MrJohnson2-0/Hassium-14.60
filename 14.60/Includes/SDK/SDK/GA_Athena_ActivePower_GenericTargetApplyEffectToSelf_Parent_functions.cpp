#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C
// (None)

class UClass* UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C");

	return Clss;
}


// GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.Default__GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C* UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::GetDefaultObj()
{
	static class UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C*>(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.MakeEffectSpec
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)

struct FGameplayEffectSpecHandle UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::MakeEffectSpec(bool CallFunc_IsValidClass_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C", "MakeEffectSpec");

	Params::UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C_MakeEffectSpec_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.ApplyEffectGCParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)

struct FGameplayCueParameters UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::ApplyEffectGCParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C", "ApplyEffectGCParams");

	Params::UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C_ApplyEffectGCParams_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.PowerCommitFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::PowerCommitFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C", "PowerCommitFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.CastMontageCancelledOrInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::CastMontageCancelledOrInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C", "CastMontageCancelledOrInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.CastMontageNotifyEndAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::CastMontageNotifyEndAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C", "CastMontageNotifyEndAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.CastMontageNotifyStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NotifyTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::CastMontageNotifyStart(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C", "CastMontageNotifyStart");

	Params::UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C_CastMontageNotifyStart_Params Parms{};

	Parms.NotifyTag = NotifyTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.ApplyEffectToSelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::ApplyEffectToSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C", "ApplyEffectToSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.CastMontageBlendOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::CastMontageBlendOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C", "CastMontageBlendOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.ExecuteUbergraph_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Event_NotifyTag                                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters      CallFunc_ApplyEffectGCParams_ReturnValue                         (ContainsInstancedReference)
// struct FGameplayEffectSpecHandle   CallFunc_MakeEffectSpec_ReturnValue                              (None)
// struct FActiveGameplayEffectHandle CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)

void UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::ExecuteUbergraph_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayTag& K2Node_Event_NotifyTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayCueParameters& CallFunc_ApplyEffectGCParams_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C", "ExecuteUbergraph_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent");

	Params::UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C_ExecuteUbergraph_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_NotifyTag = K2Node_Event_NotifyTag;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue = CallFunc_NotEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ApplyEffectGCParams_ReturnValue = CallFunc_ApplyEffectGCParams_ReturnValue;
	Parms.CallFunc_MakeEffectSpec_ReturnValue = CallFunc_MakeEffectSpec_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


