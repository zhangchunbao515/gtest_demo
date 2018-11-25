
#include <gmock/gmock.h>

class TestGmockDemo
{
public:
    
    TestGmockDemo(const int v) : val(v) { }

    int getVal() const { return val; }


private:
    int val;

};

TEST(TestGmockDemo,TestGmockProject)
{
    TestGmockDemo gmockDemo(1000);

    ASSERT_THAT(gmockDemo.getVal(),testing::Eq(1000));
}
