#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    enum class PackedBitsSize : int {
        UInt8 = 4,
        UInt16 = 5,
        UInt32 = 6,
        UInt64 = 7,
    };
}
