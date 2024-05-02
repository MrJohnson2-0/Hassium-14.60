#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FireExtinguisherInventory.GE_FireExtinguisherInventory_C
// (None)

class UClass* UGE_FireExtinguisherInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FireExtinguisherInventory_C");

	return Clss;
}


// GE_FireExtinguisherInventory_C GE_FireExtinguisherInventory.Default__GE_FireExtinguisherInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FireExtinguisherInventory_C* UGE_FireExtinguisherInventory_C::GetDefaultObj()
{
	static class UGE_FireExtinguisherInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FireExtinguisherInventory_C*>(UGE_FireExtinguisherInventory_C::StaticClass()->DefaultObject);

	return Default;
}

}


