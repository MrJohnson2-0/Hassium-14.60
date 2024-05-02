#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EventModeRuntime.FortGameFrameworkComponent_EventMode
// (None)

class UClass* UFortGameFrameworkComponent_EventMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameFrameworkComponent_EventMode");

	return Clss;
}


// FortGameFrameworkComponent_EventMode EventModeRuntime.Default__FortGameFrameworkComponent_EventMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameFrameworkComponent_EventMode* UFortGameFrameworkComponent_EventMode::GetDefaultObj()
{
	static class UFortGameFrameworkComponent_EventMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameFrameworkComponent_EventMode*>(UFortGameFrameworkComponent_EventMode::StaticClass()->DefaultObject);

	return Default;
}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed
// (Final, Native, Private)
// Parameters:
// class APawn*                       PossessedPawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameFrameworkComponent_EventMode::OnPlayerPawnPossessed(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "OnPlayerPawnPossessed");

	Params::UFortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle
// (Final, Native, Private)
// Parameters:

void UFortGameFrameworkComponent_EventMode::OnExitVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "OnExitVehicle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle
// (Final, Native, Private)
// Parameters:

void UFortGameFrameworkComponent_EventMode::OnEnterVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "OnEnterVehicle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameFrameworkComponent_EventMode::GetIsFocusing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "GetIsFocusing");

	Params::UFortGameFrameworkComponent_EventMode_GetIsFocusing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameFrameworkComponent_EventMode::GetIsFocusAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "GetIsFocusAvailable");

	Params::UFortGameFrameworkComponent_EventMode_GetIsFocusAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameFrameworkComponent_EventMode::GetIsEventModeActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameFrameworkComponent_EventMode", "GetIsEventModeActive");

	Params::UFortGameFrameworkComponent_EventMode_GetIsEventModeActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EventModeRuntime.FortWeapon_EventMode
// (Actor)

class UClass* AFortWeapon_EventMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortWeapon_EventMode");

	return Clss;
}


// FortWeapon_EventMode EventModeRuntime.Default__FortWeapon_EventMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AFortWeapon_EventMode* AFortWeapon_EventMode::GetDefaultObj()
{
	static class AFortWeapon_EventMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortWeapon_EventMode*>(AFortWeapon_EventMode::StaticClass()->DefaultObject);

	return Default;
}

}


