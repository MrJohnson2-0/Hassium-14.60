#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond.GE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C
class UGE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C : public UGameplayEffectCustomApplicationRequirement
{
public:
	TArray<struct FGameplayTag>                  ForbiddenActorTagList;                             // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGE_HighTower_SquashWhirlwindBlast_InitialKnockBackUpwardCond_C* GetDefaultObj();

	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


