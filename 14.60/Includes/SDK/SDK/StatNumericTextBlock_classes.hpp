#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2B0 - 0x288)
// WidgetBlueprintGeneratedClass StatNumericTextBlock.StatNumericTextBlock_C
class UStatNumericTextBlock_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ComparisonArrowImage;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NumericText;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortBuffState                    Buff_State;                                        // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Numeric_Text_Style;                                // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatNumericTextBlock_C* GetDefaultObj();

	void SetComparisonState(enum class EFortBuffState Buff_State);
	void UpdateComparison(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFortBuffState Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class EFortBuffState Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, enum class EFortBuffState Temp_byte_Variable_5, float K2Node_Select_Default_1, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Base, const struct FLinearColor& CallFunc_Get_Base___Buff_Colors_Buff, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_StatNumericTextBlock(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


