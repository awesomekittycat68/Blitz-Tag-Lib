#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class BuildTargetManager_BuildTowards : int {
        Steam = 0,
        OculusPC = 1,
        Quest = 2,
        Viveport = 3,
    };
}
