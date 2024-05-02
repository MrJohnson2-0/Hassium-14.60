#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NameLoadoutPopup.NameLoadoutPopup_C
// (None)

class UClass* UNameLoadoutPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NameLoadoutPopup_C");

	return Clss;
}


// NameLoadoutPopup_C NameLoadoutPopup.Default__NameLoadoutPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNameLoadoutPopup_C* UNameLoadoutPopup_C::GetDefaultObj()
{
	static class UNameLoadoutPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNameLoadoutPopup_C*>(UNameLoadoutPopup_C::StaticClass()->DefaultObject);

	return Default;
}

}


