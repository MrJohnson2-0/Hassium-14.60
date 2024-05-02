#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x128 - 0x28)
// Class Concert.ConcertServerConfig
class UConcertServerConfig : public UObject
{
public:
	bool                                         bAutoArchiveOnReboot;                              // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoArchiveOnShutdown;                            // 0x29(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCleanWorkingDir;                                  // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_528F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumSessionsToKeep;                                 // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerName;                                        // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultSessionName;                                // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class FString>                          AuthorizedClientKeys;                              // 0x50(0x50)(Config, NativeAccessSpecifierPublic)
	class FString                                DefaultSessionToRestore;                           // 0xA0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertSessionSettings               DefaultSessionSettings;                            // 0xB0(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FConcertServerSettings                ServerSettings;                                    // 0xD8(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FConcertEndpointSettings              EndpointSettings;                                  // 0xE0(0xC)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_5290[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                WorkingDir;                                        // 0xF0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ArchiveDir;                                        // 0x100(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionRepositoryRootDir;                          // 0x110(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMountDefaultSessionRepository;                    // 0x120(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5291[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConcertServerConfig* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class Concert.ConcertClientConfig
class UConcertClientConfig : public UObject
{
public:
	bool                                         bIsHeadless;                                       // 0x28(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInstallEditorToolbarButton;                       // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoConnect;                                      // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRetryAutoConnectOnError;                          // 0x2B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5292[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DefaultServerURL;                                  // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultSessionName;                                // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultSessionToRestore;                           // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultSaveSessionAs;                              // 0x60(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertClientSettings                ClientSettings;                                    // 0x70(0x80)(Edit, Config, NativeAccessSpecifierPublic)
	struct FConcertSourceControlSettings         SourceControlSettings;                             // 0xF0(0x1)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5293[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConcertEndpointSettings              EndpointSettings;                                  // 0xF4(0xC)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UConcertClientConfig* GetDefaultObj();

};

}


