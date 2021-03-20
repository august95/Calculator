#pragma once
#include "Node.h"
class Composite : Node
{
public:
	virtual void SetChild() = 0;
	virtual void GetChild() = 0;
};

