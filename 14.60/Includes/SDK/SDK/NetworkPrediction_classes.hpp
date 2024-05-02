#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x298 - 0xB0)
// Class NetworkPrediction.NetworkPredictionComponent
class UNetworkPredictionComponent : public UActorComponent
{
public:
	struct FNetworkPredictionProxy               NetworkPredictionProxy;                            // 0xB0(0xA0)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	struct FReplicationProxy                     ReplicationProxy_ServerRPC;                        // 0x150(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FReplicationProxy                     ReplicationProxy_Autonomous;                       // 0x1A0(0x50)(Net, Transient, NativeAccessSpecifierPrivate)
	struct FReplicationProxy                     ReplicationProxy_Simulated;                        // 0x1F0(0x50)(Net, Transient, NativeAccessSpecifierPrivate)
	struct FReplicationProxy                     ReplicationProxy_Replay;                           // 0x240(0x50)(Net, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22D6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetworkPredictionComponent* GetDefaultObj();

	void ServerReceiveClientInput(struct FServerReplicationRPCParameter& ProxyParameter);
};

// 0x110 (0x1C0 - 0xB0)
// Class NetworkPrediction.NetworkPredictionPhysicsComponent
class UNetworkPredictionPhysicsComponent : public UActorComponent
{
public:
	struct FNetworkPredictionProxy               NetworkPredictionProxy;                            // 0xB0(0xA0)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   UpdatedPrimitive;                                  // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22D7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicationProxy                     ReplicationProxy;                                  // 0x160(0x50)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_22D8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetworkPredictionPhysicsComponent* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class NetworkPrediction.NetworkPredictionReplicatedManager
class ANetworkPredictionReplicatedManager : public AActor
{
public:
	struct FSharedPackageMap                     SharedPackageMap;                                  // 0x220(0x10)(Net, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ANetworkPredictionReplicatedManager* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class NetworkPrediction.NetworkPredictionSettingsObject
class UNetworkPredictionSettingsObject : public UObject
{
public:
	struct FNetworkPredictionSettings            Settings;                                          // 0x28(0x28)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNetworkPredictionSettingsObject* GetDefaultObj();

};

// 0x610 (0x640 - 0x30)
// Class NetworkPrediction.NetworkPredictionWorldManager
class UNetworkPredictionWorldManager : public UWorldSubsystem
{
public:
	class ANetworkPredictionReplicatedManager*   ReplicatedManager;                                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DE[0x608];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetworkPredictionWorldManager* GetDefaultObj();

};

}


