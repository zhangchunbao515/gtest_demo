#include "gtest/gtest.h"
//#include "gmock/gmock.h"

TEST(testMath, myCubeTest)
{
    EXPECT_EQ(1000, 1000);	
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}