#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <memory>

#include "gmock/PoliceAgent.cpp"
#include "gmock/MockPolice.cpp"

using testing::Ge;
using testing::Invoke;
using testing::Return;
using testing::_;
using testing::InSequence;
using testing::NiceMock;
using testing::AnyNumber;

TEST(TestPoliceAgent, testIfIcanCallPolice)
{
    std::shared_ptr<MockPolice> mockPolice = std::make_shared<NiceMock<MockPolice>>();
    std::shared_ptr<PoliceAgent> policeAgent = std::make_shared < PoliceAgent > ( mockPolice );


    policeAgent->setMoney( 5000 );
    policeAgent->callPolice();
}

