#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x58 - 0x30)
// Class AmbientAudio.AmbientAudioDataAsset
class UAmbientAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FAmbientAudioLoop>             LoopingSounds;                                     // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAmbientAudioOneShot>          OneShotSounds;                                     // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TagCrossfadeTime;                                  // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAmbientAudioDataAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AmbientAudio.AmbientAudioStatics
class UAmbientAudioStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAmbientAudioStatics* GetDefaultObj();

	void RemoveAmbientGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& GameplayTag);
	void RemoveAmbientEntry(class UObject* WorldContextObject, class FName AmbientName);
	void PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location);
	class UAudioComponent* CreateAudioComponent(class UObject* WorldContextObject, class USoundBase* Sound);
	void AddAmbientGameplayTag(class UObject* WorldContextObject, const struct FGameplayTag& GameplayTag);
	void AddAmbientEntry(class UObject* WorldContextObject, class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime);
};

// 0x1F0 (0x220 - 0x30)
// Class AmbientAudio.AmbientAudioSubsystem
class UAmbientAudioSubsystem : public UWorldSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnTagChanged;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEntryChanged;                                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class AAmbientVolume*>                GlobalVolumes;                                     // 0x50(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_23[0x1C0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAmbientAudioSubsystem* GetDefaultObj();

	void RemoveGameplayTag(const struct FGameplayTag& GameplayTag);
	void RemoveAmbientEntry(class FName AmbientName);
	void AddGameplayTag(const struct FGameplayTag& GameplayTag);
	void AddAmbientEntry(class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime);
};

// 0x18 (0x270 - 0x258)
// Class AmbientAudio.AmbientVolume
class AAmbientVolume : public AVolume
{
public:
	class UAmbientAudioDataAsset*                AmbientAsset;                                      // 0x258(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Priority;                                          // 0x260(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CrossfadeTime;                                     // 0x264(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x268(0x1)(Edit, BlueprintVisible, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bGlobal : 1;                                       // Mask: 0x2, PropSize: 0x10x268(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2A[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAmbientVolume* GetDefaultObj();

	void SetPriority(int32 NewPriority);
	void SetEnabled(bool bNewEnabled);
	void SetCrossfadeTime(float NewCrossfadeTime);
	void SetAmbientAsset(class UAmbientAudioDataAsset* NewAmbientAsset);
	void OnRep_bEnabled();
};

}


