#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CosmeticCritter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticCritter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::MonoType* GetCachedType() {
            static BNM::Method<::BNM::MonoType*> _method = GetClass().GetMethod(O("get_CachedType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCachedType(::BNM::MonoType* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CachedType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSeed() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Seed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSeed(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Seed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::CosmeticCritterSpawner* GetSpawner() {
            static BNM::Method<::GlobalNamespace::CosmeticCritterSpawner*> _method = GetClass().GetMethod(O("get_Spawner"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSpawner(::GlobalNamespace::CosmeticCritterSpawner* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Spawner"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetGlobalMaxCritters() {
            static BNM::Field<int> _field = GetClass().GetField(O("globalMaxCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLifetime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGlobalMaxCritters(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("globalMaxCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLifetime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lifetime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool Expired() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Expired"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::MonoType* get_CachedType() {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("get_CachedType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Seed() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Seed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::CosmeticCritterSpawner* get_Spawner() {
            static BNM::Method<::GlobalNamespace::CosmeticCritterSpawner*> _m = GetClass().GetMethod(O("get_Spawner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        double GetAliveTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("GetAliveTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetGlobalMaxCritters_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetGlobalMaxCritters"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSpawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_CachedType(::BNM::MonoType* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CachedType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Seed(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Seed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Spawner(::GlobalNamespace::CosmeticCritterSpawner* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Spawner"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetRandomVariables() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRandomVariables"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetSeedSpawnerTypeAndTime(int seed, ::GlobalNamespace::CosmeticCritterSpawner* spawner, ::BNM::MonoType* type, double time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSeedSpawnerTypeAndTime"), {"seed", "spawner", "type", "time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seed, spawner, type, time);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
