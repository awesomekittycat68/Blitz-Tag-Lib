#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CrittersPool : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersPool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::CrittersPool* GetInstance() {
            static BNM::Field<::GlobalNamespace::CrittersPool*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>* GetEventEffects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>*> _field = GetClass().GetField(O("eventEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::CrittersPool* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::CrittersPool*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::Transform* GetPoolParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("poolParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::Structures::Mono::List<::GameObject*>*>* GetPools() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::Structures::Mono::List<::GameObject*>*>*> _field = GetClass().GetField(O("pools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEventEffects(::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>*> _field = GetClass().GetField(O("eventEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::CrittersPool* value) {
            static BNM::Field<::GlobalNamespace::CrittersPool*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetPoolParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("poolParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPools(::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::Structures::Mono::List<::GameObject*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::Structures::Mono::List<::GameObject*>*>*> _field = GetClass().GetField(O("pools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GameObject* GetInstance_1(::GameObject* prefab) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("GetInstance"), {"prefab"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(prefab);
        }
        static ::GameObject* GetPooled(::GameObject* prefab) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("GetPooled"), {"prefab"});
            return _m.Call(prefab);
        }
        static void Return(::GameObject* pooledGO) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Return"), {"pooledGO"});
            _m.Call(pooledGO);
        }
        void ReturnInstance(::GameObject* instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnInstance"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instance);
        }
        void SetupPools() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupPools"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
