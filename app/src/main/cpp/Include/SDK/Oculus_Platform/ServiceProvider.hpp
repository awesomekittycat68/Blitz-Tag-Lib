#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class ServiceProvider : int {
        Unknown = 0,
        Dropbox = 1,
        Facebook = 2,
        Google = 3,
        Instagram = 4,
        RemoteMedia = 5,
    };
}
