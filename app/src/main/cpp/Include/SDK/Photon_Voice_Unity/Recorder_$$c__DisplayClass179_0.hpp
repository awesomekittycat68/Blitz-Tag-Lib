#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct Recorder_$$c__DisplayClass179_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "Recorder").GetInnerClass("<>c__DisplayClass179_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<float>* GetDetectionEndedCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<float>*> _field = GetClass().GetField(O("detectionEndedCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDetectionEndedCallback(::BNM::Structures::Mono::Action<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<float>*> _field = GetClass().GetField(O("detectionEndedCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
