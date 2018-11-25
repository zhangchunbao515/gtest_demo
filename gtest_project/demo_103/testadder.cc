#include <iostream>
#include <gtest/gtest.h>
#include "adder.h"

TEST(sample_test_case, sample_test1)
{
    Adder a(1,1);
    EXPECT_EQ(2,a.getSum());
}

TEST(sample_test_case, sample_test2)
{
    Adder a(1,-1);
    EXPECT_EQ(42, a.getSum());
}

