//
// Created by William Caballero-Ramos on 12/7/18.
//

#include <iostream>
#include "Log.h"


void logInit()
{
    Log("Initializing Log.cpp");
}

void Log(const char* message)
{
    std::cout << message << std::endl;
}