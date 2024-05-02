#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Hightower_Claws_Gadget_AnimBluePrint.Hightower_Claws_Gadget_AnimBluePrint_C
// (None)

class UClass* UHightower_Claws_Gadget_AnimBluePrint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hightower_Claws_Gadget_AnimBluePrint_C");

	return Clss;
}


// Hightower_Claws_Gadget_AnimBluePrint_C Hightower_Claws_Gadget_AnimBluePrint.Default__Hightower_Claws_Gadget_AnimBluePrint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHightower_Claws_Gadget_AnimBluePrint_C* UHightower_Claws_Gadget_AnimBluePrint_C::GetDefaultObj()
{
	static class UHightower_Claws_Gadget_AnimBluePrint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHightower_Claws_Gadget_AnimBluePrint_C*>(UHightower_Claws_Gadget_AnimBluePrint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Hightower_Claws_Gadget_AnimBluePrint.Hightower_Claws_Gadget_AnimBluePrint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHightower_Claws_Gadget_AnimBluePrint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hightower_Claws_Gadget_AnimBluePrint_C", "AnimGraph");

	Params::UHightower_Claws_Gadget_AnimBluePrint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Hightower_Claws_Gadget_AnimBluePrint.Hightower_Claws_Gadget_AnimBluePrint_C.ExecuteUbergraph_Hightower_Claws_Gadget_AnimBluePrint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHightower_Claws_Gadget_AnimBluePrint_C::ExecuteUbergraph_Hightower_Claws_Gadget_AnimBluePrint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Hightower_Claws_Gadget_AnimBluePrint_C", "ExecuteUbergraph_Hightower_Claws_Gadget_AnimBluePrint");

	Params::UHightower_Claws_Gadget_AnimBluePrint_C_ExecuteUbergraph_Hightower_Claws_Gadget_AnimBluePrint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


