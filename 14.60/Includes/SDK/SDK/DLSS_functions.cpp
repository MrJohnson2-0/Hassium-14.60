#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DLSS.DLSSUserPreferences
// (None)

class UClass* UDLSSUserPreferences::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLSSUserPreferences");

	return Clss;
}


// DLSSUserPreferences DLSS.Default__DLSSUserPreferences
// (Public, ClassDefaultObject, ArchetypeObject)

class UDLSSUserPreferences* UDLSSUserPreferences::GetDefaultObj()
{
	static class UDLSSUserPreferences* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLSSUserPreferences*>(UDLSSUserPreferences::StaticClass()->DefaultObject);

	return Default;
}


// Class DLSS.DLSSSettings
// (None)

class UClass* UDLSSSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLSSSettings");

	return Clss;
}


// DLSSSettings DLSS.Default__DLSSSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDLSSSettings* UDLSSSettings::GetDefaultObj()
{
	static class UDLSSSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLSSSettings*>(UDLSSSettings::StaticClass()->DefaultObject);

	return Default;
}

}


