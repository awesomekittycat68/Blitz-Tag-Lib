#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRToolFlash_UpgradeTypes : int {
        None = 1,
        UpagredA = 2,
        UpagredB = 4,
        UpagredC = 8,
    };
}
