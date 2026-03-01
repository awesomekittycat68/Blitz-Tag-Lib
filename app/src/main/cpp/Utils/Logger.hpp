#pragma once

#include "android/log.h"
#include <string>
#include <functional>

class Logger {
    public:
        static void Log(const char *const string) {
            __android_log_print(ANDROID_LOG_INFO, "Unity", "[BlitzTag] %s", string);
        }

        static void Log(const std::string& string) {
            Log(string.c_str());
        }

        static void LogDebug(const char *const string) {
            __android_log_print(ANDROID_LOG_DEBUG, "Unity", "[BlitzTag] %s", string);
        }

        static void LogDebug(const std::string& string) {
            LogDebug(string.c_str());
        }

        static void LogInfo(const char *const string) {
            __android_log_print(ANDROID_LOG_INFO, "Unity", "[BlitzTag] %s", string);
        }

        static void LogInfo(const std::string& string) {
            LogInfo(string.c_str());
        }

        static void Log(const bool& string) {
            if (string) {
                Log("true");
            }
            else {
                Log("false");
            }
        }

        static void LogError(const char *const string) {
            __android_log_print(ANDROID_LOG_ERROR, "Unity", "[BlitzTag] %s", string);
        }

        static void LogFatal(const char *const string) {
            __android_log_print(ANDROID_LOG_FATAL, "Unity", "[BlitzTag] %s", string);
        }

        static void LogWarning(const char *const string) {
            __android_log_print(ANDROID_LOG_WARN, "Unity", "[BlitzTag] %s", string);
        }
};