#include "Logger.h"

namespace Engine
{
    void Logger::Log(const char *message)
    {
        std::cout << "[Log] -> " << message << std::endl;
    }
}