#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class ShareMediaStatus : int {
        Unknown = 0,
        Shared = 1,
        Canceled = 2,
    };
}
