#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CornOnCobCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CornOnCobCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetEmissionModule() {
            static BNM::Field<void*> _field = GetClass().GetField(O("emissionModule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxBurstProbability() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxBurstProbability"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetParticleEmissionCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("particleEmissionCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetParticleSys() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("particleSys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPreviousParticleCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("previousParticleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ThermalReceiver* GetThermalReceiver() {
            static BNM::Field<::GlobalNamespace::ThermalReceiver*> _field = GetClass().GetField(O("thermalReceiver"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEmissionModule(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("emissionModule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxBurstProbability(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxBurstProbability"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleEmissionCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("particleEmissionCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleSys(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("particleSys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousParticleCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("previousParticleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThermalReceiver(::GlobalNamespace::ThermalReceiver* value) {
            static BNM::Field<::GlobalNamespace::ThermalReceiver*> _field = GetClass().GetField(O("thermalReceiver"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
