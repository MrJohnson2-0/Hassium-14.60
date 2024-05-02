#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassPurchaseScreenSelector.BattlePassPurchaseScreenSelector_C
// (None)

class UClass* UBattlePassPurchaseScreenSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassPurchaseScreenSelector_C");

	return Clss;
}


// BattlePassPurchaseScreenSelector_C BattlePassPurchaseScreenSelector.Default__BattlePassPurchaseScreenSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassPurchaseScreenSelector_C* UBattlePassPurchaseScreenSelector_C::GetDefaultObj()
{
	static class UBattlePassPurchaseScreenSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassPurchaseScreenSelector_C*>(UBattlePassPurchaseScreenSelector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassPurchaseScreenSelector.BattlePassPurchaseScreenSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseScreenSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreenSelector_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPurchaseScreenSelector.BattlePassPurchaseScreenSelector_C.ExecuteUbergraph_BattlePassPurchaseScreenSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPurchaseScreenSelector_C::ExecuteUbergraph_BattlePassPurchaseScreenSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseScreenSelector_C", "ExecuteUbergraph_BattlePassPurchaseScreenSelector");

	Params::UBattlePassPurchaseScreenSelector_C_ExecuteUbergraph_BattlePassPurchaseScreenSelector_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


