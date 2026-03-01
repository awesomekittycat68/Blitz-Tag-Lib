#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "XSceneRef.hpp"

namespace GlobalNamespace {
    struct PlayerSpeedBasedAudio : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayerSpeedBasedAudio");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBaseVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("baseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentFadeLevel() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentFadeLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFadeRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFadeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFullVolumeSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("fullVolumeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XSceneRef GetLocalPlayerVelocityEstimator() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("localPlayerVelocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinVolumeSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("minVolumeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetVelocityEstimator() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("baseVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentFadeLevel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentFadeLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFadeRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFadeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullVolumeSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fullVolumeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerVelocityEstimator(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("localPlayerVelocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinVolumeSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minVolumeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimator(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
