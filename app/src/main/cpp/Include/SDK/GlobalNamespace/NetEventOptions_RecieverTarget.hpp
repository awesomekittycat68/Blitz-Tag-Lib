#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class NetEventOptions_RecieverTarget : int {
        others = 0,
        all = 1,
        master = 2,
    };
}
