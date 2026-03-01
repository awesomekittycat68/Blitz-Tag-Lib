#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SinglePool : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SinglePool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* GetActivePool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GameObject*>*> _field = GetClass().GetField(O("activePool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAmountAllocatedToPool() {
            static BNM::Field<int> _field = GetClass().GetField(O("amountAllocatedToPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGameObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInactivePool() {
            static BNM::Field<void*> _field = GetClass().GetField(O("inactivePool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInitAmountToPool() {
            static BNM::Field<int> _field = GetClass().GetField(O("initAmountToPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetObjectToPool() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("objectToPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPooledObjects() {
            static BNM::Field<void*> _field = GetClass().GetField(O("pooledObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivePool(::BNM::Structures::Mono::Dictionary<int, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GameObject*>*> _field = GetClass().GetField(O("activePool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAmountAllocatedToPool(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("amountAllocatedToPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInactivePool(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("inactivePool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitAmountToPool(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("initAmountToPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectToPool(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("objectToPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPooledObjects(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("pooledObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Destroy(::GameObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Destroy"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        int GetActiveCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetActiveCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetInactiveCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetInactiveCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetTotalCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTotalCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize(::GameObject* gameObject_) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"), {"gameObject_"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameObject_);
        }
        ::GameObject* Instantiate(bool setActive) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Instantiate"), {"setActive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(setActive);
        }
        int PoolGUID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PoolGUID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PrivAllocPooledObjects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrivAllocPooledObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
