#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.getIsFrontEnd
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_GetIsFrontEnd_Params
{
public:
	bool                                         IsInFrontEnd;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_getIsFrontEnd_IsInFrontEnd;               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.getNiagaraParticles
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_GetNiagaraParticles_Params
{
public:
	struct FGameplayTagContainer                 Gameplay_Tag_Container;                            // 0x0(0x20)(Parm, OutParm)
	struct FGameplayTagContainer                 CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x20(0x20)(None)
};

// 0x9 (0x9 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.set Niagara System User Variable (Bool)
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_Set_Niagara_System_User_Variable__Bool__Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Value;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.set Niagara System User Variable (Vector)
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_Set_Niagara_System_User_Variable__Vector__Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Value;                                             // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.set Niagara System User Variable (Int)
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_Set_Niagara_System_User_Variable__Int__Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Value;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.set Niagara System User Variable (Float)
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_Set_Niagara_System_User_Variable__Float__Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Value;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.set Niagara System User Variable (Color)
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_Set_Niagara_System_User_Variable__Color__Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Value;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.getIsDriving
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_GetIsDriving_Params
{
public:
	bool                                         IsDriving;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_getIsDriving_isDriving;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Morning Phase
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_Morning_Phase_Params
{
public:
	bool                                         At_Creation;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Day Phase
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_Day_Phase_Params
{
public:
	bool                                         At_Creation;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Evening Phase
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_Evening_Phase_Params
{
public:
	bool                                         At_Creation;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Night Phase
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_Night_Phase_Params
{
public:
	bool                                         At_Creation;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.OnHitPawn
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_OnHitPawn_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NormalImpulse;                                     // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Hit;                                               // 0x1C(0x8C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1C (0x1C - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.Character Movement Updated
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_Character_Movement_Updated_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OldLocation;                                       // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OldVelocity;                                       // 0x10(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.On Stat Canged
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_On_Stat_Canged_Params
{
public:
	class FName                                  Stat_Name;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Stat_Value;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x111 (0x111 - 0x0)
// Function B_CCPM_Base_Niagara_HighTower_Squash.B_CCPM_Base_Niagara_HighTower_Squash_C.ExecuteUbergraph_B_CCPM_Base_Niagara_HighTower_Squash
struct AB_CCPM_Base_Niagara_HighTower_Squash_C_ExecuteUbergraph_B_CCPM_Base_Niagara_HighTower_Squash_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C48[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFXSystemComponent*                    CallFunc_GetIdleVFXComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_At_Creation_3;                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System;      // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_At_Creation_2;                        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_At_Creation_1;                        // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_At_Creation;                          // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_SelfActor;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_OtherActor;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_NormalImpulse;                        // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x44(0x8C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        K2Node_Event_DeltaSeconds;                         // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_OldLocation;                          // 0xD4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_OldVelocity;                          // 0xE0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_Stat_Name;                            // 0xEC(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Stat_Value;                           // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetIdleVFXComponent_ReturnValue_1;        // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7C4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshComponent*                        CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue; // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


