#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class KeyValuePairType : int {
        String = 0,
        Int = 1,
        Double = 2,
        Unknown = 3,
    };
}
