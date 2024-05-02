#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECurieEntityType : uint8
{
	Invalid                        = 0,
	Material                       = 1,
	Element                        = 2,
	ECurieEntityType_MAX           = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct Curie.CurieContainerHandle
struct FCurieContainerHandle
{
public:
	uint8                                        Pad_2190[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Curie.CurieInteractParamsHandle
struct FCurieInteractParamsHandle
{
public:
	uint8                                        Pad_2191[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Curie.CurieInteractHandle
struct FCurieInteractHandle
{
public:
	uint8                                        Pad_2192[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Curie.CurieElementHandle
struct FCurieElementHandle
{
public:
	uint8                                        Pad_2193[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Curie.CurieStateHandle
struct FCurieStateHandle
{
public:
	uint8                                        Pad_2194[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Curie.CurieEffectContainer
struct FCurieEffectContainer
{
public:
	struct FGameplayTagQuery                     TargetFilter;                                      // 0x0(0x48)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           GameplayEffect;                                    // 0x48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Curie.CurieEntityStateDefinitionBase
struct FCurieEntityStateDefinitionBase : public FTableRowBase
{
public:
	TSubclassOf<class UCurieEntityStateBehavior> StateBehaviorClass;                                // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2195[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct Curie.CurieElementDefinitionBase
struct FCurieElementDefinitionBase : public FTableRowBase
{
public:
	TSubclassOf<class UCurieElementBehavior>     BehaviorClass;                                     // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ElementalImmunities;                               // 0x10(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2196[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct Curie.CurieMaterialDefinitionBase
struct FCurieMaterialDefinitionBase : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 ElementalImmunities;                               // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ElementAttachmentImmunities;                       // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ElementsAllowedWhenCannotBeDamaged;                // 0x48(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
};

}


