#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class NetworkSystemPUN_InternalState : int {
        AwaitingAuth = 0,
        Authenticated = 1,
        PingGathering = 2,
        StateCheckFailed = 3,
        ConnectingToMaster = 4,
        ConnectedToMaster = 5,
        Idle = 6,
        Internal_Disconnecting = 7,
        Internal_Disconnected = 8,
        Searching_Connecting = 9,
        Searching_Connected = 10,
        Searching_Joining = 11,
        Searching_Joined = 12,
        Searching_JoinFailed = 13,
        Searching_JoinFailed_Full = 14,
        Searching_Creating = 15,
        Searching_Created = 16,
        Searching_CreateFailed = 17,
        Searching_Disconnecting = 18,
        Searching_Disconnected = 19,
    };
}
