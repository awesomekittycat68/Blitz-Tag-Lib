#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class KIDAudioManager_KIDSoundType : int {
        ButtonClick = 0,
        Hover = 1,
        Success = 2,
        Denied = 3,
        InputBack = 4,
        TurnOffPermission = 5,
        PageTransition = 6,
        ButtonHeld = 7,
    };
}
