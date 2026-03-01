#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class LivestreamingAudience : int {
        Unknown = 0,
        Public = 1,
        Friends = 2,
        OnlyMe = 3,
    };
}
