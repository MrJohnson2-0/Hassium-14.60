#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HeldObject_Drop.GA_HeldObject_Drop_C
// (None)

class UClass* UGA_HeldObject_Drop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HeldObject_Drop_C");

	return Clss;
}


// GA_HeldObject_Drop_C GA_HeldObject_Drop.Default__GA_HeldObject_Drop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HeldObject_Drop_C* UGA_HeldObject_Drop_C::GetDefaultObj()
{
	static class UGA_HeldObject_Drop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HeldObject_Drop_C*>(UGA_HeldObject_Drop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HeldObject_Drop.GA_HeldObject_Drop_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HeldObject_Drop_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HeldObject_Drop_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HeldObject_Drop.GA_HeldObject_Drop_C.ExecuteUbergraph_GA_HeldObject_Drop
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HeldObject_Drop_C::ExecuteUbergraph_GA_HeldObject_Drop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HeldObject_Drop_C", "ExecuteUbergraph_GA_HeldObject_Drop");

	Params::UGA_HeldObject_Drop_C_ExecuteUbergraph_GA_HeldObject_Drop_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


