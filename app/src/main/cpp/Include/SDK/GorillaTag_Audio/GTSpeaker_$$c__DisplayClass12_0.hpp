#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Audio {
    struct GTSpeaker_$$c__DisplayClass12_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Audio", "GTSpeaker").GetInnerClass("<>c__DisplayClass12_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Voice::AudioOutDelayControl_PlayDelayConfig* GetPdc() {
            static BNM::Field<::Photon_Voice::AudioOutDelayControl_PlayDelayConfig*> _field = GetClass().GetField(O("pdc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("source"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPdc(::Photon_Voice::AudioOutDelayControl_PlayDelayConfig* value) {
            static BNM::Field<::Photon_Voice::AudioOutDelayControl_PlayDelayConfig*> _field = GetClass().GetField(O("pdc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("source"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
