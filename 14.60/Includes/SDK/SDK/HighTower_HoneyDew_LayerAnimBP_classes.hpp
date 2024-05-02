#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x780 (0xB00 - 0x380)
// AnimBlueprintGeneratedClass HighTower_HoneyDew_LayerAnimBP.HighTower_HoneyDew_LayerAnimBP_C
class UHighTower_HoneyDew_LayerAnimBP_C : public UFortItemLayerAnimInstance_FullLocomotion
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7600[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x390(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x3C0(0x88)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x448(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x478(0x88)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x500(0xE0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x5E0(0xC8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x6A8(0x88)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x730(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x7F8(0x28)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x820(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x8E8(0xE0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x9C8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x9F8(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xA98(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xAC0(0x30)(None)
	bool                                         IsJumping;                                         // 0xAF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsOnGround;                                        // 0xAF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsJumpLand;                                        // 0xAF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFalling;                                         // 0xAF3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsNewFalling;                                      // 0xAF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsTurning;                                        // 0xAF5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7601[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        YawDeltaSmoothed;                                  // 0xAF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        YawDeltaSlowDecay;                                 // 0xAFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHighTower_HoneyDew_LayerAnimBP_C* GetDefaultObj();

	void CustomLocomotionFullBodyAdditive(const struct FPoseLink& InPoseFullBodyAdditive, struct FPoseLink* CustomLocomotionFullBodyAdditive);
	void CustomLocomotionFullBodyLayer(const struct FPoseLink& PassThroughCustomFullBody, struct FPoseLink* CustomLocomotionFullBodyLayer);
	void CustomLocomotionPreIKLayer(const struct FPoseLink& InPosePreIK, struct FPoseLink* CustomLocomotionPreIKLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void Update_Yaw_Delta(float YawDelta, float DeltaTime, float DecayRate, float AbsYawDeltaSlowDecay, float Decay, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_HighTower_HoneyDew_LayerAnimBP(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UClass* CallFunc_GetObjectClass_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, float K2Node_Event_DeltaTimeX, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue);
};

}


