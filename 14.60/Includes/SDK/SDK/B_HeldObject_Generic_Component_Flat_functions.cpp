#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_HeldObject_Generic_Component_Flat.B_HeldObject_Generic_Component_Flat_C
// (Actor)

class UClass* AB_HeldObject_Generic_Component_Flat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_HeldObject_Generic_Component_Flat_C");

	return Clss;
}


// B_HeldObject_Generic_Component_Flat_C B_HeldObject_Generic_Component_Flat.Default__B_HeldObject_Generic_Component_Flat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_HeldObject_Generic_Component_Flat_C* AB_HeldObject_Generic_Component_Flat_C::GetDefaultObj()
{
	static class AB_HeldObject_Generic_Component_Flat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_HeldObject_Generic_Component_Flat_C*>(AB_HeldObject_Generic_Component_Flat_C::StaticClass()->DefaultObject);

	return Default;
}

}


