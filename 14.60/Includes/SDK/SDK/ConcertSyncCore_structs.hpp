#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConcertDataStoreResultCode : uint8
{
	Added                          = 0,
	Fetched                        = 1,
	Exchanged                      = 2,
	NotFound                       = 3,
	TypeMismatch                   = 4,
	UnexpectedError                = 5,
	EConcertDataStoreResultCode_MAX = 6,
};

enum class EConcertMovieScenePlayerStatus : uint8
{
	Stopped                        = 0,
	Playing                        = 1,
	Recording                      = 2,
	Scrubbing                      = 3,
	Jumping                        = 4,
	Stepping                       = 5,
	Paused                         = 6,
	MAX                            = 7,
};

enum class EConcertSyncTransactionActivitySummaryType : uint8
{
	Added                          = 0,
	Updated                        = 1,
	Renamed                        = 2,
	Deleted                        = 3,
	EConcertSyncTransactionActivitySummaryType_MAX = 4,
};

enum class EConcertSyncActivityEventType : uint8
{
	Connection                     = 0,
	Lock                           = 1,
	Transaction                    = 2,
	Package                        = 3,
	EConcertSyncActivityEventType_MAX = 4,
};

enum class EConcertSyncLockEventType : uint8
{
	Locked                         = 0,
	Unlocked                       = 1,
	EConcertSyncLockEventType_MAX  = 2,
};

enum class EConcertSyncConnectionEventType : uint8
{
	Connected                      = 0,
	Disconnected                   = 1,
	EConcertSyncConnectionEventType_MAX = 2,
};

enum class EConcertPackageUpdateType : uint8
{
	Dummy                          = 0,
	Added                          = 1,
	Saved                          = 2,
	Renamed                        = 3,
	Deleted                        = 4,
	EConcertPackageUpdateType_MAX  = 5,
};

enum class EConcertPlaySessionEventType : uint8
{
	BeginPlay                      = 0,
	SwitchPlay                     = 1,
	EndPlay                        = 2,
	EConcertPlaySessionEventType_MAX = 3,
};

enum class EConcertResourceLockType : uint8
{
	None                           = 0,
	Lock                           = 1,
	Unlock                         = 2,
	EConcertResourceLockType_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertDataStore_StoreValue
struct FConcertDataStore_StoreValue
{
public:
	class FName                                  TypeName;                                          // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Version;                                           // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConcertSessionSerializedPayload      SerializedValue;                                   // 0x10(0x20)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertDataStore_Response
struct FConcertDataStore_Response
{
public:
	enum class EConcertDataStoreResultCode       ResultCode;                                        // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConcertDataStore_StoreValue          Value;                                             // 0x8(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertDataStore_Request
struct FConcertDataStore_Request
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TypeName;                                          // 0x8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x58 - 0x10)
// ScriptStruct ConcertSyncCore.ConcertDataStore_CompareExchangeRequest
struct FConcertDataStore_CompareExchangeRequest : public FConcertDataStore_Request
{
public:
	uint32                                       ExpectedVersion;                                   // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConcertSessionSerializedPayload      Expected;                                          // 0x18(0x20)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FConcertSessionSerializedPayload      Desired;                                           // 0x38(0x20)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct ConcertSyncCore.ConcertDataStore_FetchOrAddRequest
struct FConcertDataStore_FetchOrAddRequest : public FConcertDataStore_Request
{
public:
	struct FConcertSessionSerializedPayload      SerializedValue;                                   // 0x10(0x20)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertDataStore_KeyValuePair
struct FConcertDataStore_KeyValuePair
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertDataStore_StoreValue          Value;                                             // 0x8(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertDataStore_ReplicateEvent
struct FConcertDataStore_ReplicateEvent
{
public:
	TArray<struct FConcertDataStore_KeyValuePair> Values;                                            // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertDataStore_Text
struct FConcertDataStore_Text
{
public:
	class FText                                  Value;                                             // 0x0(0x18)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertDataStore_String
struct FConcertDataStore_String
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertDataStore_Double
struct FConcertDataStore_Double
{
public:
	double                                       Value;                                             // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertDataStore_Integer
struct FConcertDataStore_Integer
{
public:
	uint64                                       Value;                                             // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertClientPresenceEventBase
struct FConcertClientPresenceEventBase
{
public:
	uint32                                       TransactionUpdateIndex;                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertLaserData
struct FConcertLaserData
{
public:
	struct FVector                               LaserStart;                                        // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LaserEnd;                                          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6C (0x70 - 0x4)
// ScriptStruct ConcertSyncCore.ConcertClientVRPresenceUpdateEvent
struct FConcertClientVRPresenceUpdateEvent : public FConcertClientPresenceEventBase
{
public:
	struct FVector                               LeftMotionControllerPosition;                      // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 LeftMotionControllerOrientation;                   // 0x10(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               RightMotionControllerPosition;                     // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RightMotionControllerOrientation;                  // 0x30(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FConcertLaserData                     Lasers[0x2];                                       // 0x40(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x20 - 0x4)
// ScriptStruct ConcertSyncCore.ConcertClientDesktopPresenceUpdateEvent
struct FConcertClientDesktopPresenceUpdateEvent : public FConcertClientPresenceEventBase
{
public:
	struct FVector                               TraceStart;                                        // 0x4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceEnd;                                          // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMovingCamera;                                     // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52B2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x30 - 0x4)
// ScriptStruct ConcertSyncCore.ConcertClientPresenceDataUpdateEvent
struct FConcertClientPresenceDataUpdateEvent : public FConcertClientPresenceEventBase
{
public:
	class FName                                  WorldPath;                                         // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52B3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Orientation;                                       // 0x20(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertClientPresenceInVREvent
struct FConcertClientPresenceInVREvent
{
public:
	class FName                                  VRDevice;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertClientPresenceVisibilityUpdateEvent
struct FConcertClientPresenceVisibilityUpdateEvent
{
public:
	struct FGuid                                 ModifiedEndpointId;                                // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisibility;                                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52B4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSequencerState
struct FConcertSequencerState
{
public:
	class FString                                SequenceObjectPath;                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                   Time;                                              // 0x10(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcertMovieScenePlayerStatus    PlayerStatus;                                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlaybackSpeed;                                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSequencerStateSyncEvent
struct FConcertSequencerStateSyncEvent
{
public:
	TArray<struct FConcertSequencerState>        SequencerStates;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSequencerStateEvent
struct FConcertSequencerStateEvent
{
public:
	struct FConcertSequencerState                State;                                             // 0x0(0x28)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSequencerCloseEvent
struct FConcertSequencerCloseEvent
{
public:
	class FString                                SequenceObjectPath;                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMasterClose;                                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52B6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSequencerOpenEvent
struct FConcertSequencerOpenEvent
{
public:
	class FString                                SequenceObjectPath;                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncActivitySummary
struct FConcertSyncActivitySummary
{
public:
	uint8                                        Pad_52B7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ConcertSyncCore.ConcertSyncPackageActivitySummary
struct FConcertSyncPackageActivitySummary : public FConcertSyncActivitySummary
{
public:
	class FName                                  PackageName;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewPackageName;                                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcertPackageUpdateType         PackageUpdateType;                                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoSave;                                         // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreSave;                                          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52B8[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ConcertSyncCore.ConcertSyncTransactionActivitySummary
struct FConcertSyncTransactionActivitySummary : public FConcertSyncActivitySummary
{
public:
	enum class EConcertSyncTransactionActivitySummaryType TransactionSummaryType;                            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TransactionTitle;                                  // 0x10(0x18)(NativeAccessSpecifierPublic)
	class FName                                  PrimaryObjectName;                                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PrimaryPackageName;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewObjectName;                                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumActions;                                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52BA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ConcertSyncCore.ConcertSyncLockActivitySummary
struct FConcertSyncLockActivitySummary : public FConcertSyncActivitySummary
{
public:
	enum class EConcertSyncLockEventType         LockEventType;                                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PrimaryResourceName;                               // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PrimaryPackageName;                                // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumResources;                                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ConcertSyncCore.ConcertSyncConnectionActivitySummary
struct FConcertSyncConnectionActivitySummary : public FConcertSyncActivitySummary
{
public:
	enum class EConcertSyncConnectionEventType   ConnectionEventType;                               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52BC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncActivity
struct FConcertSyncActivity
{
public:
	int64                                        ActivityId;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnored;                                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 EndpointId;                                        // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             EventTime;                                         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcertSyncActivityEventType     EventType;                                         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        EventId;                                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertSessionSerializedCborPayload  EventSummary;                                      // 0x38(0x20)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertPackageInfo
struct FConcertPackageInfo
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewPackageName;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PackageFileExtension;                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcertPackageUpdateType         PackageUpdateType;                                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        TransactionEventIdAtSave;                          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreSave;                                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoSave;                                         // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C1[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertPackage
struct FConcertPackage
{
public:
	struct FConcertPackageInfo                   Info;                                              // 0x0(0x38)(NativeAccessSpecifierPublic)
	TArray<uint8>                                PackageData;                                       // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileId;                                            // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncPackageEvent
struct FConcertSyncPackageEvent
{
public:
	int64                                        PackageRevision;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertPackage                       Package;                                           // 0x8(0x58)(NativeAccessSpecifierPublic)
};

// 0x60 (0xB8 - 0x58)
// ScriptStruct ConcertSyncCore.ConcertSyncPackageActivity
struct FConcertSyncPackageActivity : public FConcertSyncActivity
{
public:
	struct FConcertSyncPackageEvent              EventData;                                         // 0x58(0x60)(NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct ConcertSyncCore.ConcertObjectId
struct FConcertObjectId
{
public:
	class FName                                  ObjectClassPathName;                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ObjectPackageName;                                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ObjectName;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ObjectOuterPathName;                               // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ObjectExternalPackageName;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ObjectPersistentFlags;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSerializedObjectData
struct FConcertSerializedObjectData
{
public:
	bool                                         bAllowCreate;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPendingKill;                                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NewPackageName;                                    // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewName;                                           // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewOuterPathName;                                  // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewExternalPackageName;                            // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                SerializedData;                                    // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSerializedPropertyData
struct FConcertSerializedPropertyData
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                SerializedData;                                    // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertExportedObject
struct FConcertExportedObject
{
public:
	struct FConcertObjectId                      ObjectId;                                          // 0x0(0x2C)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ObjectPathDepth;                                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertSerializedObjectData          ObjectData;                                        // 0x30(0x38)(NativeAccessSpecifierPublic)
	TArray<struct FConcertSerializedPropertyData> PropertyDatas;                                     // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                SerializedAnnotationData;                          // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertTransactionEventBase
struct FConcertTransactionEventBase
{
public:
	struct FGuid                                 TransactionId;                                     // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OperationId;                                       // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 TransactionEndpointId;                             // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TransactionUpdateIndex;                            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VersionIndex;                                      // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ModifiedPackages;                                  // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertObjectId                      PrimaryObjectId;                                   // 0x48(0x2C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConcertExportedObject>        ExportedObjects;                                   // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0xB0 - 0x88)
// ScriptStruct ConcertSyncCore.ConcertTransactionFinalizedEvent
struct FConcertTransactionFinalizedEvent : public FConcertTransactionEventBase
{
public:
	struct FConcertLocalIdentifierState          LocalIdentifierState;                              // 0x88(0x10)(NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x98(0x18)(NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncTransactionEvent
struct FConcertSyncTransactionEvent
{
public:
	struct FConcertTransactionFinalizedEvent     Transaction;                                       // 0x0(0xB0)(NativeAccessSpecifierPublic)
};

// 0xB0 (0x108 - 0x58)
// ScriptStruct ConcertSyncCore.ConcertSyncTransactionActivity
struct FConcertSyncTransactionActivity : public FConcertSyncActivity
{
public:
	struct FConcertSyncTransactionEvent          EventData;                                         // 0x58(0xB0)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncLockEvent
struct FConcertSyncLockEvent
{
public:
	enum class EConcertSyncLockEventType         LockEventType;                                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          ResourceNames;                                     // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x70 - 0x58)
// ScriptStruct ConcertSyncCore.ConcertSyncLockActivity
struct FConcertSyncLockActivity : public FConcertSyncActivity
{
public:
	struct FConcertSyncLockEvent                 EventData;                                         // 0x58(0x18)(NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncConnectionEvent
struct FConcertSyncConnectionEvent
{
public:
	enum class EConcertSyncConnectionEventType   ConnectionEventType;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x60 - 0x58)
// ScriptStruct ConcertSyncCore.ConcertSyncConnectionActivity
struct FConcertSyncConnectionActivity : public FConcertSyncActivity
{
public:
	struct FConcertSyncConnectionEvent           EventData;                                         // 0x58(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncPackageEventMetaData
struct FConcertSyncPackageEventMetaData
{
public:
	int64                                        PackageRevision;                                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertPackageInfo                   PackageInfo;                                       // 0x8(0x38)(NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncEndpointData
struct FConcertSyncEndpointData
{
public:
	struct FConcertClientInfo                    ClientInfo;                                        // 0x0(0xB8)(NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncEndpointIdAndData
struct FConcertSyncEndpointIdAndData
{
public:
	struct FGuid                                 EndpointId;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConcertSyncEndpointData              EndpointData;                                      // 0x10(0xB8)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ConcertSyncCore.TransactionClassFilter
struct FTransactionClassFilter
{
public:
	struct FSoftClassPath                        ObjectOuterClass;                                  // 0x0(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftClassPath>                ObjectClasses;                                     // 0x18(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertTransactionRejectedEvent
struct FConcertTransactionRejectedEvent
{
public:
	struct FGuid                                 TransactionId;                                     // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x88 - 0x88)
// ScriptStruct ConcertSyncCore.ConcertTransactionSnapshotEvent
struct FConcertTransactionSnapshotEvent : public FConcertTransactionEventBase
{
public:
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertIgnoreActivityStateChangedEvent
struct FConcertIgnoreActivityStateChangedEvent
{
public:
	struct FGuid                                 EndpointId;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnore;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertPlaySessionEvent
struct FConcertPlaySessionEvent
{
public:
	enum class EConcertPlaySessionEventType      EventType;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 PlayEndpointId;                                    // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PlayPackageName;                                   // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSimulating;                                     // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52CA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertResourceLockResponse
struct FConcertResourceLockResponse
{
public:
	TMap<class FName, struct FGuid>              FailedResources;                                   // 0x0(0x50)(NativeAccessSpecifierPublic)
	enum class EConcertResourceLockType          LockType;                                          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52CB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertResourceLockRequest
struct FConcertResourceLockRequest
{
public:
	struct FGuid                                 ClientId;                                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ResourceNames;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcertResourceLockType          LockType;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52CC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertResourceLockEvent
struct FConcertResourceLockEvent
{
public:
	struct FGuid                                 ClientId;                                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ResourceNames;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConcertResourceLockType          LockType;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52CD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertPackageRejectedEvent
struct FConcertPackageRejectedEvent
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertPackageUpdateEvent
struct FConcertPackageUpdateEvent
{
public:
	struct FConcertPackage                       Package;                                           // 0x0(0x58)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncEventResponse
struct FConcertSyncEventResponse
{
public:
	struct FConcertSessionSerializedPayload      Event;                                             // 0x0(0x20)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertSyncEventRequest
struct FConcertSyncEventRequest
{
public:
	enum class EConcertSyncActivityEventType     EventType;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        EventId;                                           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertWorkspaceSyncCompletedEvent
struct FConcertWorkspaceSyncCompletedEvent
{
public:
	uint8                                        Pad_52CF[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertWorkspaceSyncRequestedEvent
struct FConcertWorkspaceSyncRequestedEvent
{
public:
	int64                                        FirstActivityIdToSync;                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        LastActivityIdToSync;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableLiveSync;                                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52D0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ConcertSyncCore.ConcertWorkspaceSyncEventBase
struct FConcertWorkspaceSyncEventBase
{
public:
	int32                                        NumRemainingSyncEvents;                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x54 (0x58 - 0x4)
// ScriptStruct ConcertSyncCore.ConcertWorkspaceSyncLockEvent
struct FConcertWorkspaceSyncLockEvent : public FConcertWorkspaceSyncEventBase
{
public:
	uint8                                        Pad_52D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FGuid>              LockedResources;                                   // 0x8(0x50)(NativeAccessSpecifierPublic)
};

// 0x24 (0x28 - 0x4)
// ScriptStruct ConcertSyncCore.ConcertWorkspaceSyncActivityEvent
struct FConcertWorkspaceSyncActivityEvent : public FConcertWorkspaceSyncEventBase
{
public:
	uint8                                        Pad_52D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConcertSessionSerializedPayload      Activity;                                          // 0x8(0x20)(NativeAccessSpecifierPublic)
};

// 0xCC (0xD0 - 0x4)
// ScriptStruct ConcertSyncCore.ConcertWorkspaceSyncEndpointEvent
struct FConcertWorkspaceSyncEndpointEvent : public FConcertWorkspaceSyncEventBase
{
public:
	uint8                                        Pad_52D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConcertSyncEndpointIdAndData         Endpoint;                                          // 0x8(0xC8)(NativeAccessSpecifierPublic)
};

}


