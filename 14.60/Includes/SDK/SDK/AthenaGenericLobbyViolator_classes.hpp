#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass AthenaGenericLobbyViolator.AthenaGenericLobbyViolator_C
class UAthenaGenericLobbyViolator_C : public UUserWidget
{
public:
	class UCommonTextBlock*                      ModeName;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SubText;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaGenericLobbyViolator_C* GetDefaultObj();

	void SetGamemodeName(class FText Name, class FText SubText, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1);
};

}


