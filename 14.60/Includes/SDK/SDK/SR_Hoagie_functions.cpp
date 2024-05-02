#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SR_Hoagie.SR_Hoagie_C
// (None)

class UClass* USR_Hoagie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SR_Hoagie_C");

	return Clss;
}


// SR_Hoagie_C SR_Hoagie.Default__SR_Hoagie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USR_Hoagie_C* USR_Hoagie_C::GetDefaultObj()
{
	static class USR_Hoagie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USR_Hoagie_C*>(USR_Hoagie_C::StaticClass()->DefaultObject);

	return Default;
}

}


