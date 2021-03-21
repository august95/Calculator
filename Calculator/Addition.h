#pragma once
#include "Composite.h"


class Addition : public Composite
{

public:
	Addition();
	~Addition();
	Ident ident;
	std::vector<Component*> children;
	virtual Ident Identify();
	virtual float Excecute();
	virtual void SetChild(Component* value);
	virtual Component* GetChild(unsigned int number);
	virtual int NumberOfChildren();
};

