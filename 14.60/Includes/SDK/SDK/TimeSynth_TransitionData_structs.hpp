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

// 0x18 (0x18 - 0x0)
// UserDefinedStruct TimeSynth_TransitionData.TimeSynth_TransitionData
struct FTimeSynth_TransitionData
{
public:
	float                                        BPM_13_FD0A16B24847068A1D4A34AF3472D233;           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7801[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTimeSynth_TrackStemData>      Clips_9_2C4CF6B242755DCB3A4AEDB9FF27F417;          // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


