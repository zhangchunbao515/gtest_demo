/*************************************************************************
	> File Name: MockMessenger.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 11时15分28秒
    > Description: 执行的gmock单元测试
 ************************************************************************/

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>
#include <memory>
#include "MockMessenger.h"
#include "HelloWorld.h"

using namespace testing;
using namespace std;

TEST(HelloWorldTest, getMessage)
{
    MockMessenger messenger;
    std::string msg = "Hello World";
    EXPECT_CALL(messenger, getMessage()).WillRepeatedly(Return(ByRef(msg)));

    HelloWorld helloWorld;
    EXPECT_EQ("Hello World", helloWorld.getMessage(&messenger));
    EXPECT_EQ("Hello World", helloWorld.getMessage(&messenger));
    EXPECT_EQ("Hello World", helloWorld.getMessage(&messenger));
}
