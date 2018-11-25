#ifndef SUMMATOR_H
#define SUMMATOR_H

class IParser;

class Summator 
{
public:
    template <class T>
    Summator(T& parser);

    int compute(const char* str) const;

private:

    IParser& m_parser;
};

template <class T>
Summator::Summator(T& parser) : m_parser(parser)
{
}

#endif //SUMMATOR_H