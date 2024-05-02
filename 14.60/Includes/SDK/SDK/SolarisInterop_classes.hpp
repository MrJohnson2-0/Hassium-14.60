#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SolarisInterop.VerseCoroutineLib
class UVerseCoroutineLib : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseCoroutineLib* GetDefaultObj();

	int32 GetState(class UObject* Context);
	void Deallocate(class UObject* Context);
	class UObject* Allocate(class UClass* Type, class UObject* Caller, int32 CallerResumeState);
	void Abort(class UObject* Context, bool bAbortCallers);
};

// 0xE8 (0x110 - 0x28)
// Class SolarisInterop.CoroutineContextPlaceholder
class UCoroutineContextPlaceholder : public UObject
{
public:
	uint8                                        Pad_4E7F[0xE8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCoroutineContextPlaceholder* GetDefaultObj();

};

}


