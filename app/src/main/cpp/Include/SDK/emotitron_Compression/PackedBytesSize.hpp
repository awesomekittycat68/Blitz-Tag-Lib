#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    enum class PackedBytesSize : int {
        UInt8 = 1,
        UInt16 = 2,
        UInt32 = 3,
        UInt64 = 4,
    };
}
