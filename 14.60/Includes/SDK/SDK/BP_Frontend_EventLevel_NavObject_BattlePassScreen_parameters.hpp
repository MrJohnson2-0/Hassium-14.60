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

// 0x10 (0x10 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_BattlePassScreen.BP_Frontend_EventLevel_NavObject_BattlePassScreen_C.SetBattlePassVisualState
struct ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C_SetBattlePassVisualState_Params
{
public:
	bool                                         bIsPurchased;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7A99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function BP_Frontend_EventLevel_NavObject_BattlePassScreen.BP_Frontend_EventLevel_NavObject_BattlePassScreen_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassScreen
struct ABP_Frontend_EventLevel_NavObject_BattlePassScreen_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_BattlePassScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_HasPurchasedSeasonBook_ReturnValue;       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


