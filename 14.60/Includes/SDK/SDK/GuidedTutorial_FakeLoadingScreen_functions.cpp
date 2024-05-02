#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GuidedTutorial_FakeLoadingScreen.GuidedTutorial_FakeLoadingScreen_C
// (None)

class UClass* UGuidedTutorial_FakeLoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GuidedTutorial_FakeLoadingScreen_C");

	return Clss;
}


// GuidedTutorial_FakeLoadingScreen_C GuidedTutorial_FakeLoadingScreen.Default__GuidedTutorial_FakeLoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGuidedTutorial_FakeLoadingScreen_C* UGuidedTutorial_FakeLoadingScreen_C::GetDefaultObj()
{
	static class UGuidedTutorial_FakeLoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGuidedTutorial_FakeLoadingScreen_C*>(UGuidedTutorial_FakeLoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


