#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class Mole_MoleState : int {
        Reset = 0,
        Ready = 1,
        TransitionToVisible = 2,
        Visible = 3,
        TransitionToHidden = 4,
        Hidden = 5,
    };
}
