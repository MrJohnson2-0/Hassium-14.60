#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaRichColorVariantPicker.AthenaRichColorVariantPicker_C
// (None)

class UClass* UAthenaRichColorVariantPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaRichColorVariantPicker_C");

	return Clss;
}


// AthenaRichColorVariantPicker_C AthenaRichColorVariantPicker.Default__AthenaRichColorVariantPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaRichColorVariantPicker_C* UAthenaRichColorVariantPicker_C::GetDefaultObj()
{
	static class UAthenaRichColorVariantPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaRichColorVariantPicker_C*>(UAthenaRichColorVariantPicker_C::StaticClass()->DefaultObject);

	return Default;
}

}


