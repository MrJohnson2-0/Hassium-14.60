#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHardyExtractionReason : uint8
{
	Death                          = 0,
	Storm                          = 1,
	InventoryFull                  = 2,
	TimerRunningOut                = 3,
	Unknown                        = 4,
	EHardyExtractionReason_MAX     = 5,
};

enum class ELaurelExtractionReason : uint8
{
	Death                          = 0,
	HardyExtraction                = 1,
	Unknown                        = 2,
	ELaurelExtractionReason_MAX    = 3,
};

enum class ELaurelType : uint8
{
	Gatherer                       = 0,
	Defender                       = 1,
	Unknown                        = 2,
	ELaurelType_MAX                = 3,
};

enum class ELaurelDropItemReason : uint8
{
	Combat                         = 0,
	Hardy                          = 1,
	MAX                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


