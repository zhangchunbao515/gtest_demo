#ifndef _MESSENGER_H_
#define _MESSENGER_H_

#include <string>

class Messenger
{
public:
    Messenger() {}
    virtual ~Messenger() {}
    virtual std::string getMessage() = 0;
};

#endif //_MESSENGER_H_ 

