#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    enum class SceneBakeMode : int {
        Always = 0,
        OnBuildPlayer = 1,
        OnEditorPlayMode = 2,
        Disabled = 3,
    };
}
