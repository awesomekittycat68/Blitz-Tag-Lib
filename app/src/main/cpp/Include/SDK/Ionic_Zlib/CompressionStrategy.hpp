#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    enum class CompressionStrategy : int {
        Default = 0,
        Filtered = 1,
        HuffmanOnly = 2,
    };
}
