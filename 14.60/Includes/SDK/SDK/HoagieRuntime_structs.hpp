#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHoagieBoostState : uint8
{
	Unknown                        = 0,
	Ready                          = 1,
	Started                        = 2,
	Finished                       = 3,
	Failed                         = 4,
	EHoagieBoostState_MAX          = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x110 - 0x0)
// ScriptStruct HoagieRuntime.FortHeliFlightModel
struct FFortHeliFlightModel
{
public:
	uint8                                        Pad_1F0B[0x108];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHoagieVehicleConfigs*             Configs;                                           // 0x108(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoagieRuntime.ReplicatedHeliControlState
struct FReplicatedHeliControlState
{
public:
	struct FVector_NetQuantizeNormal             Up;                                                // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             Forward;                                           // 0xC(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HoagieRuntime.CachedSeatCollision
struct FCachedSeatCollision
{
public:
	int32                                        SeatIndex;                                         // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOccupied;                                         // 0x4(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct HoagieRuntime.RotorHit
struct FRotorHit
{
public:
	TWeakObjectPtr<class AActor>                 HitActor;                                          // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastHitTimer;                                      // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


