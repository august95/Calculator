#include "Multiplication.h"
#include <iostream>

float Multiplication::Excecute()
{
    std::cout << "Multiplication Executed \n";
    return 0.0f;
}

void Multiplication::SetLeftChild(Node* value)
{
    left = value;
}

Node* Multiplication::GetLeftChild()
{
    return left;
}

void Multiplication::SetRightChild(Node* value)
{
    right = value;
}

Node* Multiplication::GetRightChild()
{
    return right;
}


