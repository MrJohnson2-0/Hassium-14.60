#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xB0 - 0x70)
// Class SmartObjectsModule.AITask_UseSmartObject
class UAITask_UseSmartObject : public UAITask
{
public:
	class USmartObjectComponent*                 SOComponent;                                       // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	class UAITask_MoveTo*                        MoveToTask;                                        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4E8B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAITask_UseSmartObject* GetDefaultObj();

	class UAITask_UseSmartObject* UseSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic);
};

// 0x50 (0xC0 - 0x70)
// Class SmartObjectsModule.BTTask_FindAndUseSmartObject
class UBTTask_FindAndUseSmartObject : public UBTTaskNode
{
public:
	struct FGameplayTagQuery                     ActivityRequirements;                              // 0x70(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4E9B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBTTask_FindAndUseSmartObject* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class SmartObjectsModule.BTTask_UseSmartObject
class UBTTask_UseSmartObject : public UBTTask_BlackboardBase
{
public:

	static class UClass* StaticClass();
	static class UBTTask_UseSmartObject* GetDefaultObj();

};

// 0x20 (0x240 - 0x220)
// Class SmartObjectsModule.GenericSmartObject
class AGenericSmartObject : public AActor
{
public:
	uint8                                        Pad_4E9F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USmartObjectComponent*                 SOComponent;                                       // 0x228(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AActor*>                        ReferenceActors;                                   // 0x230(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AGenericSmartObject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.RichSmartObjectInterface
class IRichSmartObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRichSmartObjectInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USmartObjectBlueprintFunctionLibrary* GetDefaultObj();

	bool K2_UseSmartObject(class AActor* Avatar, class AActor* SmartObject);
	bool K2_SetSmartObjectEnabled(class AActor* SmartObject, bool bEnabled);
	bool K2_RemoveLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags);
	bool K2_AddLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags);
};

// 0x58 (0x108 - 0xB0)
// Class SmartObjectsModule.SmartObjectComponent
class USmartObjectComponent : public UActorComponent
{
public:
	uint8                                        Pad_4EB4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class USmartObjectConfig>     Config;                                            // 0xB8(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSmartObjectID                        RegisteredID;                                      // 0xE0(0x4)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                       ExecutionPriorityOverride;                         // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IGameplayTagAssetInterface> GameplayTagAssetInterfaceImplementation;           // 0xE8(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        bRichSmartObjectOwner : 1;                         // Mask: 0x1, PropSize: 0x10xF8(0x1)(Edit, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRichSmartObjectComponent : 1;                     // Mask: 0x2, PropSize: 0x10xF8(0x1)(Edit, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4EB5[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmartObjectComponent* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class SmartObjectsModule.SmartObjectConfig
class USmartObjectConfig : public UDataAsset
{
public:
	TArray<struct FSmartObjectUseConfig>         Uses;                                              // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 DescriptionTags;                                   // 0x40(0x20)(Protected, NativeAccessSpecifierProtected)
	uint32                                       MaxConcurrentUsers;                                // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4EB6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmartObjectConfig* GetDefaultObj();

};

// 0x108 (0x130 - 0x28)
// Class SmartObjectsModule.SmartObjectManager
class USmartObjectManager : public UObject
{
public:
	TMap<struct FSmartObjectID, struct FSmartObjectRuntime> RuntimeSmartObjects;                               // 0x28(0x50)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4EB7[0xA8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        BitPad_2F9 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bCreateIfMissing : 1;                              // Mask: 0x2, PropSize: 0x10x120(0x1)(Edit, Config, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_2FA : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4EBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultUnusedSmartObjectLifespan;                  // 0x124(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4EBB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmartObjectManager* GetDefaultObj();

};

// 0x10 (0x450 - 0x440)
// Class SmartObjectsModule.SmartObjectRenderingComponent
class USmartObjectRenderingComponent : public UPrimitiveComponent
{
public:
	enum class ESOReferenceDrawingMode           ReferenceDrawingMode;                              // 0x440(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4EBE[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USmartObjectRenderingComponent* GetDefaultObj();

};

}


