#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostReactorSpawnConfig_SpawnPointType.hpp"

namespace GlobalNamespace {
    struct GhostReactorLevelSection_SpawnPointGroup : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorLevelSection").GetInnerClass("SpawnPointGroup");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetNeedsRandomization() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_NeedsRandomization"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNeedsRandomization(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_NeedsRandomization"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<int>* GetSpawnPointIndexes() {
            static BNM::Method<::BNM::Structures::Mono::List<int>*> _method = GetClass().GetMethod(O("get_SpawnPointIndexes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSpawnPointIndexes(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SpawnPointIndexes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetCurrentIndex_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNeedsRandomization_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("needsRandomization"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetSpawnPointIndexes_f() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("spawnPointIndexes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GREntitySpawnPoint*>* GetSpawnPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREntitySpawnPoint*>*> _field = GetClass().GetField(O("spawnPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType GetType_f() {
            static BNM::Field<::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentIndex_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNeedsRandomization_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("needsRandomization"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPointIndexes_fs(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("spawnPointIndexes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPoints(::BNM::Structures::Mono::List<::GlobalNamespace::GREntitySpawnPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREntitySpawnPoint*>*> _field = GetClass().GetField(O("spawnPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType value) {
            static BNM::Field<::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_CurrentIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_NeedsRandomization() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_NeedsRandomization"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<int>* get_SpawnPointIndexes() {
            static BNM::Method<::BNM::Structures::Mono::List<int>*> _m = GetClass().GetMethod(O("get_SpawnPointIndexes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GREntitySpawnPoint* GetNextSpawnPoint() {
            static BNM::Method<::GlobalNamespace::GREntitySpawnPoint*> _m = GetClass().GetMethod(O("GetNextSpawnPoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_CurrentIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_NeedsRandomization(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NeedsRandomization"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SpawnPointIndexes(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SpawnPointIndexes"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
