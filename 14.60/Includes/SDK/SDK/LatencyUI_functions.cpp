#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LatencyUI.LatencyGraph
// (None)

class UClass* ULatencyGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LatencyGraph");

	return Clss;
}


// LatencyGraph LatencyUI.Default__LatencyGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class ULatencyGraph* ULatencyGraph::GetDefaultObj()
{
	static class ULatencyGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<ULatencyGraph*>(ULatencyGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class LatencyUI.LatencyWidget
// (None)

class UClass* ULatencyWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LatencyWidget");

	return Clss;
}


// LatencyWidget LatencyUI.Default__LatencyWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class ULatencyWidget* ULatencyWidget::GetDefaultObj()
{
	static class ULatencyWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<ULatencyWidget*>(ULatencyWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function LatencyUI.LatencyWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void ULatencyWidget::StopTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LatencyWidget", "StopTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LatencyUI.LatencyWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void ULatencyWidget::StartTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LatencyWidget", "StartTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


