#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_Bucket_Nice_SecondaryAimed.GA_Athena_Bucket_Nice_SecondaryAimed_C
// (None)

class UClass* UGA_Athena_Bucket_Nice_SecondaryAimed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_Bucket_Nice_SecondaryAimed_C");

	return Clss;
}


// GA_Athena_Bucket_Nice_SecondaryAimed_C GA_Athena_Bucket_Nice_SecondaryAimed.Default__GA_Athena_Bucket_Nice_SecondaryAimed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_Bucket_Nice_SecondaryAimed_C* UGA_Athena_Bucket_Nice_SecondaryAimed_C::GetDefaultObj()
{
	static class UGA_Athena_Bucket_Nice_SecondaryAimed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_Bucket_Nice_SecondaryAimed_C*>(UGA_Athena_Bucket_Nice_SecondaryAimed_C::StaticClass()->DefaultObject);

	return Default;
}

}


