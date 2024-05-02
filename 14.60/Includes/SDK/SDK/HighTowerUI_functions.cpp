#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HighTowerUI.HighTowerAbilityContainerWidget
// (None)

class UClass* UHighTowerAbilityContainerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighTowerAbilityContainerWidget");

	return Clss;
}


// HighTowerAbilityContainerWidget HighTowerUI.Default__HighTowerAbilityContainerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UHighTowerAbilityContainerWidget* UHighTowerAbilityContainerWidget::GetDefaultObj()
{
	static class UHighTowerAbilityContainerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighTowerAbilityContainerWidget*>(UHighTowerAbilityContainerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function HighTowerUI.HighTowerAbilityContainerWidget.ShowAbilityIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHighTowerAbilityContainerWidget::ShowAbilityIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTowerAbilityContainerWidget", "ShowAbilityIntro");



	UObject::ProcessEvent(Func, nullptr);

}

}


