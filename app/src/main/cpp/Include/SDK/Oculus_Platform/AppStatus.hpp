#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    enum class AppStatus : int {
        Unknown = 0,
        Entitled = 1,
        DownloadQueued = 2,
        Downloading = 3,
        Installing = 4,
        Installed = 5,
        Uninstalling = 6,
        InstallQueued = 7,
    };
}
