#pragma once
#include "Composite.h"

class Leaf : public Component
{
public:
	Ident ident;
	Ident Identify();
	Leaf(float _value);
	virtual float Excecute();
	virtual void SetChild(Component* value);
	virtual Component* GetChild();

private:
	float value;
};

