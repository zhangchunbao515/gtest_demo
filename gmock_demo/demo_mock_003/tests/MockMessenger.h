#pragma once
#ifndef MOCKMESSENGER_H_
#define MOCKMESSENGER_H_

#include "Messenger.h"
#include <string>
#include <gmock/gmock.h>

class MockMessenger : public Messenger
{
public:
  MOCK_METHOD0(getMessage, std::string());
};

#endif /* MOCKMESSENGER_H_ */