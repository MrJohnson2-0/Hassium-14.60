#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Phoebe_AIService_Loot.BP_Phoebe_AIService_Loot_C
// (None)

class UClass* UBP_Phoebe_AIService_Loot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Phoebe_AIService_Loot_C");

	return Clss;
}


// BP_Phoebe_AIService_Loot_C BP_Phoebe_AIService_Loot.Default__BP_Phoebe_AIService_Loot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Phoebe_AIService_Loot_C* UBP_Phoebe_AIService_Loot_C::GetDefaultObj()
{
	static class UBP_Phoebe_AIService_Loot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Phoebe_AIService_Loot_C*>(UBP_Phoebe_AIService_Loot_C::StaticClass()->DefaultObject);

	return Default;
}

}


