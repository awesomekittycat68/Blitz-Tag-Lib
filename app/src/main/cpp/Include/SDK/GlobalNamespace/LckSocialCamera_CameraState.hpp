#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class LckSocialCamera_CameraState : int {
        Empty = 0,
        Visible = 1,
        Recording = 2,
        OnNeck = 4,
    };
}
