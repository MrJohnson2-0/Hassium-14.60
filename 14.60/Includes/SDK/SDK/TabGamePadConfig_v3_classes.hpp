#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x480 - 0x388)
// WidgetBlueprintGeneratedClass TabGamePadConfig_v3.TabGamePadConfig_v3_C
class UTabGamePadConfig_v3_C : public UFortGamepadInputOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGamepadInfoSelectorPanel_v3_C*        GamepadInfoSelectorPanel_v3;                       // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadMappingInfo_v3_C*              GamepadMappingInfo_v3;                             // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            GamepadMappingInfoChanged;                         // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                        InputPresets;                                      // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FText>                          InputPresetNames_NoCustom;                         // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        PresetMappingIndex;                                // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlatformMappingIndex;                              // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CustomInputTemplatePresetIndex;                    // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B6E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGamepadKeyTextButton_C*               DisplayObject;                                     // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortInputActionGroup             CurrentInputActionGroup;                           // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7B6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomResetToDefaultConfig;                        // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CustomKeySelection;                                // 0x3F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  CustomActionSelection;                             // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CustomInputActionGroupSelectionIndex;              // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CustomActionSelectionIndex;                        // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  Key_None;                                          // 0x418(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                RadioButtonClass;                                  // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                RadioButtonStyle;                                  // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortOptionsMenuInputData*>     InputDataForActionsPanel;                          // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            TabGamePadConfigBack;                              // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            TabGamePadConfigApply;                             // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            TabGamePadActionsThatNeedBinds;                    // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UTabGamePadConfig_v3_C* GetDefaultObj();

	void GamepadInfoSelectorNavRight();
	void AreWeOkayWithThisChange(class FName ActionName, const struct FKey& Key, bool* IsOkay, const class FString& FullScreenMap_Local, class FName GamepadToggleFullscreenMapName_Local, class FName ToggleFullscreenMapName_Local, bool IsOkay_Local, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void HandleGamepadInfoSelectorFocus();
	void NavigateToSelectedConfig(int32 CallFunc_GetSelectedButtonIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue);
	void ChangeCustomClearVisibilityForInputType(enum class ECommonInputType InputType, bool K2Node_SwitchEnum_CmpSuccess);
	void ChangeCustomResetVisibilityForInputType(enum class ECommonInputType InputType, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleGamepadInfoSelectorApply();
	void HandleGamepadInfoSelectorBack(TArray<class FText>& CallFunc_AreAllImportantActionsBound_OutUnboundScreenLabels, bool CallFunc_AreAllImportantActionsBound_ReturnValue);
	void ChangeCustomTabListVisibilityForInputType(enum class ECommonInputType Selection, bool K2Node_SwitchEnum_CmpSuccess);
	TArray<struct FConfirmationDialogAction> CreateCustomResetToDefaultList(const TArray<struct FConfirmationDialogAction>& ReturnValue_Local, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, int32 CallFunc_Array_Add_ReturnValue);
	void CloseCustomActionsPanel(bool FocusLastButton);
	void SelectSameItemInActionsList(int32 IndexToSelect_Local, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UFortOptionsMenuInputData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetCustomGamepadInputPresetName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FKey& CallFunc_GetKeyForAction_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void SetupDisplayObject(class FName ActionName, const struct FKey& Key, class UGamepadKeyTextButton_C** DisplayObject, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortInputData* CallFunc_GetFortInputDataForBlueprint_ReturnValue, const class FString& CallFunc_GetCustomGamepadInputPresetName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_GetScreenLabel_ReturnValue);
	bool IsCustomConfig(int32 PresetIndex, bool CallFunc_IsCustomGamepadConfig_ReturnValue);
	void HandleGamepadMappingInfoChange(class FName CombatModeId_Local, class FName EditModeId_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, enum class ESubGame CallFunc_GetSubGame_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsCustomConfig_ReturnValue);
	void GetCurrentPlatformIndex(int32* PlatformIndex, const class FString& CallFunc_GetControllerPlatform_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	void UpdateData(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, int32 CallFunc_GetCurrentPlatformIndex_PlatformIndex, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue);
	void PreConstructData(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FText>& K2Node_MakeArray_Array, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFortRadioButtonItemStruct& K2Node_MakeStruct_FortRadioButtonItemStruct, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class FText>& K2Node_MakeArray_Array_1, class FText CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FFortRadioButtonItemStruct& K2Node_MakeStruct_FortRadioButtonItemStruct_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void InitializeData(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames, int32 CallFunc_Array_Add_ReturnValue, const struct FFortRadioButtonItemStruct& K2Node_MakeStruct_FortRadioButtonItemStruct, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsCustomGamepadConfig_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText Temp_text_Variable, int32 CallFunc_Array_Add_ReturnValue_1, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, const class FString& CallFunc_GetPlatformName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable_1, const class FString& CallFunc_GetPlatformName_ReturnValue_1, class FText K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, TArray<class FText>& K2Node_MakeArray_Array, class FText K2Node_Select_Default_1, class FText CallFunc_Array_Get_Item_1, const struct FFortRadioButtonItemStruct& K2Node_MakeStruct_FortRadioButtonItemStruct_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1);
	void DialogResult_017CD690454514A07B4DE5BE109AEC6E(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717(enum class EFortDialogResult Result, class FName ResultName);
	void Gamepad_Config_Changed(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void GamepadPlatformConfigChanged(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void CenterOnTab();
	void UpdateOptionsTab();
	void CustomDoResetToDefault();
	void CustomKeySelected_Bind(const struct FKey& Key);
	void CustomActionSelected_Bind(int32 SelectedIndex, class FName ActionName);
	void CustomClosedUsingBack_Bind();
	void CustomClearButton_Bind();
	void ModesTabSelected_Bind(class FName TabId);
	void HandleUsingGamepadChanged(enum class ECommonInputType NewInputType);
	void OnTabDeactivated_Bind();
	void OnTabActivated_Bind();
	void PreConstruct(bool IsDesignTime);
	void DeadZoneLookSettingValueChanged_Bind(float Value);
	void DeadZoneMoveSettingValueChanged_Bind(float Value);
	void Construct();
	void ExecuteUbergraph_TabGamePadConfig_v3(int32 EntryPoint, class UCommonButton* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonButton* K2Node_CustomEvent_AssociatedButton_1, int32 K2Node_CustomEvent_ButtonIndex_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FKey& K2Node_CustomEvent_Key, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 K2Node_CustomEvent_SelectedIndex, class FName K2Node_CustomEvent_ActionName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_GetInputDataIndexForActionName_ReturnValue, TArray<struct FConfirmationDialogAction>& CallFunc_CreateCustomResetToDefaultList_ReturnValue, int32 Temp_int_Variable_3, int32 K2Node_Select_Default, class FName CallFunc_MakeLiteralName_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowConfirmationDialog_NUI_ReturnValue, enum class ECommonGamepadType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class ECommonGamepadType Temp_byte_Variable_1, class FName K2Node_CustomEvent_TabId, enum class ECommonGamepadType Temp_byte_Variable_2, enum class ECommonGamepadType Temp_byte_Variable_3, int32 Temp_int_Variable_4, TArray<class UFortOptionsMenuInputData*>& CallFunc_GetActionItemsInGroup_ReturnValue, enum class ECommonGamepadType K2Node_Select_Default_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool K2Node_SwitchEnum_CmpSuccess, enum class ECommonInputType K2Node_Event_NewInputType, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EFortDialogResult Temp_byte_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_Event_IsDesignTime, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool CallFunc_IsCustomConfig_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_IsVisible_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, int32 CallFunc_GetInputDataIndexForActionName_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_3, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_4, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool CallFunc_HandleApply_PassThrough, enum class EFortDialogResult Temp_byte_Variable_5, bool CallFunc_HandleApply_PassThrough_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, float K2Node_CustomEvent_Value_1, enum class EFortDialogResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ResultName_1, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_GetSelectedTabId_ReturnValue, bool CallFunc_IsControllerDefaultInputType_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_4, bool CallFunc_AreWeOkayWithThisChange_IsOkay, bool CallFunc_EqualEqual_NameName_ReturnValue_5);
	void TabGamePadActionsThatNeedBinds__DelegateSignature(TArray<class FText>& ScreenLabels);
	void TabGamePadConfigApply__DelegateSignature();
	void TabGamePadConfigBack__DelegateSignature();
	void GamepadMappingInfoChanged__DelegateSignature();
};

}


