#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA20 (0xCD8 - 0x2B8)
// AnimBlueprintGeneratedClass GenericPetLayer_AnimBP.GenericPetLayer_AnimBP_C
class UGenericPetLayer_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2149[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_214A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x2D0(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x300(0x88)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x388(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x3B8(0x88)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x440(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_2;                            // 0x460(0x1B0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x610(0x108)(None)
	uint8                                        Pad_214E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_1;                            // 0x720(0x1B0)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x8D0(0x1B0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xA80(0x20)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_1;                             // 0xAA0(0xF8)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0xB98(0xF8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xC90(0x30)(None)
	float                                        HandIKAlphaOverride;                               // 0xCC0(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LegIKAlphaOverride;                                // 0xCC4(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LookAtTargetLocationInput;                         // 0xCC8(0xC)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LookAtOverrideInput;                               // 0xCD4(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGenericPetLayer_AnimBP_C* GetDefaultObj();

	void PetFullOverrideLayer(const struct FPoseLink& InPose, struct FPoseLink* PetFullOverrideLayer);
	void PetSkeletalControlLayer(const struct FPoseLink& Pose, float LookAtOverrideInput, const struct FVector& LookAtTargetLocationInput, float LegIKAlphaOverride, float HandIKAlphaOverride, struct FPoseLink* PetSkeletalControlLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_GenericPetLayer_AnimBP(int32 EntryPoint);
};

}


