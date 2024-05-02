#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Keycard_Athena_OilRig.B_Keycard_Athena_OilRig_C
// (Actor)

class UClass* AB_Keycard_Athena_OilRig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Keycard_Athena_OilRig_C");

	return Clss;
}


// B_Keycard_Athena_OilRig_C B_Keycard_Athena_OilRig.Default__B_Keycard_Athena_OilRig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Keycard_Athena_OilRig_C* AB_Keycard_Athena_OilRig_C::GetDefaultObj()
{
	static class AB_Keycard_Athena_OilRig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Keycard_Athena_OilRig_C*>(AB_Keycard_Athena_OilRig_C::StaticClass()->DefaultObject);

	return Default;
}

}


