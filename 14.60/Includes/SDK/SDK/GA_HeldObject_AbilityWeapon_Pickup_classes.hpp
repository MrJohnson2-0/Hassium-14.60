#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xAB8 - 0xAA8)
// BlueprintGeneratedClass GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C
class UGA_HeldObject_AbilityWeapon_Pickup_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_HeldObject_AbilityWeapon_Pickup_C* GetDefaultObj();

	void OnCancelled_064121774728AAB46B8294B952EF27BA();
	void OnInterrupted_064121774728AAB46B8294B952EF27BA();
	void OnBlendOut_064121774728AAB46B8294B952EF27BA();
	void OnCompleted_064121774728AAB46B8294B952EF27BA();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HeldObject_AbilityWeapon_Pickup(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


