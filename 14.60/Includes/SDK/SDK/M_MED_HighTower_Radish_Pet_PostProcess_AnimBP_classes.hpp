#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x154E (0x1ABE - 0x570)
// AnimBlueprintGeneratedClass M_MED_HighTower_Radish_Pet_PostProcess_AnimBP.M_MED_HighTower_Radish_Pet_PostProcess_AnimBP_C
class UM_MED_HighTower_Radish_Pet_PostProcess_AnimBP_C : public UFortPetAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6844[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x580(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x5B0(0x88)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x638(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x658(0x20)(None)
	uint8                                        Pad_6845[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_2;                         // 0x680(0x660)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xCE0(0x108)(None)
	uint8                                        Pad_6846[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0xDF0(0x660)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x1450(0x660)(None)
	struct FVector                               Gravity_override;                                  // 0x1AB0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSkydiving;                                       // 0x1ABC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsParachuteOpen;                                   // 0x1ABD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UM_MED_HighTower_Radish_Pet_PostProcess_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_MED_HighTower_Radish_Pet_PostProcess_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


