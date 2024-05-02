#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x108 - 0xF8)
// Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{
public:
	class UPaperSprite*                          ToggleRadioOffSprite;                              // 0xF8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F2C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMobileActionButtonBehavior_ToggleRadio* GetDefaultObj();

	void HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
};

// 0x50 (0x318 - 0x2C8)
// Class SrirachaRanchUI.RadioPlayerWidgetBase
class URadioPlayerWidgetBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_1F3A[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPrioritizedWidgetData            PriorityData;                                      // 0x308(0x2)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F3D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStreamingRadioPlayerComponent*        LastValidComp;                                     // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URadioPlayerWidgetBase* GetDefaultObj();

	void SetControllable(bool bCanControl);
	void OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnShouldShowDueToEntrance();
	void OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* LastSource);
	void OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnDisconnectFromComp();
	void NativeExitedVehicle();
	void NativeEnteredVehicle();
};

}


