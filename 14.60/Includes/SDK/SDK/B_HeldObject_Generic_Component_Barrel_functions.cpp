#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_HeldObject_Generic_Component_Barrel.B_HeldObject_Generic_Component_Barrel_C
// (Actor)

class UClass* AB_HeldObject_Generic_Component_Barrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_HeldObject_Generic_Component_Barrel_C");

	return Clss;
}


// B_HeldObject_Generic_Component_Barrel_C B_HeldObject_Generic_Component_Barrel.Default__B_HeldObject_Generic_Component_Barrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_HeldObject_Generic_Component_Barrel_C* AB_HeldObject_Generic_Component_Barrel_C::GetDefaultObj()
{
	static class AB_HeldObject_Generic_Component_Barrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_HeldObject_Generic_Component_Barrel_C*>(AB_HeldObject_Generic_Component_Barrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


