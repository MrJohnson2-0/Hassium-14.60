#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x320 - 0x318)
// Class HighTowerUI.HighTowerAbilityContainerWidget
class UHighTowerAbilityContainerWidget : public ULTMWidgetBase
{
public:
	struct FGameplayTag                          ShowAbilityIntroTag;                               // 0x318(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UHighTowerAbilityContainerWidget* GetDefaultObj();

	void ShowAbilityIntro();
};

}


