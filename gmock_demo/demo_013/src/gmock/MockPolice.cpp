#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <memory>
#include <string>
#include "gmock/Police.cpp"

class MockPolice: public Police
{
public:
    virtual ~MockPolice()
    {
    }
};

