#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct OperationCode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "OperationCode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t ExchangeKeysForEncryption = 250;
        static constexpr uint8_t Join = 255;
        static constexpr uint8_t AuthenticateOnce = 231;
        static constexpr uint8_t Authenticate = 230;
        static constexpr uint8_t JoinLobby = 229;
        static constexpr uint8_t LeaveLobby = 228;
        static constexpr uint8_t CreateGame = 227;
        static constexpr uint8_t JoinGame = 226;
        static constexpr uint8_t JoinRandomGame = 225;
        static constexpr uint8_t Leave = 254;
        static constexpr uint8_t RaiseEvent = 253;
        static constexpr uint8_t SetProperties = 252;
        static constexpr uint8_t GetProperties = 251;
        static constexpr uint8_t ChangeGroups = 248;
        static constexpr uint8_t FindFriends = 222;
        static constexpr uint8_t FindFriendsUpdate = 223;
        static constexpr uint8_t GetLobbyStats = 221;
        static constexpr uint8_t GetRegions = 220;
        static constexpr uint8_t WebRpc = 219;
        static constexpr uint8_t ServerSettings = 218;
        static constexpr uint8_t GetGameList = 217;
    };
}
