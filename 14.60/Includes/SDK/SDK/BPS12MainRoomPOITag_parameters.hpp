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

// 0x18 (0x18 - 0x0)
// Function BPS12MainRoomPOITag.BPS12MainRoomPOITag_C.Animate POI Title
struct UBPS12MainRoomPOITag_C_Animate_POI_Title_Params
{
public:
	class FText                                  POI_Name;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function BPS12MainRoomPOITag.BPS12MainRoomPOITag_C.ExecuteUbergraph_BPS12MainRoomPOITag
struct UBPS12MainRoomPOITag_C_ExecuteUbergraph_BPS12MainRoomPOITag_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7995[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_POI_Name;                       // 0x8(0x18)(None)
};

}
}


