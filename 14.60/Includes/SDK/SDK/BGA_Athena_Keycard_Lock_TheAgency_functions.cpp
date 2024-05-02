#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BGA_Athena_Keycard_Lock_TheAgency.BGA_Athena_Keycard_Lock_TheAgency_C
// (Actor)

class UClass* ABGA_Athena_Keycard_Lock_TheAgency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BGA_Athena_Keycard_Lock_TheAgency_C");

	return Clss;
}


// BGA_Athena_Keycard_Lock_TheAgency_C BGA_Athena_Keycard_Lock_TheAgency.Default__BGA_Athena_Keycard_Lock_TheAgency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABGA_Athena_Keycard_Lock_TheAgency_C* ABGA_Athena_Keycard_Lock_TheAgency_C::GetDefaultObj()
{
	static class ABGA_Athena_Keycard_Lock_TheAgency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABGA_Athena_Keycard_Lock_TheAgency_C*>(ABGA_Athena_Keycard_Lock_TheAgency_C::StaticClass()->DefaultObject);

	return Default;
}

}


