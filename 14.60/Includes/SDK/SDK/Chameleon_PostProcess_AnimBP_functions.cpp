#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Chameleon_PostProcess_AnimBP.Chameleon_PostProcess_AnimBP_C
// (None)

class UClass* UChameleon_PostProcess_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chameleon_PostProcess_AnimBP_C");

	return Clss;
}


// Chameleon_PostProcess_AnimBP_C Chameleon_PostProcess_AnimBP.Default__Chameleon_PostProcess_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChameleon_PostProcess_AnimBP_C* UChameleon_PostProcess_AnimBP_C::GetDefaultObj()
{
	static class UChameleon_PostProcess_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChameleon_PostProcess_AnimBP_C*>(UChameleon_PostProcess_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Chameleon_PostProcess_AnimBP.Chameleon_PostProcess_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UChameleon_PostProcess_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_PostProcess_AnimBP_C", "AnimGraph");

	Params::UChameleon_PostProcess_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Chameleon_PostProcess_AnimBP.Chameleon_PostProcess_AnimBP_C.ExecuteUbergraph_Chameleon_PostProcess_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChameleon_PostProcess_AnimBP_C::ExecuteUbergraph_Chameleon_PostProcess_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Chameleon_PostProcess_AnimBP_C", "ExecuteUbergraph_Chameleon_PostProcess_AnimBP");

	Params::UChameleon_PostProcess_AnimBP_C_ExecuteUbergraph_Chameleon_PostProcess_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


