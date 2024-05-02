#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x330 - 0x1F8)
// Class MagicLeapARPin.MagicLeapARPinComponent
class UMagicLeapARPinComponent : public USceneComponent
{
public:
	class FString                                ObjectUID;                                         // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserIndex;                                         // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMagicLeapAutoPinType             AutoPinType;                                       // 0x20C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldPinActor;                                   // 0x20D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FD6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMagicLeapARPinSaveGame>   PinDataClass;                                      // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPersistentEntityPinned;                          // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPersistentEntityPinLost;                         // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGuid                                 PinnedCFUID;                                       // 0x238(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       PinnedSceneComponent;                              // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMagicLeapARPinSaveGame*               PinData;                                           // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4FD7[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapARPinComponent* GetDefaultObj();

	void UnPin();
	bool PinSceneComponent(class USceneComponent* ComponentToPin);
	bool PinRestoredOrSynced();
	bool PinActor(class AActor* ActorToPin);
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
	void PersistentEntityPinLost__DelegateSignature();
	bool IsPinned();
	bool GetPinState(struct FMagicLeapARPinState* State);
	bool GetPinnedPinID(struct FGuid* PinID);
	class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass);
};

// 0x0 (0x28 - 0x28)
// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMagicLeapARPinFunctionLibrary* GetDefaultObj();

	void UnBindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty_& Delegate);
	bool IsTrackerValid();
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32* Count);
	enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector& SearchPoint, struct FGuid* PinID);
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<struct FGuid>* Pins);
	class FString GetARPinStateToString(struct FMagicLeapARPinState& State);
	enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid& PinID, struct FMagicLeapARPinState* State);
	bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	bool GetARPinPositionAndOrientation(struct FGuid& PinID, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment);
	enum class EMagicLeapPassableWorldError DestroyTracker();
	enum class EMagicLeapPassableWorldError CreateTracker();
	void BindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty_& Delegate);
};

// 0x18 (0x40 - 0x28)
// Class MagicLeapARPin.MagicLeapARPinSettings
class UMagicLeapARPinSettings : public UObject
{
public:
	float                                        UpdateCheckFrequency;                              // 0x28(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMagicLeapARPinState                  OnUpdatedEventTriggerDelta;                        // 0x2C(0x10)(Edit, Config, GlobalConfig, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FDF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMagicLeapARPinSettings* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class MagicLeapARPin.MagicLeapARPinSaveGame
class UMagicLeapARPinSaveGame : public USaveGame
{
public:
	struct FGuid                                 PinnedID;                                          // 0x28(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FE0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ComponentWorldTransform;                           // 0x40(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            PinTransform;                                      // 0x70(0x30)(Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMagicLeapARPinSaveGame* GetDefaultObj();

};

}


