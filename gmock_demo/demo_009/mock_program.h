#ifndef MOCK_PROGRAM_H
#define MOCK_PROGRAM_H

#include "program.h"
#include <gmock/gmock.h>

class MockProgram {
public:
    MOCK_METHOD0(get_x, float());
    MOCK_METHOD0(get_y, float());
    MOCK_METHOD0(get_res, float());

    MOCK_METHOD1(set_x, void(int v));
    MOCK_METHOD1(set_y, void(int v));

    MOCK_METHOD0(set_sum, void());
    MOCK_METHOD0(set_sub, void());
    MOCK_METHOD0(set_mul, void());
    MOCK_METHOD0(set_div, void());
};

#endif // MOCK_PROGRAM_H
