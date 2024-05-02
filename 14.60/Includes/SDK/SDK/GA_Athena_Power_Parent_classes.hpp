#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0xAC9 - 0xAA8)
// BlueprintGeneratedClass GA_Athena_Power_Parent.GA_Athena_Power_Parent_C
class UGA_Athena_Power_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          GC_Activation;                                     // 0xAB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ActivationGCUsesParams;                            // 0xAB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_67C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreAbilityCommit;                               // 0xAC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_Athena_Power_Parent_C* GetDefaultObj();

	void AddGCLoop(const struct FGameplayTag& GameplayCueTag, bool WithParams, struct FGameplayCueParameters& GameplayCueParameters, bool bRemoveOnAbilityEnd, bool CallFunc_NotEqual_GameplayTag_ReturnValue);
	float GetRowAtLevel(struct FScalableFloat& Row, int32 CallFunc_GetAbilityLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue);
	struct FGameplayCueParameters ActivationGCParams();
	void PlayBurstGC(const struct FGameplayTag& GameplayCueTag, bool WithParams, struct FGameplayCueParameters& GameplayCueParameters, bool CallFunc_NotEqual_GameplayTag_ReturnValue);
	void InitAbility(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FGameplayCueParameters& CallFunc_ActivationGCParams_ReturnValue);
	void PowerCommitFailed();
	void ExecuteUbergraph_GA_Athena_Power_Parent(int32 EntryPoint);
};

}


