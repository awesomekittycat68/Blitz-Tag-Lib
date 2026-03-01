#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class HowManyMonke_State : int {
        READY = 0,
        TD_LOOKUP = 1,
        HMM_LOOKUP = 2,
    };
}
