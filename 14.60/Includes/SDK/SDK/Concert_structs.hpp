#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConcertLogMessageAction : uint8
{
	Send                           = 0,
	Publish                        = 1,
	Receive                        = 2,
	Queue                          = 3,
	Discard                        = 4,
	Duplicate                      = 5,
	TimeOut                        = 6,
	Process                        = 7,
	EndpointDiscovery              = 8,
	EndpointTimeOut                = 9,
	EndpointClosure                = 10,
	EConcertLogMessageAction_MAX   = 11,
};

enum class EConcertServerFlags : uint8
{
	None                           = 0,
	IgnoreSessionRequirement       = 1,
	EConcertServerFlags_MAX        = 2,
};

enum class EConcertSessionRepositoryMountResponseCode : uint8
{
	Mounted                        = 0,
	AlreadyMounted                 = 1,
	NotFound                       = 2,
	EConcertSessionRepositoryMountResponseCode_MAX = 3,
};

enum class EConcertSessionResponseCode : uint8
{
	Success                        = 0,
	Failed                         = 1,
	InvalidRequest                 = 2,
	EConcertSessionResponseCode_MAX = 3,
};

enum class EConcertClientStatus : uint8
{
	Connected                      = 0,
	Disconnected                   = 1,
	Updated                        = 2,
	EConcertClientStatus_MAX       = 3,
};

enum class EConcertConnectionResult : uint8
{
	ConnectionAccepted             = 0,
	ConnectionRefused              = 1,
	AlreadyConnected               = 2,
	EConcertConnectionResult_MAX   = 3,
};

enum class EConcertConnectionStatus : uint8
{
	Connecting                     = 0,
	Connected                      = 1,
	Disconnecting                  = 2,
	Disconnected                   = 3,
	EConcertConnectionStatus_MAX   = 4,
};

enum class EConcertSourceValidationMode : uint8
{
	Hard                           = 0,
	Soft                           = 1,
	SoftAutoProceed                = 2,
	EConcertSourceValidationMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct Concert.ConcertSessionSerializedPayload
struct FConcertSessionSerializedPayload
{
public:
	class FName                                  PayloadTypeName;                                   // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UncompressedPayloadSize;                           // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5294[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                CompressedPayload;                                 // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Concert.ConcertLog
struct FConcertLog
{
public:
	uint64                                       Frame;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MessageID;                                         // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MessageOrderIndex;                                 // 0x18(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ChannelId;                                         // 0x1A(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5295[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             Timestamp;                                         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcertLogMessageAction          MessageAction;                                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5296[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MessageTypeName;                                   // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OriginEndpointId;                                  // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 DestinationEndpointId;                             // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CustomPayloadTypename;                             // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CustomPayloadUncompressedByteSize;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringPayload;                                     // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertSessionSerializedPayload      SerializedPayload;                                 // 0x70(0x20)(Transient, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Concert.ConcertSessionSerializedCborPayload
struct FConcertSessionSerializedCborPayload
{
public:
	class FName                                  PayloadTypeName;                                   // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UncompressedPayloadSize;                           // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5297[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                CompressedPayload;                                 // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Concert.ConcertSessionFilter
struct FConcertSessionFilter
{
public:
	int64                                        ActivityIdLowerBound;                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ActivityIdUpperBound;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int64>                                ActivityIdsToExclude;                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int64>                                ActivityIdsToInclude;                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyLiveData;                                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMetaDataOnly;                                     // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeIgnoredActivities;                         // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5298[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Concert.ConcertFileVersionInfo
struct FConcertFileVersionInfo
{
public:
	int32                                        FileVersionUE4;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FileVersionLicenseeUE4;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Concert.ConcertEngineVersionInfo
struct FConcertEngineVersionInfo
{
public:
	uint16                                       Major;                                             // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Minor;                                             // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Patch;                                             // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5299[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       Changelist;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Concert.ConcertCustomVersionInfo
struct FConcertCustomVersionInfo
{
public:
	class FName                                  FriendlyName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Key;                                               // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Concert.ConcertSessionVersionInfo
struct FConcertSessionVersionInfo
{
public:
	struct FConcertFileVersionInfo               FileVersion;                                       // 0x0(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct FConcertEngineVersionInfo             EngineVersion;                                     // 0x8(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_529A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConcertCustomVersionInfo>     CustomVersions;                                    // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Concert.ConcertSessionSettings
struct FConcertSessionSettings
{
public:
	class FString                                ProjectName;                                       // 0x0(0x10)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       BaseRevision;                                      // 0x10(0x4)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_529B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ArchiveNameOverride;                               // 0x18(0x10)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct Concert.ConcertSessionInfo
struct FConcertSessionInfo
{
public:
	struct FGuid                                 ServerInstanceId;                                  // 0x0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ServerEndpointId;                                  // 0x10(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OwnerInstanceId;                                   // 0x20(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SessionId;                                         // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionName;                                       // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OwnerUserName;                                     // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OwnerDeviceName;                                   // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertSessionSettings               Settings;                                          // 0x70(0x28)(Edit, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FConcertSessionVersionInfo>    VersionInfos;                                      // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Concert.ConcertInstanceInfo
struct FConcertInstanceInfo
{
public:
	struct FGuid                                 InstanceID;                                        // 0x0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InstanceName;                                      // 0x10(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InstanceType;                                      // 0x20(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Concert.ConcertClientInfo
struct FConcertClientInfo
{
public:
	struct FConcertInstanceInfo                  InstanceInfo;                                      // 0x0(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
	class FString                                DeviceName;                                        // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlatformName;                                      // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserName;                                          // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AvatarColor;                                       // 0x70(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DesktopAvatarActorClass;                           // 0x80(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VRAvatarActorClass;                                // 0x90(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0xA0(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasEditorData;                                    // 0xB0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresCookedData;                               // 0xB1(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_529C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Concert.ConcertSessionClientInfo
struct FConcertSessionClientInfo
{
public:
	struct FGuid                                 ClientEndpointId;                                  // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertClientInfo                    ClientInfo;                                        // 0x10(0xB8)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Concert.ConcertServerInfo
struct FConcertServerInfo
{
public:
	struct FGuid                                 AdminEndpointId;                                   // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerName;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertInstanceInfo                  InstanceInfo;                                      // 0x20(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
	enum class EConcertServerFlags               ServerFlags;                                       // 0x50(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_529D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x80 - 0x60)
// ScriptStruct Concert.ConcertSession_CustomResponse
struct FConcertSession_CustomResponse : public FConcertResponseData
{
public:
	struct FConcertSessionSerializedPayload      SerializedPayload;                                 // 0x60(0x20)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x40 (0x70 - 0x30)
// ScriptStruct Concert.ConcertSession_CustomRequest
struct FConcertSession_CustomRequest : public FConcertRequestData
{
public:
	struct FGuid                                 SourceEndpointId;                                  // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 DestinationEndpointId;                             // 0x40(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertSessionSerializedPayload      SerializedPayload;                                 // 0x50(0x20)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x40 (0x70 - 0x30)
// ScriptStruct Concert.ConcertSession_CustomEvent
struct FConcertSession_CustomEvent : public FConcertEventData
{
public:
	struct FGuid                                 SourceEndpointId;                                  // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         DestinationEndpointIds;                            // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertSessionSerializedPayload      SerializedPayload;                                 // 0x50(0x20)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct Concert.ConcertSession_SessionRenamedEvent
struct FConcertSession_SessionRenamedEvent : public FConcertEventData
{
public:
	class FString                                NewName;                                           // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct Concert.ConcertSession_ClientListUpdatedEvent
struct FConcertSession_ClientListUpdatedEvent : public FConcertEventData
{
public:
	TArray<struct FConcertSessionClientInfo>     SessionClients;                                    // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xF8 - 0x30)
// ScriptStruct Concert.ConcertSession_UpdateClientInfoEvent
struct FConcertSession_UpdateClientInfoEvent : public FConcertEventData
{
public:
	struct FConcertSessionClientInfo             SessionClient;                                     // 0x30(0xC8)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct Concert.ConcertSession_LeaveSessionEvent
struct FConcertSession_LeaveSessionEvent : public FConcertEventData
{
public:
	struct FGuid                                 SessionServerEndpointId;                           // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x58 - 0x30)
// ScriptStruct Concert.ConcertSession_JoinSessionResultEvent
struct FConcertSession_JoinSessionResultEvent : public FConcertEndpointDiscoveryEvent
{
public:
	struct FGuid                                 SessionServerEndpointId;                           // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcertConnectionResult          ConnectionResult;                                  // 0x40(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_529E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConcertSessionClientInfo>     SessionClients;                                    // 0x48(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xF8 - 0x30)
// ScriptStruct Concert.ConcertSession_DiscoverAndJoinSessionEvent
struct FConcertSession_DiscoverAndJoinSessionEvent : public FConcertEndpointDiscoveryEvent
{
public:
	struct FGuid                                 SessionServerEndpointId;                           // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertClientInfo                    ClientInfo;                                        // 0x40(0xB8)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x60 (0xC0 - 0x60)
// ScriptStruct Concert.ConcertAdmin_GetSessionActivitiesResponse
struct FConcertAdmin_GetSessionActivitiesResponse : public FConcertResponseData
{
public:
	TArray<struct FConcertSessionSerializedPayload> Activities;                                        // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FConcertClientInfo> EndpointClientInfoMap;                             // 0x70(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x28 (0x58 - 0x30)
// ScriptStruct Concert.ConcertAdmin_GetSessionActivitiesRequest
struct FConcertAdmin_GetSessionActivitiesRequest : public FConcertRequestData
{
public:
	struct FGuid                                 SessionId;                                         // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        FromActivityId;                                    // 0x40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ActivityCount;                                     // 0x48(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeDetails;                                   // 0x50(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_529F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x70 - 0x60)
// ScriptStruct Concert.ConcertAdmin_GetSessionClientsResponse
struct FConcertAdmin_GetSessionClientsResponse : public FConcertResponseData
{
public:
	TArray<struct FConcertSessionClientInfo>     SessionClients;                                    // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct Concert.ConcertAdmin_GetSessionClientsRequest
struct FConcertAdmin_GetSessionClientsRequest : public FConcertRequestData
{
public:
	struct FGuid                                 SessionId;                                         // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x80 - 0x60)
// ScriptStruct Concert.ConcertAdmin_DeleteSessionResponse
struct FConcertAdmin_DeleteSessionResponse : public FConcertResponseData
{
public:
	struct FGuid                                 SessionId;                                         // 0x60(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionName;                                       // 0x70(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x60 - 0x30)
// ScriptStruct Concert.ConcertAdmin_DeleteSessionRequest
struct FConcertAdmin_DeleteSessionRequest : public FConcertRequestData
{
public:
	struct FGuid                                 SessionId;                                         // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserName;                                          // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceName;                                        // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x80 - 0x60)
// ScriptStruct Concert.ConcertAdmin_RenameSessionResponse
struct FConcertAdmin_RenameSessionResponse : public FConcertResponseData
{
public:
	struct FGuid                                 SessionId;                                         // 0x60(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OldName;                                           // 0x70(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x70 - 0x30)
// ScriptStruct Concert.ConcertAdmin_RenameSessionRequest
struct FConcertAdmin_RenameSessionRequest : public FConcertRequestData
{
public:
	struct FGuid                                 SessionId;                                         // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewName;                                           // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserName;                                          // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceName;                                        // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0xA0 - 0x60)
// ScriptStruct Concert.ConcertAdmin_ArchiveSessionResponse
struct FConcertAdmin_ArchiveSessionResponse : public FConcertResponseData
{
public:
	struct FGuid                                 SessionId;                                         // 0x60(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionName;                                       // 0x70(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ArchiveId;                                         // 0x80(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ArchiveName;                                       // 0x90(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0xA8 - 0x30)
// ScriptStruct Concert.ConcertAdmin_ArchiveSessionRequest
struct FConcertAdmin_ArchiveSessionRequest : public FConcertRequestData
{
public:
	struct FGuid                                 SessionId;                                         // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ArchiveNameOverride;                               // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserName;                                          // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceName;                                        // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertSessionFilter                 SessionFilter;                                     // 0x70(0x38)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0xA8 (0x108 - 0x60)
// ScriptStruct Concert.ConcertAdmin_SessionInfoResponse
struct FConcertAdmin_SessionInfoResponse : public FConcertResponseData
{
public:
	struct FConcertSessionInfo                   SessionInfo;                                       // 0x60(0xA8)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x168 (0x198 - 0x30)
// ScriptStruct Concert.ConcertAdmin_CopySessionRequest
struct FConcertAdmin_CopySessionRequest : public FConcertRequestData
{
public:
	struct FGuid                                 SessionId;                                         // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionName;                                       // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertClientInfo                    OwnerClientInfo;                                   // 0x50(0xB8)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FConcertSessionSettings               SessionSettings;                                   // 0x108(0x28)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FConcertSessionVersionInfo            VersionInfo;                                       // 0x130(0x28)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FConcertSessionFilter                 SessionFilter;                                     // 0x158(0x38)(Edit, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x148 - 0x30)
// ScriptStruct Concert.ConcertAdmin_FindSessionRequest
struct FConcertAdmin_FindSessionRequest : public FConcertRequestData
{
public:
	struct FGuid                                 SessionId;                                         // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertClientInfo                    OwnerClientInfo;                                   // 0x40(0xB8)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FConcertSessionSettings               SessionSettings;                                   // 0xF8(0x28)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FConcertSessionVersionInfo            VersionInfo;                                       // 0x120(0x28)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x118 (0x148 - 0x30)
// ScriptStruct Concert.ConcertAdmin_CreateSessionRequest
struct FConcertAdmin_CreateSessionRequest : public FConcertRequestData
{
public:
	class FString                                SessionName;                                       // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertClientInfo                    OwnerClientInfo;                                   // 0x40(0xB8)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FConcertSessionSettings               SessionSettings;                                   // 0xF8(0x28)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FConcertSessionVersionInfo            VersionInfo;                                       // 0x120(0x28)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct Concert.ConcertAdmin_GetSessionsResponse
struct FConcertAdmin_GetSessionsResponse : public FConcertResponseData
{
public:
	TArray<struct FConcertSessionInfo>           Sessions;                                          // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct Concert.ConcertAdmin_GetArchivedSessionsRequest
struct FConcertAdmin_GetArchivedSessionsRequest : public FConcertRequestData
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct Concert.ConcertAdmin_GetLiveSessionsRequest
struct FConcertAdmin_GetLiveSessionsRequest : public FConcertRequestData
{
public:
};

// 0x20 (0x80 - 0x60)
// ScriptStruct Concert.ConcertAdmin_GetAllSessionsResponse
struct FConcertAdmin_GetAllSessionsResponse : public FConcertResponseData
{
public:
	TArray<struct FConcertSessionInfo>           LiveSessions;                                      // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConcertSessionInfo>           ArchivedSessions;                                  // 0x70(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct Concert.ConcertAdmin_GetAllSessionsRequest
struct FConcertAdmin_GetAllSessionsRequest : public FConcertRequestData
{
public:
};

// 0x10 (0x70 - 0x60)
// ScriptStruct Concert.ConcertAdmin_DropSessionRepositoriesResponse
struct FConcertAdmin_DropSessionRepositoriesResponse : public FConcertResponseData
{
public:
	TArray<struct FGuid>                         DroppedRepositoryIds;                              // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct Concert.ConcertAdmin_DropSessionRepositoriesRequest
struct FConcertAdmin_DropSessionRepositoriesRequest : public FConcertRequestData
{
public:
	TArray<struct FGuid>                         RepositoryIds;                                     // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Concert.ConcertSessionRepositoryInfo
struct FConcertSessionRepositoryInfo
{
public:
	struct FGuid                                 RepositoryId;                                      // 0x0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMounted;                                          // 0x10(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x70 - 0x60)
// ScriptStruct Concert.ConcertAdmin_GetSessionRepositoriesResponse
struct FConcertAdmin_GetSessionRepositoriesResponse : public FConcertResponseData
{
public:
	TArray<struct FConcertSessionRepositoryInfo> SessionRepositories;                               // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct Concert.ConcertAdmin_GetSessionRepositoriesRequest
struct FConcertAdmin_GetSessionRepositoriesRequest : public FConcertRequestData
{
public:
};

// 0x8 (0x68 - 0x60)
// ScriptStruct Concert.ConcertAdmin_MountSessionRepositoryResponse
struct FConcertAdmin_MountSessionRepositoryResponse : public FConcertResponseData
{
public:
	enum class EConcertSessionRepositoryMountResponseCode MountStatus;                                       // 0x60(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x58 - 0x30)
// ScriptStruct Concert.ConcertAdmin_MountSessionRepositoryRequest
struct FConcertAdmin_MountSessionRepositoryRequest : public FConcertRequestData
{
public:
	struct FGuid                                 RepositoryId;                                      // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RepositoryRootDir;                                 // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAsServerDefault;                                  // 0x50(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateIfNotExist;                                 // 0x51(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x78 - 0x30)
// ScriptStruct Concert.ConcertAdmin_ServerDiscoveredEvent
struct FConcertAdmin_ServerDiscoveredEvent : public FConcertEndpointDiscoveryEvent
{
public:
	class FString                                ServerName;                                        // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertInstanceInfo                  InstanceInfo;                                      // 0x40(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
	enum class EConcertServerFlags               ServerFlags;                                       // 0x70(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x60 - 0x30)
// ScriptStruct Concert.ConcertAdmin_DiscoverServersEvent
struct FConcertAdmin_DiscoverServersEvent : public FConcertEndpointDiscoveryEvent
{
public:
	class FString                                RequiredRole;                                      // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RequiredVersion;                                   // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientAuthenticationKey;                           // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Concert.ConcertServerSessionRepository
struct FConcertServerSessionRepository
{
public:
	struct FGuid                                 RepositoryId;                                      // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RepositoryRootDir;                                 // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WorkingDir;                                        // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SavedDir;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProcessId;                                         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMounted;                                          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Concert.ConcertServerSessionRepositoryDatabase
struct FConcertServerSessionRepositoryDatabase
{
public:
	TArray<struct FConcertServerSessionRepository> Repositories;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Concert.ConcertSourceControlSettings
struct FConcertSourceControlSettings
{
public:
	enum class EConcertSourceValidationMode      ValidationMode;                                    // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Concert.ConcertClientSettings
struct FConcertClientSettings
{
public:
	class FString                                DisplayName;                                       // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AvatarColor;                                       // 0x10(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        DesktopAvatarActorClass;                           // 0x20(0x18)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        VRAvatarActorClass;                                // 0x38(0x18)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ServerPort;                                        // 0x50(0x2)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DiscoveryTimeoutSeconds;                           // 0x54(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionTickFrequencySeconds;                       // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LatencyCompensationMs;                             // 0x5C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x60(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientAuthenticationKey;                           // 0x70(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Concert.ConcertServerSettings
struct FConcertServerSettings
{
public:
	bool                                         bIgnoreSessionSettingsRestriction;                 // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SessionTickFrequencySeconds;                       // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


