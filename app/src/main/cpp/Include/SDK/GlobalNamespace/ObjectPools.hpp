#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ObjectPools : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ObjectPools");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ObjectPools* GetInstance() {
            static BNM::Field<::GlobalNamespace::ObjectPools*> field = GetClass().GetField("instance");
            return field.Get();
        }
        bool GetInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_initialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInitialized(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_initialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::GlobalNamespace::ObjectPools* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::ObjectPools*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SinglePool*>* GetLookUp() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SinglePool*>*> _field = GetClass().GetField(O("lookUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SinglePool*>* GetPools() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SinglePool*>*> _field = GetClass().GetField(O("pools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::ObjectPools* value) {
            static BNM::Field<::GlobalNamespace::ObjectPools*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLookUp(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SinglePool*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::SinglePool*>*> _field = GetClass().GetField(O("lookUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPools(::BNM::Structures::Mono::List<::GlobalNamespace::SinglePool*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SinglePool*>*> _field = GetClass().GetField(O("pools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Destroy(::GameObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Destroy"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        bool DoesPoolExist(::GameObject* obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesPoolExist"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        bool DoesPoolExist(int hash) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesPoolExist"), {"hash"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hash);
        }
        bool get_initialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_initialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SinglePool* GetPoolByHash(int hash) {
            static BNM::Method<::GlobalNamespace::SinglePool*> _m = GetClass().GetMethod(O("GetPoolByHash"), {"hash"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hash);
        }
        ::GlobalNamespace::SinglePool* GetPoolByObjectType(::GameObject* obj) {
            static BNM::Method<::GlobalNamespace::SinglePool*> _m = GetClass().GetMethod(O("GetPoolByObjectType"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        void InitializePools() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializePools"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GameObject* Instantiate(::GameObject* obj, bool setActive) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Instantiate"), {"obj", "setActive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj, setActive);
        }
        ::GameObject* Instantiate(int hash, bool setActive) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Instantiate"), {"hash", "setActive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hash, setActive);
        }
        ::GameObject* Instantiate(int hash, ::BNM::Structures::Unity::Vector3 position, bool setActive) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Instantiate"), {"hash", "position", "setActive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hash, position, setActive);
        }
        ::GameObject* Instantiate(::GameObject* obj, ::BNM::Structures::Unity::Vector3 position, bool setActive) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Instantiate"), {"obj", "position", "setActive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj, position, setActive);
        }
        ::GameObject* Instantiate(int hash, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, bool setActive) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Instantiate"), {"hash", "position", "rotation", "setActive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hash, position, rotation, setActive);
        }
        ::GameObject* Instantiate(::GameObject* obj, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, bool setActive) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Instantiate"), {"obj", "position", "rotation", "setActive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj, position, rotation, setActive);
        }
        ::GameObject* Instantiate(::GameObject* obj, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, float scale, bool setActive) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Instantiate"), {"obj", "position", "rotation", "scale", "setActive"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj, position, rotation, scale, setActive);
        }
        void set_initialized(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_initialized"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
