#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PepperMint_Heal.GE_PepperMint_Heal_C
// (None)

class UClass* UGE_PepperMint_Heal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PepperMint_Heal_C");

	return Clss;
}


// GE_PepperMint_Heal_C GE_PepperMint_Heal.Default__GE_PepperMint_Heal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PepperMint_Heal_C* UGE_PepperMint_Heal_C::GetDefaultObj()
{
	static class UGE_PepperMint_Heal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PepperMint_Heal_C*>(UGE_PepperMint_Heal_C::StaticClass()->DefaultObject);

	return Default;
}

}


