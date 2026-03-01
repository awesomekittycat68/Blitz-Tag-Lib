#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SlingshotProjectile_AOEKnockbackConfig.hpp"

namespace GlobalNamespace {
    struct GrowingSnowballThrowable_SizeParameters : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GrowingSnowballThrowable").GetInnerClass("SizeParameters");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig GetAoeKnockbackConfig() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig> _field = GetClass().GetField(O("aoeKnockbackConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetImpactEffectScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetImpactSoundPitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("impactSoundPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetImpactSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("impactSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnowballScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("snowballScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrowSpeedMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("throwSpeedMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAoeKnockbackConfig(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig> _field = GetClass().GetField(O("aoeKnockbackConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactEffectScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("impactEffectScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactSoundPitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("impactSoundPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImpactSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("impactSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnowballScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("snowballScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowSpeedMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("throwSpeedMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
