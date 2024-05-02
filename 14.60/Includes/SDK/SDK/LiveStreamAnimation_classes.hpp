#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x80 - 0x70)
// Class LiveStreamAnimation.LiveStreamAnimationChannel
class ULiveStreamAnimationChannel : public UChannel
{
public:
	uint8                                        Pad_314B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveStreamAnimationChannel* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class LiveStreamAnimation.LiveStreamAnimationDataHandler
class ULiveStreamAnimationDataHandler : public UObject
{
public:
	class ULiveStreamAnimationSubsystem*         OwningSubsystem;                                   // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_314C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveStreamAnimationDataHandler* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class LiveStreamAnimation.LiveStreamAnimationSettings
class ULiveStreamAnimationSettings : public UDeveloperSettings
{
public:
	TArray<class FName>                          HandleNames;                                       // 0x38(0x10)(Edit, ZeroConstructor, Transient, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSoftClassPath>                ConfiguredDataHandlers;                            // 0x48(0x10)(Edit, ZeroConstructor, Transient, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_314D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveStreamAnimationSettings* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class LiveStreamAnimation.LiveStreamAnimationSubsystem
class ULiveStreamAnimationSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_3153[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnabled;                                          // 0x50(0x1)(ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3154[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULiveStreamAnimationDataHandler*> ConfiguredDataHandlers;                            // 0x68(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ULiveStreamAnimationSubsystem* GetDefaultObj();

	void SetRole(enum class ELiveStreamAnimationRole NewRole);
	void SetAcceptClientPackets_Private(bool bInShouldAcceptClientPackets);
	enum class ELiveStreamAnimationRole GetRole();
	class ULiveStreamAnimationDataHandler* GetDataHandler(TSubclassOf<class ULiveStreamAnimationDataHandler> Type);
};

}


