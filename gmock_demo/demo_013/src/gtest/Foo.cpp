#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <vector>
#include <string>

class Foo
{
public:
    std::vector<int> getElements()
    {
        return mElements;
    }

    std::string toString()
    {
        return "Foo class";
    }

    float getMoney()
    {
        return 1000.00006F;
    }
private:
    std::vector<int> mElements = { 1, 2, 3, 4, 5 };
};
