#include <gtest/gtest.h>

extern "C" {
#include "func.h"
}


TEST(Func_test, HandleNoneZeroInput)
{
    EXPECT_EQ(2, Foo(4, 10));
    EXPECT_EQ(6, Foo(30, 18));
}

TEST(Func_test,test_zero)
{
	EXPECT_EQ(1, Func(0));
}

TEST(Func_test,test_positive)
{
	ASSERT_EQ(1, Func(2));
	EXPECT_EQ(6, Func(3));
}
