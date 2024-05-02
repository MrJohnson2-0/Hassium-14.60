#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass LowTower_Chaplin_AnimBP.LowTower_Chaplin_AnimBP_C
// (None)

class UClass* ULowTower_Chaplin_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowTower_Chaplin_AnimBP_C");

	return Clss;
}


// LowTower_Chaplin_AnimBP_C LowTower_Chaplin_AnimBP.Default__LowTower_Chaplin_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULowTower_Chaplin_AnimBP_C* ULowTower_Chaplin_AnimBP_C::GetDefaultObj()
{
	static class ULowTower_Chaplin_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowTower_Chaplin_AnimBP_C*>(ULowTower_Chaplin_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LowTower_Chaplin_AnimBP.LowTower_Chaplin_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void ULowTower_Chaplin_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowTower_Chaplin_AnimBP_C", "AnimGraph");

	Params::ULowTower_Chaplin_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function LowTower_Chaplin_AnimBP.LowTower_Chaplin_AnimBP_C.ExecuteUbergraph_LowTower_Chaplin_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULowTower_Chaplin_AnimBP_C::ExecuteUbergraph_LowTower_Chaplin_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowTower_Chaplin_AnimBP_C", "ExecuteUbergraph_LowTower_Chaplin_AnimBP");

	Params::ULowTower_Chaplin_AnimBP_C_ExecuteUbergraph_LowTower_Chaplin_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


