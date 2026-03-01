#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HotPepperFace : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HotPepperFace");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetBreathSpeaker() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_breathSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEffectLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("_effectLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFaceMesh() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_faceMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetFireFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("_fireFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetFlameSpeaker() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_flameSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetThermalSourceVolume() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_thermalSourceVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBreathSpeaker(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_breathSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEffectLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_effectLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFaceMesh(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_faceMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("_fireFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlameSpeaker(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("_flameSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThermalSourceVolume(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_thermalSourceVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void PlayFX() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayFX(float delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFX"), {"delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(delay);
        }
        void StopFX() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
