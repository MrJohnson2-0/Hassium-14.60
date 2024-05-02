#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x978 - 0x970)
// BlueprintGeneratedClass B_LowTower_HeldObject_Chaplin_ChargeProjectile.B_LowTower_HeldObject_Chaplin_ChargeProjectile_C
class AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C : public APrj_NPC_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x970(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_LowTower_HeldObject_Chaplin_ChargeProjectile_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_LowTower_HeldObject_Chaplin_ChargeProjectile(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetMuzzleLocation_ReturnValue);
};

}


