#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_Wasabi_SpinSlash_Pull.GE_HighTower_Wasabi_SpinSlash_Pull_C
// (None)

class UClass* UGE_HighTower_Wasabi_SpinSlash_Pull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_Wasabi_SpinSlash_Pull_C");

	return Clss;
}


// GE_HighTower_Wasabi_SpinSlash_Pull_C GE_HighTower_Wasabi_SpinSlash_Pull.Default__GE_HighTower_Wasabi_SpinSlash_Pull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_Wasabi_SpinSlash_Pull_C* UGE_HighTower_Wasabi_SpinSlash_Pull_C::GetDefaultObj()
{
	static class UGE_HighTower_Wasabi_SpinSlash_Pull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_Wasabi_SpinSlash_Pull_C*>(UGE_HighTower_Wasabi_SpinSlash_Pull_C::StaticClass()->DefaultObject);

	return Default;
}

}


