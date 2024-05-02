#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x280 (0x5E0 - 0x360)
// ControlRigBlueprintGeneratedClass M_MED_TacticalScuba_CtrlRig.M_MED_TacticalScuba_CtrlRig_C
class UM_MED_TacticalScuba_CtrlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x360(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_1_0_0_0_1;                        // 0x380(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform             GetBoneTransform_0_0_0_0_1;                        // 0x3E0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis        MathQuaternionGetAxis_0_1_0_0_1;                   // 0x440(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                MathVectorSub_0_1_0_0_1;                           // 0x470(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromTwoVectors MathQuaternionFromTwoVectors_0_1_0_0_1;            // 0x4A0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul            MathQuaternionMul_0_1_0_0_1;                       // 0x4D0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation              SetBoneRotation_0_1_0_0_1;                         // 0x510(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector MathTransformTransformVector_0_1_0_0_1;            // 0x560(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate             MathVectorNegate_0_0_1;                            // 0x5C0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UM_MED_TacticalScuba_CtrlRig_C* GetDefaultObj();

};

}


