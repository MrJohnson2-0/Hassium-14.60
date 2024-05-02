#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Procedural.HISMBuilderSettings
// (None)

class UClass* UHISMBuilderSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HISMBuilderSettings");

	return Clss;
}


// HISMBuilderSettings Procedural.Default__HISMBuilderSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UHISMBuilderSettings* UHISMBuilderSettings::GetDefaultObj()
{
	static class UHISMBuilderSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UHISMBuilderSettings*>(UHISMBuilderSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.HISMBuilderSettings.SetOverriddenLightMapRes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHISMBuilderSettings::SetOverriddenLightMapRes(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HISMBuilderSettings", "SetOverriddenLightMapRes");

	Params::UHISMBuilderSettings_SetOverriddenLightMapRes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.HISMBuilderSettings.GetOverriddenLightMapRes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHISMBuilderSettings::GetOverriddenLightMapRes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HISMBuilderSettings", "GetOverriddenLightMapRes");

	Params::UHISMBuilderSettings_GetOverriddenLightMapRes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Procedural.ProceduralParameterModifier
// (None)

class UClass* UProceduralParameterModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralParameterModifier");

	return Clss;
}


// ProceduralParameterModifier Procedural.Default__ProceduralParameterModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralParameterModifier* UProceduralParameterModifier::GetDefaultObj()
{
	static class UProceduralParameterModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralParameterModifier*>(UProceduralParameterModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralParameterModifier.GetContribution
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralParameterModifier::GetContribution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralParameterModifier", "GetContribution");

	Params::UProceduralParameterModifier_GetContribution_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Procedural.ProceduralContentVariationsWeightsModifier
// (None)

class UClass* UProceduralContentVariationsWeightsModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralContentVariationsWeightsModifier");

	return Clss;
}


// ProceduralContentVariationsWeightsModifier Procedural.Default__ProceduralContentVariationsWeightsModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralContentVariationsWeightsModifier* UProceduralContentVariationsWeightsModifier::GetDefaultObj()
{
	static class UProceduralContentVariationsWeightsModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralContentVariationsWeightsModifier*>(UProceduralContentVariationsWeightsModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralContentVariationsWeightsMapModifier
// (None)

class UClass* UProceduralContentVariationsWeightsMapModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralContentVariationsWeightsMapModifier");

	return Clss;
}


// ProceduralContentVariationsWeightsMapModifier Procedural.Default__ProceduralContentVariationsWeightsMapModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralContentVariationsWeightsMapModifier* UProceduralContentVariationsWeightsMapModifier::GetDefaultObj()
{
	static class UProceduralContentVariationsWeightsMapModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralContentVariationsWeightsMapModifier*>(UProceduralContentVariationsWeightsMapModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralGenerator
// (None)

class UClass* UProceduralGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralGenerator");

	return Clss;
}


// ProceduralGenerator Procedural.Default__ProceduralGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralGenerator* UProceduralGenerator::GetDefaultObj()
{
	static class UProceduralGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralGenerator*>(UProceduralGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralCustomGenerator
// (None)

class UClass* UProceduralCustomGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralCustomGenerator");

	return Clss;
}


// ProceduralCustomGenerator Procedural.Default__ProceduralCustomGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralCustomGenerator* UProceduralCustomGenerator::GetDefaultObj()
{
	static class UProceduralCustomGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralCustomGenerator*>(UProceduralCustomGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralDataMap
// (None)

class UClass* UProceduralDataMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralDataMap");

	return Clss;
}


// ProceduralDataMap Procedural.Default__ProceduralDataMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralDataMap* UProceduralDataMap::GetDefaultObj()
{
	static class UProceduralDataMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralDataMap*>(UProceduralDataMap::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralFloatDataMap
// (None)

class UClass* UProceduralFloatDataMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralFloatDataMap");

	return Clss;
}


// ProceduralFloatDataMap Procedural.Default__ProceduralFloatDataMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralFloatDataMap* UProceduralFloatDataMap::GetDefaultObj()
{
	static class UProceduralFloatDataMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralFloatDataMap*>(UProceduralFloatDataMap::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralVectorDataMap
// (None)

class UClass* UProceduralVectorDataMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralVectorDataMap");

	return Clss;
}


// ProceduralVectorDataMap Procedural.Default__ProceduralVectorDataMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralVectorDataMap* UProceduralVectorDataMap::GetDefaultObj()
{
	static class UProceduralVectorDataMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralVectorDataMap*>(UProceduralVectorDataMap::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralDensityModifier
// (None)

class UClass* UProceduralDensityModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralDensityModifier");

	return Clss;
}


// ProceduralDensityModifier Procedural.Default__ProceduralDensityModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralDensityModifier* UProceduralDensityModifier::GetDefaultObj()
{
	static class UProceduralDensityModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralDensityModifier*>(UProceduralDensityModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralDensityMapModifier
// (None)

class UClass* UProceduralDensityMapModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralDensityMapModifier");

	return Clss;
}


// ProceduralDensityMapModifier Procedural.Default__ProceduralDensityMapModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralDensityMapModifier* UProceduralDensityMapModifier::GetDefaultObj()
{
	static class UProceduralDensityMapModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralDensityMapModifier*>(UProceduralDensityMapModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralGenerationBlockingVolume
// (Actor)

class UClass* AProceduralGenerationBlockingVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralGenerationBlockingVolume");

	return Clss;
}


// ProceduralGenerationBlockingVolume Procedural.Default__ProceduralGenerationBlockingVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AProceduralGenerationBlockingVolume* AProceduralGenerationBlockingVolume::GetDefaultObj()
{
	static class AProceduralGenerationBlockingVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AProceduralGenerationBlockingVolume*>(AProceduralGenerationBlockingVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralGenerationComponent
// (None)

class UClass* UProceduralGenerationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralGenerationComponent");

	return Clss;
}


// ProceduralGenerationComponent Procedural.Default__ProceduralGenerationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralGenerationComponent* UProceduralGenerationComponent::GetDefaultObj()
{
	static class UProceduralGenerationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralGenerationComponent*>(UProceduralGenerationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralGenerationContext
// (None)

class UClass* UProceduralGenerationContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralGenerationContext");

	return Clss;
}


// ProceduralGenerationContext Procedural.Default__ProceduralGenerationContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralGenerationContext* UProceduralGenerationContext::GetDefaultObj()
{
	static class UProceduralGenerationContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralGenerationContext*>(UProceduralGenerationContext::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralGenerationContext.GetGenerationVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AVolume*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AVolume* UProceduralGenerationContext::GetGenerationVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGenerationContext", "GetGenerationVolume");

	Params::UProceduralGenerationContext_GetGenerationVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralGenerationContext.GetGenerationComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UProceduralGenerationComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UProceduralGenerationComponent* UProceduralGenerationContext::GetGenerationComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGenerationContext", "GetGenerationComponent");

	Params::UProceduralGenerationContext_GetGenerationComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Procedural.ProceduralGenerationVolume
// (Actor)

class UClass* AProceduralGenerationVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralGenerationVolume");

	return Clss;
}


// ProceduralGenerationVolume Procedural.Default__ProceduralGenerationVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AProceduralGenerationVolume* AProceduralGenerationVolume::GetDefaultObj()
{
	static class AProceduralGenerationVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AProceduralGenerationVolume*>(AProceduralGenerationVolume::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralGenerationVolume.Generate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AProceduralGenerationVolume::Generate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGenerationVolume", "Generate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralGenerationVolume.ClearGeneratedContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AProceduralGenerationVolume::ClearGeneratedContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGenerationVolume", "ClearGeneratedContent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Procedural.ProceduralGeneratorContext
// (None)

class UClass* UProceduralGeneratorContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralGeneratorContext");

	return Clss;
}


// ProceduralGeneratorContext Procedural.Default__ProceduralGeneratorContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralGeneratorContext* UProceduralGeneratorContext::GetDefaultObj()
{
	static class UProceduralGeneratorContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralGeneratorContext*>(UProceduralGeneratorContext::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralGeneratorContext.OnGenerate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProceduralGeneratorContext::OnGenerate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGeneratorContext", "OnGenerate");

	Params::UProceduralGeneratorContext_OnGenerate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralGeneratorContext.OnDrawVisualization
// (Event, Public, BlueprintEvent, Const)
// Parameters:

void UProceduralGeneratorContext::OnDrawVisualization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGeneratorContext", "OnDrawVisualization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Procedural.ProceduralGeneratorContext.OnClearGeneratedContent
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UProceduralGeneratorContext::OnClearGeneratedContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGeneratorContext", "OnClearGeneratedContent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UProceduralGenerator*        Generator                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProceduralGeneratorContext* Context                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralGeneratorContext::GetOrCreateGeneratorContext(class UProceduralGenerator* Generator, class UProceduralGeneratorContext** Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGeneratorContext", "GetOrCreateGeneratorContext");

	Params::UProceduralGeneratorContext_GetOrCreateGeneratorContext_Params Parms{};

	Parms.Generator = Generator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = Parms.Context;

}


// Function Procedural.ProceduralGeneratorContext.GetGeneratedContexts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UProceduralGeneratorContext*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class UProceduralGeneratorContext*> UProceduralGeneratorContext::GetGeneratedContexts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGeneratorContext", "GetGeneratedContexts");

	Params::UProceduralGeneratorContext_GetGeneratedContexts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralGeneratorContext.Generate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProceduralGeneratorContext::Generate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGeneratorContext", "Generate");

	Params::UProceduralGeneratorContext_Generate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralGeneratorContext.ClearGeneratedContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralGeneratorContext::ClearGeneratedContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralGeneratorContext", "ClearGeneratedContent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Procedural.ProceduralGeneratorStack
// (None)

class UClass* UProceduralGeneratorStack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralGeneratorStack");

	return Clss;
}


// ProceduralGeneratorStack Procedural.Default__ProceduralGeneratorStack
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralGeneratorStack* UProceduralGeneratorStack::GetDefaultObj()
{
	static class UProceduralGeneratorStack* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralGeneratorStack*>(UProceduralGeneratorStack::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralGeneratorStackContext
// (None)

class UClass* UProceduralGeneratorStackContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralGeneratorStackContext");

	return Clss;
}


// ProceduralGeneratorStackContext Procedural.Default__ProceduralGeneratorStackContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralGeneratorStackContext* UProceduralGeneratorStackContext::GetDefaultObj()
{
	static class UProceduralGeneratorStackContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralGeneratorStackContext*>(UProceduralGeneratorStackContext::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralLandscapeLayerMap
// (None)

class UClass* UProceduralLandscapeLayerMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralLandscapeLayerMap");

	return Clss;
}


// ProceduralLandscapeLayerMap Procedural.Default__ProceduralLandscapeLayerMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralLandscapeLayerMap* UProceduralLandscapeLayerMap::GetDefaultObj()
{
	static class UProceduralLandscapeLayerMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralLandscapeLayerMap*>(UProceduralLandscapeLayerMap::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralPointCloud
// (None)

class UClass* UProceduralPointCloud::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralPointCloud");

	return Clss;
}


// ProceduralPointCloud Procedural.Default__ProceduralPointCloud
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralPointCloud* UProceduralPointCloud::GetDefaultObj()
{
	static class UProceduralPointCloud* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralPointCloud*>(UProceduralPointCloud::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralPointCloud.GetPointsByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InTag                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FProceduralPointCloudPoint>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FProceduralPointCloudPoint> UProceduralPointCloud::GetPointsByTag(class FName InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralPointCloud", "GetPointsByTag");

	Params::UProceduralPointCloud_GetPointsByTag_Params Parms{};

	Parms.InTag = InTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralPointCloud.Empty
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralPointCloud::Empty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralPointCloud", "Empty");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Procedural.ProceduralRotationModifier
// (None)

class UClass* UProceduralRotationModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralRotationModifier");

	return Clss;
}


// ProceduralRotationModifier Procedural.Default__ProceduralRotationModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralRotationModifier* UProceduralRotationModifier::GetDefaultObj()
{
	static class UProceduralRotationModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralRotationModifier*>(UProceduralRotationModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralRotationMapModifier
// (None)

class UClass* UProceduralRotationMapModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralRotationMapModifier");

	return Clss;
}


// ProceduralRotationMapModifier Procedural.Default__ProceduralRotationMapModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralRotationMapModifier* UProceduralRotationMapModifier::GetDefaultObj()
{
	static class UProceduralRotationMapModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralRotationMapModifier*>(UProceduralRotationMapModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralRotationMapModifier.SetYawMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetYawMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetYawMin");

	Params::UProceduralRotationMapModifier_SetYawMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationMapModifier.SetYawMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetYawMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetYawMax");

	Params::UProceduralRotationMapModifier_SetYawMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationMapModifier.SetRollMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetRollMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetRollMin");

	Params::UProceduralRotationMapModifier_SetRollMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationMapModifier.SetRollMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetRollMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetRollMax");

	Params::UProceduralRotationMapModifier_SetRollMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationMapModifier.SetPitchMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetPitchMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetPitchMin");

	Params::UProceduralRotationMapModifier_SetPitchMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationMapModifier.SetPitchMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationMapModifier::SetPitchMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "SetPitchMax");

	Params::UProceduralRotationMapModifier_SetPitchMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationMapModifier.GetYawMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetYawMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetYawMin");

	Params::UProceduralRotationMapModifier_GetYawMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationMapModifier.GetYawMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetYawMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetYawMax");

	Params::UProceduralRotationMapModifier_GetYawMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationMapModifier.GetRollMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetRollMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetRollMin");

	Params::UProceduralRotationMapModifier_GetRollMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationMapModifier.GetRollMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetRollMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetRollMax");

	Params::UProceduralRotationMapModifier_GetRollMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationMapModifier.GetPitchMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetPitchMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetPitchMin");

	Params::UProceduralRotationMapModifier_GetPitchMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationMapModifier.GetPitchMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationMapModifier::GetPitchMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationMapModifier", "GetPitchMax");

	Params::UProceduralRotationMapModifier_GetPitchMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Procedural.ProceduralRotationNoiseModifier
// (None)

class UClass* UProceduralRotationNoiseModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralRotationNoiseModifier");

	return Clss;
}


// ProceduralRotationNoiseModifier Procedural.Default__ProceduralRotationNoiseModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralRotationNoiseModifier* UProceduralRotationNoiseModifier::GetDefaultObj()
{
	static class UProceduralRotationNoiseModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralRotationNoiseModifier*>(UProceduralRotationNoiseModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomYawMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomYawMin");

	Params::UProceduralRotationNoiseModifier_SetRandomYawMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomYawMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomYawMax");

	Params::UProceduralRotationNoiseModifier_SetRandomYawMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomRollMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomRollMin");

	Params::UProceduralRotationNoiseModifier_SetRandomRollMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomRollMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomRollMax");

	Params::UProceduralRotationNoiseModifier_SetRandomRollMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomPitchMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomPitchMin");

	Params::UProceduralRotationNoiseModifier_SetRandomPitchMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralRotationNoiseModifier::SetRandomPitchMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "SetRandomPitchMax");

	Params::UProceduralRotationNoiseModifier_SetRandomPitchMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomYawMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomYawMin");

	Params::UProceduralRotationNoiseModifier_GetRandomYawMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomYawMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomYawMax");

	Params::UProceduralRotationNoiseModifier_GetRandomYawMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomRollMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomRollMin");

	Params::UProceduralRotationNoiseModifier_GetRandomRollMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomRollMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomRollMax");

	Params::UProceduralRotationNoiseModifier_GetRandomRollMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomPitchMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomPitchMin");

	Params::UProceduralRotationNoiseModifier_GetRandomPitchMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralRotationNoiseModifier::GetRandomPitchMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralRotationNoiseModifier", "GetRandomPitchMax");

	Params::UProceduralRotationNoiseModifier_GetRandomPitchMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Procedural.ProceduralScaleModifier
// (None)

class UClass* UProceduralScaleModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScaleModifier");

	return Clss;
}


// ProceduralScaleModifier Procedural.Default__ProceduralScaleModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScaleModifier* UProceduralScaleModifier::GetDefaultObj()
{
	static class UProceduralScaleModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScaleModifier*>(UProceduralScaleModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralScaleMapModifier
// (None)

class UClass* UProceduralScaleMapModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScaleMapModifier");

	return Clss;
}


// ProceduralScaleMapModifier Procedural.Default__ProceduralScaleMapModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScaleMapModifier* UProceduralScaleMapModifier::GetDefaultObj()
{
	static class UProceduralScaleMapModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScaleMapModifier*>(UProceduralScaleMapModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScaleMapModifier::SetRemapScaleMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScaleMapModifier", "SetRemapScaleMin");

	Params::UProceduralScaleMapModifier_SetRemapScaleMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScaleMapModifier::SetRemapScaleMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScaleMapModifier", "SetRemapScaleMax");

	Params::UProceduralScaleMapModifier_SetRemapScaleMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScaleMapModifier::GetRemapScaleMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScaleMapModifier", "GetRemapScaleMin");

	Params::UProceduralScaleMapModifier_GetRemapScaleMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScaleMapModifier::GetRemapScaleMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScaleMapModifier", "GetRemapScaleMax");

	Params::UProceduralScaleMapModifier_GetRemapScaleMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Procedural.ProceduralScaleNoiseModifier
// (None)

class UClass* UProceduralScaleNoiseModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScaleNoiseModifier");

	return Clss;
}


// ProceduralScaleNoiseModifier Procedural.Default__ProceduralScaleNoiseModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScaleNoiseModifier* UProceduralScaleNoiseModifier::GetDefaultObj()
{
	static class UProceduralScaleNoiseModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScaleNoiseModifier*>(UProceduralScaleNoiseModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScaleNoiseModifier::SetScaleMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScaleNoiseModifier", "SetScaleMin");

	Params::UProceduralScaleNoiseModifier_SetScaleMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralScaleNoiseModifier.SetScaleMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScaleNoiseModifier::SetScaleMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScaleNoiseModifier", "SetScaleMax");

	Params::UProceduralScaleNoiseModifier_SetScaleMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScaleNoiseModifier::GetScaleMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScaleNoiseModifier", "GetScaleMin");

	Params::UProceduralScaleNoiseModifier_GetScaleMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralScaleNoiseModifier.GetScaleMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScaleNoiseModifier::GetScaleMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScaleNoiseModifier", "GetScaleMax");

	Params::UProceduralScaleNoiseModifier_GetScaleMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Procedural.ProceduralScatterContentVariation
// (None)

class UClass* UProceduralScatterContentVariation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScatterContentVariation");

	return Clss;
}


// ProceduralScatterContentVariation Procedural.Default__ProceduralScatterContentVariation
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScatterContentVariation* UProceduralScatterContentVariation::GetDefaultObj()
{
	static class UProceduralScatterContentVariation* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScatterContentVariation*>(UProceduralScatterContentVariation::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralScatterActorContentVariation
// (None)

class UClass* UProceduralScatterActorContentVariation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScatterActorContentVariation");

	return Clss;
}


// ProceduralScatterActorContentVariation Procedural.Default__ProceduralScatterActorContentVariation
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScatterActorContentVariation* UProceduralScatterActorContentVariation::GetDefaultObj()
{
	static class UProceduralScatterActorContentVariation* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScatterActorContentVariation*>(UProceduralScatterActorContentVariation::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralScatterContentSettings
// (None)

class UClass* UProceduralScatterContentSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScatterContentSettings");

	return Clss;
}


// ProceduralScatterContentSettings Procedural.Default__ProceduralScatterContentSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScatterContentSettings* UProceduralScatterContentSettings::GetDefaultObj()
{
	static class UProceduralScatterContentSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScatterContentSettings*>(UProceduralScatterContentSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralScatterActorContentSettings
// (None)

class UClass* UProceduralScatterActorContentSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScatterActorContentSettings");

	return Clss;
}


// ProceduralScatterActorContentSettings Procedural.Default__ProceduralScatterActorContentSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScatterActorContentSettings* UProceduralScatterActorContentSettings::GetDefaultObj()
{
	static class UProceduralScatterActorContentSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScatterActorContentSettings*>(UProceduralScatterActorContentSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralScatterGenerator
// (None)

class UClass* UProceduralScatterGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScatterGenerator");

	return Clss;
}


// ProceduralScatterGenerator Procedural.Default__ProceduralScatterGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScatterGenerator* UProceduralScatterGenerator::GetDefaultObj()
{
	static class UProceduralScatterGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScatterGenerator*>(UProceduralScatterGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralScatterGeneratorContext
// (None)

class UClass* UProceduralScatterGeneratorContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScatterGeneratorContext");

	return Clss;
}


// ProceduralScatterGeneratorContext Procedural.Default__ProceduralScatterGeneratorContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScatterGeneratorContext* UProceduralScatterGeneratorContext::GetDefaultObj()
{
	static class UProceduralScatterGeneratorContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScatterGeneratorContext*>(UProceduralScatterGeneratorContext::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralScatterGeneratorTile
// (None)

class UClass* UProceduralScatterGeneratorTile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScatterGeneratorTile");

	return Clss;
}


// ProceduralScatterGeneratorTile Procedural.Default__ProceduralScatterGeneratorTile
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScatterGeneratorTile* UProceduralScatterGeneratorTile::GetDefaultObj()
{
	static class UProceduralScatterGeneratorTile* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScatterGeneratorTile*>(UProceduralScatterGeneratorTile::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralScatterSettings
// (None)

class UClass* UProceduralScatterSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScatterSettings");

	return Clss;
}


// ProceduralScatterSettings Procedural.Default__ProceduralScatterSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScatterSettings* UProceduralScatterSettings::GetDefaultObj()
{
	static class UProceduralScatterSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScatterSettings*>(UProceduralScatterSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScatterSettings::SetSourcePointDistanceMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScatterSettings", "SetSourcePointDistanceMin");

	Params::UProceduralScatterSettings_SetSourcePointDistanceMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralScatterSettings::SetSourcePointDistanceMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScatterSettings", "SetSourcePointDistanceMax");

	Params::UProceduralScatterSettings_SetSourcePointDistanceMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScatterSettings::GetSourcePointDistanceMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScatterSettings", "GetSourcePointDistanceMin");

	Params::UProceduralScatterSettings_GetSourcePointDistanceMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralScatterSettings::GetSourcePointDistanceMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralScatterSettings", "GetSourcePointDistanceMax");

	Params::UProceduralScatterSettings_GetSourcePointDistanceMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Procedural.ProceduralScatterStaticMeshContentVariation
// (None)

class UClass* UProceduralScatterStaticMeshContentVariation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScatterStaticMeshContentVariation");

	return Clss;
}


// ProceduralScatterStaticMeshContentVariation Procedural.Default__ProceduralScatterStaticMeshContentVariation
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScatterStaticMeshContentVariation* UProceduralScatterStaticMeshContentVariation::GetDefaultObj()
{
	static class UProceduralScatterStaticMeshContentVariation* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScatterStaticMeshContentVariation*>(UProceduralScatterStaticMeshContentVariation::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralScatterStaticMeshContentSettings
// (None)

class UClass* UProceduralScatterStaticMeshContentSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralScatterStaticMeshContentSettings");

	return Clss;
}


// ProceduralScatterStaticMeshContentSettings Procedural.Default__ProceduralScatterStaticMeshContentSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralScatterStaticMeshContentSettings* UProceduralScatterStaticMeshContentSettings::GetDefaultObj()
{
	static class UProceduralScatterStaticMeshContentSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralScatterStaticMeshContentSettings*>(UProceduralScatterStaticMeshContentSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralSurfaceHeightMap
// (None)

class UClass* UProceduralSurfaceHeightMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralSurfaceHeightMap");

	return Clss;
}


// ProceduralSurfaceHeightMap Procedural.Default__ProceduralSurfaceHeightMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralSurfaceHeightMap* UProceduralSurfaceHeightMap::GetDefaultObj()
{
	static class UProceduralSurfaceHeightMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralSurfaceHeightMap*>(UProceduralSurfaceHeightMap::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralSurfaceHeightMap::SetHeightRangeMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralSurfaceHeightMap", "SetHeightRangeMin");

	Params::UProceduralSurfaceHeightMap_SetHeightRangeMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralSurfaceHeightMap::SetHeightRangeMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralSurfaceHeightMap", "SetHeightRangeMax");

	Params::UProceduralSurfaceHeightMap_SetHeightRangeMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralSurfaceHeightMap.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InHeight                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceHeightMap::GetValue(float InHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralSurfaceHeightMap", "GetValue");

	Params::UProceduralSurfaceHeightMap_GetValue_Params Parms{};

	Parms.InHeight = InHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceHeightMap::GetHeightRangeMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralSurfaceHeightMap", "GetHeightRangeMin");

	Params::UProceduralSurfaceHeightMap_GetHeightRangeMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceHeightMap::GetHeightRangeMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralSurfaceHeightMap", "GetHeightRangeMax");

	Params::UProceduralSurfaceHeightMap_GetHeightRangeMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Procedural.ProceduralSurfaceSlopeAngleMap
// (None)

class UClass* UProceduralSurfaceSlopeAngleMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralSurfaceSlopeAngleMap");

	return Clss;
}


// ProceduralSurfaceSlopeAngleMap Procedural.Default__ProceduralSurfaceSlopeAngleMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralSurfaceSlopeAngleMap* UProceduralSurfaceSlopeAngleMap::GetDefaultObj()
{
	static class UProceduralSurfaceSlopeAngleMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralSurfaceSlopeAngleMap*>(UProceduralSurfaceSlopeAngleMap::StaticClass()->DefaultObject);

	return Default;
}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralSurfaceSlopeAngleMap::SetSlopeAngleRangeMin(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "SetSlopeAngleRangeMin");

	Params::UProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMin_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralSurfaceSlopeAngleMap::SetSlopeAngleRangeMax(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "SetSlopeAngleRangeMax");

	Params::UProceduralSurfaceSlopeAngleMap_SetSlopeAngleRangeMax_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSlopeAngle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceSlopeAngleMap::GetValue(float InSlopeAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "GetValue");

	Params::UProceduralSurfaceSlopeAngleMap_GetValue_Params Parms{};

	Parms.InSlopeAngle = InSlopeAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceSlopeAngleMap::GetSlopeAngleRangeMin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "GetSlopeAngleRangeMin");

	Params::UProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UProceduralSurfaceSlopeAngleMap::GetSlopeAngleRangeMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralSurfaceSlopeAngleMap", "GetSlopeAngleRangeMax");

	Params::UProceduralSurfaceSlopeAngleMap_GetSlopeAngleRangeMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Procedural.ProceduralTextureFloatMap
// (None)

class UClass* UProceduralTextureFloatMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralTextureFloatMap");

	return Clss;
}


// ProceduralTextureFloatMap Procedural.Default__ProceduralTextureFloatMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralTextureFloatMap* UProceduralTextureFloatMap::GetDefaultObj()
{
	static class UProceduralTextureFloatMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralTextureFloatMap*>(UProceduralTextureFloatMap::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralTextureVectorMap
// (None)

class UClass* UProceduralTextureVectorMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralTextureVectorMap");

	return Clss;
}


// ProceduralTextureVectorMap Procedural.Default__ProceduralTextureVectorMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralTextureVectorMap* UProceduralTextureVectorMap::GetDefaultObj()
{
	static class UProceduralTextureVectorMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralTextureVectorMap*>(UProceduralTextureVectorMap::StaticClass()->DefaultObject);

	return Default;
}


// Class Procedural.ProceduralVertexColorMap
// (None)

class UClass* UProceduralVertexColorMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralVertexColorMap");

	return Clss;
}


// ProceduralVertexColorMap Procedural.Default__ProceduralVertexColorMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UProceduralVertexColorMap* UProceduralVertexColorMap::GetDefaultObj()
{
	static class UProceduralVertexColorMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralVertexColorMap*>(UProceduralVertexColorMap::StaticClass()->DefaultObject);

	return Default;
}

}


