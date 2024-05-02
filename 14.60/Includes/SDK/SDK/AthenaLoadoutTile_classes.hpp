#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xBC0 - 0xBB8)
// WidgetBlueprintGeneratedClass AthenaLoadoutTile.AthenaLoadoutTile_C
class UAthenaLoadoutTile_C : public UFortCosmeticLoadoutListEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAthenaLoadoutTile_C* GetDefaultObj();

	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnEntryReleased();
	void ExecuteUbergraph_AthenaLoadoutTile(int32 EntryPoint, bool K2Node_Event_bIsSelected, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card, bool K2Node_DynamicCast_bSuccess, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_1, bool K2Node_DynamicCast_bSuccess_1, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_2, bool K2Node_DynamicCast_bSuccess_2, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_3, bool K2Node_DynamicCast_bSuccess_3, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_4, bool K2Node_DynamicCast_bSuccess_4);
};

}


