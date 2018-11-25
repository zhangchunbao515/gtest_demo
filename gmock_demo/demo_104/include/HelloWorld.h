/*************************************************************************
  > File Name: HelloWorld.h
  > Author: 
  > Mail: 
  > Created Time: 2018年01月05日 星期五 11时12分21秒
 ************************************************************************/

#ifndef _HELLOWORLD_H
#define _HELLOWORLD_H
#include <string>
#include "Messenger.h"
using namespace std;

class HelloWorld
{
public:
    HelloWorld();
    virtual ~HelloWorld();
    string getMessage(Messenger* messenger) const;
    string postMessage(Messenger* messenger, string msg) const;
};

#endif
