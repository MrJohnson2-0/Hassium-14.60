#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class ConcertTransport.ConcertEndpointConfig
class UConcertEndpointConfig : public UObject
{
public:
	struct FConcertEndpointSettings              EndpointSettings;                                  // 0x28(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5274[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConcertEndpointConfig* GetDefaultObj();

};

}


