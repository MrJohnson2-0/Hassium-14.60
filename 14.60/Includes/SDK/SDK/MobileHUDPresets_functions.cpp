#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MobileHUDPresets.MobileHUDPresets_C
// (None)

class UClass* UMobileHUDPresets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MobileHUDPresets_C");

	return Clss;
}


// MobileHUDPresets_C MobileHUDPresets.Default__MobileHUDPresets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMobileHUDPresets_C* UMobileHUDPresets_C::GetDefaultObj()
{
	static class UMobileHUDPresets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMobileHUDPresets_C*>(UMobileHUDPresets_C::StaticClass()->DefaultObject);

	return Default;
}

}


