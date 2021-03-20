#pragma once
#include "Multiplication.h"
#include "Addition.h"
#include "Leaf.h"
#include <iostream>

class Parser
{

public:
	Component* Get();
	Parser();
	//static Parser* GetParser();
	void putback(Component* n);
private:
	Component* buffer;
	bool full;
};

