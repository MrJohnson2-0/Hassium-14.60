#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_HeldObject_Generic_Component_PropaneTank.B_HeldObject_Generic_Component_PropaneTank_C
// (Actor)

class UClass* AB_HeldObject_Generic_Component_PropaneTank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_HeldObject_Generic_Component_PropaneTank_C");

	return Clss;
}


// B_HeldObject_Generic_Component_PropaneTank_C B_HeldObject_Generic_Component_PropaneTank.Default__B_HeldObject_Generic_Component_PropaneTank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_HeldObject_Generic_Component_PropaneTank_C* AB_HeldObject_Generic_Component_PropaneTank_C::GetDefaultObj()
{
	static class AB_HeldObject_Generic_Component_PropaneTank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_HeldObject_Generic_Component_PropaneTank_C*>(AB_HeldObject_Generic_Component_PropaneTank_C::StaticClass()->DefaultObject);

	return Default;
}

}


