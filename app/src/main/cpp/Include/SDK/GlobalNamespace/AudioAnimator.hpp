#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AudioAnimator_AudioTarget.hpp"

namespace GlobalNamespace {
    struct AudioAnimator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AudioAnimator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDidInitBaseVolume() {
            static BNM::Field<bool> _field = GetClass().GetField(O("didInitBaseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::AudioAnimator_AudioTarget>* GetTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::AudioAnimator_AudioTarget>*> _field = GetClass().GetField(O("targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDidInitBaseVolume(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("didInitBaseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::AudioAnimator_AudioTarget>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::AudioAnimator_AudioTarget>*> _field = GetClass().GetField(O("targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void InitBaseVolume() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitBaseVolume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePitchAndVolume(float pitchValue, float volumeValue, bool ignoreSmoothing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePitchAndVolume"), {"pitchValue", "volumeValue", "ignoreSmoothing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pitchValue, volumeValue, ignoreSmoothing);
        }
        void UpdateValue(float value, bool ignoreSmoothing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateValue"), {"value", "ignoreSmoothing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value, ignoreSmoothing);
        }
    };
}
