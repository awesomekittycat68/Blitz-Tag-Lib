#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class NetworkSystemFusion_InternalState : int {
        AwaitingAuth = 0,
        Idle = 1,
        Searching_Joining = 2,
        Searching_Joined = 3,
        Searching_JoinFailed = 4,
        Searching_Disconnecting = 5,
        Searching_Disconnected = 6,
        ConnectingToRoom = 7,
        ConnectedToRoom = 8,
        JoinRoomFailed = 9,
        Disconnecting = 10,
        Disconnected = 11,
        StateCheckFailed = 12,
    };
}
