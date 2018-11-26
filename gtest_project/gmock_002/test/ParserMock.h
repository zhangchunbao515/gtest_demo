#ifndef PARSER_MOCK_H
#define PARSER_MOCK_H

#include "IParser.h"
#include <vector>
#include <gmock/gmock.h>

class ParserMock : public IParser
{
public:
    MOCK_CONST_METHOD1(parse, std::vector<int>(const char*));
};

#endif //PARSER_MOCK_H