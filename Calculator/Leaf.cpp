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

float Leaf::Excecute()
{
	std::cout << value <<"  leaf excecuted() \n";
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
