#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ValetUI.FortAthenaVehicleDashboardWidget_Valet
// (None)

class UClass* UFortAthenaVehicleDashboardWidget_Valet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaVehicleDashboardWidget_Valet");

	return Clss;
}


// FortAthenaVehicleDashboardWidget_Valet ValetUI.Default__FortAthenaVehicleDashboardWidget_Valet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaVehicleDashboardWidget_Valet* UFortAthenaVehicleDashboardWidget_Valet::GetDefaultObj()
{
	static class UFortAthenaVehicleDashboardWidget_Valet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaVehicleDashboardWidget_Valet*>(UFortAthenaVehicleDashboardWidget_Valet::StaticClass()->DefaultObject);

	return Default;
}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.SetVehicleUsesRechargableBoost
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsesRechargeableBoost                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaVehicleDashboardWidget_Valet::SetVehicleUsesRechargableBoost(bool bUsesRechargeableBoost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaVehicleDashboardWidget_Valet", "SetVehicleUsesRechargableBoost");

	Params::UFortAthenaVehicleDashboardWidget_Valet_SetVehicleUsesRechargableBoost_Params Parms{};

	Parms.bUsesRechargeableBoost = bUsesRechargeableBoost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnWidgetVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewVisibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaVehicleDashboardWidget_Valet::OnWidgetVisibilityChanged(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaVehicleDashboardWidget_Valet", "OnWidgetVisibilityChanged");

	Params::UFortAthenaVehicleDashboardWidget_Valet_OnWidgetVisibilityChanged_Params Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnValetNameUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortAthenaVehicleDashboardWidget_Valet::OnValetNameUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaVehicleDashboardWidget_Valet", "OnValetNameUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnUpdateRechargeableBoostPercent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              BoostPercent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaVehicleDashboardWidget_Valet::OnUpdateRechargeableBoostPercent(float BoostPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaVehicleDashboardWidget_Valet", "OnUpdateRechargeableBoostPercent");

	Params::UFortAthenaVehicleDashboardWidget_Valet_OnUpdateRechargeableBoostPercent_Params Parms{};

	Parms.BoostPercent = BoostPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRPMChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NormalizedRPM                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaVehicleDashboardWidget_Valet::OnRPMChanged(float NormalizedRPM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaVehicleDashboardWidget_Valet", "OnRPMChanged");

	Params::UFortAthenaVehicleDashboardWidget_Valet_OnRPMChanged_Params Parms{};

	Parms.NormalizedRPM = NormalizedRPM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRechargableBoostFilled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortAthenaVehicleDashboardWidget_Valet::OnRechargableBoostFilled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaVehicleDashboardWidget_Valet", "OnRechargableBoostFilled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.GetDagwoodVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortDagwoodVehicle*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortDagwoodVehicle* UFortAthenaVehicleDashboardWidget_Valet::GetDagwoodVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaVehicleDashboardWidget_Valet", "GetDagwoodVehicle");

	Params::UFortAthenaVehicleDashboardWidget_Valet_GetDagwoodVehicle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ValetUI.FortMobileActionButtonBehavior_ValetBoost
// (None)

class UClass* UFortMobileActionButtonBehavior_ValetBoost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMobileActionButtonBehavior_ValetBoost");

	return Clss;
}


// FortMobileActionButtonBehavior_ValetBoost ValetUI.Default__FortMobileActionButtonBehavior_ValetBoost
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMobileActionButtonBehavior_ValetBoost* UFortMobileActionButtonBehavior_ValetBoost::GetDefaultObj()
{
	static class UFortMobileActionButtonBehavior_ValetBoost* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMobileActionButtonBehavior_ValetBoost*>(UFortMobileActionButtonBehavior_ValetBoost::StaticClass()->DefaultObject);

	return Default;
}

}


