#pragma once
#include <vector>


enum Ident { Uninitialized , Add, Subtract, Multiply, LeafNode };

class Component
{
public:
	Ident ident;
	std::vector<Component*> children;
	virtual Ident Identify();
	virtual float Excecute();
	virtual void SetChild(Component* value);
	virtual Component* GetChild();
	virtual int NumberOfChildren();
};

