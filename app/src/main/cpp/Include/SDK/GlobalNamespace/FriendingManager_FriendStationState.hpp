#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class FriendingManager_FriendStationState : int {
        NotInRoom = 0,
        WaitingForPlayers = 1,
        WaitingOnFriendStatusBoth = 2,
        WaitingOnFriendStatusPlayerA = 3,
        WaitingOnFriendStatusPlayerB = 4,
        WaitingOnButtonBoth = 5,
        WaitingOnButtonPlayerA = 6,
        WaitingOnButtonPlayerB = 7,
        ButtonConfirmationTimer0 = 8,
        ButtonConfirmationTimer1 = 9,
        ButtonConfirmationTimer2 = 10,
        ButtonConfirmationTimer3 = 11,
        ButtonConfirmationTimer4 = 12,
        WaitingOnRequestBoth = 13,
        WaitingOnRequestPlayerA = 14,
        WaitingOnRequestPlayerB = 15,
        RequestFailed = 16,
        Friends = 17,
        AlreadyFriends = 18,
    };
}
