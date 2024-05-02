#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCPM_Hightower_Honeydew_Eyes.CCPM_Hightower_Honeydew_Eyes_C
// (Actor)

class UClass* ACCPM_Hightower_Honeydew_Eyes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCPM_Hightower_Honeydew_Eyes_C");

	return Clss;
}


// CCPM_Hightower_Honeydew_Eyes_C CCPM_Hightower_Honeydew_Eyes.Default__CCPM_Hightower_Honeydew_Eyes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACCPM_Hightower_Honeydew_Eyes_C* ACCPM_Hightower_Honeydew_Eyes_C::GetDefaultObj()
{
	static class ACCPM_Hightower_Honeydew_Eyes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACCPM_Hightower_Honeydew_Eyes_C*>(ACCPM_Hightower_Honeydew_Eyes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CCPM_Hightower_Honeydew_Eyes.CCPM_Hightower_Honeydew_Eyes_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACCPM_Hightower_Honeydew_Eyes_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Hightower_Honeydew_Eyes_C", "ReceiveTick");

	Params::ACCPM_Hightower_Honeydew_Eyes_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_Hightower_Honeydew_Eyes.CCPM_Hightower_Honeydew_Eyes_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_Hightower_Honeydew_Eyes_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Hightower_Honeydew_Eyes_C", "OnPawnAndPartChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_Hightower_Honeydew_Eyes.CCPM_Hightower_Honeydew_Eyes_C.ExecuteUbergraph_CCPM_Hightower_Honeydew_Eyes
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Hightower_Honeydew_Eyes_C::ExecuteUbergraph_CCPM_Hightower_Honeydew_Eyes(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Hightower_Honeydew_Eyes_C", "ExecuteUbergraph_CCPM_Hightower_Honeydew_Eyes");

	Params::ACCPM_Hightower_Honeydew_Eyes_C_ExecuteUbergraph_CCPM_Hightower_Honeydew_Eyes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


