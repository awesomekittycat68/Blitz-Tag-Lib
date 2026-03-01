#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRCollectibleDispenser : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRCollectibleDispenser");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCollectibleAlreadySpawned() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CollectibleAlreadySpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetReadyToDispenseNewCollectible() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ReadyToDispenseNewCollectible"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCollectibleCollectedTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("collectibleCollectedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCollectibleDispenseRequestTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("collectibleDispenseRequestTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCollectibleDispenseTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("collectibleDispenseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCollectibleLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("collectibleLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetCollectiblePrefab() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("collectiblePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCollectibleRespawnTimeMinutes() {
            static BNM::Field<float> _field = GetClass().GetField(O("collectibleRespawnTimeMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetCollectiblesCollected() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("collectiblesCollected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetCollectiblesDispensed() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("collectiblesDispensed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetCollectibleTakenClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("collectibleTakenClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetCollectibleTakenEffect() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("collectibleTakenEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCollectibleTakenVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("collectibleTakenVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRCollectible* GetCurrentCollectible() {
            static BNM::Field<::GlobalNamespace::GRCollectible*> _field = GetClass().GetField(O("currentCollectible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetDispenserExhaustedClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("dispenserExhaustedClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetDispenserExhaustedEffect() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("dispenserExhaustedEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDispenserExhaustedVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("dispenserExhaustedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFullyConsumedModel() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("fullyConsumedModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGetSpawnedCollectibleCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("getSpawnedCollectibleCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxDispenseCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxDispenseCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::Collider*>* GetOverlapColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapColliders"));
            return _field.Get();
        }
        ::Transform* GetSpawnLocation() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetStillDispensingModel() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("stillDispensingModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleCollectedTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("collectibleCollectedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleDispenseRequestTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("collectibleDispenseRequestTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleDispenseTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("collectibleDispenseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("collectibleLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectiblePrefab(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("collectiblePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleRespawnTimeMinutes(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("collectibleRespawnTimeMinutes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectiblesCollected(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("collectiblesCollected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectiblesDispensed(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("collectiblesDispensed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleTakenClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("collectibleTakenClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleTakenEffect(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("collectibleTakenEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollectibleTakenVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("collectibleTakenVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentCollectible(::GlobalNamespace::GRCollectible* value) {
            static BNM::Field<::GlobalNamespace::GRCollectible*> _field = GetClass().GetField(O("currentCollectible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenserExhaustedClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("dispenserExhaustedClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenserExhaustedEffect(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("dispenserExhaustedEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenserExhaustedVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dispenserExhaustedVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullyConsumedModel(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("fullyConsumedModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetSpawnedCollectibleCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("getSpawnedCollectibleCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDispenseCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxDispenseCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOverlapColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapColliders"));
            _field.Set(value);
        }
        void SetSpawnLocation(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStillDispensingModel(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("stillDispensingModel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_CollectibleAlreadySpawned() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CollectibleAlreadySpawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ReadyToDispenseNewCollectible() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ReadyToDispenseNewCollectible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetSpawnedCollectible(::GlobalNamespace::GRCollectible* collectible) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSpawnedCollectible"), {"collectible"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collectible);
        }
        void OnCollectibleConsumed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollectibleConsumed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChange(int64_t prevState, int64_t nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChange"), {"prevState", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, nextState);
        }
        void RequestDispenseCollectible() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDispenseCollectible"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
