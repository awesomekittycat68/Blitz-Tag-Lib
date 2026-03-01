#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "WaterVolume_SurfaceQuery.hpp"

namespace GorillaLocomotion_Swimming {
    struct WaterOverlappingCollider : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Swimming", "WaterOverlappingCollider");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetBoundingRadiusOverride() {
            static BNM::Field<float> _field = GetClass().GetField(O("boundingRadiusOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("collider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInVolume() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInWater() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastBoundingRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastBoundingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastInWaterTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastInWaterTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastRipplePosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastRipplePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastRippleScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRippleScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastRippleTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRippleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery GetLastSurfaceQuery() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _field = GetClass().GetField(O("lastSurfaceQuery"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextDripTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextDripTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideBoundingRadius() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideBoundingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkView* GetPhotonViewForRPC() {
            static BNM::Field<::GlobalNamespace::NetworkView*> _field = GetClass().GetField(O("photonViewForRPC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayBigSplash() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playBigSplash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayDripEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playDripEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScaleMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSurfaceDetected() {
            static BNM::Field<bool> _field = GetClass().GetField(O("surfaceDetected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaVelocityTracker* GetVelocityTracker() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("velocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBoundingRadiusOverride(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("boundingRadiusOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("collider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInVolume(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInWater(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastBoundingRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastBoundingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastInWaterTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastInWaterTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRipplePosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastRipplePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRippleScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRippleScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRippleTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastRippleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSurfaceQuery(::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterVolume_SurfaceQuery> _field = GetClass().GetField(O("lastSurfaceQuery"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextDripTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextDripTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideBoundingRadius(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideBoundingRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonViewForRPC(::GlobalNamespace::NetworkView* value) {
            static BNM::Field<::GlobalNamespace::NetworkView*> _field = GetClass().GetField(O("photonViewForRPC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayBigSplash(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playBigSplash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayDripEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playDripEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scaleMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceDetected(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("surfaceDetected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityTracker(::GorillaLocomotion_Climbing::GorillaVelocityTracker* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaVelocityTracker*> _field = GetClass().GetField(O("velocityTracker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float GetBoundingRadiusOnSurface(::BNM::Structures::Unity::Vector3 surfaceNormal) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetBoundingRadiusOnSurface"), {"surfaceNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(surfaceNormal);
        }
        ::BNM::Structures::Unity::Vector3 GetClosestPositionOnSurface(::BNM::Structures::Unity::Vector3 surfacePoint, ::BNM::Structures::Unity::Vector3 surfaceNormal) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetClosestPositionOnSurface"), {"surfacePoint", "surfaceNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(surfacePoint, surfaceNormal);
        }
        void PlayDripEffect(::GameObject* rippleEffectPrefab, ::BNM::Structures::Unity::Vector3 surfacePoint, ::BNM::Structures::Unity::Vector3 surfaceNormal, float dripScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDripEffect"), {"rippleEffectPrefab", "surfacePoint", "surfaceNormal", "dripScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rippleEffectPrefab, surfacePoint, surfaceNormal, dripScale);
        }
        void PlayRippleEffect(::GameObject* rippleEffectPrefab, ::BNM::Structures::Unity::Vector3 surfacePoint, ::BNM::Structures::Unity::Vector3 surfaceNormal, float defaultRippleScale, float currentTime, ::GorillaLocomotion_Swimming::WaterVolume* volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayRippleEffect"), {"rippleEffectPrefab", "surfacePoint", "surfaceNormal", "defaultRippleScale", "currentTime", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rippleEffectPrefab, surfacePoint, surfaceNormal, defaultRippleScale, currentTime, volume);
        }
        void PlaySplashEffect(::GameObject* splashEffectPrefab, ::BNM::Structures::Unity::Vector3 splashPosition, float splashScale, bool bigSplash, bool enteringWater, ::GorillaLocomotion_Swimming::WaterVolume* volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySplashEffect"), {"splashEffectPrefab", "splashPosition", "splashScale", "bigSplash", "enteringWater", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(splashEffectPrefab, splashPosition, splashScale, bigSplash, enteringWater, volume);
        }
    };
}
