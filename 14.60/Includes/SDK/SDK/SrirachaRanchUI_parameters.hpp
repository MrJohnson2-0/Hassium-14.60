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
// Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
struct UFortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URadioContentSourceItemDefinition*     Source;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
struct UFortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URadioContentSourceItemDefinition*     Source;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
struct URadioPlayerWidgetBase_SetControllable_Params
{
public:
	bool                                         bCanControl;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
struct URadioPlayerWidgetBase_OnSourcePlaying_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URadioContentSourceItemDefinition*     Source;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
struct URadioPlayerWidgetBase_OnSourceFinished_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URadioContentSourceItemDefinition*     Source;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
struct URadioPlayerWidgetBase_OnRadioStopped_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URadioContentSourceItemDefinition*     LastSource;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
struct URadioPlayerWidgetBase_OnLoadingNewSource_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URadioContentSourceItemDefinition*     Source;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
struct URadioPlayerWidgetBase_OnFailedToOpenSource_Params
{
public:
	class UStreamingRadioPlayerComponent*        Radio;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URadioContentSourceItemDefinition*     Source;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


