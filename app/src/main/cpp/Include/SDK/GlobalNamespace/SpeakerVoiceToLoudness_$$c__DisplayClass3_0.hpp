#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SpeakerVoiceToLoudness_$$c__DisplayClass3_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SpeakerVoiceToLoudness").GetInnerClass("<>c__DisplayClass3_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Voice::AudioOutDelayControl_PlayDelayConfig* GetPdc() {
            static BNM::Field<::Photon_Voice::AudioOutDelayControl_PlayDelayConfig*> _field = GetClass().GetField(O("pdc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Speaker* GetSpeaker() {
            static BNM::Field<::Photon_Voice_Unity::Speaker*> _field = GetClass().GetField(O("speaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPdc(::Photon_Voice::AudioOutDelayControl_PlayDelayConfig* value) {
            static BNM::Field<::Photon_Voice::AudioOutDelayControl_PlayDelayConfig*> _field = GetClass().GetField(O("pdc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeaker(::Photon_Voice_Unity::Speaker* value) {
            static BNM::Field<::Photon_Voice_Unity::Speaker*> _field = GetClass().GetField(O("speaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
