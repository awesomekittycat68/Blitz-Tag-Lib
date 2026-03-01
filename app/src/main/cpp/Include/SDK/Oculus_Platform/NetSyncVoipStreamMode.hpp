#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class NetSyncVoipStreamMode : int {
        Unknown = 0,
        Ambisonic = 1,
        Mono = 2,
    };
}
