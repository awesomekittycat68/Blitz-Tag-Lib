#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TappableGuardianIdol_IdolActivationSound : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TappableGuardianIdol").GetInnerClass("IdolActivationSound");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioClip* GetActivation() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("activation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetLoop() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("loop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivation(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("activation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoop(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("loop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
