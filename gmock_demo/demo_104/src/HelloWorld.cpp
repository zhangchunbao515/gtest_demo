/*************************************************************************
  > File Name: HelloWorld.cpp
  > Author: 
  > Mail: 
  > Created Time: 2018年01月05日 星期五 11时12分56秒
  > Description: 调用Messenger.h的客户端程序
 ************************************************************************/

#include "HelloWorld.h"
#include "Messenger.h"

HelloWorld::HelloWorld()
{
}

HelloWorld::~HelloWorld()
{
}

string HelloWorld::getMessage(Messenger* messenger) const
{
    return messenger->getMessage();
}

string HelloWorld::postMessage(Messenger* messenger, string msg) const
{
    return messenger->postMessage(msg);
}
