#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xAB0 - 0xAA8)
// BlueprintGeneratedClass GA_BattleLab_DestroyHeld.GA_BattleLab_DestroyHeld_C
class UGA_BattleLab_DestroyHeld_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_BattleLab_DestroyHeld_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_BattleLab_DestroyHeld(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue, class ABLGA_BattleLab_Parent_C* K2Node_DynamicCast_AsBLGA_Battle_Lab_Parent, bool K2Node_DynamicCast_bSuccess_1);
};

}


