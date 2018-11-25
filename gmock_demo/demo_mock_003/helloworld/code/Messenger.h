#pragma once
#ifndef MESSENGER_H_
#define MESSENGER_H_

#include <string>

class Messenger
{
public:
  Messenger() {}
  virtual ~Messenger() {}
  virtual std::string getMessage() = 0;
};

#endif /* MESSENGER_H_ */

