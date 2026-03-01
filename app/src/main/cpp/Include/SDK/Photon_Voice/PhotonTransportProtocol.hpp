#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FrameFlags.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    struct PhotonTransportProtocol : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "PhotonTransportProtocol");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetLogger() {
            static BNM::Field<void*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::VoiceClient* GetVoiceClient() {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("voiceClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLogger(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceClient(::Photon_Voice::VoiceClient* value) {
            static BNM::Field<::Photon_Voice::VoiceClient*> _field = GetClass().GetField(O("voiceClient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP2 = void*>
        ::BNM::Structures::Mono::Array<void*>* buildFrameMessage(uint8_t voiceId, uint8_t evNumber, TP2 data, ::Photon_Voice::FrameFlags flags) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("buildFrameMessage"), {"voiceId", "evNumber", "data", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(voiceId, evNumber, data, flags);
        }
        ::BNM::Structures::Mono::Array<void*>* buildVoiceRemoveMessage(::Photon_Voice::LocalVoice* v) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("buildVoiceRemoveMessage"), {"v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(v);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<void*>* buildVoicesInfo(TP0 voicesToSend, bool logInfo) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("buildVoicesInfo"), {"voicesToSend", "logInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(voicesToSend, logInfo);
        }
        ::Photon_Voice::VoiceInfo createVoiceInfoFromEventPayload(::BNM::Structures::Mono::Dictionary<uint8_t, void*>* h) {
            static BNM::Method<::Photon_Voice::VoiceInfo> _m = GetClass().GetMethod(O("createVoiceInfoFromEventPayload"), {"h"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(h);
        }
        template <typename TP0 = void*>
        void onVoiceEvent(TP0 content0, int channelId, int playerId, bool isLocalPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onVoiceEvent"), {"content0", "channelId", "playerId", "isLocalPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(content0, channelId, playerId, isLocalPlayer);
        }
        template <typename TP2 = void*>
        void onVoiceInfo(int channelId, int playerId, TP2 payload) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onVoiceInfo"), {"channelId", "playerId", "payload"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, playerId, payload);
        }
        template <typename TP2 = void*>
        void onVoiceRemove(int channelId, int playerId, TP2 payload) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onVoiceRemove"), {"channelId", "playerId", "payload"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, playerId, payload);
        }
    };
}
