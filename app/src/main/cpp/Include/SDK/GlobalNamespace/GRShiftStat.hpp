#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRShiftStatType.hpp"
#include "../GorillaTagScripts_GhostReactor/GREnemyType.hpp"

namespace GlobalNamespace {
    struct GRShiftStat : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRShiftStat");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<::GorillaTagScripts_GhostReactor::GREnemyType, int>* GetEnemyKills() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTagScripts_GhostReactor::GREnemyType, int>*> _field = GetClass().GetField(O("enemyKills"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRShiftStatType, int>* GetShiftStats() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRShiftStatType, int>*> _field = GetClass().GetField(O("shiftStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnemyKills(::BNM::Structures::Mono::Dictionary<::GorillaTagScripts_GhostReactor::GREnemyType, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTagScripts_GhostReactor::GREnemyType, int>*> _field = GetClass().GetField(O("enemyKills"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftStats(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRShiftStatType, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRShiftStatType, int>*> _field = GetClass().GetField(O("shiftStats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Deserialize(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deserialize"), {"reader"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reader);
        }
        void* get_EnemyKills() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_EnemyKills"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetShiftStat(::GlobalNamespace::GRShiftStatType stat) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetShiftStat"), {"stat"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stat);
        }
        void IncrementEnemyKills(::GorillaTagScripts_GhostReactor::GREnemyType type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementEnemyKills"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type);
        }
        void IncrementShiftStat(::GlobalNamespace::GRShiftStatType stat) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncrementShiftStat"), {"stat"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stat);
        }
        void ResetShiftStats() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetShiftStats"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Serialize(::BNM::IL2CPP::Il2CppObject* writer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"writer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer);
        }
        void SetShiftStat(::GlobalNamespace::GRShiftStatType stat, int newValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetShiftStat"), {"stat", "newValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stat, newValue);
        }
    };
}
