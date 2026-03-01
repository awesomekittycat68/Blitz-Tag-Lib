#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    enum class EvolvingCosmetic_EvolutionStage_EventAtTime_Type : int {
        SecondsFromBeginning = 0,
        SecondsBeforeEnd = 1,
        DurationFraction = 2,
    };
}
