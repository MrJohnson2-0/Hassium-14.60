#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass PetAnimLayerInterface.PetAnimLayerInterface_C
class IPetAnimLayerInterface_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class IPetAnimLayerInterface_C* GetDefaultObj();

	void PetSkeletalControlLayer(const struct FPoseLink& Pose, float LookAtOverrideInput, const struct FVector& LookAtTargetLocationInput, float LegIKAlphaOverride, float HandIKAlphaOverride, struct FPoseLink* PetSkeletalControlLayer);
	void PetFullOverrideLayer(const struct FPoseLink& InPose, struct FPoseLink* PetFullOverrideLayer);
};

}


