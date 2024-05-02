#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_CurieFireMesh_MolotovCocktail.BGA_CurieFireMesh_MolotovCocktail_C
// (Actor)

class UClass* ABGA_CurieFireMesh_MolotovCocktail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_CurieFireMesh_MolotovCocktail_C");

	return Clss;
}


// BGA_CurieFireMesh_MolotovCocktail_C BGA_CurieFireMesh_MolotovCocktail.Default__BGA_CurieFireMesh_MolotovCocktail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_CurieFireMesh_MolotovCocktail_C* ABGA_CurieFireMesh_MolotovCocktail_C::GetDefaultObj()
{
	static class ABGA_CurieFireMesh_MolotovCocktail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_CurieFireMesh_MolotovCocktail_C*>(ABGA_CurieFireMesh_MolotovCocktail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BGA_CurieFireMesh_MolotovCocktail.BGA_CurieFireMesh_MolotovCocktail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_CurieFireMesh_MolotovCocktail_C::UserConstructionScript(float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BGA_CurieFireMesh_MolotovCocktail_C", "UserConstructionScript");

	Params::ABGA_CurieFireMesh_MolotovCocktail_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


