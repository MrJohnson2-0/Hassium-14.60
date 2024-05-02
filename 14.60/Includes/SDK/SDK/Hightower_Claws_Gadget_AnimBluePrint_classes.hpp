#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x440 - 0x2B8)
// AnimBlueprintGeneratedClass Hightower_Claws_Gadget_AnimBluePrint.Hightower_Claws_Gadget_AnimBluePrint_C
class UHightower_Claws_Gadget_AnimBluePrint_C : public UAnimInstance
{
public:
	uint8                                        Pad_72CF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D0(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x300(0x140)(ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UHightower_Claws_Gadget_AnimBluePrint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Hightower_Claws_Gadget_AnimBluePrint(int32 EntryPoint);
};

}


