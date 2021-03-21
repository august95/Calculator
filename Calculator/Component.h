#pragma once
#include <vector>
#include <iostream>


enum Ident { Uninitialized , Add, Subtract, Multiply, LeafNode };

class Component
{
public:
	Ident ident;
	~Component();
	std::vector<Component*> children;
	virtual Ident Identify();
	virtual float Excecute();
	virtual void SetChild(Component* value);
	virtual Component* GetChild();
	virtual int NumberOfChildren();
	virtual void PrintCompositeStructure();
};

