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

// 0x1 (0x1 - 0x0)
// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetRole
struct ULiveStreamAnimationSubsystem_SetRole_Params
{
public:
	enum class ELiveStreamAnimationRole          NewRole;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetAcceptClientPackets_Private
struct ULiveStreamAnimationSubsystem_SetAcceptClientPackets_Private_Params
{
public:
	bool                                         bInShouldAcceptClientPackets;                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetRole
struct ULiveStreamAnimationSubsystem_GetRole_Params
{
public:
	enum class ELiveStreamAnimationRole          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetDataHandler
struct ULiveStreamAnimationSubsystem_GetDataHandler_Params
{
public:
	TSubclassOf<class ULiveStreamAnimationDataHandler> Type;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveStreamAnimationDataHandler*       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


