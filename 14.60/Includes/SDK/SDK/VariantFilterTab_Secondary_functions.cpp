#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VariantFilterTab_Secondary.VariantFilterTab_Secondary_C
// (None)

class UClass* UVariantFilterTab_Secondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VariantFilterTab_Secondary_C");

	return Clss;
}


// VariantFilterTab_Secondary_C VariantFilterTab_Secondary.Default__VariantFilterTab_Secondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVariantFilterTab_Secondary_C* UVariantFilterTab_Secondary_C::GetDefaultObj()
{
	static class UVariantFilterTab_Secondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVariantFilterTab_Secondary_C*>(UVariantFilterTab_Secondary_C::StaticClass()->DefaultObject);

	return Default;
}

}


