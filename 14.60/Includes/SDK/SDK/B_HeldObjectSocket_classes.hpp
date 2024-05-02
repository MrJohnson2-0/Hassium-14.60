#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x7F8 - 0x7A0)
// BlueprintGeneratedClass B_HeldObjectSocket.B_HeldObjectSocket_C
class AB_HeldObjectSocket_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       SocketLocation;                                    // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSocketedHeldObject;                             // 0x7B8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_686D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_HeldObject_Parent_C*                HeldObject;                                        // 0x7C0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 RequiredHeldObjectTags;                            // 0x7C8(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         RequireExactTagMatch;                              // 0x7E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_686E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_HeldObjectSocketManager_C*          HeldObjectSocketManager;                           // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_HeldObjectSocket_C* GetDefaultObj();

	void ValidateHeldObject(class AB_HeldObject_Parent_C* HeldObject_Input, class AB_HeldObject_Parent_C** HeldObject_Output, bool* IsValid, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue);
	void OnRep_SocketIsFilled(bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void OnHitHeldObject(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void EventOnSocketFilled();
	void EventOnSocketEmptied();
	void ExecuteUbergraph_B_HeldObjectSocket(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, class AB_HeldObject_Parent_C* K2Node_DynamicCast_AsB_Held_Object_Parent, bool K2Node_DynamicCast_bSuccess, class AB_HeldObject_Parent_C* CallFunc_ValidateHeldObject_HeldObject_Output, bool CallFunc_ValidateHeldObject_IsValid);
};

}


