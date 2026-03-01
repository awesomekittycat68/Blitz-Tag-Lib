#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Json {
    enum class PlayFabSimpleJson_TokenType : uint8_t {
        NONE = 0,
        CURLY_OPEN = 1,
        CURLY_CLOSE = 2,
        SQUARED_OPEN = 3,
        SQUARED_CLOSE = 4,
        COLON = 5,
        COMMA = 6,
        STRING = 7,
        NUMBER = 8,
        TRUE = 9,
        FALSE = 10,
        NULL = 11,
    };
}
