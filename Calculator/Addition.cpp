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
	return 0.0f;
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



