#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2F0 - 0x2D0)
// WidgetBlueprintGeneratedClass AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C
class UAthenaPlayerLevelCompact_C : public UAthenaPlayerLevelDisplay
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_ProgressBar;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            LevelChanged;                                      // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAthenaPlayerLevelCompact_C* GetDefaultObj();

	void OnUpdateRewardIcon(class UFortItem* RewardItem, TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass);
	void OnUpdateXpBar(float Progress, bool bIsMaxLevel);
	void ExecuteUbergraph_AthenaPlayerLevelCompact(int32 EntryPoint, float K2Node_Event_Progress, bool K2Node_Event_bIsMaxLevel, class UFortItem* K2Node_Event_RewardItem, TSoftObjectPtr<class UTexture2D> K2Node_Event_RewardTexture, bool K2Node_Event_bHasAdditionalStylesToDisplay, int32 K2Node_Event_RewardLevel, bool K2Node_Event_bRequiresBattlePass, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void LevelChanged__DelegateSignature(int32 Level);
};

}


