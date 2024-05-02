#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2C8 - 0x298)
// WidgetBlueprintGeneratedClass WinterQuestPresentTag.WinterQuestPresentTag_C
class UWinterQuestPresentTag_C : public UFortWinterQuestPresentTag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ContentHB;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Tag;                                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CachedRandomInt;                                   // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7978[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          FromNamesStringArray;                              // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWinterQuestPresentTag_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnSetupCharacterNameTag(struct FLinearColor& CharacterName);
	void ExecuteUbergraph_WinterQuestPresentTag(int32 EntryPoint, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, int32 Temp_int_Variable_1, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float K2Node_Select_Default, float K2Node_Select_Default_1, bool Temp_bool_Variable, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomInteger_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 Temp_int_Variable_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, const struct FLinearColor& K2Node_Event_CharacterName, bool CallFunc_LinearColor_IsNearEqual_ReturnValue, bool CallFunc_LinearColor_IsNearEqual_ReturnValue_1, bool CallFunc_LinearColor_IsNearEqual_ReturnValue_2, bool CallFunc_LinearColor_IsNearEqual_ReturnValue_3, bool CallFunc_LinearColor_IsNearEqual_ReturnValue_4, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5, class FText K2Node_Select_Default_6, class FText K2Node_Select_Default_7);
};

}


