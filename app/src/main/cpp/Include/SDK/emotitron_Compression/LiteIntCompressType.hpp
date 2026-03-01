#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace emotitron_Compression {
    enum class LiteIntCompressType : int {
        PackSigned = 0,
        PackUnsigned = 1,
        Range = 2,
    };
}
