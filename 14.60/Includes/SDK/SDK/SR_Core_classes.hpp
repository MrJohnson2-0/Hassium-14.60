#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x38B - 0x380)
// BlueprintGeneratedClass SR_Core.SR_Core_C
class USR_Core_C : public UStreamingRadioPlayerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bMixIsActive;                                      // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsADS;                                            // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsInsideVehicle;                                  // 0x38A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USR_Core_C* GetDefaultObj();

	void GetIsMixAllowed(bool* MixAllowed, bool CallFunc_IsPlayingLiveFeed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void UpdateMixState(bool CallFunc_GetIsMixAllowed_MixAllowed);
	void HandleOnSourcePlayed(class UStreamingRadioPlayerComponent* Component, class URadioContentSourceItemDefinition* AffectedSource);
	void HandleADSStateUpdated(bool Is_Targeting);
	void HandleWeaponStateUpdated(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HandleSeatStateUpdated(class AFortPawn* Pawn, bool Entering, int32 SeatIdx, bool CallFunc_IsExternalSeat_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnPawnEnterSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void OnPawnExitSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex);
	void ExecuteUbergraph_SR_Core(int32 EntryPoint, TScriptInterface<class IFortVehicleInterface> K2Node_Event_Vehicle, class AFortPawn* K2Node_Event_PlayerPawn, int32 K2Node_Event_SeatIndex, TScriptInterface<class IFortVehicleInterface> K2Node_Event_Vehicle_1, class AFortPawn* K2Node_Event_PlayerPawn_1, int32 K2Node_Event_SeatIndex_1);
};

}


