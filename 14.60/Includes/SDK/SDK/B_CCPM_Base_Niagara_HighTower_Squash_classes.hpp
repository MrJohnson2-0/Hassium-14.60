#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0x404 - 0x3F2)
// BlueprintGeneratedClass B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C
class AB_CCPM_Base_Niagara_HighTower_Squash_C : public AB_CCPM_Base_Niagara_C
{
public:
	uint8                                        Pad_7C4C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        KillCount;                                         // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_CCPM_Base_Niagara_HighTower_Squash_C* GetDefaultObj();

	void GetIsFrontEnd(bool* IsInFrontEnd, bool CallFunc_getIsFrontEnd_IsInFrontEnd);
	void GetNiagaraParticles(struct FGameplayTagContainer* Gameplay_Tag_Container, const struct FGameplayTagContainer& CallFunc_getNiagaraParticles_Gameplay_Tag_Container);
	void Set_Niagara_System_User_Variable__Bool_(class FName Name, bool Value);
	void Set_Niagara_System_User_Variable__Vector_(class FName Name, const struct FVector& Value);
	void Set_Niagara_System_User_Variable__Int_(class FName Name, int32 Value);
	void Set_Niagara_System_User_Variable__Float_(class FName Name, float Value);
	void Set_Niagara_System_User_Variable__Color_(class FName Name, const struct FLinearColor& Value);
	void GetIsDriving(bool* IsDriving, bool CallFunc_getIsDriving_isDriving);
	void Morning_Phase(bool At_Creation);
	void Day_Phase(bool At_Creation);
	void Evening_Phase(bool At_Creation);
	void Night_Phase(bool At_Creation);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void Exit_Vehicle();
	void OnTargetingOrFirstPersonCameraChanged();
	void Enter_Vehicle();
	void ResOut();
	void ResIn();
	void OnEndSkydiving();
	void OnBeginSkydiving();
	void Character_Movement_Updated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void OnPawnAndPartChanged();
	void On_Stat_Canged(class FName Stat_Name, int32 Stat_Value);
	void ExecuteUbergraph_B_CCPM_Base_Niagara_HighTower_Squash(int32 EntryPoint, class UFXSystemComponent* CallFunc_GetIdleVFXComponent_ReturnValue, bool K2Node_Event_At_Creation_3, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_At_Creation_2, bool K2Node_Event_At_Creation_1, bool K2Node_Event_At_Creation, class AActor* K2Node_Event_SelfActor, class AActor* K2Node_Event_OtherActor, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, float K2Node_Event_DeltaSeconds, const struct FVector& K2Node_Event_OldLocation, const struct FVector& K2Node_Event_OldVelocity, class FName K2Node_Event_Stat_Name, int32 K2Node_Event_Stat_Value, class UFXSystemComponent* CallFunc_GetIdleVFXComponent_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


