#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3A0 - 0x388)
// Class SrirachaRanch.RadioContentSourceItemDefinition
class URadioContentSourceItemDefinition : public UFortAccountItemDefinition
{
public:
	class FString                                ResourceID;                                        // 0x388(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortStreamMediaSource*                MediaSource;                                       // 0x398(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URadioContentSourceItemDefinition* GetDefaultObj();

};

// 0x38 (0x168 - 0x130)
// Class SrirachaRanch.StreamingRadioAudioShapeComponent
class UStreamingRadioAudioShapeComponent : public UFortAudioShapeComponent
{
public:
	float                                        Radius;                                            // 0x130(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStreamingRadioPlayerComponent*        RadioPlayer;                                       // 0x138(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C5[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStreamingRadioAudioShapeComponent* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class SrirachaRanch.SrirachaRanchComponentTemplateWrapper
class USrirachaRanchComponentTemplateWrapper : public UDataAsset
{
public:
	class UMediaSoundComponent*                  MediaSoundPlayerTemplate;                          // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USrirachaRanchComponentTemplateWrapper* GetDefaultObj();

};

// 0x2D0 (0x380 - 0xB0)
// Class SrirachaRanch.StreamingRadioPlayerComponent
class UStreamingRadioPlayerComponent : public UFortPawnComponent
{
public:
	uint8                                        Pad_24FC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FSrirachaInputMappingData> InputMappingData;                                  // 0xC0(0x50)(Edit, EditFixedSize, DisableEditOnInstance, NoClear, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSourceLoading;                                   // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSourcePlayed;                                    // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSourceStopped;                                   // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSourceFailed;                                    // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRadioExplicitStop;                               // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        PercentAutostartRadio;                             // 0x160(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          DisabledVehicleList;                               // 0x168(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, float>                     ExteriorVolumeMultiplierMap;                       // 0x178(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, float>                     InteriorVolumeMultiplierMap;                       // 0x1C8(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	bool                                         bMinimalStateOnPlatform;                           // 0x218(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2500[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        DisabledStationList;                               // 0x220(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutostartOnEntry;                                 // 0x230(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisabledForCurrentPlayerState;                    // 0x231(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2502[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStreamingRadioSourceData             ReplicatedRadioSourceData;                         // 0x238(0x18)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStreamingRadioAudioShapeComponent*    AudioShape;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USrirachaRanchComponentTemplateWrapper* SoundCompTemplateSource;                           // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URadioContentSourceItemDefinition*     LastSource;                                        // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URadioContentSourceItemDefinition*> Sources;                                           // 0x270(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URadioContentSourceItemDefinition*     FallbackSource;                                    // 0x280(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FSrirachaPerClassSpecialSeats> SpecialSeatList;                                   // 0x288(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMediaPlayerCtrl*                  MediaController;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortStreamMediaSource*                LastMediaSource;                                   // 0x2E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortStreamMediaSource*                IncomingMediaSource;                               // 0x2F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERadioSource                      CurrentMode;                                       // 0x2F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2508[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaximumRetries;                                    // 0x2FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FadeoutWhenUnpoweredInMS;                          // 0x300(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FadeoutWhenOwnerBeingDestroyedInMS;                // 0x304(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxFadeoutTimeMS;                                  // 0x308(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DefaultPlayingIndex;                               // 0x30C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundMix*                             SoundMixInside;                                    // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundMix*                             SoundMixOutside;                                   // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2509[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ActivationRadius;                                  // 0x324(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ComponentToAttachTo;                               // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ComponentSocketAttachTo;                           // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               DelegateContextObject;                             // 0x338(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MediaStartTimeFromInit;                            // 0x340(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_250C[0x3C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStreamingRadioPlayerComponent* GetDefaultObj();

	void ToggleRadioActive();
	void StopRadioWithFadeout(int32 Milliseconds);
	void StopRadio();
	void StopIfNoDriver(TScriptInterface<class IFortVehicleInterface>& Vehicle);
	void StartRadio(int32 IdxToPlay, bool bFallbackOverride);
	void SoundMixUpdateWeaponState(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void SoundMixUpdateTargetingState(bool bNewIsTargeting);
	void SetInteriorVolume(TScriptInterface<class IFortVehicleInterface>& Vehicle);
	void SetExteriorVolume(TScriptInterface<class IFortVehicleInterface>& Vehicle);
	void PlayPrevIndex();
	void PlayNextIndex();
	void PlayDefaultIndex();
	void OnSuccessfulURL(const class FString& URL);
	void OnRep_RadioSourceData();
	void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking);
	void OnPawnExitVehicle(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnExitSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnEnterVehicle(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnEnterSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void OnOwningVehicleDied(class AFortAthenaVehicle* DeadVehicle, struct FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser);
	void OnOwnerUnpowered();
	void OnOwnerReFueled();
	void OnOwnerOutOfFuel();
	void OnOwnerExploded();
	void OnFailedURL(const class FString& URL);
	void NativeOnPawnExitVehicle(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnExitSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnEnterVehicle(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void NativeOnPawnEnterSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void MulticastClearRadioSourceOverride();
	void MediaReady(const class FString& String);
	void MediaPlayed();
	void MediaLoad();
	void MediaFinishedOrClosed();
	void MediaFailedToOpen(const class FString& String);
	void MediaExplicitClose(bool bReallyExplicit);
	bool IsPlayingLiveFeed();
	bool IsExternalSeat(int32 SeatIdx);
	class URadioContentSourceItemDefinition* GetOptionAt(int32 Idx);
	void AuthStopRadio();
	void AuthSetDisabledForCurrentPlayerState(bool bShouldDisableForCurrentPlayerState);
	void AuthSaveFadeOutTime(float FadeoutSeconds);
	void AuthSavedSource(class URadioContentSourceItemDefinition* Source);
	void AuthSaveAutoStart(bool bAutoStart);
	void AuthPlayIndex(int32 Index);
};

}


