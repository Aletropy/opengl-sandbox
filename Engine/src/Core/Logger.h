#include <iostream>

namespace Engine
{
    class Logger
    {
    public:
        Logger() = delete;
        Logger(const Logger&&) = delete;

        static void Log(const char* message);
    };
}