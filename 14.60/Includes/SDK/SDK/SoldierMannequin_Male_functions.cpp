#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoldierMannequin_Male.SoldierMannequin_Male_C
// (Actor)

class UClass* ASoldierMannequin_Male_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoldierMannequin_Male_C");

	return Clss;
}


// SoldierMannequin_Male_C SoldierMannequin_Male.Default__SoldierMannequin_Male_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASoldierMannequin_Male_C* ASoldierMannequin_Male_C::GetDefaultObj()
{
	static class ASoldierMannequin_Male_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASoldierMannequin_Male_C*>(ASoldierMannequin_Male_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SoldierMannequin_Male.SoldierMannequin_Male_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASoldierMannequin_Male_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoldierMannequin_Male_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoldierMannequin_Male.SoldierMannequin_Male_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ASoldierMannequin_Male_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoldierMannequin_Male_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoldierMannequin_Male.SoldierMannequin_Male_C.ExecuteUbergraph_SoldierMannequin_Male
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoldierMannequin_Male_C::ExecuteUbergraph_SoldierMannequin_Male(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoldierMannequin_Male_C", "ExecuteUbergraph_SoldierMannequin_Male");

	Params::ASoldierMannequin_Male_C_ExecuteUbergraph_SoldierMannequin_Male_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


