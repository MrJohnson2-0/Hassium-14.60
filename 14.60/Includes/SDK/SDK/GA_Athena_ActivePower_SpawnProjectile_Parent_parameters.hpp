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

// 0x8 (0x8 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.GetProjectileTrajectoryActor
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_GetProjectileTrajectoryActor_Params
{
public:
	TSubclassOf<class AFortProjectileTrajectory> ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0xAC (0xAC - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.GetProjectileTrajectoryPoints
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_GetProjectileTrajectoryPoints_Params
{
public:
	TArray<struct FVector>                       OutSplinePoints;                                   // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FVector>                       OutSplineTangents;                                 // 0x10(0x10)(Parm, OutParm, HasGetValueTypeHash)
	struct FHitResult                            OutHitResult;                                      // 0x20(0x8C)(Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.ShouldOnlyShowTrajectoryOnUse
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_ShouldOnlyShowTrajectoryOnUse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.SpawnTrajectoryIndicator
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_SpawnTrajectoryIndicator_Params
{
public:
	bool                                         bSpawnOnEquip;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_752B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortProjectileTrajectory*             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.AddAdditionalExplosionContainer
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_AddAdditionalExplosionContainer_Params
{
public:
	class AFortProjectileBase*                   Projectile;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x8(0xB8)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.SpawnProjectileGCParams
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_SpawnProjectileGCParams_Params
{
public:
	struct FGameplayCueParameters                ReturnValue;                                       // 0x0(0xB8)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x170 (0x170 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.InitAbility
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_InitAbility_Params
{
public:
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeEffectContainers_Hit;                 // 0x0(0xB8)(None)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeEffectContainers_Explode;             // 0xB8(0xB8)(None)
};

// 0x2E0 (0x2E0 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.MakeEffectContainers
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_MakeEffectContainers_Params
{
public:
	struct FFortGameplayEffectContainerSpec      Hit;                                               // 0x0(0xB8)(Parm, OutParm)
	struct FFortGameplayEffectContainerSpec      Explode;                                           // 0xB8(0xB8)(Parm, OutParm)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x170(0xB8)(None)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1; // 0x228(0xB8)(None)
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.Get Homing Target
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_Get_Homing_Target_Params
{
public:
	class AActor*                                HomingTarget;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA4 (0xA4 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.GetProjectileSpawnLocationAndRotation
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_GetProjectileSpawnLocationAndRotation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Direction;                                         // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_752C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_752D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_GetDefaultTargetingRotation_ReturnValue;  // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x8C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.PowerSpawnProjectile
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_PowerSpawnProjectile_Params
{
public:
	class AFortProjectileBase*                   ProjectileSpawned;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_SpawnProjectileGCParams_ReturnValue;      // 0x8(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_K2_HasAuthority_ReturnValue;              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_752E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Get_Homing_Target_HomingTarget;           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetProjectileSpawnLocationAndRotation_Location; // 0xD0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetProjectileSpawnLocationAndRotation_Direction; // 0xDC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_752F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueAtLevel_ReturnValue;              // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetValueAtLevel_ReturnValue_1;            // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7530[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7531[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   CallFunc_SpawnProjectile_ReturnValue;              // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.CastMontageNotifyStart
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_CastMontageNotifyStart_Params
{
public:
	struct FGameplayTag                          NotifyTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1F (0x1F - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.ExecuteUbergraph_GA_Athena_ActivePower_SpawnProjectile_Parent
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_ExecuteUbergraph_GA_Athena_ActivePower_SpawnProjectile_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_NotifyTag;                            // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7532[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortProjectileBase*                   CallFunc_PowerSpawnProjectile_ProjectileSpawned;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_GameplayTag_ReturnValue;         // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_ActivePower_SpawnProjectile_Parent.GA_Athena_ActivePower_SpawnProjectile_Parent_C.OnProjectileSpawned__DelegateSignature
struct UGA_Athena_ActivePower_SpawnProjectile_Parent_C_OnProjectileSpawned__DelegateSignature_Params
{
public:
	class AFortProjectileBase*                   ProjectileSpawned;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


