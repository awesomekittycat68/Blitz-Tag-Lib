#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayerEffect.hpp"

namespace GlobalNamespace {
    struct SlingshotProjectile_AOEKnockbackConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SlingshotProjectile").GetInnerClass("AOEKnockbackConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAeoInnerRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("aeoInnerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAeoOuterRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("aeoOuterRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApplyAOEKnockback() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyAOEKnockback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetImpactVelocityThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("impactVelocityThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetKnockbackVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PlayerEffect GetPlayerProximityEffect() {
            static BNM::Field<::GlobalNamespace::PlayerEffect> _field = GetClass().GetField(O("playerProximityEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAeoInnerRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("aeoInnerRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAeoOuterRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("aeoOuterRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyAOEKnockback(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyAOEKnockback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactVelocityThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("impactVelocityThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerProximityEffect(::GlobalNamespace::PlayerEffect value) {
            static BNM::Field<::GlobalNamespace::PlayerEffect> _field = GetClass().GetField(O("playerProximityEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
