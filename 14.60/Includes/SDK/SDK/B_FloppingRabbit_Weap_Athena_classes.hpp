#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0xD22 - 0xD01)
// BlueprintGeneratedClass B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C
class AB_FloppingRabbit_Weap_Athena_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	uint8                                        Pad_6362[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                Projectile;                                        // 0xD10(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Wire;                                              // 0xD18(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideBobber;                                        // 0xD20(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         OneHandGrip;                                       // 0xD21(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class AB_FloppingRabbit_Weap_Athena_C* GetDefaultObj();

	class FName DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion, TScriptInterface<class IFortFishingInterface> K2Node_DynamicCast_AsFort_Fishing_Interface, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_DetermineFishLootTierNameAndSetLootForSpawner_ReturnValue);
	void OnRep_OneHandGrip();
	void OnRep_HideBobber();
	void ReceiveBeginPlay();
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ForceKillFishing();
	void OnTetherDetached();
	void ExecuteUbergraph_B_FloppingRabbit_Weap_Athena(int32 EntryPoint, class AB_Athena_FloppingRabbit_Wire_C* K2Node_DynamicCast_AsB_Athena_Flopping_Rabbit_Wire, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


