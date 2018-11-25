#include <gtest/gtest.h>
#include "greeter.h"

TEST(GreeterConstructor, NormalUsage)
{
    greeter_t * test_greeter = NULL;
    greeter_retval constructor_return_value = GREETER_SUCCESS;

    constructor_return_value = init_greeter("Hello World!\n", &test_greeter);

    EXPECT_EQ(GREETER_SUCCESS, constructor_return_value);
    EXPECT_TRUE(NULL != test_greeter);

    if (NULL != test_greeter)
    {
        free(test_greeter);
    }
}


int main(int argc, char * argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
