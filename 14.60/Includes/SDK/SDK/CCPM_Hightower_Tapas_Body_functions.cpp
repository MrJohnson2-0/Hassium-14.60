#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCPM_Hightower_Tapas_Body.CCPM_Hightower_Tapas_Body_C
// (Actor)

class UClass* ACCPM_Hightower_Tapas_Body_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCPM_Hightower_Tapas_Body_C");

	return Clss;
}


// CCPM_Hightower_Tapas_Body_C CCPM_Hightower_Tapas_Body.Default__CCPM_Hightower_Tapas_Body_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACCPM_Hightower_Tapas_Body_C* ACCPM_Hightower_Tapas_Body_C::GetDefaultObj()
{
	static class ACCPM_Hightower_Tapas_Body_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACCPM_Hightower_Tapas_Body_C*>(ACCPM_Hightower_Tapas_Body_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CCPM_Hightower_Tapas_Body.CCPM_Hightower_Tapas_Body_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_Hightower_Tapas_Body_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Hightower_Tapas_Body_C", "OnPawnAndPartChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_Hightower_Tapas_Body.CCPM_Hightower_Tapas_Body_C.ExecuteUbergraph_CCPM_Hightower_Tapas_Body
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Hightower_Tapas_Body_C::ExecuteUbergraph_CCPM_Hightower_Tapas_Body(int32 EntryPoint, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Hightower_Tapas_Body_C", "ExecuteUbergraph_CCPM_Hightower_Tapas_Body");

	Params::ACCPM_Hightower_Tapas_Body_C_ExecuteUbergraph_CCPM_Hightower_Tapas_Body_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


