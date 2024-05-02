#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3324 (0x3814 - 0x4F0)
// AnimBlueprintGeneratedClass M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C
class UM_MED_HighTower_Tapas_AnimBP_C : public UCustomCharacterPartAnimInstance_HightowerTapasBody
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6CF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x500(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x530(0x140)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x670(0x660)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xCD0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xCF0(0x20)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_16;                       // 0xD10(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_15;                       // 0xE18(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_14;                       // 0xF20(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_13;                       // 0x1028(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_12;                       // 0x1130(0x108)(None)
	uint8                                        Pad_6CF3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_3;                            // 0x1240(0x1B0)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_2;                            // 0x13F0(0x1B0)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_1;                            // 0x15A0(0x1B0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_17;                       // 0x1750(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_11;                       // 0x1858(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_10;                       // 0x1960(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_16;                       // 0x1A68(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_9;                        // 0x1B70(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_8;                        // 0x1C78(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_15;                       // 0x1D80(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_7;                        // 0x1E88(0x108)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x1F90(0x1B0)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_6;                        // 0x2140(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_14;                       // 0x2248(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_13;                       // 0x2350(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0x2458(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x2560(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x2668(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x2770(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_5;                        // 0x2878(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_4;                        // 0x2980(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x2A88(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x2B90(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x2C98(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x2DA0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x2EA8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x2FB0(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_3;                        // 0x30B8(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_2;                        // 0x31C0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x32C8(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0x33D0(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x34D8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x35E0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x36E8(0x108)(None)
	class UAnimMontage*                          NewVar_0;                                          // 0x37F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          NewVar_1;                                          // 0x37F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          NewVar_2;                                          // 0x3800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_3;                                          // 0x3808(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IsFrontendAndSkydivingAlpha;                       // 0x380C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TapasGliderAlpha;                                  // 0x3810(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UM_MED_HighTower_Tapas_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnCharacterCustomizationLoaded();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_MED_HighTower_Tapas_AnimBP(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_CheckForBackbling_bIsWearingBackbling, bool CallFunc_CheckForBackbling_bIsBackblingLong, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_SelectFloat_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue);
};

}


