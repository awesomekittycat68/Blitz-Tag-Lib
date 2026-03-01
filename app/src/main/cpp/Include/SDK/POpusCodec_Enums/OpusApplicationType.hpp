#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace POpusCodec_Enums {
    enum class OpusApplicationType : int {
        Voip = 2048,
        Audio = 2049,
        RestrictedLowDelay = 2051,
    };
}
