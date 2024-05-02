#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CreativeThumbnailStage_InGame.CreativeThumbnailStage_InGame_C
// (Actor)

class UClass* ACreativeThumbnailStage_InGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeThumbnailStage_InGame_C");

	return Clss;
}


// CreativeThumbnailStage_InGame_C CreativeThumbnailStage_InGame.Default__CreativeThumbnailStage_InGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACreativeThumbnailStage_InGame_C* ACreativeThumbnailStage_InGame_C::GetDefaultObj()
{
	static class ACreativeThumbnailStage_InGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACreativeThumbnailStage_InGame_C*>(ACreativeThumbnailStage_InGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


