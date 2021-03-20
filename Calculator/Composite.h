#pragma once
#include "Node.h"

class Composite : public Node
{
private:
	Node* left;
	Node* right;
public:
	virtual void SetLeftChild(Node* value) = 0;
	virtual Node* GetLeftChild() = 0;
	virtual void SetRightChild(Node* value) = 0;
	virtual Node* GetRightChild() = 0;
};

