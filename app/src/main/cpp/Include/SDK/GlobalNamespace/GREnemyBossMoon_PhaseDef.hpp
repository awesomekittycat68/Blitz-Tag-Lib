#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GREnemyBossMoon_Behavior.hpp"

namespace GlobalNamespace {
    struct GREnemyBossMoon_PhaseDef : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GREnemyBossMoon").GetInnerClass("PhaseDef");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAllowConsecutiveCombos() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowConsecutiveCombos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>* GetAttacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>*> _field = GetClass().GetField(O("attacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAttacksBetweenSummons() {
            static BNM::Field<int> _field = GetClass().GetField(O("attacksBetweenSummons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetComboAttackChance() {
            static BNM::Field<float> _field = GetClass().GetField(O("comboAttackChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>* GetComboAttacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>*> _field = GetClass().GetField(O("comboAttacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxEnemiesForReveal() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxEnemiesForReveal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxSimultaneousEnemies() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxSimultaneousEnemies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinHP() {
            static BNM::Field<int> _field = GetClass().GetField(O("minHP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRandomSummonChance() {
            static BNM::Field<float> _field = GetClass().GetField(O("randomSummonChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRestAfterAttack() {
            static BNM::Field<bool> _field = GetClass().GetField(O("restAfterAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRetreatAfterSummon() {
            static BNM::Field<bool> _field = GetClass().GetField(O("retreatAfterSummon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRunawayAfterPhase() {
            static BNM::Field<bool> _field = GetClass().GetField(O("runawayAfterPhase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>* GetSummons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>*> _field = GetClass().GetField(O("summons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllowConsecutiveCombos(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowConsecutiveCombos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttacks(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>*> _field = GetClass().GetField(O("attacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttacksBetweenSummons(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attacksBetweenSummons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComboAttackChance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("comboAttackChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComboAttacks(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>*> _field = GetClass().GetField(O("comboAttacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxEnemiesForReveal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxEnemiesForReveal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSimultaneousEnemies(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxSimultaneousEnemies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinHP(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minHP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomSummonChance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("randomSummonChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestAfterAttack(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("restAfterAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetreatAfterSummon(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("retreatAfterSummon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRunawayAfterPhase(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("runawayAfterPhase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummons(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyBossMoon_Behavior>*> _field = GetClass().GetField(O("summons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
