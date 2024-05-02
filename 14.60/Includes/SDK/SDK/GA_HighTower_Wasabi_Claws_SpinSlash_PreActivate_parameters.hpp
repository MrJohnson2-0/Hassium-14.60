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

// 0xB0 (0xB0 - 0x0)
// Function GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate.GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C.K2_ActivateAbilityFromEvent
struct UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC0 (0xC0 - 0x0)
// Function GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate.GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C.ExecuteUbergraph_GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate
struct UGA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_C_ExecuteUbergraph_GA_HighTower_Wasabi_Claws_SpinSlash_PreActivate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_758A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


