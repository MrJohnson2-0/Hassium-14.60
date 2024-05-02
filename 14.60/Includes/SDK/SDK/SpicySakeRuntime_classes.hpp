#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x118 - 0x118)
// Class SpicySakeRuntime.FortSpicySakeComponent_Telemetry
class UFortSpicySakeComponent_Telemetry : public UFortAIComponent_Telemetry
{
public:

	static class UClass* StaticClass();
	static class UFortSpicySakeComponent_Telemetry* GetDefaultObj();

};

// 0x40 (0x800 - 0x7C0)
// Class SpicySakeRuntime.FortSpicySakeGameplayCueNotifyLoop_Alive
class AFortSpicySakeGameplayCueNotifyLoop_Alive : public AFortGameplayCueNotify_Loop
{
public:
	class UFXSystemComponent*                    WaterFX_Native;                                    // 0x7C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFXSystemComponent*                    LandFX_Native;                                     // 0x7C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLayeredAudioComponent*            FortLayerAudio_Native;                             // 0x7D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortAIPawn*                           TargetAIPawn_Native;                               // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bComputeWaterDepth;                                // 0x7E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2415[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TetheredVolumeMultiplier;                          // 0x7E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SoundSurfaceTypeCount;                             // 0x7E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VelocityClampingMinimum;                           // 0x7EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VelocityClampingMaximum;                           // 0x7F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2416[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFortSpicySakeGameplayCueNotifyLoop_Alive* GetDefaultObj();

};

// 0x20 (0x310 - 0x2F0)
// Class SpicySakeRuntime.FortSpicySakeOccupantAnimInstanceLayer
class UFortSpicySakeOccupantAnimInstanceLayer : public UFortBaseLayerAnimInstance
{
public:
	float                                        GroundIdleThreshold;                               // 0x2F0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GroundIdleLowThreshold;                            // 0x2F4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocalVelocityYawAngleTurnResetThreshold;           // 0x2F8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocalVelocityYawAngleTurnTransitionThreshold;      // 0x2FC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocalVelocityYawAngle;                             // 0x300(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PawnSpeed2D;                                       // 0x304(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PawnVelocityZ;                                     // 0x308(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFemale : 1;                                     // Mask: 0x1, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsOnGround : 1;                                   // Mask: 0x2, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsOnWater : 1;                                    // Mask: 0x4, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLandingPredicted : 1;                             // Mask: 0x8, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_NewFallAditive_NewFallLandAdditive : 1; // Mask: 0x10, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransitionNewJumpLoopAdditiveToNewFallAdditive : 1; // Mask: 0x20, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldApplyIdleAdditive : 1;                      // Mask: 0x40, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsTargeting : 1;                                  // Mask: 0x80, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPlayerCloseToShark : 1;                         // Mask: 0x1, PropSize: 0x10x30D(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsBoosting : 1;                                   // Mask: 0x2, PropSize: 0x10x30D(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanTurnLeft : 1;                                  // Mask: 0x4, PropSize: 0x10x30D(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanTurnRight : 1;                                 // Mask: 0x8, PropSize: 0x10x30D(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_RideLoop_TurnLeft : 1;                 // Mask: 0x10, PropSize: 0x10x30D(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_RideLoop_TurnRight : 1;                // Mask: 0x20, PropSize: 0x10x30D(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsReloading : 1;                                  // Mask: 0x40, PropSize: 0x10x30D(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPlayingMeleeAnim : 1;                           // Mask: 0x80, PropSize: 0x10x30D(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPlayingEmote : 1;                               // Mask: 0x1, PropSize: 0x10x30E(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldPlayOnGroundIdle : 1;                       // Mask: 0x2, PropSize: 0x10x30E(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldPlayOnGroundIdleLow : 1;                    // Mask: 0x4, PropSize: 0x10x30E(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsJumping : 1;                                    // Mask: 0x8, PropSize: 0x10x30E(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanUseTargettingStateMachine : 1;                 // Mask: 0x10, PropSize: 0x10x30E(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_SharRideLoop_To_JumpUp : 1;            // Mask: 0x20, PropSize: 0x10x30E(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241C[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSpicySakeOccupantAnimInstanceLayer* GetDefaultObj();

};

// 0x28 (0x310 - 0x2E8)
// Class SpicySakeRuntime.FortSpicySakeVehicleAnimInstance
class UFortSpicySakeVehicleAnimInstance : public UFortBaseAnimInstance
{
public:
	struct FRotator                              OnGroundSlopeRotOffset;                            // 0x2E8(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LocalVelocityYawAngle;                             // 0x2F4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForwardSpeed;                                      // 0x2F8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpSpeed;                                           // 0x2FC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothJumpPitch;                                   // 0x300(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothJumpPitchDeltaRate;                          // 0x304(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentBoostRateScale;                             // 0x308(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsJumping : 1;                                    // Mask: 0x1, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsSurfaceSwimming : 1;                            // Mask: 0x2, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsOnGround : 1;                                   // Mask: 0x4, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFalling : 1;                                    // Mask: 0x8, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCharging : 1;                                   // Mask: 0x10, PropSize: 0x10x30C(0x1)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnGroundNotMoving : 1;                            // Mask: 0x20, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLanded : 1;                                       // Mask: 0x40, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsBoosting : 1;                                   // Mask: 0x80, PropSize: 0x10x30C(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStartBoosting : 1;                                // Mask: 0x1, PropSize: 0x10x30D(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_Idle_To_Boost : 1;                     // Mask: 0x2, PropSize: 0x10x30D(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransition_Boost_To_Idle : 1;                     // Mask: 0x4, PropSize: 0x10x30D(0x1)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2420[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSpicySakeVehicleAnimInstance* GetDefaultObj();

};

}


