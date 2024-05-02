#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C
// (Actor)

class UClass* AB_CameraLens_Boat_Droplets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraLens_Boat_Droplets_C");

	return Clss;
}


// B_CameraLens_Boat_Droplets_C B_CameraLens_Boat_Droplets.Default__B_CameraLens_Boat_Droplets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CameraLens_Boat_Droplets_C* AB_CameraLens_Boat_Droplets_C::GetDefaultObj()
{
	static class AB_CameraLens_Boat_Droplets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CameraLens_Boat_Droplets_C*>(AB_CameraLens_Boat_Droplets_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraLens_Boat_Droplets_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Boat_Droplets_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraLens_Boat_Droplets_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Boat_Droplets_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Boat_Droplets_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Boat_Droplets_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_CameraLens_Boat_Droplets_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Boat_Droplets_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ExecuteUbergraph_B_CameraLens_Boat_Droplets
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Boat_Droplets_C::ExecuteUbergraph_B_CameraLens_Boat_Droplets(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraLens_Boat_Droplets_C", "ExecuteUbergraph_B_CameraLens_Boat_Droplets");

	Params::AB_CameraLens_Boat_Droplets_C_ExecuteUbergraph_B_CameraLens_Boat_Droplets_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


