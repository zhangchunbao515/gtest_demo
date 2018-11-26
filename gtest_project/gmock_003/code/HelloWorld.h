#ifndef _HELLOWORLD_H_
#define _HELLOWORLD_H_

#include <string>

class Messenger;
class HelloWorld
{
public:
    HelloWorld(Messenger* messenger);
    virtual ~HelloWorld();
    std::string getMessage() const;

private:
    Messenger* messenger;
};

#endif //_HELLOWORLD_H_

