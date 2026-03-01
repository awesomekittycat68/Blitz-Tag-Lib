#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    enum class CompressionLevel : int {
        None = 0,
        Level0 = 0,
        BestSpeed = 1,
        Level1 = 1,
        Level2 = 2,
        Level3 = 3,
        Level4 = 4,
        Level5 = 5,
        Default = 6,
        Level6 = 6,
        Level7 = 7,
        Level8 = 8,
        BestCompression = 9,
        Level9 = 9,
    };
}
