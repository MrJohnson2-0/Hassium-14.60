#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ForwardingChannels.ForwardingChannelFactory
class IForwardingChannelFactory : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IForwardingChannelFactory* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class ForwardingChannels.ForwardingChannelsSubsystem
class UForwardingChannelsSubsystem : public UGameInstanceSubsystem
{
public:
	TArray<TScriptInterface<class IForwardingChannelFactory>> ForwardingChannelFactories;                        // 0x30(0x10)(ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_266[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UForwardingChannelsSubsystem* GetDefaultObj();

};

}


