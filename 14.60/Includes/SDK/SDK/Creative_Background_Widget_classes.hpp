#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass Creative_Background_Widget.Creative_Background_Widget_C
class UCreative_Background_Widget_C : public UUserWidget
{
public:
	class UBorder*                               Border_0;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UserText;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCreative_Background_Widget_C* GetDefaultObj();

	void SetShadow(enum class EBillboardshadowDirection Shadow, float ShadowScale, const struct FVector2D& Temp_struct_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, enum class EBillboardshadowDirection Temp_byte_Variable, const struct FVector2D& K2Node_Select_Default);
	void SetTextFont(int32 TextFont, int32 OutlineStrength, const struct FSlateFontInfo& NewLocalVar_0, int32 Temp_int_Variable, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, int32 Temp_int_Variable_1, class FName K2Node_Select_Default, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetTextColor(const struct FLinearColor& TextColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetTextAlignment(enum class ETextJustify Alignment);
	void SetTextScale(int32 FontSize, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetBackgroundColor(const struct FLinearColor& Color);
	void SetText(const class FString& Text, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


