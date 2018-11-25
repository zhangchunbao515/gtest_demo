#include "func.h"

int Foo(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return -1;
    }

    int c = a % b;
    if (c == 0)
    {
        return b;
    }

    return Foo(b, c);
}

int Func(int n)
{
    if (n<0)
    {
        return -1;
    }

    int nRev = 1;
    for(int i=1; i<=n; ++i)
    {
        nRev *= i;
    }

    return nRev;
}
