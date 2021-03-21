#pragma once
#include "Composite.h"

class Multiplication : public Composite
{
private:
	Ident ident;
public:
	Multiplication();
	~Multiplication();
	std::vector<Component*> children;
	virtual Ident Identify();
	virtual float Excecute();
	virtual void SetChild(Component* value);
	virtual Component* GetChild(unsigned int number);
	virtual int NumberOfChildren();
};

