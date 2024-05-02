#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SubgameSelectStateWidget.SubgameSelectStateWidget_C
// (None)

class UClass* USubgameSelectStateWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubgameSelectStateWidget_C");

	return Clss;
}


// SubgameSelectStateWidget_C SubgameSelectStateWidget.Default__SubgameSelectStateWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubgameSelectStateWidget_C* USubgameSelectStateWidget_C::GetDefaultObj()
{
	static class USubgameSelectStateWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubgameSelectStateWidget_C*>(USubgameSelectStateWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


