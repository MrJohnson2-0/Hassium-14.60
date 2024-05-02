#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C
// (None)

class UClass* UFringe_Plank_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fringe_Plank_AnimBP_C");

	return Clss;
}


// Fringe_Plank_AnimBP_C Fringe_Plank_AnimBP.Default__Fringe_Plank_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFringe_Plank_AnimBP_C* UFringe_Plank_AnimBP_C::GetDefaultObj()
{
	static class UFringe_Plank_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFringe_Plank_AnimBP_C*>(UFringe_Plank_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFringe_Plank_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fringe_Plank_AnimBP_C", "AnimGraph");

	Params::UFringe_Plank_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.ExecuteUbergraph_Fringe_Plank_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFringe_Plank_AnimBP_C::ExecuteUbergraph_Fringe_Plank_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fringe_Plank_AnimBP_C", "ExecuteUbergraph_Fringe_Plank_AnimBP");

	Params::UFringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


