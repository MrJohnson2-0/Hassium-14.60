#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x310 - 0x2F8)
// WidgetBlueprintGeneratedClass FortCosmeticItemCard.FortCosmeticItemCard_C
class UFortCosmeticItemCard_C : public UFortCosmeticItemCard
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimMinusHover;                                    // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ImageMaterial_NewItemCard;                         // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFortCosmeticItemCard_C* GetDefaultObj();

	void HandleUpdateRarity(const struct FFortColorPalette& RarityColors);
	void HandleUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool IsHero, bool IsReward, bool IsShuffleItem, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_1);
	void UpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem);
	void OnUpdateEnhanced(bool bEnhanced);
	void OnUpdateItemCardMaterial(class UMaterialInterface* Material);
	void OnUpdateItemCardIcon(class UTexture2D* Icon);
	void OnUpdateSeriesOrRarityColors(struct FFortColorPalette& ColorPalette);
	void OnSizeChanged(float InCardWidth);
	void OnHover();
	void OnUnhover();
	void ExecuteUbergraph_FortCosmeticItemCard(int32 EntryPoint, class UMaterialInterface* K2Node_Event_Material, bool K2Node_Event_bEnhanced, float CallFunc_Conv_BoolToFloat_ReturnValue, class UTexture2D* K2Node_Event_Icon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortColorPalette& K2Node_Event_ColorPalette, float K2Node_Event_InCardWidth, bool K2Node_Event_bIsItem, bool K2Node_Event_bIsBorderAnimated, bool K2Node_Event_bIsHero, bool K2Node_Event_bReward, bool K2Node_Event_bIsShuffleItem, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}


