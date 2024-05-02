#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// Class LSALiveLink.LSALiveLinkDataHandler
class ULSALiveLinkDataHandler : public ULiveStreamAnimationDataHandler
{
public:
	uint8                                        Pad_3171[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULSALiveLinkDataHandler* GetDefaultObj();

	void StopTrackingLiveLinkSubject(const struct FLiveStreamAnimationHandleWrapper& RegisteredName);
	bool StartTrackingLiveLinkSubject(class FName LiveLinkSubject, const struct FLiveStreamAnimationHandleWrapper& RegisteredName, const struct FLSALiveLinkSourceOptions& Options, const struct FLiveStreamAnimationHandleWrapper& TranslationProfile);
};

// 0x60 (0x88 - 0x28)
// Class LSALiveLink.LSALiveLinkFrameTranslator
class ULSALiveLinkFrameTranslator : public ULiveLinkFrameTranslator
{
public:
	TMap<struct FLiveStreamAnimationHandleWrapper, struct FLSALiveLinkTranslationProfile> TranslationProfiles;                               // 0x28(0x50)(Edit, Config, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3174[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULSALiveLinkFrameTranslator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LSALiveLink.LSALiveLinkRole
class ULSALiveLinkRole : public ULiveLinkBasicRole
{
public:

	static class UClass* StaticClass();
	static class ULSALiveLinkRole* GetDefaultObj();

};

// 0x40 (0x78 - 0x38)
// Class LSALiveLink.LSALiveLinkSettings
class ULSALiveLinkSettings : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class ULSALiveLinkFrameTranslator> FrameTranslator;                                   // 0x38(0x28)(Edit, Transient, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3175[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULSALiveLinkSettings* GetDefaultObj();

};

// 0xD0 (0x180 - 0xB0)
// Class LSALiveLink.LiveLinkTestSkelMeshTrackerComponent
class ULiveLinkTestSkelMeshTrackerComponent : public UActorComponent
{
public:
	uint8                                        Pad_3176[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TranslationProfile;                                // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FComponentReference                   SkelMeshComp;                                      // 0xC0(0x28)(Edit, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class USkeletalMeshComponent> WeakSkelMeshComp;                                  // 0xE8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FBoneReference>                BonesToTrack;                                      // 0xF0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3177[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkTestSkelMeshTrackerComponent* GetDefaultObj();

	void StopTrackingSkelMesh();
	void StartTrackingSkelMesh(class FName InSubjectName);
};

}


