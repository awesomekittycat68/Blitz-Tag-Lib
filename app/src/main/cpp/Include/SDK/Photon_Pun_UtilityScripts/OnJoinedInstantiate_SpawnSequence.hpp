#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    enum class OnJoinedInstantiate_SpawnSequence : int {
        Connection = 0,
        Random = 1,
        RoundRobin = 2,
    };
}
