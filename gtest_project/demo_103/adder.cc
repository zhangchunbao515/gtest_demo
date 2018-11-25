#include "adder.h"

Adder::Adder(int a, int b)
{
    w=a;
    x=b;
}

int Adder::getSum()
{
    return w+x;
}
