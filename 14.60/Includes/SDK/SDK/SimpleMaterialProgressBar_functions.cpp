#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SimpleMaterialProgressBar.SimpleMaterialProgressBar_C
// (None)

class UClass* USimpleMaterialProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleMaterialProgressBar_C");

	return Clss;
}


// SimpleMaterialProgressBar_C SimpleMaterialProgressBar.Default__SimpleMaterialProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimpleMaterialProgressBar_C* USimpleMaterialProgressBar_C::GetDefaultObj()
{
	static class USimpleMaterialProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USimpleMaterialProgressBar_C*>(USimpleMaterialProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


