#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prj_Athena_Consumable_Thrown_Coconut.Prj_Athena_Consumable_Thrown_Coconut_C
// (Actor)

class UClass* APrj_Athena_Consumable_Thrown_Coconut_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prj_Athena_Consumable_Thrown_Coconut_C");

	return Clss;
}


// Prj_Athena_Consumable_Thrown_Coconut_C Prj_Athena_Consumable_Thrown_Coconut.Default__Prj_Athena_Consumable_Thrown_Coconut_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrj_Athena_Consumable_Thrown_Coconut_C* APrj_Athena_Consumable_Thrown_Coconut_C::GetDefaultObj()
{
	static class APrj_Athena_Consumable_Thrown_Coconut_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrj_Athena_Consumable_Thrown_Coconut_C*>(APrj_Athena_Consumable_Thrown_Coconut_C::StaticClass()->DefaultObject);

	return Default;
}

}


