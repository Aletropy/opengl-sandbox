namespace Engine
{
    class Logger
    {
    public:
        Logger() = delete;
        Logger(const Logger&&) = delete;

        static void LogTrace(const char* format, const char* fileName, int line, ...);
        static void LogInfo(const char* format, const char* fileName, int line, ...);
        static void LogWarn(const char* format, const char* fileName, int line, ...);
        static void LogError(const char* format, const char* fileName, int line, ...);
        static void LogFatal(const char* format, const char* fileName, int line, ...);
    };

    #ifdef DEBUG
        #define LOG_TRACE(message, ...) Engine::Logger::LogTrace(message, __FILE__, __LINE__, __VA_ARGS__)
        #define LOG_INFO(message, ...)  Engine::Logger::LogInfo(message, __FILE__, __LINE__, __VA_ARGS__)
        #define LOG_WARN(message, ...)  Engine::Logger::LogWarn(message, __FILE__, __LINE__, __VA_ARGS__)
        #define LOG_ERROR(message, ...) Engine::Logger::LogError(message, __FILE__, __LINE__, __VA_ARGS__)
        #define LOG_FATAL(message, ...) Engine::Logger::LogFatal(message, __FILE__, __LINE__, __VA_ARGS__)
    #else
        #define LOG_TRACE(message)
        #define LOG_INFO(message)
        #define LOG_WARN(message)
        #define LOG_ERROR(message)
        #define LOG_FATAL(message)
    #endif
}