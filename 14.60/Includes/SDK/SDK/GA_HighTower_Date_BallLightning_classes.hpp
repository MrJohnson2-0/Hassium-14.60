#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0xF9C - 0xF80)
// BlueprintGeneratedClass GA_HighTower_Date_BallLightning.GA_HighTower_Date_BallLightning_C
class UGA_HighTower_Date_BallLightning_C : public UGA_Athena_ActivePower_SpawnProjectile_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         FiringAllowed;                                     // 0xF88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InputReleased;                                     // 0xF89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_76E9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          T_OkToThrowNotify;                                 // 0xF8C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        HoldStartTime;                                     // 0xF94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinHoldTime;                                       // 0xF98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_HighTower_Date_BallLightning_C* GetDefaultObj();

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue);
	void PowerSpawnProjectile(class AFortProjectileBase** ProjectileSpawned, class AFortProjectileBase* CallFunc_PowerSpawnProjectile_ProjectileSpawned);
	void Check_Min_Hold_Time(bool* Success, float* MinTimeRemaining, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1);
	void InitAbility(float CallFunc_GetGameTimeInSeconds_ReturnValue);
	void Added_60A0EC084FB8C048E3BA878CCFA25811();
	void Added_5CB6885747BB3160A88BD2880752E130();
	void OnSync_CD7C69E84CC97FE216AEA089D8A95231();
	void Released(float HoldTime);
	void K2_OnEndAbility(bool bWasCancelled);
	void CustomEvent_1();
	void MulticastThrow();
	void CastMontageNotifyStart(const struct FGameplayTag& NotifyTag);
	void K2_ActivateAbility();
	void CustomEvent_2(class AFortProjectileBase* ProjectileSpawned);
	void ExecuteUbergraph_GA_HighTower_Date_BallLightning(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, float K2Node_Event_HoldTime, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_bWasCancelled, bool CallFunc_Check_Min_Hold_Time_Success, float CallFunc_Check_Min_Hold_Time_MinTimeRemaining, const struct FGameplayTag& K2Node_Event_NotifyTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class AFortProjectileBase* K2Node_CustomEvent_ProjectileSpawned, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


