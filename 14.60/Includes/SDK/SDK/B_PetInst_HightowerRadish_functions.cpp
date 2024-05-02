#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_PetInst_HightowerRadish.B_PetInst_HightowerRadish_C
// (Actor)

class UClass* AB_PetInst_HightowerRadish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_PetInst_HightowerRadish_C");

	return Clss;
}


// B_PetInst_HightowerRadish_C B_PetInst_HightowerRadish.Default__B_PetInst_HightowerRadish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_PetInst_HightowerRadish_C* AB_PetInst_HightowerRadish_C::GetDefaultObj()
{
	static class AB_PetInst_HightowerRadish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_PetInst_HightowerRadish_C*>(AB_PetInst_HightowerRadish_C::StaticClass()->DefaultObject);

	return Default;
}

}


