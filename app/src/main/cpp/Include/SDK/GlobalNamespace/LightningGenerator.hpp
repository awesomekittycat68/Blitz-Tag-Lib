#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LightningGenerator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LightningGenerator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetMaxConcurrentStrikes() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("maxConcurrentStrikes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LightningStrike* GetPrototype() {
            static BNM::Field<::GlobalNamespace::LightningStrike*> _field = GetClass().GetField(O("prototype"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::LightningStrike*>* GetStrikes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::LightningStrike*>*> _field = GetClass().GetField(O("strikes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxConcurrentStrikes(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("maxConcurrentStrikes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrototype(::GlobalNamespace::LightningStrike* value) {
            static BNM::Field<::GlobalNamespace::LightningStrike*> _field = GetClass().GetField(O("prototype"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrikes(::BNM::Structures::Mono::Array<::GlobalNamespace::LightningStrike*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::LightningStrike*>*> _field = GetClass().GetField(O("strikes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::LightningStrike* LightningDispatcher_RequestLightningStrike(::BNM::Structures::Unity::Vector3 t1, ::BNM::Structures::Unity::Vector3 t2) {
            static BNM::Method<::GlobalNamespace::LightningStrike*> _m = GetClass().GetMethod(O("LightningDispatcher_RequestLightningStrike"), {"t1", "t2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t1, t2);
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
    };
}
