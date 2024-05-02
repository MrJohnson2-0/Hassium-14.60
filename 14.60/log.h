#pragma once
#include "iostream"
#define NoColor "\033[0m"
#define Hecker   "\033[32m"

void LOG(std::string message)
{
	std::cout << Hecker << message << NoColor << std::endl;
}