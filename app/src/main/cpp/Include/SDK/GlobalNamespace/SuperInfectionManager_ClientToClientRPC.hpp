#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SuperInfectionManager_ClientToClientRPC : int {
        BroadcastProgression = 0,
        LaunchDashYoyo = 1,
        CallEntityRPC = 2,
        CallEntityRPCData = 3,
    };
}
