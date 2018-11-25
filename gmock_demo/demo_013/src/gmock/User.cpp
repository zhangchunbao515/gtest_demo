#pragma once

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <memory>

class User
{
public:
    virtual ~User()
    {
    };
    virtual int getMoney() = 0;
};
