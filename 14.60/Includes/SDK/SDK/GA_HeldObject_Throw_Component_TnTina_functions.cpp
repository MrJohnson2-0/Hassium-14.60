#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C
// (None)

class UClass* UGA_HeldObject_Throw_Component_TnTina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HeldObject_Throw_Component_TnTina_C");

	return Clss;
}


// GA_HeldObject_Throw_Component_TnTina_C GA_HeldObject_Throw_Component_TnTina.Default__GA_HeldObject_Throw_Component_TnTina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HeldObject_Throw_Component_TnTina_C* UGA_HeldObject_Throw_Component_TnTina_C::GetDefaultObj()
{
	static class UGA_HeldObject_Throw_Component_TnTina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HeldObject_Throw_Component_TnTina_C*>(UGA_HeldObject_Throw_Component_TnTina_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HeldObject_Throw_Component_TnTina_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HeldObject_Throw_Component_TnTina_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C.ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HeldObject_Throw_Component_TnTina_C::ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HeldObject_Throw_Component_TnTina_C", "ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina");

	Params::UGA_HeldObject_Throw_Component_TnTina_C_ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


