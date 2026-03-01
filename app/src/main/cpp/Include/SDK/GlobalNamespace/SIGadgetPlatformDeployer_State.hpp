#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SIGadgetPlatformDeployer_State : int {
        Idle = 0,
        Deploying = 1,
        Count = 2,
    };
}
