#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class LegalAgreementBodyText_State : int {
        Ready = 0,
        Loading = 1,
        Error = 2,
    };
}
