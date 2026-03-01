#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace UniLabs_Time {
    enum class TimeUnit : int {
        None = 0,
        Milliseconds = 1,
        Seconds = 2,
        Minutes = 3,
        Hours = 4,
        Days = 5,
    };
}
