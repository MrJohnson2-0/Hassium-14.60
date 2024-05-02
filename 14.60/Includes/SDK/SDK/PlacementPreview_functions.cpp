#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlacementPreview.PlacementPreview_C
// (Actor)

class UClass* APlacementPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlacementPreview_C");

	return Clss;
}


// PlacementPreview_C PlacementPreview.Default__PlacementPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APlacementPreview_C* APlacementPreview_C::GetDefaultObj()
{
	static class APlacementPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APlacementPreview_C*>(APlacementPreview_C::StaticClass()->DefaultObject);

	return Default;
}

}


