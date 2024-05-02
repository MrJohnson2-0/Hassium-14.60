#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xBE8 - 0xBE0)
// BlueprintGeneratedClass GA_Athena_ForagedItemVersion_Consume_Parent.GA_Athena_ForagedItemVersion_Consume_Parent_C
class UGA_Athena_ForagedItemVersion_Consume_Parent_C : public UGA_Athena_MedConsumable_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Athena_ForagedItemVersion_Consume_Parent_C* GetDefaultObj();

	void K2_CommitExecute();
	void ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetWeaponDataGameplayTags_GameplayTags, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted);
};

}


