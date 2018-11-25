#include "program.h"

template <class T>
T Program<T>::get_x()
{
    return x;
}

template <class T>
T Program<T>::get_y()
{
    return y;
}

template <class T>
T Program<T>::get_res()
{
    return _ar.result();
}

template <class T>
void Program<T>::set_x(T v)
{
    x = v;
}

template <class T>
void Program<T>::set_y(T v)
{
    y = v;
}

template <class T>
void Program<T>::set_sum()
{
    _ar.add(x, y);
}

template <class T>
void Program<T>::set_sub()
{
    _ar.sub(x, y);
}

template <class T>
void Program<T>::set_mul()
{
    _ar.mul(x, y);
}

template <class T>
void Program<T>::set_div()
{
    _ar.div(x, y);
}
