#pragma once
#include "Composite.h"


class Subtraction : public Composite
{
public:
	Subtraction();
	~Subtraction();
	std::vector<Component*> children;
	virtual Ident Identify();
	virtual float Excecute();
	virtual void SetChild(Component* value);
	virtual Component* GetChild(int number);
	virtual int NumberOfChildren();
	virtual void PrintCompositeStructure();
private:
	Ident ident;

};
