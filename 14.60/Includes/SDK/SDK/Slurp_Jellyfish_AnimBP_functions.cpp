#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C
// (None)

class UClass* USlurp_Jellyfish_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Slurp_Jellyfish_AnimBP_C");

	return Clss;
}


// Slurp_Jellyfish_AnimBP_C Slurp_Jellyfish_AnimBP.Default__Slurp_Jellyfish_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USlurp_Jellyfish_AnimBP_C* USlurp_Jellyfish_AnimBP_C::GetDefaultObj()
{
	static class USlurp_Jellyfish_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USlurp_Jellyfish_AnimBP_C*>(USlurp_Jellyfish_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USlurp_Jellyfish_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slurp_Jellyfish_AnimBP_C", "AnimGraph");

	Params::USlurp_Jellyfish_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C.ExecuteUbergraph_Slurp_Jellyfish_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlurp_Jellyfish_AnimBP_C::ExecuteUbergraph_Slurp_Jellyfish_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slurp_Jellyfish_AnimBP_C", "ExecuteUbergraph_Slurp_Jellyfish_AnimBP");

	Params::USlurp_Jellyfish_AnimBP_C_ExecuteUbergraph_Slurp_Jellyfish_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


