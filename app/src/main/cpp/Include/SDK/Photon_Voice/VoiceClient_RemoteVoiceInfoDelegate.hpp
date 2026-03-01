#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RemoteVoiceOptions.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    struct VoiceClient_RemoteVoiceInfoDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "VoiceClient").GetInnerClass("RemoteVoiceInfoDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP6 = void*>
        void* BeginInvoke(int channelId, int playerId, uint8_t voiceId, ::Photon_Voice::VoiceInfo voiceInfo, ::Photon_Voice::RemoteVoiceOptions& options, ::BNM::IL2CPP::Il2CppObject* callback, TP6 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"channelId", "playerId", "voiceId", "voiceInfo", "options", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(channelId, playerId, voiceId, voiceInfo, &options, callback, object);
        }
        template <typename TP1 = void*>
        void EndInvoke(::Photon_Voice::RemoteVoiceOptions& options, TP1 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"options", "result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&options, result);
        }
        void Invoke(int channelId, int playerId, uint8_t voiceId, ::Photon_Voice::VoiceInfo voiceInfo, ::Photon_Voice::RemoteVoiceOptions& options) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"channelId", "playerId", "voiceId", "voiceInfo", "options"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, playerId, voiceId, voiceInfo, &options);
        }
    };
}
