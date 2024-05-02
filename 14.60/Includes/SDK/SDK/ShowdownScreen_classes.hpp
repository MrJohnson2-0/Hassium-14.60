#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x5C0 - 0x4F8)
// WidgetBlueprintGeneratedClass ShowdownScreen.ShowdownScreen_C
class UShowdownScreen_C : public UFortShowdownScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Outro;                                             // 0x500(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x508(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCircleArrowButton_C*                  CircleArrowButton_Left;                            // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircleArrowButton_C*                  CircleArrowButton_Right;                           // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_ErrorSwitcher;                // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG;                                          // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoTournamentsContent;                              // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_NoTournamentContent;                       // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*             ShowdownTournamentTile;                            // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*             ShowdownTournamentTile_0;                          // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*             ShowdownTournamentTile_1;                          // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Posters;                                   // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSwipePanel*                       SwipePanel;                                        // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              TournamentsContent;                                // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Input_ShowAbout;                                   // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSlateColor                           PrimaryColor;                                      // 0x580(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   Input_ShowDetails;                                 // 0x5A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWidget*                               SelectedTile;                                      // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShowdownScreen_C* GetDefaultObj();

	void BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BP_OnActivated();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature();
	void OnInputModeChanged(bool bUsingGamepad);
	void TournamentListSelect(class UWidget* CurrentWidget);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SelectedFrontTournament(bool bFrontIsSelected);
	void SelectedEndTournament(bool bEndIsSelected);
	void BP_OnDeactivated();
	void ExecuteUbergraph_ShowdownScreen(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_ComponentBoundEvent_CurrentOffset, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, bool K2Node_Event_bUsingGamepad, const struct FVector4& CallFunc_GetSafeZonePadding_SafePadding, const struct FVector2D& CallFunc_GetSafeZonePadding_SafePaddingScale, const struct FVector4& CallFunc_GetSafeZonePadding_SpillOverPadding, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_3, const struct FMargin& K2Node_MakeStruct_Margin, class UWidget* K2Node_CustomEvent_CurrentWidget, enum class ESlateVisibility Temp_byte_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UShowdownTournamentTile_C* K2Node_DynamicCast_AsShowdown_Tournament_Tile, bool K2Node_DynamicCast_bSuccess, class UShowdownTournamentTile_C* K2Node_DynamicCast_AsShowdown_Tournament_Tile_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_bFrontIsSelected, bool K2Node_Event_bEndIsSelected, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1);
};

}


