#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemPreviewViewport.ItemPreviewViewport_C
// (None)

class UClass* UItemPreviewViewport_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPreviewViewport_C");

	return Clss;
}


// ItemPreviewViewport_C ItemPreviewViewport.Default__ItemPreviewViewport_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemPreviewViewport_C* UItemPreviewViewport_C::GetDefaultObj()
{
	static class UItemPreviewViewport_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPreviewViewport_C*>(UItemPreviewViewport_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemPreviewViewport.ItemPreviewViewport_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemPreviewViewport_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewViewport_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPreviewViewport.ItemPreviewViewport_C.ExecuteUbergraph_ItemPreviewViewport
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewViewport_C::ExecuteUbergraph_ItemPreviewViewport(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPreviewViewport_C", "ExecuteUbergraph_ItemPreviewViewport");

	Params::UItemPreviewViewport_C_ExecuteUbergraph_ItemPreviewViewport_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


