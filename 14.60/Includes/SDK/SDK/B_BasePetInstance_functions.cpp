#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_BasePetInstance.B_BasePetInstance_C
// (Actor)

class UClass* AB_BasePetInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_BasePetInstance_C");

	return Clss;
}


// B_BasePetInstance_C B_BasePetInstance.Default__B_BasePetInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_BasePetInstance_C* AB_BasePetInstance_C::GetDefaultObj()
{
	static class AB_BasePetInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_BasePetInstance_C*>(AB_BasePetInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_BasePetInstance.B_BasePetInstance_C.PetMaterialsOverride
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_BasePetInstance_C::PetMaterialsOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BasePetInstance_C", "PetMaterialsOverride");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BasePetInstance.B_BasePetInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_BasePetInstance_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BasePetInstance_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BasePetInstance.B_BasePetInstance_C.ExecuteUbergraph_B_BasePetInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             CallFunc_GetFortPlayerPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInFrontEndHologram_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BasePetInstance_C::ExecuteUbergraph_B_BasePetInstance(int32 EntryPoint, bool CallFunc_IsValidClass_ReturnValue, class AFortPlayerPawn* CallFunc_GetFortPlayerPawn_ReturnValue, bool CallFunc_IsInFrontEndHologram_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BasePetInstance_C", "ExecuteUbergraph_B_BasePetInstance");

	Params::AB_BasePetInstance_C_ExecuteUbergraph_B_BasePetInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetFortPlayerPawn_ReturnValue = CallFunc_GetFortPlayerPawn_ReturnValue;
	Parms.CallFunc_IsInFrontEndHologram_ReturnValue = CallFunc_IsInFrontEndHologram_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


