#include "Calc.h"
#include <iostream>
#include "Multiplication.h"
#include "Addition.h"
#include "Leaf.h"

void Calc::Begin()
{
	while (std::cin) {
		root = Expression();
		std::cout << "answer: " << root->Excecute() << std::endl;
		root->~Component();
	}
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

Component* Calc::Expression()					// Addition and subtraction
{
	Component* leaf = Term();					
	Component* toReturn = leaf;
	Component* composite = parser->Get();

	while (composite->Identify() == Subtract || composite->Identify() == Add ||
		   composite->Identify() == Multiply)
	{
		composite->SetChild(leaf);
		leaf = Term();							// leaf or addition with leafs
		if (leaf->Identify() == LeafNode || leaf->Identify() == Multiply || 
			leaf->Identify() == Subtract || leaf->Identify() == Add)
		{
			composite->SetChild(leaf);
			leaf = composite;
			if(leaf)
				toReturn = leaf;
			composite = parser->Get();
		}
	}
	return toReturn;
}

Component* Calc::Term()							//Returns a Multiplication filled 
{												//with leafs or just a single leaf
	Component* leaf = Primary();
	Component* toReturn;			
	toReturn = leaf;
	Component* composite = parser->Get();		//Composite

	while(composite->Identify() == Multiply)
	{
		composite->SetChild(leaf);
		leaf = Primary();						// return leaf of Composite with leafs
		if (leaf->Identify() == LeafNode || leaf->Identify() == Multiply) 
		{
			composite->SetChild(leaf);
			leaf = composite;
			if (leaf)
				toReturn = leaf;
			composite = parser->Get();			// will return Composite
		}
	}
	parser->putback(composite);
	return toReturn;
}

Component* Calc::Primary()						// can only return Leafs;
{  
	return parser->Get();
}

