#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4150 - 0x4140)
// BlueprintGeneratedClass BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C
class ABP_Pawn_DangerGrape_C : public ABP_PlayerPawn_Athena_Phoebe_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Effect_Hologram;                                   // 0x4148(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Pawn_DangerGrape_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void PlayResOut_1();
	void ExecuteUbergraph_BP_Pawn_DangerGrape(int32 EntryPoint, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


