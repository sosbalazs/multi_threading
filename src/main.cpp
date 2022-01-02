#include "Communicator.h"

#include <thread>
#include <iostream>

static bool ThreadStopped = false;

Communicator* Communicator::Instance = nullptr;

void otherThread()
{
  std::string message;
  while(!ThreadStopped)
  {
    std::cout << "Enter something, press 'q' for quit and 'Buksi' for the magic!\n";
    std::cin >> message;
    if(message == "Buksi")
    {
      Communicator::getInstance()->setMessageArrived();
    }
    else if (message == "q")
    {
      ThreadStopped = true;
    }
  }
}

int main()
{
  using namespace std::literals::chrono_literals;

  std::thread myThread(otherThread);

  while(!ThreadStopped)
  {
    std::this_thread::sleep_for(1s);
    if(Communicator::getInstance()->isMessageArrived())
    {
      std::cout << "New message has arrived!\n";
      Communicator::getInstance()->deleteMessage();
    }
  }


  ThreadStopped = true;
  myThread.join();
  Communicator::getInstance()->resetInstance();
  
}
