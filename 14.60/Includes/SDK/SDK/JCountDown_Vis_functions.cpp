#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JCountDown_Vis.JCountDown_Vis_C
// (Actor)

class UClass* AJCountDown_Vis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JCountDown_Vis_C");

	return Clss;
}


// JCountDown_Vis_C JCountDown_Vis.Default__JCountDown_Vis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AJCountDown_Vis_C* AJCountDown_Vis_C::GetDefaultObj()
{
	static class AJCountDown_Vis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AJCountDown_Vis_C*>(AJCountDown_Vis_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JCountDown_Vis.JCountDown_Vis_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AJCountDown_Vis_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JCountDown_Vis_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JCountDown_Vis.JCountDown_Vis_C.ExecuteUbergraph_JCountDown_Vis
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AJCountDown_Vis_C::ExecuteUbergraph_JCountDown_Vis(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JCountDown_Vis_C", "ExecuteUbergraph_JCountDown_Vis");

	Params::AJCountDown_Vis_C_ExecuteUbergraph_JCountDown_Vis_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


