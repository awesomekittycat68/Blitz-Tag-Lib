#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace LitJson {
    enum class JsonType : int {
        None = 0,
        Object = 1,
        Array = 2,
        String = 3,
        Int = 4,
        Long = 5,
        Double = 6,
        Boolean = 7,
    };
}
