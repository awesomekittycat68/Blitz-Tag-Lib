#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class PermissionType : int {
        Unknown = 0,
        Microphone = 1,
        WriteExternalStorage = 2,
    };
}
