#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C90 (0x3150 - 0x4C0)
// AnimBlueprintGeneratedClass F_MED_HighTower_Honeydew_AnimBP.F_MED_HighTower_Honeydew_AnimBP_C
class UF_MED_HighTower_Honeydew_AnimBP_C : public UCustomCharacterPartAnimInstance_HoneydewBody
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x4C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5984[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x4D0(0x140)(ContainsInstancedReference)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_3;                        // 0x610(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x718(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x738(0x20)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_2;                        // 0x758(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_22;                       // 0x860(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_21;                       // 0x968(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_20;                       // 0xA70(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_19;                       // 0xB78(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_18;                       // 0xC80(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_17;                       // 0xD88(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_16;                       // 0xE90(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_15;                       // 0xF98(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_14;                       // 0x10A0(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0x11A8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_13;                       // 0x12B0(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x13B8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_12;                       // 0x14C0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_11;                       // 0x15C8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x16D0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x17D8(0x108)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x18E0(0x660)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x1F40(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x2048(0x108)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x2150(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x2590(0x440)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x29D0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x2AD8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x2BE0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x2CE8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x2DF0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x2EF8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x3000(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3108(0x30)(None)
	float                                        IsFrontEndLockerPose;                              // 0x3138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5985[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         Anim_Inst;                                         // 0x3140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Skel_mesh;                                         // 0x3148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UF_MED_HighTower_Honeydew_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_F_MED_HighTower_Honeydew_AnimBP(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, bool CallFunc_Montage_IsActive_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_SelectFloat_ReturnValue);
};

}


