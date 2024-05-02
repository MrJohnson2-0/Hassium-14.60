#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x358 - 0x338)
// WidgetBlueprintGeneratedClass LeaderboardTab.LeaderboardTab_C
class ULeaderboardTab_C : public UFortLeaderboardViewTab
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_ContainerBG;                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardHeader_C*             EventLeaderboardHeaderDetails;                     // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_NoLeaderboardEntries;                         // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULeaderboardTab_C* GetDefaultObj();

	void Colorize(const struct FFortTournamentDisplayInfo& Color_Info);
	void Set_Event(const class FString& EventId, const class FString& EventWindowId);
	void ExecuteUbergraph_LeaderboardTab(int32 EntryPoint, class ULeaderboardListViewWrapper_C* K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_CustomEvent_EventId, const class FString& K2Node_CustomEvent_EventWindowId, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_Color_Info, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class ULeaderboardListViewWrapper_C* K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


