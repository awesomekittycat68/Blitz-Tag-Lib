#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostReactorSpawnConfig_SpawnPointType.hpp"

namespace GlobalNamespace {
    struct GhostReactorSpawnConfig_EntitySpawnGroup : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorSpawnConfig").GetInnerClass("EntitySpawnGroup");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameEntity* GetEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBreakableItemSpawnConfig* GetRandomEntity() {
            static BNM::Field<::GlobalNamespace::GRBreakableItemSpawnConfig*> _field = GetClass().GetField(O("randomEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType GetSpawnPointType() {
            static BNM::Field<::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType> _field = GetClass().GetField(O("spawnPointType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomEntity(::GlobalNamespace::GRBreakableItemSpawnConfig* value) {
            static BNM::Field<::GlobalNamespace::GRBreakableItemSpawnConfig*> _field = GetClass().GetField(O("randomEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPointType(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType value) {
            static BNM::Field<::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType> _field = GetClass().GetField(O("spawnPointType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
