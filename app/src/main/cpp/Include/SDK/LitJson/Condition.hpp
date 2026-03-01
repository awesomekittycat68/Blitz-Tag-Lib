#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace LitJson {
    enum class Condition : int {
        InArray = 0,
        InObject = 1,
        NotAProperty = 2,
        Property = 3,
        Value = 4,
    };
}
