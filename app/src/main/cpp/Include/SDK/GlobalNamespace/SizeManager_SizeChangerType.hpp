#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class SizeManager_SizeChangerType : int {
        LocalOffline = 0,
        LocalOnline = 1,
        OtherOnline = 2,
    };
}
