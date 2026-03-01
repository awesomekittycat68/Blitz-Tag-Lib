#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostReactorSpawnConfig_SpawnPointType.hpp"

namespace GlobalNamespace {
    struct GREntitySpawnPoint : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GREntitySpawnPoint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetApplyScale() {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPatrolPath* GetPatrolPath() {
            static BNM::Field<::GlobalNamespace::GRPatrolPath*> _field = GetClass().GetField(O("patrolPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType GetSpawnPointType() {
            static BNM::Field<::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType> _field = GetClass().GetField(O("spawnPointType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetApplyScale(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("applyScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPatrolPath(::GlobalNamespace::GRPatrolPath* value) {
            static BNM::Field<::GlobalNamespace::GRPatrolPath*> _field = GetClass().GetField(O("patrolPath"));
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
