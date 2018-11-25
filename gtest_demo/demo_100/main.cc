#include <iostream>
#include "adder.h"

int main()
{
    Adder a(3,2);
    std::cout << "Sum: " <<  a.getSum() << std::endl;
    return 0;
}
