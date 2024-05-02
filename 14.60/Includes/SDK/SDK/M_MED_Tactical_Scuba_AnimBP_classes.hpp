#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEE8 (0x1380 - 0x498)
// AnimBlueprintGeneratedClass M_MED_Tactical_Scuba_AnimBP.M_MED_Tactical_Scuba_AnimBP_C
class UM_MED_Tactical_Scuba_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_7BFD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7BFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4B0(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x4E0(0x140)(ContainsInstancedReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0x620(0x360)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x980(0x360)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xCE0(0x660)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1340(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1360(0x20)(None)

	static class UClass* StaticClass();
	static class UM_MED_Tactical_Scuba_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_Tactical_Scuba_AnimBP(int32 EntryPoint);
};

}


