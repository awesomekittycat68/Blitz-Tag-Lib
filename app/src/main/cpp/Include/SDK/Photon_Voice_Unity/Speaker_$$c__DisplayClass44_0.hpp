#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct Speaker_$$c__DisplayClass44_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "Speaker").GetInnerClass("<>c__DisplayClass44_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Voice::AudioOutDelayControl_PlayDelayConfig* GetPdc() {
            static BNM::Field<::Photon_Voice::AudioOutDelayControl_PlayDelayConfig*> _field = GetClass().GetField(O("pdc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPdc(::Photon_Voice::AudioOutDelayControl_PlayDelayConfig* value) {
            static BNM::Field<::Photon_Voice::AudioOutDelayControl_PlayDelayConfig*> _field = GetClass().GetField(O("pdc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
