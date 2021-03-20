#pragma once
#include "Parser.h"

class Calc
{
private:
	Component* root;
	Parser* parser;
	Component* Expression();
	Component* Term();
	Component* Primary();
	

public:
	Calc();
	void Excecute();
	void Begin();
};

