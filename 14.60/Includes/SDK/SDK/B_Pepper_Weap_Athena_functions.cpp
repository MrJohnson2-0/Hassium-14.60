#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Pepper_Weap_Athena.B_Pepper_Weap_Athena_C
// (Actor)

class UClass* AB_Pepper_Weap_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Pepper_Weap_Athena_C");

	return Clss;
}


// B_Pepper_Weap_Athena_C B_Pepper_Weap_Athena.Default__B_Pepper_Weap_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Pepper_Weap_Athena_C* AB_Pepper_Weap_Athena_C::GetDefaultObj()
{
	static class AB_Pepper_Weap_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Pepper_Weap_Athena_C*>(AB_Pepper_Weap_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


