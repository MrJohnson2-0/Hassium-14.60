#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x518 (0x8B0 - 0x398)
// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	uint8                                        Pad_5B63[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_3;                        // 0x3B0(0x128)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_2;                        // 0x4D8(0x128)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_1;                        // 0x600(0x128)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone;                          // 0x728(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x850(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x870(0x30)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose;                         // 0x8A0(0x10)(None)

	static class UClass* StaticClass();
	static class UBlueprint_Paper_VIM_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint);
};

}


