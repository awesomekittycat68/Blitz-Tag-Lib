#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace TagEffects {
    enum class IHandEffectsTrigger_Mode : int {
        HighFive = 0,
        FistBump = 1,
        Tag3P = 2,
        Tag1P = 3,
        HighFive_And_FistBump = 4,
    };
}
