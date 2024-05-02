#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyPanelContents.PlayerSurveyPanelContents_C
// (None)

class UClass* UPlayerSurveyPanelContents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyPanelContents_C");

	return Clss;
}


// PlayerSurveyPanelContents_C PlayerSurveyPanelContents.Default__PlayerSurveyPanelContents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyPanelContents_C* UPlayerSurveyPanelContents_C::GetDefaultObj()
{
	static class UPlayerSurveyPanelContents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyPanelContents_C*>(UPlayerSurveyPanelContents_C::StaticClass()->DefaultObject);

	return Default;
}

}


