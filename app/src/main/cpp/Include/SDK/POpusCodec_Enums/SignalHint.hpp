#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace POpusCodec_Enums {
    enum class SignalHint : int {
        Auto = -1000,
        Voice = 3001,
        Music = 3002,
    };
}
