#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_NPC_Gameplay_Status_RecentlyDamaged_10sec.GE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C
// (None)

class UClass* UGE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C");

	return Clss;
}


// GE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C GE_NPC_Gameplay_Status_RecentlyDamaged_10sec.Default__GE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C* UGE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C::GetDefaultObj()
{
	static class UGE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C*>(UGE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C::StaticClass()->DefaultObject);

	return Default;
}

}


