#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_Mannequin.BP_Frontend_EventLevel_NavObject_Mannequin_C
// (Actor)

class UClass* ABP_Frontend_EventLevel_NavObject_Mannequin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_EventLevel_NavObject_Mannequin_C");

	return Clss;
}


// BP_Frontend_EventLevel_NavObject_Mannequin_C BP_Frontend_EventLevel_NavObject_Mannequin.Default__BP_Frontend_EventLevel_NavObject_Mannequin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frontend_EventLevel_NavObject_Mannequin_C* ABP_Frontend_EventLevel_NavObject_Mannequin_C::GetDefaultObj()
{
	static class ABP_Frontend_EventLevel_NavObject_Mannequin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frontend_EventLevel_NavObject_Mannequin_C*>(ABP_Frontend_EventLevel_NavObject_Mannequin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_EventLevel_NavObject_Mannequin.BP_Frontend_EventLevel_NavObject_Mannequin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_Mannequin_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Mannequin_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Frontend_EventLevel_NavObject_Mannequin.BP_Frontend_EventLevel_NavObject_Mannequin_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Mannequin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_Mannequin_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Mannequin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_Mannequin_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Mannequin");

	Params::ABP_Frontend_EventLevel_NavObject_Mannequin_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Mannequin_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


