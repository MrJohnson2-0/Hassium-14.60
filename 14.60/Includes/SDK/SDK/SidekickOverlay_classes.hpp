#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3A8 - 0x398)
// WidgetBlueprintGeneratedClass SidekickOverlay.SidekickOverlay_C
class USidekickOverlay_C : public USidekickOverlay
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_235;                                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USidekickOverlay_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void ExecuteUbergraph_SidekickOverlay(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_OpenSource_ReturnValue_1, bool CallFunc_OpenSource_ReturnValue_2, bool CallFunc_OpenSource_ReturnValue_3, bool CallFunc_OpenSource_ReturnValue_4, bool CallFunc_OpenSource_ReturnValue_5);
};

}


