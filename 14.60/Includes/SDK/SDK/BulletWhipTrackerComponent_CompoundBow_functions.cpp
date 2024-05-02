#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhipTrackerComponent_CompoundBow.BulletWhipTrackerComponent_CompoundBow_C
// (None)

class UClass* UBulletWhipTrackerComponent_CompoundBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhipTrackerComponent_CompoundBow_C");

	return Clss;
}


// BulletWhipTrackerComponent_CompoundBow_C BulletWhipTrackerComponent_CompoundBow.Default__BulletWhipTrackerComponent_CompoundBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhipTrackerComponent_CompoundBow_C* UBulletWhipTrackerComponent_CompoundBow_C::GetDefaultObj()
{
	static class UBulletWhipTrackerComponent_CompoundBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhipTrackerComponent_CompoundBow_C*>(UBulletWhipTrackerComponent_CompoundBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


