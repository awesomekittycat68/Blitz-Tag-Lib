#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    enum class JoinType : int {
        Solo = 0,
        JoinWithNearby = 1,
        JoinWithParty = 2,
        JoinWithElevator = 3,
        ForceJoinWithParty = 4,
        FollowingNearby = 5,
        FollowingParty = 6,
        FriendStationPublic = 7,
        FriendStationPrivate = 8,
    };
}
