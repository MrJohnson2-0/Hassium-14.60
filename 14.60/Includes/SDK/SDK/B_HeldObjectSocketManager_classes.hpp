#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x42 (0x7E2 - 0x7A0)
// BlueprintGeneratedClass B_HeldObjectSocketManager.B_HeldObjectSocketManager_C
class AB_HeldObjectSocketManager_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AB_HeldObjectSocket_C*>         HeldObjectSockets;                                 // 0x7B0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FGameplayTagContainer>         CurrentTags;                                       // 0x7C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FGameplayTagContainer>         DefaultCorrectTags;                                // 0x7D0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         CombinationCorrect;                                // 0x7E0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         SocketOrderMatters;                                // 0x7E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AB_HeldObjectSocketManager_C* GetDefaultObj();

	void OnRep_CombinationCorrect();
	void CheckTagMatches(bool CallFunc_VerifyHeldObjectTags_IsValidMatch);
	void VerifyHeldObjectTags(TArray<struct FGameplayTagContainer>& CorrectTags, TArray<struct FGameplayTagContainer>& CurrentTags, bool OrderMatters, bool* IsValidMatch, bool TagsAreInOrder, const struct FGameplayTagContainer& ConcatenatedCurrentTags, const struct FGameplayTagContainer& ConcatenatedCorrectTags, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, const struct FGameplayTagContainer& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FGameplayTagContainer& CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_HasAllTags_ReturnValue, const struct FGameplayTagContainer& CallFunc_Array_Get_Item_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasAllTags_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateHeldObjectTags(class AB_HeldObjectSocket_C* ChangedSocket, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, const struct FGameplayTagContainer& Temp_struct_Variable, int32 CallFunc_Array_Find_ReturnValue);
	void ReceiveBeginPlay();
	void OnCombinationCorrect();
	void ExecuteUbergraph_B_HeldObjectSocketManager(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AB_HeldObjectSocket_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


