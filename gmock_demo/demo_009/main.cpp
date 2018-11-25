#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "program.h"
#include "arithmetic.h"
#include "mock_program.h"
#include "mock_arithmetic.h"

using ::testing::AtLeast;

// Simple Test
TEST(ProgramTest, CalculatesResult) {
    MockProgram pa;
    EXPECT_CALL(pa, get_x()).Times(AtLeast(1));
    EXPECT_CALL(pa, get_y()).Times(AtLeast(1));
    EXPECT_CALL(pa, get_res()).Times(AtLeast(1));
}

int main(int argc, char *argv[])
{
    Program<int> pr;

    std::cout << "x = " << pr.get_x() << std::endl;
    std::cout << "y = " << pr.get_y() << std::endl;

    std::cout << "result = " << pr.get_res() << std::endl;

    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
