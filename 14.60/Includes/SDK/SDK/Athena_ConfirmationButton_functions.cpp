#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Athena_ConfirmationButton.Athena_ConfirmationButton_C
// (None)

class UClass* UAthena_ConfirmationButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_ConfirmationButton_C");

	return Clss;
}


// Athena_ConfirmationButton_C Athena_ConfirmationButton.Default__Athena_ConfirmationButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_ConfirmationButton_C* UAthena_ConfirmationButton_C::GetDefaultObj()
{
	static class UAthena_ConfirmationButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_ConfirmationButton_C*>(UAthena_ConfirmationButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


