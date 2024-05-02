#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENetworkLOD : uint8
{
	Interpolated                   = 1,
	SimExtrapolate                 = 2,
	ForwardPredict                 = 4,
	All                            = 7,
	ENetworkLOD_MAX                = 8,
};

enum class ENetworkPredictionTickingPolicy : uint8
{
	Independent                    = 1,
	Fixed                          = 2,
	All                            = 3,
	ENetworkPredictionTickingPolicy_MAX = 4,
};

enum class ENetworkPredictionStateRead : uint8
{
	Simulation                     = 0,
	Presentation                   = 1,
	ENetworkPredictionStateRead_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xA0 - 0x0)
// ScriptStruct NetworkPrediction.NetworkPredictionProxy
struct FNetworkPredictionProxy
{
public:
	uint8                                        Pad_22E2[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UNetworkPredictionWorldManager*        WorldManager;                                      // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22E3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NetworkPrediction.SharedPackageMapItem
struct FSharedPackageMapItem
{
public:
	TSoftObjectPtr<class UObject>                SoftPtr;                                           // 0x0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NetworkPrediction.SharedPackageMap
struct FSharedPackageMap
{
public:
	TArray<struct FSharedPackageMapItem>         Items;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NetworkPrediction.ServerReplicationRPCParameter
struct FServerReplicationRPCParameter
{
public:
	uint8                                        Pad_22E7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct NetworkPrediction.ReplicationProxy
struct FReplicationProxy
{
public:
	uint8                                        Pad_22E8[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NetworkPrediction.NetworkPredictionSettings
struct FNetworkPredictionSettings
{
public:
	enum class ENetworkPredictionTickingPolicy   PreferredTickingPolicy;                            // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ANetworkPredictionReplicatedManager> ReplicatedManagerClassOverride;                    // 0x8(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FixedTickFrameRate;                                // 0x10(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceEngineFixTickForcePhysics;                   // 0x14(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENetworkLOD                       SimulatedProxyNetworkLOD;                          // 0x15(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22EE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FixedTickInterpolationBufferedMS;                  // 0x18(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndependentTickInterpolationBufferedMS;            // 0x1C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IndependentTickInterpolationMaxBufferedMS;         // 0x20(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22EF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


