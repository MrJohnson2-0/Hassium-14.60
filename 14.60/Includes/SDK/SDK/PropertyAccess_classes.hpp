#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xF8 - 0x28)
// Class PropertyAccess.AnimBlueprintClassSubsystem_PropertyAccess
class UAnimBlueprintClassSubsystem_PropertyAccess : public UAnimBlueprintClassSubsystem
{
public:
	uint8                                        Pad_1CF2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPropertyAccessLibrary                PropertyAccessLibrary;                             // 0x30(0xC8)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAnimBlueprintClassSubsystem_PropertyAccess* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PropertyAccess.PropertyEventBroadcaster
class IPropertyEventBroadcaster : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPropertyEventBroadcaster* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PropertyAccess.PropertyEventSubscriber
class IPropertyEventSubscriber : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPropertyEventSubscriber* GetDefaultObj();

};

}


