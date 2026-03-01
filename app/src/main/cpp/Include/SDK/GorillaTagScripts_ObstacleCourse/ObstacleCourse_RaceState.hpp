#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_ObstacleCourse {
    enum class ObstacleCourse_RaceState : int {
        Started = 0,
        Waiting = 1,
        Finished = 2,
    };
}
