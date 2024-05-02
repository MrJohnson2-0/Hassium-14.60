#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xD0 - 0x30)
// Class FoleySound.FoleySoundSubsystem
class UFoleySoundSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_34B3[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFoleySoundSubsystem* GetDefaultObj();

	void RemoveLibrary(class AActor* Actor, TSubclassOf<class UFoleySoundLibrary> Library);
	void AddLibrary(class AActor* Actor, TSubclassOf<class UFoleySoundLibrary> Library);
};

// 0x88 (0xB0 - 0x28)
// Class FoleySound.FoleySoundLibrary
class UFoleySoundLibrary : public UObject
{
public:
	TMap<struct FGameplayTag, TSoftObjectPtr<class USoundBase>> Sounds;                                            // 0x28(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class USoundBase*>                    LoadedSoundObjects;                                // 0x78(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_34B4[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFoleySoundLibrary* GetDefaultObj();

};

}


