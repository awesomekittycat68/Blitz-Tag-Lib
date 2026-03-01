#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class PhotonEvent_RaiseMode : int {
        Local = 0,
        RemoteOthers = 1,
        RemoteAll = 2,
    };
}
