#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    enum class DeflateFlavor : int {
        Store = 0,
        Fast = 1,
        Slow = 2,
    };
}
