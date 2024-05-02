#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCC0 (0xF78 - 0x2B8)
// AnimBlueprintGeneratedClass SK_ChillBronco_AnimBP.SK_ChillBronco_AnimBP_C
class USK_ChillBronco_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_51F7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2D0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2F0(0x20)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x310(0x440)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x750(0x88)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x7D8(0x30)(None)
	uint8                                        Pad_51F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x810(0x660)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xE70(0x108)(None)

	static class UClass* StaticClass();
	static class USK_ChillBronco_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_ChillBronco_AnimBP(int32 EntryPoint);
};

}


