#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class EgMessageType : uint8_t {
        Init = 0,
        InitResponse = 1,
        Operation = 2,
        OperationResponse = 3,
        Event = 4,
        DisconnectReason = 5,
        InternalOperationRequest = 6,
        InternalOperationResponse = 7,
        Message = 8,
        RawMessage = 9,
    };
}
