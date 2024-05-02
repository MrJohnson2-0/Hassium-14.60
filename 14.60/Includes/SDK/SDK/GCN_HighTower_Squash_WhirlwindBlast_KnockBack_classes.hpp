#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1B8 - 0x1B8)
// BlueprintGeneratedClass GCN_HighTower_Squash_WhirlwindBlast_KnockBack.GCN_HighTower_Squash_WhirlwindBlast_KnockBack_C
class UGCN_HighTower_Squash_WhirlwindBlast_KnockBack_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass();
	static class UGCN_HighTower_Squash_WhirlwindBlast_KnockBack_C* GetDefaultObj();

	void OnBurstNiagara(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


