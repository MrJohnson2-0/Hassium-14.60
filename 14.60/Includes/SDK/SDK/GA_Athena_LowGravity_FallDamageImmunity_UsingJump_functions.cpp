#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_LowGravity_FallDamageImmunity_UsingJump.GA_Athena_LowGravity_FallDamageImmunity_UsingJump_C
// (None)

class UClass* UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_LowGravity_FallDamageImmunity_UsingJump_C");

	return Clss;
}


// GA_Athena_LowGravity_FallDamageImmunity_UsingJump_C GA_Athena_LowGravity_FallDamageImmunity_UsingJump.Default__GA_Athena_LowGravity_FallDamageImmunity_UsingJump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C* UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C::GetDefaultObj()
{
	static class UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C*>(UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_LowGravity_FallDamageImmunity_UsingJump.GA_Athena_LowGravity_FallDamageImmunity_UsingJump_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_LowGravity_FallDamageImmunity_UsingJump_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_LowGravity_FallDamageImmunity_UsingJump.GA_Athena_LowGravity_FallDamageImmunity_UsingJump_C.ExecuteUbergraph_GA_Athena_LowGravity_FallDamageImmunity_UsingJump
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  (None)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ReferenceParm, HasGetValueTypeHash)

void UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C::ExecuteUbergraph_GA_Athena_LowGravity_FallDamageImmunity_UsingJump(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_LowGravity_FallDamageImmunity_UsingJump_C", "ExecuteUbergraph_GA_Athena_LowGravity_FallDamageImmunity_UsingJump");

	Params::UGA_Athena_LowGravity_FallDamageImmunity_UsingJump_C_ExecuteUbergraph_GA_Athena_LowGravity_FallDamageImmunity_UsingJump_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


