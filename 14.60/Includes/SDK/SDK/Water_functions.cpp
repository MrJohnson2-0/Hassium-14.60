#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Water.BuoyancyComponent
// (None)

class UClass* UBuoyancyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuoyancyComponent");

	return Clss;
}


// BuoyancyComponent Water.Default__BuoyancyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBuoyancyComponent* UBuoyancyComponent::GetDefaultObj()
{
	static class UBuoyancyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuoyancyComponent*>(UBuoyancyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.BuoyancyComponent.OnPontoonExitedWater
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSphericalPontoon           Pontoon                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBuoyancyComponent::OnPontoonExitedWater(struct FSphericalPontoon& Pontoon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyComponent", "OnPontoonExitedWater");

	Params::UBuoyancyComponent_OnPontoonExitedWater_Params Parms{};

	Parms.Pontoon = Pontoon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.BuoyancyComponent.OnPontoonEnteredWater
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSphericalPontoon           Pontoon                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBuoyancyComponent::OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyComponent", "OnPontoonEnteredWater");

	Params::UBuoyancyComponent_OnPontoonEnteredWater_Params Parms{};

	Parms.Pontoon = Pontoon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.BuoyancyComponent.IsInWaterBody
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBuoyancyComponent::IsInWaterBody()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyComponent", "IsInWaterBody");

	Params::UBuoyancyComponent_IsInWaterBody_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     OutWaterPlaneLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterPlaneNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterSurfacePosition                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutWaterDepth                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutWaterBodyIdx                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutWaterVelocity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBuoyancyComponent::GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32* OutWaterBodyIdx, struct FVector* OutWaterVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuoyancyComponent", "GetLastWaterSurfaceInfo");

	Params::UBuoyancyComponent_GetLastWaterSurfaceInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWaterPlaneLocation != nullptr)
		*OutWaterPlaneLocation = std::move(Parms.OutWaterPlaneLocation);

	if (OutWaterPlaneNormal != nullptr)
		*OutWaterPlaneNormal = std::move(Parms.OutWaterPlaneNormal);

	if (OutWaterSurfacePosition != nullptr)
		*OutWaterSurfacePosition = std::move(Parms.OutWaterSurfacePosition);

	if (OutWaterDepth != nullptr)
		*OutWaterDepth = Parms.OutWaterDepth;

	if (OutWaterBodyIdx != nullptr)
		*OutWaterBodyIdx = Parms.OutWaterBodyIdx;

	if (OutWaterVelocity != nullptr)
		*OutWaterVelocity = std::move(Parms.OutWaterVelocity);

}


// Class Water.EnvQueryTest_InsideWaterBody
// (None)

class UClass* UEnvQueryTest_InsideWaterBody::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_InsideWaterBody");

	return Clss;
}


// EnvQueryTest_InsideWaterBody Water.Default__EnvQueryTest_InsideWaterBody
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_InsideWaterBody* UEnvQueryTest_InsideWaterBody::GetDefaultObj()
{
	static class UEnvQueryTest_InsideWaterBody* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_InsideWaterBody*>(UEnvQueryTest_InsideWaterBody::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.LakeCollisionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULakeCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LakeCollisionComponent");

	return Clss;
}


// LakeCollisionComponent Water.Default__LakeCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULakeCollisionComponent* ULakeCollisionComponent::GetDefaultObj()
{
	static class ULakeCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULakeCollisionComponent*>(ULakeCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.NiagaraDataInterfaceWater
// (None)

class UClass* UNiagaraDataInterfaceWater::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceWater");

	return Clss;
}


// NiagaraDataInterfaceWater Water.Default__NiagaraDataInterfaceWater
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceWater* UNiagaraDataInterfaceWater::GetDefaultObj()
{
	static class UNiagaraDataInterfaceWater* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceWater*>(UNiagaraDataInterfaceWater::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.NiagaraWaterFunctionLibrary
// (None)

class UClass* UNiagaraWaterFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraWaterFunctionLibrary");

	return Clss;
}


// NiagaraWaterFunctionLibrary Water.Default__NiagaraWaterFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraWaterFunctionLibrary* UNiagaraWaterFunctionLibrary::GetDefaultObj()
{
	static class UNiagaraWaterFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraWaterFunctionLibrary*>(UNiagaraWaterFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AWaterBody*                  WaterBody                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraWaterFunctionLibrary::SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraWaterFunctionLibrary", "SetWaterBody");

	Params::UNiagaraWaterFunctionLibrary_SetWaterBody_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.WaterBody = WaterBody;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Water.OceanCollisionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UOceanCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OceanCollisionComponent");

	return Clss;
}


// OceanCollisionComponent Water.Default__OceanCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOceanCollisionComponent* UOceanCollisionComponent::GetDefaultObj()
{
	static class UOceanCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOceanCollisionComponent*>(UOceanCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.OceanBoxCollisionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UOceanBoxCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OceanBoxCollisionComponent");

	return Clss;
}


// OceanBoxCollisionComponent Water.Default__OceanBoxCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOceanBoxCollisionComponent* UOceanBoxCollisionComponent::GetDefaultObj()
{
	static class UOceanBoxCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOceanBoxCollisionComponent*>(UOceanBoxCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyGenerator
// (None)

class UClass* UWaterBodyGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyGenerator");

	return Clss;
}


// WaterBodyGenerator Water.Default__WaterBodyGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterBodyGenerator* UWaterBodyGenerator::GetDefaultObj()
{
	static class UWaterBodyGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterBodyGenerator*>(UWaterBodyGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.RiverGenerator
// (None)

class UClass* URiverGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RiverGenerator");

	return Clss;
}


// RiverGenerator Water.Default__RiverGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class URiverGenerator* URiverGenerator::GetDefaultObj()
{
	static class URiverGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<URiverGenerator*>(URiverGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.LakeGenerator
// (None)

class UClass* ULakeGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LakeGenerator");

	return Clss;
}


// LakeGenerator Water.Default__LakeGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class ULakeGenerator* ULakeGenerator::GetDefaultObj()
{
	static class ULakeGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<ULakeGenerator*>(ULakeGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.OceanGenerator
// (None)

class UClass* UOceanGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OceanGenerator");

	return Clss;
}


// OceanGenerator Water.Default__OceanGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UOceanGenerator* UOceanGenerator::GetDefaultObj()
{
	static class UOceanGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UOceanGenerator*>(UOceanGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.CustomMeshGenerator
// (None)

class UClass* UCustomMeshGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomMeshGenerator");

	return Clss;
}


// CustomMeshGenerator Water.Default__CustomMeshGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomMeshGenerator* UCustomMeshGenerator::GetDefaultObj()
{
	static class UCustomMeshGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomMeshGenerator*>(UCustomMeshGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBody
// (Actor)

class UClass* AWaterBody::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBody");

	return Clss;
}


// WaterBody Water.Default__WaterBody
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBody* AWaterBody::GetDefaultObj()
{
	static class AWaterBody* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBody*>(AWaterBody::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.WaterBody.OnWaterBodyFinishedUpdating
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWaterBody::OnWaterBodyFinishedUpdating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "OnWaterBodyFinishedUpdating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Water.WaterBody.OnWaterBodyChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShapeOrPositionChanged                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWeightmapSettingsChanged                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "OnWaterBodyChanged");

	Params::AWaterBody_OnWaterBodyChanged_Params Parms{};

	Parms.bShapeOrPositionChanged = bShapeOrPositionChanged;
	Parms.bWeightmapSettingsChanged = bWeightmapSettingsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.WaterBody.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterSplineComponent* AWaterBody::GetWaterSpline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetWaterSpline");

	Params::AWaterBody_GetWaterSpline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterMeshComponents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UStaticMeshComponent*>ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class UStaticMeshComponent*> AWaterBody::GetWaterMeshComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetWaterMeshComponents");

	Params::AWaterBody_GetWaterMeshComponents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetWaterMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetWaterMaterialInstance");

	Params::AWaterBody_GetWaterMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetUnderwaterPostProcessMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetUnderwaterPostProcessMaterialInstance");

	Params::AWaterBody_GetUnderwaterPostProcessMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetRiverToOceanTransitionMaterialInstance");

	Params::AWaterBody_GetRiverToOceanTransitionMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetRiverToLakeTransitionMaterialInstance");

	Params::AWaterBody_GetRiverToLakeTransitionMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetIslands
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyIsland*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class AWaterBodyIsland*> AWaterBody::GetIslands()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetIslands");

	Params::AWaterBody_GetIslands_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterBody.GetExclusionVolumes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AWaterBodyExclusionVolume*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBody", "GetExclusionVolumes");

	Params::AWaterBody_GetExclusionVolumes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Water.WaterBodyExclusionVolume
// (Actor)

class UClass* AWaterBodyExclusionVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyExclusionVolume");

	return Clss;
}


// WaterBodyExclusionVolume Water.Default__WaterBodyExclusionVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBodyExclusionVolume* AWaterBodyExclusionVolume::GetDefaultObj()
{
	static class AWaterBodyExclusionVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBodyExclusionVolume*>(AWaterBodyExclusionVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterBodyIsland
// (Actor)

class UClass* AWaterBodyIsland::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyIsland");

	return Clss;
}


// WaterBodyIsland Water.Default__WaterBodyIsland
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBodyIsland* AWaterBodyIsland::GetDefaultObj()
{
	static class AWaterBodyIsland* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBodyIsland*>(AWaterBodyIsland::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.WaterBodyIsland.GetWaterSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWaterSplineComponent*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterBodyIsland", "GetWaterSpline");

	Params::AWaterBodyIsland_GetWaterSpline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Water.WaterBodyProxy
// (Actor)

class UClass* AWaterBodyProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterBodyProxy");

	return Clss;
}


// WaterBodyProxy Water.Default__WaterBodyProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterBodyProxy* AWaterBodyProxy::GetDefaultObj()
{
	static class AWaterBodyProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterBodyProxy*>(AWaterBodyProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterMeshActor
// (Actor)

class UClass* AWaterMeshActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterMeshActor");

	return Clss;
}


// WaterMeshActor Water.Default__WaterMeshActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AWaterMeshActor* AWaterMeshActor::GetDefaultObj()
{
	static class AWaterMeshActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterMeshActor*>(AWaterMeshActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWaterMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterMeshComponent");

	return Clss;
}


// WaterMeshComponent Water.Default__WaterMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterMeshComponent* UWaterMeshComponent::GetDefaultObj()
{
	static class UWaterMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterMeshComponent*>(UWaterMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.WaterMeshComponent.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterMeshComponent::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterMeshComponent", "IsEnabled");

	Params::UWaterMeshComponent_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Water.WaterRuntimeSettings
// (None)

class UClass* UWaterRuntimeSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterRuntimeSettings");

	return Clss;
}


// WaterRuntimeSettings Water.Default__WaterRuntimeSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterRuntimeSettings* UWaterRuntimeSettings::GetDefaultObj()
{
	static class UWaterRuntimeSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterRuntimeSettings*>(UWaterRuntimeSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterSplineComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWaterSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterSplineComponent");

	return Clss;
}


// WaterSplineComponent Water.Default__WaterSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterSplineComponent* UWaterSplineComponent::GetDefaultObj()
{
	static class UWaterSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterSplineComponent*>(UWaterSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterSplineMetadata
// (None)

class UClass* UWaterSplineMetadata::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterSplineMetadata");

	return Clss;
}


// WaterSplineMetadata Water.Default__WaterSplineMetadata
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterSplineMetadata* UWaterSplineMetadata::GetDefaultObj()
{
	static class UWaterSplineMetadata* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterSplineMetadata*>(UWaterSplineMetadata::StaticClass()->DefaultObject);

	return Default;
}


// Class Water.WaterSubsystem
// (None)

class UClass* UWaterSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterSubsystem");

	return Clss;
}


// WaterSubsystem Water.Default__WaterSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UWaterSubsystem* UWaterSubsystem::GetDefaultObj()
{
	static class UWaterSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterSubsystem*>(UWaterSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Water.WaterSubsystem.SetOceanFloodHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFloodHeight                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "SetOceanFloodHeight");

	Params::UWaterSubsystem_SetOceanFloodHeight_Params Parms{};

	Parms.InFloodHeight = InFloodHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.WaterSubsystem.PrintToWaterLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWarning                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWaterSubsystem::PrintToWaterLog(const class FString& Message, bool bWarning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "PrintToWaterLog");

	Params::UWaterSubsystem_PrintToWaterLog_Params Parms{};

	Parms.Message = Message;
	Parms.bWarning = bWarning;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Water.WaterSubsystem.IsWaterRenderingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsWaterRenderingEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "IsWaterRenderingEnabled");

	Params::UWaterSubsystem_IsWaterRenderingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsUnderwaterPostProcessEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "IsUnderwaterPostProcessEnabled");

	Params::UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWaterSubsystem::IsShallowWaterSimulationEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "IsShallowWaterSimulationEnabled");

	Params::UWaterSubsystem_IsShallowWaterSimulationEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetSmoothedWorldTimeSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetSmoothedWorldTimeSeconds");

	Params::UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterSimulationRenderTargetSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterSimulationRenderTargetSize");

	Params::UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterMaxImpulseForces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterMaxImpulseForces");

	Params::UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWaterSubsystem::GetShallowWaterMaxDynamicForces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetShallowWaterMaxDynamicForces");

	Params::UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetOceanTotalHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanTotalHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetOceanTotalHeight");

	Params::UWaterSubsystem_GetOceanTotalHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetOceanFloodHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanFloodHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetOceanFloodHeight");

	Params::UWaterSubsystem_GetOceanFloodHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetOceanBaseHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetOceanBaseHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetOceanBaseHeight");

	Params::UWaterSubsystem_GetOceanBaseHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Water.WaterSubsystem.GetCameraUnderwaterDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWaterSubsystem::GetCameraUnderwaterDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterSubsystem", "GetCameraUnderwaterDepth");

	Params::UWaterSubsystem_GetCameraUnderwaterDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


