#include "Composite.h"

Composite::~Composite()
{
}

Ident Composite::Identify()
{
	return Component::Identify();
}

float Composite::Excecute()
{
	return Component::Excecute();
}

void Composite::SetChild(Component* value)
{
	Component::SetChild(value);
}

Component* Composite::GetChild()
{
	return Component::GetChild();
}

int Composite::NumberOfChildren()
{
	return Component::NumberOfChildren();
}

void Composite::PrintCompositeStructure()
{
	Component::PrintCompositeStructure();
}
