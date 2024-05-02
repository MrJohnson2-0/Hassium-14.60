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
// Function HousepartyFOMOToast.HousepartyFOMOToast_C.OnSetToast
struct UHousepartyFOMOToast_C_OnSetToast_Params
{
public:
	class UFortUINotification*                   ToastNotification;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function HousepartyFOMOToast.HousepartyFOMOToast_C.ExecuteUbergraph_HousepartyFOMOToast
struct UHousepartyFOMOToast_C_ExecuteUbergraph_HousepartyFOMOToast_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINotification*                   K2Node_Event_ToastNotification;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


