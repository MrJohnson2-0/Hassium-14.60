#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3E0 - 0x3D0)
// Class EventModeUI.FocusButton
class UFocusButton : public UBacchusActionButton
{
public:
	class UPaperSprite*                          StartFocusingSprite;                               // 0x3D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperSprite*                          StopFocusingSprite;                                // 0x3D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFocusButton* GetDefaultObj();

	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);
};

// 0xB0 (0x378 - 0x2C8)
// Class EventModeUI.FortEventModeEmotesWidget
class UFortEventModeEmotesWidget : public UFortHUDElementWidget
{
public:
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> Emote1;                                            // 0x2C8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> Emote2;                                            // 0x2F0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UFortMontageItemDefinitionBase> Emote3;                                            // 0x318(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UFortMontageItemDefinitionBase>> RandomEmotes;                                      // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A7B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URichTextBlock*                        Text_Emote1;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        Text_Emote2;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        Text_Emote3;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        Text_EmoteRandom;                                  // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortEventModeEmotesWidget* GetDefaultObj();

	void OnFocusStateChanged(bool bIsFocusing);
	void OnFocusAvailableChanged(bool bIsFocusAvailable);
};

// 0x8 (0x100 - 0xF8)
// Class EventModeUI.FortMobileActionButtonBehavior_Focus
class UFortMobileActionButtonBehavior_Focus : public UFortMobileActionButtonBehavior
{
public:
	class UPaperSprite*                          StopFocusingSprite;                                // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMobileActionButtonBehavior_Focus* GetDefaultObj();

	void HandleEventModeFocusingChanged(bool bIsEventModeFocusing);
	void HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus);
};

}


