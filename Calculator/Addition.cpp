#include "Addition.h"

Addition::Addition()
{
	ident = Add;
}

Addition::~Addition()
{
	for (int i = 0; i < children.size(); i++)
		children[i]->~Component();
}

Ident Addition::Identify()
{
	return ident;
}

float Addition::Excecute()
{
	std::cout << " (+ ";
	float val = 0;
	for (int i = 0; i < children.size(); i++)
	{
		val = val + children[i]->Excecute();
	}
	std::cout << ") ";
	return val;
}

void Addition::SetChild(Component* value)
{
	children.push_back(value);
}

Component* Addition::GetChild(unsigned int number)
{
	if (children.size() < number) return nullptr;
	return children[number];
}

int Addition::NumberOfChildren()
{
	return children.size();
}

void Addition::PrintCompositeStructure()
{
	std::cout << " + ";
	Composite::PrintCompositeStructure();
}


