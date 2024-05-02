#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C
class IBPi_CreativeMoveToolOverrides_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPi_CreativeMoveToolOverrides_C* GetDefaultObj();

	void GetCreativeActorBounds(bool* Override_Bounds, struct FVector* Bounds);
	void GetCreativeActorOrigin(bool* Override, struct FVector* Center);
};

}


