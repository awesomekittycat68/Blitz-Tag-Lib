#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritter.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterShadeFleeing : ::GlobalNamespace::CosmeticCritter {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterShadeFleeing");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Animator* GetAnimator() {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAnimatorProperty() {
            static BNM::Field<int> _field = GetClass().GetField(O("animatorProperty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetClosestCatcherDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("closestCatcherDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetFleeBobFrequencyXY() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("fleeBobFrequencyXY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetFleeBobFrequencyXYMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("fleeBobFrequencyXYMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetFleeBobMagnitudeXY() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("fleeBobMagnitudeXY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetFleeBobMagnitudeXYMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("fleeBobMagnitudeXYMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFleeDistanceToDespawn() {
            static BNM::Field<float> _field = GetClass().GetField(O("fleeDistanceToDespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFleeForward() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("fleeForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFleeRight() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("fleeRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFleeSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("fleeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetFleeUp() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("fleeUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>* GetModelSwaps() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>*> _field = GetClass().GetField(O("modelSwaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOrigin() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("origin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPullVector() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("pullVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetSpawnAudioClips() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("spawnAudioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetSpawnAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("spawnAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetSpawnFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("spawnFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTrailingPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("trailingPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimator(::Animator* value) {
            static BNM::Field<::Animator*> _field = GetClass().GetField(O("animator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimatorProperty(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("animatorProperty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClosestCatcherDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("closestCatcherDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFleeBobFrequencyXY(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("fleeBobFrequencyXY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFleeBobFrequencyXYMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("fleeBobFrequencyXYMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFleeBobMagnitudeXY(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("fleeBobMagnitudeXY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFleeBobMagnitudeXYMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("fleeBobMagnitudeXYMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFleeDistanceToDespawn(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fleeDistanceToDespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFleeForward(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("fleeForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFleeRight(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("fleeRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFleeSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fleeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFleeUp(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("fleeUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModelSwaps(::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>*> _field = GetClass().GetField(O("modelSwaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrigin(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("origin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPullVector(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("pullVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnAudioClips(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("spawnAudioClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("spawnAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("spawnFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrailingPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("trailingPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnSpawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetFleePosition(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 fleeFrom) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFleePosition"), {"position", "fleeFrom"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, fleeFrom);
        }
        void SetRandomVariables() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRandomVariables"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
