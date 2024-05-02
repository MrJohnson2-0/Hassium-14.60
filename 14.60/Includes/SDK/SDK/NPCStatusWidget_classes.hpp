#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x294 - 0x260)
// WidgetBlueprintGeneratedClass NPCStatusWidget.NPCStatusWidget_C
class UNPCStatusWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNPCStatusWidgetBar_C*                 Bar_Health;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusWidgetBar_C*                 Bar_Shield;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          VisibiltyTimer;                                    // 0x278(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            VisibilityChanged;                                 // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        StatusWidgetVisibleDuration;                       // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNPCStatusWidget_C* GetDefaultObj();

	void Construct();
	void EventUpdateStatus(float Health);
	void EventHideStatus();
	void ChangeWidgetVisibleDuration(float StatusWidgetVisibleDuration);
	void ExecuteUbergraph_NPCStatusWidget(int32 EntryPoint, float K2Node_CustomEvent_StatusWidgetVisibleDuration, float K2Node_CustomEvent_health, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void VisibilityChanged__DelegateSignature(bool bVisible);
};

}


