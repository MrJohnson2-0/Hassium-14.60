#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// WidgetBlueprintGeneratedClass ArenaViewMeTab.ArenaViewMeTab_C
class UArenaViewMeTab_C : public UFortArenaPersonalViewTab
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UArenaViewMeTab_C* GetDefaultObj();

	void Colorize(const struct FFortTournamentDisplayInfo& ColorInfo);
	void ExecuteUbergraph_ArenaViewMeTab(int32 EntryPoint, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_ColorInfo, class UArenaPersonalView_C* K2Node_DynamicCast_AsArena_Personal_View, bool K2Node_DynamicCast_bSuccess);
};

}


