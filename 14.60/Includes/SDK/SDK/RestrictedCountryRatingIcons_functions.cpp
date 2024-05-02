#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RestrictedCountryRatingIcons.RestrictedCountryRatingIcons_C
// (None)

class UClass* URestrictedCountryRatingIcons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RestrictedCountryRatingIcons_C");

	return Clss;
}


// RestrictedCountryRatingIcons_C RestrictedCountryRatingIcons.Default__RestrictedCountryRatingIcons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URestrictedCountryRatingIcons_C* URestrictedCountryRatingIcons_C::GetDefaultObj()
{
	static class URestrictedCountryRatingIcons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URestrictedCountryRatingIcons_C*>(URestrictedCountryRatingIcons_C::StaticClass()->DefaultObject);

	return Default;
}

}


