#include "Logger.h"
#include <iostream>
#include <cstdarg>

namespace Engine
{

    void Logger::LogTrace(const char* format, const char* fileName, int line, ...)
    {
        char buffer[4096];
        va_list args;
        va_start(args, line);
        vsnprintf(buffer, sizeof(buffer), format, args);
        va_end(args);
        std::cout << "[Trace] -> " << fileName << ":" << line << " -> " << buffer << std::endl;
    }

    void Logger::LogInfo(const char* format, const char* fileName, int line, ...)
    {
        char buffer[4096];
        va_list args;
        va_start(args, line);
        vsnprintf(buffer, sizeof(buffer), format, args);
        va_end(args);
        std::cout << "[Info] -> " << fileName << ":" << line << " -> " << buffer << std::endl;
    }

    void Logger::LogWarn(const char* format, const char* fileName, int line, ...)
    {
        char buffer[4096];
        va_list args;
        va_start(args, line);
        vsnprintf(buffer, sizeof(buffer), format, args);
        va_end(args);
        std::cout << "[Warning] -> " << fileName << ":" << line << " -> " << buffer << std::endl;
    }

    void Logger::LogError(const char* format, const char* fileName, int line, ...)
    {
        char buffer[4096];
        va_list args;
        va_start(args, line);
        vsnprintf(buffer, sizeof(buffer), format, args);
        va_end(args);
        std::cerr << "[Error] -> " << fileName << ":" << line << " -> " << buffer << std::endl;
    }

    void Logger::LogFatal(const char* format, const char* fileName, int line, ...)
    {
        char buffer[4096];
        va_list args;
        va_start(args, line);
        vsnprintf(buffer, sizeof(buffer), format, args);
        va_end(args);
        std::cerr << "[Fatal] -> " << fileName << ":" << line << " -> " << buffer << std::endl;
        std::exit(1);
    }



}