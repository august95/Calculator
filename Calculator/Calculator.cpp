

#include <iostream>
#include "Calc.h"
#include "Addition.h"
#include "Multiplication.h"
#include "Leaf.h"


int main()
{
    
    Calc* _Calc = new Calc;
    Addition* Comp = new Addition;
    Multiplication* Mult = new Multiplication;
    Leaf* leaf = new Leaf;
    _Calc->Excecute();
    std::cout << "This is never going to be printed! \n";

}

