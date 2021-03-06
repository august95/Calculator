#include "Leaf.h"
#include <iostream>

Ident Leaf::Identify()
{
	return ident;
}

Leaf::Leaf(float _value)
{
	ident = LeafNode;
	value = _value;
}

Leaf::~Leaf()
{
}

float Leaf::Excecute()
{
	std::cout << " " << value << " ";
	return value;
}

void Leaf::SetChild(Component* value)
{
	Component::SetChild(value);
	std::cout << "SetChild() on leaf \n";
}

Component* Leaf::GetChild()
{
	std::cout << "GetChild() on leaf \n";
	return Component::GetChild();

}

void Leaf::PrintCompositeStructure()
{
	std::cout << " " << value << " ";
}
