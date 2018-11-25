#include <stdio.h>
#include <stdlib.h>
#include "myfunction.h"


//计算和的函数
int add(int a, int b)
{
    int c = a + b;
    return c;
}

//计算最小公约数
int Foo(int a, int b)
{
    if (a == 0 || b == 0)
    {
        throw "don't do that";
    }
    int c = a % b;
    if (c == 0)
        return b;
    return Foo(b, c);
}

//判断是否为素数
bool IsPrime(int n)
{
    if (n <= 1) return false;

    if (n % 2 == 0) return n == 2;

    for (int i = 3; ; i += 2)
    {
        if (i > n/i) break;

        if (n % i == 0) return false;
    }

    return true;
}
