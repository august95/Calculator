#pragma once
#include "Composite.h"
#include "Node.h"
class Addition : public Composite
{
private:
	Node* left;
	Node* right;

public:
	float Excecute();
	void SetLeftChild(Node* value);
	Node* GetLeftChild();
	void SetRightChild(Node* value);
	Node* GetRightChild();
};

