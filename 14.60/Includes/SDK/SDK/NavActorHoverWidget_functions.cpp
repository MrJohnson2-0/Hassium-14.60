#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NavActorHoverWidget.NavActorHoverWidget_C
// (None)

class UClass* UNavActorHoverWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavActorHoverWidget_C");

	return Clss;
}


// NavActorHoverWidget_C NavActorHoverWidget.Default__NavActorHoverWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavActorHoverWidget_C* UNavActorHoverWidget_C::GetDefaultObj()
{
	static class UNavActorHoverWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavActorHoverWidget_C*>(UNavActorHoverWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


