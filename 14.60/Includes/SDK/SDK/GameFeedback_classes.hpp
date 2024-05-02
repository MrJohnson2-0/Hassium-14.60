#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class GameFeedback.LogOptions
class ULogOptions : public UObject
{
public:
	TArray<struct FLogSubmitOptions>             LogOptions;                                        // 0x28(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULogOptions* GetDefaultObj();

};

}


