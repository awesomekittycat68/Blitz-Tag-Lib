#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticRefID.hpp"

namespace GlobalNamespace {
    struct LeafBlowerEffects : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LeafBlowerEffects");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::ParticleSystem* GetAngledHitParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("angledHitParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticFan* GetFan() {
            static BNM::Field<::GlobalNamespace::CosmeticFan*> _field = GetClass().GetField(O("fan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticRefID GetFanRef() {
            static BNM::Field<::GlobalNamespace::CosmeticRefID> _field = GetClass().GetField(O("fanRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGunBarrel() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gunBarrel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeadToleranceAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("headToleranceAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeadToleranceAngleCos() {
            static BNM::Field<float> _field = GetClass().GetField(O("headToleranceAngleCos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProjectionRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("projectionRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProjectionWidth() {
            static BNM::Field<float> _field = GetClass().GetField(O("projectionWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRaycastLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("raycastLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSquareHitAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("squareHitAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSquareHitAngleCos() {
            static BNM::Field<float> _field = GetClass().GetField(O("squareHitAngleCos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSquareHitParticleSystem() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("squareHitParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAngledHitParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("angledHitParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFan(::GlobalNamespace::CosmeticFan* value) {
            static BNM::Field<::GlobalNamespace::CosmeticFan*> _field = GetClass().GetField(O("fan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFanRef(::GlobalNamespace::CosmeticRefID value) {
            static BNM::Field<::GlobalNamespace::CosmeticRefID> _field = GetClass().GetField(O("fanRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGunBarrel(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gunBarrel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadToleranceAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("headToleranceAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadToleranceAngleCos(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("headToleranceAngleCos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectionRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("projectionRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectionWidth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("projectionWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("raycastLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSquareHitAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("squareHitAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSquareHitAngleCos(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("squareHitAngleCos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSquareHitParticleSystem(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("squareHitParticleSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BlowFaces() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BlowFaces"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProjectParticles() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProjectParticles"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartFan() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartFan"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopFan() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopFan"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryBlowFace(::GlobalNamespace::VRRig* rig, ::BNM::Structures::Unity::Vector3 origin, ::BNM::Structures::Unity::Vector3 directionNormalized) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryBlowFace"), {"rig", "origin", "directionNormalized"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, origin, directionNormalized);
        }
        void UpdateEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
