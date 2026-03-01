#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct VoiceConnection_$$c__DisplayClass104_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "VoiceConnection").GetInnerClass("<>c__DisplayClass104_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Voice_Unity::Speaker* GetSpeaker() {
            static BNM::Field<::Photon_Voice_Unity::Speaker*> _field = GetClass().GetField(O("speaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSpeaker(::Photon_Voice_Unity::Speaker* value) {
            static BNM::Field<::Photon_Voice_Unity::Speaker*> _field = GetClass().GetField(O("speaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
