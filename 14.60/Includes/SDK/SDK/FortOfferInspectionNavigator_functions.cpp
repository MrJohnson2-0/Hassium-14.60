#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortOfferInspectionNavigator.FortOfferInspectionNavigator_C
// (None)

class UClass* UFortOfferInspectionNavigator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortOfferInspectionNavigator_C");

	return Clss;
}


// FortOfferInspectionNavigator_C FortOfferInspectionNavigator.Default__FortOfferInspectionNavigator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortOfferInspectionNavigator_C* UFortOfferInspectionNavigator_C::GetDefaultObj()
{
	static class UFortOfferInspectionNavigator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortOfferInspectionNavigator_C*>(UFortOfferInspectionNavigator_C::StaticClass()->DefaultObject);

	return Default;
}

}


