#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MarkOneMitts_Mitt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MarkOneMitts").GetInnerClass("Mitt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::ParticleSystem* GetBurst() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("burst"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetBursts() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("bursts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBurstTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("burstTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetFlame() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("flame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFlameForce() {
            static BNM::Field<void*> _field = GetClass().GetField(O("flameForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFlameMain() {
            static BNM::Field<void*> _field = GetClass().GetField(O("flameMain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFlameTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("flameTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTapStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTapStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ThermalSourceVolume* GetThermalSource() {
            static BNM::Field<::GlobalNamespace::ThermalSourceVolume*> _field = GetClass().GetField(O("thermalSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("timer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBurst(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("burst"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBursts(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("bursts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBurstTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("burstTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlame(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("flame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlameForce(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("flameForce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlameMain(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("flameMain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlameTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("flameTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTapStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTapStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThermalSource(::GlobalNamespace::ThermalSourceVolume* value) {
            static BNM::Field<::GlobalNamespace::ThermalSourceVolume*> _field = GetClass().GetField(O("thermalSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
