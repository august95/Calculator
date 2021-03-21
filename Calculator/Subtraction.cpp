#include "Subtraction.h"

Subtraction::Subtraction()
{
    ident = Subtract;
}

Subtraction::~Subtraction()
{
	for (int i = 0; i < children.size(); i++)
		children[i]->~Component();
}

Ident Subtraction::Identify()
{
    return ident;
}

float Subtraction::Excecute()
{
	std::cout << " - ";
    if (children.empty()) return 0.0f;
    float val = children[0]->Excecute();
	for (int i = 1; i < children.size(); i++) 
	{
		val = val - children[i]->Excecute();
	}
	std::cout << ") ";
	return val;
}

void Subtraction::SetChild(Component* value)
{
	children.push_back(value);
}

Component* Subtraction::GetChild(int number)
{
	if (children.size() < number) return nullptr;
	return children[number];
}

int Subtraction::NumberOfChildren()
{
	return children.size();
}

void Subtraction::PrintCompositeStructure()
{
	std::cout << " - ";
	Composite::PrintCompositeStructure();
}
