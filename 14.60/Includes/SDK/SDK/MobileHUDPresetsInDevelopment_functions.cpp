#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MobileHUDPresetsInDevelopment.MobileHUDPresetsInDevelopment_C
// (None)

class UClass* UMobileHUDPresetsInDevelopment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MobileHUDPresetsInDevelopment_C");

	return Clss;
}


// MobileHUDPresetsInDevelopment_C MobileHUDPresetsInDevelopment.Default__MobileHUDPresetsInDevelopment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMobileHUDPresetsInDevelopment_C* UMobileHUDPresetsInDevelopment_C::GetDefaultObj()
{
	static class UMobileHUDPresetsInDevelopment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMobileHUDPresetsInDevelopment_C*>(UMobileHUDPresetsInDevelopment_C::StaticClass()->DefaultObject);

	return Default;
}

}


