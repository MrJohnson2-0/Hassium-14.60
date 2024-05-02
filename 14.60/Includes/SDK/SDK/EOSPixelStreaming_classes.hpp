#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class EOSPixelStreaming.EOSPixelStreamerDelegates
class UEOSPixelStreamerDelegates : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnAllConnectionsClosed;                            // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEOSPixelStreamerDelegates* GetDefaultObj();

	void OnAllConnectionsClosed__DelegateSignature();
	class UEOSPixelStreamerDelegates* GetPixelStreamerDelegates();
};

// 0x18 (0xC8 - 0xB0)
// Class EOSPixelStreaming.EOSPixelStreamerInputComponent
class UEOSPixelStreamerInputComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnInputEvent;                                      // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E12[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEOSPixelStreamerInputComponent* GetDefaultObj();

	void SendPixelStreamingResponse(const class FString& Descriptor);
	void OnInput__DelegateSignature(const class FString& Descriptor);
	void GetJsonStringValue(const class FString& Descriptor, const class FString& FieldName, class FString* StringValue, bool* Success);
	void AddJsonStringValue(const class FString& Descriptor, const class FString& FieldName, const class FString& StringValue, class FString* NewDescriptor, bool* Success);
};

// 0x30 (0x68 - 0x38)
// Class EOSPixelStreaming.EOSPixelStreamingSettings
class UEOSPixelStreamingSettings : public UDeveloperSettings
{
public:
	struct FSoftClassPath                        PixelStreamerDefaultCursorClassName;               // 0x38(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        PixelStreamerTextEditBeamCursorClassName;          // 0x50(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEOSPixelStreamingSettings* GetDefaultObj();

};

}


