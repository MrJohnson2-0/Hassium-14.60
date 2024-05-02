#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConcertReliableHandshakeState : uint8
{
	Negotiate                      = 0,
	Success                        = 1,
	EConcertReliableHandshakeState_MAX = 2,
};

enum class EConcertResponseCode : uint8
{
	Pending                        = 0,
	Success                        = 1,
	Failed                         = 2,
	InvalidRequest                 = 3,
	UnknownRequest                 = 4,
	TimedOut                       = 5,
	EConcertResponseCode_MAX       = 6,
};

enum class EConcertMessageFlags : uint8
{
	None                           = 0,
	ReliableOrdered                = 1,
	UniqueId                       = 2,
	EConcertMessageFlags_MAX       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct ConcertTransport.ConcertLocalIdentifierState
struct FConcertLocalIdentifierState
{
public:
	TArray<class FString>                        MappedNames;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ConcertTransport.ConcertMessageData
struct FConcertMessageData
{
public:
	uint8                                        Pad_5275[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ConcertEndpointId;                                 // 0x8(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 MessageID;                                         // 0x18(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MessageOrderIndex;                                 // 0x28(0x2)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ChannelId;                                         // 0x2A(0x2)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5276[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ConcertTransport.ConcertKeepAlive
struct FConcertKeepAlive : public FConcertMessageData
{
public:
};

// 0x18 (0x48 - 0x30)
// ScriptStruct ConcertTransport.ConcertAckData
struct FConcertAckData : public FConcertMessageData
{
public:
	int64                                        AckSendTimeTicks;                                  // 0x30(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SourceMessageId;                                   // 0x38(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ConcertTransport.ConcertEventData
struct FConcertEventData : public FConcertMessageData
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ConcertTransport.ConcertEndpointDiscoveryEvent
struct FConcertEndpointDiscoveryEvent : public FConcertEventData
{
public:
};

// 0x10 (0x40 - 0x30)
// ScriptStruct ConcertTransport.ConcertReliableHandshakeData
struct FConcertReliableHandshakeData : public FConcertEndpointDiscoveryEvent
{
public:
	enum class EConcertReliableHandshakeState    HandshakeState;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5277[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       ReliableChannelId;                                 // 0x32(0x2)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       NextMessageIndex;                                  // 0x34(0x2)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5278[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        EndpointTimeoutTick;                               // 0x38(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ConcertTransport.ConcertEndpointClosedData
struct FConcertEndpointClosedData : public FConcertMessageData
{
public:
};

// 0x30 (0x60 - 0x30)
// ScriptStruct ConcertTransport.ConcertResponseData
struct FConcertResponseData : public FConcertMessageData
{
public:
	struct FGuid                                 RequestMessageId;                                  // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcertResponseCode              ResponseCode;                                      // 0x40(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5279[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Reason;                                            // 0x48(0x18)(Edit, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct ConcertTransport.ConcertRequestData
struct FConcertRequestData : public FConcertMessageData
{
public:
};

// 0xC (0xC - 0x0)
// ScriptStruct ConcertTransport.ConcertEndpointSettings
struct FConcertEndpointSettings
{
public:
	bool                                         bEnableLogging;                                    // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_527A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PurgeProcessedMessageDelaySeconds;                 // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemoteEndpointTimeoutSeconds;                      // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


