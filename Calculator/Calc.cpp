#include "Calc.h"
#include <iostream>
#include "Multiplication.h"
#include "Addition.h"
#include "Leaf.h"

Component* Calc::Expression()
{
	Component* left = parser->Get(); // first leaf or addition with leafs
	Component* c = parser->Get();
	c->SetChild(left);
	//Leaf* left = Term(); // is always a leaf
	while (true) {
		if (c->Identify() == Add) {

		}

	}
	return nullptr;
}

Component* Calc::Term() // Returns a Multiplication or divisor with filled with leaves.
{
	Component* left = Primary();
	Component* c = parser->Get();
	while (true) {
		if (c->Identify() == Multiply) {
			c->SetChild(left);
			left = parser->Get();
			if (left->Identify() == LeafNode) {
				c->SetChild(left);
				left = c;
				c = parser->Get();
			}
		}
		else {
			parser->putback(c);
			return left;
		}

	}
	return nullptr;
}

Component* Calc::Primary()
{
	return parser->Get();
}

void Calc::Begin()
{

	while (std::cin) {
		root = Expression();
	}
}

Calc::Calc()
{
	parser = new Parser;
	root = nullptr;
}

void Calc::Excecute()
{
	root->Excecute();

}
