#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivatableMovieWidget_Monolithic_Native.ActivatableMovieWidget_Monolithic_Native_C
// (None)

class UClass* UActivatableMovieWidget_Monolithic_Native_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivatableMovieWidget_Monolithic_Native_C");

	return Clss;
}


// ActivatableMovieWidget_Monolithic_Native_C ActivatableMovieWidget_Monolithic_Native.Default__ActivatableMovieWidget_Monolithic_Native_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivatableMovieWidget_Monolithic_Native_C* UActivatableMovieWidget_Monolithic_Native_C::GetDefaultObj()
{
	static class UActivatableMovieWidget_Monolithic_Native_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivatableMovieWidget_Monolithic_Native_C*>(UActivatableMovieWidget_Monolithic_Native_C::StaticClass()->DefaultObject);

	return Default;
}

}


