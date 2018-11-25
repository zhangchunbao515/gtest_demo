#pragma once
#ifndef HELLOWORLD_H_
#define HELLOWORLD_H_

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

#endif /* HELLOWORLD_H_ */

