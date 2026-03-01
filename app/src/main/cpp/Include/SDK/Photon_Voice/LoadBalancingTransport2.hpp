#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FrameFlags.hpp"
#include "LoadBalancingTransport.hpp"

namespace Photon_Voice {
    struct LoadBalancingTransport2 : ::Photon_Voice::LoadBalancingTransport {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "LoadBalancingTransport2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int DATA_OFFSET = 4;
        void onEventActionVoiceClient(::ExitGames_Client_Photon::EventData* ev) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onEventActionVoiceClient"), {"ev"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ev);
        }
        template <typename TP0 = void*>
        void onVoiceFrameEvent(TP0 content0, int channelId, int playerId, int localPlayerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onVoiceFrameEvent"), {"content0", "channelId", "playerId", "localPlayerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(content0, channelId, playerId, localPlayerId);
        }
        template <typename TP0 = void*>
        void SendFrame(TP0 data, ::Photon_Voice::FrameFlags flags, uint8_t evNumber, uint8_t voiceId, int channelId, int targetPlayerId, bool reliable, ::Photon_Voice::LocalVoice* localVoice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendFrame"), {"data", "flags", "evNumber", "voiceId", "channelId", "targetPlayerId", "reliable", "localVoice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, flags, evNumber, voiceId, channelId, targetPlayerId, reliable, localVoice);
        }
    };
}
