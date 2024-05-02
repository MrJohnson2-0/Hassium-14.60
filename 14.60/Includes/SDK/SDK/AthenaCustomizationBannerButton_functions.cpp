#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaCustomizationBannerButton.AthenaCustomizationBannerButton_C
// (None)

class UClass* UAthenaCustomizationBannerButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCustomizationBannerButton_C");

	return Clss;
}


// AthenaCustomizationBannerButton_C AthenaCustomizationBannerButton.Default__AthenaCustomizationBannerButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaCustomizationBannerButton_C* UAthenaCustomizationBannerButton_C::GetDefaultObj()
{
	static class UAthenaCustomizationBannerButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCustomizationBannerButton_C*>(UAthenaCustomizationBannerButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


