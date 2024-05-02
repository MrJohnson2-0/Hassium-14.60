#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xD10 - 0xD01)
// BlueprintGeneratedClass B_HopFlopper_Weap_Athena.B_HopFlopper_Weap_Athena_C
class AB_HopFlopper_Weap_Athena_C : public AB_UtilityItem_Generic_Athena_C
{
public:
	uint8                                        Pad_6450[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              P_Flopper_Catch_Drips;                             // 0xD08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_HopFlopper_Weap_Athena_C* GetDefaultObj();

};

}


