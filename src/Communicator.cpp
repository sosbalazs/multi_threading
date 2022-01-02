#include "Communicator.h"
#include <iostream>

Communicator::Communicator()
{
    std::cout << __FUNCTION__ << " Created\n";
}

Communicator::~Communicator()
{
    std::cout << __FUNCTION__ << " Deleted\n";
}

Communicator& Communicator::getInstance()
{
    static Communicator Instance;
    return Instance;
}

// Singleton with pointer
/*
Communicator* Communicator::getInstance()
{
    if(Instance == nullptr)
    {
        Instance = new Communicator;
    }
    return Instance;
}

void Communicator::resetInstance()
{
    delete Instance;
    Instance = nullptr;
}
*/
