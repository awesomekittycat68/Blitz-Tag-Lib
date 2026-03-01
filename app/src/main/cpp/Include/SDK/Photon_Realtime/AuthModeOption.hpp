#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    enum class AuthModeOption : int {
        Auth = 0,
        AuthOnce = 1,
        AuthOnceWss = 2,
    };
}
