#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ParticleEffectsPool : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ParticleEffectsPool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<int64_t, int>* GetEffectToPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int64_t, int>*> _field = GetClass().GetField(O("_effectToPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::ParticleEffect*>* GetEffects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ParticleEffect*>*> _field = GetClass().GetField(O("effects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPoolSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("poolSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEffectToPool(::BNM::Structures::Mono::Dictionary<int64_t, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int64_t, int>*> _field = GetClass().GetField(O("_effectToPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEffects(::BNM::Structures::Mono::Array<::GlobalNamespace::ParticleEffect*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::ParticleEffect*>*> _field = GetClass().GetField(O("effects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoolSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("poolSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetPoolIndex(int64_t effectID) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPoolIndex"), {"effectID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(effectID);
        }
        void MoveToSceneWorldRoot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveToSceneWorldRoot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPoolAwake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPoolAwake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* PlayDelayed(int index, ::BNM::Structures::Unity::Vector3 worldPos, float delay) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PlayDelayed"), {"index", "worldPos", "delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index, worldPos, delay);
        }
        void PlayEffect(::GlobalNamespace::ParticleEffect* effect, ::BNM::Structures::Unity::Vector3 worldPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayEffect"), {"effect", "worldPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, worldPos);
        }
        void PlayEffect(int64_t effectID, ::BNM::Structures::Unity::Vector3 worldPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayEffect"), {"effectID", "worldPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effectID, worldPos);
        }
        void PlayEffect(int index, ::BNM::Structures::Unity::Vector3 worldPos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayEffect"), {"index", "worldPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, worldPos);
        }
        void PlayEffect(::GlobalNamespace::ParticleEffect* effect, ::BNM::Structures::Unity::Vector3 worldPos, float delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayEffect"), {"effect", "worldPos", "delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, worldPos, delay);
        }
        void PlayEffect(int64_t effectID, ::BNM::Structures::Unity::Vector3 worldPos, float delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayEffect"), {"effectID", "worldPos", "delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effectID, worldPos, delay);
        }
        void PlayEffect(int index, ::BNM::Structures::Unity::Vector3 worldPos, float delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayEffect"), {"index", "worldPos", "delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, worldPos, delay);
        }
        void Return(::GlobalNamespace::ParticleEffect* effect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Return"), {"effect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect);
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
