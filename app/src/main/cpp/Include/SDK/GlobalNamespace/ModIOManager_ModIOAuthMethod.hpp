#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class ModIOManager_ModIOAuthMethod : int {
        Invalid = 0,
        LinkedAccount = 1,
        Steam = 2,
        Oculus = 3,
    };
}
