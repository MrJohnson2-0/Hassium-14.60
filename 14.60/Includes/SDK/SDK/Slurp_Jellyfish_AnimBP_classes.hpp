#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x708 (0x9C0 - 0x2B8)
// AnimBlueprintGeneratedClass Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C
class USlurp_Jellyfish_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_61DD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2D0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2F0(0x20)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x310(0x18)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x328(0x30)(None)
	uint8                                        Pad_61E0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x360(0x660)(None)

	static class UClass* StaticClass();
	static class USlurp_Jellyfish_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Slurp_Jellyfish_AnimBP(int32 EntryPoint);
};

}


