#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_BirthdayGiftBox.GA_Athena_BirthdayGiftBox_C
// (None)

class UClass* UGA_Athena_BirthdayGiftBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_BirthdayGiftBox_C");

	return Clss;
}


// GA_Athena_BirthdayGiftBox_C GA_Athena_BirthdayGiftBox.Default__GA_Athena_BirthdayGiftBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_BirthdayGiftBox_C* UGA_Athena_BirthdayGiftBox_C::GetDefaultObj()
{
	static class UGA_Athena_BirthdayGiftBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_BirthdayGiftBox_C*>(UGA_Athena_BirthdayGiftBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


