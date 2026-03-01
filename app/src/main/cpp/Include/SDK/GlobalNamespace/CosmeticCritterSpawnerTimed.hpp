#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticCritterSpawnerIndependent.hpp"

namespace GlobalNamespace {
    struct CosmeticCritterSpawnerTimed : ::GlobalNamespace::CosmeticCritterSpawnerIndependent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritterSpawnerTimed");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetSpawnChance() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetSpawnIntervalMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("spawnIntervalMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSpawnChance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnIntervalMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("spawnIntervalMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CanSpawnLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanSpawnLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanSpawnRemote(double serverTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanSpawnRemote"), {"serverTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(serverTime);
        }
        ::GlobalNamespace::CallLimiter* CreateCallLimiter() {
            static BNM::Method<::GlobalNamespace::CallLimiter*> _m = GetClass().GetMethod(O("CreateCallLimiter"));
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
    };
}
