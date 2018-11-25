/*************************************************************************
  > File Name: MockMessenger.h
  > Author: 
  > Mail: 
  > Created Time: 2018年01月05日 星期五 11时11分29秒
  > Description: Messenger.h的mock类
 ************************************************************************/

#ifndef _MOCKMESSENGER_H
#define _MOCKMESSENGER_H
#include "Messenger.h"
#include <string>
#include <gmock/gmock.h>
using namespace std;

class MockMessenger : public Messenger
{
    public:
        MOCK_METHOD0(getMessage, string());
        MOCK_METHOD1(postMessage, string(string));
};

#endif
