#ifndef PROGRAM_H
#define PROGRAM_H

#include "arithmetic.h"

template<class T>
class Program {
public:
    // Constructor
    Program()
        : x(0.0), y(0.0)
    {
        std::cout << "Program() ctor called" << std::endl;
        //_ar = Arithmetic<T>();
    }

    // Getter functions
    T get_x();
    T get_y();
    T get_res();

    // Setter functions
    void set_x(T v);
    void set_y(T v);

    void set_sum();
    void set_sub();
    void set_mul();
    void set_div();

private:
    T x, y;
    Arithmetic<T> _ar;
};

#include "program.cpp"

#endif // PROGRAM_H
