#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class ReportRequestResponse : int {
        Unknown = 0,
        Handled = 1,
        Unhandled = 2,
        Unavailable = 3,
    };
}
