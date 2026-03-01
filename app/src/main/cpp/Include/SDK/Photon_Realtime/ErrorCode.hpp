#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct ErrorCode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "ErrorCode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int Ok = 0;
        static constexpr int OperationNotAllowedInCurrentState = -3;
        static constexpr int InvalidOperationCode = -2;
        static constexpr int InvalidOperation = -2;
        static constexpr int InternalServerError = -1;
        static constexpr int InvalidAuthentication = 32767;
        static constexpr int GameIdAlreadyExists = 32766;
        static constexpr int GameFull = 32765;
        static constexpr int GameClosed = 32764;
        static constexpr int AlreadyMatched = 32763;
        static constexpr int ServerFull = 32762;
        static constexpr int UserBlocked = 32761;
        static constexpr int NoRandomMatchFound = 32760;
        static constexpr int GameDoesNotExist = 32758;
        static constexpr int MaxCcuReached = 32757;
        static constexpr int InvalidRegion = 32756;
        static constexpr int CustomAuthenticationFailed = 32755;
        static constexpr int AuthenticationTicketExpired = 32753;
        static constexpr int PluginReportedError = 32752;
        static constexpr int PluginMismatch = 32751;
        static constexpr int JoinFailedPeerAlreadyJoined = 32750;
        static constexpr int JoinFailedFoundInactiveJoiner = 32749;
        static constexpr int JoinFailedWithRejoinerNotFound = 32748;
        static constexpr int JoinFailedFoundExcludedUserId = 32747;
        static constexpr int JoinFailedFoundActiveJoiner = 32746;
        static constexpr int HttpLimitReached = 32745;
        static constexpr int ExternalHttpCallFailed = 32744;
        static constexpr int OperationLimitReached = 32743;
        static constexpr int SlotError = 32742;
        static constexpr int InvalidEncryptionParameters = 32741;
    };
}
