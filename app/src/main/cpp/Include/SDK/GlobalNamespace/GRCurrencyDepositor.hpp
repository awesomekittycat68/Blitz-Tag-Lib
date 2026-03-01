#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRCurrencyDepositor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRCurrencyDepositor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float hapticStrength = 0.5f;
        static constexpr float hapticDuration = 0.15f;
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetCollectibleDepositedClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("collectibleDepositedClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCollectibleDepositedClipVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("collectibleDepositedClipVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetCollectibleDepositedEffect() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("collectibleDepositedEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCollectSentientCores() {
            static BNM::Field<bool> _field = GetClass().GetField(O("collectSentientCores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDepositingChargePoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("depositingChargePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleDepositedClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("collectibleDepositedClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleDepositedClipVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("collectibleDepositedClipVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleDepositedEffect(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("collectibleDepositedEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectSentientCores(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("collectSentientCores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositingChargePoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("depositingChargePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Init(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reactor);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
