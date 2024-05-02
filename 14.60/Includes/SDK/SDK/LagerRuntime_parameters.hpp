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
// Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
struct UFortAthenaLivingWorldManager_OnSpawnedActorDestroy_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
struct UFortAthenaLivingWorldManager_OnPatrolPathAdded_Params
{
public:
	class AFortAthenaPatrolPath*                 PatrolPath;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
struct UFortAthenaLivingWorldManager_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
struct UFortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider_Params
{
public:
	class AActor*                                PointProvider;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
struct UFortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider_Params
{
public:
	class AActor*                                PointProvider;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
struct UFortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor_Params
{
public:
	int32                                        ProviderIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActor
struct IFortAthenaLivingWorldPointProviderInterface_OnSpawnedActor_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.IsEnabled
struct IFortAthenaLivingWorldPointProviderInterface_IsEnabled_Params
{
public:
	struct FFortAthenaLivingWorldPointProviderFilterRules PointFilter;                                       // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetValidLocation
struct IFortAthenaLivingWorldPointProviderInterface_GetValidLocation_Params
{
public:
	struct FFortAthenaLivingWorldPointProviderFilterRules PointFilter;                                       // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OutPosition;                                       // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              OutRotation;                                       // 0x10(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
struct IFortAthenaLivingWorldPointProviderInterface_GetFiltersTags_Params
{
public:
	struct FGameplayTagContainer                 FilterTags;                                        // 0x0(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered
struct AFortAthenaLivingWorldVolume_OnPointProviderRegistered_Params
{
public:
	class AActor*                                PointProvider;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
struct AFortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnSpawnedActorDestroyed
struct AFortAthenaPatrolPathPointProvider_OnSpawnedActorDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
struct AFortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawn_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


