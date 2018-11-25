#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <memory>

class MockUser: public User
{
public:
    virtual ~MockUser(){}
    MOCK_METHOD0(getMoney, int());
};
