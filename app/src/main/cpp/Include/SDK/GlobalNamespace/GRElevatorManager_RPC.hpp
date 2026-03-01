#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GRElevatorManager_RPC : int {
        RemoteElevatorButtonPress = 0,
        RemoteActivateTeleport = 1,
    };
}
