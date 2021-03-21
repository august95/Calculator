#include "Calc.h"
#include <iostream>
#include "Multiplication.h"
#include "Addition.h"
#include "Leaf.h"

void Calc::Begin()
{
	std::cout << "while(std::cin) \n";
	root = Expression();
	std::cout << root->Excecute() << "finished excecuting \n";
}

Calc::Calc()
{
	parser = new Parser;
	root = nullptr;
}

Calc::~Calc()
{
	parser->~Parser();
	root->~Component();
	
}

void Calc::Excecute()
{
	root->Excecute();
}



Component* Calc::Expression()		// Addition and subtraction
{
	/*
	Component* left = parser->Get(); // first leaf or addition with leafs
	Component* c = parser->Get();
	c->SetChild(left);
	//Leaf* left = Term(); // is always a leaf
	while (true)
	{
		if (c->Identify() == Add) {

		}

	}
	return nullptr;
	*/

	return Term();
}

Component* Calc::Term()				// Returns a Multiplication filled 
{									//with leafs or just a single leaf{
	Component* toReturn = Primary();//Always leaf
	Component* c = parser->Get();	//Composite

	while(c->Identify() == Multiply)
	{
		c->SetChild(toReturn);
		toReturn = parser->Get();
		if (toReturn->Identify() == LeafNode) 
		{
			c->SetChild(toReturn);
			toReturn = c;
			c = parser->Get();		// will return Composite
		}
	}
	std::cout << "End of Term() \n";
	parser->putback(c);
	return toReturn;
}

Component* Calc::Primary()			// can only return Leafs
{  
	std::cout << "Primary() \n";
	return parser->Get();
}





/*
void Calc::Begin()
{

	bool performed = false;
	while (std::cin)
	{
		if (!performed)
		{
			std::cout << "while(std::cin) \n";
			root = Expression();
			std::cout << root->Excecute() << "finished excecuting \n";
			performed = true;
		}
	}
}
*/
