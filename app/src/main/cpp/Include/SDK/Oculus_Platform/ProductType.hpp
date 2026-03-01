#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class ProductType : int {
        Unknown = 0,
        DURABLE = 1,
        CONSUMABLE = 2,
        SUBSCRIPTION = 3,
    };
}
