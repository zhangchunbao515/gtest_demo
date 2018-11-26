#include <gtest/gtest.h>
#include "Summator.h"
#include "ParserMock.h"

#include <tuple>

class PTest : public testing::TestWithParam<std::tuple<const char*, std::vector<int>, int>>
{
public:
    PTest() { }
};


INSTANTIATE_TEST_CASE_P(PTestInstance, PTest,
    testing::Values(std::tuple<const char*, std::vector<int>, int>("12 -1 14 78", { 12, -1, 14, 78 }, 103), 
                    std::tuple<const char*, std::vector<int>, int>("0 0 0 0",     { 0, 0, 0, 0 },     0),
                    std::tuple<const char*, std::vector<int>, int>("1 2 3 4",     { 1, 2, 3, 4 },     10),
                    std::tuple<const char*, std::vector<int>, int>("",            { },                0),
                    std::tuple<const char*, std::vector<int>, int>("10 10 85",    { 10, 10, 85},      105),
                    std::tuple<const char*, std::vector<int>, int>("-1 1 -1 1",   { -1, 1, -1, 1 },   0)));

TEST_P(PTest, test)
{
    ParserMock parser;
    Summator summator(parser);

    const char* str = std::get<0>(GetParam());
    std::vector<int> mockRes = std::get<1>(GetParam());
    int result = std::get<2>(GetParam());

    EXPECT_CALL(parser, parse(str)).WillOnce(testing::Return(mockRes));

    EXPECT_EQ(result, summator.compute(str));
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
