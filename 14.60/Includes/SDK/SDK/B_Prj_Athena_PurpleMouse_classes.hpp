#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x90A - 0x8F8)
// BlueprintGeneratedClass B_Prj_Athena_PurpleMouse.B_Prj_Athena_PurpleMouse_C
class AB_Prj_Athena_PurpleMouse_C : public AB_Prj_Athena_BGASpawner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x900(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Team;                                              // 0x908(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TeamHasBeenSet;                                    // 0x909(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AB_Prj_Athena_PurpleMouse_C* GetDefaultObj();

	class AActor* SpawnBGA_(const struct FVector& Normal, class AActor* HitActor, class UPrimitiveComponent* HitComp, const struct FVector& Pos, bool FromWater, class AActor* CallFunc_SpawnBGA__ReturnValue, class ABGA_Athena_PurpleMouse_Jumper_C* K2Node_DynamicCast_AsBGA_Athena_Purple_Mouse_Jumper, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue);
	void ReceiveBeginPlay();
	void SetTeam(uint8 Team);
	void ExecuteUbergraph_B_Prj_Athena_PurpleMouse(int32 EntryPoint, uint8 K2Node_CustomEvent_Team, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_IsDead_ReturnValue);
};

}


