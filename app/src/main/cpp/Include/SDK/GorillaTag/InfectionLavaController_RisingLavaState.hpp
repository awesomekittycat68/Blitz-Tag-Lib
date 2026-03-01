#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    enum class InfectionLavaController_RisingLavaState : int {
        Drained = 0,
        Erupting = 1,
        Rising = 2,
        Full = 3,
        Draining = 4,
    };
}
