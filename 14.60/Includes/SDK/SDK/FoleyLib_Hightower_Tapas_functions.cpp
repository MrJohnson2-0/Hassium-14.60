#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoleyLib_Hightower_Tapas.FoleyLib_Hightower_Tapas_C
// (None)

class UClass* UFoleyLib_Hightower_Tapas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyLib_Hightower_Tapas_C");

	return Clss;
}


// FoleyLib_Hightower_Tapas_C FoleyLib_Hightower_Tapas.Default__FoleyLib_Hightower_Tapas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoleyLib_Hightower_Tapas_C* UFoleyLib_Hightower_Tapas_C::GetDefaultObj()
{
	static class UFoleyLib_Hightower_Tapas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyLib_Hightower_Tapas_C*>(UFoleyLib_Hightower_Tapas_C::StaticClass()->DefaultObject);

	return Default;
}

}


