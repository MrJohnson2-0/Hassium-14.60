#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x978 - 0x8B0)
// BlueprintGeneratedClass B_Prj_Petrol.B_Prj_Petrol_C
class AB_Prj_Petrol_C : public AFortProjectilePetrol
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Petrol_Prj_Trail;                                // 0x8B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x8C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 RefillableVehicleTag;                              // 0x8C8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABGA_Petrol_Pickup_C*                  ClosestPetrolPickupBGA;                            // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_Petrol_Pickup_C*                  NullBGA;                                           // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShortestDistance;                                  // 0x8F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ClosestPetrolPickupBGAIndex;                       // 0x8FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        HitActors;                                         // 0x900(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScalableFloat                        OverrideFuelToAddToPetrolPickup;                   // 0x910(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        FuelToAddToPetrolPickup;                           // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7098[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 T_Quest;                                           // 0x938(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Hotfix_RefillVehicleAmount;                        // 0x958(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AB_Prj_Petrol_C* GetDefaultObj();

	void UserConstructionScript(float CallFunc_GetValueAtLevel_ReturnValue);
	void OnStop(struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveDestroyed();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ExecuteUbergraph_B_Prj_Petrol(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags, class ABGA_Petrol_Pickup_C* K2Node_DynamicCast_AsBGA_Petrol_Pickup, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FHitResult& K2Node_Event_Hit_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AFortWeapon* CallFunc_GetOwnerWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetAmmoCostPerFire_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, class ABGA_Petrol_Pickup_C* K2Node_DynamicCast_AsBGA_Petrol_Pickup_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue, float CallFunc_GetDistanceBetweenActors_Distance, class AB_PetrolWeapon_C* K2Node_DynamicCast_AsB_Petrol_Weapon, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortWeapon* CallFunc_GetOwnerWeapon_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted);
};

}


