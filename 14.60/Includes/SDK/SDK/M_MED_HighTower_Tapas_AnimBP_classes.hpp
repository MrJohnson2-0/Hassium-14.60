#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2038 (0x2518 - 0x4E0)
// AnimBlueprintGeneratedClass M_MED_HighTower_Tapas_AnimBP.M_MED_HighTower_Tapas_AnimBP_C
class UM_MED_HighTower_Tapas_AnimBP_C : public UCustomCharacterPartAnimInstance_HightowerTapasTop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1502[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x4F0(0x140)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x630(0x660)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0xC90(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_4;                            // 0xCB0(0x1B0)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_3;                            // 0xE60(0x1B0)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_2;                            // 0x1010(0x1B0)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_1;                        // 0x11C0(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x12C8(0x28)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint;                          // 0x12F0(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x13F8(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1428(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x1450(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x1558(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x1660(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x1768(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1788(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x1850(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x1958(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x1A60(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x1B68(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x1C70(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x1D78(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x1D98(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x1EA0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1FA8(0x108)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_1;                            // 0x20B0(0x1B0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x2260(0xA0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x2300(0x20)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x2320(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x24D0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x24F0(0x20)(None)
	float                                        IsTargetingAlpha;                                  // 0x2510(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IsWearingBackblingAlpha;                           // 0x2514(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UM_MED_HighTower_Tapas_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnBeginTargeting();
	void OnEndTargeting();
	void OnEndSkydiving();
	void OnCharacterCustomizationLoaded();
	void ExecuteUbergraph_M_MED_HighTower_Tapas_AnimBP(int32 EntryPoint, bool CallFunc_CheckForBackbling_bIsWearingBackbling, bool CallFunc_CheckForBackbling_bIsBackblingLong, float CallFunc_Conv_BoolToFloat_ReturnValue);
};

}


