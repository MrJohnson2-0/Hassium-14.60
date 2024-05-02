#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x568 (0x820 - 0x2B8)
// AnimBlueprintGeneratedClass Kev_Fish_Gadget_AnimBP.Kev_Fish_Gadget_AnimBP_C
class UKev_Fish_Gadget_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5E10[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x2D0(0x18)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2E8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x308(0x20)(None)
	uint8                                        Pad_5E12[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Trail                       AnimGraphNode_Trail_1;                             // 0x330(0x260)(None)
	struct FAnimNode_Trail                       AnimGraphNode_Trail;                               // 0x590(0x260)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x7F0(0x30)(None)

	static class UClass* StaticClass();
	static class UKev_Fish_Gadget_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Kev_Fish_Gadget_AnimBP(int32 EntryPoint);
};

}


