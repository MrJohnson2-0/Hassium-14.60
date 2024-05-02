#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortSoundCueTemplates.FortSoundCueTemplateBase
// (None)

class UClass* UFortSoundCueTemplateBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSoundCueTemplateBase");

	return Clss;
}


// FortSoundCueTemplateBase FortSoundCueTemplates.Default__FortSoundCueTemplateBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSoundCueTemplateBase* UFortSoundCueTemplateBase::GetDefaultObj()
{
	static class UFortSoundCueTemplateBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSoundCueTemplateBase*>(UFortSoundCueTemplateBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.EmoteBase
// (None)

class UClass* UEmoteBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteBase");

	return Clss;
}


// EmoteBase FortSoundCueTemplates.Default__EmoteBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmoteBase* UEmoteBase::GetDefaultObj()
{
	static class UEmoteBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteBase*>(UEmoteBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.EmoteFoley
// (None)

class UClass* UEmoteFoley::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteFoley");

	return Clss;
}


// EmoteFoley FortSoundCueTemplates.Default__EmoteFoley
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmoteFoley* UEmoteFoley::GetDefaultObj()
{
	static class UEmoteFoley* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteFoley*>(UEmoteFoley::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.EmoteMusic
// (None)

class UClass* UEmoteMusic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteMusic");

	return Clss;
}


// EmoteMusic FortSoundCueTemplates.Default__EmoteMusic
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmoteMusic* UEmoteMusic::GetDefaultObj()
{
	static class UEmoteMusic* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteMusic*>(UEmoteMusic::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.EmoteMusic3P
// (None)

class UClass* UEmoteMusic3P::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteMusic3P");

	return Clss;
}


// EmoteMusic3P FortSoundCueTemplates.Default__EmoteMusic3P
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmoteMusic3P* UEmoteMusic3P::GetDefaultObj()
{
	static class UEmoteMusic3P* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteMusic3P*>(UEmoteMusic3P::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.GliderOpenClose
// (None)

class UClass* UGliderOpenClose::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GliderOpenClose");

	return Clss;
}


// GliderOpenClose FortSoundCueTemplates.Default__GliderOpenClose
// (Public, ClassDefaultObject, ArchetypeObject)

class UGliderOpenClose* UGliderOpenClose::GetDefaultObj()
{
	static class UGliderOpenClose* Default = nullptr;

	if (!Default)
		Default = static_cast<UGliderOpenClose*>(UGliderOpenClose::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.GliderOpen
// (None)

class UClass* UGliderOpen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GliderOpen");

	return Clss;
}


// GliderOpen FortSoundCueTemplates.Default__GliderOpen
// (Public, ClassDefaultObject, ArchetypeObject)

class UGliderOpen* UGliderOpen::GetDefaultObj()
{
	static class UGliderOpen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGliderOpen*>(UGliderOpen::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.GliderClose
// (None)

class UClass* UGliderClose::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GliderClose");

	return Clss;
}


// GliderClose FortSoundCueTemplates.Default__GliderClose
// (Public, ClassDefaultObject, ArchetypeObject)

class UGliderClose* UGliderClose::GetDefaultObj()
{
	static class UGliderClose* Default = nullptr;

	if (!Default)
		Default = static_cast<UGliderClose*>(UGliderClose::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.GliderThrustLoop
// (None)

class UClass* UGliderThrustLoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GliderThrustLoop");

	return Clss;
}


// GliderThrustLoop FortSoundCueTemplates.Default__GliderThrustLoop
// (Public, ClassDefaultObject, ArchetypeObject)

class UGliderThrustLoop* UGliderThrustLoop::GetDefaultObj()
{
	static class UGliderThrustLoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UGliderThrustLoop*>(UGliderThrustLoop::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.GliderThrustStart
// (None)

class UClass* UGliderThrustStart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GliderThrustStart");

	return Clss;
}


// GliderThrustStart FortSoundCueTemplates.Default__GliderThrustStart
// (Public, ClassDefaultObject, ArchetypeObject)

class UGliderThrustStart* UGliderThrustStart::GetDefaultObj()
{
	static class UGliderThrustStart* Default = nullptr;

	if (!Default)
		Default = static_cast<UGliderThrustStart*>(UGliderThrustStart::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PickaxeImpactEnemy
// (None)

class UClass* UPickaxeImpactEnemy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickaxeImpactEnemy");

	return Clss;
}


// PickaxeImpactEnemy FortSoundCueTemplates.Default__PickaxeImpactEnemy
// (Public, ClassDefaultObject, ArchetypeObject)

class UPickaxeImpactEnemy* UPickaxeImpactEnemy::GetDefaultObj()
{
	static class UPickaxeImpactEnemy* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickaxeImpactEnemy*>(UPickaxeImpactEnemy::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PickaxeReady
// (None)

class UClass* UPickaxeReady::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickaxeReady");

	return Clss;
}


// PickaxeReady FortSoundCueTemplates.Default__PickaxeReady
// (Public, ClassDefaultObject, ArchetypeObject)

class UPickaxeReady* UPickaxeReady::GetDefaultObj()
{
	static class UPickaxeReady* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickaxeReady*>(UPickaxeReady::StaticClass()->DefaultObject);

	return Default;
}


// Class FortSoundCueTemplates.PickaxeSwing
// (None)

class UClass* UPickaxeSwing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickaxeSwing");

	return Clss;
}


// PickaxeSwing FortSoundCueTemplates.Default__PickaxeSwing
// (Public, ClassDefaultObject, ArchetypeObject)

class UPickaxeSwing* UPickaxeSwing::GetDefaultObj()
{
	static class UPickaxeSwing* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickaxeSwing*>(UPickaxeSwing::StaticClass()->DefaultObject);

	return Default;
}

}


