#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xD04 - 0xCF8)
// BlueprintGeneratedClass B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C
class AB_HeldObject_Generic_Component_C : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        BattleLabHudKeyDataIndex;                          // 0xD00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_HeldObject_Generic_Component_C* GetDefaultObj();

	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_HeldObject_Generic_Component(int32 EntryPoint, bool Temp_bool_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
};

}


