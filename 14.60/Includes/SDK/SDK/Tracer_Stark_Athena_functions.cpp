#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tracer_Stark_Athena.Tracer_Stark_Athena_C
// (Actor)

class UClass* ATracer_Stark_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tracer_Stark_Athena_C");

	return Clss;
}


// Tracer_Stark_Athena_C Tracer_Stark_Athena.Default__Tracer_Stark_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATracer_Stark_Athena_C* ATracer_Stark_Athena_C::GetDefaultObj()
{
	static class ATracer_Stark_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATracer_Stark_Athena_C*>(ATracer_Stark_Athena_C::StaticClass()->DefaultObject);

	return Default;
}

}


