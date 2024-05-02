#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class GameplayStateMachine.GameplayState
class UGameplayState : public UObject
{
public:
	struct FGameplayTag                          StateId;                                           // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReplicates;                                       // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32A1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayState* GetDefaultObj();

	void UpdateState(float DeltaTime);
	struct FGameplayTag GetStateId();
	void EndState(struct FGameplayTag& NextStateId);
	void BeginState(struct FGameplayTag& PrevStateId);
};

// 0x48 (0x80 - 0x38)
// Class GameplayStateMachine.GameplayStateMachine
class UGameplayStateMachine : public UGameplayState
{
public:
	struct FGameplayTag                          StateMachineId;                                    // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPubliclyBroadcast;                                // 0x40(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPersistDelegatesOnUnregistration;                 // 0x41(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_32AA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayStateData              ActiveGameplayStateData;                           // 0x48(0x10)(Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayStateSettings>        GameplayStateSettings;                             // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTag                          InitialGameplayStateId;                            // 0x68(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameplayStateMachineManager*          StateMachineManager;                               // 0x70(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameplayStateMachineSubsystem*        StateMachineSubSystem;                             // 0x78(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameplayStateMachine* GetDefaultObj();

	void SetState(struct FGameplayTag& InStateId);
	void OnRep_ActiveGameplayStateData();
	struct FGameplayTag GetStateMachineId();
	class UGameplayState* GetActiveStateObject();
	struct FGameplayTag GetActiveStateId();
	void EvaluateStateTransition();
};

// 0x120 (0x1D0 - 0xB0)
// Class GameplayStateMachine.GameplayStateMachineManager
class UGameplayStateMachineManager : public UActorComponent
{
public:
	struct FGameplayStateMachineArray            StateMachineList;                                  // 0xB0(0x120)(Net, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayStateMachineManager* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class GameplayStateMachine.GameplayStateMachineSubsystem
class UGameplayStateMachineSubsystem : public UGameInstanceSubsystem
{
public:
	TMap<struct FGameplayTag, struct FGameplayStateMachineData> StateMachineMap;                                   // 0x30(0x50)(Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayStateMachineSubsystem* GetDefaultObj();

};

}


