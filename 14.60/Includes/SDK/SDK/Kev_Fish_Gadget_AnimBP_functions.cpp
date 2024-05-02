#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Kev_Fish_Gadget_AnimBP.Kev_Fish_Gadget_AnimBP_C
// (None)

class UClass* UKev_Fish_Gadget_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kev_Fish_Gadget_AnimBP_C");

	return Clss;
}


// Kev_Fish_Gadget_AnimBP_C Kev_Fish_Gadget_AnimBP.Default__Kev_Fish_Gadget_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKev_Fish_Gadget_AnimBP_C* UKev_Fish_Gadget_AnimBP_C::GetDefaultObj()
{
	static class UKev_Fish_Gadget_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKev_Fish_Gadget_AnimBP_C*>(UKev_Fish_Gadget_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Kev_Fish_Gadget_AnimBP.Kev_Fish_Gadget_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UKev_Fish_Gadget_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kev_Fish_Gadget_AnimBP_C", "AnimGraph");

	Params::UKev_Fish_Gadget_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Kev_Fish_Gadget_AnimBP.Kev_Fish_Gadget_AnimBP_C.ExecuteUbergraph_Kev_Fish_Gadget_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKev_Fish_Gadget_AnimBP_C::ExecuteUbergraph_Kev_Fish_Gadget_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Kev_Fish_Gadget_AnimBP_C", "ExecuteUbergraph_Kev_Fish_Gadget_AnimBP");

	Params::UKev_Fish_Gadget_AnimBP_C_ExecuteUbergraph_Kev_Fish_Gadget_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


