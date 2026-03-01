#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    enum class WebRequestType : int {
        UnityWebRequest = 0,
        HttpWebRequest = 1,
        CustomHttp = 2,
    };
}
