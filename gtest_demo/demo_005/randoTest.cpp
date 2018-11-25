#include <gtest/gtest.h>
#include "rando.h"

 
class RandoTest : public ::testing::Test
{
protected:
    RandoTest(){}          //constructor runs before each test
    virtual ~RandoTest(){} //destructor cleans up after tests
    virtual void SetUp(){} //sets up before each test (after constructor)
    virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, sanityCheck)
{
	Rando rando;
	ASSERT_TRUE( true );
}