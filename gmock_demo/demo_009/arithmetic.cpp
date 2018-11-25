#include "arithmetic.h"

template <class T>
T Arithmetic<T>::add(T x, T y)
{
    res = x + y;
    return res;
}

template <class T>
T Arithmetic<T>::sub(T x, T y)
{
    res = x - y;
    return res;
}

template <class T>
T Arithmetic<T>::mul(T x, T y)
{
    res = x * y;
    return res;
}

template <class T>
T Arithmetic<T>::div(T x, T y)
{
    res = x / y;
    return res;
}
