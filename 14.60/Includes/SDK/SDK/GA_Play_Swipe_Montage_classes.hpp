#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xAB0 - 0xAA8)
// BlueprintGeneratedClass GA_Play_Swipe_Montage.GA_Play_Swipe_Montage_C
class UGA_Play_Swipe_Montage_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Play_Swipe_Montage_C* GetDefaultObj();

	void OnCancelled_72D325494FA9FD623AC13DA17B9ACCEF();
	void OnInterrupted_72D325494FA9FD623AC13DA17B9ACCEF();
	void OnBlendOut_72D325494FA9FD623AC13DA17B9ACCEF();
	void OnCompleted_72D325494FA9FD623AC13DA17B9ACCEF();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Play_Swipe_Montage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


