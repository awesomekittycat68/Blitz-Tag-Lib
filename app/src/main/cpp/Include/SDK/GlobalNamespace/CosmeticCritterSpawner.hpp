#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritterHoldable.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterSpawner : ::GlobalNamespace::CosmeticCritterHoldable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterSpawner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CosmeticCritter* GetCachedCritter() {
            static BNM::Field<::GlobalNamespace::CosmeticCritter*> _field = GetClass().GetField(O("cachedCritter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::MonoType* GetCachedType() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("cachedType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCritterPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("critterPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxCritters() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextLocalSpawnTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextLocalSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumCritters() {
            static BNM::Field<int> _field = GetClass().GetField(O("numCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedCritter(::GlobalNamespace::CosmeticCritter* value) {
            static BNM::Field<::GlobalNamespace::CosmeticCritter*> _field = GetClass().GetField(O("cachedCritter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedType(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("cachedType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("critterPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxCritters(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextLocalSpawnTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextLocalSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumCritters(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::CosmeticCritter* GetCritter() {
            static BNM::Method<::GlobalNamespace::CosmeticCritter*> _m = GetClass().GetMethod(O("GetCritter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObject* GetCritterPrefab_1() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("GetCritterPrefab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::MonoType* GetCritterType() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetCritterType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDespawn(::GlobalNamespace::CosmeticCritter* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDespawn"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
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
        void OnSpawn(::GlobalNamespace::CosmeticCritter* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
        void SetRandomVariables(::GlobalNamespace::CosmeticCritter* critter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRandomVariables"), {"critter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter);
        }
    };
}
