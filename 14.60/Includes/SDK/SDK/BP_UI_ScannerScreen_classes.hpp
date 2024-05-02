#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x7D8 - 0x7A0)
// BlueprintGeneratedClass BP_UI_ScannerScreen.BP_UI_ScannerScreen_C
class ABP_UI_ScannerScreen_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      ScreenWidget;                                      // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ErrorTimeline_Switch_EBBEA5504EC9CD2C274D38AA3BFC1EEF; // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ErrorTimeline__Direction_EBBEA5504EC9CD2C274D38AA3BFC1EEF; // 0x7BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B4A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ErrorTimeline;                                     // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ScannerScreen_C*                   Widget_Screen;                                     // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TimeoutHandle;                                     // 0x7D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_UI_ScannerScreen_C* GetDefaultObj();

	void ErrorTimeline__FinishedFunc();
	void ErrorTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ScreenEventError(bool Reverse);
	void ScreenEventSuccess(class FText SuccessText);
	void ScreenEventFailure(class FText FailureText);
	void ScreenEventScan();
	void ScreenEventDismiss();
	void ScreenEventTargetLost(class FText LostText);
	void ExecuteUbergraph_BP_UI_ScannerScreen(int32 EntryPoint, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, class FText K2Node_CustomEvent_SuccessText, class UMaterialInstanceDynamic* CallFunc_GetMaterialInstance_ReturnValue, class FText K2Node_CustomEvent_FailureText, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUI_ScannerScreen_C* K2Node_DynamicCast_AsUI_Scanner_Screen, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Reverse, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText K2Node_CustomEvent_LostText, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue);
};

}


