#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCPM_EyeFlash.CCPM_EyeFlash_C
// (Actor)

class UClass* ACCPM_EyeFlash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCPM_EyeFlash_C");

	return Clss;
}


// CCPM_EyeFlash_C CCPM_EyeFlash.Default__CCPM_EyeFlash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACCPM_EyeFlash_C* ACCPM_EyeFlash_C::GetDefaultObj()
{
	static class ACCPM_EyeFlash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACCPM_EyeFlash_C*>(ACCPM_EyeFlash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CCPM_EyeFlash.CCPM_EyeFlash_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_EyeFlash_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_EyeFlash_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_EyeFlash.CCPM_EyeFlash_C.OnStatChanged_1F1873BA408CFFA47B9E30A71CDCAA22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_EyeFlash_C::OnStatChanged_1F1873BA408CFFA47B9E30A71CDCAA22(class FName StatName, int32 StatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_EyeFlash_C", "OnStatChanged_1F1873BA408CFFA47B9E30A71CDCAA22");

	Params::ACCPM_EyeFlash_C_OnStatChanged_1F1873BA408CFFA47B9E30A71CDCAA22_Params Parms{};

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_EyeFlash.CCPM_EyeFlash_C.UpdateBasedOnKills
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_EyeFlash_C::UpdateBasedOnKills()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_EyeFlash_C", "UpdateBasedOnKills");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_EyeFlash.CCPM_EyeFlash_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StageNumBeingActivated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_EyeFlash_C::CustomEvent(int32 StageNumBeingActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_EyeFlash_C", "CustomEvent");

	Params::ACCPM_EyeFlash_C_CustomEvent_Params Parms{};

	Parms.StageNumBeingActivated = StageNumBeingActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_EyeFlash.CCPM_EyeFlash_C.OnPostResIn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_EyeFlash_C::OnPostResIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_EyeFlash_C", "OnPostResIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_EyeFlash.CCPM_EyeFlash_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_EyeFlash_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_EyeFlash_C", "OnPawnAndPartChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_EyeFlash.CCPM_EyeFlash_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_EyeFlash_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_EyeFlash_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_EyeFlash.CCPM_EyeFlash_C.CE_FX color change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_EyeFlash_C::CE_FX_color_change(const struct FLinearColor& NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_EyeFlash_C", "CE_FX color change");

	Params::ACCPM_EyeFlash_C_CE_FX_color_change_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_EyeFlash.CCPM_EyeFlash_C.PreDestruction
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void ACCPM_EyeFlash_C::PreDestruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_EyeFlash_C", "PreDestruction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_EyeFlash.CCPM_EyeFlash_C.ExecuteUbergraph_CCPM_EyeFlash
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_StatName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StatValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_StageNumBeingActivated                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CosmeticAdaptiveStatWatcher*CallFunc_WatchCosmeticStat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      K2Node_DynamicCast_AsSkeletal_Mesh_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_EyeFlash_C::ExecuteUbergraph_CCPM_EyeFlash(int32 EntryPoint, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class FName Temp_name_Variable, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, int32 K2Node_Event_StageNumBeingActivated, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_NewParam, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_EyeFlash_C", "ExecuteUbergraph_CCPM_EyeFlash");

	Params::ACCPM_EyeFlash_C_ExecuteUbergraph_CCPM_EyeFlash_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_StatName = K2Node_CustomEvent_StatName;
	Parms.K2Node_CustomEvent_StatValue = K2Node_CustomEvent_StatValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue = CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	Parms.K2Node_Event_StageNumBeingActivated = K2Node_Event_StageNumBeingActivated;
	Parms.CallFunc_WatchCosmeticStat_ReturnValue = CallFunc_WatchCosmeticStat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1 = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Component = K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


