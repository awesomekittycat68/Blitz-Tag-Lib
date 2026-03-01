#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class VRRig_PartyMemberStatus : int {
        NeedsUpdate = 0,
        InLocalParty = 1,
        NotInLocalParty = 2,
    };
}
