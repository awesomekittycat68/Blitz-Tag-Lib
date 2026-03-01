#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_ExperimentationModels {
    enum class ExperimentState : int {
        New = 0,
        Started = 1,
        Stopped = 2,
        Deleted = 3,
    };
}
