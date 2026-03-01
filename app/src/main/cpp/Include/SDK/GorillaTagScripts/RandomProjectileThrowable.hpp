#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct RandomProjectileThrowable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "RandomProjectileThrowable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetForceDestroy() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ForceDestroy"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetForceDestroy(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ForceDestroy"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetTimeEnabled() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_TimeEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTimeEnabled(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TimeEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GameObject* GetAlternativeProjectilePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("alternativeProjectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAutoDestroyAfterSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("autoDestroyAfterSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCurrentProjectile() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDestroyAfterRelease() {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyAfterRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDestroyOnTrigger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyOnTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMoveOverPassedLifeTime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("moveOverPassedLifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnDestroyed() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnDestroyed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnDestroyRandomProjectile() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnDestroyRandomProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetProjectilePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnChance() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetTriggerClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("triggerClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTriggerTag() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("triggerTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAlternativeProjectilePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("alternativeProjectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoDestroyAfterSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("autoDestroyAfterSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentProjectile(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("currentProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyAfterRelease(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyAfterRelease"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyOnTrigger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyOnTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveOverPassedLifeTime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("moveOverPassedLifeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDestroyed(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnDestroyed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDestroyRandomProjectile(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnDestroyRandomProjectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnChance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("triggerClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerTag(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("triggerTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DestroyProjectile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyProjectile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* DestroyProjectileCoroutine(float delay) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DestroyProjectileCoroutine"), {"delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(delay);
        }
        void ForceDestroyThrowable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceDestroyThrowable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_ForceDestroy() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ForceDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_TimeEnabled() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_TimeEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObject* GetProjectilePrefab_1() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("GetProjectilePrefab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void set_ForceDestroy(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ForceDestroy"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TimeEnabled(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TimeEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void UpdateProjectilePrefab() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateProjectilePrefab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
