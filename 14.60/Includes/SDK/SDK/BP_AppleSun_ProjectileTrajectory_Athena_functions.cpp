#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C
// (Actor)

class UClass* ABP_AppleSun_ProjectileTrajectory_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AppleSun_ProjectileTrajectory_Athena_C");

	return Clss;
}


// BP_AppleSun_ProjectileTrajectory_Athena_C BP_AppleSun_ProjectileTrajectory_Athena.Default__BP_AppleSun_ProjectileTrajectory_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AppleSun_ProjectileTrajectory_Athena_C* ABP_AppleSun_ProjectileTrajectory_Athena_C::GetDefaultObj()
{
	static class ABP_AppleSun_ProjectileTrajectory_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AppleSun_ProjectileTrajectory_Athena_C*>(ABP_AppleSun_ProjectileTrajectory_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AppleSun_ProjectileTrajectory_Athena_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AppleSun_ProjectileTrajectory_Athena_C", "ReceiveTick");

	Params::ABP_AppleSun_ProjectileTrajectory_Athena_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AppleSun_ProjectileTrajectory_Athena_C", "ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena");

	Params::ABP_AppleSun_ProjectileTrajectory_Athena_C_ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


