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

// 0x4 (0x4 - 0x0)
// Function ComicReader.FortComicReader.SetCurrentPage
struct UFortComicReader_SetCurrentPage_Params
{
public:
	int32                                        InPageIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ComicReader.FortComicReader.GetViewMode
struct UFortComicReader_GetViewMode_Params
{
public:
	enum class EFortComicViewMode                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ComicReader.FortComicReader.GetTotalPageNumber
struct UFortComicReader_GetTotalPageNumber_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ComicReader.FortComicReader.GetNumPanelsOnPage
struct UFortComicReader_GetNumPanelsOnPage_Params
{
public:
	int32                                        InPageNum;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ComicReader.FortComicReader.GetCurrentPanelIndex
struct UFortComicReader_GetCurrentPanelIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ComicReader.FortComicReader.GetCurrentPageNumber
struct UFortComicReader_GetCurrentPageNumber_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ComicReader.FortComicReader.GetCurrentPageIndex
struct UFortComicReader_GetCurrentPageIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ComicReader.FortComicScreen.UpdateShowContinueOnLastPage
struct UFortComicScreen_UpdateShowContinueOnLastPage_Params
{
public:
	bool                                         InShowContinue;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ComicReader.FortComicScreen.UpdateComicTitle
struct UFortComicScreen_UpdateComicTitle_Params
{
public:
	class FString                                InComicTitle;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ComicReader.FortComicScreen.OnPreProcessedNavInput
struct UFortComicScreen_OnPreProcessedNavInput_Params
{
public:
	enum class EUINavigation                     NavInput;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ComicReader.FortComicScreen.HandlePreprocessorNavInput
struct UFortComicScreen_HandlePreprocessorNavInput_Params
{
public:
	enum class EUINavigation                     InNavDirection;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


