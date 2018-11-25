#include "HelloWorld.h"
#include "Messenger.h"

HelloWorld::HelloWorld(Messenger* messenger)
{
    this->messenger = messenger;
}

HelloWorld::~HelloWorld()
{
    ;
}

std::string HelloWorld::getMessage() const
{
    return messenger->getMessage();
}
