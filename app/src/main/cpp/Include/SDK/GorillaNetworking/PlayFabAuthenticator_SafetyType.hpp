#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    enum class PlayFabAuthenticator_SafetyType : int {
        None = 0,
        Auto = 1,
        OptIn = 2,
    };
}
