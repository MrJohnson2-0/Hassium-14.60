#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemShopSelector.ItemShopSelector_C
// (None)

class UClass* UItemShopSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemShopSelector_C");

	return Clss;
}


// ItemShopSelector_C ItemShopSelector.Default__ItemShopSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemShopSelector_C* UItemShopSelector_C::GetDefaultObj()
{
	static class UItemShopSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemShopSelector_C*>(UItemShopSelector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemShopSelector.ItemShopSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemShopSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopSelector_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopSelector.ItemShopSelector_C.ExecuteUbergraph_ItemShopSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemShopSelector_C::ExecuteUbergraph_ItemShopSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopSelector_C", "ExecuteUbergraph_ItemShopSelector");

	Params::UItemShopSelector_C_ExecuteUbergraph_ItemShopSelector_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


