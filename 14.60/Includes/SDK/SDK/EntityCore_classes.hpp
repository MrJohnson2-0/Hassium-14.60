#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// Class EntityCore.EntityComponent
class UEntityComponent : public UObject
{
public:
	uint8                                        Pad_4E80[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityComponent* GetDefaultObj();

};

// 0x20 (0x78 - 0x58)
// Class EntityCore.EntityEnableableComponent
class UEntityEnableableComponent : public UEntityComponent
{
public:
	uint8                                        IsEnabled : 1;                                     // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        LastIsEnabled : 1;                                 // Mask: 0x2, PropSize: 0x10x58(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4E81[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityEnableableComponent* GetDefaultObj();

	void OnRep_Enabled();
};

// 0x8 (0x60 - 0x58)
// Class EntityCore.EntityDataBackedComponent
class UEntityDataBackedComponent : public UEntityComponent
{
public:
	uint8                                        Pad_4E82[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityDataBackedComponent* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class EntityCore.EntityPositionComponent
class UEntityPositionComponent : public UEntityDataBackedComponent
{
public:

	static class UClass* StaticClass();
	static class UEntityPositionComponent* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class EntityCore.EntityRotationComponent
class UEntityRotationComponent : public UEntityDataBackedComponent
{
public:

	static class UClass* StaticClass();
	static class UEntityRotationComponent* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class EntityCore.EntityScaleComponent
class UEntityScaleComponent : public UEntityDataBackedComponent
{
public:

	static class UClass* StaticClass();
	static class UEntityScaleComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EntityCore.Entity
class UEntity : public UObject
{
public:
	uint8                                        Pad_4E84[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevel*                                Level;                                             // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntity* GetDefaultObj();

};

// 0x120 (0x150 - 0x30)
// Class EntityCore.EntityCoreSubsystem
class UEntityCoreSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_4E85[0xB8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEntityComponent*>              ComponentArray;                                    // 0xE8(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<uint32, class UEntity*>                 Entities;                                          // 0xF8(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4E86[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityCoreSubsystem* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class EntityCore.EntityCoreDataBackedRelativePositionComponent
class UEntityCoreDataBackedRelativePositionComponent : public UEntityDataBackedComponent
{
public:

	static class UClass* StaticClass();
	static class UEntityCoreDataBackedRelativePositionComponent* GetDefaultObj();

};

// 0x38 (0xB0 - 0x78)
// Class EntityCore.EntityTickableComponent
class UEntityTickableComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_4E87[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityTickableComponent* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class EntityCore.EntityScriptComponent
class UEntityScriptComponent : public UEntityTickableComponent
{
public:

	static class UClass* StaticClass();
	static class UEntityScriptComponent* GetDefaultObj();

};

}


