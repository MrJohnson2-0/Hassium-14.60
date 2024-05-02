#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x6F1 - 0x6B8)
// WidgetBlueprintGeneratedClass ShowdownEventTileViolator.ShowdownEventTileViolator_C
class UShowdownEventTileViolator_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Focus;                                             // 0x6C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x6C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_RoundNumber;                       // 0x6D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_EventState;                   // 0x6D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_Proximity;                    // 0x6E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULiveViolator_C*                       LiveViolator;                                      // 0x6E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         OverrideDoNotShowRound;                            // 0x6F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UShowdownEventTileViolator_C* GetDefaultObj();

	void Construct();
	void RefreshDataBP();
	void RefreshViolatorData();
	void ExecuteUbergraph_ShowdownEventTileViolator(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, const class FString& CallFunc_GetTournamentNextEvent_ReturnValue, const class FString& CallFunc_GetEventId_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_2, enum class EFortShowdownEventState CallFunc_GetEventTimeState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetWindowRoundDisplayString_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_DoDisplayRoundNumber_ReturnValue, int32 K2Node_Select_Default_1, int32 K2Node_Select_Default_2);
};

}


