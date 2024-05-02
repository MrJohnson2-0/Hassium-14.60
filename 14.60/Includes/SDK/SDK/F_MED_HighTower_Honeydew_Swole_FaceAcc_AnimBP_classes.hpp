#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x16B8 (0x1B58 - 0x4A0)
// AnimBlueprintGeneratedClass F_MED_HighTower_Honeydew_Swole_FaceAcc_AnimBP.F_MED_HighTower_Honeydew_Swole_FaceAcc_AnimBP_C
class UF_MED_HighTower_Honeydew_Swole_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance_HoneydewHead
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B67[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x4B0(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x5B8(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5E8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x608(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x710(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x818(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x920(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xA28(0x108)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0xB30(0x660)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x1190(0xC0)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x1250(0x660)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x18B0(0x20)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1;                  // 0x18D0(0x140)(ContainsInstancedReference)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x1A10(0x140)(ContainsInstancedReference)
	class USkeletalMeshComponent*                Body_Mesh_b;                                       // 0x1B50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UF_MED_HighTower_Honeydew_Swole_FaceAcc_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_HighTower_Honeydew_Swole_FaceAcc_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}


