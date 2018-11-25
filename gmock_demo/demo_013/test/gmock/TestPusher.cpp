#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <memory>

#include "gmock/Pusher.cpp"
#include "gmock/User.cpp"
#include "gmock/MockUser.cpp"

using testing::Return;
using testing::Invoke;

TEST(TestPusher, testIfIcangetMoney)
{
    std::shared_ptr<MockUser> mockUser = std::make_shared<MockUser>();
    std::shared_ptr<Pusher> pusher = std::make_shared < Pusher > ( mockUser );

    EXPECT_CALL( *mockUser, getMoney() ).Times( 2 )
            .WillOnce( Return( 100 ))
            .WillOnce( Return( 100 )) ;
    EXPECT_EQ( 100, pusher->getUserMoney() );
    EXPECT_EQ( 100, pusher->getUserMoney() );
}
