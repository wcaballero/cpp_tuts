//
// Created by William Caballero-Ramos on 12/10/18.
//

#include <iostream>
#include "Logger.h"

void Logger::SetLevel(int level)
{
    m_LogLevel = level;
}

void Logger::Error(const char* message)
{
    if (m_LogLevel >= LogLevelError)
        std::cout << "[ERROR]: " << message << std::endl;
}

void Logger::Warn(const char* message)
{
    if (m_LogLevel >= LogLevelError)
        std::cout << "[WARNING]: " << message << std::endl;
}

void Logger::Info(const char* message)
{
    if (m_LogLevel >= LogLevelInfo)
        std::cout << "[INFO]: " << message << std::endl;
}