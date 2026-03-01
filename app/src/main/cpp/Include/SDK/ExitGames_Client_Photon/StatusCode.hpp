#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    enum class StatusCode : int {
        Connect = 1024,
        Disconnect = 1025,
        Exception = 1026,
        ExceptionOnConnect = 1023,
        ServerAddressInvalid = 1050,
        DnsExceptionOnConnect = 1051,
        SecurityExceptionOnConnect = 1022,
        SendError = 1030,
        ExceptionOnReceive = 1039,
        TimeoutDisconnect = 1040,
        DisconnectByServerTimeout = 1041,
        DisconnectByServerUserLimit = 1042,
        DisconnectByServerLogic = 1043,
        DisconnectByServerReasonUnknown = 1044,
        EncryptionEstablished = 1048,
        EncryptionFailedToEstablish = 1049,
    };
}
