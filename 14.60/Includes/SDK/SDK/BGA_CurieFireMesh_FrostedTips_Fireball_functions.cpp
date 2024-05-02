#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_CurieFireMesh_FrostedTips_Fireball.BGA_CurieFireMesh_FrostedTips_Fireball_C
// (Actor)

class UClass* ABGA_CurieFireMesh_FrostedTips_Fireball_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_CurieFireMesh_FrostedTips_Fireball_C");

	return Clss;
}


// BGA_CurieFireMesh_FrostedTips_Fireball_C BGA_CurieFireMesh_FrostedTips_Fireball.Default__BGA_CurieFireMesh_FrostedTips_Fireball_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_CurieFireMesh_FrostedTips_Fireball_C* ABGA_CurieFireMesh_FrostedTips_Fireball_C::GetDefaultObj()
{
	static class ABGA_CurieFireMesh_FrostedTips_Fireball_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_CurieFireMesh_FrostedTips_Fireball_C*>(ABGA_CurieFireMesh_FrostedTips_Fireball_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BGA_CurieFireMesh_FrostedTips_Fireball.BGA_CurieFireMesh_FrostedTips_Fireball_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABGA_CurieFireMesh_FrostedTips_Fireball_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_CurieFireMesh_FrostedTips_Fireball_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BGA_CurieFireMesh_FrostedTips_Fireball.BGA_CurieFireMesh_FrostedTips_Fireball_C.ExecuteUbergraph_BGA_CurieFireMesh_FrostedTips_Fireball
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_CurieFireMesh_FrostedTips_Fireball_C::ExecuteUbergraph_BGA_CurieFireMesh_FrostedTips_Fireball(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_CurieFireMesh_FrostedTips_Fireball_C", "ExecuteUbergraph_BGA_CurieFireMesh_FrostedTips_Fireball");

	Params::ABGA_CurieFireMesh_FrostedTips_Fireball_C_ExecuteUbergraph_BGA_CurieFireMesh_FrostedTips_Fireball_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


