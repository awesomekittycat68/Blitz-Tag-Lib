#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class AbuseReportVideoMode : int {
        Unknown = 0,
        Collect = 1,
        Optional = 2,
        Skip = 3,
    };
}
