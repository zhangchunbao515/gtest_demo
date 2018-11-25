#include <gmock/gmock.h>
#include "MockMessenger.h"
#include "HelloWorld.h"
#include <string>

using namespace testing;

TEST(HelloWorldTest, getMessage) {
  MockMessenger messenger;
  std::string msg = "Hello World";
  EXPECT_CALL(messenger, getMessage()).WillRepeatedly(Return(ByRef(msg)));

  HelloWorld helloWorld(&messenger);
  EXPECT_EQ("Hello World", helloWorld.getMessage());
  EXPECT_EQ("Hello World", helloWorld.getMessage());
  EXPECT_EQ("Hello World", helloWorld.getMessage());
}