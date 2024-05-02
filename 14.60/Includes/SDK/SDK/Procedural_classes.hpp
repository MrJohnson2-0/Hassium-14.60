#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A8 (0x1D0 - 0x28)
// Class Procedural.HISMBuilderSettings
class UHISMBuilderSettings : public UObject
{
public:
	enum class EComponentMobility                Mobility;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInt32Interval                        CullDistance;                                      // 0x2C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastShadow : 1;                                   // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectDynamicIndirectLighting : 1;                // Mask: 0x2, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectDistanceFieldLighting : 1;                  // Mask: 0x4, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastDynamicShadow : 1;                            // Mask: 0x8, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastStaticShadow : 1;                             // Mask: 0x10, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastShadowAsTwoSided : 1;                         // Mask: 0x20, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x40, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideLightMapRes : 1;                          // Mask: 0x80, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverriddenLightMapRes;                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELightmapType                     LightmapType;                                      // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseAsOccluder : 1;                                // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2F6 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4E90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBodyInstance                         BodyInstance;                                      // 0x48(0x158)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EHasCustomNavigableGeometry       CustomNavigableGeometry;                           // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                     LightingChannels;                                  // 0x1A1(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E91[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x1, PropSize: 0x10x1A4(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2F7 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4E92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CustomDepthStencilValue;                           // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TranslucencySortPriority;                          // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableDensityScaling : 1;                         // Mask: 0x1, PropSize: 0x10x1B0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2F8 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4E94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class URuntimeVirtualTexture*>        RuntimeVirtualTextures;                            // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VirtualTextureCullMips;                            // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                      // 0x1CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E95[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHISMBuilderSettings* GetDefaultObj();

	void SetOverriddenLightMapRes(int32 Value);
	int32 GetOverriddenLightMapRes();
};

// 0x10 (0x38 - 0x28)
// Class Procedural.ProceduralParameterModifier
class UProceduralParameterModifier : public UObject
{
public:
	bool                                         bEnabled;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Contribution;                                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProceduralParameterModifierBlendMode BlendMode;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E9A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralParameterModifier* GetDefaultObj();

	float GetContribution();
};

// 0x0 (0x38 - 0x38)
// Class Procedural.ProceduralContentVariationsWeightsModifier
class UProceduralContentVariationsWeightsModifier : public UProceduralParameterModifier
{
public:

	static class UClass* StaticClass();
	static class UProceduralContentVariationsWeightsModifier* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Procedural.ProceduralContentVariationsWeightsMapModifier
class UProceduralContentVariationsWeightsMapModifier : public UProceduralContentVariationsWeightsModifier
{
public:
	TArray<struct FProceduralContentVariationMap> VariationsMaps;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralContentVariationsWeightsMapModifier* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Procedural.ProceduralGenerator
class UProceduralGenerator : public UObject
{
public:
	struct FProceduralDebugSettings              DebugSettings;                                     // 0x28(0xC)(Edit, BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E9D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralGenerator* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Procedural.ProceduralCustomGenerator
class UProceduralCustomGenerator : public UProceduralGenerator
{
public:
	TSubclassOf<class UProceduralGeneratorContext> GeneratorContextClass;                             // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UProceduralGeneratorContext*           GeneratorContext;                                  // 0x40(0x8)(Edit, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UProceduralCustomGenerator* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Procedural.ProceduralDataMap
class UProceduralDataMap : public UObject
{
public:
	bool                                         bUseRemapCurve;                                    // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EA1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralDataMap* GetDefaultObj();

};

// 0x88 (0xB8 - 0x30)
// Class Procedural.ProceduralFloatDataMap
class UProceduralFloatDataMap : public UProceduralDataMap
{
public:
	struct FProceduralRemapFloatCurve            RemapCurve;                                        // 0x30(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralFloatDataMap* GetDefaultObj();

};

// 0x208 (0x238 - 0x30)
// Class Procedural.ProceduralVectorDataMap
class UProceduralVectorDataMap : public UProceduralDataMap
{
public:
	struct FProceduralRemapVectorCurve           RemapCurve;                                        // 0x30(0x208)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralVectorDataMap* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Procedural.ProceduralDensityModifier
class UProceduralDensityModifier : public UProceduralParameterModifier
{
public:

	static class UClass* StaticClass();
	static class UProceduralDensityModifier* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Procedural.ProceduralDensityMapModifier
class UProceduralDensityMapModifier : public UProceduralDensityModifier
{
public:
	class UProceduralFloatDataMap*               Map;                                               // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralDensityMapModifier* GetDefaultObj();

};

// 0x10 (0x268 - 0x258)
// Class Procedural.ProceduralGenerationBlockingVolume
class AProceduralGenerationBlockingVolume : public AVolume
{
public:
	TArray<class AProceduralGenerationVolume*>   BlockedVolumes;                                    // 0x258(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AProceduralGenerationBlockingVolume* GetDefaultObj();

};

// 0x30 (0xE0 - 0xB0)
// Class Procedural.ProceduralGenerationComponent
class UProceduralGenerationComponent : public UActorComponent
{
public:
	class UProceduralGenerator*                  Generator;                                         // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugVisualization;                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ProceduralGenerationGuid;                          // 0xBC(0x10)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4EAC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVolume*                               GenerationVolume;                                  // 0xD0(0x8)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UProceduralGenerationContext*          GenerationContext;                                 // 0xD8(0x8)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UProceduralGenerationComponent* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class Procedural.ProceduralGenerationContext
class UProceduralGenerationContext : public UObject
{
public:
	class UProceduralGeneratorContext*           GeneratorContext;                                  // 0x28(0x8)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UProceduralGeneratorContext*>   GeneratedContexts;                                 // 0x30(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UProceduralGeneratorContext*>   RegisteredContexts;                                // 0x40(0x10)(ZeroConstructor, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FGuid, class UProceduralGeneratorContext*> GeneratorContexts;                                 // 0x50(0x50)(DuplicateTransient, Deprecated, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4EB3[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralGenerationContext* GetDefaultObj();

	class AVolume* GetGenerationVolume();
	class UProceduralGenerationComponent* GetGenerationComponent();
};

// 0x8 (0x260 - 0x258)
// Class Procedural.ProceduralGenerationVolume
class AProceduralGenerationVolume : public AVolume
{
public:
	class UProceduralGenerationComponent*        ProceduralComponent;                               // 0x258(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AProceduralGenerationVolume* GetDefaultObj();

	void Generate();
	void ClearGeneratedContent();
};

// 0x30 (0x58 - 0x28)
// Class Procedural.ProceduralGeneratorContext
class UProceduralGeneratorContext : public UObject
{
public:
	class UProceduralGenerator*                  Generator;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralGenerationContext*          GenerationContext;                                 // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralGeneratorContext*           OwnerContext;                                      // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       GeneratedObjects;                                  // 0x40(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralPointCloud*                 ExportedPointCloud;                                // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UProceduralGeneratorContext* GetDefaultObj();

	bool OnGenerate();
	void OnDrawVisualization();
	void OnClearGeneratedContent();
	void GetOrCreateGeneratorContext(class UProceduralGenerator* Generator, class UProceduralGeneratorContext** Context);
	TArray<class UProceduralGeneratorContext*> GetGeneratedContexts();
	bool Generate();
	void ClearGeneratedContent();
};

// 0x10 (0x48 - 0x38)
// Class Procedural.ProceduralGeneratorStack
class UProceduralGeneratorStack : public UProceduralGenerator
{
public:
	TArray<struct FProceduralGenerationStackElement> Generators;                                        // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralGeneratorStack* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class Procedural.ProceduralGeneratorStackContext
class UProceduralGeneratorStackContext : public UProceduralGeneratorContext
{
public:

	static class UClass* StaticClass();
	static class UProceduralGeneratorStackContext* GetDefaultObj();

};

// 0x10 (0xC8 - 0xB8)
// Class Procedural.ProceduralLandscapeLayerMap
class UProceduralLandscapeLayerMap : public UProceduralFloatDataMap
{
public:
	class FName                                  LandscapeLayerName;                                // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LandscapeEditLayerName;                            // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralLandscapeLayerMap* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Procedural.ProceduralPointCloud
class UProceduralPointCloud : public UObject
{
public:
	TArray<struct FProceduralPointCloudPoint>    Points;                                            // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralPointCloud* GetDefaultObj();

	TArray<struct FProceduralPointCloudPoint> GetPointsByTag(class FName InTag);
	void Empty();
};

// 0x0 (0x38 - 0x38)
// Class Procedural.ProceduralRotationModifier
class UProceduralRotationModifier : public UProceduralParameterModifier
{
public:

	static class UClass* StaticClass();
	static class UProceduralRotationModifier* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Procedural.ProceduralRotationMapModifier
class UProceduralRotationMapModifier : public UProceduralRotationModifier
{
public:
	class UProceduralVectorDataMap*              Map;                                               // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProceduralRotationFormat         RotationFormat;                                    // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EC8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        Roll;                                              // 0x44(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        Pitch;                                             // 0x4C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        Yaw;                                               // 0x54(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EC9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralRotationMapModifier* GetDefaultObj();

	void SetYawMin(float InValue);
	void SetYawMax(float InValue);
	void SetRollMin(float InValue);
	void SetRollMax(float InValue);
	void SetPitchMin(float InValue);
	void SetPitchMax(float InValue);
	float GetYawMin();
	float GetYawMax();
	float GetRollMin();
	float GetRollMax();
	float GetPitchMin();
	float GetPitchMax();
};

// 0x28 (0x60 - 0x38)
// Class Procedural.ProceduralRotationNoiseModifier
class UProceduralRotationNoiseModifier : public UProceduralRotationModifier
{
public:
	uint8                                        bRandomRoll : 1;                                   // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2FB : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4ECA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        RandomRoll;                                        // 0x3C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRandomPitch : 1;                                  // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2FC : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4ECB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        RandomPitch;                                       // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRandomYaw : 1;                                    // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2FD : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4ECC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        RandomYaw;                                         // 0x54(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ECD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralRotationNoiseModifier* GetDefaultObj();

	void SetRandomYawMin(float InValue);
	void SetRandomYawMax(float InValue);
	void SetRandomRollMin(float InValue);
	void SetRandomRollMax(float InValue);
	void SetRandomPitchMin(float InValue);
	void SetRandomPitchMax(float InValue);
	float GetRandomYawMin();
	float GetRandomYawMax();
	float GetRandomRollMin();
	float GetRandomRollMax();
	float GetRandomPitchMin();
	float GetRandomPitchMax();
};

// 0x0 (0x38 - 0x38)
// Class Procedural.ProceduralScaleModifier
class UProceduralScaleModifier : public UProceduralParameterModifier
{
public:

	static class UClass* StaticClass();
	static class UProceduralScaleModifier* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class Procedural.ProceduralScaleMapModifier
class UProceduralScaleMapModifier : public UProceduralScaleModifier
{
public:
	bool                                         bRemapScale;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ECE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        RemapScale;                                        // 0x3C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ECF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProceduralFloatDataMap*               Map;                                               // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralScaleMapModifier* GetDefaultObj();

	void SetRemapScaleMin(float InValue);
	void SetRemapScaleMax(float InValue);
	float GetRemapScaleMin();
	float GetRemapScaleMax();
};

// 0x8 (0x40 - 0x38)
// Class Procedural.ProceduralScaleNoiseModifier
class UProceduralScaleNoiseModifier : public UProceduralScaleModifier
{
public:
	struct FFloatInterval                        Scale;                                             // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralScaleNoiseModifier* GetDefaultObj();

	void SetScaleMin(float InValue);
	void SetScaleMax(float InValue);
	float GetScaleMin();
	float GetScaleMax();
};

// 0x70 (0x98 - 0x28)
// Class Procedural.ProceduralScatterContentVariation
class UProceduralScatterContentVariation : public UObject
{
public:
	float                                        Weight;                                            // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProceduralScatterContentPivotMode PivotMode;                                         // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AdditionalPivotOffset;                             // 0x30(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootprintBoundingBoxRatio;                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SetActorTags;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED1[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralScatterContentVariation* GetDefaultObj();

};

// 0x8 (0xA0 - 0x98)
// Class Procedural.ProceduralScatterActorContentVariation
class UProceduralScatterActorContentVariation : public UProceduralScatterContentVariation
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralScatterActorContentVariation* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Procedural.ProceduralScatterContentSettings
class UProceduralScatterContentSettings : public UObject
{
public:
	TArray<class FName>                          SetActorTags;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UProceduralScatterContentVariation*> Variations;                                        // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED2[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralScatterContentSettings* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class Procedural.ProceduralScatterActorContentSettings
class UProceduralScatterActorContentSettings : public UProceduralScatterContentSettings
{
public:
	bool                                         bHideFromWorldOutliner;                            // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralScatterActorContentSettings* GetDefaultObj();

};

// 0x88 (0xC0 - 0x38)
// Class Procedural.ProceduralScatterGenerator
class UProceduralScatterGenerator : public UProceduralGenerator
{
public:
	enum class EProceduralScatterMethod          ScatterMethod;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProceduralScatterTileSettings        TileSettings;                                      // 0x3C(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUniqueSourcePointPatterns;                      // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GridSize;                                          // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GridJitter;                                        // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridRotation;                                      // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             GridOffset;                                        // 0x6C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FProceduralScatterSettingsElement> ScatterSettingsElements;                           // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          BlockingActorTags;                                 // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllScatterPointsBlocking;                         // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalDistribution;                                // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          BlockingScatterPointTags;                          // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProceduralScatterDebugSettings       ScatterDebugSettings;                              // 0xB0(0xC)(Edit, BlueprintVisible, Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralScatterGenerator* GetDefaultObj();

};

// 0x238 (0x290 - 0x58)
// Class Procedural.ProceduralScatterGeneratorContext
class UProceduralScatterGeneratorContext : public UProceduralGeneratorContext
{
public:
	struct FScatteredPointCloud                  ScatteredPointCloud;                               // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, NonTransactional, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UProceduralScatterGeneratorTile*> UniqueTiles;                                       // 0x68(0x10)(ZeroConstructor, Transient, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSourcePointGenerator>         SourcePointGenerators;                             // 0x78(0x10)(ZeroConstructor, Transient, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FProceduralScatterProjectionPoint> ProjectionPointCloud;                              // 0x88(0x10)(ZeroConstructor, Transient, NonTransactional, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UProceduralPointCloud*                 SourcePointCloud;                                  // 0x98(0x8)(ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UProceduralPointCloud*                 BlockerPointCloud;                                 // 0xA0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              ProjectionVectorMaterial;                          // 0xA8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4ED8[0x1E0];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralScatterGeneratorContext* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class Procedural.ProceduralScatterGeneratorTile
class UProceduralScatterGeneratorTile : public UObject
{
public:
	class UProceduralScatterGenerator*           Generator;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FProceduralScatter2DPoint>     GeneratedPoints;                                   // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4ED9[0x110];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralScatterGeneratorTile* GetDefaultObj();

};

// 0x1A8 (0x1D0 - 0x28)
// Class Procedural.ProceduralScatterSettings
class UProceduralScatterSettings : public UObject
{
public:
	class UProceduralScatterContentSettings*     Content;                                           // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bContentVariationsModifiersEnabled : 1;            // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2FE : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4EE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProceduralContentVariationsModifiers ContentVariationsModifiers;                        // 0x38(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class FName>                          SetPointTags;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionRadius;                                   // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutomaticCollisionRadius : 1;                     // Mask: 0x1, PropSize: 0x10x5C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSphericalBoundsForAutomaticCollisionRadius : 1; // Mask: 0x2, PropSize: 0x10x5C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2FF : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4EE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutomaticCollisionRadiusScaleFactor;               // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DistributionSeed;                                  // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDensityModifiersEnabled : 1;                      // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_300 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4EE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProceduralDensityModifiers           DensityModifiers;                                  // 0x70(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        Density;                                           // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SourcePointTagIncludes;                            // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourcePointTagExcludes;                            // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourceActorTagIncludes;                            // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourceActorTagExcludes;                            // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourceComponentTagIncludes;                        // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          SourceComponentTagExcludes;                        // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                        SourcePointDistance;                               // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSourcePointExactNumber : 1;                    // Mask: 0x1, PropSize: 0x10xF0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_301 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4EE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SourcePointExactNumber;                            // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleModifiersEnabled : 1;                        // Mask: 0x1, PropSize: 0x10xF8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_302 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4EE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProceduralScaleModifiers             ScaleModifiers;                                    // 0x100(0x20)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bRotationModifiersEnabled : 1;                     // Mask: 0x1, PropSize: 0x10x120(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_303 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4EEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProceduralRotationModifiers          RotationModifiers;                                 // 0x128(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        bAlignToNormal : 1;                                // Mask: 0x1, PropSize: 0x10x138(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_304 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4EED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlignMaxAngle;                                     // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProceduralScatterTargetSurface       TargetSurface;                                     // 0x140(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        bDetectOverhangingLedge : 1;                       // Mask: 0x1, PropSize: 0x10x188(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_305 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4EEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OverhangingLedgeDetectionRayCount;                 // 0x18C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverhangingLedgeDetectionLength;                   // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverhangingLedgeDetectionVerticalThreshold;        // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverhangingLedgeDetectionRadiusScale;              // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterMinimumScale;                                // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverlapPriority;                                   // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCollisionWithWorld : 1;                           // Mask: 0x1, PropSize: 0x10x1A4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_306 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4EF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CollisionScale;                                    // 0x1A8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                DebugColor;                                        // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EF4[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralScatterSettings* GetDefaultObj();

	void SetSourcePointDistanceMin(float InValue);
	void SetSourcePointDistanceMax(float InValue);
	float GetSourcePointDistanceMin();
	float GetSourcePointDistanceMax();
};

// 0x80 (0x118 - 0x98)
// Class Procedural.ProceduralScatterStaticMeshContentVariation
class UProceduralScatterStaticMeshContentVariation : public UProceduralScatterContentVariation
{
public:
	enum class EProceduralScatterStaticMeshMode  StaticMeshMode;                                    // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           Mesh;                                              // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    ActorClass;                                        // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHISMBuilderSettings*                  OverrideInstancingSettings;                        // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EFB[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralScatterStaticMeshContentVariation* GetDefaultObj();

};

// 0x18 (0x80 - 0x68)
// Class Procedural.ProceduralScatterStaticMeshContentSettings
class UProceduralScatterStaticMeshContentSettings : public UProceduralScatterContentSettings
{
public:
	TSubclassOf<class UFoliageInstancedStaticMeshComponent> ComponentClass;                                    // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ComponentTag;                                      // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHISMBuilderSettings*                  VariationsInstancingSettings;                      // 0x78(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralScatterStaticMeshContentSettings* GetDefaultObj();

};

// 0x10 (0xC8 - 0xB8)
// Class Procedural.ProceduralSurfaceHeightMap
class UProceduralSurfaceHeightMap : public UProceduralFloatDataMap
{
public:
	bool                                         bNormalizedHeight;                                 // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        HeightRange;                                       // 0xBC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F09[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralSurfaceHeightMap* GetDefaultObj();

	void SetHeightRangeMin(float InValue);
	void SetHeightRangeMax(float InValue);
	float GetValue(float InHeight);
	float GetHeightRangeMin();
	float GetHeightRangeMax();
};

// 0x10 (0xC8 - 0xB8)
// Class Procedural.ProceduralSurfaceSlopeAngleMap
class UProceduralSurfaceSlopeAngleMap : public UProceduralFloatDataMap
{
public:
	bool                                         bNormalizedSlopeAngle;                             // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F0A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatInterval                        SlopeAngleRange;                                   // 0xBC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F0B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralSurfaceSlopeAngleMap* GetDefaultObj();

	void SetSlopeAngleRangeMin(float InValue);
	void SetSlopeAngleRangeMax(float InValue);
	float GetValue(float InSlopeAngle);
	float GetSlopeAngleRangeMin();
	float GetSlopeAngleRangeMax();
};

// 0x40 (0xF8 - 0xB8)
// Class Procedural.ProceduralTextureFloatMap
class UProceduralTextureFloatMap : public UProceduralFloatDataMap
{
public:
	enum class EProceduralTextureColorChannel    Channel;                                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProceduralTextureSource              Source;                                            // 0xC0(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralTextureFloatMap* GetDefaultObj();

};

// 0x38 (0x270 - 0x238)
// Class Procedural.ProceduralTextureVectorMap
class UProceduralTextureVectorMap : public UProceduralVectorDataMap
{
public:
	struct FProceduralTextureSource              Source;                                            // 0x238(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProceduralTextureVectorMap* GetDefaultObj();

};

// 0x8 (0xC0 - 0xB8)
// Class Procedural.ProceduralVertexColorMap
class UProceduralVertexColorMap : public UProceduralFloatDataMap
{
public:
	enum class EProceduralTextureColorChannel    Channel;                                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F0D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UProceduralVertexColorMap* GetDefaultObj();

};

}


