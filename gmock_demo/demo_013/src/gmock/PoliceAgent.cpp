#pragma once

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <memory>
#include "Police.cpp"
#include "User.cpp"

class PoliceAgent: User
{
public:
    PoliceAgent( std::shared_ptr<Police> police )
            : mPolice( police )
    {

    }
    virtual ~PoliceAgent()
    {
    }
    ;

    void setMoney( int money )
    {
        mMarkedMoney = money;
    }

    int getMoney()
    {
        return mMarkedMoney;
    }

    void callPolice()
    {

    }
private:
    std::shared_ptr<Police> mPolice;
    int mMarkedMoney = 0;
};
