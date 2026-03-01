#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GetSessionResponseType : int {
        OK = 200,
        NOT_FOUND = 204,
        LOST = 404,
        ERROR = 0,
    };
}
