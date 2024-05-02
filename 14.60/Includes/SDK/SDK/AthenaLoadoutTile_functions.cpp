#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaLoadoutTile.AthenaLoadoutTile_C
// (None)

class UClass* UAthenaLoadoutTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaLoadoutTile_C");

	return Clss;
}


// AthenaLoadoutTile_C AthenaLoadoutTile.Default__AthenaLoadoutTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaLoadoutTile_C* UAthenaLoadoutTile_C::GetDefaultObj()
{
	static class UAthenaLoadoutTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaLoadoutTile_C*>(UAthenaLoadoutTile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaLoadoutTile.AthenaLoadoutTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLoadoutTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLoadoutTile_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLoadoutTile.AthenaLoadoutTile_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLoadoutTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLoadoutTile_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLoadoutTile.AthenaLoadoutTile_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLoadoutTile_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLoadoutTile_C", "BP_OnItemSelectionChanged");

	Params::UAthenaLoadoutTile_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLoadoutTile.AthenaLoadoutTile_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLoadoutTile_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLoadoutTile_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaLoadoutTile.AthenaLoadoutTile_C.ExecuteUbergraph_AthenaLoadoutTile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticLoadoutCard_C*      K2Node_DynamicCast_AsCosmetic_Loadout_Card                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticLoadoutCard_C*      K2Node_DynamicCast_AsCosmetic_Loadout_Card_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticLoadoutCard_C*      K2Node_DynamicCast_AsCosmetic_Loadout_Card_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticLoadoutCard_C*      K2Node_DynamicCast_AsCosmetic_Loadout_Card_3                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCosmeticLoadoutCard_C*      K2Node_DynamicCast_AsCosmetic_Loadout_Card_4                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLoadoutTile_C::ExecuteUbergraph_AthenaLoadoutTile(int32 EntryPoint, bool K2Node_Event_bIsSelected, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card, bool K2Node_DynamicCast_bSuccess, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_1, bool K2Node_DynamicCast_bSuccess_1, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_2, bool K2Node_DynamicCast_bSuccess_2, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_3, bool K2Node_DynamicCast_bSuccess_3, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_4, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaLoadoutTile_C", "ExecuteUbergraph_AthenaLoadoutTile");

	Params::UAthenaLoadoutTile_C_ExecuteUbergraph_AthenaLoadoutTile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_DynamicCast_AsCosmetic_Loadout_Card = K2Node_DynamicCast_AsCosmetic_Loadout_Card;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCosmetic_Loadout_Card_1 = K2Node_DynamicCast_AsCosmetic_Loadout_Card_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsCosmetic_Loadout_Card_2 = K2Node_DynamicCast_AsCosmetic_Loadout_Card_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsCosmetic_Loadout_Card_3 = K2Node_DynamicCast_AsCosmetic_Loadout_Card_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsCosmetic_Loadout_Card_4 = K2Node_DynamicCast_AsCosmetic_Loadout_Card_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


