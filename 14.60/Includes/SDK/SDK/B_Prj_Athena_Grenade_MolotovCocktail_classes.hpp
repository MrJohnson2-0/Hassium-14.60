#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0xB70 - 0x9E8)
// BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C
class AB_Prj_Athena_Grenade_MolotovCocktail_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara_Projectile_Particles;                      // 0x9F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Hit_Location;                                      // 0x9F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Bottle_Smash_Audio_Cue;                            // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Ignite_Audio_Cue;                                  // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Hit_Normal;                                        // 0xA18(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       ProjectileSpawnVectors;                            // 0xA28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScalableFloat                        SpawnedProjectileMinSpeed;                         // 0xA38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        SpawnedProjectileMaxSpeed;                         // 0xA58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ConeHalfAngleInDegrees;                            // 0xA78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        FireBallsToSpawn;                                  // 0xA98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CurieActivated;                                    // 0xAB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        DoWeUseHomingProjectile;                           // 0xAC0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               ReflectionVector;                                  // 0xAE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireflyProjectileAngleExtreme;                     // 0xAEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FireflyProjectileDirection;                        // 0xAF0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireflyProjectileRadius_Min;                       // 0xAFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireflyProjectileRadius_Max;                       // 0xB00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FireflyProjectileEndPoint;                         // 0xB04(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumProjectileSpawned;                              // 0xB10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumProjectilesToSpawn;                             // 0xB14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NewTemp;                                           // 0xB18(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnteredWater;                                      // 0xB24(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Hit;                                               // 0xB25(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D3D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFXSystemAsset*                        Sound_EnterWater;                                  // 0xB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              ItemToSpawn_Molotov;                               // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanInteractWithWater;                              // 0xB38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnBGATransform;                                 // 0xB40(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AB_Prj_Athena_Grenade_MolotovCocktail_C* GetDefaultObj();

	void FireflyProjectileLogic(const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, int32 Temp_int_Variable, const struct FProjectileHomingData& K2Node_MakeStruct_ProjectileHomingData, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingData_self_CastInput);
	void Drunk_Projectiles(class UCurveFloat* Temp_object_Variable, class UCurveFloat* Temp_object_Variable_1, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_RandomBool_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_1, bool Temp_bool_Variable, float CallFunc_GetValueAtLevel_ReturnValue_3, int32 Temp_int_Variable, class UCurveFloat* K2Node_Select_Default, const struct FProjectileMovementDrunkConfig& CallFunc_MakeProjectileMovementDrunkConfig_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
	void OnCurieActive_7575DCC3440AA42836D7988BCA6485E5();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void HasEnteredWater();
	void Defer_BGA_Spawn();
	void ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_IsClosed_Variable_1, TArray<class AFortPlayerController*>& Temp_object_Variable, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, const struct FVector& CallFunc_ProjectVectorOnToPlane_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, class UFortAsyncAction_OnCurieActivated* CallFunc_OnCurieActivated_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, class AFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent, bool K2Node_ComponentBoundEvent_bIsFirstBody, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsInWater_ReturnValue, class ABuildingGameplayActor* CallFunc_SpawnBuildingGameplayActor_ReturnValue);
};

}


