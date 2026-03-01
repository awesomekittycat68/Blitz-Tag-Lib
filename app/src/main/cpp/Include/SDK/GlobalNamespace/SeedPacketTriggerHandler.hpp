#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SeedPacketTriggerHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SeedPacketTriggerHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDestroyDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDestroyOnTriggerEnter() {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyOnTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnTriggerEntered() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onTriggerEntered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetParticleToPlay() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("particleToPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetToggleOnceOnly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("toggleOnceOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTriggerEntered() {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerEntered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDestroyDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyOnTriggerEnter(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyOnTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTriggerEntered(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onTriggerEntered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleToPlay(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("particleToPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleOnceOnly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("toggleOnceOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerEntered(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerEntered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Destroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Destroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEntered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEntered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
