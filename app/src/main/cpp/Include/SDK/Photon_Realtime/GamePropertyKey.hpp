#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct GamePropertyKey : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "GamePropertyKey");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t MaxPlayers = 255;
        static constexpr uint8_t IsVisible = 254;
        static constexpr uint8_t IsOpen = 253;
        static constexpr uint8_t PlayerCount = 252;
        static constexpr uint8_t Removed = 251;
        static constexpr uint8_t PropsListedInLobby = 250;
        static constexpr uint8_t CleanupCacheOnLeave = 249;
        static constexpr uint8_t MasterClientId = 248;
        static constexpr uint8_t ExpectedUsers = 247;
        static constexpr uint8_t PlayerTtl = 246;
        static constexpr uint8_t EmptyRoomTtl = 245;
    };
}
