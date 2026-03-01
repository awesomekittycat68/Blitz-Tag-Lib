#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Rendering {
    enum class ZoneShaderSettings_EOverrideMode : int {
        LeaveUnchanged = 0,
        ApplyNewValue = 1,
        ApplyDefaultValue = 2,
    };
}
