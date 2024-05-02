#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELiveStreamAnimationRole : uint8
{
	Proxy                          = 0,
	Processor                      = 1,
	Tracker                        = 2,
	ELiveStreamAnimationRole_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveStreamAnimation.LiveStreamAnimationHandleWrapper
struct FLiveStreamAnimationHandleWrapper
{
public:
	class FName                                  Handle;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


