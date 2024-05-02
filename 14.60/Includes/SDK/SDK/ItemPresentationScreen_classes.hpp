#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x771 - 0x6B8)
// WidgetBlueprintGeneratedClass ItemPresentationScreen.ItemPresentationScreen_C
class UItemPresentationScreen_C : public UFortItemPresentationScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PaidItemFadeInAll;                                 // 0x6C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PaidItemFadeIn;                                    // 0x6C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ButtonScrollIn;                                    // 0x6D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Fade;                                              // 0x6D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Equipped;                                          // 0x6E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InitialStateSet;                                   // 0x6E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      UnOwnedMessage;                                    // 0x6F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Collected;                                         // 0x6F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x700(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      ClaimMoreRewards;                                  // 0x708(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DefaultContent;                                    // 0x710(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               EntryBoxDummy_PaidItems;                           // 0x718(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FakeHackGradient;                                  // 0x720(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LeftsideContentSwitcher;                           // 0x728(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PaidItemBacking;                                   // 0x730(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RegularButtons;                                    // 0x738(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x740(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Contents;                                  // 0x748(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_Buttons;                                  // 0x750(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_FreeVsPaidItemsEntryBox;                  // 0x758(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_FreeVsPaidItemsListView;                  // 0x760(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bDelayIntro;                                       // 0x768(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B1F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeFloat;                                         // 0x76C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bSwitchingPhases;                                  // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UItemPresentationScreen_C* GetDefaultObj();

	void HandleFadeAnimFinished(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HandlePaidItemIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void StartFade(bool bCloseScreen, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PlayIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleAnimationInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void BP_OnActivated();
	void OnUpdateHeaderInformation(struct FFortItemHeaderInformation& HeaderInformation);
	void OnUpdateItemInformation(class UFortItem* FortItem);
	void OnUpdateOwnedItemText(bool bShowText);
	void OnUpdateItemEquipped();
	void OnInitialIconAnimation(bool bUsingListView);
	void OnDisplayEquipButton(bool bCanEquip);
	void OnCloseScreen();
	void OnUpdateNextButtonText(bool bShowNext);
	void OnFinishDisplayingHotItems(bool bShowOtherRewards);
	void OnDisplayItemsCollectedText(bool bCloseScreen);
	void SwitchToPaidItems();
	void OnCloseScreenWithoutAnimations();
	void ExecuteUbergraph_ItemPresentationScreen(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header, bool K2Node_DynamicCast_bSuccess, class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget, bool K2Node_DynamicCast_bSuccess_2, const struct FFortItemHeaderInformation& K2Node_Event_HeaderInformation, class UFortItem* K2Node_Event_FortItem, bool K2Node_Event_bShowText, bool K2Node_Event_bUsingListView, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_Event_bCanEquip, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Array_Get_Item, float CallFunc_Multiply_IntFloat_ReturnValue, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_Event_bShowNext, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_Event_bShowOtherRewards, bool K2Node_Event_bCloseScreen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button_1, bool K2Node_DynamicCast_bSuccess_6, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2, bool K2Node_DynamicCast_bSuccess_7, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker, bool K2Node_DynamicCast_bSuccess_8, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_1, bool K2Node_DynamicCast_bSuccess_9, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker, bool K2Node_DynamicCast_bSuccess_10, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1, bool K2Node_DynamicCast_bSuccess_11, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2, bool K2Node_DynamicCast_bSuccess_12, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_2, bool K2Node_DynamicCast_bSuccess_13, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_3, bool K2Node_DynamicCast_bSuccess_14, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3, bool K2Node_DynamicCast_bSuccess_15, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item_1, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry_1, bool K2Node_DynamicCast_bSuccess_16, float CallFunc_Multiply_IntFloat_ReturnValue_1);
};

}


