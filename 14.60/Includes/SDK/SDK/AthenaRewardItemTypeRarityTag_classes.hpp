#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2C8 - 0x2A8)
// WidgetBlueprintGeneratedClass AthenaRewardItemTypeRarityTag.AthenaRewardItemTypeRarityTag_C
class UAthenaRewardItemTypeRarityTag_C : public UAthenaRewardItemTypeRarityTag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_ItemType;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          ItemTypeTextColor;                                 // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaRewardItemTypeRarityTag_C* GetDefaultObj();

	void OnInitializeRarityWithSeries(class UFortItemSeriesDefinition* SeriesData);
	void OnInitializeRarityWithoutSeries(const struct FFortRarityItemData& RarityData);
	void ExecuteUbergraph_AthenaRewardItemTypeRarityTag(int32 EntryPoint, class UFortItemSeriesDefinition* K2Node_Event_SeriesData, const struct FFortRarityItemData& K2Node_Event_RarityData, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
};

}


