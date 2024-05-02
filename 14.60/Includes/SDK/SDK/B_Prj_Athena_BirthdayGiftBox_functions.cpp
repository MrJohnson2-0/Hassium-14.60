#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Prj_Athena_BirthdayGiftBox.B_Prj_Athena_BirthdayGiftBox_C
// (Actor)

class UClass* AB_Prj_Athena_BirthdayGiftBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Prj_Athena_BirthdayGiftBox_C");

	return Clss;
}


// B_Prj_Athena_BirthdayGiftBox_C B_Prj_Athena_BirthdayGiftBox.Default__B_Prj_Athena_BirthdayGiftBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Prj_Athena_BirthdayGiftBox_C* AB_Prj_Athena_BirthdayGiftBox_C::GetDefaultObj()
{
	static class AB_Prj_Athena_BirthdayGiftBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Prj_Athena_BirthdayGiftBox_C*>(AB_Prj_Athena_BirthdayGiftBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Prj_Athena_BirthdayGiftBox.B_Prj_Athena_BirthdayGiftBox_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              HitActors                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FHitResult>          HitResults                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void AB_Prj_Athena_BirthdayGiftBox_C::OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_BirthdayGiftBox_C", "OnExploded");

	Params::AB_Prj_Athena_BirthdayGiftBox_C_OnExploded_Params Parms{};

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_BirthdayGiftBox.B_Prj_Athena_BirthdayGiftBox_C.ExecuteUbergraph_B_Prj_Athena_BirthdayGiftBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_Event_HitActors                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FHitResult>          K2Node_Event_HitResults                                          (ConstParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void AB_Prj_Athena_BirthdayGiftBox_C::ExecuteUbergraph_B_Prj_Athena_BirthdayGiftBox(int32 EntryPoint, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Prj_Athena_BirthdayGiftBox_C", "ExecuteUbergraph_B_Prj_Athena_BirthdayGiftBox");

	Params::AB_Prj_Athena_BirthdayGiftBox_C_ExecuteUbergraph_B_Prj_Athena_BirthdayGiftBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_HitActors = K2Node_Event_HitActors;
	Parms.K2Node_Event_HitResults = K2Node_Event_HitResults;

	UObject::ProcessEvent(Func, &Parms);

}

}


