#include "Calc.h"
#include <iostream>
#include "Multiplication.h"
#include "Leaf.h"

Node* Calc::Expression()
{
	return nullptr;
}

Node* Calc::Term()
{
	return nullptr;
}

Node* Calc::Primary()
{
	return nullptr;
}

void Calc::Begin()
{
	/*char ch;
	Node* temp;
	while (std::cin) {
		temp = parser->Get();
		if (temp) {
			temp->Excecute();
		}
	}*/
	while (std::cin) {

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
