#include "Parser.h"

Parser::Parser()
{
}

Node* Parser::Get()
{
	char ch;
	std::cin >> ch;
	if (ch == '+') return new Addition;
	else if (ch == '*') return new Multiplication;
	switch (ch)
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9': case '.':
	{
		std::cin.putback(ch);
		double d;
		std::cin >> d;
		return new Leaf(d);
	}
	return nullptr;
}

/*
Parser* Parser::GetParser()
{
	if (!instance)
	instance = new Parser();
	return instance;
}
*/
