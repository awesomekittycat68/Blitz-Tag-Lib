#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Swimming {
    struct WaterSplashOverride : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Swimming", "WaterSplashOverride");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetBoundingRadiusOverride() {
            static BNM::Field<float> _field = GetClass().GetField(O("boundingRadiusOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideBoundingRadius() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideBoundingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayBigSplash() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playBigSplash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayDrippingEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playDrippingEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScaleByPlayersScale() {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleByPlayersScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSuppressWaterEffects() {
            static BNM::Field<bool> _field = GetClass().GetField(O("suppressWaterEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBoundingRadiusOverride(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("boundingRadiusOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideBoundingRadius(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideBoundingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayBigSplash(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playBigSplash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayDrippingEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playDrippingEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleByPlayersScale(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleByPlayersScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuppressWaterEffects(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("suppressWaterEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
