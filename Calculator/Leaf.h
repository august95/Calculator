#pragma once
#include "Node.h"

class Leaf : public Node
{
public:
	Leaf(float _value);
	float Excecute(); 

private:
	float value;
};

