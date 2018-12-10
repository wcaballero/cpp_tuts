//
// Created by William Caballero-Ramos on 12/10/18.
//
/**
 * Youtuber Cherno tutorial on c++ class.
 * How to Write a C++ Class
 * Writing a Log class to control what output we see have errors, warnings, and messages / trace.
 * He called the class Log but I called it Logger because I already have a Log class.
 */

#ifndef BASICS_LOGGER_H
#define BASICS_LOGGER_H

/**
 * Separate public methods from public fields
 */
class Logger
{
public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
private:
    int m_LogLevel = LogLevelInfo;
public:
    void SetLevel(int level);
    void Warn(const char* message);
    void Error(const char* message);
    void Info(const char* message);
};


#endif //BASICS_LOGGER_H
