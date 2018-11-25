#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <memory>

#include "gmock/User.cpp"
class Pusher
{
public:
    Pusher( std::shared_ptr<User> user )
            : mUser( user )
    {

    }
    ~Pusher()
    {
    }

    int getUserMoney()
    {
        return mUser->getMoney();
    }

private:
    std::shared_ptr<User> mUser;
};
