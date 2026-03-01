#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GameObjectScheduling {
    enum class CountdownText_TimeChunk : int {
        DAY = 0,
        HOUR = 1,
        MINUTE = 2,
        SECOND = 3,
    };
}
