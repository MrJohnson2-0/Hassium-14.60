#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovementType : uint8
{
	SweepPhysics                   = 0,
	TeleportPhysics                = 1,
	ResetPhysics                   = 2,
	EMovementType_MAX              = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// ScriptStruct EntityCore.ComponentData
struct FComponentData
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EntityCore.EntityCoreSystemRelativePositionComponentData
struct FEntityCoreSystemRelativePositionComponentData : public FComponentData
{
public:
	uint8                                        Pad_4E89[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct EntityCore.EntityScaleComponentData
struct FEntityScaleComponentData : public FComponentData
{
public:
	struct FVector                               WorldScale3D;                                      // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct EntityCore.EntityRotationComponentData
struct FEntityRotationComponentData : public FComponentData
{
public:
	struct FRotator                              WorldRotation;                                     // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct EntityCore.EntityPositionComponentData
struct FEntityPositionComponentData : public FComponentData
{
public:
	struct FVector                               WorldPosition;                                     // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct EntityCore.EntityTickFunction
struct FEntityTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_4E8A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


