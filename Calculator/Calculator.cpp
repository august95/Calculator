

#include <iostream>
#include "Calc.h"
#include "Addition.h"
#include "Multiplication.h"
#include "Leaf.h"



int main()
{
    
    Calc* calc = new Calc;
    calc->Init();
    
    std::cout << "This is never going to be printed! \n";

}

