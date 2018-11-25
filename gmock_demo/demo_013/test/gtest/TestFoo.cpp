#include <memory>
#include <vector>
#include <string>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "gtest/Foo.cpp"

TEST(TestFooTest, testSize)
{
    std::shared_ptr<Foo> foo = std::make_shared<Foo>();
    std::vector<int> a = foo->getElements();
    EXPECT_EQ( 5, a.size() );
    EXPECT_EQ( 5, a.size() );
    EXPECT_EQ( 5, a.size() );
}

TEST(TestFooTest, testDescription)
{
    std::shared_ptr<Foo> foo = std::make_shared<Foo>();
    std::string a = foo->toString();
    EXPECT_EQ( "Foo class", a );
}

TEST(TestFooTest, testMoney)
{
    std::shared_ptr<Foo> foo = std::make_shared<Foo>();
    float a = foo->getMoney();
    EXPECT_NEAR( 1000.00006F, a, 0.00005 );
}
