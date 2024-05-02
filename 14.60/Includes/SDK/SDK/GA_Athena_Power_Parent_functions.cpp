#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Power_Parent.GA_Athena_Power_Parent_C
// (None)

class UClass* UGA_Athena_Power_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Power_Parent_C");

	return Clss;
}


// GA_Athena_Power_Parent_C GA_Athena_Power_Parent.Default__GA_Athena_Power_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Power_Parent_C* UGA_Athena_Power_Parent_C::GetDefaultObj()
{
	static class UGA_Athena_Power_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Power_Parent_C*>(UGA_Athena_Power_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_Power_Parent.GA_Athena_Power_Parent_C.AddGCLoop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               WithParams                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters      GameplayCueParameters                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               bRemoveOnAbilityEnd                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Power_Parent_C::AddGCLoop(const struct FGameplayTag& GameplayCueTag, bool WithParams, struct FGameplayCueParameters& GameplayCueParameters, bool bRemoveOnAbilityEnd, bool CallFunc_NotEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Power_Parent_C", "AddGCLoop");

	Params::UGA_Athena_Power_Parent_C_AddGCLoop_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.WithParams = WithParams;
	Parms.GameplayCueParameters = GameplayCueParameters;
	Parms.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue = CallFunc_NotEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Power_Parent.GA_Athena_Power_Parent_C.GetRowAtLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScalableFloat              Row                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAbilityLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGA_Athena_Power_Parent_C::GetRowAtLevel(struct FScalableFloat& Row, int32 CallFunc_GetAbilityLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Power_Parent_C", "GetRowAtLevel");

	Params::UGA_Athena_Power_Parent_C_GetRowAtLevel_Params Parms{};

	Parms.Row = Row;
	Parms.CallFunc_GetAbilityLevel_ReturnValue = CallFunc_GetAbilityLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_Power_Parent.GA_Athena_Power_Parent_C.ActivationGCParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)

struct FGameplayCueParameters UGA_Athena_Power_Parent_C::ActivationGCParams()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Power_Parent_C", "ActivationGCParams");

	Params::UGA_Athena_Power_Parent_C_ActivationGCParams_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Athena_Power_Parent.GA_Athena_Power_Parent_C.PlayBurstGC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               WithParams                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters      GameplayCueParameters                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_Power_Parent_C::PlayBurstGC(const struct FGameplayTag& GameplayCueTag, bool WithParams, struct FGameplayCueParameters& GameplayCueParameters, bool CallFunc_NotEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Power_Parent_C", "PlayBurstGC");

	Params::UGA_Athena_Power_Parent_C_PlayBurstGC_Params Parms{};

	Parms.GameplayCueTag = GameplayCueTag;
	Parms.WithParams = WithParams;
	Parms.GameplayCueParameters = GameplayCueParameters;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue = CallFunc_NotEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Power_Parent.GA_Athena_Power_Parent_C.InitAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters      CallFunc_ActivationGCParams_ReturnValue                          (ContainsInstancedReference)

void UGA_Athena_Power_Parent_C::InitAbility(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FGameplayCueParameters& CallFunc_ActivationGCParams_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Power_Parent_C", "InitAbility");

	Params::UGA_Athena_Power_Parent_C_InitAbility_Params Parms{};

	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ActivationGCParams_ReturnValue = CallFunc_ActivationGCParams_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_Power_Parent.GA_Athena_Power_Parent_C.PowerCommitFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Power_Parent_C::PowerCommitFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Power_Parent_C", "PowerCommitFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_Power_Parent.GA_Athena_Power_Parent_C.ExecuteUbergraph_GA_Athena_Power_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Power_Parent_C::ExecuteUbergraph_GA_Athena_Power_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_Power_Parent_C", "ExecuteUbergraph_GA_Athena_Power_Parent");

	Params::UGA_Athena_Power_Parent_C_ExecuteUbergraph_GA_Athena_Power_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


