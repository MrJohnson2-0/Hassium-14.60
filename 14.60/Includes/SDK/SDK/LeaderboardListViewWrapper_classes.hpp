#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x518 - 0x330)
// WidgetBlueprintGeneratedClass LeaderboardListViewWrapper.LeaderboardListViewWrapper_C
class ULeaderboardListViewWrapper_C : public UFortLeaderboardListViewWrapper
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEventsSimpleButton_C*                 Button_Filter;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventsSimpleButton_C*                 Button_Position;                                   // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_OptionsBarBG;                         // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_FliterOptions;                // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardPlayerPerformance_C*  EventLeaderboardPlayerPerformance;                 // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTournamentDisplayInfo            DisplayInfo;                                       // 0x370(0x1A8)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ULeaderboardListViewWrapper_C* GetDefaultObj();

	void Set_Display_Info(const struct FFortTournamentDisplayInfo& DisplayInfo);
	void Set_Event(const class FString& EventId, const class FString& EventWindowId);
	void OnLeaderboardDisplayTypeChanged(enum class ELeaderboardDisplayType NewDisplayType);
	void ExecuteUbergraph_LeaderboardListViewWrapper(int32 EntryPoint, enum class ELeaderboardDisplayType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_DisplayInfo, float CallFunc_RGBToHSV_H, float CallFunc_RGBToHSV_S, float CallFunc_RGBToHSV_V, float CallFunc_RGBToHSV_A, float CallFunc_FClamp_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, const class FString& K2Node_CustomEvent_EventId, const class FString& K2Node_CustomEvent_EventWindowId, enum class ELeaderboardDisplayType K2Node_Event_NewDisplayType, enum class ESlateVisibility K2Node_Select_Default);
};

}


