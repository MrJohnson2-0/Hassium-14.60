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
// Function ArgonUI.ArgonWidgetBase.SetPlayerPortrait
struct UArgonWidgetBase_SetPlayerPortrait_Params
{
public:
	class AFortPlayerStateAthena*                Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortLazyImage*                        PortraitImage;                                     // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ArgonUI.ArgonWidgetBase.GetTeamPlayerStates
struct UArgonWidgetBase_GetTeamPlayerStates_Params
{
public:
	uint8                                        Team;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D18[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerStateAthena*>        ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ArgonUI.ArgonHUDAlertWidget.OnPlayerFinished
struct UArgonHUDAlertWidget_OnPlayerFinished_Params
{
public:
	struct FArgonFinishedPlayerInfo              FinishedPlayerInfo;                                // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ArgonUI.ArgonHUDAlertWidget.DisplayPlayerFinishedMessage
struct UArgonHUDAlertWidget_DisplayPlayerFinishedMessage_Params
{
public:
	struct FArgonFinishedPlayerInfo              FinishedInfo;                                      // 0x0(0x60)(Parm, NativeAccessSpecifierPublic)
};

}
}


