#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x12A4 - 0x1294)
// BlueprintGeneratedClass B_LowTower_HeldObject_Chaplin.B_LowTower_HeldObject_Chaplin_C
class AB_LowTower_HeldObject_Chaplin_C : public AB_Ranged_Generic_C
{
public:
	uint8                                        Pad_7823[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        BattleLabHudKeyDataIndex;                          // 0x12A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_LowTower_HeldObject_Chaplin_C* GetDefaultObj();

	void OnWeaponAttached();
	void GameplayCue_Abilities_LowTower_Chaplin_PrimaryShoot(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_B_LowTower_HeldObject_Chaplin(int32 EntryPoint, bool Temp_bool_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters);
};

}


