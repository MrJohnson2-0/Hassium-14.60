#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x620 - 0x498)
// AnimBlueprintGeneratedClass M_MED_HighTower_Tomato_Casual_AnimBP.M_MED_HighTower_Tomato_Casual_AnimBP_C
class UM_MED_HighTower_Tomato_Casual_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                        Pad_7C2A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C2B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x4B0(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x4E0(0x140)(ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UM_MED_HighTower_Tomato_Casual_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_MED_HighTower_Tomato_Casual_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


