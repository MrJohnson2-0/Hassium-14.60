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

// 0x28 (0x28 - 0x0)
// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.MakeEffectSpec
struct UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C_MakeEffectSpec_Params
{
public:
	struct FGameplayEffectSpecHandle             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6449[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x18(0x10)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.ApplyEffectGCParams
struct UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C_ApplyEffectGCParams_Params
{
public:
	struct FGameplayCueParameters                ReturnValue;                                       // 0x0(0xB8)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.CastMontageNotifyStart
struct UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C_CastMontageNotifyStart_Params
{
public:
	struct FGameplayTag                          NotifyTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C.ExecuteUbergraph_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent
struct UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C_ExecuteUbergraph_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_644A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Event_NotifyTag;                            // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_GameplayTag_ReturnValue;         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_644B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                CallFunc_ApplyEffectGCParams_ReturnValue;          // 0x18(0xB8)(ContainsInstancedReference)
	struct FGameplayEffectSpecHandle             CallFunc_MakeEffectSpec_ReturnValue;               // 0xD0(0x10)(None)
	struct FActiveGameplayEffectHandle           CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0xE0(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


