#include <gtest/gtest.h>
#include "func.h"


TEST(SumCase, SumTemp)
{
    EXPECT_EQ(3, add(1,2));
    EXPECT_EQ(5, add(1,2));
}

TEST(FooCase, FooTemp)
{
    EXPECT_EQ(3, Foo(6,2));
    EXPECT_EQ(3, Foo(6,3));
}

TEST(IsPrimeCase, IsPrimeTemp)
{
    EXPECT_TRUE(IsPrime(2));
    EXPECT_TRUE(IsPrime(3));
    EXPECT_TRUE(IsPrime(6));
}
