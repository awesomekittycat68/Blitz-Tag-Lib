#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_CloudScriptModels {
    enum class CloudScriptRevisionOption : int {
        Live = 0,
        Latest = 1,
        Specific = 2,
    };
}
