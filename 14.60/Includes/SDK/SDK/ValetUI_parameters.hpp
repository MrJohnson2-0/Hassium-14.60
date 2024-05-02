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

// 0x1 (0x1 - 0x0)
// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.SetVehicleUsesRechargableBoost
struct UFortAthenaVehicleDashboardWidget_Valet_SetVehicleUsesRechargableBoost_Params
{
public:
	bool                                         bUsesRechargeableBoost;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnWidgetVisibilityChanged
struct UFortAthenaVehicleDashboardWidget_Valet_OnWidgetVisibilityChanged_Params
{
public:
	bool                                         bNewVisibility;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnUpdateRechargeableBoostPercent
struct UFortAthenaVehicleDashboardWidget_Valet_OnUpdateRechargeableBoostPercent_Params
{
public:
	float                                        BoostPercent;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRPMChanged
struct UFortAthenaVehicleDashboardWidget_Valet_OnRPMChanged_Params
{
public:
	float                                        NormalizedRPM;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.GetDagwoodVehicle
struct UFortAthenaVehicleDashboardWidget_Valet_GetDagwoodVehicle_Params
{
public:
	class AFortDagwoodVehicle*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


