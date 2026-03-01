#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTagScripts_GhostReactor/GREnemyType.hpp"

namespace GlobalNamespace {
    struct GREnemyBossMoon_LootPhase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GREnemyBossMoon").GetInnerClass("LootPhase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_GhostReactor::GREnemyType GetEnemyType() {
            static BNM::Field<::GorillaTagScripts_GhostReactor::GREnemyType> _field = GetClass().GetField(O("enemyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBreakableItemSpawnConfig* GetLootTable() {
            static BNM::Field<::GlobalNamespace::GRBreakableItemSpawnConfig*> _field = GetClass().GetField(O("lootTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnemyType(::GorillaTagScripts_GhostReactor::GREnemyType value) {
            static BNM::Field<::GorillaTagScripts_GhostReactor::GREnemyType> _field = GetClass().GetField(O("enemyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLootTable(::GlobalNamespace::GRBreakableItemSpawnConfig* value) {
            static BNM::Field<::GlobalNamespace::GRBreakableItemSpawnConfig*> _field = GetClass().GetField(O("lootTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
