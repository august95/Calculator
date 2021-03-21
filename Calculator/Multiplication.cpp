#include "Multiplication.h"
#include <iostream>

Multiplication::Multiplication()
{
    ident = Multiply;
}

Multiplication::~Multiplication()
{
	for (int i = 0; i < children.size(); i++)
		children[i]->~Component();
}

Ident Multiplication::Identify()
{
    return ident;
}

float Multiplication::Excecute()
{
    float val = 1;
    for (int i = 0; i < children.size(); i++) {
        val = val * children[i]->Excecute();
    }
    return val;
}

void Multiplication::SetChild(Component* value)
{
    children.push_back(value);
}

Component* Multiplication::GetChild(unsigned int number)
{
	if (children.size() < number) return nullptr;
	return children[number];
}

int Multiplication::NumberOfChildren()
{
    return children.size();
}
