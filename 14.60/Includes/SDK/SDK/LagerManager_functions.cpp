#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LagerManager.LagerManager_C
// (None)

class UClass* ULagerManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LagerManager_C");

	return Clss;
}


// LagerManager_C LagerManager.Default__LagerManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULagerManager_C* ULagerManager_C::GetDefaultObj()
{
	static class ULagerManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULagerManager_C*>(ULagerManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


