#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DataAssetDirectory.DataAssetDirectoryManager
// (None)

class UClass* UDataAssetDirectoryManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataAssetDirectoryManager");

	return Clss;
}


// DataAssetDirectoryManager DataAssetDirectory.Default__DataAssetDirectoryManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataAssetDirectoryManager* UDataAssetDirectoryManager::GetDefaultObj()
{
	static class UDataAssetDirectoryManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataAssetDirectoryManager*>(UDataAssetDirectoryManager::StaticClass()->DefaultObject);

	return Default;
}

}


