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

// 0x38 (0x38 - 0x0)
// Function BF_ManagedParticles.BF_ManagedParticles_C.Set Managed Particles Parameter (Bool)
struct UBF_ManagedParticles_C_Set_Managed_Particles_Parameter__Bool__Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Value;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x18(0x20)(None)
};

// 0x28 (0x28 - 0x0)
// Function BF_ManagedParticles.BF_ManagedParticles_C.Deactivate Managed Niagara
struct UBF_ManagedParticles_C_Deactivate_Managed_Niagara_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x8(0x20)(None)
};

// 0x38 (0x38 - 0x0)
// Function BF_ManagedParticles.BF_ManagedParticles_C.Activate Managed Niagara
struct UBF_ManagedParticles_C_Activate_Managed_Niagara_Params
{
public:
	bool                                         Reset;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Niagara;                                           // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_getNiagaraParticles_Gameplay_Tag_Container; // 0x18(0x20)(None)
};

// 0x60 (0x60 - 0x0)
// Function BF_ManagedParticles.BF_ManagedParticles_C.getNiagaraParticles
struct UBF_ManagedParticles_C_GetNiagaraParticles_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Gameplay_Tag_Container;                            // 0x8(0x20)(Parm, OutParm)
	struct FGameplayTag                          NiagaraTag;                                        // 0x28(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x30(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x40(0x20)(None)
};

}
}


