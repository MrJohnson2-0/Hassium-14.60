#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x450 - 0x418)
// WidgetBlueprintGeneratedClass ArenaLeaderboard.ArenaLeaderboard_C
class UArenaLeaderboard_C : public UFortPersistentLeaderboardScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                       BackgroundBlur_PosterLayer_1;                      // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntryDetails_C*       Details_EntryDisplay;                              // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_PosterFade_2;                                // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_EventName;                                    // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UArenaLeaderboard_C* GetDefaultObj();

	void Initialize_Children_For_Event(const class FString& Event_Id, const class FString& Event_Window_Id, const class FString& Tournament_Id, class ULeaderboardTab_C* K2Node_DynamicCast_AsLeaderboard_Tab, bool K2Node_DynamicCast_bSuccess);
	void OnLeaderboardEntrySelected(class UFortEventLeaderboardEntryData* EntryData);
	void OnInitialized();
	void ShowMyStats(class UCommonButton* Button);
	void SetupForEvent(const class FString& EventId, const class FString& EventWindowId);
	void OnColorize(const struct FFortTournamentDisplayInfo& ColorInfo);
	void BP_OnDeactivated();
	void Item_DoubleMinusClicked(class UObject* Item);
	void Construct();
	void ExecuteUbergraph_ArenaLeaderboard(int32 EntryPoint, class UFortEventLeaderboardEntryData* K2Node_Event_EntryData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_CustomEvent_Button, class UFortEventLeaderboardEntryData* CallFunc_GetMyLeaderboardEntry_ReturnValue, const class FString& K2Node_Event_EventId, const class FString& K2Node_Event_EventWindowId, const struct FFortTournamentDisplayInfo& K2Node_Event_ColorInfo, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ULeaderboardTab_C* K2Node_DynamicCast_AsLeaderboard_Tab, bool K2Node_DynamicCast_bSuccess, class ULeaderboardListViewWrapper_C* K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper, bool K2Node_DynamicCast_bSuccess_1, class UListView* CallFunc_GetListView_ReturnValue, class UObject* K2Node_CustomEvent_Item, class UFortEventLeaderboardEntryData* K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data, bool K2Node_DynamicCast_bSuccess_2, class UArenaViewMeTab_C* K2Node_DynamicCast_AsArena_View_Me_Tab, bool K2Node_DynamicCast_bSuccess_3);
};

}


