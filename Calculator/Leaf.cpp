#include "Leaf.h"
#include <iostream>

Leaf::Leaf(float _value)
{
	value = _value;
}

float Leaf::Excecute()
{
	std::cout << value <<"  leaf excecuted() \n";
	return value;
}
