#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class EMainScreenStatus : int {
        None = 0,
        Updated = 1,
        Declined = 2,
        Pending = 3,
        Timedout = 4,
        Setup = 5,
        Previous = 6,
        Missing = 7,
        FullControl = 8,
    };
}
