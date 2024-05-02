#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCPM_HighTower_Tomato_Body.CCPM_HighTower_Tomato_Body_C
// (Actor)

class UClass* ACCPM_HighTower_Tomato_Body_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCPM_HighTower_Tomato_Body_C");

	return Clss;
}


// CCPM_HighTower_Tomato_Body_C CCPM_HighTower_Tomato_Body.Default__CCPM_HighTower_Tomato_Body_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACCPM_HighTower_Tomato_Body_C* ACCPM_HighTower_Tomato_Body_C::GetDefaultObj()
{
	static class ACCPM_HighTower_Tomato_Body_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACCPM_HighTower_Tomato_Body_C*>(ACCPM_HighTower_Tomato_Body_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CCPM_HighTower_Tomato_Body.CCPM_HighTower_Tomato_Body_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_HighTower_Tomato_Body_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Body_C", "UserConstructionScript");

	Params::ACCPM_HighTower_Tomato_Body_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_HighTower_Tomato_Body.CCPM_HighTower_Tomato_Body_C.AnimNotify_CasualToMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_HighTower_Tomato_Body_C::AnimNotify_CasualToMask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Body_C", "AnimNotify_CasualToMask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_HighTower_Tomato_Body.CCPM_HighTower_Tomato_Body_C.AnimNotify_MaskToSuit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_HighTower_Tomato_Body_C::AnimNotify_MaskToSuit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Body_C", "AnimNotify_MaskToSuit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_HighTower_Tomato_Body.CCPM_HighTower_Tomato_Body_C.AnimNotify_SuitToMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_HighTower_Tomato_Body_C::AnimNotify_SuitToMask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Body_C", "AnimNotify_SuitToMask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_HighTower_Tomato_Body.CCPM_HighTower_Tomato_Body_C.AnimNotify_MaskToCasual
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_HighTower_Tomato_Body_C::AnimNotify_MaskToCasual()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Body_C", "AnimNotify_MaskToCasual");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_HighTower_Tomato_Body.CCPM_HighTower_Tomato_Body_C.ExecuteUbergraph_CCPM_HighTower_Tomato_Body
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_HighTower_Tomato_Body_C::ExecuteUbergraph_CCPM_HighTower_Tomato_Body(int32 EntryPoint, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_HighTower_Tomato_Body_C", "ExecuteUbergraph_CCPM_HighTower_Tomato_Body");

	Params::ACCPM_HighTower_Tomato_Body_C_ExecuteUbergraph_CCPM_HighTower_Tomato_Body_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_2;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


