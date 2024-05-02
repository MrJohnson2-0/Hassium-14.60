#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StoreSelection.FortStoreSelectionData
// (None)

class UClass* UFortStoreSelectionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSelectionData");

	return Clss;
}


// FortStoreSelectionData StoreSelection.Default__FortStoreSelectionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSelectionData* UFortStoreSelectionData::GetDefaultObj()
{
	static class UFortStoreSelectionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSelectionData*>(UFortStoreSelectionData::StaticClass()->DefaultObject);

	return Default;
}


// Class StoreSelection.FortStoreSelectionOptionEntry
// (None)

class UClass* UFortStoreSelectionOptionEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSelectionOptionEntry");

	return Clss;
}


// FortStoreSelectionOptionEntry StoreSelection.Default__FortStoreSelectionOptionEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSelectionOptionEntry* UFortStoreSelectionOptionEntry::GetDefaultObj()
{
	static class UFortStoreSelectionOptionEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSelectionOptionEntry*>(UFortStoreSelectionOptionEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class StoreSelection.FortStoreSelectionScreen
// (None)

class UClass* UFortStoreSelectionScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStoreSelectionScreen");

	return Clss;
}


// FortStoreSelectionScreen StoreSelection.Default__FortStoreSelectionScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStoreSelectionScreen* UFortStoreSelectionScreen::GetDefaultObj()
{
	static class UFortStoreSelectionScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStoreSelectionScreen*>(UFortStoreSelectionScreen::StaticClass()->DefaultObject);

	return Default;
}

}


