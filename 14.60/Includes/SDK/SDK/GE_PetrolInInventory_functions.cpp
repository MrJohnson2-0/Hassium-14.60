#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PetrolInInventory.GE_PetrolInInventory_C
// (None)

class UClass* UGE_PetrolInInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PetrolInInventory_C");

	return Clss;
}


// GE_PetrolInInventory_C GE_PetrolInInventory.Default__GE_PetrolInInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PetrolInInventory_C* UGE_PetrolInInventory_C::GetDefaultObj()
{
	static class UGE_PetrolInInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PetrolInInventory_C*>(UGE_PetrolInInventory_C::StaticClass()->DefaultObject);

	return Default;
}

}


