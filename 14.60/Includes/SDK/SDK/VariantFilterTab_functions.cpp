#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VariantFilterTab.VariantFilterTab_C
// (None)

class UClass* UVariantFilterTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VariantFilterTab_C");

	return Clss;
}


// VariantFilterTab_C VariantFilterTab.Default__VariantFilterTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVariantFilterTab_C* UVariantFilterTab_C::GetDefaultObj()
{
	static class UVariantFilterTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariantFilterTab_C*>(UVariantFilterTab_C::StaticClass()->DefaultObject);

	return Default;
}

}


