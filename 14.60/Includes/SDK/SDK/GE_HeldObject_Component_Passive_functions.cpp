#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HeldObject_Component_Passive.GE_HeldObject_Component_Passive_C
// (None)

class UClass* UGE_HeldObject_Component_Passive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HeldObject_Component_Passive_C");

	return Clss;
}


// GE_HeldObject_Component_Passive_C GE_HeldObject_Component_Passive.Default__GE_HeldObject_Component_Passive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HeldObject_Component_Passive_C* UGE_HeldObject_Component_Passive_C::GetDefaultObj()
{
	static class UGE_HeldObject_Component_Passive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HeldObject_Component_Passive_C*>(UGE_HeldObject_Component_Passive_C::StaticClass()->DefaultObject);

	return Default;
}

}


