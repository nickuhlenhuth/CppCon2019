#pragma once
#include <iostream>
struct Engine
{
	virtual void start() = 0;
	virtual ~Engine() = default;
};

struct SmallEngine : Engine
{
	// Inherited via Engine
	void start() override { std::cout << "vroom";}
};

struct MedEngine : Engine
{
	// Inherited via Engine
	void start() override { std::cout << "Vroom!"; }
};

struct LargeEngine : Engine
{
	// Inherited via Engine
	void start() override { std::cout << "VROOM!!"; }
};
