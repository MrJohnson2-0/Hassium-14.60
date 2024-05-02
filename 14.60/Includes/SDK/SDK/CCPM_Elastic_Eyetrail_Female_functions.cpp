#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CCPM_Elastic_Eyetrail_Female.CCPM_Elastic_Eyetrail_Female_C
// (Actor)

class UClass* ACCPM_Elastic_Eyetrail_Female_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CCPM_Elastic_Eyetrail_Female_C");

	return Clss;
}


// CCPM_Elastic_Eyetrail_Female_C CCPM_Elastic_Eyetrail_Female.Default__CCPM_Elastic_Eyetrail_Female_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACCPM_Elastic_Eyetrail_Female_C* ACCPM_Elastic_Eyetrail_Female_C::GetDefaultObj()
{
	static class ACCPM_Elastic_Eyetrail_Female_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACCPM_Elastic_Eyetrail_Female_C*>(ACCPM_Elastic_Eyetrail_Female_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CCPM_Elastic_Eyetrail_Female.CCPM_Elastic_Eyetrail_Female_C.OnDayPhaseChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           PreviousDayPhase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAtCreation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Elastic_Eyetrail_Female_C::OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Elastic_Eyetrail_Female_C", "OnDayPhaseChanged");

	Params::ACCPM_Elastic_Eyetrail_Female_C_OnDayPhaseChanged_Params Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_Elastic_Eyetrail_Female.CCPM_Elastic_Eyetrail_Female_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_Elastic_Eyetrail_Female_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Elastic_Eyetrail_Female_C", "OnPawnAndPartChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CCPM_Elastic_Eyetrail_Female.CCPM_Elastic_Eyetrail_Female_C.ExecuteUbergraph_CCPM_Elastic_Eyetrail_Female
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_Event_CurrentDayPhase                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDayPhase           K2Node_Event_PreviousDayPhase                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAtCreation                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInFrontend_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_Elastic_Eyetrail_Female_C::ExecuteUbergraph_CCPM_Elastic_Eyetrail_Female(int32 EntryPoint, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, bool K2Node_SwitchEnum_CmpSuccess, class UMeshComponent* CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsInFrontend_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CCPM_Elastic_Eyetrail_Female_C", "ExecuteUbergraph_CCPM_Elastic_Eyetrail_Female");

	Params::ACCPM_Elastic_Eyetrail_Female_C_ExecuteUbergraph_CCPM_Elastic_Eyetrail_Female_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_CurrentDayPhase = K2Node_Event_CurrentDayPhase;
	Parms.K2Node_Event_PreviousDayPhase = K2Node_Event_PreviousDayPhase;
	Parms.K2Node_Event_bAtCreation = K2Node_Event_bAtCreation;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue = CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_IsInFrontend_ReturnValue = CallFunc_IsInFrontend_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


