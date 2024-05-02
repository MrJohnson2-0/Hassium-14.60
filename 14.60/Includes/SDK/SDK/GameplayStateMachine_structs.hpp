#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayStateMachine.ActiveGameplayStateData
struct FActiveGameplayStateData
{
public:
	class UGameplayState*                        GameplayState;                                     // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          PreviousStateId;                                   // 0x8(0x8)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayStateMachine.GameplayStateSettings
struct FGameplayStateSettings
{
public:
	TSubclassOf<class UGameplayState>            StateClass;                                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StateId;                                           // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0x18 - 0xC)
// ScriptStruct GameplayStateMachine.GameplayStateMachineItem
struct FGameplayStateMachineItem : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_32AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayStateMachine*                 StateMachine;                                      // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct GameplayStateMachine.GameplayStateMachineArray
struct FGameplayStateMachineArray : public FFastArraySerializer
{
public:
	class UGameplayStateMachineManager*          StateMachineManager;                               // 0x108(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayStateMachineItem>     StateMachineItems;                                 // 0x110(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct GameplayStateMachine.GameplayStateMachineData
struct FGameplayStateMachineData
{
public:
	class UGameplayStateMachine*                 StateMachine;                                      // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32AC[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


