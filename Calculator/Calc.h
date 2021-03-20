#pragma once
#include "Node.h"
#include "Parser.h"

class Calc
{
private:
	Node* root;
	Parser* parser;
	Node* Expression();
	Node* Term();
	Node* Primary();

public:
	Calc();
	void Excecute();
	void Begin();
};

