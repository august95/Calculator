#pragma once
#include "Composite.h"

class Leaf : public Component
{
public:
	Ident ident;
	Leaf(float _value);
	~Leaf();
	Ident Identify();
	virtual float Excecute();
	virtual void SetChild(Component* value);
	virtual Component* GetChild();
	virtual void PrintCompositeStructure();

private:
	float value;
};

