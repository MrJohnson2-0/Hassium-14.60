#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_Athena_Keycard_Lock_Fortilla.BGA_Athena_Keycard_Lock_Fortilla_C
// (Actor)

class UClass* ABGA_Athena_Keycard_Lock_Fortilla_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_Athena_Keycard_Lock_Fortilla_C");

	return Clss;
}


// BGA_Athena_Keycard_Lock_Fortilla_C BGA_Athena_Keycard_Lock_Fortilla.Default__BGA_Athena_Keycard_Lock_Fortilla_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_Athena_Keycard_Lock_Fortilla_C* ABGA_Athena_Keycard_Lock_Fortilla_C::GetDefaultObj()
{
	static class ABGA_Athena_Keycard_Lock_Fortilla_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_Athena_Keycard_Lock_Fortilla_C*>(ABGA_Athena_Keycard_Lock_Fortilla_C::StaticClass()->DefaultObject);

	return Default;
}

}


