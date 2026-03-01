#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Json {
    enum class NullValueHandling : int {
        Include = 0,
        Ignore = 1,
    };
}
