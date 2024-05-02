#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_HighTower_Date_BallLightning_FireMesh.BGA_HighTower_Date_BallLightning_FireMesh_C
// (Actor)

class UClass* ABGA_HighTower_Date_BallLightning_FireMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_HighTower_Date_BallLightning_FireMesh_C");

	return Clss;
}


// BGA_HighTower_Date_BallLightning_FireMesh_C BGA_HighTower_Date_BallLightning_FireMesh.Default__BGA_HighTower_Date_BallLightning_FireMesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_HighTower_Date_BallLightning_FireMesh_C* ABGA_HighTower_Date_BallLightning_FireMesh_C::GetDefaultObj()
{
	static class ABGA_HighTower_Date_BallLightning_FireMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_HighTower_Date_BallLightning_FireMesh_C*>(ABGA_HighTower_Date_BallLightning_FireMesh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BGA_HighTower_Date_BallLightning_FireMesh.BGA_HighTower_Date_BallLightning_FireMesh_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_HighTower_Date_BallLightning_FireMesh_C::UserConstructionScript(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_HighTower_Date_BallLightning_FireMesh_C", "UserConstructionScript");

	Params::ABGA_HighTower_Date_BallLightning_FireMesh_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BGA_HighTower_Date_BallLightning_FireMesh.BGA_HighTower_Date_BallLightning_FireMesh_C.ExecuteUbergraph_BGA_HighTower_Date_BallLightning_FireMesh
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_HighTower_Date_BallLightning_FireMesh_C::ExecuteUbergraph_BGA_HighTower_Date_BallLightning_FireMesh(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_HighTower_Date_BallLightning_FireMesh_C", "ExecuteUbergraph_BGA_HighTower_Date_BallLightning_FireMesh");

	Params::ABGA_HighTower_Date_BallLightning_FireMesh_C_ExecuteUbergraph_BGA_HighTower_Date_BallLightning_FireMesh_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


