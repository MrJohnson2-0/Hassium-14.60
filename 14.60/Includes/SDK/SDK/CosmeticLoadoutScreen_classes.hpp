#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x660 - 0x5A8)
// WidgetBlueprintGeneratedClass CosmeticLoadoutScreen.CosmeticLoadoutScreen_C
class UCosmeticLoadoutScreen_C : public UFortCosmeticLoadoutScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x5B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          LeftSideButtons;                                   // 0x5B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NewPresetDisclaimerText;                           // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Panel;                                             // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PresetHeader;                                      // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RandomDisclaimertext;                              // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SaveSubHeader;                                     // 0x5E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoloButton_C*                         XButton_DeleteLoadout;                             // 0x5E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoloButton_C*                         XButton_RenameLoadout;                             // 0x5F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleFeatured_YellowButton_C*        XSimpleFeatured_YellowButton;                      // 0x5F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  BrowseHeaderText;                                  // 0x600(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SaveHeaderText;                                    // 0x618(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ApplyButtonText;                                   // 0x630(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SaveButtonText;                                    // 0x648(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCosmeticLoadoutScreen_C* GetDefaultObj();

	void BP_OnActivated();
	void OnPreviewTile(enum class EFortLoadoutCardType CardType);
	void OnFlavorForScreenMode(enum class EFortCosmeticLoadoutScreenMode NewMode);
	void ExecuteUbergraph_CosmeticLoadoutScreen(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class EFortCosmeticLoadoutScreenMode Temp_byte_Variable_1, enum class EFortCosmeticLoadoutScreenMode Temp_byte_Variable_2, enum class EFortCosmeticLoadoutScreenMode Temp_byte_Variable_3, class FText Temp_text_Variable, class FText Temp_text_Variable_1, enum class EFortLoadoutCardType K2Node_Event_CardType, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, enum class EFortCosmeticLoadoutScreenMode K2Node_Event_NewMode, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default_2, class FText K2Node_Select_Default_3, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button, bool K2Node_DynamicCast_bSuccess);
};

}


