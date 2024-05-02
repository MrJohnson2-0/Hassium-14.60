#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x3F9 - 0x390)
// BlueprintGeneratedClass CCPM_Base.CCPM_Base_C
class ACCPM_Base_C : public ACustomCharacterPartModifier
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>          StaticMeshComponents;                              // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>      CascadeComponents;                                 // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  Last_Pawn;                                         // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Disable_Particles_during_Skydive;                  // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Disable_Particles_during_First_Person;             // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Disable_Particles_in_Vehicle;                      // 0x3CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIsDriving;                                        // 0x3CB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                          Event_Log_Color;                                   // 0x3CC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Hidding_prefixes;                                  // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMeshComponent*                        Character_Part_Type;                               // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enable_Debug_Printing;                             // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ACCPM_Base_C* GetDefaultObj();

	void OverrideCharacterPartType(enum class EFortCustomPartType Part_Type, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue);
	void AttachParticleSystem(class UParticleSystemComponent* Particle_System_Component, class FName Socket_Name, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void UserConstructionScript(const class FString& ComponentName, class UParticleSystemComponent* CascadeComponent, class UStaticMeshComponent* MeshComponent, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, TArray<class FString>& K2Node_MakeArray_Array, class USceneComponent* CallFunc_Array_Get_Item, const class FString& CallFunc_GetDisplayName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Reset_Exit_Vehicle();
	void Reset_Enter_Vehicle();
	void OnBeginSkydiving();
	void OnEndSkydiving();
	void Close();
	void OnTargetingOrFirstPersonCameraChanged();
	void EnteringHidingProp();
	void ExitingHidingProp();
	void Open();
	void EnterVehicle();
	void ExitVehicle();
	void PlayerMovementTick(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void IsHiddingInProp(bool IsHidden);
	void OnPawnAndPartChanged();
	void Attachment();
	void ExecuteUbergraph_CCPM_Base(int32 EntryPoint, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_CustomEvent_DeltaSeconds, const struct FVector& K2Node_CustomEvent_OldLocation, const struct FVector& K2Node_CustomEvent_OldVelocity, bool K2Node_CustomEvent_isHidden, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_1, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue_3, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena_2, bool K2Node_DynamicCast_bSuccess_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_IsInFrontend_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


