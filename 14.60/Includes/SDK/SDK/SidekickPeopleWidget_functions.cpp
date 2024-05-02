#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SidekickPeopleWidget.SidekickPeopleWidget_C
// (None)

class UClass* USidekickPeopleWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidekickPeopleWidget_C");

	return Clss;
}


// SidekickPeopleWidget_C SidekickPeopleWidget.Default__SidekickPeopleWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USidekickPeopleWidget_C* USidekickPeopleWidget_C::GetDefaultObj()
{
	static class USidekickPeopleWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USidekickPeopleWidget_C*>(USidekickPeopleWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


