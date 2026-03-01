#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderScaleParticles : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderScaleParticles");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAutoPlay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEnableFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("enableFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetForceX() {
            static BNM::Field<void*> _field = GetClass().GetField(O("forceX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetForceY() {
            static BNM::Field<void*> _field = GetClass().GetField(O("forceY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetForceZ() {
            static BNM::Field<void*> _field = GetClass().GetField(O("forceZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityMod() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityMod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLifetimeVelocityX() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lifetimeVelocityX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLifetimeVelocityY() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lifetimeVelocityY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLifetimeVelocityZ() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lifetimeVelocityZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLimitMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("limitMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScaleForceOverLife() {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleForceOverLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScaleShape() {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleShape"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScaleVelocityLifetime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleVelocityLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScaleVelocityLimitLifetime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleVelocityLimitLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetScaleNextFrame() {
            static BNM::Field<bool> _field = GetClass().GetField(O("setScaleNextFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetShapeScale() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("shapeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldRevert() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRevert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSizeCurveCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sizeCurveCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSizeCurveXCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sizeCurveXCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSizeCurveYCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sizeCurveYCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSizeCurveZCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sizeCurveZCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSpeedCurveCache() {
            static BNM::Field<void*> _field = GetClass().GetField(O("speedCurveCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("system"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseLossyScale() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useLossyScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoPlay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("enableFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceX(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("forceX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceY(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("forceY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceZ(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("forceZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityMod(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityMod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLifetimeVelocityX(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lifetimeVelocityX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLifetimeVelocityY(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lifetimeVelocityY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLifetimeVelocityZ(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lifetimeVelocityZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimitMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("limitMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleForceOverLife(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleForceOverLife"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleShape(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleShape"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleVelocityLifetime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleVelocityLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleVelocityLimitLifetime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("scaleVelocityLimitLifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetScaleNextFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("setScaleNextFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShapeScale(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("shapeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldRevert(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRevert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeCurveCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sizeCurveCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeCurveXCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sizeCurveXCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeCurveYCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sizeCurveYCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeCurveZCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sizeCurveZCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeedCurveCache(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("speedCurveCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("system"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseLossyScale(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useLossyScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RevertScale() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RevertScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ScaleCurve(void*& curve, float scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ScaleCurve"), {"curve", "scale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&curve, scale);
        }
        void SetScale_1(float inScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScale"), {"inScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inScale);
        }
    };
}
