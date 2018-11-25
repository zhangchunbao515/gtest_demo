/*************************************************************************
  > File Name: Messenger.h
  > Author: 
  > Mail: 
  > Created Time: 2018年01月05日 星期五 11时10分07秒
  > Description: 尚未实现的接口，需用gmock模拟.我们有一个Messgener.h接口，
   * 它的getMessage目前还没有实现，可以使用mock类提供的宏来模拟，这样就可以
   * 调试客户端程序，屏蔽Messgener.h的具体实现.
 ************************************************************************/

#ifndef _MESSENGER_H
#define _MESSENGER_H
#include <string>
using namespace std;

class Messenger
{
public:
    virtual ~Messenger() {}
    virtual string getMessage() = 0;
    virtual string postMessage(string msg) = 0;
};

#endif
