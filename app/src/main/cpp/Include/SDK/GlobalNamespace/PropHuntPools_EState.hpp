#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class PropHuntPools_EState : int {
        None = 0,
        WaitingForTitleData = 1,
        WaitingForLocalPlayerToVisitBayou = 2,
        SpawningProps = 3,
        Ready = 4,
    };
}
