#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SR_Valet.SR_Valet_C
// (None)

class UClass* USR_Valet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SR_Valet_C");

	return Clss;
}


// SR_Valet_C SR_Valet.Default__SR_Valet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USR_Valet_C* USR_Valet_C::GetDefaultObj()
{
	static class USR_Valet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USR_Valet_C*>(USR_Valet_C::StaticClass()->DefaultObject);

	return Default;
}

}


