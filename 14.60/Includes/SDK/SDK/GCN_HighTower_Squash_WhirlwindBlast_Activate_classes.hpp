#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1B8 - 0x1B8)
// BlueprintGeneratedClass GCN_HighTower_Squash_WhirlwindBlast_Activate.GCN_HighTower_Squash_WhirlwindBlast_Activate_C
class UGCN_HighTower_Squash_WhirlwindBlast_Activate_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass();
	static class UGCN_HighTower_Squash_WhirlwindBlast_Activate_C* GetDefaultObj();

	void OnBurstNiagara(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue);
};

}


