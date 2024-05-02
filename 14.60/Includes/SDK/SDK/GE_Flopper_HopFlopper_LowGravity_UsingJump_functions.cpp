#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Flopper_HopFlopper_LowGravity_UsingJump.GE_Flopper_HopFlopper_LowGravity_UsingJump_C
// (None)

class UClass* UGE_Flopper_HopFlopper_LowGravity_UsingJump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Flopper_HopFlopper_LowGravity_UsingJump_C");

	return Clss;
}


// GE_Flopper_HopFlopper_LowGravity_UsingJump_C GE_Flopper_HopFlopper_LowGravity_UsingJump.Default__GE_Flopper_HopFlopper_LowGravity_UsingJump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Flopper_HopFlopper_LowGravity_UsingJump_C* UGE_Flopper_HopFlopper_LowGravity_UsingJump_C::GetDefaultObj()
{
	static class UGE_Flopper_HopFlopper_LowGravity_UsingJump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Flopper_HopFlopper_LowGravity_UsingJump_C*>(UGE_Flopper_HopFlopper_LowGravity_UsingJump_C::StaticClass()->DefaultObject);

	return Default;
}

}


