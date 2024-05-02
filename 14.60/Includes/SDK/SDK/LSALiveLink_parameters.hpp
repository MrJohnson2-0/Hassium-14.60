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
// Function LSALiveLink.LSALiveLinkDataHandler.StopTrackingLiveLinkSubject
struct ULSALiveLinkDataHandler_StopTrackingLiveLinkSubject_Params
{
public:
	struct FLiveStreamAnimationHandleWrapper     RegisteredName;                                    // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LSALiveLink.LSALiveLinkDataHandler.StartTrackingLiveLinkSubject
struct ULSALiveLinkDataHandler_StartTrackingLiveLinkSubject_Params
{
public:
	class FName                                  LiveLinkSubject;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveStreamAnimationHandleWrapper     RegisteredName;                                    // 0x8(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLSALiveLinkSourceOptions             Options;                                           // 0x10(0x1)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_316F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLiveStreamAnimationHandleWrapper     TranslationProfile;                                // 0x14(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3170[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function LSALiveLink.LiveLinkTestSkelMeshTrackerComponent.StartTrackingSkelMesh
struct ULiveLinkTestSkelMeshTrackerComponent_StartTrackingSkelMesh_Params
{
public:
	class FName                                  InSubjectName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


