#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    enum class BlockState : int {
        NeedMore = 0,
        BlockDone = 1,
        FinishStarted = 2,
        FinishDone = 3,
    };
}
