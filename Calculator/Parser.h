#pragma once
#include "Component.h"
#include "Leaf.h"
#include <iostream>

class Parser
{

public:
	Component* Get();
	Parser();
	~Parser();
	void putback(Component* n);
private:
	Component* buffer;
	bool full;
};

