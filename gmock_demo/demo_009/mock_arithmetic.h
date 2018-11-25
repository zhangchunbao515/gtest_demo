#ifndef MOCK_ARITHMETIC_H
#define MOCK_ARITHMETIC_H

#include <gmock/gmock.h>
#include "arithmetic.h"

class MockArithmetic {
public:
    //MockArithmetic();

    MOCK_METHOD2(add, float(int x, int y));
    MOCK_METHOD2(sub, float(int x, int y));
    MOCK_METHOD2(mul, float(int x, int y));
    MOCK_METHOD2(div, float(int x, int y));
    MOCK_METHOD0(result, float());

    //float add(int x, int y);
    //float sub(int x, int y);
    //float mul(int x, int y);
    //float div(int x, int y);

//private:
//    Arithmetic _ar;
};

#endif // MOCK_ARITHMETIC_H
