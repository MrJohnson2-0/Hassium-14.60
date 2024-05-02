#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_ForagedItemVersion_Consume_Parent.GA_Athena_ForagedItemVersion_Consume_Parent_C
// (None)

class UClass* UGA_Athena_ForagedItemVersion_Consume_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_ForagedItemVersion_Consume_Parent_C");

	return Clss;
}


// GA_Athena_ForagedItemVersion_Consume_Parent_C GA_Athena_ForagedItemVersion_Consume_Parent.Default__GA_Athena_ForagedItemVersion_Consume_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_ForagedItemVersion_Consume_Parent_C* UGA_Athena_ForagedItemVersion_Consume_Parent_C::GetDefaultObj()
{
	static class UGA_Athena_ForagedItemVersion_Consume_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_ForagedItemVersion_Consume_Parent_C*>(UGA_Athena_ForagedItemVersion_Consume_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_ForagedItemVersion_Consume_Parent.GA_Athena_ForagedItemVersion_Consume_Parent_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Athena_ForagedItemVersion_Consume_Parent_C::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ForagedItemVersion_Consume_Parent_C", "K2_CommitExecute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_ForagedItemVersion_Consume_Parent.GA_Athena_ForagedItemVersion_Consume_Parent_C.ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetWeaponDataGameplayTags_GameplayTags                  (None)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SendComplexCustomStatEvent_QuestActive                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SendComplexCustomStatEvent_QuestCompleted               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ForagedItemVersion_Consume_Parent_C::ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetWeaponDataGameplayTags_GameplayTags, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_ForagedItemVersion_Consume_Parent_C", "ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent");

	Params::UGA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetWeaponDataGameplayTags_GameplayTags = CallFunc_GetWeaponDataGameplayTags_GameplayTags;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestActive = CallFunc_SendComplexCustomStatEvent_QuestActive;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestCompleted = CallFunc_SendComplexCustomStatEvent_QuestCompleted;

	UObject::ProcessEvent(Func, &Parms);

}

}


