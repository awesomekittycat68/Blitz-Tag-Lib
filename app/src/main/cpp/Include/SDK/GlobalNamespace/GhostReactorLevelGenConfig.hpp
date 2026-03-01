#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GhostReactorLevelGeneratorV2_TreeLevelConfig.hpp"
#include "GREnemyCount.hpp"

namespace GlobalNamespace {
    struct GhostReactorLevelGenConfig : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorLevelGenConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Color GetAmbientLight() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("ambientLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoresRequired() {
            static BNM::Field<int> _field = GetClass().GetField(O("coresRequired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRDropTableOverrides* GetDropTableOverrides() {
            static BNM::Field<::GlobalNamespace::GRDropTableOverrides*> _field = GetClass().GetField(O("dropTableOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>* GetEnemyGlobalBonuses() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*> _field = GetClass().GetField(O("enemyGlobalBonuses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxPlayerDeaths() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxPlayerDeaths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyCount>* GetMinEnemyKills() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyCount>*> _field = GetClass().GetField(O("minEnemyKills"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSentientCoresRequired() {
            static BNM::Field<int> _field = GetClass().GetField(O("sentientCoresRequired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShiftBonus() {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftBonus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShiftDuration() {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* GetTreeLevels() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*> _field = GetClass().GetField(O("treeLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAmbientLight(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("ambientLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoresRequired(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("coresRequired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDropTableOverrides(::GlobalNamespace::GRDropTableOverrides* value) {
            static BNM::Field<::GlobalNamespace::GRDropTableOverrides*> _field = GetClass().GetField(O("dropTableOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnemyGlobalBonuses(::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRBonusEntry*>*> _field = GetClass().GetField(O("enemyGlobalBonuses"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxPlayerDeaths(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxPlayerDeaths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinEnemyKills(::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyCount>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GREnemyCount>*> _field = GetClass().GetField(O("minEnemyKills"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSentientCoresRequired(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sentientCoresRequired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftBonus(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftBonus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftDuration(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shiftDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeLevels(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*> _field = GetClass().GetField(O("treeLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
