#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function Procedural.HISMBuilderSettings.SetOverriddenLightMapRes
struct UHISMBuilderSettings_SetOverriddenLightMapRes_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.HISMBuilderSettings.GetOverriddenLightMapRes
struct UHISMBuilderSettings_GetOverriddenLightMapRes_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralParameterModifier.GetContribution
struct UProceduralParameterModifier_GetContribution_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Procedural.ProceduralGenerationContext.GetGenerationVolume
struct UProceduralGenerationContext_GetGenerationVolume_Params
{
public:
	class AVolume*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Procedural.ProceduralGenerationContext.GetGenerationComponent
struct UProceduralGenerationContext_GetGenerationComponent_Params
{
public:
	class UProceduralGenerationComponent*        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Procedural.ProceduralGeneratorContext.OnGenerate
struct UProceduralGeneratorContext_OnGenerate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext
struct UProceduralGeneratorContext_GetOrCreateGeneratorContext_Params
{
public:
	class UProceduralGenerator*                  Generator;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProceduralGeneratorContext*           Context;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Procedural.ProceduralGeneratorContext.GetGeneratedContexts
struct UProceduralGeneratorContext_GetGeneratedContexts_Params
{
public:
	TArray<class UProceduralGeneratorContext*>   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Procedural.ProceduralGeneratorContext.Generate
struct UProceduralGeneratorContext_Generate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Procedural.ProceduralPointCloud.GetPointsByTag
struct UProceduralPointCloud_GetPointsByTag_Params
{
public:
	class FName                                  InTag;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProceduralPointCloudPoint>    ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.SetYawMin
struct UProceduralRotationMapModifier_SetYawMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.SetYawMax
struct UProceduralRotationMapModifier_SetYawMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.SetRollMin
struct UProceduralRotationMapModifier_SetRollMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.SetRollMax
struct UProceduralRotationMapModifier_SetRollMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.SetPitchMin
struct UProceduralRotationMapModifier_SetPitchMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.SetPitchMax
struct UProceduralRotationMapModifier_SetPitchMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.GetYawMin
struct UProceduralRotationMapModifier_GetYawMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.GetYawMax
struct UProceduralRotationMapModifier_GetYawMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.GetRollMin
struct UProceduralRotationMapModifier_GetRollMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.GetRollMax
struct UProceduralRotationMapModifier_GetRollMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.GetPitchMin
struct UProceduralRotationMapModifier_GetPitchMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationMapModifier.GetPitchMax
struct UProceduralRotationMapModifier_GetPitchMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin
struct UProceduralRotationNoiseModifier_SetRandomYawMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax
struct UProceduralRotationNoiseModifier_SetRandomYawMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin
struct UProceduralRotationNoiseModifier_SetRandomRollMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax
struct UProceduralRotationNoiseModifier_SetRandomRollMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin
struct UProceduralRotationNoiseModifier_SetRandomPitchMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax
struct UProceduralRotationNoiseModifier_SetRandomPitchMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin
struct UProceduralRotationNoiseModifier_GetRandomYawMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax
struct UProceduralRotationNoiseModifier_GetRandomYawMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin
struct UProceduralRotationNoiseModifier_GetRandomRollMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax
struct UProceduralRotationNoiseModifier_GetRandomRollMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin
struct UProceduralRotationNoiseModifier_GetRandomPitchMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax
struct UProceduralRotationNoiseModifier_GetRandomPitchMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMin
struct UProceduralScaleMapModifier_SetRemapScaleMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMax
struct UProceduralScaleMapModifier_SetRemapScaleMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMin
struct UProceduralScaleMapModifier_GetRemapScaleMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMax
struct UProceduralScaleMapModifier_GetRemapScaleMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMin
struct UProceduralScaleNoiseModifier_SetScaleMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMax
struct UProceduralScaleNoiseModifier_SetScaleMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMin
struct UProceduralScaleNoiseModifier_GetScaleMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMax
struct UProceduralScaleNoiseModifier_GetScaleMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin
struct UProceduralScatterSettings_SetSourcePointDistanceMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax
struct UProceduralScatterSettings_SetSourcePointDistanceMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin
struct UProceduralScatterSettings_GetSourcePointDistanceMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax
struct UProceduralScatterSettings_GetSourcePointDistanceMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin
struct UProceduralSurfaceHeightMap_SetHeightRangeMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax
struct UProceduralSurfaceHeightMap_SetHeightRangeMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Procedural.ProceduralSurfaceHeightMap.GetValue
struct UProceduralSurfaceHeightMap_GetValue_Params
{
public:
	float                                        InHeight;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin
struct UProceduralSurfaceHeightMap_GetHeightRangeMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax
struct UProceduralSurfaceHeightMap_GetHeightRangeMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin
struct UProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax
struct UProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetValue
struct UProceduralSurfaceSlopeAngleMap_GetValue_Params
{
public:
	float                                        InSlopeAngle;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin
struct UProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax
struct UProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


