#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// UserDefinedStruct TimeSynth_TrackMixState.TimeSynth_TrackMixState
struct FTimeSynth_TrackMixState
{
public:
	class FName                                  MixState_29_DE643ACB4D24E56B4BD5BEB15784E04D;      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimeSynth_VolumeGroupState>   VolumeGroupStates_3_6471FE684CEE53024935A3BF6175EB13; // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Enabled_14_D6C017694F7873486AE2D2A6AD3B1839;       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7802[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeTime_38_90A9CE1C4D73A02B7CC1AE988D7CE73A;      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxVolumeDb_32_894FD1F0404801C1B358F1853CF2D9F2;   // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentVolumeNormalized_37_7080ED634324AB286742248CFA169B6A; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


