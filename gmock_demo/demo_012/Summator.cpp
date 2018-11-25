#include "Summator.h"
#include "IParser.h"

int Summator::compute(const char* str) const
{
    int sum = 0;
    std::vector<int> arr = m_parser.parse(str);

    for (const auto& el : arr) {
        sum += el;
    }

    return sum;
}