#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SrirachaRanchValet.StreamingRadioPlayerComponent_Valet
// (None)

class UClass* UStreamingRadioPlayerComponent_Valet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamingRadioPlayerComponent_Valet");

	return Clss;
}


// StreamingRadioPlayerComponent_Valet SrirachaRanchValet.Default__StreamingRadioPlayerComponent_Valet
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamingRadioPlayerComponent_Valet* UStreamingRadioPlayerComponent_Valet::GetDefaultObj()
{
	static class UStreamingRadioPlayerComponent_Valet* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamingRadioPlayerComponent_Valet*>(UStreamingRadioPlayerComponent_Valet::StaticClass()->DefaultObject);

	return Default;
}


// Function SrirachaRanchValet.StreamingRadioPlayerComponent_Valet.ValetVehicleExploded
// (Final, Native, Protected)
// Parameters:
// class AFortDagwoodVehicle*         Veh                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent_Valet::ValetVehicleExploded(class AFortDagwoodVehicle* Veh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent_Valet", "ValetVehicleExploded");

	Params::UStreamingRadioPlayerComponent_Valet_ValetVehicleExploded_Params Parms{};

	Parms.Veh = Veh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


