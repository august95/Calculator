#pragma once
#include "Component.h"


class Composite : public Component
{
public:
	Ident ident;
	~Composite();
	std::vector<Component*> children;
	virtual Ident Identify();
	virtual float Excecute();
	virtual void SetChild(Component* value);
	virtual Component* GetChild();
	virtual int NumberOfChildren();

};

/*
class Composite : public Node
{
public:
	/*
	Composite* left;
	Composite* right;
	Ident ident;
	virtual void SetLeftChild(Composite* value) = 0;
	virtual Composite* GetLeftChild() = 0;
	virtual void SetRightChild(Composite* value) = 0;
	virtual Composite* GetRightChild() = 0;
	*/
/*
	virtual Ident Identify() = 0;
	virtual float Excecute() = 0;
	Composite* left;
	Composite* right;
	Ident ident;
	virtual void SetLeftChild(Composite* value) = 0;
	virtual Composite* GetLeftChild() = 0;
	virtual void SetRightChild(Composite* value) = 0;
	virtual Composite* GetRightChild() = 0;
};

*/