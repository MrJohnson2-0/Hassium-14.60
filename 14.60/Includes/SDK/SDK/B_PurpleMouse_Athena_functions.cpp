#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_PurpleMouse_Athena.B_PurpleMouse_Athena_C
// (Actor)

class UClass* AB_PurpleMouse_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_PurpleMouse_Athena_C");

	return Clss;
}


// B_PurpleMouse_Athena_C B_PurpleMouse_Athena.Default__B_PurpleMouse_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_PurpleMouse_Athena_C* AB_PurpleMouse_Athena_C::GetDefaultObj()
{
	static class AB_PurpleMouse_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_PurpleMouse_Athena_C*>(AB_PurpleMouse_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


