#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x210 (0x4C8 - 0x2B8)
// AnimBlueprintGeneratedClass GenericPetLayer_Radish_AnimBP.GenericPetLayer_Radish_AnimBP_C
class UGenericPetLayer_Radish_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5492[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5493[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2D0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2F0(0x88)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x378(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x3A8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x3C8(0x88)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x450(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x480(0x30)(None)
	float                                        HandIKAlphaOverride;                               // 0x4B0(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LegIKAlphaOverride;                                // 0x4B4(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LookAtTargetLocationInput;                         // 0x4B8(0xC)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LookAtOverrideInput;                               // 0x4C4(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGenericPetLayer_Radish_AnimBP_C* GetDefaultObj();

	void PetFullOverrideLayer(const struct FPoseLink& InPose, struct FPoseLink* PetFullOverrideLayer);
	void PetSkeletalControlLayer(const struct FPoseLink& Pose, float LookAtOverrideInput, const struct FVector& LookAtTargetLocationInput, float LegIKAlphaOverride, float HandIKAlphaOverride, struct FPoseLink* PetSkeletalControlLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_GenericPetLayer_Radish_AnimBP(int32 EntryPoint);
};

}


