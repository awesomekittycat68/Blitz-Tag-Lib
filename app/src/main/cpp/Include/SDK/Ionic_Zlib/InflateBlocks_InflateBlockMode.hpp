#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    enum class InflateBlocks_InflateBlockMode : int {
        TYPE = 0,
        LENS = 1,
        STORED = 2,
        TABLE = 3,
        BTREE = 4,
        DTREE = 5,
        CODES = 6,
        DRY = 7,
        DONE = 8,
        BAD = 9,
    };
}
