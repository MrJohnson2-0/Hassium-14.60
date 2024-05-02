#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x4F0 - 0x4D0)
// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_VisibilityMannequin.BP_Frontend_EventLevel_NavObject_VisibilityMannequin_C
class ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C : public ABP_Frontend_EventLevel_NavObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortNavigationVisibilityComponent*    FortNavigationVisibility;                          // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  Mannequin;                                         // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          VisTimerHandle;                                    // 0x4E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Frontend_EventLevel_NavObject_VisibilityMannequin_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void BndEvt__FortNavigationVisibility_K2Node_ComponentBoundEvent_0_SimpleVisibilityResponseDelegate__DelegateSignature();
	void BndEvt__FortNavigationVisibility_K2Node_ComponentBoundEvent_1_SimpleVisibilityResponseDelegate__DelegateSignature();
	void HideMannequin();
	void ShowMannequin();
	void ClearVisTimer();
	void ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_VisibilityMannequin(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
};

}


