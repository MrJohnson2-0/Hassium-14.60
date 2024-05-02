#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.GameFrameworkComponent
class UGameFrameworkComponent : public UActorComponent
{
public:

	static class UClass* StaticClass();
	static class UGameFrameworkComponent* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.ControllerComponent
class UControllerComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UControllerComponent* GetDefaultObj();

};

// 0x140 (0x168 - 0x28)
// Class ModularGameplay.GameFrameworkComponentManager
class UGameFrameworkComponentManager : public UObject
{
public:
	uint8                                        Pad_18B5[0x140];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameFrameworkComponentManager* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.GameStateComponent
class UGameStateComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UGameStateComponent* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.PawnComponent
class UPawnComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UPawnComponent* GetDefaultObj();

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.PlayerStateComponent
class UPlayerStateComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass();
	static class UPlayerStateComponent* GetDefaultObj();

};

}


