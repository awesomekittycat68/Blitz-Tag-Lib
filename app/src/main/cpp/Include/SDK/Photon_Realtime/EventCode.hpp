#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct EventCode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "EventCode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t GameList = 230;
        static constexpr uint8_t GameListUpdate = 229;
        static constexpr uint8_t QueueState = 228;
        static constexpr uint8_t Match = 227;
        static constexpr uint8_t AppStats = 226;
        static constexpr uint8_t LobbyStats = 224;
        static constexpr uint8_t AzureNodeInfo = 210;
        static constexpr uint8_t Join = 255;
        static constexpr uint8_t Leave = 254;
        static constexpr uint8_t PropertiesChanged = 253;
        static constexpr uint8_t SetProperties = 253;
        static constexpr uint8_t ErrorInfo = 251;
        static constexpr uint8_t CacheSliceChanged = 250;
        static constexpr uint8_t AuthEvent = 223;
    };
}
