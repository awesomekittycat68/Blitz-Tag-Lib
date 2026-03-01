#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    enum class ZlibBaseStream_StreamMode : int {
        Writer = 0,
        Reader = 1,
        Undefined = 2,
    };
}
