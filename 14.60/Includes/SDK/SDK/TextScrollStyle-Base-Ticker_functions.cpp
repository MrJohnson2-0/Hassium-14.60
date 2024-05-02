#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextScrollStyle-Base-Ticker.TextScrollStyle-Base-Ticker_C
// (None)

class UClass* UTextScrollStyleMinusBaseMinusTicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextScrollStyle-Base-Ticker_C");

	return Clss;
}


// TextScrollStyle-Base-Ticker_C TextScrollStyle-Base-Ticker.Default__TextScrollStyle-Base-Ticker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextScrollStyleMinusBaseMinusTicker_C* UTextScrollStyleMinusBaseMinusTicker_C::GetDefaultObj()
{
	static class UTextScrollStyleMinusBaseMinusTicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextScrollStyleMinusBaseMinusTicker_C*>(UTextScrollStyleMinusBaseMinusTicker_C::StaticClass()->DefaultObject);

	return Default;
}

}


