#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C
// (None)

class UClass* UHighTower_Tapas_Axe_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighTower_Tapas_Axe_AnimBP_C");

	return Clss;
}


// HighTower_Tapas_Axe_AnimBP_C HighTower_Tapas_Axe_AnimBP.Default__HighTower_Tapas_Axe_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHighTower_Tapas_Axe_AnimBP_C* UHighTower_Tapas_Axe_AnimBP_C::GetDefaultObj()
{
	static class UHighTower_Tapas_Axe_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighTower_Tapas_Axe_AnimBP_C*>(UHighTower_Tapas_Axe_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHighTower_Tapas_Axe_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Tapas_Axe_AnimBP_C", "AnimGraph");

	Params::UHighTower_Tapas_Axe_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHighTower_Tapas_Axe_AnimBP_C::ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Tapas_Axe_AnimBP_C", "ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP");

	Params::UHighTower_Tapas_Axe_AnimBP_C_ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


