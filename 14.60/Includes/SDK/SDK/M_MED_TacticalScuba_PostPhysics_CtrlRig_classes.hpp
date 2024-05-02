#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x698 (0x9F8 - 0x360)
// ControlRigBlueprintGeneratedClass M_MED_TacticalScuba_PostPhysics_CtrlRig.M_MED_TacticalScuba_PostPhysics_CtrlRig_C
class UM_MED_TacticalScuba_PostPhysics_CtrlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x360(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform;                          // 0x380(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms;                              // 0x3E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0;                                  // 0x430(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_6657[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler;                             // 0x460(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap;                                    // 0x490(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0;                            // 0x4B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_6658[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1;                                // 0x510(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0;                                // 0x570(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0;                           // 0x5D0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0;                                   // 0x600(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0;                    // 0x630(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0;                               // 0x660(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0;                                 // 0x6A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0;                    // 0x6F0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0_0;                                 // 0x750(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0_0;                         // 0x780(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0_0;                  // 0x7B0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0_0;                  // 0x810(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0_0;                             // 0x840(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0_0;                               // 0x880(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate             MathVectorNegate_0_0;                              // 0x8D0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_0;                        // 0x8F0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0;                           // 0x950(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_1;                                  // 0x980(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_1;                            // 0x9A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UM_MED_TacticalScuba_PostPhysics_CtrlRig_C* GetDefaultObj();

};

}


