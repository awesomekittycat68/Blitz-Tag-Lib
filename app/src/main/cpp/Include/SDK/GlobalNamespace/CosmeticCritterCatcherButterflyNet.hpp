#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritterAction.hpp"
#include "CosmeticCritterCatcher.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterCatcherButterflyNet : ::GlobalNamespace::CosmeticCritterCatcher {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterCatcherButterflyNet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::ParticleSystem* GetCatchFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("catchFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetCatchSFX() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("catchSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetCaughtButterflyParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("caughtButterflyParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxCatchRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxCatchRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinCatchSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("minCatchSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaVelocityEstimator* GetVelocityEstimator() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCatchFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("catchFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchSFX(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("catchSFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCaughtButterflyParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("caughtButterflyParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCatchRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxCatchRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinCatchSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minCatchSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityEstimator(::GlobalNamespace::GorillaVelocityEstimator* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimator*> _field = GetClass().GetField(O("velocityEstimator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::CosmeticCritterAction GetLocalCatchAction(::GlobalNamespace::CosmeticCritter* critter) {
            static BNM::Method<::GlobalNamespace::CosmeticCritterAction> _m = GetClass().GetMethod(O("GetLocalCatchAction"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(critter);
        }
        void OnCatch(::GlobalNamespace::CosmeticCritter* critter, ::GlobalNamespace::CosmeticCritterAction catchAction, double serverTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCatch"), {"critter", "catchAction", "serverTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter, catchAction, serverTime);
        }
        bool ValidateRemoteCatchAction(::GlobalNamespace::CosmeticCritter* critter, ::GlobalNamespace::CosmeticCritterAction catchAction, double serverTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateRemoteCatchAction"), {"critter", "catchAction", "serverTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(critter, catchAction, serverTime);
        }
    };
}
