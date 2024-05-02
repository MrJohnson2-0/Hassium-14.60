#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7A (0x442 - 0x3C8)
// WidgetBlueprintGeneratedClass CosmeticLoadoutCard.CosmeticLoadoutCard_C
class UCosmeticLoadoutCard_C : public UFortCosmeticLoadoutCard
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnRefreshCard;                                     // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnSelected;                                        // 0x3D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortLazyImage*                        Image_Card;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PresetName;                                        // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RefreshBacking;                                    // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Header;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              UnsavedBang;                                       // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBMainCard;                                        // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               CharacterAsset;                                    // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               BackblingAsset;                                    // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               PickaxeAsset;                                      // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               GliderAsset;                                       // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               WrapAsset;                                         // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLargeTile;                                       // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Selected;                                          // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCosmeticLoadoutCard_C* GetDefaultObj();

	void IsBlank(bool* Blank, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Get_First_Item(TArray<class UFortItemDefinition*>& InArray, class UFortItemDefinition** Result);
	void PlaySelectedReverse(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void PlaySelectedForward(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void PlayHoverReverse(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void PlayHoverForward(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void UpdateLoadoutSlotVisuals(class FName PreviewImageTextureParameterName, class FName DefaultSwitchScalarName, class UObject* Object, class UTexture2D* DefaultTexture, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void OnLoaded_C53A1CD444E6E41E6696819693452D69(class UObject* Loaded);
	void OnLoaded_720B049647023D90A92C789B29FB1060(class UObject* Loaded);
	void OnLoaded_9C1753664F831A575C95389EB3050D6D(class UObject* Loaded);
	void OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55(class UObject* Loaded);
	void OnLoaded_1E2615E24358EA93BCC3BBB4925113EE(class UObject* Loaded);
	void Construct();
	void OnUpdateCard();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_CosmeticLoadoutCard(int32 EntryPoint, enum class EFortLoadoutCardType Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, enum class EFortLoadoutCardType Temp_byte_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, class UObject* Temp_object_Variable_7, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool Temp_bool_B_Execution_Happened_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_A_Execution_Happened_Variable_1, bool Temp_bool_A_Execution_Happened_Variable_2, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_B_Execution_Happened_Variable_2, bool CallFunc_BooleanAND_ReturnValue_2, class UObject* K2Node_CustomEvent_Loaded_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAthenaItemWrapDefinition* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_B_Execution_Happened_Variable_3, bool Temp_bool_A_Execution_Happened_Variable_3, bool CallFunc_BooleanAND_ReturnValue_3, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_3, class UObject* Temp_object_Variable_8, class UObject* K2Node_CustomEvent_Loaded, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_3, class UObject* Temp_object_Variable_9, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText K2Node_Select_Default_4, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool K2Node_Event_IsDesignTime, class UObject* Temp_object_Variable_10, const struct FMargin& K2Node_MakeStruct_Margin, class UObject* K2Node_CustomEvent_Loaded_2, class UObject* Temp_object_Variable_11, class UObject* K2Node_CustomEvent_Loaded_3, bool CallFunc_IsInSubGame_ReturnValue, class UTexture2D* K2Node_Select_Default_5, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetCharacterPreviewImage_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
};

}


