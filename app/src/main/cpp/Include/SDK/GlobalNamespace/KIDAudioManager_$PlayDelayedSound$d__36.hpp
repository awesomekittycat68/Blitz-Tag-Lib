#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "KIDAudioManager_KIDSoundType.hpp"

namespace GlobalNamespace {
    struct KIDAudioManager_$PlayDelayedSound$d__36 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDAudioManager").GetInnerClass("<PlayDelayedSound>d__36");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDAudioManager_KIDSoundType GetSoundType() {
            static BNM::Field<::GlobalNamespace::KIDAudioManager_KIDSoundType> _field = GetClass().GetField(O("soundType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundType(::GlobalNamespace::KIDAudioManager_KIDSoundType value) {
            static BNM::Field<::GlobalNamespace::KIDAudioManager_KIDSoundType> _field = GetClass().GetField(O("soundType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
