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
// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnNotifyEnd_93C0045E453E3CB76DE8D1A7203DD472
struct UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnNotifyEnd_93C0045E453E3CB76DE8D1A7203DD472_Params
{
public:
	struct FGameplayTag                          NotifyTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnNotifyBegin_93C0045E453E3CB76DE8D1A7203DD472
struct UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnNotifyBegin_93C0045E453E3CB76DE8D1A7203DD472_Params
{
public:
	struct FGameplayTag                          NotifyTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnCancelled_93C0045E453E3CB76DE8D1A7203DD472
struct UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnCancelled_93C0045E453E3CB76DE8D1A7203DD472_Params
{
public:
	struct FGameplayTag                          NotifyTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnInterrupted_93C0045E453E3CB76DE8D1A7203DD472
struct UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnInterrupted_93C0045E453E3CB76DE8D1A7203DD472_Params
{
public:
	struct FGameplayTag                          NotifyTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnBlendOut_93C0045E453E3CB76DE8D1A7203DD472
struct UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnBlendOut_93C0045E453E3CB76DE8D1A7203DD472_Params
{
public:
	struct FGameplayTag                          NotifyTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnCompleted_93C0045E453E3CB76DE8D1A7203DD472
struct UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnCompleted_93C0045E453E3CB76DE8D1A7203DD472_Params
{
public:
	struct FGameplayTag                          NotifyTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.OnMovementModeChanged
struct UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_OnMovementModeChanged_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     PrevMovementMode;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        PreviousCustomMode;                                // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.K2_OnEndAbility
struct UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF4 (0xF4 - 0x0)
// Function GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop.GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C.ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop
struct UGA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_C_ExecuteUbergraph_GA_HighTower_HoneyDew_JumpSmash_JumpAnimLoop_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7682[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_NotifyTag_5;                    // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_NotifyTag_4;                    // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          K2Node_CustomEvent_NotifyTag_3;                    // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x38(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          K2Node_CustomEvent_NotifyTag_2;                    // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          K2Node_CustomEvent_NotifyTag_1;                    // 0x60(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          K2Node_CustomEvent_NotifyTag;                      // 0x78(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x90(0x8)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_768A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            K2Node_CustomEvent_Character;                      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     K2Node_CustomEvent_PrevMovementMode;               // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_CustomEvent_PreviousCustomMode;             // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_768B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xBC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7694[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xD0(0x10)(ZeroConstructor, NoDestructor)
	class UFortAbilityTask_PlayMontageWaitNotify* CallFunc_PlayMontageAndWaitNotify_ReturnValue;     // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_GetCurrentMontage_ReturnValue;            // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


