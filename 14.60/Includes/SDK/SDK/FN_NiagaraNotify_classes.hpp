#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x93 - 0x90)
// BlueprintGeneratedClass FN_NiagaraNotify.FN_NiagaraNotify_C
class UFN_NiagaraNotify_C : public UAnimNotify_PlayNiagaraEffect
{
public:
	bool                                         Set_in_Water_Niagara_Variable;                     // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Print_Debug;                                       // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Set_Front_End_Variable;                            // 0x92(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFN_NiagaraNotify_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FVector& WaterSurfaceNormal, const struct FVector& WaterSurfaceLocation, float WaterImmersionDepth, int32 WaveParamTextureOffset, bool IsInWater, class UFortMovementComp_Character* FortMovementComp, class APlayerPawn_Athena_C* PlayerPawn, class UNiagaraComponent* NiagaraSystem, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsSurfaceSwimming_ReturnValue, class AFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_JoinStringArray_ReturnValue, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class AFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue_1, const struct FVector& CallFunc_GetWaterSurfaceNormal_ReturnValue, const struct FVector& CallFunc_GetWaterSurfaceLocation_ReturnValue, float CallFunc_GetWaterImmersionDepth_ReturnValue, bool CallFunc_IsSurfaceSwimming_ReturnValue_1, class AFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_2);
};

}


