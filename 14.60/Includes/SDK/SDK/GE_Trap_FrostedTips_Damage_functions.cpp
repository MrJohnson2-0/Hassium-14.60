#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Trap_FrostedTips_Damage.GE_Trap_FrostedTips_Damage_C
// (None)

class UClass* UGE_Trap_FrostedTips_Damage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Trap_FrostedTips_Damage_C");

	return Clss;
}


// GE_Trap_FrostedTips_Damage_C GE_Trap_FrostedTips_Damage.Default__GE_Trap_FrostedTips_Damage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Trap_FrostedTips_Damage_C* UGE_Trap_FrostedTips_Damage_C::GetDefaultObj()
{
	static class UGE_Trap_FrostedTips_Damage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Trap_FrostedTips_Damage_C*>(UGE_Trap_FrostedTips_Damage_C::StaticClass()->DefaultObject);

	return Default;
}

}


