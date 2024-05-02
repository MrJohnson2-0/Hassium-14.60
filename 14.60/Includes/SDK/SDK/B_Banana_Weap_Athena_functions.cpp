#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Banana_Weap_Athena.B_Banana_Weap_Athena_C
// (Actor)

class UClass* AB_Banana_Weap_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Banana_Weap_Athena_C");

	return Clss;
}


// B_Banana_Weap_Athena_C B_Banana_Weap_Athena.Default__B_Banana_Weap_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Banana_Weap_Athena_C* AB_Banana_Weap_Athena_C::GetDefaultObj()
{
	static class AB_Banana_Weap_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Banana_Weap_Athena_C*>(AB_Banana_Weap_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


