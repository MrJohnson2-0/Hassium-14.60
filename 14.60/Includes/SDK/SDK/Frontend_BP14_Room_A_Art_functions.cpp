#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_BP14_Room_A_Art.Frontend_BP14_Room_A_Art_C
// (Actor)

class UClass* AFrontend_BP14_Room_A_Art_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_BP14_Room_A_Art_C");

	return Clss;
}


// Frontend_BP14_Room_A_Art_C Frontend_BP14_Room_A_Art.Default__Frontend_BP14_Room_A_Art_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_BP14_Room_A_Art_C* AFrontend_BP14_Room_A_Art_C::GetDefaultObj()
{
	static class AFrontend_BP14_Room_A_Art_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_BP14_Room_A_Art_C*>(AFrontend_BP14_Room_A_Art_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Frontend_BP14_Room_A_Art.Frontend_BP14_Room_A_Art_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFrontend_BP14_Room_A_Art_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BP14_Room_A_Art_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Frontend_BP14_Room_A_Art.Frontend_BP14_Room_A_Art_C.ExecuteUbergraph_Frontend_BP14_Room_A_Art
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_BP14_Room_A_Art_C::ExecuteUbergraph_Frontend_BP14_Room_A_Art(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Frontend_BP14_Room_A_Art_C", "ExecuteUbergraph_Frontend_BP14_Room_A_Art");

	Params::AFrontend_BP14_Room_A_Art_C_ExecuteUbergraph_Frontend_BP14_Room_A_Art_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


