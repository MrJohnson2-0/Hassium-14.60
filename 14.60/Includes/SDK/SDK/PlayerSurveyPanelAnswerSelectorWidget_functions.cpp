#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C
// (None)

class UClass* UPlayerSurveyPanelAnswerSelectorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerSurveyPanelAnswerSelectorWidget_C");

	return Clss;
}


// PlayerSurveyPanelAnswerSelectorWidget_C PlayerSurveyPanelAnswerSelectorWidget.Default__PlayerSurveyPanelAnswerSelectorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerSurveyPanelAnswerSelectorWidget_C* UPlayerSurveyPanelAnswerSelectorWidget_C::GetDefaultObj()
{
	static class UPlayerSurveyPanelAnswerSelectorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerSurveyPanelAnswerSelectorWidget_C*>(UPlayerSurveyPanelAnswerSelectorWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


