#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xE0 - 0xB0)
// Class Curie.CurieComponent
class UCurieComponent : public UActorComponent
{
public:
	uint8                                        Pad_2168[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Identifier;                                        // 0xB8(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECurieEntityType                  EntityType;                                        // 0xC0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2169[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurieComponent* GetDefaultObj();

	bool IsInteractingWithElement(struct FGameplayTag& Element);
	bool HasStateAttached(const struct FGameplayTag& StateIdentifier);
	bool HasElementAttached(const struct FGameplayTag& ElementIdentifier);
	bool HasAnyElementAttached(const struct FGameplayTagContainer& ElementIdentifiers);
	void HandleOwningActorDestroyed(class AActor* Owner);
};

// 0x70 (0x98 - 0x28)
// Class Curie.CurieElementBehavior
class UCurieElementBehavior : public UObject
{
public:
	TArray<struct FCurieEffectContainer>         OnBeginAttachmentEffects;                          // 0x28(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OngoingAttachmentEffects;                          // 0x38(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OnEndAttachmentEffects;                            // 0x48(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OnInstantInteractionEffects;                       // 0x58(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OnBeginInteractionEffects;                         // 0x68(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OngoingInteractionEffects;                         // 0x78(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OnEndInteractionEffects;                           // 0x88(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCurieElementBehavior* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class Curie.CurieEntityStateBehavior
class UCurieEntityStateBehavior : public UObject
{
public:
	struct FGameplayTagContainer                 RequiredAttachedElements;                          // 0x28(0x20)(Edit, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 RequiredInteractingElements;                       // 0x48(0x20)(Edit, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OnBeginEffects;                                    // 0x68(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OngoingEffects;                                    // 0x78(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCurieEffectContainer>         OnEndEffects;                                      // 0x88(0x10)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsConsumable : 1;                                 // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2170[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurieEntityStateBehavior* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class Curie.CurieGlobals
class UCurieGlobals : public UObject
{
public:
	bool                                         bEnableCurie;                                      // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2171[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        CurieGlobalsClassName;                             // 0x30(0x18)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurieManager*                         RegisteredCurieManager;                            // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCurieGlobals* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Curie.CurieInterface
class ICurieInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICurieInterface* GetDefaultObj();

	void OnCurieStateDetached_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& StateTag);
	void OnCurieStateConsumed_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& StateTag);
	void OnCurieStateAttached_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& StateTag);
	void OnCurieElementInteractEnded_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementInteractBegun_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementInteract_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementDetached_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag);
	void OnCurieElementAttached_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag);
	void OnCurieContainerShutdown_BP(struct FCurieContainerHandle& CurieContainerHandle);
	void OnCurieContainerInitialized_BP(struct FCurieContainerHandle& CurieContainerHandle);
};

// 0xC8 (0x178 - 0xB0)
// Class Curie.CurieManager
class UCurieManager : public UGameStateComponent
{
public:
	TSubclassOf<class UCurieComponent>           CurieComponentClass;                               // 0xB0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                            MaterialDefinitionsTable;                          // 0xB8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                            ElementDefinitionsTable;                           // 0xC0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                            EntityStateDefinitionsTable;                       // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_218F[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCurieManager* GetDefaultObj();

	void UnbindDelegateForCurieStateDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieStateAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieElementInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieElementEndInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieElementDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void UnbindDelegateForCurieElementAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieStateDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieStateAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieElementInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieElementEndInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieElementDetached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieElementBeginInteract(class UObject* CurieOwner, FDelegateProperty_& Delegate);
	void BindDelegateForCurieElementAttached(class UObject* CurieOwner, FDelegateProperty_& Delegate);
};

}


