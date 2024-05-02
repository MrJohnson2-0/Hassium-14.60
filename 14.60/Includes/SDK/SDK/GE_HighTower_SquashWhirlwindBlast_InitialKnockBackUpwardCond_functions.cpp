#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond.GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C
// (None)

class UClass* UGE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C");

	return Clss;
}


// GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond.Default__GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C* UGE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C::GetDefaultObj()
{
	static class UGE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C*>(UGE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond.GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C.CanApplyGameplayEffect
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UGameplayEffect*             GameplayEffect                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent*     ASC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C::CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C", "CanApplyGameplayEffect");

	Params::UGE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C_CanApplyGameplayEffect_Params Parms{};

	Parms.GameplayEffect = GameplayEffect;
	Parms.Spec = Spec;
	Parms.ASC = ASC;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput = CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


