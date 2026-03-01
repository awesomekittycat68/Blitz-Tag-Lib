#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    enum class FlushType : int {
        None = 0,
        Partial = 1,
        Sync = 2,
        Full = 3,
        Finish = 4,
    };
}
