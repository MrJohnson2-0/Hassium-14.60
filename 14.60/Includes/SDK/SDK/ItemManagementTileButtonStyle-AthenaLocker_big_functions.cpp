#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemManagementTileButtonStyle-AthenaLocker_big.ItemManagementTileButtonStyle-AthenaLocker_big_C
// (None)

class UClass* UItemManagementTileButtonStyleMinusAthenaLocker_big_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemManagementTileButtonStyle-AthenaLocker_big_C");

	return Clss;
}


// ItemManagementTileButtonStyle-AthenaLocker_big_C ItemManagementTileButtonStyle-AthenaLocker_big.Default__ItemManagementTileButtonStyle-AthenaLocker_big_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemManagementTileButtonStyleMinusAthenaLocker_big_C* UItemManagementTileButtonStyleMinusAthenaLocker_big_C::GetDefaultObj()
{
	static class UItemManagementTileButtonStyleMinusAthenaLocker_big_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemManagementTileButtonStyleMinusAthenaLocker_big_C*>(UItemManagementTileButtonStyleMinusAthenaLocker_big_C::StaticClass()->DefaultObject);

	return Default;
}

}


