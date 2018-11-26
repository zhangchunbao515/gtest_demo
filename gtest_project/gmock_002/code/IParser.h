#ifndef IPARSER_H
#define IPARSER_H

#include <vector>

class IParser 
{
public:
    virtual ~IParser() { }
    virtual std::vector<int> parse(const char* str) const = 0;
};

#endif //IPARSER_H