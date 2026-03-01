#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class LurkerGhost_ghostState : int {
        patrol = 0,
        seek = 1,
        charge = 2,
        possess = 3,
    };
}
