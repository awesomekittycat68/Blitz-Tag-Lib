#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class TimeWindow : int {
        Unknown = 0,
        OneHour = 1,
        OneDay = 2,
        OneWeek = 3,
        ThirtyDays = 4,
        NinetyDays = 5,
    };
}
