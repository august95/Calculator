#include "Parser.h"
#include "Multiplication.h"
#include "Addition.h"
#include "Subtraction.h"

Parser::Parser()
{
	full = false;
}

Parser::~Parser()
{
}

void Parser::putback(Component* n)
{
	if (full) std::cout << "putback into full buffer \n";
	buffer = n;
	full = true;
}

Component* Parser::Get()
{
	if (full)
	{
		full = false;
		return buffer;
	}
	char ch;
	std::cin >> ch;

	if (ch == '+') return new Addition;
	else if (ch == '-') return new Subtraction;
	else if (ch == '*') return new Multiplication;
	//else if (ch == '/') return new Division;

	switch (ch)
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9': case '.':
	{
		std::cin.putback(ch);
		float d;
		std::cin >> d;
		return new Leaf(d);
	}
	return nullptr;
}