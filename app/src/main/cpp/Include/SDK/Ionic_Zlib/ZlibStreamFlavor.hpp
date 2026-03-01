#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    enum class ZlibStreamFlavor : int {
        ZLIB = 1950,
        DEFLATE = 1951,
        GZIP = 1952,
    };
}
