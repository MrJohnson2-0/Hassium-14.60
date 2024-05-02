#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x570 - 0x570)
// Class SoundCueTemplates.SoundCueTemplate
class USoundCueTemplate : public USoundCue
{
public:

	static class UClass* StaticClass();
	static class USoundCueTemplate* GetDefaultObj();

};

// 0x0 (0x570 - 0x570)
// Class SoundCueTemplates.SoundCueContainer
class USoundCueContainer : public USoundCueTemplate
{
public:

	static class UClass* StaticClass();
	static class USoundCueContainer* GetDefaultObj();

};

// 0x0 (0x570 - 0x570)
// Class SoundCueTemplates.SoundCueDistanceCrossfade
class USoundCueDistanceCrossfade : public USoundCueTemplate
{
public:

	static class UClass* StaticClass();
	static class USoundCueDistanceCrossfade* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class SoundCueTemplates.SoundCueTemplateSettings
class USoundCueTemplateSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass();
	static class USoundCueTemplateSettings* GetDefaultObj();

};

}


