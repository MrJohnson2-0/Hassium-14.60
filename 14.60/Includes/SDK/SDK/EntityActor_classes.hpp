#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD0 - 0xB0)
// Class EntityActor.ActorToEntityAdapterComponent
class UActorToEntityAdapterComponent : public UActorComponent
{
public:
	int32                                        EntityID;                                          // 0xB0(0x4)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2017[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEntityComponent*>              SerializedComponents;                              // 0xB8(0x10)(Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2018[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UActorToEntityAdapterComponent* GetDefaultObj();

};

// 0x78 (0xF0 - 0x78)
// Class EntityActor.EntityActorCollisionComponent
class UEntityActorCollisionComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_2047[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UPrimitiveComponent>    PrimitiveComponentCache;                           // 0xC0(0x28)(ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2048[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorCollisionComponent* GetDefaultObj();

	void OnNativeComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnNativeComponentEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnNativeComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
};

// 0x8 (0x60 - 0x58)
// Class EntityActor.EntityActorCustomReplicationComponent
class UEntityActorCustomReplicationComponent : public UEntityComponent
{
public:
	enum class EEntityActorReplicationOverrideType ReplicationOverride;                               // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEntityActorReplicationRelevancyBucketType ReplicationRelevancyBucketType;                    // 0x59(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_204A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CustomReplicationRelevancyRange;                   // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntityActorCustomReplicationComponent* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class EntityActor.EntityActorLocalInputComponent
class UEntityActorLocalInputComponent : public UEntityComponent
{
public:
	enum class EAutoReceiveInput                 AutoReceiveControllerInput;                        // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_204B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorLocalInputComponent* GetDefaultObj();

};

// 0x78 (0xD8 - 0x60)
// Class EntityActor.EntityActorPlayerComponent
class UEntityActorPlayerComponent : public UEntityDataBackedComponent
{
public:
	TSoftObjectPtr<class APlayerController>      PlayerControllerCache;                             // 0x60(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class APlayerState>           PlayerStateCache;                                  // 0x88(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      PlayerId;                                          // 0xB0(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntityActorPlayerComponent* GetDefaultObj();

};

// 0x18 (0x78 - 0x60)
// Class EntityActor.EntityActorPositionComponent
class UEntityActorPositionComponent : public UEntityPositionComponent
{
public:
	struct FVector                               ShadowVar_Location;                                // 0x60(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2053[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorPositionComponent* GetDefaultObj();

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

// 0x18 (0x78 - 0x60)
// Class EntityActor.EntityActorRotationComponent
class UEntityActorRotationComponent : public UEntityRotationComponent
{
public:
	struct FRotator                              ShadowVar_Rotation;                                // 0x60(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2058[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorRotationComponent* GetDefaultObj();

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

// 0x18 (0x78 - 0x60)
// Class EntityActor.EntityActorScaleComponent
class UEntityActorScaleComponent : public UEntityScaleComponent
{
public:
	struct FVector                               ShadowVar_Scale;                                   // 0x60(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_205B[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorScaleComponent* GetDefaultObj();

	void OnRootComponentChanged(class USceneComponent* InRootComponent, bool bIsRootComponent);
};

// 0x20 (0x78 - 0x58)
// Class EntityActor.EntityActorSkeletalMeshRenderComponent
class UEntityActorSkeletalMeshRenderComponent : public UEntityComponent
{
public:
	uint8                                        Pad_205C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         ShadowVar_SkeletalMesh;                            // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECollisionEnabled                 ShadowVar_EnableCollision;                         // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_205D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorSkeletalMeshRenderComponent* GetDefaultObj();

};

// 0x30 (0xA8 - 0x78)
// Class EntityActor.EntityActorStaticMeshRenderComponent
class UEntityActorStaticMeshRenderComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_2062[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           ShadowVar_StaticMesh;                              // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>            ShadowVar_MeshMaterials;                           // 0x90(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECollisionEnabled                 ShadowVar_EnableCollision;                         // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        TargetMeshIndex;                                   // 0xA1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        ShadowVar_Visible : 1;                             // Mask: 0x1, PropSize: 0x10xA2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1E3 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2064[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShadowVar_MaxDrawDistance;                         // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntityActorStaticMeshRenderComponent* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class EntityActor.EntityActorSubsystem
class UEntityActorSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_2066[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorSubsystem* GetDefaultObj();

};

// 0x28 (0x80 - 0x58)
// Class EntityActor.EntityActorTextDisplayComponent
class UEntityActorTextDisplayComponent : public UEntityComponent
{
public:
	class FText                                  DisplayText;                                       // 0x58(0x18)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2080[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityActorTextDisplayComponent* GetDefaultObj();

	void SetWorldSize(float Value);
	void SetVerticalAlignment(enum class EVerticalTextAligment Value);
	void SetTextRenderColor(const struct FColor& Value);
	void SetText(class FText Text);
	void SetRelativeScale(const struct FVector& RelativeScale);
	void SetRelativeRotation(const struct FRotator& RelativeRotation);
	void SetRelativeLocation(const struct FVector& RelativeLocation);
	void SetHorizontalAlignment(enum class EHorizTextAligment Value);
	float GetWorldSize();
	enum class EVerticalTextAligment GetVerticalAlignment();
	struct FColor GetTextRenderColor();
	class FText GetText();
	struct FVector GetRelativeLocation();
	enum class EHorizTextAligment GetHorizontalAlignment();
};

// 0x38 (0xB0 - 0x78)
// Class EntityActor.EntityDynamicActivationComponent
class UEntityDynamicActivationComponent : public UEntityEnableableComponent
{
public:
	uint8                                        Pad_2093[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionTargetTime;                              // 0x80(0x4)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTargetState;                                      // 0x84(0x1)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2095[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEntityComponent*>              LinkedComponents;                                  // 0x88(0x10)(Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2096[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEntityDynamicActivationComponent* GetDefaultObj();

	void OnRep_TransitionTarget();
	void OnEnabledChanged(bool bIsEnabled);
};

// 0x8 (0x60 - 0x58)
// Class EntityActor.EntityToActorAdapterComponent
class UEntityToActorAdapterComponent : public UEntityComponent
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x58(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEntityToActorAdapterComponent* GetDefaultObj();

};

// 0x0 (0x220 - 0x220)
// Class EntityActor.SimObject
class ASimObject : public AActor
{
public:

	static class UClass* StaticClass();
	static class ASimObject* GetDefaultObj();

};

}


