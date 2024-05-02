#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xBC8 - 0xBB0)
// WidgetBlueprintGeneratedClass LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C
class ULockerBuiltInEmoteWidget_C : public UFortLockerBuiltInEmoteWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                LockedFill;                                        // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LockedOvr;                                         // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULockerBuiltInEmoteWidget_C* GetDefaultObj();

	void OnUpdateLocked(bool bLocked);
	void ExecuteUbergraph_LockerBuiltInEmoteWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_bLocked, enum class ESlateVisibility K2Node_Select_Default);
};

}


