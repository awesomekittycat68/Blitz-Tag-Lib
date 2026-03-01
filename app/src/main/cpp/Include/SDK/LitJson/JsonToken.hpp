#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace LitJson {
    enum class JsonToken : int {
        None = 0,
        ObjectStart = 1,
        PropertyName = 2,
        ObjectEnd = 3,
        ArrayStart = 4,
        ArrayEnd = 5,
        Int = 6,
        Long = 7,
        Double = 8,
        String = 9,
        Boolean = 10,
        Null = 11,
    };
}
