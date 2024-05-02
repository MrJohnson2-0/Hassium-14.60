#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C
// (None)

class UClass* UAthenaItemTextureVariantPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaItemTextureVariantPicker_C");

	return Clss;
}


// AthenaItemTextureVariantPicker_C AthenaItemTextureVariantPicker.Default__AthenaItemTextureVariantPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaItemTextureVariantPicker_C* UAthenaItemTextureVariantPicker_C::GetDefaultObj()
{
	static class UAthenaItemTextureVariantPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaItemTextureVariantPicker_C*>(UAthenaItemTextureVariantPicker_C::StaticClass()->DefaultObject);

	return Default;
}

}


