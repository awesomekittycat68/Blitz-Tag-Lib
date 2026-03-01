#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Swimming {
    struct WaterParameters : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Swimming", "WaterParameters");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAllowBubblesInVolume() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowBubblesInVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBigSplashSpeedRequirement() {
            static BNM::Field<float> _field = GetClass().GetField(O("bigSplashSpeedRequirement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDefaultDistanceBetweenRipples() {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultDistanceBetweenRipples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinDistanceBetweenRipples() {
            static BNM::Field<float> _field = GetClass().GetField(O("minDistanceBetweenRipples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinTimeBetweenRipples() {
            static BNM::Field<float> _field = GetClass().GetField(O("minTimeBetweenRipples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerDripDefaultRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("perDripDefaultRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerDripRadiusRandRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("perDripRadiusRandRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerDripTimeDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("perDripTimeDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPerDripTimeRandRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("perDripTimeRandRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayDripEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playDripEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayRippleEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playRippleEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlaySplashEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playSplashEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPostExitDripDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("postExitDripDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRecomputeSurfaceForColliderDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("recomputeSurfaceForColliderDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRippleEffect() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rippleEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRippleEffectScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("rippleEffectScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetRippleSpriteColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("rippleSpriteColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSendSplashEffectRPCs() {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendSplashEffectRPCs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Gradient* GetSplashColorBySpeedGradient() {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("splashColorBySpeedGradient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSplashEffect() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("splashEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSplashEffectScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("splashEffectScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSplashSpeedRequirement() {
            static BNM::Field<float> _field = GetClass().GetField(O("splashSpeedRequirement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllowBubblesInVolume(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowBubblesInVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBigSplashSpeedRequirement(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bigSplashSpeedRequirement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultDistanceBetweenRipples(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultDistanceBetweenRipples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinDistanceBetweenRipples(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minDistanceBetweenRipples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinTimeBetweenRipples(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minTimeBetweenRipples"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerDripDefaultRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("perDripDefaultRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerDripRadiusRandRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("perDripRadiusRandRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerDripTimeDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("perDripTimeDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerDripTimeRandRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("perDripTimeRandRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayDripEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playDripEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayRippleEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playRippleEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaySplashEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playSplashEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPostExitDripDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("postExitDripDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecomputeSurfaceForColliderDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("recomputeSurfaceForColliderDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRippleEffect(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rippleEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRippleEffectScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rippleEffectScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRippleSpriteColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("rippleSpriteColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendSplashEffectRPCs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendSplashEffectRPCs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplashColorBySpeedGradient(::Gradient* value) {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("splashColorBySpeedGradient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplashEffect(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("splashEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplashEffectScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("splashEffectScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplashSpeedRequirement(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("splashSpeedRequirement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
