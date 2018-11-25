#ifndef _MOCKMESSENGER_H_
#define _MOCKMESSENGER_H_

#include "Messenger.h"
#include <string>
#include <gmock/gmock.h>

class MockMessenger : public Messenger
{
public:
    MOCK_METHOD0(getMessage, std::string());
};

#endif //_MOCKMESSENGER_H_