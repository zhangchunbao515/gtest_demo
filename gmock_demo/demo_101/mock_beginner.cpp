//#include "gtest/gtest.h"
#include "gmock/gmock.h"

using ::testing::Return;
using ::testing::_;
using ::testing::AtLeast;

class b {
public:
  //virtual double getA(const string& postal_code) = 0;   
  virtual int getB() = 0; 
};


class mockB : public b{
public:
    MOCK_METHOD0(getB, int());
};

TEST(testMath, myCubeTest)
{
    mockB mockObj;
    EXPECT_EQ(1000, 1000);	
    EXPECT_CALL(mockObj, getB())
      .Times(1)
      .WillOnce(Return(10));
    EXPECT_EQ(10,mockObj.getB());

}

int main(int argc, char *argv[]) {
  //::testing::InitGoogleTest(&argc, argv);
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}