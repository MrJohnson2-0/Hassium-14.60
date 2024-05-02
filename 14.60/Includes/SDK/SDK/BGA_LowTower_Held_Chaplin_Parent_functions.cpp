#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_LowTower_Held_Chaplin_Parent.BGA_LowTower_Held_Chaplin_Parent_C
// (Actor)

class UClass* ABGA_LowTower_Held_Chaplin_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_LowTower_Held_Chaplin_Parent_C");

	return Clss;
}


// BGA_LowTower_Held_Chaplin_Parent_C BGA_LowTower_Held_Chaplin_Parent.Default__BGA_LowTower_Held_Chaplin_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_LowTower_Held_Chaplin_Parent_C* ABGA_LowTower_Held_Chaplin_Parent_C::GetDefaultObj()
{
	static class ABGA_LowTower_Held_Chaplin_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_LowTower_Held_Chaplin_Parent_C*>(ABGA_LowTower_Held_Chaplin_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BGA_LowTower_Held_Chaplin_Parent.BGA_LowTower_Held_Chaplin_Parent_C.OnRep_bHasExploded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABGA_LowTower_Held_Chaplin_Parent_C::OnRep_bHasExploded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LowTower_Held_Chaplin_Parent_C", "OnRep_bHasExploded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_LowTower_Held_Chaplin_Parent.BGA_LowTower_Held_Chaplin_Parent_C.OnExplosionNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Exploded                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_LowTower_Held_Chaplin_Parent_C::OnExplosionNotify(bool Exploded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LowTower_Held_Chaplin_Parent_C", "OnExplosionNotify");

	Params::ABGA_LowTower_Held_Chaplin_Parent_C_OnExplosionNotify_Params Parms{};

	Parms.Exploded = Exploded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_LowTower_Held_Chaplin_Parent.BGA_LowTower_Held_Chaplin_Parent_C.ExecuteUbergraph_BGA_LowTower_Held_Chaplin_Parent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Exploded                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_LowTower_Held_Chaplin_Parent_C::ExecuteUbergraph_BGA_LowTower_Held_Chaplin_Parent(int32 EntryPoint, bool K2Node_CustomEvent_Exploded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_LowTower_Held_Chaplin_Parent_C", "ExecuteUbergraph_BGA_LowTower_Held_Chaplin_Parent");

	Params::ABGA_LowTower_Held_Chaplin_Parent_C_ExecuteUbergraph_BGA_LowTower_Held_Chaplin_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Exploded = K2Node_CustomEvent_Exploded;

	UObject::ProcessEvent(Func, &Parms);

}

}


